// Lean compiler output
// Module: Lean.Meta.EqnCompiler.CaseArraySizes
// Imports: Init Lean.Meta.Tactic.Assert Lean.Meta.EqnCompiler.CaseValues
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_caseArraySizes___closed__2;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_caseArraySizes___closed__3;
lean_object* l_Lean_Meta_introN(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__1;
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__2;
lean_object* l_Lean_Meta_mkForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Meta_caseArraySizes___closed__4;
lean_object* l_Lean_Meta_getMVarTag(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Literal_type___closed__3;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
extern lean_object* l_Lean_Name_inhabited;
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_substCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwOther___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__2;
lean_object* l_Lean_Meta_getArrayArgType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getArrayArgType___closed__3;
extern lean_object* l_Lean_Meta_caseValue___closed__2;
lean_object* l_Lean_Meta_getArrayArgType___closed__1;
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_clear(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_appendIndexAfter(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getArrayArgType___closed__2;
lean_object* l_Lean_Meta_mkArrayLit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__5;
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_3__introArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CaseArraySizesSubgoal_inhabited;
lean_object* l_Lean_Meta_FVarSubst_get(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__3;
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assertExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__2(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_caseValues(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_caseArraySizes___closed__1;
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__1;
lean_object* l_Lean_Meta_intro1(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toList___rarg(lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_CaseArraySizesSubgoal_inhabited___closed__1;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_arrayToExpr___rarg___closed__2;
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_caseArraySizes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__4;
lean_object* l_Lean_Meta_mkLt(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* _init_l_Lean_Meta_CaseArraySizesSubgoal_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l_Array_empty___closed__1;
x_4 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_CaseArraySizesSubgoal_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_CaseArraySizesSubgoal_inhabited___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_Meta_getArrayArgType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("array expected");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_getArrayArgType___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_getArrayArgType___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_getArrayArgType___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_getArrayArgType___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_getArrayArgType(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_Lean_Meta_inferType(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
lean_inc(x_2);
x_7 = l_Lean_Meta_whnfD(x_5, x_2, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = l_Lean_arrayToExpr___rarg___closed__2;
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Expr_isAppOfArity___main(x_9, x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_free_object(x_7);
lean_dec(x_9);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_1);
x_15 = l_Lean_indentExpr(x_14);
x_16 = l_Lean_Meta_getArrayArgType___closed__3;
x_17 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_box(0);
x_19 = l_Lean_Meta_throwOther___rarg(x_17, x_18, x_2, x_10);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; 
lean_dec(x_2);
lean_dec(x_1);
x_24 = l_Lean_Expr_appArg_x21(x_9);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_24);
return x_7;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_7, 0);
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_7);
x_27 = l_Lean_arrayToExpr___rarg___closed__2;
x_28 = lean_unsigned_to_nat(1u);
x_29 = l_Lean_Expr_isAppOfArity___main(x_25, x_27, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_25);
x_30 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_30, 0, x_1);
x_31 = l_Lean_indentExpr(x_30);
x_32 = l_Lean_Meta_getArrayArgType___closed__3;
x_33 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_box(0);
x_35 = l_Lean_Meta_throwOther___rarg(x_33, x_34, x_2, x_26);
lean_dec(x_2);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_38 = x_35;
} else {
 lean_dec_ref(x_35);
 x_38 = lean_box(0);
}
if (lean_is_scalar(x_38)) {
 x_39 = lean_alloc_ctor(1, 2, 0);
} else {
 x_39 = x_38;
}
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_2);
lean_dec(x_1);
x_40 = l_Lean_Expr_appArg_x21(x_25);
lean_dec(x_25);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_26);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_7);
if (x_42 == 0)
{
return x_7;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_7, 0);
x_44 = lean_ctor_get(x_7, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_7);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_4);
if (x_46 == 0)
{
return x_4;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_4, 0);
x_48 = lean_ctor_get(x_4, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_4);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("getLit");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_arrayToExpr___rarg___closed__2;
x_2 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_mkNatLit(x_2);
x_8 = l_Lean_mkNatLit(x_3);
lean_inc(x_5);
lean_inc(x_7);
x_9 = l_Lean_Meta_mkLt(x_7, x_8, x_5, x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_5);
x_12 = l_Lean_Meta_mkDecideProof(x_10, x_5, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
x_16 = lean_array_push(x_15, x_1);
x_17 = lean_array_push(x_16, x_7);
x_18 = lean_array_push(x_17, x_4);
x_19 = lean_array_push(x_18, x_13);
x_20 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__2;
x_21 = l_Lean_Meta_mkAppM(x_20, x_19, x_5, x_14);
lean_dec(x_19);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_9);
if (x_26 == 0)
{
return x_9;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_9, 0);
x_28 = lean_ctor_get(x_9, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_9);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_getMVarType(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_array_push(x_2, x_5);
x_12 = l_Lean_Meta_mkForall(x_11, x_9, x_6, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_array_push(x_3, x_4);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_array_push(x_3, x_4);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_4);
lean_dec(x_3);
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_8);
if (x_26 == 0)
{
return x_8;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_8, 0);
x_28 = lean_ctor_get(x_8, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_8);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_push(x_1, x_11);
lean_inc(x_12);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_15 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit(x_2, x_3, x_4, x_5, x_12, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_array_push(x_6, x_16);
x_19 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main(x_7, x_8, x_2, x_4, x_9, x_5, x_10, x_14, x_18, x_12, x_17);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("toArrayLitEq");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_arrayToExpr___rarg___closed__2;
x_2 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("hEqALit");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_nat_dec_lt(x_7, x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_5);
x_13 = l_Array_toList___rarg(x_8);
lean_inc(x_10);
x_14 = l_Lean_Meta_mkArrayLit(x_2, x_13, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_3);
x_17 = l_Lean_Meta_mkEq(x_3, x_15, x_10, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_mkNatLit(x_4);
x_21 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__3;
x_22 = lean_array_push(x_21, x_3);
x_23 = lean_array_push(x_22, x_20);
x_24 = lean_array_push(x_23, x_6);
x_25 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__2;
lean_inc(x_10);
x_26 = l_Lean_Meta_mkAppM(x_25, x_24, x_10, x_19);
lean_dec(x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___lambda__1), 7, 4);
lean_closure_set(x_29, 0, x_1);
lean_closure_set(x_29, 1, x_8);
lean_closure_set(x_29, 2, x_9);
lean_closure_set(x_29, 3, x_27);
x_30 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__5;
x_31 = 0;
x_32 = l_Lean_Meta_withLocalDecl___rarg(x_30, x_18, x_31, x_29, x_10, x_28);
return x_32;
}
else
{
uint8_t x_33; 
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_26);
if (x_33 == 0)
{
return x_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_26, 0);
x_35 = lean_ctor_get(x_26, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_26);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_17);
if (x_37 == 0)
{
return x_17;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_17, 0);
x_39 = lean_ctor_get(x_17, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_17);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_14);
if (x_41 == 0)
{
return x_14;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_14, 0);
x_43 = lean_ctor_get(x_14, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_14);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_45 = lean_unsigned_to_nat(1u);
x_46 = lean_nat_add(x_7, x_45);
lean_inc(x_46);
lean_inc(x_5);
x_47 = l_Lean_Name_appendIndexAfter(x_5, x_46);
lean_inc(x_2);
x_48 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___lambda__2), 13, 10);
lean_closure_set(x_48, 0, x_8);
lean_closure_set(x_48, 1, x_3);
lean_closure_set(x_48, 2, x_7);
lean_closure_set(x_48, 3, x_4);
lean_closure_set(x_48, 4, x_6);
lean_closure_set(x_48, 5, x_9);
lean_closure_set(x_48, 6, x_1);
lean_closure_set(x_48, 7, x_2);
lean_closure_set(x_48, 8, x_5);
lean_closure_set(x_48, 9, x_46);
x_49 = 0;
x_50 = l_Lean_Meta_withLocalDecl___rarg(x_47, x_2, x_49, x_48, x_10, x_11);
return x_50;
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_CaseArraySizes_3__introArrayLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_2);
x_8 = l_Lean_Meta_getArrayArgType(x_2, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_empty___closed__1;
lean_inc(x_6);
lean_inc(x_1);
x_13 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main(x_1, x_9, x_2, x_3, x_4, x_5, x_11, x_12, x_12, x_6, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_1);
x_18 = l_Lean_Meta_getMVarTag(x_1, x_6, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 2;
lean_inc(x_6);
x_22 = l_Lean_Meta_mkFreshExprMVar(x_16, x_19, x_21, x_6, x_20);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_23);
x_25 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_17, x_17, x_11, x_23);
lean_dec(x_17);
x_26 = l_Lean_Meta_assignExprMVar(x_1, x_25, x_6, x_24);
lean_dec(x_6);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = l_Lean_Expr_mvarId_x21(x_23);
lean_dec(x_23);
lean_ctor_set(x_26, 0, x_29);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = l_Lean_Expr_mvarId_x21(x_23);
lean_dec(x_23);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_23);
x_33 = !lean_is_exclusive(x_26);
if (x_33 == 0)
{
return x_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_26, 0);
x_35 = lean_ctor_get(x_26, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_26);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_18);
if (x_37 == 0)
{
return x_18;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_18, 0);
x_39 = lean_ctor_get(x_18, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_18);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_6);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_13);
if (x_41 == 0)
{
return x_13;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_13, 0);
x_43 = lean_ctor_get(x_13, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_13);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_8);
if (x_45 == 0)
{
return x_8;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_8, 0);
x_47 = lean_ctor_get(x_8, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_8);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = x_6;
x_10 = l_Lean_mkNatLit(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
x_13 = x_10;
x_14 = lean_array_fset(x_8, x_1, x_13);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_14;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = x_3;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_array_fget(x_3, x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_fset(x_3, x_2, x_8);
x_10 = x_7;
x_11 = l_Lean_Meta_FVarSubst_get(x_1, x_10);
x_12 = l_Lean_Expr_fvarId_x21(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_2, x_13);
x_15 = x_12;
x_16 = lean_array_fset(x_9, x_2, x_15);
lean_dec(x_2);
x_2 = x_14;
x_3 = x_16;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_3);
x_10 = l___private_Lean_Meta_EqnCompiler_CaseArraySizes_3__introArrayLit(x_1, x_2, x_3, x_4, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = 1;
x_15 = l_Lean_Meta_introN(x_11, x_3, x_13, x_14, x_8, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_Meta_intro1(x_19, x_14, x_8, x_17);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = l_Lean_Meta_clear(x_24, x_5, x_8, x_22);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 0;
x_29 = l_Lean_Meta_substCore(x_26, x_23, x_28, x_6, x_14, x_8, x_27);
lean_dec(x_8);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Array_empty___closed__1;
x_35 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_18);
lean_ctor_set(x_35, 2, x_34);
lean_ctor_set(x_35, 3, x_32);
lean_ctor_set(x_29, 0, x_35);
return x_29;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_36 = lean_ctor_get(x_29, 0);
x_37 = lean_ctor_get(x_29, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_29);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = l_Array_empty___closed__1;
x_41 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_18);
lean_ctor_set(x_41, 2, x_40);
lean_ctor_set(x_41, 3, x_38);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_37);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_dec(x_18);
x_43 = !lean_is_exclusive(x_29);
if (x_43 == 0)
{
return x_29;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_29, 0);
x_45 = lean_ctor_get(x_29, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_29);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_6);
x_47 = !lean_is_exclusive(x_25);
if (x_47 == 0)
{
return x_25;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_25, 0);
x_49 = lean_ctor_get(x_25, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_25);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_51 = !lean_is_exclusive(x_20);
if (x_51 == 0)
{
return x_20;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_20, 0);
x_53 = lean_ctor_get(x_20, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_20);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_55 = !lean_is_exclusive(x_15);
if (x_55 == 0)
{
return x_15;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_15, 0);
x_57 = lean_ctor_get(x_15, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_15);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_59 = !lean_is_exclusive(x_10);
if (x_59 == 0)
{
return x_10;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_10, 0);
x_61 = lean_ctor_get(x_10, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_10);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_7);
x_11 = lean_nat_dec_lt(x_6, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = x_7;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_14 = lean_array_fget(x_7, x_6);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_fset(x_7, x_6, x_15);
x_17 = x_14;
x_18 = lean_ctor_get(x_17, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_inc(x_5);
x_20 = l_Lean_Meta_FVarSubst_get(x_18, x_5);
x_21 = l_Lean_Expr_fvarId_x21(x_20);
lean_dec(x_20);
x_22 = lean_array_get_size(x_1);
x_23 = lean_nat_dec_lt(x_6, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
uint8_t x_24; uint8_t x_25; lean_object* x_26; 
lean_dec(x_21);
x_24 = 0;
x_25 = 1;
lean_inc(x_5);
x_26 = l_Lean_Meta_substCore(x_19, x_5, x_24, x_18, x_25, x_8, x_9);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_dec(x_17);
x_32 = x_31;
x_33 = l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__2(x_29, x_15, x_32);
x_34 = x_33;
x_35 = l_Array_empty___closed__1;
x_36 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_36, 2, x_34);
lean_ctor_set(x_36, 3, x_29);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_6, x_37);
x_39 = x_36;
x_40 = lean_array_fset(x_16, x_6, x_39);
lean_dec(x_6);
x_6 = x_38;
x_7 = x_40;
x_9 = x_28;
goto _start;
}
else
{
uint8_t x_42; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_26);
if (x_42 == 0)
{
return x_26;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_26, 0);
x_44 = lean_ctor_get(x_26, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_26);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_array_fget(x_1, x_6);
x_47 = lean_ctor_get(x_17, 1);
lean_inc(x_47);
lean_dec(x_17);
x_48 = l_Lean_Name_inhabited;
x_49 = lean_array_get(x_48, x_47, x_15);
lean_dec(x_47);
x_50 = l_Lean_Meta_clear(x_19, x_49, x_8, x_9);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
lean_inc(x_4);
x_53 = l_Lean_Meta_FVarSubst_get(x_18, x_4);
x_54 = l_Lean_Expr_fvarId_x21(x_53);
lean_dec(x_53);
x_55 = l_Lean_Meta_clear(x_51, x_54, x_8, x_52);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
lean_inc(x_21);
x_58 = l_Lean_mkFVar(x_21);
x_59 = lean_alloc_closure((void*)(l_Lean_Meta_mkEqSymm), 3, 1);
lean_closure_set(x_59, 0, x_58);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_56);
x_60 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__3___lambda__1), 9, 6);
lean_closure_set(x_60, 0, x_56);
lean_closure_set(x_60, 1, x_3);
lean_closure_set(x_60, 2, x_46);
lean_closure_set(x_60, 3, x_2);
lean_closure_set(x_60, 4, x_21);
lean_closure_set(x_60, 5, x_18);
x_61 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg), 4, 2);
lean_closure_set(x_61, 0, x_59);
lean_closure_set(x_61, 1, x_60);
x_62 = l_Lean_Meta_getMVarDecl(x_56, x_8, x_57);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
x_66 = lean_ctor_get(x_63, 4);
lean_inc(x_66);
lean_dec(x_63);
x_67 = l_Lean_Meta_withLocalContext___rarg(x_65, x_66, x_61, x_8, x_64);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_unsigned_to_nat(1u);
x_71 = lean_nat_add(x_6, x_70);
x_72 = x_68;
x_73 = lean_array_fset(x_16, x_6, x_72);
lean_dec(x_6);
x_6 = x_71;
x_7 = x_73;
x_9 = x_69;
goto _start;
}
else
{
uint8_t x_75; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_67);
if (x_75 == 0)
{
return x_67;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_67, 0);
x_77 = lean_ctor_get(x_67, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_67);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_61);
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_79 = !lean_is_exclusive(x_62);
if (x_79 == 0)
{
return x_62;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_62, 0);
x_81 = lean_ctor_get(x_62, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_62);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_46);
lean_dec(x_21);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_83 = !lean_is_exclusive(x_55);
if (x_83 == 0)
{
return x_55;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_55, 0);
x_85 = lean_ctor_get(x_55, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_55);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_46);
lean_dec(x_21);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_87 = !lean_is_exclusive(x_50);
if (x_87 == 0)
{
return x_50;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_50, 0);
x_89 = lean_ctor_get(x_50, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_50);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
}
}
}
lean_object* _init_l_Lean_Meta_caseArraySizes___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("size");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_caseArraySizes___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_arrayToExpr___rarg___closed__2;
x_2 = l_Lean_Meta_caseArraySizes___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_caseArraySizes___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aSize");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_caseArraySizes___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_caseArraySizes___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_caseArraySizes(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_mkFVar(x_2);
lean_inc(x_6);
lean_inc(x_8);
x_9 = l_Lean_Meta_getArrayArgType(x_8, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_8);
x_12 = lean_array_push(x_11, x_8);
x_13 = l_Lean_Meta_caseArraySizes___closed__2;
lean_inc(x_6);
x_14 = l_Lean_Meta_mkAppM(x_13, x_12, x_6, x_10);
lean_dec(x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Meta_caseArraySizes___closed__4;
x_18 = l_Lean_Literal_type___closed__3;
x_19 = l_Lean_Meta_caseValue___closed__2;
x_20 = l_Lean_Meta_assertExt(x_1, x_17, x_18, x_15, x_19, x_6, x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = l_Lean_Meta_intro1(x_21, x_23, x_6, x_22);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_Lean_Meta_intro1(x_28, x_23, x_6, x_26);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
lean_inc(x_3);
x_34 = x_3;
x_35 = lean_unsigned_to_nat(0u);
x_36 = l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__1(x_35, x_34);
x_37 = x_36;
lean_inc(x_27);
x_38 = l_Lean_Meta_caseValues(x_33, x_27, x_37, x_5, x_6, x_31);
lean_dec(x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = x_39;
x_42 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__3___boxed), 9, 7);
lean_closure_set(x_42, 0, x_3);
lean_closure_set(x_42, 1, x_4);
lean_closure_set(x_42, 2, x_8);
lean_closure_set(x_42, 3, x_27);
lean_closure_set(x_42, 4, x_32);
lean_closure_set(x_42, 5, x_35);
lean_closure_set(x_42, 6, x_41);
x_43 = x_42;
x_44 = lean_apply_2(x_43, x_6, x_40);
return x_44;
}
else
{
uint8_t x_45; 
lean_dec(x_32);
lean_dec(x_27);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_45 = !lean_is_exclusive(x_38);
if (x_45 == 0)
{
return x_38;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_38, 0);
x_47 = lean_ctor_get(x_38, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_38);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_27);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_29);
if (x_49 == 0)
{
return x_29;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_29, 0);
x_51 = lean_ctor_get(x_29, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_29);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_53 = !lean_is_exclusive(x_24);
if (x_53 == 0)
{
return x_24;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_24, 0);
x_55 = lean_ctor_get(x_24, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_24);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_57 = !lean_is_exclusive(x_20);
if (x_57 == 0)
{
return x_20;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_20, 0);
x_59 = lean_ctor_get(x_20, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_20);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_61 = !lean_is_exclusive(x_14);
if (x_61 == 0)
{
return x_14;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_14, 0);
x_63 = lean_ctor_get(x_14, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_14);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_9);
if (x_65 == 0)
{
return x_9;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_9, 0);
x_67 = lean_ctor_get(x_9, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_9);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__2(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_umapMAux___main___at_Lean_Meta_caseArraySizes___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Assert(lean_object*);
lean_object* initialize_Lean_Meta_EqnCompiler_CaseValues(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_EqnCompiler_CaseArraySizes(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assert(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_EqnCompiler_CaseValues(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_CaseArraySizesSubgoal_inhabited___closed__1 = _init_l_Lean_Meta_CaseArraySizesSubgoal_inhabited___closed__1();
lean_mark_persistent(l_Lean_Meta_CaseArraySizesSubgoal_inhabited___closed__1);
l_Lean_Meta_CaseArraySizesSubgoal_inhabited = _init_l_Lean_Meta_CaseArraySizesSubgoal_inhabited();
lean_mark_persistent(l_Lean_Meta_CaseArraySizesSubgoal_inhabited);
l_Lean_Meta_getArrayArgType___closed__1 = _init_l_Lean_Meta_getArrayArgType___closed__1();
lean_mark_persistent(l_Lean_Meta_getArrayArgType___closed__1);
l_Lean_Meta_getArrayArgType___closed__2 = _init_l_Lean_Meta_getArrayArgType___closed__2();
lean_mark_persistent(l_Lean_Meta_getArrayArgType___closed__2);
l_Lean_Meta_getArrayArgType___closed__3 = _init_l_Lean_Meta_getArrayArgType___closed__3();
lean_mark_persistent(l_Lean_Meta_getArrayArgType___closed__3);
l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__1);
l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_CaseArraySizes_1__mkArrayGetLit___closed__2);
l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__1);
l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__2);
l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__3);
l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__4 = _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__4();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__4);
l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__5 = _init_l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__5();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_CaseArraySizes_2__introArrayLitAux___main___closed__5);
l_Lean_Meta_caseArraySizes___closed__1 = _init_l_Lean_Meta_caseArraySizes___closed__1();
lean_mark_persistent(l_Lean_Meta_caseArraySizes___closed__1);
l_Lean_Meta_caseArraySizes___closed__2 = _init_l_Lean_Meta_caseArraySizes___closed__2();
lean_mark_persistent(l_Lean_Meta_caseArraySizes___closed__2);
l_Lean_Meta_caseArraySizes___closed__3 = _init_l_Lean_Meta_caseArraySizes___closed__3();
lean_mark_persistent(l_Lean_Meta_caseArraySizes___closed__3);
l_Lean_Meta_caseArraySizes___closed__4 = _init_l_Lean_Meta_caseArraySizes___closed__4();
lean_mark_persistent(l_Lean_Meta_caseArraySizes___closed__4);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif