/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Std.Data.HashMap
import Std.Data.PersistentHashMap
universes u v w w'

namespace Lean

open Std (HashMap PHashMap)

/- Staged map for implementing the Environment. The idea is to store
   imported entries into a hashtable and local entries into a persistent hashtable.

   Hypotheses:
   - The number of entries (i.e., declarations) coming from imported files is much bigger than
     the number of entries in the current file.
   - HashMap is faster than PersistentHashMap.
   - When we are reading imported files, we have exclusive access to the map, and efficient
     destructive updates are performed.

   Remarks:
   - We never remove declarations from the Environment. In principle, we could support
     deletion by using `(PHashMap α (Option β))` where the value `none` would indicate
     that an entry was "removed" from the hashtable.
   - We do not need additional bookkeeping for extracting the local entries.
-/
structure SMap (α : Type u) (β : Type v) [BEq α] [Hashable α] where
  stage₁ : Bool         := true
  map₁   : HashMap α β  := {}
  map₂   : PHashMap α β := {}

namespace SMap
variables {α : Type u} {β : Type v} [BEq α] [Hashable α]

instance : Inhabited (SMap α β) := ⟨{}⟩
def empty : SMap α β := {}

@[specialize] def insert : SMap α β → α → β → SMap α β
  | ⟨true, m₁, m₂⟩, k, v  => ⟨true, m₁.insert k v, m₂⟩
  | ⟨false, m₁, m₂⟩, k, v => ⟨false, m₁, m₂.insert k v⟩

@[specialize] def find? : SMap α β → α → Option β
  | ⟨true, m₁, _⟩, k   => m₁.find? k
  | ⟨false, m₁, m₂⟩, k => (m₂.find? k).orElse (m₁.find? k)

@[inline] def findD (m : SMap α β) (a : α) (b₀ : β) : β :=
  (m.find? a).getD b₀

@[inline] def find! [Inhabited β] (m : SMap α β) (a : α) : β :=
  match m.find? a with
  | some b => b
  | none   => panic! "key is not in the map"

@[specialize] def contains : SMap α β → α → Bool
  | ⟨true, m₁, _⟩, k   => m₁.contains k
  | ⟨false, m₁, m₂⟩, k => m₁.contains k || m₂.contains k

/- Similar to `find?`, but searches for result in the hashmap first.
   So, the result is correct only if we never "overwrite" `map₁` entries using `map₂`. -/
@[specialize] def find?' : SMap α β → α → Option β
  | ⟨true, m₁, _⟩, k   => m₁.find? k
  | ⟨false, m₁, m₂⟩, k => (m₁.find? k).orElse (m₂.find? k)

/- Move from stage 1 into stage 2. -/
def switch (m : SMap α β) : SMap α β :=
  if m.stage₁ then { m with stage₁ := false } else m

@[inline] def foldStage2 {σ : Type w} (f : σ → α → β → σ) (s : σ) (m : SMap α β) : σ :=
  m.map₂.foldl f s

def fold {σ : Type w} (f : σ → α → β → σ) (s : σ) (m : SMap α β) : σ :=
  m.map₂.foldl f $ m.map₁.fold f s

def size (m : SMap α β) : Nat :=
  m.map₁.size + m.map₂.size

def stageSizes (m : SMap α β) : Nat × Nat :=
  (m.map₁.size, m.map₂.size)

def numBuckets (m : SMap α β) : Nat :=
  m.map₁.numBuckets

end SMap
end Lean
