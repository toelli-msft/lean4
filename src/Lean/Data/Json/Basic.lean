/-
Copyright (c) 2019 Gabriel Ebner. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Gabriel Ebner, Marc Huisinga
-/
import Std.Data.RBTree
namespace Lean

-- mantissa * 10^-exponent
structure JsonNumber where
  mantissa : Int
  exponent : Nat

protected def JsonNumber.decEq : (a b : JsonNumber) → Decidable (a = b)
  | ⟨m1, e1⟩, ⟨m2, e2⟩ =>
    match decEq m1 m2 with
    | isTrue hm =>
      match decEq e1 e2 with
      | isTrue he  => isTrue $ by rw [hm, he]
      | isFalse he => isFalse (fun h => JsonNumber.noConfusion h (fun hm he2 => he he2))
    | isFalse hm => isFalse (fun h => JsonNumber.noConfusion h (fun hm2 he => hm hm2))

instance : DecidableEq JsonNumber := JsonNumber.decEq

namespace JsonNumber

protected def fromNat (n : Nat) : JsonNumber := ⟨n, 0⟩
protected def fromInt (n : Int) : JsonNumber := ⟨n, 0⟩

instance : Coe Nat JsonNumber := ⟨JsonNumber.fromNat⟩
instance : Coe Int JsonNumber := ⟨JsonNumber.fromInt⟩

private partial def countDigitsAux (n digits : Nat) : Nat :=
  if n ≤ 9 then
    digits
  else
    countDigitsAux (n/10) (digits+1)

private def countDigits (n : Nat) : Nat :=
  countDigitsAux n 1

protected def toString : JsonNumber → String
  | ⟨m, 0⟩ => m.repr
  | ⟨m, e⟩ =>
    let s : Bool := m ≥ 0
    let m := m.natAbs
    -- if there are too many zeroes after the decimal, we
    -- use exponents to compress the representation.
    -- this is mostly done for memory usage reasons:
    -- the size of the representation would otherwise
    -- grow exponentially in the value of exponent.
    let exp := 9 + (countDigits m : Int) - (e : Int)
    let exp := if exp < 0 then exp else 0
    let f := (10:Int) ^ (e - exp.natAbs)
    let left := m / f
    let right := (f : Int) + m % f
    let rightUntrimmed := right.repr.mkIterator.next.remainingToString
    (if s then "" else "-") ++
    left.repr ++ "." ++
    (rightUntrimmed.toSubstring.dropRightWhile (fun c => c = '0')).toString ++
    (if exp = 0 then "" else "e" ++ exp.repr)

-- shift a JsonNumber by a specified amount of places to the left
protected def shiftl : JsonNumber → Nat → JsonNumber
  -- if s ≤ e, then 10 ^ (s - e) = 1, and hence the mantissa remains unchanged.
  -- otherwise, the expression pads the mantissa with zeroes
  -- to accomodate for the remaining places to shift.
  | ⟨m, e⟩, s => ⟨m * (10 ^ (s - e) : Nat), e - s⟩

-- shift a JsonNumber by a specified amount of places to the right
protected def shiftr : JsonNumber → Nat → JsonNumber
  | ⟨m, e⟩, s => ⟨m, e + s⟩

instance : ToString JsonNumber := ⟨JsonNumber.toString⟩

instance : Repr JsonNumber where
  reprPrec | ⟨m, e⟩, _ => Std.Format.bracket "⟨" (repr m ++ "," ++ repr e) "⟩"

end JsonNumber

def strLt (a b : String) := Decidable.decide (a < b)

open Std (RBNode RBNode.leaf)

inductive Json where
  | null
  | bool (b : Bool)
  | num (n : JsonNumber)
  | str (s : String)
  | arr (elems : Array Json)
  -- uses RBNode instead of RBMap because RBMap is a def
  -- and thus currently cannot be used to define a type that
  -- is recursive in one of its parameters
  | obj (kvPairs : RBNode String (fun _ => Json))

namespace Json

-- HACK(Marc): temporary ugliness until we can use RBMap for JSON objects
def mkObj (o : List (String × Json)) : Json :=
  obj (o.foldr (fun ⟨k, v⟩ acc => acc.insert strLt k v) RBNode.leaf)

instance : Coe Nat Json := ⟨fun n => Json.num n⟩
instance : Coe Int Json := ⟨fun n => Json.num n⟩
instance : Coe String Json := ⟨Json.str⟩
instance : Coe Bool Json := ⟨Json.bool⟩

def getObj? : Json → Option (RBNode String (fun _ => Json))
  | obj kvs => kvs
  | _       => none

def getArr? : Json → Option (Array Json)
  | arr a => a
  | _     => none

def getStr? : Json → Option String
  | str s => some s
  | _     => none

def getNat? : Json → Option Nat
  | (n : Nat) => some n
  | _         => none

def getInt? : Json → Option Int
  | (i : Int) => some i
  | _         => none

def getBool? : Json → Option Bool
  | (b : Bool) => some b
  | _          => none

def getNum? : Json → Option JsonNumber
  | num n => n
  | _     => none

def getObjVal? : Json → String → Option Json
  | obj kvs, k => kvs.find strLt k
  | _      , _ => none

def getArrVal? : Json → Nat → Option Json
  | arr a, i => a.get? i
  | _    , _ => none

def getObjValD (j : Json) (k : String) : Json :=
  (j.getObjVal? k).getD null

inductive Structured where
  | arr (elems : Array Json)
  | obj (kvPairs : RBNode String (fun _ => Json))

instance : Coe (Array Json) Structured := ⟨Structured.arr⟩
instance : Coe (RBNode String (fun _ => Json)) Structured := ⟨Structured.obj⟩

end Json
end Lean
