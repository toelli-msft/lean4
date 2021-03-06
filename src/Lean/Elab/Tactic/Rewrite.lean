/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Meta.Tactic.Rewrite
import Lean.Meta.Tactic.Replace
import Lean.Elab.Tactic.Basic
import Lean.Elab.Tactic.ElabTerm
import Lean.Elab.Tactic.Location
namespace Lean.Elab.Tactic
open Meta

@[builtinMacro Lean.Parser.Tactic.rewriteSeq] def expandRewriteTactic : Macro := fun stx =>
  let seq := stx[1][1].getSepArgs
  let loc := stx[2]
  return mkNullNode <| seq.map fun rwRule => Syntax.node ``Parser.Tactic.rewrite #[mkAtomFrom rwRule "rewrite ", rwRule, loc]

@[builtinMacro Lean.Parser.Tactic.erewriteSeq] def expandERewriteTactic : Macro := fun stx =>
  let seq := stx[1][1].getSepArgs
  let loc := stx[2]
  return mkNullNode <| seq.map fun rwRule => Syntax.node ``Parser.Tactic.erewrite #[mkAtomFrom rwRule "erewrite ", rwRule, loc]

def rewriteTarget (stx : Syntax) (symm : Bool) (mode : TransparencyMode) : TacticM Unit := do
  let (g, gs) ← getMainGoal
  withMVarContext g do
    let e ← elabTerm stx none true
    let target ← instantiateMVars (← getMVarDecl g).type
    let r ← rewrite g target e symm (mode := mode)
    let g' ← replaceTargetEq g r.eNew r.eqProof
    setGoals (g' :: r.mvarIds ++ gs)

def rewriteLocalDeclFVarId (stx : Syntax) (symm : Bool) (fvarId : FVarId) (mode : TransparencyMode) : TacticM Unit := do
  let (g, gs) ← getMainGoal
  withMVarContext g do
    let e ← elabTerm stx none true
    let localDecl ← getLocalDecl fvarId
    let rwResult ← rewrite g localDecl.type e symm (mode := mode)
    let replaceResult ← replaceLocalDecl g fvarId rwResult.eNew rwResult.eqProof
    setGoals (replaceResult.mvarId :: rwResult.mvarIds ++ gs)

def rewriteLocalDecl (stx : Syntax) (symm : Bool) (userName : Name) (mode : TransparencyMode) : TacticM Unit :=
  withMainMVarContext do
    let localDecl ← getLocalDeclFromUserName userName
    rewriteLocalDeclFVarId stx symm localDecl.fvarId mode

def rewriteAll (stx : Syntax) (symm : Bool) (mode : TransparencyMode) : TacticM Unit := do
  let worked ← «try» $ rewriteTarget stx symm mode
  withMainMVarContext do
    let mut worked := worked
    -- We must traverse backwards because `replaceLocalDecl` uses the revert/intro idiom
    for fvarId in (← getLCtx).getFVarIds.reverse do
      worked := worked || (← «try» $ rewriteLocalDeclFVarId stx symm fvarId mode)
    unless worked do
      let (mvarId, _) ← getMainGoal
      throwTacticEx `rewrite mvarId "did not find instance of the pattern in the current goal"

def evalRewriteCore (mode : TransparencyMode) : Tactic := fun stx => do
  let rule := stx[1]
  let symm := !rule[0].isNone
  let term := rule[1]
  let loc  := expandOptLocation stx[2]
  match loc with
  | Location.target => rewriteTarget term symm mode
  | Location.localDecls userNames => userNames.forM (rewriteLocalDecl term symm · mode)
  | Location.wildcard => rewriteAll term symm mode

/-
```
def rwRule    := parser! optional (unicodeSymbol "←" "<-") >> termParser
def «rewrite» := parser! "rewrite" >> rwRule >> optional location
```
-/
@[builtinTactic Lean.Parser.Tactic.rewrite] def evalRewrite : Tactic :=
  evalRewriteCore TransparencyMode.instances

@[builtinTactic Lean.Parser.Tactic.erewrite] def evalERewrite : Tactic :=
  evalRewriteCore TransparencyMode.default

end Lean.Elab.Tactic
