/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Parser.Term
import Lean.Elab.Term

namespace Lean.Elab.Deriving
open Meta

def implicitBinderF := Parser.Term.implicitBinder
def instBinderF     := Parser.Term.instBinder
def explicitBinderF := Parser.Term.explicitBinder

def mkInductArgNames (indVal : InductiveVal) : TermElabM (Array Name) := do
  forallTelescopeReducing indVal.type fun xs _ => do
    let mut argNames := #[]
    for x in xs do
      let localDecl ← getLocalDecl x.fvarId!
      let paramName ← mkFreshUserName localDecl.userName.eraseMacroScopes
      argNames := argNames.push paramName
    pure argNames

def mkInductiveApp (indVal : InductiveVal) (argNames : Array Name) : TermElabM Syntax :=
  let f    := mkIdent indVal.name
  let args := argNames.map mkIdent
  `(@$f $args*)

def mkImplicitBinders (argNames : Array Name) : TermElabM (Array Syntax) :=
  argNames.mapM fun argName =>
    `(implicitBinderF| { $(mkIdent argName) })

def mkInstImplicitBinders (className : Name) (indVal : InductiveVal) (argNames : Array Name) : TermElabM (Array Syntax) :=
  forallBoundedTelescope indVal.type indVal.nparams fun xs _ => do
    let mut binders := #[]
    for i in [:xs.size] do
      try
        let x := xs[i]
        let c ← mkAppM className #[x]
        if (← isTypeCorrect c) then
          let argName := argNames[i]
          let binder ← `(instBinderF| [ $(mkIdent className):ident $(mkIdent argName):ident ])
          binders := binders.push binder
      catch _ =>
        pure ()
    return binders

structure Context where
  typeInfos   : Array InductiveVal
  auxFunNames : Array Name
  usePartial  : Bool

def mkContext (fnPrefix : String) (typeName : Name) : TermElabM Context := do
  let indVal ← getConstInfoInduct typeName
  let mut typeInfos := #[]
  for typeName in indVal.all do
    typeInfos ← typeInfos.push (← getConstInfoInduct typeName)
  let mut auxFunNames := #[]
  for typeName in indVal.all do
    match typeName.eraseMacroScopes with
    | Name.str _ t _ => auxFunNames := auxFunNames.push (← mkFreshUserName <| Name.mkSimple <| fnPrefix ++ t)
    | _              => auxFunNames := auxFunNames.push (← mkFreshUserName `instFn)
  trace[Elab.Deriving.beq]! "{auxFunNames}"
  let usePartial := indVal.isNested || typeInfos.size > 1
  return {
    typeInfos   := typeInfos
    auxFunNames := auxFunNames
    usePartial  := usePartial
  }

def mkLocalInstanceLetDecls (ctx : Context) (className : Name) (argNames : Array Name) : TermElabM (Array Syntax) := do
  let mut letDecls := #[]
  for i in [:ctx.typeInfos.size] do
    let indVal       := ctx.typeInfos[i]
    let auxFunName   := ctx.auxFunNames[i]
    let currArgNames ← mkInductArgNames indVal
    let numParams    := indVal.nparams
    let currIndices  := currArgNames[numParams:]
    let binders      ← mkImplicitBinders currIndices
    let argNamesNew  := argNames[:numParams] ++ currIndices
    let indType      ← mkInductiveApp indVal argNamesNew
    let type         ← `($(mkIdent className) $indType)
    let val          ← `(⟨$(mkIdent auxFunName)⟩)
    let instName     ← mkFreshUserName `localinst
    let letDecl      ← `(Parser.Term.letDecl| $(mkIdent instName):ident $binders:implicitBinder* : $type := $val)
    letDecls := letDecls.push letDecl
  return letDecls

def mkLet (letDecls : Array Syntax) (body : Syntax) : TermElabM Syntax :=
  letDecls.foldrM (init := body) fun letDecl body =>
    `(let $letDecl:letDecl; $body)

def mkInstanceCmds (ctx : Context) (className : Name) (typeNames : Array Name) (useAnonCtor := true) : TermElabM (Array Syntax) := do
  let mut instances := #[]
  for i in [:ctx.typeInfos.size] do
    let indVal       := ctx.typeInfos[i]
    if typeNames.contains indVal.name then
      let auxFunName   := ctx.auxFunNames[i]
      let argNames     ← mkInductArgNames indVal
      let binders      ← mkImplicitBinders argNames
      let binders      := binders ++ (← mkInstImplicitBinders className indVal argNames)
      let indType      ← mkInductiveApp indVal argNames
      let type         ← `($(mkIdent className) $indType)
      let val          ← if useAnonCtor then `(⟨$(mkIdent auxFunName)⟩) else pure <| mkIdent auxFunName
      let instCmd ← `(instance $binders:implicitBinder* : $type := $val)
      trace[Meta.debug]! "\n{instCmd}"
      instances := instances.push instCmd
  return instances

namespace Binary

structure Header where
  binders     : Array Syntax
  argNames    : Array Name
  target1Name : Name
  target2Name : Name

def mkHeader (ctx : Context) (className : Name) (indVal : InductiveVal) : TermElabM Header := do
  let argNames      ← mkInductArgNames indVal
  let binders       ← mkImplicitBinders argNames
  let targetType    ← mkInductiveApp indVal argNames
  let target1Name   ← mkFreshUserName `x
  let target2Name   ← mkFreshUserName `y
  let binders      := binders ++ (← mkInstImplicitBinders className indVal argNames)
  let target1Binder ← `(explicitBinderF| ($(mkIdent target1Name) : $targetType))
  let target2Binder ← `(explicitBinderF| ($(mkIdent target2Name) : $targetType))
  let binders      := binders ++ #[target1Binder, target2Binder]
  return {
    binders     := binders
    argNames    := argNames
    target1Name := target1Name
    target2Name := target2Name
  }

def mkDiscr (varName : Name) : TermElabM Syntax :=
 `(Parser.Term.matchDiscr| $(mkIdent varName):term)

def mkDiscrs (header : Header) (indVal : InductiveVal) : TermElabM (Array Syntax) := do
  let mut discrs := #[]
  -- add indices
  for argName in header.argNames[indVal.nparams:] do
    discrs := discrs.push (← mkDiscr argName)
  return discrs ++ #[← mkDiscr header.target1Name, ← mkDiscr header.target2Name]

end Binary

end Lean.Elab.Deriving
