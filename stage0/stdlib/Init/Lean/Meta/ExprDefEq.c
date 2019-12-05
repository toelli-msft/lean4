// Lean compiler output
// Module: Init.Lean.Meta.ExprDefEq
// Imports: Init.Lean.ProjFns Init.Lean.Meta.WHNF Init.Lean.Meta.InferType Init.Lean.Meta.FunInfo Init.Lean.Meta.LevelDefEq Init.Lean.Meta.Check Init.Lean.Meta.Offset
#include "runtime/lean.h"
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
lean_object* l_Lean_Meta_CheckAssignmentQuick_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_Lean_Meta_Check_2__checkLambdaLet___lambda__2___closed__1;
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_isRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_forall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_27__sameHeadSymbol___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1___closed__1;
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_11__visit(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__9;
lean_object* l_HashMapImp_find___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__2;
lean_object* l_unreachable_x21___rarg(lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_15__simpAssignmentArgAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Exception_toMessageData___closed__51;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_34__isSynthetic___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setIsExprDefEqAuxRef(lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_checkAssignment___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__6;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__4;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_30__unfoldReducibeDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_updateMData_x21___closed__2;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___closed__1;
lean_object* l_Lean_Meta_CheckAssignment_checkFVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_8__cache___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__17;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignment_check___main___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__1;
lean_object* l_Lean_mkMVar(lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Meta_isExprDefEqAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqBindingDomain___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__2;
lean_object* l_Lean_Meta_isProofQuick___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_20__isListLevelDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_9__visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_arrayExpr_toMessageData___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__1;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_checkFVar___at_Lean_Meta_CheckAssignment_check___main___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_Lean_MonadCache;
uint8_t l_Lean_LocalContext_containsFVar(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findFVar(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__3;
extern lean_object* l_Lean_Meta_isExprDefEq___closed__1;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_19__isDeltaCandidate___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_getStuckMVar___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__9;
lean_object* l___private_Init_Lean_Util_Trace_2__getResetTraces___at_Lean_Meta_check___spec__1___rarg(lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_check___closed__2;
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
extern lean_object* l_Lean_Meta_isLevelDefEqAux___main___closed__5;
lean_object* l_HashMapImp_moveEntries___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__3;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at_Lean_Meta_CheckAssignment_check___main___spec__2(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isReducible(lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__1;
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_WHNF_isQuotRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_7__findCached___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqAuxImpl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConst___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_isProjectionFn(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__3;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_31__unfoldNonProjFnDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_13__processAssignmentFOApproxAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_updateLambdaE_x21___closed__1;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__2;
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_find_decl(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_try___at_Lean_Meta_isExprDefEqAuxImpl___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__4;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2;
lean_object* l_Lean_Meta_CheckAssignment_check(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_checkAssignment___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__1;
lean_object* l_Lean_RecursorVal_getMajorIdx(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Exception_toMessageData___closed__4;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__12;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_HashMapImp_expand___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__3(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__7;
lean_object* l_Lean_Meta_isDefEqBindingDomain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_20__isListLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__1;
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_7__findCached(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_isTypeCorrect___closed__1;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Literal_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqAuxImpl___closed__1;
lean_object* l_Lean_Meta_isLevelDefEqAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__2;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqBindingDomain___main___at___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Expr_2__mkAppRangeAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
extern lean_object* l_Lean_formatEntry___closed__2;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_28__unfoldComparingHeadsDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_contains___at_Lean_Meta_CheckAssignment_check___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__11;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_25__unfold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticExprMVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_Meta_isExprDefEqAuxImpl___closed__2;
lean_object* l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_40__isDefEqWHNF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_coeOfArrayExpr___closed__2;
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_isRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_28__unfoldComparingHeadsDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__1;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_Lean_Expr_hash(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Meta_try___at_Lean_Meta_isExprDefEqAuxImpl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_checkMVar___at_Lean_Meta_CheckAssignment_check___main___spec__4(lean_object*, lean_object*, lean_object*);
uint8_t l_AssocList_contains___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__2(lean_object*, lean_object*);
extern lean_object* l_PersistentArray_empty___closed__3;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_6__isDefEqBinding___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_checkMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_mkAuxMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isEtaUnassignedMVar___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_assign_expr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isWellFormed___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__19;
lean_object* l___private_Init_Lean_Meta_LevelDefEq_12__restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_15__simpAssignmentArgAux___main(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_beq(uint8_t, uint8_t);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__3;
size_t lean_usize_modn(size_t, lean_object*);
extern lean_object* l_Lean_Expr_updateApp_x21___closed__1;
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_37__isLetFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isEtaUnassignedMVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_31__unfoldNonProjFnDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshId___rarg(lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_6__isDefEqBinding(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkHashMapImp___rarg(lean_object*);
lean_object* l___private_Init_Lean_Expr_3__getAppArgsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_replace___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqBindingDomain___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
lean_object* lean_expr_update_let(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__16;
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_hints(lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__5(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_Trace_1__addNode___at_Lean_Meta_check___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_contains___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__2___boxed(lean_object*, lean_object*);
uint8_t l_Array_contains___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_34__isSynthetic(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_updateProj_x21___closed__2;
lean_object* l_Lean_Meta_isDefEqBindingDomain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqBindingDomain___main___at___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_25__unfold(lean_object*);
lean_object* l_Lean_Meta_isListLevelDefEqAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__3;
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_35__isAssignable(lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__10;
lean_object* l_Lean_Meta_try___at_Lean_Meta_isExprDefEqAuxImpl___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_getStuckMVar___main___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__1;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__5;
lean_object* l_Lean_Meta_CheckAssignment_getMCtx(lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__1;
lean_object* l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_ParamInfo_inhabited;
lean_object* l_HashMapImp_insert___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__2;
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint8_t lean_expr_equal(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfUsingDefault(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_39__isDefEqProofIrrel(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_mk_decl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern uint8_t l_Bool_Inhabited;
lean_object* l_Lean_Meta_getConstAux(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_panic(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignmentQuick_check(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Bool_toLBool(uint8_t);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_find___main___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthPending(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignment_check___main___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_isExprDefEqAuxRef;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__1;
lean_object* l_Lean_Meta_CheckAssignmentQuick_check___main(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_check___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l___private_Init_Lean_Meta_ExprDefEq_27__sameHeadSymbol(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_16__simpAssignmentArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_36__etaEq___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_30__unfoldReducibeDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_26__unfoldBothDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_updateLet_x21___closed__1;
lean_object* lean_expr_update_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_40__isDefEqWHNF___at_Lean_Meta_isExprDefEqAuxImpl___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__2;
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__10;
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__3;
uint8_t l___private_Init_Lean_Meta_ExprDefEq_36__etaEq(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambda(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_33__isAssigned(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__6;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_Inhabited;
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_find___main___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__2(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_8__cache(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment___closed__1;
lean_object* l_Lean_Meta_checkAssignment___closed__1;
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_mkAuxMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__3;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_19__isDeltaCandidate(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkHashMap___at_Lean_Meta_checkAssignment___spec__2(lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_getMCtx___boxed(lean_object*);
lean_object* l_HashMapImp_find___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setIsExprDefEqAuxRef___closed__1;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_33__isAssigned___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Expr_9__etaExpandedAux___main(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__8;
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_check___main___closed__1;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_32__isDefEqDelta(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_38__isDefEqQuick(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_35__isAssignable___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__2;
lean_object* l_Lean_Meta_tryL(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isSyntheticExprMVar(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_app(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__5;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__14;
lean_object* l_Lean_Meta_CheckAssignmentQuick_check___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_38__isDefEqQuick___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_WHNF_isQuotRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_HasBeq;
lean_object* l_Lean_mkBVar(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__15;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__11;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__18;
extern lean_object* l_Lean_Expr_updateForallE_x21___closed__1;
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckAssignment_getMCtx___rarg(lean_object*);
uint8_t l_Lean_ReducibilityHints_lt(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_13__processAssignmentFOApproxAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__13;
lean_object* l_monadInhabited___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__2;
lean_object* _init_l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_mkBVar(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint64_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = (uint8_t)((x_5 << 24) >> 61);
x_9 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1___closed__1;
x_10 = l_Lean_mkApp(x_2, x_9);
x_11 = l_Lean_mkLambda(x_3, x_8, x_4, x_10);
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_25; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
x_15 = lean_ctor_get(x_7, 5);
x_16 = l_PersistentArray_empty___closed__3;
lean_inc(x_14);
lean_inc(x_13);
lean_ctor_set(x_7, 5, x_16);
lean_inc(x_6);
x_25 = l_Lean_Meta_isExprDefEqAux(x_1, x_11, x_6, x_7);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_13, x_14, x_15, x_6, x_28);
lean_dec(x_6);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
lean_ctor_set(x_29, 0, x_26);
return x_29;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_26);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_26);
x_34 = lean_ctor_get(x_25, 1);
lean_inc(x_34);
lean_dec(x_25);
x_35 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_6, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_unbox(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
x_39 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_13, x_14, x_15, x_6, x_38);
lean_dec(x_6);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
lean_ctor_set(x_39, 0, x_36);
return x_39;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_36);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
x_44 = !lean_is_exclusive(x_35);
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_35, 0);
lean_dec(x_45);
return x_35;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_35, 1);
lean_inc(x_46);
lean_dec(x_35);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_36);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_35, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_35, 1);
lean_inc(x_49);
lean_dec(x_35);
x_17 = x_48;
x_18 = x_49;
goto block_24;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_25, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_25, 1);
lean_inc(x_51);
lean_dec(x_25);
x_17 = x_50;
x_18 = x_51;
goto block_24;
}
block_24:
{
lean_object* x_19; uint8_t x_20; 
x_19 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_13, x_14, x_15, x_6, x_18);
lean_dec(x_6);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set_tag(x_19, 1);
lean_ctor_set(x_19, 0, x_17);
return x_19;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_67; 
x_52 = lean_ctor_get(x_7, 0);
x_53 = lean_ctor_get(x_7, 1);
x_54 = lean_ctor_get(x_7, 2);
x_55 = lean_ctor_get(x_7, 3);
x_56 = lean_ctor_get(x_7, 4);
x_57 = lean_ctor_get(x_7, 5);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_7);
x_58 = l_PersistentArray_empty___closed__3;
lean_inc(x_53);
lean_inc(x_52);
x_59 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_59, 0, x_52);
lean_ctor_set(x_59, 1, x_53);
lean_ctor_set(x_59, 2, x_54);
lean_ctor_set(x_59, 3, x_55);
lean_ctor_set(x_59, 4, x_56);
lean_ctor_set(x_59, 5, x_58);
lean_inc(x_6);
x_67 = l_Lean_Meta_isExprDefEqAux(x_1, x_11, x_6, x_59);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; uint8_t x_69; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_unbox(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_70 = lean_ctor_get(x_67, 1);
lean_inc(x_70);
lean_dec(x_67);
x_71 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_52, x_53, x_57, x_6, x_70);
lean_dec(x_6);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_73 = x_71;
} else {
 lean_dec_ref(x_71);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_68);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
else
{
lean_object* x_75; lean_object* x_76; 
lean_dec(x_68);
x_75 = lean_ctor_get(x_67, 1);
lean_inc(x_75);
lean_dec(x_67);
x_76 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_6, x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; uint8_t x_78; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_unbox(x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
lean_dec(x_76);
x_80 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_52, x_53, x_57, x_6, x_79);
lean_dec(x_6);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_82 = x_80;
} else {
 lean_dec_ref(x_80);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_77);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_57);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_6);
x_84 = lean_ctor_get(x_76, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_85 = x_76;
} else {
 lean_dec_ref(x_76);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_77);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_76, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_76, 1);
lean_inc(x_88);
lean_dec(x_76);
x_60 = x_87;
x_61 = x_88;
goto block_66;
}
}
}
else
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_67, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_67, 1);
lean_inc(x_90);
lean_dec(x_67);
x_60 = x_89;
x_61 = x_90;
goto block_66;
}
block_66:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_52, x_53, x_57, x_6, x_61);
lean_dec(x_6);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_64 = x_62;
} else {
 lean_dec_ref(x_62);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_64;
 lean_ctor_set_tag(x_65, 1);
}
lean_ctor_set(x_65, 0, x_60);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_Expr_isLambda(x_1);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = l_Lean_Expr_isLambda(x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_Lean_Meta_inferType(x_2, x_3, x_4);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_3);
x_13 = l_Lean_Meta_whnfUsingDefault(x_11, x_3, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 7)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint64_t x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
x_18 = lean_ctor_get_uint64(x_14, sizeof(void*)*3);
lean_dec(x_14);
x_19 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1(x_1, x_2, x_16, x_17, x_18, x_3, x_15);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 0);
lean_dec(x_21);
x_22 = 0;
x_23 = lean_box(x_22);
lean_ctor_set(x_13, 0, x_23);
return x_13;
}
else
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_13, 1);
lean_inc(x_24);
lean_dec(x_13);
x_25 = 0;
x_26 = lean_box(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_10);
if (x_32 == 0)
{
return x_10;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_10, 0);
x_34 = lean_ctor_get(x_10, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_10);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_36 = 0;
x_37 = lean_box(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_4);
return x_38;
}
}
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint64_t x_8; lean_object* x_9; 
x_8 = lean_unbox_uint64(x_5);
lean_dec(x_5);
x_9 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1(x_1, x_2, x_3, x_4, x_8, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Meta_isEtaUnassignedMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l___private_Init_Lean_Expr_9__etaExpandedAux___main(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_6 = 0;
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
if (lean_obj_tag(x_9) == 2)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_10);
x_11 = l_Lean_Meta_isReadOnlyOrSyntheticExprMVar(x_10, x_2, x_3);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_11, 1);
x_16 = lean_ctor_get(x_11, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
x_18 = lean_metavar_ctx_is_expr_assigned(x_17, x_10);
if (x_18 == 0)
{
uint8_t x_19; lean_object* x_20; 
lean_dec(x_12);
x_19 = 1;
x_20 = lean_box(x_19);
lean_ctor_set(x_11, 0, x_20);
return x_11;
}
else
{
return x_11;
}
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_dec(x_11);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
x_23 = lean_metavar_ctx_is_expr_assigned(x_22, x_10);
if (x_23 == 0)
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_12);
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_21);
return x_26;
}
else
{
lean_object* x_27; 
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_12);
lean_ctor_set(x_27, 1, x_21);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_12);
lean_dec(x_10);
x_28 = !lean_is_exclusive(x_11);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_11, 0);
lean_dec(x_29);
x_30 = 0;
x_31 = lean_box(x_30);
lean_ctor_set(x_11, 0, x_31);
return x_11;
}
else
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_11, 1);
lean_inc(x_32);
lean_dec(x_11);
x_33 = 0;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_10);
x_36 = !lean_is_exclusive(x_11);
if (x_36 == 0)
{
return x_11;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_11, 0);
x_38 = lean_ctor_get(x_11, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_11);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_9);
x_40 = 0;
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_3);
return x_42;
}
}
}
}
lean_object* l_Lean_Meta_isEtaUnassignedMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_isEtaUnassignedMVar(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_nat_dec_lt(x_4, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_4);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; uint8_t x_40; 
x_12 = lean_array_fget(x_1, x_4);
x_13 = l_Lean_Expr_Inhabited;
x_14 = lean_array_get(x_13, x_2, x_4);
x_15 = lean_array_get(x_13, x_3, x_4);
x_40 = lean_ctor_get_uint8(x_12, sizeof(void*)*1);
if (x_40 == 0)
{
uint8_t x_41; 
x_41 = lean_ctor_get_uint8(x_12, sizeof(void*)*1 + 1);
lean_dec(x_12);
if (x_41 == 0)
{
lean_object* x_42; 
lean_inc(x_6);
x_42 = l_Lean_Meta_isExprDefEqAux(x_14, x_15, x_6, x_7);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_unbox(x_43);
lean_dec(x_43);
if (x_44 == 0)
{
uint8_t x_45; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_42, 0);
lean_dec(x_46);
x_47 = lean_box(0);
lean_ctor_set(x_42, 0, x_47);
return x_42;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_42, 1);
lean_inc(x_48);
lean_dec(x_42);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_42, 1);
lean_inc(x_51);
lean_dec(x_42);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_nat_add(x_4, x_52);
lean_dec(x_4);
x_4 = x_53;
x_7 = x_51;
goto _start;
}
}
else
{
uint8_t x_55; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_55 = !lean_is_exclusive(x_42);
if (x_55 == 0)
{
return x_42;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_42, 0);
x_57 = lean_ctor_get(x_42, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_42);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
lean_object* x_59; 
lean_inc(x_14);
x_59 = l_Lean_Meta_isEtaUnassignedMVar(x_14, x_6, x_7);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_unbox(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_60);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
lean_inc(x_15);
x_63 = l_Lean_Meta_isEtaUnassignedMVar(x_15, x_6, x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_unbox(x_64);
lean_dec(x_64);
x_16 = x_66;
x_17 = x_65;
goto block_39;
}
else
{
uint8_t x_67; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_67 = !lean_is_exclusive(x_63);
if (x_67 == 0)
{
return x_63;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_63, 0);
x_69 = lean_ctor_get(x_63, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_63);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
lean_object* x_71; uint8_t x_72; 
x_71 = lean_ctor_get(x_59, 1);
lean_inc(x_71);
lean_dec(x_59);
x_72 = lean_unbox(x_60);
lean_dec(x_60);
x_16 = x_72;
x_17 = x_71;
goto block_39;
}
}
else
{
uint8_t x_73; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_73 = !lean_is_exclusive(x_59);
if (x_73 == 0)
{
return x_59;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_59, 0);
x_75 = lean_ctor_get(x_59, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_59);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
else
{
lean_object* x_77; 
lean_dec(x_12);
lean_inc(x_14);
x_77 = l_Lean_Meta_isEtaUnassignedMVar(x_14, x_6, x_7);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; uint8_t x_79; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_unbox(x_78);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
lean_dec(x_78);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
lean_dec(x_77);
lean_inc(x_15);
x_81 = l_Lean_Meta_isEtaUnassignedMVar(x_15, x_6, x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = lean_unbox(x_82);
lean_dec(x_82);
x_16 = x_84;
x_17 = x_83;
goto block_39;
}
else
{
uint8_t x_85; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_85 = !lean_is_exclusive(x_81);
if (x_85 == 0)
{
return x_81;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_81, 0);
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_81);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
lean_object* x_89; uint8_t x_90; 
x_89 = lean_ctor_get(x_77, 1);
lean_inc(x_89);
lean_dec(x_77);
x_90 = lean_unbox(x_78);
lean_dec(x_78);
x_16 = x_90;
x_17 = x_89;
goto block_39;
}
}
else
{
uint8_t x_91; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_91 = !lean_is_exclusive(x_77);
if (x_91 == 0)
{
return x_77;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_77, 0);
x_93 = lean_ctor_get(x_77, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_77);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
block_39:
{
if (x_16 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_14);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_4, x_18);
x_20 = lean_array_push(x_5, x_4);
x_4 = x_19;
x_5 = x_20;
x_7 = x_17;
goto _start;
}
else
{
lean_object* x_22; 
lean_inc(x_6);
x_22 = l_Lean_Meta_isExprDefEqAux(x_14, x_15, x_6, x_17);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
uint8_t x_25; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_22);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_22, 0);
lean_dec(x_26);
x_27 = lean_box(0);
lean_ctor_set(x_22, 0, x_27);
return x_22;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_dec(x_22);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_dec(x_22);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_4, x_32);
lean_dec(x_4);
x_4 = x_33;
x_7 = x_31;
goto _start;
}
}
else
{
uint8_t x_35; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_22);
if (x_35 == 0)
{
return x_22;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_22, 0);
x_37 = lean_ctor_get(x_22, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_22);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_nat_dec_lt(x_4, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
x_9 = 1;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_array_fget(x_1, x_4);
x_13 = lean_array_fget(x_2, x_4);
lean_inc(x_5);
x_14 = l_Lean_Meta_isExprDefEqAux(x_12, x_13, x_5, x_6);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_5);
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_14, 0);
lean_dec(x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_15);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_dec(x_14);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_4, x_22);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_23;
x_6 = x_21;
goto _start;
}
}
else
{
uint8_t x_25; 
lean_dec(x_5);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_14);
if (x_25 == 0)
{
return x_14;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_14, 0);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_14);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux___main(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux___main(x_1, x_2, lean_box(0), x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; uint8_t x_19; 
x_19 = lean_nat_dec_lt(x_8, x_7);
if (x_19 == 0)
{
uint8_t x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_9);
lean_dec(x_8);
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_10);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_95; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_23 = lean_array_fget(x_6, x_8);
x_24 = l_Lean_Expr_Inhabited;
x_25 = lean_array_get(x_24, x_1, x_23);
x_26 = lean_array_get(x_24, x_2, x_23);
x_109 = l_Lean_Meta_ParamInfo_inhabited;
x_110 = lean_array_get(x_109, x_3, x_23);
lean_dec(x_23);
x_111 = lean_ctor_get_uint8(x_110, sizeof(void*)*1 + 1);
lean_dec(x_110);
if (x_111 == 0)
{
if (x_5 == 0)
{
lean_object* x_112; 
x_112 = lean_box(0);
x_95 = x_112;
goto block_108;
}
else
{
x_27 = x_10;
goto block_94;
}
}
else
{
if (x_5 == 0)
{
x_27 = x_10;
goto block_94;
}
else
{
lean_object* x_113; 
x_113 = lean_box(0);
x_95 = x_113;
goto block_108;
}
}
block_94:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_9, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_9, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_9, 2);
lean_inc(x_30);
x_31 = !lean_is_exclusive(x_28);
if (x_31 == 0)
{
uint8_t x_32; uint8_t x_33; uint8_t x_34; 
x_32 = lean_ctor_get_uint8(x_28, sizeof(void*)*1 + 5);
x_33 = 1;
x_34 = l_Lean_Meta_TransparencyMode_lt(x_32, x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_28);
lean_ctor_set(x_35, 1, x_29);
lean_ctor_set(x_35, 2, x_30);
x_36 = l_Lean_Meta_isExprDefEqAux(x_25, x_26, x_35, x_27);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
lean_dec(x_37);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = 1;
x_11 = x_40;
x_12 = x_39;
goto block_18;
}
else
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = 0;
x_11 = x_42;
x_12 = x_41;
goto block_18;
}
}
else
{
uint8_t x_43; 
lean_dec(x_9);
lean_dec(x_8);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_ctor_set_uint8(x_28, sizeof(void*)*1 + 5, x_33);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_28);
lean_ctor_set(x_47, 1, x_29);
lean_ctor_set(x_47, 2, x_30);
x_48 = l_Lean_Meta_isExprDefEqAux(x_25, x_26, x_47, x_27);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_unbox(x_49);
lean_dec(x_49);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec(x_48);
x_52 = 1;
x_11 = x_52;
x_12 = x_51;
goto block_18;
}
else
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_ctor_get(x_48, 1);
lean_inc(x_53);
lean_dec(x_48);
x_54 = 0;
x_11 = x_54;
x_12 = x_53;
goto block_18;
}
}
else
{
uint8_t x_55; 
lean_dec(x_9);
lean_dec(x_8);
x_55 = !lean_is_exclusive(x_48);
if (x_55 == 0)
{
return x_48;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_48, 0);
x_57 = lean_ctor_get(x_48, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_48);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
else
{
lean_object* x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; uint8_t x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; 
x_59 = lean_ctor_get(x_28, 0);
x_60 = lean_ctor_get_uint8(x_28, sizeof(void*)*1);
x_61 = lean_ctor_get_uint8(x_28, sizeof(void*)*1 + 1);
x_62 = lean_ctor_get_uint8(x_28, sizeof(void*)*1 + 2);
x_63 = lean_ctor_get_uint8(x_28, sizeof(void*)*1 + 3);
x_64 = lean_ctor_get_uint8(x_28, sizeof(void*)*1 + 4);
x_65 = lean_ctor_get_uint8(x_28, sizeof(void*)*1 + 5);
lean_inc(x_59);
lean_dec(x_28);
x_66 = 1;
x_67 = l_Lean_Meta_TransparencyMode_lt(x_65, x_66);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_alloc_ctor(0, 1, 6);
lean_ctor_set(x_68, 0, x_59);
lean_ctor_set_uint8(x_68, sizeof(void*)*1, x_60);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 1, x_61);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 2, x_62);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 3, x_63);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 4, x_64);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 5, x_65);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_29);
lean_ctor_set(x_69, 2, x_30);
x_70 = l_Lean_Meta_isExprDefEqAux(x_25, x_26, x_69, x_27);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; uint8_t x_72; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_unbox(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; 
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_dec(x_70);
x_74 = 1;
x_11 = x_74;
x_12 = x_73;
goto block_18;
}
else
{
lean_object* x_75; uint8_t x_76; 
x_75 = lean_ctor_get(x_70, 1);
lean_inc(x_75);
lean_dec(x_70);
x_76 = 0;
x_11 = x_76;
x_12 = x_75;
goto block_18;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_9);
lean_dec(x_8);
x_77 = lean_ctor_get(x_70, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_70, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_79 = x_70;
} else {
 lean_dec_ref(x_70);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(1, 2, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_alloc_ctor(0, 1, 6);
lean_ctor_set(x_81, 0, x_59);
lean_ctor_set_uint8(x_81, sizeof(void*)*1, x_60);
lean_ctor_set_uint8(x_81, sizeof(void*)*1 + 1, x_61);
lean_ctor_set_uint8(x_81, sizeof(void*)*1 + 2, x_62);
lean_ctor_set_uint8(x_81, sizeof(void*)*1 + 3, x_63);
lean_ctor_set_uint8(x_81, sizeof(void*)*1 + 4, x_64);
lean_ctor_set_uint8(x_81, sizeof(void*)*1 + 5, x_66);
x_82 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_29);
lean_ctor_set(x_82, 2, x_30);
x_83 = l_Lean_Meta_isExprDefEqAux(x_25, x_26, x_82, x_27);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; uint8_t x_85; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_unbox(x_84);
lean_dec(x_84);
if (x_85 == 0)
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
lean_dec(x_83);
x_87 = 1;
x_11 = x_87;
x_12 = x_86;
goto block_18;
}
else
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_ctor_get(x_83, 1);
lean_inc(x_88);
lean_dec(x_83);
x_89 = 0;
x_11 = x_89;
x_12 = x_88;
goto block_18;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_9);
lean_dec(x_8);
x_90 = lean_ctor_get(x_83, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_83, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_92 = x_83;
} else {
 lean_dec_ref(x_83);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
}
block_108:
{
lean_object* x_96; 
lean_dec(x_95);
lean_inc(x_9);
lean_inc(x_25);
x_96 = l_Lean_Meta_synthPending(x_25, x_9, x_10);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
lean_dec(x_96);
lean_inc(x_9);
lean_inc(x_26);
x_98 = l_Lean_Meta_synthPending(x_26, x_9, x_97);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; 
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
lean_dec(x_98);
x_27 = x_99;
goto block_94;
}
else
{
uint8_t x_100; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_9);
lean_dec(x_8);
x_100 = !lean_is_exclusive(x_98);
if (x_100 == 0)
{
return x_98;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_98, 0);
x_102 = lean_ctor_get(x_98, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_98);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_9);
lean_dec(x_8);
x_104 = !lean_is_exclusive(x_96);
if (x_104 == 0)
{
return x_96;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_96, 0);
x_106 = lean_ctor_get(x_96, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_96);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
}
block_18:
{
if (x_11 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_8, x_13);
lean_dec(x_8);
x_8 = x_14;
x_10 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_9);
lean_dec(x_8);
x_16 = lean_box(x_11);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_array_get_size(x_3);
x_8 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
else
{
lean_object* x_12; 
lean_inc(x_4);
x_12 = l_Lean_Meta_getFunInfoNArgs(x_1, x_6, x_4, x_5);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Array_empty___closed__1;
lean_inc(x_4);
x_18 = l___private_Init_Lean_Meta_ExprDefEq_2__isDefEqArgsFirstPass___main(x_15, x_2, x_3, x_16, x_17, x_4, x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_15);
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
x_22 = 0;
x_23 = lean_box(x_22);
lean_ctor_set(x_18, 0, x_23);
return x_18;
}
else
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = 0;
x_26 = lean_box(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_dec(x_18);
x_29 = lean_ctor_get(x_19, 0);
lean_inc(x_29);
lean_dec(x_19);
x_30 = lean_array_get_size(x_15);
lean_inc(x_4);
x_31 = l___private_Init_Lean_Meta_ExprDefEq_3__isDefEqArgsAux___main(x_2, x_3, lean_box(0), x_30, x_4, x_28);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
if (x_33 == 0)
{
uint8_t x_34; 
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_4);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_31, 0);
lean_dec(x_35);
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_dec(x_31);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_dec(x_31);
x_39 = lean_array_get_size(x_29);
x_40 = lean_unbox(x_32);
lean_dec(x_32);
x_41 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs___spec__1(x_2, x_3, x_15, x_29, x_40, x_29, x_39, x_16, x_4, x_38);
lean_dec(x_39);
lean_dec(x_29);
lean_dec(x_15);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_41);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_41, 0);
lean_dec(x_45);
x_46 = 1;
x_47 = lean_box(x_46);
lean_ctor_set(x_41, 0, x_47);
return x_41;
}
else
{
lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_dec(x_41);
x_49 = 1;
x_50 = lean_box(x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_48);
return x_51;
}
}
else
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_41);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_41, 0);
lean_dec(x_53);
x_54 = 0;
x_55 = lean_box(x_54);
lean_ctor_set(x_41, 0, x_55);
return x_41;
}
else
{
lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_41, 1);
lean_inc(x_56);
lean_dec(x_41);
x_57 = 0;
x_58 = lean_box(x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
return x_59;
}
}
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_41);
if (x_60 == 0)
{
return x_41;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_41, 0);
x_62 = lean_ctor_get(x_41, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_41);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_4);
x_64 = !lean_is_exclusive(x_31);
if (x_64 == 0)
{
return x_31;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_31, 0);
x_66 = lean_ctor_get(x_31, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_31);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_15);
lean_dec(x_4);
x_68 = !lean_is_exclusive(x_18);
if (x_68 == 0)
{
return x_18;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_18, 0);
x_70 = lean_ctor_get(x_18, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_18);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_4);
x_72 = !lean_is_exclusive(x_12);
if (x_72 == 0)
{
return x_12;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_12, 0);
x_74 = lean_ctor_get(x_12, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_12);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_5);
lean_dec(x_5);
x_12 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs___spec__1(x_1, x_2, x_3, x_4, x_11, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Meta_isDefEqBindingDomain___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_nat_dec_lt(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_apply_2(x_4, x_5, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_fget(x_1, x_3);
lean_inc(x_5);
x_11 = l_Lean_Meta_getFVarLocalDecl(x_10, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_LocalDecl_type(x_12);
lean_dec(x_12);
x_15 = l_Lean_Expr_Inhabited;
x_16 = lean_array_get(x_15, x_2, x_3);
lean_inc(x_5);
lean_inc(x_14);
x_17 = l_Lean_Meta_isExprDefEqAux(x_14, x_16, x_5, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
if (x_19 == 0)
{
uint8_t x_20; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_17, 0);
lean_dec(x_21);
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_18);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_dec(x_17);
lean_inc(x_5);
x_25 = l_Lean_Meta_isClass(x_14, x_5, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_10);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_3, x_28);
lean_dec(x_3);
x_3 = x_29;
x_6 = x_27;
goto _start;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_3, x_33);
lean_dec(x_3);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_31, 2);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_36, 2);
x_39 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
lean_ctor_set(x_36, 2, x_39);
x_40 = !lean_is_exclusive(x_5);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_5, 2);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_32);
lean_ctor_set(x_42, 1, x_10);
x_43 = lean_array_push(x_41, x_42);
lean_ctor_set(x_5, 2, x_43);
x_44 = l_Lean_Meta_isDefEqBindingDomain___main(x_1, x_2, x_34, x_4, x_5, x_31);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_45, 2);
lean_inc(x_46);
x_47 = !lean_is_exclusive(x_44);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_44, 1);
lean_dec(x_48);
x_49 = !lean_is_exclusive(x_45);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
x_50 = lean_ctor_get(x_45, 2);
lean_dec(x_50);
x_51 = !lean_is_exclusive(x_46);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_46, 2);
lean_dec(x_52);
lean_ctor_set(x_46, 2, x_38);
return x_44;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_46, 0);
x_54 = lean_ctor_get(x_46, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_46);
x_55 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_38);
lean_ctor_set(x_45, 2, x_55);
return x_44;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_56 = lean_ctor_get(x_45, 0);
x_57 = lean_ctor_get(x_45, 1);
x_58 = lean_ctor_get(x_45, 3);
x_59 = lean_ctor_get(x_45, 4);
x_60 = lean_ctor_get(x_45, 5);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_45);
x_61 = lean_ctor_get(x_46, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_46, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 x_63 = x_46;
} else {
 lean_dec_ref(x_46);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 3, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
lean_ctor_set(x_64, 2, x_38);
x_65 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_65, 0, x_56);
lean_ctor_set(x_65, 1, x_57);
lean_ctor_set(x_65, 2, x_64);
lean_ctor_set(x_65, 3, x_58);
lean_ctor_set(x_65, 4, x_59);
lean_ctor_set(x_65, 5, x_60);
lean_ctor_set(x_44, 1, x_65);
return x_44;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_66 = lean_ctor_get(x_44, 0);
lean_inc(x_66);
lean_dec(x_44);
x_67 = lean_ctor_get(x_45, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_45, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_45, 3);
lean_inc(x_69);
x_70 = lean_ctor_get(x_45, 4);
lean_inc(x_70);
x_71 = lean_ctor_get(x_45, 5);
lean_inc(x_71);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 lean_ctor_release(x_45, 2);
 lean_ctor_release(x_45, 3);
 lean_ctor_release(x_45, 4);
 lean_ctor_release(x_45, 5);
 x_72 = x_45;
} else {
 lean_dec_ref(x_45);
 x_72 = lean_box(0);
}
x_73 = lean_ctor_get(x_46, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_46, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 x_75 = x_46;
} else {
 lean_dec_ref(x_46);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(0, 3, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
lean_ctor_set(x_76, 2, x_38);
if (lean_is_scalar(x_72)) {
 x_77 = lean_alloc_ctor(0, 6, 0);
} else {
 x_77 = x_72;
}
lean_ctor_set(x_77, 0, x_67);
lean_ctor_set(x_77, 1, x_68);
lean_ctor_set(x_77, 2, x_76);
lean_ctor_set(x_77, 3, x_69);
lean_ctor_set(x_77, 4, x_70);
lean_ctor_set(x_77, 5, x_71);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_66);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_79 = lean_ctor_get(x_44, 1);
lean_inc(x_79);
x_80 = lean_ctor_get(x_79, 2);
lean_inc(x_80);
x_81 = !lean_is_exclusive(x_44);
if (x_81 == 0)
{
lean_object* x_82; uint8_t x_83; 
x_82 = lean_ctor_get(x_44, 1);
lean_dec(x_82);
x_83 = !lean_is_exclusive(x_79);
if (x_83 == 0)
{
lean_object* x_84; uint8_t x_85; 
x_84 = lean_ctor_get(x_79, 2);
lean_dec(x_84);
x_85 = !lean_is_exclusive(x_80);
if (x_85 == 0)
{
lean_object* x_86; 
x_86 = lean_ctor_get(x_80, 2);
lean_dec(x_86);
lean_ctor_set(x_80, 2, x_38);
return x_44;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_80, 0);
x_88 = lean_ctor_get(x_80, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_80);
x_89 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
lean_ctor_set(x_89, 2, x_38);
lean_ctor_set(x_79, 2, x_89);
return x_44;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_90 = lean_ctor_get(x_79, 0);
x_91 = lean_ctor_get(x_79, 1);
x_92 = lean_ctor_get(x_79, 3);
x_93 = lean_ctor_get(x_79, 4);
x_94 = lean_ctor_get(x_79, 5);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_79);
x_95 = lean_ctor_get(x_80, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_80, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 lean_ctor_release(x_80, 2);
 x_97 = x_80;
} else {
 lean_dec_ref(x_80);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(0, 3, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
lean_ctor_set(x_98, 2, x_38);
x_99 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_99, 0, x_90);
lean_ctor_set(x_99, 1, x_91);
lean_ctor_set(x_99, 2, x_98);
lean_ctor_set(x_99, 3, x_92);
lean_ctor_set(x_99, 4, x_93);
lean_ctor_set(x_99, 5, x_94);
lean_ctor_set(x_44, 1, x_99);
return x_44;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_100 = lean_ctor_get(x_44, 0);
lean_inc(x_100);
lean_dec(x_44);
x_101 = lean_ctor_get(x_79, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_79, 1);
lean_inc(x_102);
x_103 = lean_ctor_get(x_79, 3);
lean_inc(x_103);
x_104 = lean_ctor_get(x_79, 4);
lean_inc(x_104);
x_105 = lean_ctor_get(x_79, 5);
lean_inc(x_105);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 lean_ctor_release(x_79, 2);
 lean_ctor_release(x_79, 3);
 lean_ctor_release(x_79, 4);
 lean_ctor_release(x_79, 5);
 x_106 = x_79;
} else {
 lean_dec_ref(x_79);
 x_106 = lean_box(0);
}
x_107 = lean_ctor_get(x_80, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_80, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 lean_ctor_release(x_80, 2);
 x_109 = x_80;
} else {
 lean_dec_ref(x_80);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(0, 3, 0);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_107);
lean_ctor_set(x_110, 1, x_108);
lean_ctor_set(x_110, 2, x_38);
if (lean_is_scalar(x_106)) {
 x_111 = lean_alloc_ctor(0, 6, 0);
} else {
 x_111 = x_106;
}
lean_ctor_set(x_111, 0, x_101);
lean_ctor_set(x_111, 1, x_102);
lean_ctor_set(x_111, 2, x_110);
lean_ctor_set(x_111, 3, x_103);
lean_ctor_set(x_111, 4, x_104);
lean_ctor_set(x_111, 5, x_105);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_100);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_113 = lean_ctor_get(x_5, 0);
x_114 = lean_ctor_get(x_5, 1);
x_115 = lean_ctor_get(x_5, 2);
lean_inc(x_115);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_5);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_32);
lean_ctor_set(x_116, 1, x_10);
x_117 = lean_array_push(x_115, x_116);
x_118 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_118, 0, x_113);
lean_ctor_set(x_118, 1, x_114);
lean_ctor_set(x_118, 2, x_117);
x_119 = l_Lean_Meta_isDefEqBindingDomain___main(x_1, x_2, x_34, x_4, x_118, x_31);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_120, 2);
lean_inc(x_121);
x_122 = lean_ctor_get(x_119, 0);
lean_inc(x_122);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_123 = x_119;
} else {
 lean_dec_ref(x_119);
 x_123 = lean_box(0);
}
x_124 = lean_ctor_get(x_120, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_120, 1);
lean_inc(x_125);
x_126 = lean_ctor_get(x_120, 3);
lean_inc(x_126);
x_127 = lean_ctor_get(x_120, 4);
lean_inc(x_127);
x_128 = lean_ctor_get(x_120, 5);
lean_inc(x_128);
if (lean_is_exclusive(x_120)) {
 lean_ctor_release(x_120, 0);
 lean_ctor_release(x_120, 1);
 lean_ctor_release(x_120, 2);
 lean_ctor_release(x_120, 3);
 lean_ctor_release(x_120, 4);
 lean_ctor_release(x_120, 5);
 x_129 = x_120;
} else {
 lean_dec_ref(x_120);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_121, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_121, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 lean_ctor_release(x_121, 2);
 x_132 = x_121;
} else {
 lean_dec_ref(x_121);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(0, 3, 0);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_131);
lean_ctor_set(x_133, 2, x_38);
if (lean_is_scalar(x_129)) {
 x_134 = lean_alloc_ctor(0, 6, 0);
} else {
 x_134 = x_129;
}
lean_ctor_set(x_134, 0, x_124);
lean_ctor_set(x_134, 1, x_125);
lean_ctor_set(x_134, 2, x_133);
lean_ctor_set(x_134, 3, x_126);
lean_ctor_set(x_134, 4, x_127);
lean_ctor_set(x_134, 5, x_128);
if (lean_is_scalar(x_123)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_123;
}
lean_ctor_set(x_135, 0, x_122);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_136 = lean_ctor_get(x_119, 1);
lean_inc(x_136);
x_137 = lean_ctor_get(x_136, 2);
lean_inc(x_137);
x_138 = lean_ctor_get(x_119, 0);
lean_inc(x_138);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_139 = x_119;
} else {
 lean_dec_ref(x_119);
 x_139 = lean_box(0);
}
x_140 = lean_ctor_get(x_136, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_136, 1);
lean_inc(x_141);
x_142 = lean_ctor_get(x_136, 3);
lean_inc(x_142);
x_143 = lean_ctor_get(x_136, 4);
lean_inc(x_143);
x_144 = lean_ctor_get(x_136, 5);
lean_inc(x_144);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 lean_ctor_release(x_136, 2);
 lean_ctor_release(x_136, 3);
 lean_ctor_release(x_136, 4);
 lean_ctor_release(x_136, 5);
 x_145 = x_136;
} else {
 lean_dec_ref(x_136);
 x_145 = lean_box(0);
}
x_146 = lean_ctor_get(x_137, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_137, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 lean_ctor_release(x_137, 2);
 x_148 = x_137;
} else {
 lean_dec_ref(x_137);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(0, 3, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_147);
lean_ctor_set(x_149, 2, x_38);
if (lean_is_scalar(x_145)) {
 x_150 = lean_alloc_ctor(0, 6, 0);
} else {
 x_150 = x_145;
}
lean_ctor_set(x_150, 0, x_140);
lean_ctor_set(x_150, 1, x_141);
lean_ctor_set(x_150, 2, x_149);
lean_ctor_set(x_150, 3, x_142);
lean_ctor_set(x_150, 4, x_143);
lean_ctor_set(x_150, 5, x_144);
if (lean_is_scalar(x_139)) {
 x_151 = lean_alloc_ctor(1, 2, 0);
} else {
 x_151 = x_139;
}
lean_ctor_set(x_151, 0, x_138);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_152 = lean_ctor_get(x_36, 0);
x_153 = lean_ctor_get(x_36, 1);
x_154 = lean_ctor_get(x_36, 2);
lean_inc(x_154);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_36);
x_155 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_156 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_156, 0, x_152);
lean_ctor_set(x_156, 1, x_153);
lean_ctor_set(x_156, 2, x_155);
lean_ctor_set(x_31, 2, x_156);
x_157 = lean_ctor_get(x_5, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_5, 1);
lean_inc(x_158);
x_159 = lean_ctor_get(x_5, 2);
lean_inc(x_159);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 x_160 = x_5;
} else {
 lean_dec_ref(x_5);
 x_160 = lean_box(0);
}
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_32);
lean_ctor_set(x_161, 1, x_10);
x_162 = lean_array_push(x_159, x_161);
if (lean_is_scalar(x_160)) {
 x_163 = lean_alloc_ctor(0, 3, 0);
} else {
 x_163 = x_160;
}
lean_ctor_set(x_163, 0, x_157);
lean_ctor_set(x_163, 1, x_158);
lean_ctor_set(x_163, 2, x_162);
x_164 = l_Lean_Meta_isDefEqBindingDomain___main(x_1, x_2, x_34, x_4, x_163, x_31);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_165 = lean_ctor_get(x_164, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_165, 2);
lean_inc(x_166);
x_167 = lean_ctor_get(x_164, 0);
lean_inc(x_167);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 lean_ctor_release(x_164, 1);
 x_168 = x_164;
} else {
 lean_dec_ref(x_164);
 x_168 = lean_box(0);
}
x_169 = lean_ctor_get(x_165, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_165, 1);
lean_inc(x_170);
x_171 = lean_ctor_get(x_165, 3);
lean_inc(x_171);
x_172 = lean_ctor_get(x_165, 4);
lean_inc(x_172);
x_173 = lean_ctor_get(x_165, 5);
lean_inc(x_173);
if (lean_is_exclusive(x_165)) {
 lean_ctor_release(x_165, 0);
 lean_ctor_release(x_165, 1);
 lean_ctor_release(x_165, 2);
 lean_ctor_release(x_165, 3);
 lean_ctor_release(x_165, 4);
 lean_ctor_release(x_165, 5);
 x_174 = x_165;
} else {
 lean_dec_ref(x_165);
 x_174 = lean_box(0);
}
x_175 = lean_ctor_get(x_166, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_166, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_166)) {
 lean_ctor_release(x_166, 0);
 lean_ctor_release(x_166, 1);
 lean_ctor_release(x_166, 2);
 x_177 = x_166;
} else {
 lean_dec_ref(x_166);
 x_177 = lean_box(0);
}
if (lean_is_scalar(x_177)) {
 x_178 = lean_alloc_ctor(0, 3, 0);
} else {
 x_178 = x_177;
}
lean_ctor_set(x_178, 0, x_175);
lean_ctor_set(x_178, 1, x_176);
lean_ctor_set(x_178, 2, x_154);
if (lean_is_scalar(x_174)) {
 x_179 = lean_alloc_ctor(0, 6, 0);
} else {
 x_179 = x_174;
}
lean_ctor_set(x_179, 0, x_169);
lean_ctor_set(x_179, 1, x_170);
lean_ctor_set(x_179, 2, x_178);
lean_ctor_set(x_179, 3, x_171);
lean_ctor_set(x_179, 4, x_172);
lean_ctor_set(x_179, 5, x_173);
if (lean_is_scalar(x_168)) {
 x_180 = lean_alloc_ctor(0, 2, 0);
} else {
 x_180 = x_168;
}
lean_ctor_set(x_180, 0, x_167);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_181 = lean_ctor_get(x_164, 1);
lean_inc(x_181);
x_182 = lean_ctor_get(x_181, 2);
lean_inc(x_182);
x_183 = lean_ctor_get(x_164, 0);
lean_inc(x_183);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 lean_ctor_release(x_164, 1);
 x_184 = x_164;
} else {
 lean_dec_ref(x_164);
 x_184 = lean_box(0);
}
x_185 = lean_ctor_get(x_181, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_181, 1);
lean_inc(x_186);
x_187 = lean_ctor_get(x_181, 3);
lean_inc(x_187);
x_188 = lean_ctor_get(x_181, 4);
lean_inc(x_188);
x_189 = lean_ctor_get(x_181, 5);
lean_inc(x_189);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 lean_ctor_release(x_181, 2);
 lean_ctor_release(x_181, 3);
 lean_ctor_release(x_181, 4);
 lean_ctor_release(x_181, 5);
 x_190 = x_181;
} else {
 lean_dec_ref(x_181);
 x_190 = lean_box(0);
}
x_191 = lean_ctor_get(x_182, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_182, 1);
lean_inc(x_192);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 lean_ctor_release(x_182, 2);
 x_193 = x_182;
} else {
 lean_dec_ref(x_182);
 x_193 = lean_box(0);
}
if (lean_is_scalar(x_193)) {
 x_194 = lean_alloc_ctor(0, 3, 0);
} else {
 x_194 = x_193;
}
lean_ctor_set(x_194, 0, x_191);
lean_ctor_set(x_194, 1, x_192);
lean_ctor_set(x_194, 2, x_154);
if (lean_is_scalar(x_190)) {
 x_195 = lean_alloc_ctor(0, 6, 0);
} else {
 x_195 = x_190;
}
lean_ctor_set(x_195, 0, x_185);
lean_ctor_set(x_195, 1, x_186);
lean_ctor_set(x_195, 2, x_194);
lean_ctor_set(x_195, 3, x_187);
lean_ctor_set(x_195, 4, x_188);
lean_ctor_set(x_195, 5, x_189);
if (lean_is_scalar(x_184)) {
 x_196 = lean_alloc_ctor(1, 2, 0);
} else {
 x_196 = x_184;
}
lean_ctor_set(x_196, 0, x_183);
lean_ctor_set(x_196, 1, x_195);
return x_196;
}
}
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_197 = lean_ctor_get(x_31, 2);
x_198 = lean_ctor_get(x_31, 0);
x_199 = lean_ctor_get(x_31, 1);
x_200 = lean_ctor_get(x_31, 3);
x_201 = lean_ctor_get(x_31, 4);
x_202 = lean_ctor_get(x_31, 5);
lean_inc(x_202);
lean_inc(x_201);
lean_inc(x_200);
lean_inc(x_197);
lean_inc(x_199);
lean_inc(x_198);
lean_dec(x_31);
x_203 = lean_ctor_get(x_197, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_197, 1);
lean_inc(x_204);
x_205 = lean_ctor_get(x_197, 2);
lean_inc(x_205);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 lean_ctor_release(x_197, 2);
 x_206 = x_197;
} else {
 lean_dec_ref(x_197);
 x_206 = lean_box(0);
}
x_207 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
if (lean_is_scalar(x_206)) {
 x_208 = lean_alloc_ctor(0, 3, 0);
} else {
 x_208 = x_206;
}
lean_ctor_set(x_208, 0, x_203);
lean_ctor_set(x_208, 1, x_204);
lean_ctor_set(x_208, 2, x_207);
x_209 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_209, 0, x_198);
lean_ctor_set(x_209, 1, x_199);
lean_ctor_set(x_209, 2, x_208);
lean_ctor_set(x_209, 3, x_200);
lean_ctor_set(x_209, 4, x_201);
lean_ctor_set(x_209, 5, x_202);
x_210 = lean_ctor_get(x_5, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_5, 1);
lean_inc(x_211);
x_212 = lean_ctor_get(x_5, 2);
lean_inc(x_212);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 x_213 = x_5;
} else {
 lean_dec_ref(x_5);
 x_213 = lean_box(0);
}
x_214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_214, 0, x_32);
lean_ctor_set(x_214, 1, x_10);
x_215 = lean_array_push(x_212, x_214);
if (lean_is_scalar(x_213)) {
 x_216 = lean_alloc_ctor(0, 3, 0);
} else {
 x_216 = x_213;
}
lean_ctor_set(x_216, 0, x_210);
lean_ctor_set(x_216, 1, x_211);
lean_ctor_set(x_216, 2, x_215);
x_217 = l_Lean_Meta_isDefEqBindingDomain___main(x_1, x_2, x_34, x_4, x_216, x_209);
if (lean_obj_tag(x_217) == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_218 = lean_ctor_get(x_217, 1);
lean_inc(x_218);
x_219 = lean_ctor_get(x_218, 2);
lean_inc(x_219);
x_220 = lean_ctor_get(x_217, 0);
lean_inc(x_220);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 x_221 = x_217;
} else {
 lean_dec_ref(x_217);
 x_221 = lean_box(0);
}
x_222 = lean_ctor_get(x_218, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_218, 1);
lean_inc(x_223);
x_224 = lean_ctor_get(x_218, 3);
lean_inc(x_224);
x_225 = lean_ctor_get(x_218, 4);
lean_inc(x_225);
x_226 = lean_ctor_get(x_218, 5);
lean_inc(x_226);
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 lean_ctor_release(x_218, 1);
 lean_ctor_release(x_218, 2);
 lean_ctor_release(x_218, 3);
 lean_ctor_release(x_218, 4);
 lean_ctor_release(x_218, 5);
 x_227 = x_218;
} else {
 lean_dec_ref(x_218);
 x_227 = lean_box(0);
}
x_228 = lean_ctor_get(x_219, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_219, 1);
lean_inc(x_229);
if (lean_is_exclusive(x_219)) {
 lean_ctor_release(x_219, 0);
 lean_ctor_release(x_219, 1);
 lean_ctor_release(x_219, 2);
 x_230 = x_219;
} else {
 lean_dec_ref(x_219);
 x_230 = lean_box(0);
}
if (lean_is_scalar(x_230)) {
 x_231 = lean_alloc_ctor(0, 3, 0);
} else {
 x_231 = x_230;
}
lean_ctor_set(x_231, 0, x_228);
lean_ctor_set(x_231, 1, x_229);
lean_ctor_set(x_231, 2, x_205);
if (lean_is_scalar(x_227)) {
 x_232 = lean_alloc_ctor(0, 6, 0);
} else {
 x_232 = x_227;
}
lean_ctor_set(x_232, 0, x_222);
lean_ctor_set(x_232, 1, x_223);
lean_ctor_set(x_232, 2, x_231);
lean_ctor_set(x_232, 3, x_224);
lean_ctor_set(x_232, 4, x_225);
lean_ctor_set(x_232, 5, x_226);
if (lean_is_scalar(x_221)) {
 x_233 = lean_alloc_ctor(0, 2, 0);
} else {
 x_233 = x_221;
}
lean_ctor_set(x_233, 0, x_220);
lean_ctor_set(x_233, 1, x_232);
return x_233;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_234 = lean_ctor_get(x_217, 1);
lean_inc(x_234);
x_235 = lean_ctor_get(x_234, 2);
lean_inc(x_235);
x_236 = lean_ctor_get(x_217, 0);
lean_inc(x_236);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 x_237 = x_217;
} else {
 lean_dec_ref(x_217);
 x_237 = lean_box(0);
}
x_238 = lean_ctor_get(x_234, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_234, 1);
lean_inc(x_239);
x_240 = lean_ctor_get(x_234, 3);
lean_inc(x_240);
x_241 = lean_ctor_get(x_234, 4);
lean_inc(x_241);
x_242 = lean_ctor_get(x_234, 5);
lean_inc(x_242);
if (lean_is_exclusive(x_234)) {
 lean_ctor_release(x_234, 0);
 lean_ctor_release(x_234, 1);
 lean_ctor_release(x_234, 2);
 lean_ctor_release(x_234, 3);
 lean_ctor_release(x_234, 4);
 lean_ctor_release(x_234, 5);
 x_243 = x_234;
} else {
 lean_dec_ref(x_234);
 x_243 = lean_box(0);
}
x_244 = lean_ctor_get(x_235, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_235, 1);
lean_inc(x_245);
if (lean_is_exclusive(x_235)) {
 lean_ctor_release(x_235, 0);
 lean_ctor_release(x_235, 1);
 lean_ctor_release(x_235, 2);
 x_246 = x_235;
} else {
 lean_dec_ref(x_235);
 x_246 = lean_box(0);
}
if (lean_is_scalar(x_246)) {
 x_247 = lean_alloc_ctor(0, 3, 0);
} else {
 x_247 = x_246;
}
lean_ctor_set(x_247, 0, x_244);
lean_ctor_set(x_247, 1, x_245);
lean_ctor_set(x_247, 2, x_205);
if (lean_is_scalar(x_243)) {
 x_248 = lean_alloc_ctor(0, 6, 0);
} else {
 x_248 = x_243;
}
lean_ctor_set(x_248, 0, x_238);
lean_ctor_set(x_248, 1, x_239);
lean_ctor_set(x_248, 2, x_247);
lean_ctor_set(x_248, 3, x_240);
lean_ctor_set(x_248, 4, x_241);
lean_ctor_set(x_248, 5, x_242);
if (lean_is_scalar(x_237)) {
 x_249 = lean_alloc_ctor(1, 2, 0);
} else {
 x_249 = x_237;
}
lean_ctor_set(x_249, 0, x_236);
lean_ctor_set(x_249, 1, x_248);
return x_249;
}
}
}
}
else
{
uint8_t x_250; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_250 = !lean_is_exclusive(x_25);
if (x_250 == 0)
{
return x_25;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_25, 0);
x_252 = lean_ctor_get(x_25, 1);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_25);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_252);
return x_253;
}
}
}
}
else
{
uint8_t x_254; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_254 = !lean_is_exclusive(x_17);
if (x_254 == 0)
{
return x_17;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_255 = lean_ctor_get(x_17, 0);
x_256 = lean_ctor_get(x_17, 1);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_17);
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_255);
lean_ctor_set(x_257, 1, x_256);
return x_257;
}
}
}
else
{
uint8_t x_258; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_258 = !lean_is_exclusive(x_11);
if (x_258 == 0)
{
return x_11;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_259 = lean_ctor_get(x_11, 0);
x_260 = lean_ctor_get(x_11, 1);
lean_inc(x_260);
lean_inc(x_259);
lean_dec(x_11);
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_259);
lean_ctor_set(x_261, 1, x_260);
return x_261;
}
}
}
}
}
lean_object* l_Lean_Meta_isDefEqBindingDomain___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_isDefEqBindingDomain___main(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_isDefEqBindingDomain(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_isDefEqBindingDomain___main(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_isDefEqBindingDomain___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_isDefEqBindingDomain(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_isDefEqBindingDomain___main___at___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_expr_instantiate_rev(x_2, x_1);
x_10 = lean_expr_instantiate_rev(x_3, x_1);
x_11 = lean_array_get_size(x_4);
x_12 = lean_nat_dec_lt(x_6, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_6);
x_13 = l_Lean_Meta_isExprDefEqAux(x_9, x_10, x_7, x_8);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_9);
x_14 = lean_array_fget(x_4, x_6);
lean_inc(x_7);
x_15 = l_Lean_Meta_getFVarLocalDecl(x_14, x_7, x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_LocalDecl_type(x_16);
lean_dec(x_16);
x_19 = l_Lean_Expr_Inhabited;
x_20 = lean_array_get(x_19, x_5, x_6);
lean_inc(x_7);
lean_inc(x_18);
x_21 = l_Lean_Meta_isExprDefEqAux(x_18, x_20, x_7, x_17);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_unbox(x_22);
if (x_23 == 0)
{
uint8_t x_24; 
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_21, 0);
lean_dec(x_25);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_22);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_dec(x_21);
lean_inc(x_7);
x_29 = l_Lean_Meta_isClass(x_18, x_7, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_14);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_6, x_32);
lean_dec(x_6);
x_6 = x_33;
x_8 = x_31;
goto _start;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_dec(x_29);
x_36 = lean_ctor_get(x_30, 0);
lean_inc(x_36);
lean_dec(x_30);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_6, x_37);
lean_dec(x_6);
x_39 = !lean_is_exclusive(x_35);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_ctor_get(x_35, 2);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_40, 2);
x_43 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
lean_ctor_set(x_40, 2, x_43);
x_44 = !lean_is_exclusive(x_7);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_7, 2);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_36);
lean_ctor_set(x_46, 1, x_14);
x_47 = lean_array_push(x_45, x_46);
lean_ctor_set(x_7, 2, x_47);
x_48 = l_Lean_Meta_isDefEqBindingDomain___main___at___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_38, x_7, x_35);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_49, 2);
lean_inc(x_50);
x_51 = !lean_is_exclusive(x_48);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_48, 1);
lean_dec(x_52);
x_53 = !lean_is_exclusive(x_49);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_49, 2);
lean_dec(x_54);
x_55 = !lean_is_exclusive(x_50);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_50, 2);
lean_dec(x_56);
lean_ctor_set(x_50, 2, x_42);
return x_48;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_50, 0);
x_58 = lean_ctor_get(x_50, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_50);
x_59 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set(x_59, 2, x_42);
lean_ctor_set(x_49, 2, x_59);
return x_48;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_60 = lean_ctor_get(x_49, 0);
x_61 = lean_ctor_get(x_49, 1);
x_62 = lean_ctor_get(x_49, 3);
x_63 = lean_ctor_get(x_49, 4);
x_64 = lean_ctor_get(x_49, 5);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_49);
x_65 = lean_ctor_get(x_50, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_50, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 lean_ctor_release(x_50, 2);
 x_67 = x_50;
} else {
 lean_dec_ref(x_50);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(0, 3, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
lean_ctor_set(x_68, 2, x_42);
x_69 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_69, 0, x_60);
lean_ctor_set(x_69, 1, x_61);
lean_ctor_set(x_69, 2, x_68);
lean_ctor_set(x_69, 3, x_62);
lean_ctor_set(x_69, 4, x_63);
lean_ctor_set(x_69, 5, x_64);
lean_ctor_set(x_48, 1, x_69);
return x_48;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_70 = lean_ctor_get(x_48, 0);
lean_inc(x_70);
lean_dec(x_48);
x_71 = lean_ctor_get(x_49, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_49, 1);
lean_inc(x_72);
x_73 = lean_ctor_get(x_49, 3);
lean_inc(x_73);
x_74 = lean_ctor_get(x_49, 4);
lean_inc(x_74);
x_75 = lean_ctor_get(x_49, 5);
lean_inc(x_75);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 lean_ctor_release(x_49, 2);
 lean_ctor_release(x_49, 3);
 lean_ctor_release(x_49, 4);
 lean_ctor_release(x_49, 5);
 x_76 = x_49;
} else {
 lean_dec_ref(x_49);
 x_76 = lean_box(0);
}
x_77 = lean_ctor_get(x_50, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_50, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 lean_ctor_release(x_50, 2);
 x_79 = x_50;
} else {
 lean_dec_ref(x_50);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(0, 3, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_78);
lean_ctor_set(x_80, 2, x_42);
if (lean_is_scalar(x_76)) {
 x_81 = lean_alloc_ctor(0, 6, 0);
} else {
 x_81 = x_76;
}
lean_ctor_set(x_81, 0, x_71);
lean_ctor_set(x_81, 1, x_72);
lean_ctor_set(x_81, 2, x_80);
lean_ctor_set(x_81, 3, x_73);
lean_ctor_set(x_81, 4, x_74);
lean_ctor_set(x_81, 5, x_75);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_70);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_83 = lean_ctor_get(x_48, 1);
lean_inc(x_83);
x_84 = lean_ctor_get(x_83, 2);
lean_inc(x_84);
x_85 = !lean_is_exclusive(x_48);
if (x_85 == 0)
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_ctor_get(x_48, 1);
lean_dec(x_86);
x_87 = !lean_is_exclusive(x_83);
if (x_87 == 0)
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_ctor_get(x_83, 2);
lean_dec(x_88);
x_89 = !lean_is_exclusive(x_84);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_84, 2);
lean_dec(x_90);
lean_ctor_set(x_84, 2, x_42);
return x_48;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_84, 0);
x_92 = lean_ctor_get(x_84, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_84);
x_93 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
lean_ctor_set(x_93, 2, x_42);
lean_ctor_set(x_83, 2, x_93);
return x_48;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_94 = lean_ctor_get(x_83, 0);
x_95 = lean_ctor_get(x_83, 1);
x_96 = lean_ctor_get(x_83, 3);
x_97 = lean_ctor_get(x_83, 4);
x_98 = lean_ctor_get(x_83, 5);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_83);
x_99 = lean_ctor_get(x_84, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_84, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 lean_ctor_release(x_84, 2);
 x_101 = x_84;
} else {
 lean_dec_ref(x_84);
 x_101 = lean_box(0);
}
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(0, 3, 0);
} else {
 x_102 = x_101;
}
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_100);
lean_ctor_set(x_102, 2, x_42);
x_103 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_103, 0, x_94);
lean_ctor_set(x_103, 1, x_95);
lean_ctor_set(x_103, 2, x_102);
lean_ctor_set(x_103, 3, x_96);
lean_ctor_set(x_103, 4, x_97);
lean_ctor_set(x_103, 5, x_98);
lean_ctor_set(x_48, 1, x_103);
return x_48;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_104 = lean_ctor_get(x_48, 0);
lean_inc(x_104);
lean_dec(x_48);
x_105 = lean_ctor_get(x_83, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_83, 1);
lean_inc(x_106);
x_107 = lean_ctor_get(x_83, 3);
lean_inc(x_107);
x_108 = lean_ctor_get(x_83, 4);
lean_inc(x_108);
x_109 = lean_ctor_get(x_83, 5);
lean_inc(x_109);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 lean_ctor_release(x_83, 2);
 lean_ctor_release(x_83, 3);
 lean_ctor_release(x_83, 4);
 lean_ctor_release(x_83, 5);
 x_110 = x_83;
} else {
 lean_dec_ref(x_83);
 x_110 = lean_box(0);
}
x_111 = lean_ctor_get(x_84, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_84, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 lean_ctor_release(x_84, 2);
 x_113 = x_84;
} else {
 lean_dec_ref(x_84);
 x_113 = lean_box(0);
}
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(0, 3, 0);
} else {
 x_114 = x_113;
}
lean_ctor_set(x_114, 0, x_111);
lean_ctor_set(x_114, 1, x_112);
lean_ctor_set(x_114, 2, x_42);
if (lean_is_scalar(x_110)) {
 x_115 = lean_alloc_ctor(0, 6, 0);
} else {
 x_115 = x_110;
}
lean_ctor_set(x_115, 0, x_105);
lean_ctor_set(x_115, 1, x_106);
lean_ctor_set(x_115, 2, x_114);
lean_ctor_set(x_115, 3, x_107);
lean_ctor_set(x_115, 4, x_108);
lean_ctor_set(x_115, 5, x_109);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_104);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_117 = lean_ctor_get(x_7, 0);
x_118 = lean_ctor_get(x_7, 1);
x_119 = lean_ctor_get(x_7, 2);
lean_inc(x_119);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_7);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_36);
lean_ctor_set(x_120, 1, x_14);
x_121 = lean_array_push(x_119, x_120);
x_122 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_122, 0, x_117);
lean_ctor_set(x_122, 1, x_118);
lean_ctor_set(x_122, 2, x_121);
x_123 = l_Lean_Meta_isDefEqBindingDomain___main___at___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_38, x_122, x_35);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_124 = lean_ctor_get(x_123, 1);
lean_inc(x_124);
x_125 = lean_ctor_get(x_124, 2);
lean_inc(x_125);
x_126 = lean_ctor_get(x_123, 0);
lean_inc(x_126);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_127 = x_123;
} else {
 lean_dec_ref(x_123);
 x_127 = lean_box(0);
}
x_128 = lean_ctor_get(x_124, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_124, 1);
lean_inc(x_129);
x_130 = lean_ctor_get(x_124, 3);
lean_inc(x_130);
x_131 = lean_ctor_get(x_124, 4);
lean_inc(x_131);
x_132 = lean_ctor_get(x_124, 5);
lean_inc(x_132);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 lean_ctor_release(x_124, 2);
 lean_ctor_release(x_124, 3);
 lean_ctor_release(x_124, 4);
 lean_ctor_release(x_124, 5);
 x_133 = x_124;
} else {
 lean_dec_ref(x_124);
 x_133 = lean_box(0);
}
x_134 = lean_ctor_get(x_125, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_125, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 lean_ctor_release(x_125, 2);
 x_136 = x_125;
} else {
 lean_dec_ref(x_125);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(0, 3, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_134);
lean_ctor_set(x_137, 1, x_135);
lean_ctor_set(x_137, 2, x_42);
if (lean_is_scalar(x_133)) {
 x_138 = lean_alloc_ctor(0, 6, 0);
} else {
 x_138 = x_133;
}
lean_ctor_set(x_138, 0, x_128);
lean_ctor_set(x_138, 1, x_129);
lean_ctor_set(x_138, 2, x_137);
lean_ctor_set(x_138, 3, x_130);
lean_ctor_set(x_138, 4, x_131);
lean_ctor_set(x_138, 5, x_132);
if (lean_is_scalar(x_127)) {
 x_139 = lean_alloc_ctor(0, 2, 0);
} else {
 x_139 = x_127;
}
lean_ctor_set(x_139, 0, x_126);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_140 = lean_ctor_get(x_123, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_140, 2);
lean_inc(x_141);
x_142 = lean_ctor_get(x_123, 0);
lean_inc(x_142);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_143 = x_123;
} else {
 lean_dec_ref(x_123);
 x_143 = lean_box(0);
}
x_144 = lean_ctor_get(x_140, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_140, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_140, 3);
lean_inc(x_146);
x_147 = lean_ctor_get(x_140, 4);
lean_inc(x_147);
x_148 = lean_ctor_get(x_140, 5);
lean_inc(x_148);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 lean_ctor_release(x_140, 2);
 lean_ctor_release(x_140, 3);
 lean_ctor_release(x_140, 4);
 lean_ctor_release(x_140, 5);
 x_149 = x_140;
} else {
 lean_dec_ref(x_140);
 x_149 = lean_box(0);
}
x_150 = lean_ctor_get(x_141, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_141, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 lean_ctor_release(x_141, 2);
 x_152 = x_141;
} else {
 lean_dec_ref(x_141);
 x_152 = lean_box(0);
}
if (lean_is_scalar(x_152)) {
 x_153 = lean_alloc_ctor(0, 3, 0);
} else {
 x_153 = x_152;
}
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_151);
lean_ctor_set(x_153, 2, x_42);
if (lean_is_scalar(x_149)) {
 x_154 = lean_alloc_ctor(0, 6, 0);
} else {
 x_154 = x_149;
}
lean_ctor_set(x_154, 0, x_144);
lean_ctor_set(x_154, 1, x_145);
lean_ctor_set(x_154, 2, x_153);
lean_ctor_set(x_154, 3, x_146);
lean_ctor_set(x_154, 4, x_147);
lean_ctor_set(x_154, 5, x_148);
if (lean_is_scalar(x_143)) {
 x_155 = lean_alloc_ctor(1, 2, 0);
} else {
 x_155 = x_143;
}
lean_ctor_set(x_155, 0, x_142);
lean_ctor_set(x_155, 1, x_154);
return x_155;
}
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_156 = lean_ctor_get(x_40, 0);
x_157 = lean_ctor_get(x_40, 1);
x_158 = lean_ctor_get(x_40, 2);
lean_inc(x_158);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_40);
x_159 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_160 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_160, 0, x_156);
lean_ctor_set(x_160, 1, x_157);
lean_ctor_set(x_160, 2, x_159);
lean_ctor_set(x_35, 2, x_160);
x_161 = lean_ctor_get(x_7, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_7, 1);
lean_inc(x_162);
x_163 = lean_ctor_get(x_7, 2);
lean_inc(x_163);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 x_164 = x_7;
} else {
 lean_dec_ref(x_7);
 x_164 = lean_box(0);
}
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_36);
lean_ctor_set(x_165, 1, x_14);
x_166 = lean_array_push(x_163, x_165);
if (lean_is_scalar(x_164)) {
 x_167 = lean_alloc_ctor(0, 3, 0);
} else {
 x_167 = x_164;
}
lean_ctor_set(x_167, 0, x_161);
lean_ctor_set(x_167, 1, x_162);
lean_ctor_set(x_167, 2, x_166);
x_168 = l_Lean_Meta_isDefEqBindingDomain___main___at___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_38, x_167, x_35);
if (lean_obj_tag(x_168) == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_169 = lean_ctor_get(x_168, 1);
lean_inc(x_169);
x_170 = lean_ctor_get(x_169, 2);
lean_inc(x_170);
x_171 = lean_ctor_get(x_168, 0);
lean_inc(x_171);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_172 = x_168;
} else {
 lean_dec_ref(x_168);
 x_172 = lean_box(0);
}
x_173 = lean_ctor_get(x_169, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_169, 1);
lean_inc(x_174);
x_175 = lean_ctor_get(x_169, 3);
lean_inc(x_175);
x_176 = lean_ctor_get(x_169, 4);
lean_inc(x_176);
x_177 = lean_ctor_get(x_169, 5);
lean_inc(x_177);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 lean_ctor_release(x_169, 2);
 lean_ctor_release(x_169, 3);
 lean_ctor_release(x_169, 4);
 lean_ctor_release(x_169, 5);
 x_178 = x_169;
} else {
 lean_dec_ref(x_169);
 x_178 = lean_box(0);
}
x_179 = lean_ctor_get(x_170, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_170, 1);
lean_inc(x_180);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 lean_ctor_release(x_170, 2);
 x_181 = x_170;
} else {
 lean_dec_ref(x_170);
 x_181 = lean_box(0);
}
if (lean_is_scalar(x_181)) {
 x_182 = lean_alloc_ctor(0, 3, 0);
} else {
 x_182 = x_181;
}
lean_ctor_set(x_182, 0, x_179);
lean_ctor_set(x_182, 1, x_180);
lean_ctor_set(x_182, 2, x_158);
if (lean_is_scalar(x_178)) {
 x_183 = lean_alloc_ctor(0, 6, 0);
} else {
 x_183 = x_178;
}
lean_ctor_set(x_183, 0, x_173);
lean_ctor_set(x_183, 1, x_174);
lean_ctor_set(x_183, 2, x_182);
lean_ctor_set(x_183, 3, x_175);
lean_ctor_set(x_183, 4, x_176);
lean_ctor_set(x_183, 5, x_177);
if (lean_is_scalar(x_172)) {
 x_184 = lean_alloc_ctor(0, 2, 0);
} else {
 x_184 = x_172;
}
lean_ctor_set(x_184, 0, x_171);
lean_ctor_set(x_184, 1, x_183);
return x_184;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_185 = lean_ctor_get(x_168, 1);
lean_inc(x_185);
x_186 = lean_ctor_get(x_185, 2);
lean_inc(x_186);
x_187 = lean_ctor_get(x_168, 0);
lean_inc(x_187);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_188 = x_168;
} else {
 lean_dec_ref(x_168);
 x_188 = lean_box(0);
}
x_189 = lean_ctor_get(x_185, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_185, 1);
lean_inc(x_190);
x_191 = lean_ctor_get(x_185, 3);
lean_inc(x_191);
x_192 = lean_ctor_get(x_185, 4);
lean_inc(x_192);
x_193 = lean_ctor_get(x_185, 5);
lean_inc(x_193);
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 lean_ctor_release(x_185, 2);
 lean_ctor_release(x_185, 3);
 lean_ctor_release(x_185, 4);
 lean_ctor_release(x_185, 5);
 x_194 = x_185;
} else {
 lean_dec_ref(x_185);
 x_194 = lean_box(0);
}
x_195 = lean_ctor_get(x_186, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_186, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_186)) {
 lean_ctor_release(x_186, 0);
 lean_ctor_release(x_186, 1);
 lean_ctor_release(x_186, 2);
 x_197 = x_186;
} else {
 lean_dec_ref(x_186);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(0, 3, 0);
} else {
 x_198 = x_197;
}
lean_ctor_set(x_198, 0, x_195);
lean_ctor_set(x_198, 1, x_196);
lean_ctor_set(x_198, 2, x_158);
if (lean_is_scalar(x_194)) {
 x_199 = lean_alloc_ctor(0, 6, 0);
} else {
 x_199 = x_194;
}
lean_ctor_set(x_199, 0, x_189);
lean_ctor_set(x_199, 1, x_190);
lean_ctor_set(x_199, 2, x_198);
lean_ctor_set(x_199, 3, x_191);
lean_ctor_set(x_199, 4, x_192);
lean_ctor_set(x_199, 5, x_193);
if (lean_is_scalar(x_188)) {
 x_200 = lean_alloc_ctor(1, 2, 0);
} else {
 x_200 = x_188;
}
lean_ctor_set(x_200, 0, x_187);
lean_ctor_set(x_200, 1, x_199);
return x_200;
}
}
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_201 = lean_ctor_get(x_35, 2);
x_202 = lean_ctor_get(x_35, 0);
x_203 = lean_ctor_get(x_35, 1);
x_204 = lean_ctor_get(x_35, 3);
x_205 = lean_ctor_get(x_35, 4);
x_206 = lean_ctor_get(x_35, 5);
lean_inc(x_206);
lean_inc(x_205);
lean_inc(x_204);
lean_inc(x_201);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_35);
x_207 = lean_ctor_get(x_201, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_201, 1);
lean_inc(x_208);
x_209 = lean_ctor_get(x_201, 2);
lean_inc(x_209);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 lean_ctor_release(x_201, 2);
 x_210 = x_201;
} else {
 lean_dec_ref(x_201);
 x_210 = lean_box(0);
}
x_211 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
if (lean_is_scalar(x_210)) {
 x_212 = lean_alloc_ctor(0, 3, 0);
} else {
 x_212 = x_210;
}
lean_ctor_set(x_212, 0, x_207);
lean_ctor_set(x_212, 1, x_208);
lean_ctor_set(x_212, 2, x_211);
x_213 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_213, 0, x_202);
lean_ctor_set(x_213, 1, x_203);
lean_ctor_set(x_213, 2, x_212);
lean_ctor_set(x_213, 3, x_204);
lean_ctor_set(x_213, 4, x_205);
lean_ctor_set(x_213, 5, x_206);
x_214 = lean_ctor_get(x_7, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_7, 1);
lean_inc(x_215);
x_216 = lean_ctor_get(x_7, 2);
lean_inc(x_216);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 x_217 = x_7;
} else {
 lean_dec_ref(x_7);
 x_217 = lean_box(0);
}
x_218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_218, 0, x_36);
lean_ctor_set(x_218, 1, x_14);
x_219 = lean_array_push(x_216, x_218);
if (lean_is_scalar(x_217)) {
 x_220 = lean_alloc_ctor(0, 3, 0);
} else {
 x_220 = x_217;
}
lean_ctor_set(x_220, 0, x_214);
lean_ctor_set(x_220, 1, x_215);
lean_ctor_set(x_220, 2, x_219);
x_221 = l_Lean_Meta_isDefEqBindingDomain___main___at___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_38, x_220, x_213);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_222 = lean_ctor_get(x_221, 1);
lean_inc(x_222);
x_223 = lean_ctor_get(x_222, 2);
lean_inc(x_223);
x_224 = lean_ctor_get(x_221, 0);
lean_inc(x_224);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_225 = x_221;
} else {
 lean_dec_ref(x_221);
 x_225 = lean_box(0);
}
x_226 = lean_ctor_get(x_222, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_222, 1);
lean_inc(x_227);
x_228 = lean_ctor_get(x_222, 3);
lean_inc(x_228);
x_229 = lean_ctor_get(x_222, 4);
lean_inc(x_229);
x_230 = lean_ctor_get(x_222, 5);
lean_inc(x_230);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 lean_ctor_release(x_222, 2);
 lean_ctor_release(x_222, 3);
 lean_ctor_release(x_222, 4);
 lean_ctor_release(x_222, 5);
 x_231 = x_222;
} else {
 lean_dec_ref(x_222);
 x_231 = lean_box(0);
}
x_232 = lean_ctor_get(x_223, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_223, 1);
lean_inc(x_233);
if (lean_is_exclusive(x_223)) {
 lean_ctor_release(x_223, 0);
 lean_ctor_release(x_223, 1);
 lean_ctor_release(x_223, 2);
 x_234 = x_223;
} else {
 lean_dec_ref(x_223);
 x_234 = lean_box(0);
}
if (lean_is_scalar(x_234)) {
 x_235 = lean_alloc_ctor(0, 3, 0);
} else {
 x_235 = x_234;
}
lean_ctor_set(x_235, 0, x_232);
lean_ctor_set(x_235, 1, x_233);
lean_ctor_set(x_235, 2, x_209);
if (lean_is_scalar(x_231)) {
 x_236 = lean_alloc_ctor(0, 6, 0);
} else {
 x_236 = x_231;
}
lean_ctor_set(x_236, 0, x_226);
lean_ctor_set(x_236, 1, x_227);
lean_ctor_set(x_236, 2, x_235);
lean_ctor_set(x_236, 3, x_228);
lean_ctor_set(x_236, 4, x_229);
lean_ctor_set(x_236, 5, x_230);
if (lean_is_scalar(x_225)) {
 x_237 = lean_alloc_ctor(0, 2, 0);
} else {
 x_237 = x_225;
}
lean_ctor_set(x_237, 0, x_224);
lean_ctor_set(x_237, 1, x_236);
return x_237;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_238 = lean_ctor_get(x_221, 1);
lean_inc(x_238);
x_239 = lean_ctor_get(x_238, 2);
lean_inc(x_239);
x_240 = lean_ctor_get(x_221, 0);
lean_inc(x_240);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_241 = x_221;
} else {
 lean_dec_ref(x_221);
 x_241 = lean_box(0);
}
x_242 = lean_ctor_get(x_238, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_238, 1);
lean_inc(x_243);
x_244 = lean_ctor_get(x_238, 3);
lean_inc(x_244);
x_245 = lean_ctor_get(x_238, 4);
lean_inc(x_245);
x_246 = lean_ctor_get(x_238, 5);
lean_inc(x_246);
if (lean_is_exclusive(x_238)) {
 lean_ctor_release(x_238, 0);
 lean_ctor_release(x_238, 1);
 lean_ctor_release(x_238, 2);
 lean_ctor_release(x_238, 3);
 lean_ctor_release(x_238, 4);
 lean_ctor_release(x_238, 5);
 x_247 = x_238;
} else {
 lean_dec_ref(x_238);
 x_247 = lean_box(0);
}
x_248 = lean_ctor_get(x_239, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_239, 1);
lean_inc(x_249);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 lean_ctor_release(x_239, 2);
 x_250 = x_239;
} else {
 lean_dec_ref(x_239);
 x_250 = lean_box(0);
}
if (lean_is_scalar(x_250)) {
 x_251 = lean_alloc_ctor(0, 3, 0);
} else {
 x_251 = x_250;
}
lean_ctor_set(x_251, 0, x_248);
lean_ctor_set(x_251, 1, x_249);
lean_ctor_set(x_251, 2, x_209);
if (lean_is_scalar(x_247)) {
 x_252 = lean_alloc_ctor(0, 6, 0);
} else {
 x_252 = x_247;
}
lean_ctor_set(x_252, 0, x_242);
lean_ctor_set(x_252, 1, x_243);
lean_ctor_set(x_252, 2, x_251);
lean_ctor_set(x_252, 3, x_244);
lean_ctor_set(x_252, 4, x_245);
lean_ctor_set(x_252, 5, x_246);
if (lean_is_scalar(x_241)) {
 x_253 = lean_alloc_ctor(1, 2, 0);
} else {
 x_253 = x_241;
}
lean_ctor_set(x_253, 0, x_240);
lean_ctor_set(x_253, 1, x_252);
return x_253;
}
}
}
}
else
{
uint8_t x_254; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
x_254 = !lean_is_exclusive(x_29);
if (x_254 == 0)
{
return x_29;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_255 = lean_ctor_get(x_29, 0);
x_256 = lean_ctor_get(x_29, 1);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_29);
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_255);
lean_ctor_set(x_257, 1, x_256);
return x_257;
}
}
}
}
else
{
uint8_t x_258; 
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
x_258 = !lean_is_exclusive(x_21);
if (x_258 == 0)
{
return x_21;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_259 = lean_ctor_get(x_21, 0);
x_260 = lean_ctor_get(x_21, 1);
lean_inc(x_260);
lean_inc(x_259);
lean_dec(x_21);
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_259);
lean_ctor_set(x_261, 1, x_260);
return x_261;
}
}
}
else
{
uint8_t x_262; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
x_262 = !lean_is_exclusive(x_15);
if (x_262 == 0)
{
return x_15;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_263 = lean_ctor_get(x_15, 0);
x_264 = lean_ctor_get(x_15, 1);
lean_inc(x_264);
lean_inc(x_263);
lean_dec(x_15);
x_265 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_265, 0, x_263);
lean_ctor_set(x_265, 1, x_264);
return x_265;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
switch (lean_obj_tag(x_3)) {
case 6:
{
if (lean_obj_tag(x_4) == 6)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_3, 2);
lean_inc(x_21);
lean_dec(x_3);
x_22 = lean_ctor_get(x_4, 1);
x_23 = lean_ctor_get(x_4, 2);
x_24 = lean_expr_instantiate_rev(x_20, x_2);
lean_dec(x_20);
x_25 = lean_expr_instantiate_rev(x_22, x_2);
x_26 = l_Lean_Meta_mkFreshId___rarg(x_7);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = 0;
lean_inc(x_27);
x_30 = lean_local_ctx_mk_local_decl(x_1, x_27, x_19, x_24, x_29);
x_31 = l_Lean_mkFVar(x_27);
x_32 = lean_array_push(x_2, x_31);
x_33 = lean_array_push(x_5, x_25);
x_1 = x_30;
x_2 = x_32;
x_3 = x_21;
x_4 = x_23;
x_5 = x_33;
x_7 = x_28;
goto _start;
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_8 = x_35;
goto block_18;
}
}
case 7:
{
if (lean_obj_tag(x_4) == 7)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_36 = lean_ctor_get(x_3, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_3, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_3, 2);
lean_inc(x_38);
lean_dec(x_3);
x_39 = lean_ctor_get(x_4, 1);
x_40 = lean_ctor_get(x_4, 2);
x_41 = lean_expr_instantiate_rev(x_37, x_2);
lean_dec(x_37);
x_42 = lean_expr_instantiate_rev(x_39, x_2);
x_43 = l_Lean_Meta_mkFreshId___rarg(x_7);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = 0;
lean_inc(x_44);
x_47 = lean_local_ctx_mk_local_decl(x_1, x_44, x_36, x_41, x_46);
x_48 = l_Lean_mkFVar(x_44);
x_49 = lean_array_push(x_2, x_48);
x_50 = lean_array_push(x_5, x_42);
x_1 = x_47;
x_2 = x_49;
x_3 = x_38;
x_4 = x_40;
x_5 = x_50;
x_7 = x_45;
goto _start;
}
else
{
lean_object* x_52; 
x_52 = lean_box(0);
x_8 = x_52;
goto block_18;
}
}
default: 
{
lean_object* x_53; 
x_53 = lean_box(0);
x_8 = x_53;
goto block_18;
}
}
block_18:
{
uint8_t x_9; 
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 1);
lean_dec(x_10);
lean_ctor_set(x_6, 1, x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Meta_isDefEqBindingDomain___main___at___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___spec__1(x_2, x_3, x_4, x_2, x_5, x_11, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_6, 0);
x_14 = lean_ctor_get(x_6, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_6);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_1);
lean_ctor_set(x_15, 2, x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Meta_isDefEqBindingDomain___main___at___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___spec__1(x_2, x_3, x_4, x_2, x_5, x_16, x_15, x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_17;
}
}
}
}
lean_object* l_Lean_Meta_isDefEqBindingDomain___main___at___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_isDefEqBindingDomain___main___at___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_6__isDefEqBinding(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = l_Array_empty___closed__1;
x_7 = l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main(x_5, x_6, x_1, x_2, x_6, x_3, x_4);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_6__isDefEqBinding___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_ExprDefEq_6__isDefEqBinding(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_AssocList_find___main___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_expr_equal(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_HashMapImp_find___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Expr_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_AssocList_find___main___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_7__findCached(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 2);
lean_inc(x_4);
x_5 = l_HashMapImp_find___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__1(x_4, x_1);
lean_dec(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
lean_object* l_AssocList_find___main___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AssocList_find___main___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_HashMapImp_find___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_HashMapImp_find___at___private_Init_Lean_Meta_ExprDefEq_7__findCached___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_7__findCached___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
uint8_t l_AssocList_contains___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_expr_equal(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Expr_hash(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = l_Lean_Expr_hash(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_HashMapImp_moveEntries___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_AssocList_foldlM___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__5(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_HashMapImp_expand___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_HashMapImp_moveEntries___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__4(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_AssocList_replace___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_expr_equal(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_AssocList_replace___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__6(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lean_expr_equal(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_AssocList_replace___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__6(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
lean_object* l_HashMapImp_insert___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Expr_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_AssocList_contains___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__2(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_HashMapImp_expand___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__3(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_AssocList_replace___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__6(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = l_Lean_Expr_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_AssocList_contains___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__2(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_HashMapImp_expand___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__3(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_AssocList_replace___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__6(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_8__cache(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_4, 2);
x_7 = l_HashMapImp_insert___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__1(x_6, x_1, x_2);
lean_ctor_set(x_4, 2, x_7);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
x_12 = lean_ctor_get(x_4, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_4);
x_13 = l_HashMapImp_insert___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__1(x_12, x_1, x_2);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_AssocList_contains___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_AssocList_contains___main___at___private_Init_Lean_Meta_ExprDefEq_8__cache___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_8__cache___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* _init_l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_ExprDefEq_7__findCached___boxed), 3, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_ExprDefEq_8__cache___boxed), 4, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__1;
x_2 = l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_CheckAssignment_Lean_MonadCache() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__3;
return x_1;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_9__visit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_28; 
x_28 = l_Lean_Expr_hasExprMVar(x_2);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = l_Lean_Expr_hasFVar(x_2);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_3);
lean_dec(x_1);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_4);
return x_30;
}
else
{
lean_object* x_31; 
x_31 = lean_box(0);
x_5 = x_31;
goto block_27;
}
}
else
{
lean_object* x_32; 
x_32 = lean_box(0);
x_5 = x_32;
goto block_27;
}
block_27:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
x_6 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_2, x_3, x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_3);
lean_inc(x_2);
x_9 = lean_apply_3(x_1, x_2, x_3, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_10);
x_12 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_2, x_10, x_3, x_11);
lean_dec(x_3);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
lean_ctor_set(x_12, 0, x_10);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_6);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_6, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_7, 0);
lean_inc(x_23);
lean_dec(x_7);
lean_ctor_set(x_6, 0, x_23);
return x_6;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_6, 1);
lean_inc(x_24);
lean_dec(x_6);
x_25 = lean_ctor_get(x_7, 0);
lean_inc(x_25);
lean_dec(x_7);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
}
}
}
lean_object* l_Lean_Meta_CheckAssignment_checkFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_3, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_LocalContext_containsFVar(x_6, x_2);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = l_Lean_LocalContext_findFVar(x_8, x_2);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_1);
x_10 = lean_ctor_get(x_3, 3);
lean_inc(x_10);
lean_dec(x_3);
x_11 = l_Lean_Expr_HasBeq;
lean_inc(x_2);
x_12 = l_Array_contains___rarg(x_11, x_10, x_2);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = l_Lean_Expr_fvarId_x21(x_2);
lean_dec(x_2);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
return x_15;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_4);
return x_16;
}
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_17);
lean_dec(x_1);
x_18 = lean_ctor_get(x_3, 3);
lean_inc(x_18);
lean_dec(x_3);
x_19 = l_Lean_Expr_HasBeq;
lean_inc(x_2);
x_20 = l_Array_contains___rarg(x_19, x_18, x_2);
lean_dec(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = l_Lean_Expr_fvarId_x21(x_2);
lean_dec(x_2);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_4);
return x_23;
}
else
{
lean_object* x_24; 
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_2);
lean_ctor_set(x_24, 1, x_4);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; uint8_t x_49; 
lean_dec(x_2);
x_25 = lean_ctor_get(x_17, 4);
lean_inc(x_25);
lean_dec(x_17);
x_49 = l_Lean_Expr_hasExprMVar(x_25);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = l_Lean_Expr_hasFVar(x_25);
if (x_50 == 0)
{
lean_object* x_51; 
lean_dec(x_3);
lean_dec(x_1);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_25);
lean_ctor_set(x_51, 1, x_4);
return x_51;
}
else
{
lean_object* x_52; 
x_52 = lean_box(0);
x_26 = x_52;
goto block_48;
}
}
else
{
lean_object* x_53; 
x_53 = lean_box(0);
x_26 = x_53;
goto block_48;
}
block_48:
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_26);
x_27 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_25, x_3, x_4);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_3);
lean_inc(x_25);
x_30 = lean_apply_3(x_1, x_25, x_3, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_31);
x_33 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_25, x_31, x_3, x_32);
lean_dec(x_3);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set(x_33, 0, x_31);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_25);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_30);
if (x_38 == 0)
{
return x_30;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_30, 0);
x_40 = lean_ctor_get(x_30, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_30);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_25);
lean_dec(x_3);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_27);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_27, 0);
lean_dec(x_43);
x_44 = lean_ctor_get(x_28, 0);
lean_inc(x_44);
lean_dec(x_28);
lean_ctor_set(x_27, 0, x_44);
return x_27;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_27, 1);
lean_inc(x_45);
lean_dec(x_27);
x_46 = lean_ctor_get(x_28, 0);
lean_inc(x_46);
lean_dec(x_28);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
}
}
}
}
else
{
lean_object* x_54; 
lean_dec(x_3);
lean_dec(x_1);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_2);
lean_ctor_set(x_54, 1, x_4);
return x_54;
}
}
}
lean_object* l_Lean_Meta_CheckAssignment_getMCtx___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_CheckAssignment_getMCtx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_CheckAssignment_getMCtx___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_CheckAssignment_getMCtx___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_CheckAssignment_getMCtx(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_CheckAssignment_mkAuxMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 1);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_name_mk_numeral(x_10, x_11);
x_13 = lean_box(0);
x_14 = 0;
lean_inc(x_12);
x_15 = lean_metavar_ctx_mk_decl(x_9, x_12, x_13, x_1, x_2, x_3, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_11, x_16);
lean_dec(x_11);
lean_ctor_set(x_7, 1, x_17);
lean_ctor_set(x_5, 0, x_15);
x_18 = l_Lean_mkMVar(x_12);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_5);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_7, 0);
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_7);
lean_inc(x_22);
lean_inc(x_21);
x_23 = lean_name_mk_numeral(x_21, x_22);
x_24 = lean_box(0);
x_25 = 0;
lean_inc(x_23);
x_26 = lean_metavar_ctx_mk_decl(x_20, x_23, x_24, x_1, x_2, x_3, x_25);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_22, x_27);
lean_dec(x_22);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_21);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_5, 1, x_29);
lean_ctor_set(x_5, 0, x_26);
x_30 = l_Lean_mkMVar(x_23);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_5);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_32 = lean_ctor_get(x_5, 1);
x_33 = lean_ctor_get(x_5, 0);
x_34 = lean_ctor_get(x_5, 2);
lean_inc(x_34);
lean_inc(x_32);
lean_inc(x_33);
lean_dec(x_5);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_37 = x_32;
} else {
 lean_dec_ref(x_32);
 x_37 = lean_box(0);
}
lean_inc(x_36);
lean_inc(x_35);
x_38 = lean_name_mk_numeral(x_35, x_36);
x_39 = lean_box(0);
x_40 = 0;
lean_inc(x_38);
x_41 = lean_metavar_ctx_mk_decl(x_33, x_38, x_39, x_1, x_2, x_3, x_40);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_nat_add(x_36, x_42);
lean_dec(x_36);
if (lean_is_scalar(x_37)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_37;
}
lean_ctor_set(x_44, 0, x_35);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_44);
lean_ctor_set(x_45, 2, x_34);
x_46 = l_Lean_mkMVar(x_38);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
}
lean_object* l_Lean_Meta_CheckAssignment_mkAuxMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_CheckAssignment_mkAuxMVar(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_CheckAssignment_checkMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Expr_mvarId_x21(x_2);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_6);
x_7 = lean_metavar_ctx_get_expr_assignment(x_6, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; 
lean_dec(x_1);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_name_eq(x_5, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_5);
lean_inc(x_6);
x_10 = lean_metavar_ctx_find_decl(x_6, x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_11, 0, x_5);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_4);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_ctor_get_uint8(x_3, sizeof(void*)*4 + 1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_3, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_inc(x_17);
lean_inc(x_15);
x_18 = l_Lean_LocalContext_isSubPrefixOf(x_15, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_14, 3);
lean_inc(x_19);
x_20 = lean_ctor_get(x_6, 0);
lean_inc(x_20);
x_21 = lean_nat_dec_eq(x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_22, 0, x_5);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_4);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = lean_ctor_get_uint8(x_14, sizeof(void*)*5);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = lean_ctor_get_uint8(x_3, sizeof(void*)*4);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_2);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
else
{
uint8_t x_27; 
lean_inc(x_17);
x_27 = l_Lean_LocalContext_isSubPrefixOf(x_17, x_15);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_4);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_2);
x_29 = lean_ctor_get(x_14, 2);
lean_inc(x_29);
lean_dec(x_14);
lean_inc(x_29);
lean_inc(x_17);
x_30 = l_Lean_MetavarContext_isWellFormed___main(x_6, x_17, x_29);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_29);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_3);
x_32 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_32, 0, x_5);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_4);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_16, 4);
lean_inc(x_34);
lean_dec(x_16);
x_35 = l_Lean_Meta_CheckAssignment_mkAuxMVar(x_17, x_34, x_29, x_3, x_4);
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_35, 1);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_35, 0);
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
x_41 = lean_metavar_ctx_assign_expr(x_40, x_5, x_39);
lean_ctor_set(x_37, 0, x_41);
return x_35;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_42 = lean_ctor_get(x_35, 0);
x_43 = lean_ctor_get(x_37, 0);
x_44 = lean_ctor_get(x_37, 1);
x_45 = lean_ctor_get(x_37, 2);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_37);
lean_inc(x_42);
x_46 = lean_metavar_ctx_assign_expr(x_43, x_5, x_42);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
lean_ctor_set(x_47, 2, x_45);
lean_ctor_set(x_35, 1, x_47);
return x_35;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_ctor_get(x_35, 1);
x_49 = lean_ctor_get(x_35, 0);
lean_inc(x_48);
lean_inc(x_49);
lean_dec(x_35);
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_48, 2);
lean_inc(x_52);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 lean_ctor_release(x_48, 2);
 x_53 = x_48;
} else {
 lean_dec_ref(x_48);
 x_53 = lean_box(0);
}
lean_inc(x_49);
x_54 = lean_metavar_ctx_assign_expr(x_50, x_5, x_49);
if (lean_is_scalar(x_53)) {
 x_55 = lean_alloc_ctor(0, 3, 0);
} else {
 x_55 = x_53;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_51);
lean_ctor_set(x_55, 2, x_52);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_49);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_57 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_57, 0, x_5);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_4);
return x_58;
}
}
}
else
{
lean_object* x_59; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_2);
lean_ctor_set(x_59, 1, x_4);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_60 = lean_box(1);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_4);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_4);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; uint8_t x_88; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_64 = lean_ctor_get(x_7, 0);
lean_inc(x_64);
lean_dec(x_7);
x_88 = l_Lean_Expr_hasExprMVar(x_64);
if (x_88 == 0)
{
uint8_t x_89; 
x_89 = l_Lean_Expr_hasFVar(x_64);
if (x_89 == 0)
{
lean_object* x_90; 
lean_dec(x_3);
lean_dec(x_1);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_64);
lean_ctor_set(x_90, 1, x_4);
return x_90;
}
else
{
lean_object* x_91; 
x_91 = lean_box(0);
x_65 = x_91;
goto block_87;
}
}
else
{
lean_object* x_92; 
x_92 = lean_box(0);
x_65 = x_92;
goto block_87;
}
block_87:
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_65);
x_66 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_64, x_3, x_4);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_3);
lean_inc(x_64);
x_69 = lean_apply_3(x_1, x_64, x_3, x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
lean_inc(x_70);
x_72 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_64, x_70, x_3, x_71);
lean_dec(x_3);
x_73 = !lean_is_exclusive(x_72);
if (x_73 == 0)
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_72, 0);
lean_dec(x_74);
lean_ctor_set(x_72, 0, x_70);
return x_72;
}
else
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_72, 1);
lean_inc(x_75);
lean_dec(x_72);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_70);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
else
{
uint8_t x_77; 
lean_dec(x_64);
lean_dec(x_3);
x_77 = !lean_is_exclusive(x_69);
if (x_77 == 0)
{
return x_69;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_69, 0);
x_79 = lean_ctor_get(x_69, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_69);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_64);
lean_dec(x_3);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_66);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_ctor_get(x_66, 0);
lean_dec(x_82);
x_83 = lean_ctor_get(x_67, 0);
lean_inc(x_83);
lean_dec(x_67);
lean_ctor_set(x_66, 0, x_83);
return x_66;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_66, 1);
lean_inc(x_84);
lean_dec(x_66);
x_85 = lean_ctor_get(x_67, 0);
lean_inc(x_85);
lean_dec(x_67);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignment_check___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_expr_eqv(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_contains___at_Lean_Meta_CheckAssignment_check___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignment_check___main___spec__3(x_1, x_2, x_1, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_CheckAssignment_checkFVar___at_Lean_Meta_CheckAssignment_check___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_LocalContext_containsFVar(x_5, x_1);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = l_Lean_LocalContext_findFVar(x_7, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_2, 3);
lean_inc(x_9);
lean_dec(x_2);
x_10 = l_Array_contains___at_Lean_Meta_CheckAssignment_check___main___spec__2(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_fvarId_x21(x_1);
lean_dec(x_1);
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_3);
return x_14;
}
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; uint8_t x_17; 
lean_dec(x_15);
x_16 = lean_ctor_get(x_2, 3);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l_Array_contains___at_Lean_Meta_CheckAssignment_check___main___spec__2(x_16, x_1);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = l_Lean_Expr_fvarId_x21(x_1);
lean_dec(x_1);
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_3);
return x_20;
}
else
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_3);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_46; 
lean_dec(x_1);
x_22 = lean_ctor_get(x_15, 4);
lean_inc(x_22);
lean_dec(x_15);
x_46 = l_Lean_Expr_hasExprMVar(x_22);
if (x_46 == 0)
{
uint8_t x_47; 
x_47 = l_Lean_Expr_hasFVar(x_22);
if (x_47 == 0)
{
lean_object* x_48; 
lean_dec(x_2);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_22);
lean_ctor_set(x_48, 1, x_3);
return x_48;
}
else
{
lean_object* x_49; 
x_49 = lean_box(0);
x_23 = x_49;
goto block_45;
}
}
else
{
lean_object* x_50; 
x_50 = lean_box(0);
x_23 = x_50;
goto block_45;
}
block_45:
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_23);
x_24 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_22, x_2, x_3);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_2);
lean_inc(x_22);
x_27 = l_Lean_Meta_CheckAssignment_check___main(x_22, x_2, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_28);
x_30 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_22, x_28, x_2, x_29);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
lean_ctor_set(x_30, 0, x_28);
return x_30;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_22);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_27);
if (x_35 == 0)
{
return x_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_27, 0);
x_37 = lean_ctor_get(x_27, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_27);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_22);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_24);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_24, 0);
lean_dec(x_40);
x_41 = lean_ctor_get(x_25, 0);
lean_inc(x_41);
lean_dec(x_25);
lean_ctor_set(x_24, 0, x_41);
return x_24;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_24, 1);
lean_inc(x_42);
lean_dec(x_24);
x_43 = lean_ctor_get(x_25, 0);
lean_inc(x_43);
lean_dec(x_25);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
}
}
}
else
{
lean_object* x_51; 
lean_dec(x_2);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_1);
lean_ctor_set(x_51, 1, x_3);
return x_51;
}
}
}
lean_object* l_Lean_Meta_CheckAssignment_checkMVar___at_Lean_Meta_CheckAssignment_check___main___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_Expr_mvarId_x21(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_metavar_ctx_get_expr_assignment(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_name_eq(x_4, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_inc(x_4);
lean_inc(x_5);
x_9 = lean_metavar_ctx_find_decl(x_5, x_4);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_10, 0, x_4);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = lean_ctor_get_uint8(x_2, sizeof(void*)*4 + 1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_inc(x_16);
lean_inc(x_14);
x_17 = l_Lean_LocalContext_isSubPrefixOf(x_14, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_13, 3);
lean_inc(x_18);
x_19 = lean_ctor_get(x_5, 0);
lean_inc(x_19);
x_20 = lean_nat_dec_eq(x_18, x_19);
lean_dec(x_19);
lean_dec(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_21 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_21, 0, x_4);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_3);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = lean_ctor_get_uint8(x_13, sizeof(void*)*5);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = lean_ctor_get_uint8(x_2, sizeof(void*)*4);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_3);
return x_25;
}
else
{
uint8_t x_26; 
lean_inc(x_16);
x_26 = l_Lean_LocalContext_isSubPrefixOf(x_16, x_14);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_1);
lean_ctor_set(x_27, 1, x_3);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_1);
x_28 = lean_ctor_get(x_13, 2);
lean_inc(x_28);
lean_dec(x_13);
lean_inc(x_28);
lean_inc(x_16);
x_29 = l_Lean_MetavarContext_isWellFormed___main(x_5, x_16, x_28);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_28);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_2);
x_31 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_31, 0, x_4);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_15, 4);
lean_inc(x_33);
lean_dec(x_15);
x_34 = l_Lean_Meta_CheckAssignment_mkAuxMVar(x_16, x_33, x_28, x_2, x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_34, 1);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_34, 0);
x_39 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
x_40 = lean_metavar_ctx_assign_expr(x_39, x_4, x_38);
lean_ctor_set(x_36, 0, x_40);
return x_34;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_34, 0);
x_42 = lean_ctor_get(x_36, 0);
x_43 = lean_ctor_get(x_36, 1);
x_44 = lean_ctor_get(x_36, 2);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_36);
lean_inc(x_41);
x_45 = lean_metavar_ctx_assign_expr(x_42, x_4, x_41);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_43);
lean_ctor_set(x_46, 2, x_44);
lean_ctor_set(x_34, 1, x_46);
return x_34;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_ctor_get(x_34, 1);
x_48 = lean_ctor_get(x_34, 0);
lean_inc(x_47);
lean_inc(x_48);
lean_dec(x_34);
x_49 = lean_ctor_get(x_47, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
x_51 = lean_ctor_get(x_47, 2);
lean_inc(x_51);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 lean_ctor_release(x_47, 2);
 x_52 = x_47;
} else {
 lean_dec_ref(x_47);
 x_52 = lean_box(0);
}
lean_inc(x_48);
x_53 = lean_metavar_ctx_assign_expr(x_49, x_4, x_48);
if (lean_is_scalar(x_52)) {
 x_54 = lean_alloc_ctor(0, 3, 0);
} else {
 x_54 = x_52;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_50);
lean_ctor_set(x_54, 2, x_51);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_48);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
else
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_56 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_56, 0, x_4);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_3);
return x_57;
}
}
}
else
{
lean_object* x_58; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_1);
lean_ctor_set(x_58, 1, x_3);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_59 = lean_box(1);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_3);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_3);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; uint8_t x_87; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_63 = lean_ctor_get(x_6, 0);
lean_inc(x_63);
lean_dec(x_6);
x_87 = l_Lean_Expr_hasExprMVar(x_63);
if (x_87 == 0)
{
uint8_t x_88; 
x_88 = l_Lean_Expr_hasFVar(x_63);
if (x_88 == 0)
{
lean_object* x_89; 
lean_dec(x_2);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_63);
lean_ctor_set(x_89, 1, x_3);
return x_89;
}
else
{
lean_object* x_90; 
x_90 = lean_box(0);
x_64 = x_90;
goto block_86;
}
}
else
{
lean_object* x_91; 
x_91 = lean_box(0);
x_64 = x_91;
goto block_86;
}
block_86:
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_64);
x_65 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_63, x_2, x_3);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
lean_inc(x_2);
lean_inc(x_63);
x_68 = l_Lean_Meta_CheckAssignment_check___main(x_63, x_2, x_67);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
lean_inc(x_69);
x_71 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_63, x_69, x_2, x_70);
lean_dec(x_2);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_71, 0);
lean_dec(x_73);
lean_ctor_set(x_71, 0, x_69);
return x_71;
}
else
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
lean_dec(x_71);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_69);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
else
{
uint8_t x_76; 
lean_dec(x_63);
lean_dec(x_2);
x_76 = !lean_is_exclusive(x_68);
if (x_76 == 0)
{
return x_68;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_68, 0);
x_78 = lean_ctor_get(x_68, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_68);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_63);
lean_dec(x_2);
x_80 = !lean_is_exclusive(x_65);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_65, 0);
lean_dec(x_81);
x_82 = lean_ctor_get(x_66, 0);
lean_inc(x_82);
lean_dec(x_66);
lean_ctor_set(x_65, 0, x_82);
return x_65;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_65, 1);
lean_inc(x_83);
lean_dec(x_65);
x_84 = lean_ctor_get(x_66, 0);
lean_inc(x_84);
lean_dec(x_66);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
}
}
}
lean_object* _init_l_Lean_Meta_CheckAssignment_check___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_Check_2__checkLambdaLet___lambda__2___closed__1;
x_2 = l_Lean_Expr_Inhabited;
x_3 = l_monadInhabited___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_CheckAssignment_check___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_13; lean_object* x_14; 
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_22; uint8_t x_45; 
x_45 = l_Lean_Expr_hasExprMVar(x_1);
if (x_45 == 0)
{
uint8_t x_46; 
x_46 = l_Lean_Expr_hasFVar(x_1);
if (x_46 == 0)
{
lean_object* x_47; 
lean_dec(x_2);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_1);
lean_ctor_set(x_47, 1, x_3);
return x_47;
}
else
{
lean_object* x_48; 
x_48 = lean_box(0);
x_22 = x_48;
goto block_44;
}
}
else
{
lean_object* x_49; 
x_49 = lean_box(0);
x_22 = x_49;
goto block_44;
}
block_44:
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_22);
x_23 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_1, x_2, x_3);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_2);
lean_inc(x_1);
x_26 = l_Lean_Meta_CheckAssignment_checkFVar___at_Lean_Meta_CheckAssignment_check___main___spec__1(x_1, x_2, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_27);
x_29 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_1, x_27, x_2, x_28);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
lean_ctor_set(x_29, 0, x_27);
return x_29;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_26);
if (x_34 == 0)
{
return x_26;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_26, 0);
x_36 = lean_ctor_get(x_26, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_26);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_23);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_23, 0);
lean_dec(x_39);
x_40 = lean_ctor_get(x_24, 0);
lean_inc(x_40);
lean_dec(x_24);
lean_ctor_set(x_23, 0, x_40);
return x_23;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_23, 1);
lean_inc(x_41);
lean_dec(x_23);
x_42 = lean_ctor_get(x_24, 0);
lean_inc(x_42);
lean_dec(x_24);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
}
}
case 2:
{
lean_object* x_50; uint8_t x_73; 
x_73 = l_Lean_Expr_hasExprMVar(x_1);
if (x_73 == 0)
{
uint8_t x_74; 
x_74 = l_Lean_Expr_hasFVar(x_1);
if (x_74 == 0)
{
lean_object* x_75; 
lean_dec(x_2);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_1);
lean_ctor_set(x_75, 1, x_3);
return x_75;
}
else
{
lean_object* x_76; 
x_76 = lean_box(0);
x_50 = x_76;
goto block_72;
}
}
else
{
lean_object* x_77; 
x_77 = lean_box(0);
x_50 = x_77;
goto block_72;
}
block_72:
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_50);
x_51 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_1, x_2, x_3);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
lean_inc(x_2);
lean_inc(x_1);
x_54 = l_Lean_Meta_CheckAssignment_checkMVar___at_Lean_Meta_CheckAssignment_check___main___spec__4(x_1, x_2, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
lean_inc(x_55);
x_57 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_1, x_55, x_2, x_56);
lean_dec(x_2);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_57, 0);
lean_dec(x_59);
lean_ctor_set(x_57, 0, x_55);
return x_57;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_55);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
else
{
uint8_t x_62; 
lean_dec(x_2);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_54);
if (x_62 == 0)
{
return x_54;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_54, 0);
x_64 = lean_ctor_get(x_54, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_54);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_2);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_51);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_51, 0);
lean_dec(x_67);
x_68 = lean_ctor_get(x_52, 0);
lean_inc(x_68);
lean_dec(x_52);
lean_ctor_set(x_51, 0, x_68);
return x_51;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_51, 1);
lean_inc(x_69);
lean_dec(x_51);
x_70 = lean_ctor_get(x_52, 0);
lean_inc(x_70);
lean_dec(x_52);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
}
}
case 5:
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_112; uint8_t x_128; 
x_78 = lean_ctor_get(x_1, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_1, 1);
lean_inc(x_79);
x_128 = l_Lean_Expr_hasExprMVar(x_78);
if (x_128 == 0)
{
uint8_t x_129; 
x_129 = l_Lean_Expr_hasFVar(x_78);
if (x_129 == 0)
{
x_80 = x_78;
x_81 = x_3;
goto block_111;
}
else
{
lean_object* x_130; 
x_130 = lean_box(0);
x_112 = x_130;
goto block_127;
}
}
else
{
lean_object* x_131; 
x_131 = lean_box(0);
x_112 = x_131;
goto block_127;
}
block_111:
{
lean_object* x_82; lean_object* x_83; lean_object* x_91; uint8_t x_107; 
x_107 = l_Lean_Expr_hasExprMVar(x_79);
if (x_107 == 0)
{
uint8_t x_108; 
x_108 = l_Lean_Expr_hasFVar(x_79);
if (x_108 == 0)
{
lean_dec(x_2);
x_82 = x_79;
x_83 = x_81;
goto block_90;
}
else
{
lean_object* x_109; 
x_109 = lean_box(0);
x_91 = x_109;
goto block_106;
}
}
else
{
lean_object* x_110; 
x_110 = lean_box(0);
x_91 = x_110;
goto block_106;
}
block_90:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_expr_update_app(x_1, x_80, x_82);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_82);
lean_dec(x_80);
lean_dec(x_1);
x_86 = l_Lean_Expr_Inhabited;
x_87 = l_Lean_Expr_updateApp_x21___closed__1;
x_88 = lean_panic_fn(x_87);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_83);
return x_89;
}
}
block_106:
{
lean_object* x_92; lean_object* x_93; 
lean_dec(x_91);
x_92 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_79, x_2, x_81);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
lean_inc(x_2);
lean_inc(x_79);
x_95 = l_Lean_Meta_CheckAssignment_check___main(x_79, x_2, x_94);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
lean_inc(x_96);
x_98 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_79, x_96, x_2, x_97);
lean_dec(x_2);
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
lean_dec(x_98);
x_82 = x_96;
x_83 = x_99;
goto block_90;
}
else
{
uint8_t x_100; 
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_2);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_95);
if (x_100 == 0)
{
return x_95;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_95, 0);
x_102 = lean_ctor_get(x_95, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_95);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
lean_object* x_104; lean_object* x_105; 
lean_dec(x_79);
lean_dec(x_2);
x_104 = lean_ctor_get(x_92, 1);
lean_inc(x_104);
lean_dec(x_92);
x_105 = lean_ctor_get(x_93, 0);
lean_inc(x_105);
lean_dec(x_93);
x_82 = x_105;
x_83 = x_104;
goto block_90;
}
}
}
block_127:
{
lean_object* x_113; lean_object* x_114; 
lean_dec(x_112);
x_113 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_78, x_2, x_3);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
lean_inc(x_2);
lean_inc(x_78);
x_116 = l_Lean_Meta_CheckAssignment_check___main(x_78, x_2, x_115);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
lean_inc(x_117);
x_119 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_78, x_117, x_2, x_118);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
lean_dec(x_119);
x_80 = x_117;
x_81 = x_120;
goto block_111;
}
else
{
uint8_t x_121; 
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_2);
lean_dec(x_1);
x_121 = !lean_is_exclusive(x_116);
if (x_121 == 0)
{
return x_116;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_116, 0);
x_123 = lean_ctor_get(x_116, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_116);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
else
{
lean_object* x_125; lean_object* x_126; 
lean_dec(x_78);
x_125 = lean_ctor_get(x_113, 1);
lean_inc(x_125);
lean_dec(x_113);
x_126 = lean_ctor_get(x_114, 0);
lean_inc(x_126);
lean_dec(x_114);
x_80 = x_126;
x_81 = x_125;
goto block_111;
}
}
}
case 6:
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_168; uint8_t x_184; 
x_132 = lean_ctor_get(x_1, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_1, 2);
lean_inc(x_133);
x_184 = l_Lean_Expr_hasExprMVar(x_132);
if (x_184 == 0)
{
uint8_t x_185; 
x_185 = l_Lean_Expr_hasFVar(x_132);
if (x_185 == 0)
{
x_134 = x_132;
x_135 = x_3;
goto block_167;
}
else
{
lean_object* x_186; 
x_186 = lean_box(0);
x_168 = x_186;
goto block_183;
}
}
else
{
lean_object* x_187; 
x_187 = lean_box(0);
x_168 = x_187;
goto block_183;
}
block_167:
{
lean_object* x_136; lean_object* x_137; lean_object* x_147; uint8_t x_163; 
x_163 = l_Lean_Expr_hasExprMVar(x_133);
if (x_163 == 0)
{
uint8_t x_164; 
x_164 = l_Lean_Expr_hasFVar(x_133);
if (x_164 == 0)
{
lean_dec(x_2);
x_136 = x_133;
x_137 = x_135;
goto block_146;
}
else
{
lean_object* x_165; 
x_165 = lean_box(0);
x_147 = x_165;
goto block_162;
}
}
else
{
lean_object* x_166; 
x_166 = lean_box(0);
x_147 = x_166;
goto block_162;
}
block_146:
{
if (lean_obj_tag(x_1) == 6)
{
uint64_t x_138; uint8_t x_139; lean_object* x_140; lean_object* x_141; 
x_138 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_139 = (uint8_t)((x_138 << 24) >> 61);
x_140 = lean_expr_update_lambda(x_1, x_139, x_134, x_136);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_137);
return x_141;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_136);
lean_dec(x_134);
lean_dec(x_1);
x_142 = l_Lean_Expr_Inhabited;
x_143 = l_Lean_Expr_updateLambdaE_x21___closed__1;
x_144 = lean_panic_fn(x_143);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_137);
return x_145;
}
}
block_162:
{
lean_object* x_148; lean_object* x_149; 
lean_dec(x_147);
x_148 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_133, x_2, x_135);
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
lean_dec(x_148);
lean_inc(x_2);
lean_inc(x_133);
x_151 = l_Lean_Meta_CheckAssignment_check___main(x_133, x_2, x_150);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
lean_dec(x_151);
lean_inc(x_152);
x_154 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_133, x_152, x_2, x_153);
lean_dec(x_2);
x_155 = lean_ctor_get(x_154, 1);
lean_inc(x_155);
lean_dec(x_154);
x_136 = x_152;
x_137 = x_155;
goto block_146;
}
else
{
uint8_t x_156; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_2);
lean_dec(x_1);
x_156 = !lean_is_exclusive(x_151);
if (x_156 == 0)
{
return x_151;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_151, 0);
x_158 = lean_ctor_get(x_151, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_151);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
}
else
{
lean_object* x_160; lean_object* x_161; 
lean_dec(x_133);
lean_dec(x_2);
x_160 = lean_ctor_get(x_148, 1);
lean_inc(x_160);
lean_dec(x_148);
x_161 = lean_ctor_get(x_149, 0);
lean_inc(x_161);
lean_dec(x_149);
x_136 = x_161;
x_137 = x_160;
goto block_146;
}
}
}
block_183:
{
lean_object* x_169; lean_object* x_170; 
lean_dec(x_168);
x_169 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_132, x_2, x_3);
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; 
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
lean_dec(x_169);
lean_inc(x_2);
lean_inc(x_132);
x_172 = l_Lean_Meta_CheckAssignment_check___main(x_132, x_2, x_171);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
lean_inc(x_173);
x_175 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_132, x_173, x_2, x_174);
x_176 = lean_ctor_get(x_175, 1);
lean_inc(x_176);
lean_dec(x_175);
x_134 = x_173;
x_135 = x_176;
goto block_167;
}
else
{
uint8_t x_177; 
lean_dec(x_133);
lean_dec(x_132);
lean_dec(x_2);
lean_dec(x_1);
x_177 = !lean_is_exclusive(x_172);
if (x_177 == 0)
{
return x_172;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_172, 0);
x_179 = lean_ctor_get(x_172, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_172);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
}
}
else
{
lean_object* x_181; lean_object* x_182; 
lean_dec(x_132);
x_181 = lean_ctor_get(x_169, 1);
lean_inc(x_181);
lean_dec(x_169);
x_182 = lean_ctor_get(x_170, 0);
lean_inc(x_182);
lean_dec(x_170);
x_134 = x_182;
x_135 = x_181;
goto block_167;
}
}
}
case 7:
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_224; uint8_t x_240; 
x_188 = lean_ctor_get(x_1, 1);
lean_inc(x_188);
x_189 = lean_ctor_get(x_1, 2);
lean_inc(x_189);
x_240 = l_Lean_Expr_hasExprMVar(x_188);
if (x_240 == 0)
{
uint8_t x_241; 
x_241 = l_Lean_Expr_hasFVar(x_188);
if (x_241 == 0)
{
x_190 = x_188;
x_191 = x_3;
goto block_223;
}
else
{
lean_object* x_242; 
x_242 = lean_box(0);
x_224 = x_242;
goto block_239;
}
}
else
{
lean_object* x_243; 
x_243 = lean_box(0);
x_224 = x_243;
goto block_239;
}
block_223:
{
lean_object* x_192; lean_object* x_193; lean_object* x_203; uint8_t x_219; 
x_219 = l_Lean_Expr_hasExprMVar(x_189);
if (x_219 == 0)
{
uint8_t x_220; 
x_220 = l_Lean_Expr_hasFVar(x_189);
if (x_220 == 0)
{
lean_dec(x_2);
x_192 = x_189;
x_193 = x_191;
goto block_202;
}
else
{
lean_object* x_221; 
x_221 = lean_box(0);
x_203 = x_221;
goto block_218;
}
}
else
{
lean_object* x_222; 
x_222 = lean_box(0);
x_203 = x_222;
goto block_218;
}
block_202:
{
if (lean_obj_tag(x_1) == 7)
{
uint64_t x_194; uint8_t x_195; lean_object* x_196; lean_object* x_197; 
x_194 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_195 = (uint8_t)((x_194 << 24) >> 61);
x_196 = lean_expr_update_forall(x_1, x_195, x_190, x_192);
x_197 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_193);
return x_197;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_192);
lean_dec(x_190);
lean_dec(x_1);
x_198 = l_Lean_Expr_Inhabited;
x_199 = l_Lean_Expr_updateForallE_x21___closed__1;
x_200 = lean_panic_fn(x_199);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_193);
return x_201;
}
}
block_218:
{
lean_object* x_204; lean_object* x_205; 
lean_dec(x_203);
x_204 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_189, x_2, x_191);
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
if (lean_obj_tag(x_205) == 0)
{
lean_object* x_206; lean_object* x_207; 
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
lean_dec(x_204);
lean_inc(x_2);
lean_inc(x_189);
x_207 = l_Lean_Meta_CheckAssignment_check___main(x_189, x_2, x_206);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
lean_dec(x_207);
lean_inc(x_208);
x_210 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_189, x_208, x_2, x_209);
lean_dec(x_2);
x_211 = lean_ctor_get(x_210, 1);
lean_inc(x_211);
lean_dec(x_210);
x_192 = x_208;
x_193 = x_211;
goto block_202;
}
else
{
uint8_t x_212; 
lean_dec(x_190);
lean_dec(x_189);
lean_dec(x_2);
lean_dec(x_1);
x_212 = !lean_is_exclusive(x_207);
if (x_212 == 0)
{
return x_207;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_213 = lean_ctor_get(x_207, 0);
x_214 = lean_ctor_get(x_207, 1);
lean_inc(x_214);
lean_inc(x_213);
lean_dec(x_207);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_214);
return x_215;
}
}
}
else
{
lean_object* x_216; lean_object* x_217; 
lean_dec(x_189);
lean_dec(x_2);
x_216 = lean_ctor_get(x_204, 1);
lean_inc(x_216);
lean_dec(x_204);
x_217 = lean_ctor_get(x_205, 0);
lean_inc(x_217);
lean_dec(x_205);
x_192 = x_217;
x_193 = x_216;
goto block_202;
}
}
}
block_239:
{
lean_object* x_225; lean_object* x_226; 
lean_dec(x_224);
x_225 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_188, x_2, x_3);
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; lean_object* x_228; 
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
lean_dec(x_225);
lean_inc(x_2);
lean_inc(x_188);
x_228 = l_Lean_Meta_CheckAssignment_check___main(x_188, x_2, x_227);
if (lean_obj_tag(x_228) == 0)
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_229 = lean_ctor_get(x_228, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_228, 1);
lean_inc(x_230);
lean_dec(x_228);
lean_inc(x_229);
x_231 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_188, x_229, x_2, x_230);
x_232 = lean_ctor_get(x_231, 1);
lean_inc(x_232);
lean_dec(x_231);
x_190 = x_229;
x_191 = x_232;
goto block_223;
}
else
{
uint8_t x_233; 
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_2);
lean_dec(x_1);
x_233 = !lean_is_exclusive(x_228);
if (x_233 == 0)
{
return x_228;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_234 = lean_ctor_get(x_228, 0);
x_235 = lean_ctor_get(x_228, 1);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_228);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_234);
lean_ctor_set(x_236, 1, x_235);
return x_236;
}
}
}
else
{
lean_object* x_237; lean_object* x_238; 
lean_dec(x_188);
x_237 = lean_ctor_get(x_225, 1);
lean_inc(x_237);
lean_dec(x_225);
x_238 = lean_ctor_get(x_226, 0);
lean_inc(x_238);
lean_dec(x_226);
x_190 = x_238;
x_191 = x_237;
goto block_223;
}
}
}
case 8:
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_302; uint8_t x_318; 
x_244 = lean_ctor_get(x_1, 1);
lean_inc(x_244);
x_245 = lean_ctor_get(x_1, 2);
lean_inc(x_245);
x_246 = lean_ctor_get(x_1, 3);
lean_inc(x_246);
x_318 = l_Lean_Expr_hasExprMVar(x_244);
if (x_318 == 0)
{
uint8_t x_319; 
x_319 = l_Lean_Expr_hasFVar(x_244);
if (x_319 == 0)
{
x_247 = x_244;
x_248 = x_3;
goto block_301;
}
else
{
lean_object* x_320; 
x_320 = lean_box(0);
x_302 = x_320;
goto block_317;
}
}
else
{
lean_object* x_321; 
x_321 = lean_box(0);
x_302 = x_321;
goto block_317;
}
block_301:
{
lean_object* x_249; lean_object* x_250; lean_object* x_281; uint8_t x_297; 
x_297 = l_Lean_Expr_hasExprMVar(x_245);
if (x_297 == 0)
{
uint8_t x_298; 
x_298 = l_Lean_Expr_hasFVar(x_245);
if (x_298 == 0)
{
x_249 = x_245;
x_250 = x_248;
goto block_280;
}
else
{
lean_object* x_299; 
x_299 = lean_box(0);
x_281 = x_299;
goto block_296;
}
}
else
{
lean_object* x_300; 
x_300 = lean_box(0);
x_281 = x_300;
goto block_296;
}
block_280:
{
lean_object* x_251; lean_object* x_252; lean_object* x_260; uint8_t x_276; 
x_276 = l_Lean_Expr_hasExprMVar(x_246);
if (x_276 == 0)
{
uint8_t x_277; 
x_277 = l_Lean_Expr_hasFVar(x_246);
if (x_277 == 0)
{
lean_dec(x_2);
x_251 = x_246;
x_252 = x_250;
goto block_259;
}
else
{
lean_object* x_278; 
x_278 = lean_box(0);
x_260 = x_278;
goto block_275;
}
}
else
{
lean_object* x_279; 
x_279 = lean_box(0);
x_260 = x_279;
goto block_275;
}
block_259:
{
if (lean_obj_tag(x_1) == 8)
{
lean_object* x_253; lean_object* x_254; 
x_253 = lean_expr_update_let(x_1, x_247, x_249, x_251);
x_254 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_254, 0, x_253);
lean_ctor_set(x_254, 1, x_252);
return x_254;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_251);
lean_dec(x_249);
lean_dec(x_247);
lean_dec(x_1);
x_255 = l_Lean_Expr_Inhabited;
x_256 = l_Lean_Expr_updateLet_x21___closed__1;
x_257 = lean_panic_fn(x_256);
x_258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_252);
return x_258;
}
}
block_275:
{
lean_object* x_261; lean_object* x_262; 
lean_dec(x_260);
x_261 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_246, x_2, x_250);
x_262 = lean_ctor_get(x_261, 0);
lean_inc(x_262);
if (lean_obj_tag(x_262) == 0)
{
lean_object* x_263; lean_object* x_264; 
x_263 = lean_ctor_get(x_261, 1);
lean_inc(x_263);
lean_dec(x_261);
lean_inc(x_2);
lean_inc(x_246);
x_264 = l_Lean_Meta_CheckAssignment_check___main(x_246, x_2, x_263);
if (lean_obj_tag(x_264) == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
lean_dec(x_264);
lean_inc(x_265);
x_267 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_246, x_265, x_2, x_266);
lean_dec(x_2);
x_268 = lean_ctor_get(x_267, 1);
lean_inc(x_268);
lean_dec(x_267);
x_251 = x_265;
x_252 = x_268;
goto block_259;
}
else
{
uint8_t x_269; 
lean_dec(x_249);
lean_dec(x_247);
lean_dec(x_246);
lean_dec(x_2);
lean_dec(x_1);
x_269 = !lean_is_exclusive(x_264);
if (x_269 == 0)
{
return x_264;
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_270 = lean_ctor_get(x_264, 0);
x_271 = lean_ctor_get(x_264, 1);
lean_inc(x_271);
lean_inc(x_270);
lean_dec(x_264);
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_270);
lean_ctor_set(x_272, 1, x_271);
return x_272;
}
}
}
else
{
lean_object* x_273; lean_object* x_274; 
lean_dec(x_246);
lean_dec(x_2);
x_273 = lean_ctor_get(x_261, 1);
lean_inc(x_273);
lean_dec(x_261);
x_274 = lean_ctor_get(x_262, 0);
lean_inc(x_274);
lean_dec(x_262);
x_251 = x_274;
x_252 = x_273;
goto block_259;
}
}
}
block_296:
{
lean_object* x_282; lean_object* x_283; 
lean_dec(x_281);
x_282 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_245, x_2, x_248);
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
if (lean_obj_tag(x_283) == 0)
{
lean_object* x_284; lean_object* x_285; 
x_284 = lean_ctor_get(x_282, 1);
lean_inc(x_284);
lean_dec(x_282);
lean_inc(x_2);
lean_inc(x_245);
x_285 = l_Lean_Meta_CheckAssignment_check___main(x_245, x_2, x_284);
if (lean_obj_tag(x_285) == 0)
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; 
x_286 = lean_ctor_get(x_285, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_285, 1);
lean_inc(x_287);
lean_dec(x_285);
lean_inc(x_286);
x_288 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_245, x_286, x_2, x_287);
x_289 = lean_ctor_get(x_288, 1);
lean_inc(x_289);
lean_dec(x_288);
x_249 = x_286;
x_250 = x_289;
goto block_280;
}
else
{
uint8_t x_290; 
lean_dec(x_247);
lean_dec(x_246);
lean_dec(x_245);
lean_dec(x_2);
lean_dec(x_1);
x_290 = !lean_is_exclusive(x_285);
if (x_290 == 0)
{
return x_285;
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_291 = lean_ctor_get(x_285, 0);
x_292 = lean_ctor_get(x_285, 1);
lean_inc(x_292);
lean_inc(x_291);
lean_dec(x_285);
x_293 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_293, 0, x_291);
lean_ctor_set(x_293, 1, x_292);
return x_293;
}
}
}
else
{
lean_object* x_294; lean_object* x_295; 
lean_dec(x_245);
x_294 = lean_ctor_get(x_282, 1);
lean_inc(x_294);
lean_dec(x_282);
x_295 = lean_ctor_get(x_283, 0);
lean_inc(x_295);
lean_dec(x_283);
x_249 = x_295;
x_250 = x_294;
goto block_280;
}
}
}
block_317:
{
lean_object* x_303; lean_object* x_304; 
lean_dec(x_302);
x_303 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_244, x_2, x_3);
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
if (lean_obj_tag(x_304) == 0)
{
lean_object* x_305; lean_object* x_306; 
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
lean_dec(x_303);
lean_inc(x_2);
lean_inc(x_244);
x_306 = l_Lean_Meta_CheckAssignment_check___main(x_244, x_2, x_305);
if (lean_obj_tag(x_306) == 0)
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_307 = lean_ctor_get(x_306, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_306, 1);
lean_inc(x_308);
lean_dec(x_306);
lean_inc(x_307);
x_309 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_244, x_307, x_2, x_308);
x_310 = lean_ctor_get(x_309, 1);
lean_inc(x_310);
lean_dec(x_309);
x_247 = x_307;
x_248 = x_310;
goto block_301;
}
else
{
uint8_t x_311; 
lean_dec(x_246);
lean_dec(x_245);
lean_dec(x_244);
lean_dec(x_2);
lean_dec(x_1);
x_311 = !lean_is_exclusive(x_306);
if (x_311 == 0)
{
return x_306;
}
else
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; 
x_312 = lean_ctor_get(x_306, 0);
x_313 = lean_ctor_get(x_306, 1);
lean_inc(x_313);
lean_inc(x_312);
lean_dec(x_306);
x_314 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_314, 0, x_312);
lean_ctor_set(x_314, 1, x_313);
return x_314;
}
}
}
else
{
lean_object* x_315; lean_object* x_316; 
lean_dec(x_244);
x_315 = lean_ctor_get(x_303, 1);
lean_inc(x_315);
lean_dec(x_303);
x_316 = lean_ctor_get(x_304, 0);
lean_inc(x_316);
lean_dec(x_304);
x_247 = x_316;
x_248 = x_315;
goto block_301;
}
}
}
case 10:
{
lean_object* x_322; lean_object* x_323; uint8_t x_339; 
x_322 = lean_ctor_get(x_1, 1);
lean_inc(x_322);
x_339 = l_Lean_Expr_hasExprMVar(x_322);
if (x_339 == 0)
{
uint8_t x_340; 
x_340 = l_Lean_Expr_hasFVar(x_322);
if (x_340 == 0)
{
lean_dec(x_2);
x_4 = x_322;
x_5 = x_3;
goto block_12;
}
else
{
lean_object* x_341; 
x_341 = lean_box(0);
x_323 = x_341;
goto block_338;
}
}
else
{
lean_object* x_342; 
x_342 = lean_box(0);
x_323 = x_342;
goto block_338;
}
block_338:
{
lean_object* x_324; lean_object* x_325; 
lean_dec(x_323);
x_324 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_322, x_2, x_3);
x_325 = lean_ctor_get(x_324, 0);
lean_inc(x_325);
if (lean_obj_tag(x_325) == 0)
{
lean_object* x_326; lean_object* x_327; 
x_326 = lean_ctor_get(x_324, 1);
lean_inc(x_326);
lean_dec(x_324);
lean_inc(x_2);
lean_inc(x_322);
x_327 = l_Lean_Meta_CheckAssignment_check___main(x_322, x_2, x_326);
if (lean_obj_tag(x_327) == 0)
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; 
x_328 = lean_ctor_get(x_327, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_327, 1);
lean_inc(x_329);
lean_dec(x_327);
lean_inc(x_328);
x_330 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_322, x_328, x_2, x_329);
lean_dec(x_2);
x_331 = lean_ctor_get(x_330, 1);
lean_inc(x_331);
lean_dec(x_330);
x_4 = x_328;
x_5 = x_331;
goto block_12;
}
else
{
uint8_t x_332; 
lean_dec(x_322);
lean_dec(x_2);
lean_dec(x_1);
x_332 = !lean_is_exclusive(x_327);
if (x_332 == 0)
{
return x_327;
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_333 = lean_ctor_get(x_327, 0);
x_334 = lean_ctor_get(x_327, 1);
lean_inc(x_334);
lean_inc(x_333);
lean_dec(x_327);
x_335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_335, 0, x_333);
lean_ctor_set(x_335, 1, x_334);
return x_335;
}
}
}
else
{
lean_object* x_336; lean_object* x_337; 
lean_dec(x_322);
lean_dec(x_2);
x_336 = lean_ctor_get(x_324, 1);
lean_inc(x_336);
lean_dec(x_324);
x_337 = lean_ctor_get(x_325, 0);
lean_inc(x_337);
lean_dec(x_325);
x_4 = x_337;
x_5 = x_336;
goto block_12;
}
}
}
case 11:
{
lean_object* x_343; lean_object* x_344; uint8_t x_360; 
x_343 = lean_ctor_get(x_1, 2);
lean_inc(x_343);
x_360 = l_Lean_Expr_hasExprMVar(x_343);
if (x_360 == 0)
{
uint8_t x_361; 
x_361 = l_Lean_Expr_hasFVar(x_343);
if (x_361 == 0)
{
lean_dec(x_2);
x_13 = x_343;
x_14 = x_3;
goto block_21;
}
else
{
lean_object* x_362; 
x_362 = lean_box(0);
x_344 = x_362;
goto block_359;
}
}
else
{
lean_object* x_363; 
x_363 = lean_box(0);
x_344 = x_363;
goto block_359;
}
block_359:
{
lean_object* x_345; lean_object* x_346; 
lean_dec(x_344);
x_345 = l___private_Init_Lean_Meta_ExprDefEq_7__findCached(x_343, x_2, x_3);
x_346 = lean_ctor_get(x_345, 0);
lean_inc(x_346);
if (lean_obj_tag(x_346) == 0)
{
lean_object* x_347; lean_object* x_348; 
x_347 = lean_ctor_get(x_345, 1);
lean_inc(x_347);
lean_dec(x_345);
lean_inc(x_2);
lean_inc(x_343);
x_348 = l_Lean_Meta_CheckAssignment_check___main(x_343, x_2, x_347);
if (lean_obj_tag(x_348) == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
x_350 = lean_ctor_get(x_348, 1);
lean_inc(x_350);
lean_dec(x_348);
lean_inc(x_349);
x_351 = l___private_Init_Lean_Meta_ExprDefEq_8__cache(x_343, x_349, x_2, x_350);
lean_dec(x_2);
x_352 = lean_ctor_get(x_351, 1);
lean_inc(x_352);
lean_dec(x_351);
x_13 = x_349;
x_14 = x_352;
goto block_21;
}
else
{
uint8_t x_353; 
lean_dec(x_343);
lean_dec(x_2);
lean_dec(x_1);
x_353 = !lean_is_exclusive(x_348);
if (x_353 == 0)
{
return x_348;
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_354 = lean_ctor_get(x_348, 0);
x_355 = lean_ctor_get(x_348, 1);
lean_inc(x_355);
lean_inc(x_354);
lean_dec(x_348);
x_356 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_356, 0, x_354);
lean_ctor_set(x_356, 1, x_355);
return x_356;
}
}
}
else
{
lean_object* x_357; lean_object* x_358; 
lean_dec(x_343);
lean_dec(x_2);
x_357 = lean_ctor_get(x_345, 1);
lean_inc(x_357);
lean_dec(x_345);
x_358 = lean_ctor_get(x_346, 0);
lean_inc(x_358);
lean_dec(x_346);
x_13 = x_358;
x_14 = x_357;
goto block_21;
}
}
}
case 12:
{
lean_object* x_364; lean_object* x_365; lean_object* x_366; 
lean_dec(x_1);
x_364 = l_Lean_Meta_CheckAssignment_check___main___closed__1;
x_365 = l_unreachable_x21___rarg(x_364);
x_366 = lean_apply_2(x_365, x_2, x_3);
return x_366;
}
default: 
{
lean_object* x_367; 
lean_dec(x_2);
x_367 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_367, 0, x_1);
lean_ctor_set(x_367, 1, x_3);
return x_367;
}
}
block_12:
{
if (lean_obj_tag(x_1) == 10)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_expr_update_mdata(x_1, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_1);
x_8 = l_Lean_Expr_Inhabited;
x_9 = l_Lean_Expr_updateMData_x21___closed__2;
x_10 = lean_panic_fn(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
}
block_21:
{
if (lean_obj_tag(x_1) == 11)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_expr_update_proj(x_1, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_13);
lean_dec(x_1);
x_17 = l_Lean_Expr_Inhabited;
x_18 = l_Lean_Expr_updateProj_x21___closed__2;
x_19 = lean_panic_fn(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_14);
return x_20;
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignment_check___main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignment_check___main___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_contains___at_Lean_Meta_CheckAssignment_check___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at_Lean_Meta_CheckAssignment_check___main___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_CheckAssignment_check(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_CheckAssignment_check___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_check___closed__2;
x_2 = l_Lean_Meta_isExprDefEq___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("assign");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__1;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("occursCheck");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__5;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_formatEntry___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("outOfScopeFVar");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__9;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" @ ");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__11;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__12;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("readOnlyMVarWithBiggerLCtx");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__14;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__15;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("mvarTypeNotWellFormedInSmallerLCtx");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__17;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__18;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_6, 4);
lean_inc(x_7);
x_8 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__6;
x_12 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_11, x_5, x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_3);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_dec(x_12);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_5, 1);
x_25 = l_Lean_mkMVar(x_1);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_29 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_2, x_27, x_28);
x_30 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_29);
x_31 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_32 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_33, 0, x_3);
x_34 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
lean_inc(x_24);
x_35 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_35, 0, x_22);
lean_ctor_set(x_35, 1, x_23);
lean_ctor_set(x_35, 2, x_24);
lean_ctor_set(x_35, 3, x_34);
x_36 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__5;
x_37 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_36, x_35, x_5, x_21);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_37, 0);
lean_dec(x_39);
x_40 = lean_box(0);
lean_ctor_set(x_37, 0, x_40);
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
lean_dec(x_37);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
}
}
case 1:
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_3);
lean_dec(x_1);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_6);
return x_45;
}
case 2:
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_ctor_get(x_6, 4);
lean_inc(x_46);
x_47 = lean_ctor_get_uint8(x_46, sizeof(void*)*1);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_6);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_50 = lean_ctor_get(x_4, 0);
lean_inc(x_50);
lean_dec(x_4);
x_51 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__10;
x_52 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_51, x_5, x_6);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_unbox(x_53);
lean_dec(x_53);
if (x_54 == 0)
{
uint8_t x_55; 
lean_dec(x_50);
lean_dec(x_3);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_52, 0);
lean_dec(x_56);
x_57 = lean_box(0);
lean_ctor_set(x_52, 0, x_57);
return x_52;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
lean_dec(x_52);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_61 = lean_ctor_get(x_52, 1);
lean_inc(x_61);
lean_dec(x_52);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
x_64 = lean_ctor_get(x_5, 1);
x_65 = l_Lean_mkFVar(x_50);
x_66 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_66, 0, x_65);
x_67 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__13;
x_68 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = l_Lean_mkMVar(x_1);
x_70 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_70, 0, x_69);
x_71 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_unsigned_to_nat(0u);
x_73 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_74 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_2, x_72, x_73);
x_75 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_75, 0, x_71);
lean_ctor_set(x_75, 1, x_74);
x_76 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_77 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_78, 0, x_3);
x_79 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
lean_inc(x_64);
x_80 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_80, 0, x_62);
lean_ctor_set(x_80, 1, x_63);
lean_ctor_set(x_80, 2, x_64);
lean_ctor_set(x_80, 3, x_79);
x_81 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__9;
x_82 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_81, x_80, x_5, x_61);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_82, 0);
lean_dec(x_84);
x_85 = lean_box(0);
lean_ctor_set(x_82, 0, x_85);
return x_82;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_82, 1);
lean_inc(x_86);
lean_dec(x_82);
x_87 = lean_box(0);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
}
}
case 3:
{
lean_object* x_89; uint8_t x_90; 
x_89 = lean_ctor_get(x_6, 4);
lean_inc(x_89);
x_90 = lean_ctor_get_uint8(x_89, sizeof(void*)*1);
lean_dec(x_89);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_91 = lean_box(0);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_6);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; 
x_93 = lean_ctor_get(x_4, 0);
lean_inc(x_93);
lean_dec(x_4);
x_94 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__16;
x_95 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_94, x_5, x_6);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_unbox(x_96);
lean_dec(x_96);
if (x_97 == 0)
{
uint8_t x_98; 
lean_dec(x_93);
lean_dec(x_3);
lean_dec(x_1);
x_98 = !lean_is_exclusive(x_95);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_95, 0);
lean_dec(x_99);
x_100 = lean_box(0);
lean_ctor_set(x_95, 0, x_100);
return x_95;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_95, 1);
lean_inc(x_101);
lean_dec(x_95);
x_102 = lean_box(0);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_104 = lean_ctor_get(x_95, 1);
lean_inc(x_104);
lean_dec(x_95);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
x_107 = lean_ctor_get(x_5, 1);
x_108 = l_Lean_mkMVar(x_93);
x_109 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_109, 0, x_108);
x_110 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__13;
x_111 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
x_112 = l_Lean_mkMVar(x_1);
x_113 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_113, 0, x_112);
x_114 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_114, 0, x_111);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_unsigned_to_nat(0u);
x_116 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_117 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_2, x_115, x_116);
x_118 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_118, 0, x_114);
lean_ctor_set(x_118, 1, x_117);
x_119 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_120 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_121, 0, x_3);
x_122 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
lean_inc(x_107);
x_123 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_123, 0, x_105);
lean_ctor_set(x_123, 1, x_106);
lean_ctor_set(x_123, 2, x_107);
lean_ctor_set(x_123, 3, x_122);
x_124 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__15;
x_125 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_124, x_123, x_5, x_104);
x_126 = !lean_is_exclusive(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_ctor_get(x_125, 0);
lean_dec(x_127);
x_128 = lean_box(0);
lean_ctor_set(x_125, 0, x_128);
return x_125;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_125, 1);
lean_inc(x_129);
lean_dec(x_125);
x_130 = lean_box(0);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
return x_131;
}
}
}
}
case 4:
{
lean_object* x_132; uint8_t x_133; 
x_132 = lean_ctor_get(x_6, 4);
lean_inc(x_132);
x_133 = lean_ctor_get_uint8(x_132, sizeof(void*)*1);
lean_dec(x_132);
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_134 = lean_box(0);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_6);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint8_t x_140; 
x_136 = lean_ctor_get(x_4, 0);
lean_inc(x_136);
lean_dec(x_4);
x_137 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__19;
x_138 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_137, x_5, x_6);
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_unbox(x_139);
lean_dec(x_139);
if (x_140 == 0)
{
uint8_t x_141; 
lean_dec(x_136);
lean_dec(x_3);
lean_dec(x_1);
x_141 = !lean_is_exclusive(x_138);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; 
x_142 = lean_ctor_get(x_138, 0);
lean_dec(x_142);
x_143 = lean_box(0);
lean_ctor_set(x_138, 0, x_143);
return x_138;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_138, 1);
lean_inc(x_144);
lean_dec(x_138);
x_145 = lean_box(0);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_144);
return x_146;
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; uint8_t x_169; 
x_147 = lean_ctor_get(x_138, 1);
lean_inc(x_147);
lean_dec(x_138);
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_147, 1);
lean_inc(x_149);
x_150 = lean_ctor_get(x_5, 1);
x_151 = l_Lean_mkMVar(x_136);
x_152 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_152, 0, x_151);
x_153 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__13;
x_154 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
x_155 = l_Lean_mkMVar(x_1);
x_156 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_156, 0, x_155);
x_157 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_156);
x_158 = lean_unsigned_to_nat(0u);
x_159 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_160 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_2, x_158, x_159);
x_161 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_161, 0, x_157);
lean_ctor_set(x_161, 1, x_160);
x_162 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_163 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_164, 0, x_3);
x_165 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
lean_inc(x_150);
x_166 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_166, 0, x_148);
lean_ctor_set(x_166, 1, x_149);
lean_ctor_set(x_166, 2, x_150);
lean_ctor_set(x_166, 3, x_165);
x_167 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__18;
x_168 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_167, x_166, x_5, x_147);
x_169 = !lean_is_exclusive(x_168);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; 
x_170 = lean_ctor_get(x_168, 0);
lean_dec(x_170);
x_171 = lean_box(0);
lean_ctor_set(x_168, 0, x_171);
return x_168;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_168, 1);
lean_inc(x_172);
lean_dec(x_168);
x_173 = lean_box(0);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
}
}
}
default: 
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_3);
lean_dec(x_1);
x_175 = lean_ctor_get(x_4, 0);
lean_inc(x_175);
lean_dec(x_4);
x_176 = lean_ctor_get(x_6, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_6, 1);
lean_inc(x_177);
x_178 = lean_ctor_get(x_5, 1);
lean_inc(x_178);
x_179 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_179, 0, x_176);
lean_ctor_set(x_179, 1, x_177);
lean_ctor_set(x_179, 2, x_178);
x_180 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_180, 0, x_175);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_6);
return x_181;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_11__visit(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Expr_hasExprMVar(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasFVar(x_2);
if (x_4 == 0)
{
uint8_t x_5; lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = 1;
x_6 = lean_box(x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_apply_1(x_1, x_2);
return x_7;
}
}
else
{
lean_object* x_8; 
x_8 = lean_apply_1(x_1, x_2);
return x_8;
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_Expr_fvarId_x21(x_8);
lean_dec(x_8);
x_10 = lean_name_eq(x_9, x_2);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_5);
return x_10;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_Expr_fvarId_x21(x_8);
lean_dec(x_8);
x_10 = lean_name_eq(x_9, x_2);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_5);
return x_10;
}
}
}
}
lean_object* l_Lean_Meta_CheckAssignmentQuick_check___main(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_8)) {
case 1:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_dec(x_3);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = l_Lean_LocalContext_contains(x_10, x_9);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_inc(x_9);
x_12 = lean_local_ctx_find(x_4, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_get_size(x_7);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__1(x_7, x_9, x_7, x_13, x_14);
lean_dec(x_13);
lean_dec(x_9);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; 
x_16 = 0;
x_17 = lean_box(x_16);
return x_17;
}
else
{
uint8_t x_18; lean_object* x_19; 
x_18 = 1;
x_19 = lean_box(x_18);
return x_19;
}
}
else
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_12, 0);
lean_inc(x_20);
lean_dec(x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_20);
x_21 = lean_array_get_size(x_7);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__2(x_7, x_9, x_7, x_21, x_22);
lean_dec(x_21);
lean_dec(x_9);
if (x_23 == 0)
{
uint8_t x_24; lean_object* x_25; 
x_24 = 0;
x_25 = lean_box(x_24);
return x_25;
}
else
{
uint8_t x_26; lean_object* x_27; 
x_26 = 1;
x_27 = lean_box(x_26);
return x_27;
}
}
else
{
uint8_t x_28; lean_object* x_29; 
lean_dec(x_20);
lean_dec(x_9);
x_28 = 0;
x_29 = lean_box(x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; lean_object* x_31; 
lean_dec(x_9);
lean_dec(x_4);
x_30 = 1;
x_31 = lean_box(x_30);
return x_31;
}
}
case 2:
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_4);
x_32 = lean_ctor_get(x_8, 0);
lean_inc(x_32);
lean_dec(x_8);
lean_inc(x_32);
lean_inc(x_3);
x_33 = lean_metavar_ctx_get_expr_assignment(x_3, x_32);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = lean_name_eq(x_32, x_6);
if (x_34 == 0)
{
lean_object* x_35; 
lean_inc(x_3);
x_35 = lean_metavar_ctx_find_decl(x_3, x_32);
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_36; lean_object* x_37; 
lean_dec(x_5);
lean_dec(x_3);
x_36 = 0;
x_37 = lean_box(x_36);
return x_37;
}
else
{
if (x_1 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = lean_ctor_get(x_35, 0);
lean_inc(x_38);
lean_dec(x_35);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_5, 1);
lean_inc(x_40);
lean_dec(x_5);
lean_inc(x_40);
lean_inc(x_39);
x_41 = l_Lean_LocalContext_isSubPrefixOf(x_39, x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_38, 3);
lean_inc(x_42);
x_43 = lean_ctor_get(x_3, 0);
lean_inc(x_43);
lean_dec(x_3);
x_44 = lean_nat_dec_eq(x_42, x_43);
lean_dec(x_43);
lean_dec(x_42);
if (x_44 == 0)
{
uint8_t x_45; lean_object* x_46; 
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
x_45 = 0;
x_46 = lean_box(x_45);
return x_46;
}
else
{
uint8_t x_47; 
x_47 = lean_ctor_get_uint8(x_38, sizeof(void*)*5);
lean_dec(x_38);
if (x_47 == 0)
{
if (x_2 == 0)
{
uint8_t x_48; lean_object* x_49; 
lean_dec(x_40);
lean_dec(x_39);
x_48 = 1;
x_49 = lean_box(x_48);
return x_49;
}
else
{
uint8_t x_50; 
x_50 = l_Lean_LocalContext_isSubPrefixOf(x_40, x_39);
if (x_50 == 0)
{
uint8_t x_51; lean_object* x_52; 
x_51 = 1;
x_52 = lean_box(x_51);
return x_52;
}
else
{
uint8_t x_53; lean_object* x_54; 
x_53 = 0;
x_54 = lean_box(x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; lean_object* x_56; 
lean_dec(x_40);
lean_dec(x_39);
x_55 = 0;
x_56 = lean_box(x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; lean_object* x_58; 
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_3);
x_57 = 1;
x_58 = lean_box(x_57);
return x_58;
}
}
else
{
uint8_t x_59; lean_object* x_60; 
lean_dec(x_35);
lean_dec(x_5);
lean_dec(x_3);
x_59 = 0;
x_60 = lean_box(x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; lean_object* x_62; 
lean_dec(x_32);
lean_dec(x_5);
lean_dec(x_3);
x_61 = 0;
x_62 = lean_box(x_61);
return x_62;
}
}
else
{
uint8_t x_63; lean_object* x_64; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_5);
lean_dec(x_3);
x_63 = 0;
x_64 = lean_box(x_63);
return x_64;
}
}
case 5:
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_65 = lean_ctor_get(x_8, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_8, 1);
lean_inc(x_66);
lean_dec(x_8);
x_67 = l_Lean_Expr_hasExprMVar(x_65);
if (x_67 == 0)
{
uint8_t x_68; 
x_68 = l_Lean_Expr_hasFVar(x_65);
if (x_68 == 0)
{
uint8_t x_69; 
lean_dec(x_65);
x_69 = l_Lean_Expr_hasExprMVar(x_66);
if (x_69 == 0)
{
uint8_t x_70; 
x_70 = l_Lean_Expr_hasFVar(x_66);
if (x_70 == 0)
{
uint8_t x_71; lean_object* x_72; 
lean_dec(x_66);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_71 = 1;
x_72 = lean_box(x_71);
return x_72;
}
else
{
x_8 = x_66;
goto _start;
}
}
else
{
x_8 = x_66;
goto _start;
}
}
else
{
lean_object* x_75; uint8_t x_76; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_75 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_65);
x_76 = lean_unbox(x_75);
lean_dec(x_75);
if (x_76 == 0)
{
uint8_t x_77; lean_object* x_78; 
lean_dec(x_66);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_77 = 0;
x_78 = lean_box(x_77);
return x_78;
}
else
{
uint8_t x_79; 
x_79 = l_Lean_Expr_hasExprMVar(x_66);
if (x_79 == 0)
{
uint8_t x_80; 
x_80 = l_Lean_Expr_hasFVar(x_66);
if (x_80 == 0)
{
uint8_t x_81; lean_object* x_82; 
lean_dec(x_66);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_81 = 1;
x_82 = lean_box(x_81);
return x_82;
}
else
{
x_8 = x_66;
goto _start;
}
}
else
{
x_8 = x_66;
goto _start;
}
}
}
}
else
{
lean_object* x_85; uint8_t x_86; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_85 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_65);
x_86 = lean_unbox(x_85);
lean_dec(x_85);
if (x_86 == 0)
{
uint8_t x_87; lean_object* x_88; 
lean_dec(x_66);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_87 = 0;
x_88 = lean_box(x_87);
return x_88;
}
else
{
uint8_t x_89; 
x_89 = l_Lean_Expr_hasExprMVar(x_66);
if (x_89 == 0)
{
uint8_t x_90; 
x_90 = l_Lean_Expr_hasFVar(x_66);
if (x_90 == 0)
{
uint8_t x_91; lean_object* x_92; 
lean_dec(x_66);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_91 = 1;
x_92 = lean_box(x_91);
return x_92;
}
else
{
x_8 = x_66;
goto _start;
}
}
else
{
x_8 = x_66;
goto _start;
}
}
}
}
case 6:
{
lean_object* x_95; lean_object* x_96; uint8_t x_97; 
x_95 = lean_ctor_get(x_8, 1);
lean_inc(x_95);
x_96 = lean_ctor_get(x_8, 2);
lean_inc(x_96);
lean_dec(x_8);
x_97 = l_Lean_Expr_hasExprMVar(x_95);
if (x_97 == 0)
{
uint8_t x_98; 
x_98 = l_Lean_Expr_hasFVar(x_95);
if (x_98 == 0)
{
uint8_t x_99; 
lean_dec(x_95);
x_99 = l_Lean_Expr_hasExprMVar(x_96);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = l_Lean_Expr_hasFVar(x_96);
if (x_100 == 0)
{
uint8_t x_101; lean_object* x_102; 
lean_dec(x_96);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_101 = 1;
x_102 = lean_box(x_101);
return x_102;
}
else
{
x_8 = x_96;
goto _start;
}
}
else
{
x_8 = x_96;
goto _start;
}
}
else
{
lean_object* x_105; uint8_t x_106; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_105 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_95);
x_106 = lean_unbox(x_105);
lean_dec(x_105);
if (x_106 == 0)
{
uint8_t x_107; lean_object* x_108; 
lean_dec(x_96);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_107 = 0;
x_108 = lean_box(x_107);
return x_108;
}
else
{
uint8_t x_109; 
x_109 = l_Lean_Expr_hasExprMVar(x_96);
if (x_109 == 0)
{
uint8_t x_110; 
x_110 = l_Lean_Expr_hasFVar(x_96);
if (x_110 == 0)
{
uint8_t x_111; lean_object* x_112; 
lean_dec(x_96);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_111 = 1;
x_112 = lean_box(x_111);
return x_112;
}
else
{
x_8 = x_96;
goto _start;
}
}
else
{
x_8 = x_96;
goto _start;
}
}
}
}
else
{
lean_object* x_115; uint8_t x_116; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_115 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_95);
x_116 = lean_unbox(x_115);
lean_dec(x_115);
if (x_116 == 0)
{
uint8_t x_117; lean_object* x_118; 
lean_dec(x_96);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_117 = 0;
x_118 = lean_box(x_117);
return x_118;
}
else
{
uint8_t x_119; 
x_119 = l_Lean_Expr_hasExprMVar(x_96);
if (x_119 == 0)
{
uint8_t x_120; 
x_120 = l_Lean_Expr_hasFVar(x_96);
if (x_120 == 0)
{
uint8_t x_121; lean_object* x_122; 
lean_dec(x_96);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_121 = 1;
x_122 = lean_box(x_121);
return x_122;
}
else
{
x_8 = x_96;
goto _start;
}
}
else
{
x_8 = x_96;
goto _start;
}
}
}
}
case 7:
{
lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_125 = lean_ctor_get(x_8, 1);
lean_inc(x_125);
x_126 = lean_ctor_get(x_8, 2);
lean_inc(x_126);
lean_dec(x_8);
x_127 = l_Lean_Expr_hasExprMVar(x_125);
if (x_127 == 0)
{
uint8_t x_128; 
x_128 = l_Lean_Expr_hasFVar(x_125);
if (x_128 == 0)
{
uint8_t x_129; 
lean_dec(x_125);
x_129 = l_Lean_Expr_hasExprMVar(x_126);
if (x_129 == 0)
{
uint8_t x_130; 
x_130 = l_Lean_Expr_hasFVar(x_126);
if (x_130 == 0)
{
uint8_t x_131; lean_object* x_132; 
lean_dec(x_126);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_131 = 1;
x_132 = lean_box(x_131);
return x_132;
}
else
{
x_8 = x_126;
goto _start;
}
}
else
{
x_8 = x_126;
goto _start;
}
}
else
{
lean_object* x_135; uint8_t x_136; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_135 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_125);
x_136 = lean_unbox(x_135);
lean_dec(x_135);
if (x_136 == 0)
{
uint8_t x_137; lean_object* x_138; 
lean_dec(x_126);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_137 = 0;
x_138 = lean_box(x_137);
return x_138;
}
else
{
uint8_t x_139; 
x_139 = l_Lean_Expr_hasExprMVar(x_126);
if (x_139 == 0)
{
uint8_t x_140; 
x_140 = l_Lean_Expr_hasFVar(x_126);
if (x_140 == 0)
{
uint8_t x_141; lean_object* x_142; 
lean_dec(x_126);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_141 = 1;
x_142 = lean_box(x_141);
return x_142;
}
else
{
x_8 = x_126;
goto _start;
}
}
else
{
x_8 = x_126;
goto _start;
}
}
}
}
else
{
lean_object* x_145; uint8_t x_146; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_145 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_125);
x_146 = lean_unbox(x_145);
lean_dec(x_145);
if (x_146 == 0)
{
uint8_t x_147; lean_object* x_148; 
lean_dec(x_126);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_147 = 0;
x_148 = lean_box(x_147);
return x_148;
}
else
{
uint8_t x_149; 
x_149 = l_Lean_Expr_hasExprMVar(x_126);
if (x_149 == 0)
{
uint8_t x_150; 
x_150 = l_Lean_Expr_hasFVar(x_126);
if (x_150 == 0)
{
uint8_t x_151; lean_object* x_152; 
lean_dec(x_126);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_151 = 1;
x_152 = lean_box(x_151);
return x_152;
}
else
{
x_8 = x_126;
goto _start;
}
}
else
{
x_8 = x_126;
goto _start;
}
}
}
}
case 8:
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_188; 
x_155 = lean_ctor_get(x_8, 1);
lean_inc(x_155);
x_156 = lean_ctor_get(x_8, 2);
lean_inc(x_156);
x_157 = lean_ctor_get(x_8, 3);
lean_inc(x_157);
lean_dec(x_8);
x_188 = l_Lean_Expr_hasExprMVar(x_155);
if (x_188 == 0)
{
uint8_t x_189; 
x_189 = l_Lean_Expr_hasFVar(x_155);
if (x_189 == 0)
{
lean_object* x_190; 
lean_dec(x_155);
x_190 = lean_box(0);
x_158 = x_190;
goto block_187;
}
else
{
lean_object* x_191; uint8_t x_192; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_191 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_155);
x_192 = lean_unbox(x_191);
lean_dec(x_191);
if (x_192 == 0)
{
uint8_t x_193; lean_object* x_194; 
lean_dec(x_157);
lean_dec(x_156);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_193 = 0;
x_194 = lean_box(x_193);
return x_194;
}
else
{
lean_object* x_195; 
x_195 = lean_box(0);
x_158 = x_195;
goto block_187;
}
}
}
else
{
lean_object* x_196; uint8_t x_197; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_196 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_155);
x_197 = lean_unbox(x_196);
lean_dec(x_196);
if (x_197 == 0)
{
uint8_t x_198; lean_object* x_199; 
lean_dec(x_157);
lean_dec(x_156);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_198 = 0;
x_199 = lean_box(x_198);
return x_199;
}
else
{
lean_object* x_200; 
x_200 = lean_box(0);
x_158 = x_200;
goto block_187;
}
}
block_187:
{
uint8_t x_159; 
lean_dec(x_158);
x_159 = l_Lean_Expr_hasExprMVar(x_156);
if (x_159 == 0)
{
uint8_t x_160; 
x_160 = l_Lean_Expr_hasFVar(x_156);
if (x_160 == 0)
{
uint8_t x_161; 
lean_dec(x_156);
x_161 = l_Lean_Expr_hasExprMVar(x_157);
if (x_161 == 0)
{
uint8_t x_162; 
x_162 = l_Lean_Expr_hasFVar(x_157);
if (x_162 == 0)
{
uint8_t x_163; lean_object* x_164; 
lean_dec(x_157);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_163 = 1;
x_164 = lean_box(x_163);
return x_164;
}
else
{
x_8 = x_157;
goto _start;
}
}
else
{
x_8 = x_157;
goto _start;
}
}
else
{
lean_object* x_167; uint8_t x_168; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_167 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_156);
x_168 = lean_unbox(x_167);
lean_dec(x_167);
if (x_168 == 0)
{
uint8_t x_169; lean_object* x_170; 
lean_dec(x_157);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_169 = 0;
x_170 = lean_box(x_169);
return x_170;
}
else
{
uint8_t x_171; 
x_171 = l_Lean_Expr_hasExprMVar(x_157);
if (x_171 == 0)
{
uint8_t x_172; 
x_172 = l_Lean_Expr_hasFVar(x_157);
if (x_172 == 0)
{
uint8_t x_173; lean_object* x_174; 
lean_dec(x_157);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_173 = 1;
x_174 = lean_box(x_173);
return x_174;
}
else
{
x_8 = x_157;
goto _start;
}
}
else
{
x_8 = x_157;
goto _start;
}
}
}
}
else
{
lean_object* x_177; uint8_t x_178; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_177 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_156);
x_178 = lean_unbox(x_177);
lean_dec(x_177);
if (x_178 == 0)
{
uint8_t x_179; lean_object* x_180; 
lean_dec(x_157);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_179 = 0;
x_180 = lean_box(x_179);
return x_180;
}
else
{
uint8_t x_181; 
x_181 = l_Lean_Expr_hasExprMVar(x_157);
if (x_181 == 0)
{
uint8_t x_182; 
x_182 = l_Lean_Expr_hasFVar(x_157);
if (x_182 == 0)
{
uint8_t x_183; lean_object* x_184; 
lean_dec(x_157);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_183 = 1;
x_184 = lean_box(x_183);
return x_184;
}
else
{
x_8 = x_157;
goto _start;
}
}
else
{
x_8 = x_157;
goto _start;
}
}
}
}
}
case 10:
{
lean_object* x_201; 
x_201 = lean_ctor_get(x_8, 1);
lean_inc(x_201);
lean_dec(x_8);
x_8 = x_201;
goto _start;
}
case 11:
{
lean_object* x_203; 
x_203 = lean_ctor_get(x_8, 2);
lean_inc(x_203);
lean_dec(x_8);
x_8 = x_203;
goto _start;
}
case 12:
{
uint8_t x_205; lean_object* x_206; lean_object* x_207; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_205 = l_Bool_Inhabited;
x_206 = lean_box(x_205);
x_207 = l_unreachable_x21___rarg(x_206);
return x_207;
}
default: 
{
uint8_t x_208; lean_object* x_209; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_208 = 1;
x_209 = lean_box(x_208);
return x_209;
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Meta_CheckAssignmentQuick_check___main___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_CheckAssignmentQuick_check___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_11;
}
}
lean_object* l_Lean_Meta_CheckAssignmentQuick_check(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_CheckAssignmentQuick_check___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Meta_CheckAssignmentQuick_check(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_11;
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Meta_checkAssignment___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_ctor_get(x_2, 1);
x_10 = l_Lean_LocalContext_containsFVar(x_9, x_8);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_5);
return x_10;
}
}
}
}
lean_object* l_mkHashMap___at_Lean_Meta_checkAssignment___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_checkAssignment___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_checkAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_69; 
x_69 = l_Lean_Expr_hasExprMVar(x_3);
if (x_69 == 0)
{
uint8_t x_70; 
x_70 = l_Lean_Expr_hasFVar(x_3);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_3);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_5);
return x_72;
}
else
{
lean_object* x_73; 
x_73 = lean_box(0);
x_6 = x_73;
goto block_68;
}
}
else
{
lean_object* x_74; 
x_74 = lean_box(0);
x_6 = x_74;
goto block_68;
}
block_68:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_5, 4);
lean_inc(x_11);
x_12 = lean_ctor_get(x_5, 5);
lean_inc(x_12);
x_13 = l_Lean_MetavarContext_getDecl(x_8, x_1);
x_14 = lean_array_get_size(x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at_Lean_Meta_checkAssignment___spec__1(x_2, x_13, x_2, x_14, x_15);
lean_dec(x_14);
x_17 = lean_ctor_get(x_4, 0);
lean_inc(x_17);
x_18 = lean_ctor_get_uint8(x_17, sizeof(void*)*1 + 1);
lean_dec(x_17);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_inc(x_3);
lean_inc(x_13);
lean_inc(x_19);
lean_inc(x_8);
x_20 = l_Lean_Meta_CheckAssignmentQuick_check___main(x_16, x_18, x_8, x_19, x_13, x_1, x_2, x_3);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_5, 5);
lean_dec(x_23);
x_24 = lean_ctor_get(x_5, 4);
lean_dec(x_24);
x_25 = lean_ctor_get(x_5, 3);
lean_dec(x_25);
x_26 = lean_ctor_get(x_5, 2);
lean_dec(x_26);
x_27 = lean_ctor_get(x_5, 1);
lean_dec(x_27);
x_28 = lean_ctor_get(x_5, 0);
lean_dec(x_28);
lean_inc(x_2);
lean_inc(x_1);
x_29 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_29, 0, x_19);
lean_ctor_set(x_29, 1, x_1);
lean_ctor_set(x_29, 2, x_13);
lean_ctor_set(x_29, 3, x_2);
lean_ctor_set_uint8(x_29, sizeof(void*)*4, x_18);
lean_ctor_set_uint8(x_29, sizeof(void*)*4 + 1, x_16);
x_30 = l_Lean_Meta_checkAssignment___closed__1;
lean_inc(x_8);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_8);
lean_ctor_set(x_31, 1, x_10);
lean_ctor_set(x_31, 2, x_30);
lean_inc(x_3);
x_32 = l_Lean_Meta_CheckAssignment_check___main(x_3, x_29, x_31);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_ctor_get(x_32, 1);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_34);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
lean_ctor_set(x_5, 3, x_38);
lean_ctor_set(x_5, 1, x_37);
lean_ctor_set(x_32, 1, x_5);
lean_ctor_set(x_32, 0, x_36);
return x_32;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_32, 0);
x_40 = lean_ctor_get(x_32, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_32);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_ctor_get(x_40, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
lean_ctor_set(x_5, 3, x_43);
lean_ctor_set(x_5, 1, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_5);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_32, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_32, 1);
lean_inc(x_46);
lean_dec(x_32);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
lean_ctor_set(x_5, 3, x_47);
x_48 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure(x_1, x_2, x_3, x_45, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_49 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_49, 0, x_19);
lean_ctor_set(x_49, 1, x_1);
lean_ctor_set(x_49, 2, x_13);
lean_ctor_set(x_49, 3, x_2);
lean_ctor_set_uint8(x_49, sizeof(void*)*4, x_18);
lean_ctor_set_uint8(x_49, sizeof(void*)*4 + 1, x_16);
x_50 = l_Lean_Meta_checkAssignment___closed__1;
lean_inc(x_8);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_8);
lean_ctor_set(x_51, 1, x_10);
lean_ctor_set(x_51, 2, x_50);
lean_inc(x_3);
x_52 = l_Lean_Meta_CheckAssignment_check___main(x_3, x_49, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_55 = x_52;
} else {
 lean_dec_ref(x_52);
 x_55 = lean_box(0);
}
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_53);
x_57 = lean_ctor_get(x_54, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_54, 1);
lean_inc(x_58);
lean_dec(x_54);
x_59 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_59, 0, x_7);
lean_ctor_set(x_59, 1, x_57);
lean_ctor_set(x_59, 2, x_9);
lean_ctor_set(x_59, 3, x_58);
lean_ctor_set(x_59, 4, x_11);
lean_ctor_set(x_59, 5, x_12);
if (lean_is_scalar(x_55)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_55;
}
lean_ctor_set(x_60, 0, x_56);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_52, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_52, 1);
lean_inc(x_62);
lean_dec(x_52);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_64, 0, x_7);
lean_ctor_set(x_64, 1, x_8);
lean_ctor_set(x_64, 2, x_9);
lean_ctor_set(x_64, 3, x_63);
lean_ctor_set(x_64, 4, x_11);
lean_ctor_set(x_64, 5, x_12);
x_65 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure(x_1, x_2, x_3, x_61, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_66 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_66, 0, x_3);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_5);
return x_67;
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Meta_checkAssignment___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Meta_checkAssignment___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_4);
x_10 = lean_nat_dec_lt(x_6, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
x_11 = l_Lean_Meta_isExprDefEqAux(x_1, x_2, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Lean_Expr_Inhabited;
x_13 = lean_array_get(x_12, x_3, x_5);
x_14 = lean_array_fget(x_4, x_6);
lean_inc(x_7);
x_15 = l_Lean_Meta_isExprDefEqAux(x_13, x_14, x_7, x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_15, 0);
lean_dec(x_19);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_16);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_dec(x_15);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_5, x_23);
lean_dec(x_5);
x_25 = lean_nat_add(x_6, x_23);
lean_dec(x_6);
x_5 = x_24;
x_6 = x_25;
x_8 = x_22;
goto _start;
}
}
else
{
uint8_t x_27; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_15);
if (x_27 == 0)
{
return x_15;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_15, 0);
x_29 = lean_ctor_get(x_15, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_15);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_13__processAssignmentFOApproxAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Expr_getAppNumArgsAux___main(x_3, x_6);
x_8 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_7);
x_9 = lean_mk_array(x_7, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_7, x_10);
lean_dec(x_7);
lean_inc(x_3);
x_12 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_3, x_9, x_11);
x_13 = l_Array_isEmpty___rarg(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_array_get_size(x_12);
x_15 = lean_array_get_size(x_2);
x_16 = lean_nat_dec_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = lean_nat_dec_lt(x_15, x_14);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_14);
x_18 = l_Lean_Expr_getAppFn___main(x_3);
lean_dec(x_3);
x_19 = l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox___main(x_1, x_18, x_2, x_12, x_6, x_6, x_4, x_5);
lean_dec(x_12);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = l_Lean_Expr_getAppFn___main(x_3);
lean_dec(x_3);
x_21 = lean_nat_sub(x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_22 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_21, x_12, x_6, x_20);
x_23 = l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox___main(x_1, x_22, x_2, x_12, x_6, x_21, x_4, x_5);
lean_dec(x_12);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_nat_sub(x_15, x_14);
lean_dec(x_14);
lean_dec(x_15);
x_25 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_24, x_2, x_6, x_1);
x_26 = l_Lean_Expr_getAppFn___main(x_3);
lean_dec(x_3);
x_27 = l___private_Init_Lean_Meta_ExprDefEq_12__isDefEqFOApprox___main(x_25, x_26, x_2, x_12, x_24, x_6, x_4, x_5);
lean_dec(x_12);
return x_27;
}
}
else
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_28 = 0;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_5);
return x_30;
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_13__processAssignmentFOApproxAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Meta_ExprDefEq_13__processAssignmentFOApproxAux(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_19; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_ctor_get(x_5, 5);
x_10 = l_PersistentArray_empty___closed__3;
lean_inc(x_8);
lean_inc(x_7);
lean_ctor_set(x_5, 5, x_10);
lean_inc(x_4);
x_19 = l___private_Init_Lean_Meta_ExprDefEq_13__processAssignmentFOApproxAux(x_1, x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_7, x_8, x_9, x_4, x_22);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set(x_23, 0, x_20);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_20);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_dec(x_19);
x_29 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_4, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_unbox(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_7, x_8, x_9, x_4, x_32);
lean_dec(x_4);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set(x_33, 0, x_30);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_30);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_38 = !lean_is_exclusive(x_29);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_29, 0);
lean_dec(x_39);
return x_29;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_29, 1);
lean_inc(x_40);
lean_dec(x_29);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_30);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_29, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
lean_dec(x_29);
x_11 = x_42;
x_12 = x_43;
goto block_18;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_19, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_19, 1);
lean_inc(x_45);
lean_dec(x_19);
x_11 = x_44;
x_12 = x_45;
goto block_18;
}
block_18:
{
lean_object* x_13; uint8_t x_14; 
x_13 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_7, x_8, x_9, x_4, x_12);
lean_dec(x_4);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_11);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_61; 
x_46 = lean_ctor_get(x_5, 0);
x_47 = lean_ctor_get(x_5, 1);
x_48 = lean_ctor_get(x_5, 2);
x_49 = lean_ctor_get(x_5, 3);
x_50 = lean_ctor_get(x_5, 4);
x_51 = lean_ctor_get(x_5, 5);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_5);
x_52 = l_PersistentArray_empty___closed__3;
lean_inc(x_47);
lean_inc(x_46);
x_53 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_53, 0, x_46);
lean_ctor_set(x_53, 1, x_47);
lean_ctor_set(x_53, 2, x_48);
lean_ctor_set(x_53, 3, x_49);
lean_ctor_set(x_53, 4, x_50);
lean_ctor_set(x_53, 5, x_52);
lean_inc(x_4);
x_61 = l___private_Init_Lean_Meta_ExprDefEq_13__processAssignmentFOApproxAux(x_1, x_2, x_3, x_4, x_53);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_unbox(x_62);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec(x_61);
x_65 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_46, x_47, x_51, x_4, x_64);
lean_dec(x_4);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_67 = x_65;
} else {
 lean_dec_ref(x_65);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_62);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_62);
x_69 = lean_ctor_get(x_61, 1);
lean_inc(x_69);
lean_dec(x_61);
x_70 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_4, x_69);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; uint8_t x_72; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_unbox(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_dec(x_70);
x_74 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_46, x_47, x_51, x_4, x_73);
lean_dec(x_4);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_76 = x_74;
} else {
 lean_dec_ref(x_74);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_71);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_51);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_4);
x_78 = lean_ctor_get(x_70, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_79 = x_70;
} else {
 lean_dec_ref(x_70);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_71);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
else
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_70, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_70, 1);
lean_inc(x_82);
lean_dec(x_70);
x_54 = x_81;
x_55 = x_82;
goto block_60;
}
}
}
else
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_61, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_61, 1);
lean_inc(x_84);
lean_dec(x_61);
x_54 = x_83;
x_55 = x_84;
goto block_60;
}
block_60:
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_46, x_47, x_51, x_4, x_55);
lean_dec(x_4);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
 lean_ctor_set_tag(x_59, 1);
}
lean_ctor_set(x_59, 0, x_54);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("foApprox");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__1;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__2;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_5, 4);
lean_inc(x_33);
x_34 = lean_ctor_get_uint8(x_33, sizeof(void*)*1);
lean_dec(x_33);
if (x_34 == 0)
{
x_6 = x_5;
goto block_32;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_35 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__3;
x_36 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_35, x_4, x_5);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
lean_dec(x_37);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_6 = x_39;
goto block_32;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_40 = lean_ctor_get(x_36, 1);
lean_inc(x_40);
lean_dec(x_36);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_4, 1);
lean_inc(x_43);
lean_inc(x_1);
x_44 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_44, 0, x_1);
x_45 = l_Lean_Meta_Exception_toMessageData___closed__4;
x_46 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_unsigned_to_nat(0u);
x_48 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_49 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_2, x_47, x_48);
x_50 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_50, 0, x_46);
lean_ctor_set(x_50, 1, x_49);
x_51 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_52 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
lean_inc(x_3);
x_53 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_53, 0, x_3);
x_54 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_55, 0, x_41);
lean_ctor_set(x_55, 1, x_42);
lean_ctor_set(x_55, 2, x_43);
lean_ctor_set(x_55, 3, x_54);
x_56 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__2;
x_57 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_56, x_55, x_4, x_40);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_6 = x_58;
goto block_32;
}
}
block_32:
{
lean_object* x_7; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_7 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___spec__1(x_1, x_2, x_3, x_4, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
lean_inc(x_4);
x_11 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_3, x_4, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_4);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_11, 0);
lean_dec(x_14);
lean_ctor_set(x_11, 0, x_8);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_8);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_8);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_3 = x_18;
x_5 = x_17;
goto _start;
}
}
else
{
uint8_t x_20; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_11);
if (x_20 == 0)
{
return x_11;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_11, 0);
x_22 = lean_ctor_get(x_11, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_11);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_7);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_7, 0);
lean_dec(x_25);
return x_7;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_dec(x_7);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_8);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_7);
if (x_28 == 0)
{
return x_7;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_7, 0);
x_30 = lean_ctor_get(x_7, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_7);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_15__simpAssignmentArgAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_inc(x_2);
x_5 = l_Lean_Meta_getLocalDecl(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = l_Lean_LocalDecl_value_x3f(x_7);
lean_dec(x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_dec(x_2);
lean_ctor_set(x_5, 0, x_1);
return x_5;
}
else
{
lean_object* x_10; 
lean_free_object(x_5);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_1 = x_10;
x_3 = x_8;
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_5);
x_14 = l_Lean_LocalDecl_value_x3f(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_1);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_1 = x_16;
x_3 = x_13;
goto _start;
}
}
}
else
{
uint8_t x_18; 
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_5);
if (x_18 == 0)
{
return x_5;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_5, 0);
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_5);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
case 10:
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_dec(x_1);
x_1 = x_22;
goto _start;
}
default: 
{
lean_object* x_24; 
lean_dec(x_2);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_1);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_15__simpAssignmentArgAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Meta_ExprDefEq_15__simpAssignmentArgAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_16__simpAssignmentArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Expr_getAppFn___main(x_1);
x_5 = l_Lean_Expr_hasExprMVar(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Meta_ExprDefEq_15__simpAssignmentArgAux___main(x_1, x_2, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Meta_instantiateMVars(x_1, x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l___private_Init_Lean_Meta_ExprDefEq_15__simpAssignmentArgAux___main(x_8, x_2, x_9);
return x_10;
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_ctor_get(x_1, 1);
x_10 = l_Lean_LocalContext_containsFVar(x_9, x_8);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_5);
return x_10;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = 0;
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_fget(x_5, x_7);
x_11 = lean_expr_eqv(x_10, x_4);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_7, x_12);
lean_dec(x_7);
x_3 = lean_box(0);
x_7 = x_13;
goto _start;
}
else
{
lean_dec(x_7);
return x_11;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_8);
x_10 = 0;
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_fget(x_6, x_8);
x_12 = lean_expr_eqv(x_11, x_4);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_8, x_13);
lean_dec(x_8);
x_3 = lean_box(0);
x_5 = lean_box(0);
x_8 = x_14;
goto _start;
}
else
{
lean_dec(x_8);
return x_12;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("checkTypes");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("typeMismatch");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" : ");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__6;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__2;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_2 = l_Lean_Meta_isTypeCorrect___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__10;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_5);
x_9 = lean_nat_dec_lt(x_4, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
lean_dec(x_4);
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 2);
lean_inc(x_12);
x_13 = l_Lean_Meta_instantiateMVars(x_3, x_6, x_7);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get_uint8(x_10, sizeof(void*)*1);
if (x_16 == 0)
{
lean_object* x_1109; 
x_1109 = lean_box(0);
x_17 = x_1109;
goto block_1108;
}
else
{
uint8_t x_1110; 
x_1110 = l_Array_isEmpty___rarg(x_5);
if (x_1110 == 0)
{
lean_object* x_1111; 
x_1111 = lean_box(0);
x_17 = x_1111;
goto block_1108;
}
else
{
lean_object* x_1112; uint8_t x_1113; 
x_1112 = l_Lean_Expr_getAppFn___main(x_14);
x_1113 = lean_expr_eqv(x_1112, x_1);
lean_dec(x_1112);
if (x_1113 == 0)
{
lean_object* x_1114; 
x_1114 = lean_box(0);
x_17 = x_1114;
goto block_1108;
}
else
{
lean_object* x_1115; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
x_1115 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_5, x_14, x_6, x_15);
lean_dec(x_5);
return x_1115;
}
}
}
block_1108:
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_17);
x_18 = l_Lean_Expr_mvarId_x21(x_1);
lean_inc(x_6);
lean_inc(x_14);
lean_inc(x_5);
lean_inc(x_18);
x_19 = l_Lean_Meta_checkAssignment(x_18, x_5, x_14, x_6, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
if (x_16 == 0)
{
uint8_t x_21; 
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
x_23 = 0;
x_24 = lean_box(x_23);
lean_ctor_set(x_19, 0, x_24);
return x_19;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = 0;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_dec(x_19);
x_30 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_5, x_14, x_6, x_29);
lean_dec(x_5);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_19, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 x_32 = x_19;
} else {
 lean_dec_ref(x_19);
 x_32 = lean_box(0);
}
x_33 = lean_ctor_get(x_20, 0);
lean_inc(x_33);
lean_dec(x_20);
lean_inc(x_6);
lean_inc(x_5);
x_34 = l_Lean_Meta_mkLambda(x_5, x_33, x_6, x_31);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_37 = x_34;
} else {
 lean_dec_ref(x_34);
 x_37 = lean_box(0);
}
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__1(x_2, x_5, x_5, x_8, x_38);
lean_dec(x_8);
if (x_39 == 0)
{
uint8_t x_40; lean_object* x_41; lean_object* x_520; uint8_t x_521; 
lean_dec(x_14);
lean_dec(x_5);
x_520 = lean_ctor_get(x_36, 4);
lean_inc(x_520);
x_521 = lean_ctor_get_uint8(x_520, sizeof(void*)*1);
lean_dec(x_520);
if (x_521 == 0)
{
uint8_t x_522; 
x_522 = 0;
x_40 = x_522;
x_41 = x_36;
goto block_519;
}
else
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; uint8_t x_527; 
x_523 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__9;
x_524 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_523, x_6, x_36);
x_525 = lean_ctor_get(x_524, 0);
lean_inc(x_525);
x_526 = lean_ctor_get(x_524, 1);
lean_inc(x_526);
lean_dec(x_524);
x_527 = lean_unbox(x_525);
lean_dec(x_525);
x_40 = x_527;
x_41 = x_526;
goto block_519;
}
block_519:
{
if (x_40 == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_41, 4);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
uint8_t x_45; uint8_t x_46; uint8_t x_47; lean_object* x_48; lean_object* x_71; lean_object* x_72; lean_object* x_92; 
x_45 = lean_ctor_get_uint8(x_43, sizeof(void*)*1);
x_46 = 0;
lean_ctor_set_uint8(x_43, sizeof(void*)*1, x_46);
lean_inc(x_6);
lean_inc(x_1);
x_92 = l_Lean_Meta_inferType(x_1, x_6, x_41);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
lean_inc(x_6);
lean_inc(x_35);
x_95 = l_Lean_Meta_inferType(x_35, x_6, x_94);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = !lean_is_exclusive(x_10);
if (x_98 == 0)
{
uint8_t x_99; lean_object* x_100; lean_object* x_101; 
x_99 = 1;
lean_ctor_set_uint8(x_10, sizeof(void*)*1 + 5, x_99);
lean_inc(x_11);
x_100 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_100, 0, x_10);
lean_ctor_set(x_100, 1, x_11);
lean_ctor_set(x_100, 2, x_12);
lean_inc(x_96);
lean_inc(x_93);
x_101 = l_Lean_Meta_isExprDefEqAux(x_93, x_96, x_100, x_97);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; uint8_t x_103; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_unbox(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; 
lean_dec(x_32);
lean_dec(x_18);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
lean_dec(x_101);
x_105 = lean_ctor_get(x_104, 4);
lean_inc(x_105);
x_106 = lean_ctor_get_uint8(x_105, sizeof(void*)*1);
lean_dec(x_105);
if (x_106 == 0)
{
uint8_t x_107; 
lean_dec(x_96);
lean_dec(x_93);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_107 = lean_unbox(x_102);
lean_dec(x_102);
x_47 = x_107;
x_48 = x_104;
goto block_70;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_108 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_109 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_108, x_6, x_104);
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_unbox(x_110);
lean_dec(x_110);
if (x_111 == 0)
{
lean_object* x_112; uint8_t x_113; 
lean_dec(x_96);
lean_dec(x_93);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_112 = lean_ctor_get(x_109, 1);
lean_inc(x_112);
lean_dec(x_109);
x_113 = lean_unbox(x_102);
lean_dec(x_102);
x_47 = x_113;
x_48 = x_112;
goto block_70;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; 
x_114 = lean_ctor_get(x_109, 1);
lean_inc(x_114);
lean_dec(x_109);
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
x_117 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_117, 0, x_1);
x_118 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_119 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_120, 0, x_93);
x_121 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
x_122 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_123 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_124, 0, x_35);
x_125 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_118);
x_127 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_127, 0, x_96);
x_128 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_129, 0, x_115);
lean_ctor_set(x_129, 1, x_116);
lean_ctor_set(x_129, 2, x_11);
lean_ctor_set(x_129, 3, x_128);
x_130 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_131 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_130, x_129, x_6, x_114);
lean_dec(x_6);
x_132 = lean_ctor_get(x_131, 1);
lean_inc(x_132);
lean_dec(x_131);
x_133 = lean_unbox(x_102);
lean_dec(x_102);
x_47 = x_133;
x_48 = x_132;
goto block_70;
}
}
}
else
{
lean_object* x_134; lean_object* x_135; 
lean_dec(x_96);
lean_dec(x_93);
lean_dec(x_11);
lean_dec(x_1);
x_134 = lean_ctor_get(x_101, 1);
lean_inc(x_134);
lean_dec(x_101);
x_135 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_134);
lean_dec(x_6);
if (lean_obj_tag(x_135) == 0)
{
lean_object* x_136; uint8_t x_137; 
lean_dec(x_32);
x_136 = lean_ctor_get(x_135, 1);
lean_inc(x_136);
lean_dec(x_135);
x_137 = lean_unbox(x_102);
lean_dec(x_102);
x_47 = x_137;
x_48 = x_136;
goto block_70;
}
else
{
lean_object* x_138; lean_object* x_139; 
lean_dec(x_102);
lean_dec(x_37);
x_138 = lean_ctor_get(x_135, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_135, 1);
lean_inc(x_139);
lean_dec(x_135);
x_71 = x_138;
x_72 = x_139;
goto block_91;
}
}
}
else
{
lean_object* x_140; lean_object* x_141; 
lean_dec(x_96);
lean_dec(x_93);
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_140 = lean_ctor_get(x_101, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_101, 1);
lean_inc(x_141);
lean_dec(x_101);
x_71 = x_140;
x_72 = x_141;
goto block_91;
}
}
else
{
lean_object* x_142; uint8_t x_143; uint8_t x_144; uint8_t x_145; uint8_t x_146; uint8_t x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_142 = lean_ctor_get(x_10, 0);
x_143 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 1);
x_144 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 2);
x_145 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 3);
x_146 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 4);
lean_inc(x_142);
lean_dec(x_10);
x_147 = 1;
x_148 = lean_alloc_ctor(0, 1, 6);
lean_ctor_set(x_148, 0, x_142);
lean_ctor_set_uint8(x_148, sizeof(void*)*1, x_16);
lean_ctor_set_uint8(x_148, sizeof(void*)*1 + 1, x_143);
lean_ctor_set_uint8(x_148, sizeof(void*)*1 + 2, x_144);
lean_ctor_set_uint8(x_148, sizeof(void*)*1 + 3, x_145);
lean_ctor_set_uint8(x_148, sizeof(void*)*1 + 4, x_146);
lean_ctor_set_uint8(x_148, sizeof(void*)*1 + 5, x_147);
lean_inc(x_11);
x_149 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_11);
lean_ctor_set(x_149, 2, x_12);
lean_inc(x_96);
lean_inc(x_93);
x_150 = l_Lean_Meta_isExprDefEqAux(x_93, x_96, x_149, x_97);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; uint8_t x_152; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_unbox(x_151);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; uint8_t x_155; 
lean_dec(x_32);
lean_dec(x_18);
x_153 = lean_ctor_get(x_150, 1);
lean_inc(x_153);
lean_dec(x_150);
x_154 = lean_ctor_get(x_153, 4);
lean_inc(x_154);
x_155 = lean_ctor_get_uint8(x_154, sizeof(void*)*1);
lean_dec(x_154);
if (x_155 == 0)
{
uint8_t x_156; 
lean_dec(x_96);
lean_dec(x_93);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_156 = lean_unbox(x_151);
lean_dec(x_151);
x_47 = x_156;
x_48 = x_153;
goto block_70;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; uint8_t x_160; 
x_157 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_158 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_157, x_6, x_153);
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_unbox(x_159);
lean_dec(x_159);
if (x_160 == 0)
{
lean_object* x_161; uint8_t x_162; 
lean_dec(x_96);
lean_dec(x_93);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_161 = lean_ctor_get(x_158, 1);
lean_inc(x_161);
lean_dec(x_158);
x_162 = lean_unbox(x_151);
lean_dec(x_151);
x_47 = x_162;
x_48 = x_161;
goto block_70;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_163 = lean_ctor_get(x_158, 1);
lean_inc(x_163);
lean_dec(x_158);
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_163, 1);
lean_inc(x_165);
x_166 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_166, 0, x_1);
x_167 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_168 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
x_169 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_169, 0, x_93);
x_170 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
x_171 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_172 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
x_173 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_173, 0, x_35);
x_174 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_167);
x_176 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_176, 0, x_96);
x_177 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_177, 0, x_175);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_178, 0, x_164);
lean_ctor_set(x_178, 1, x_165);
lean_ctor_set(x_178, 2, x_11);
lean_ctor_set(x_178, 3, x_177);
x_179 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_180 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_179, x_178, x_6, x_163);
lean_dec(x_6);
x_181 = lean_ctor_get(x_180, 1);
lean_inc(x_181);
lean_dec(x_180);
x_182 = lean_unbox(x_151);
lean_dec(x_151);
x_47 = x_182;
x_48 = x_181;
goto block_70;
}
}
}
else
{
lean_object* x_183; lean_object* x_184; 
lean_dec(x_96);
lean_dec(x_93);
lean_dec(x_11);
lean_dec(x_1);
x_183 = lean_ctor_get(x_150, 1);
lean_inc(x_183);
lean_dec(x_150);
x_184 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_183);
lean_dec(x_6);
if (lean_obj_tag(x_184) == 0)
{
lean_object* x_185; uint8_t x_186; 
lean_dec(x_32);
x_185 = lean_ctor_get(x_184, 1);
lean_inc(x_185);
lean_dec(x_184);
x_186 = lean_unbox(x_151);
lean_dec(x_151);
x_47 = x_186;
x_48 = x_185;
goto block_70;
}
else
{
lean_object* x_187; lean_object* x_188; 
lean_dec(x_151);
lean_dec(x_37);
x_187 = lean_ctor_get(x_184, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_184, 1);
lean_inc(x_188);
lean_dec(x_184);
x_71 = x_187;
x_72 = x_188;
goto block_91;
}
}
}
else
{
lean_object* x_189; lean_object* x_190; 
lean_dec(x_96);
lean_dec(x_93);
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_189 = lean_ctor_get(x_150, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_150, 1);
lean_inc(x_190);
lean_dec(x_150);
x_71 = x_189;
x_72 = x_190;
goto block_91;
}
}
}
else
{
lean_object* x_191; lean_object* x_192; 
lean_dec(x_93);
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_191 = lean_ctor_get(x_95, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_95, 1);
lean_inc(x_192);
lean_dec(x_95);
x_71 = x_191;
x_72 = x_192;
goto block_91;
}
}
else
{
lean_object* x_193; lean_object* x_194; 
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_193 = lean_ctor_get(x_92, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_92, 1);
lean_inc(x_194);
lean_dec(x_92);
x_71 = x_193;
x_72 = x_194;
goto block_91;
}
block_70:
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
x_50 = lean_ctor_get(x_48, 4);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_ctor_set_uint8(x_50, sizeof(void*)*1, x_45);
x_52 = lean_box(x_47);
if (lean_is_scalar(x_37)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_37;
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_48);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_50, 0);
lean_inc(x_54);
lean_dec(x_50);
x_55 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set_uint8(x_55, sizeof(void*)*1, x_45);
lean_ctor_set(x_48, 4, x_55);
x_56 = lean_box(x_47);
if (lean_is_scalar(x_37)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_37;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_48);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_58 = lean_ctor_get(x_48, 4);
x_59 = lean_ctor_get(x_48, 0);
x_60 = lean_ctor_get(x_48, 1);
x_61 = lean_ctor_get(x_48, 2);
x_62 = lean_ctor_get(x_48, 3);
x_63 = lean_ctor_get(x_48, 5);
lean_inc(x_63);
lean_inc(x_58);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_48);
x_64 = lean_ctor_get(x_58, 0);
lean_inc(x_64);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 x_65 = x_58;
} else {
 lean_dec_ref(x_58);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(0, 1, 1);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set_uint8(x_66, sizeof(void*)*1, x_45);
x_67 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_67, 0, x_59);
lean_ctor_set(x_67, 1, x_60);
lean_ctor_set(x_67, 2, x_61);
lean_ctor_set(x_67, 3, x_62);
lean_ctor_set(x_67, 4, x_66);
lean_ctor_set(x_67, 5, x_63);
x_68 = lean_box(x_47);
if (lean_is_scalar(x_37)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_37;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
block_91:
{
uint8_t x_73; 
x_73 = !lean_is_exclusive(x_72);
if (x_73 == 0)
{
lean_object* x_74; uint8_t x_75; 
x_74 = lean_ctor_get(x_72, 4);
x_75 = !lean_is_exclusive(x_74);
if (x_75 == 0)
{
lean_object* x_76; 
lean_ctor_set_uint8(x_74, sizeof(void*)*1, x_45);
if (lean_is_scalar(x_32)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_32;
 lean_ctor_set_tag(x_76, 1);
}
lean_ctor_set(x_76, 0, x_71);
lean_ctor_set(x_76, 1, x_72);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_74, 0);
lean_inc(x_77);
lean_dec(x_74);
x_78 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set_uint8(x_78, sizeof(void*)*1, x_45);
lean_ctor_set(x_72, 4, x_78);
if (lean_is_scalar(x_32)) {
 x_79 = lean_alloc_ctor(1, 2, 0);
} else {
 x_79 = x_32;
 lean_ctor_set_tag(x_79, 1);
}
lean_ctor_set(x_79, 0, x_71);
lean_ctor_set(x_79, 1, x_72);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_80 = lean_ctor_get(x_72, 4);
x_81 = lean_ctor_get(x_72, 0);
x_82 = lean_ctor_get(x_72, 1);
x_83 = lean_ctor_get(x_72, 2);
x_84 = lean_ctor_get(x_72, 3);
x_85 = lean_ctor_get(x_72, 5);
lean_inc(x_85);
lean_inc(x_80);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_72);
x_86 = lean_ctor_get(x_80, 0);
lean_inc(x_86);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 x_87 = x_80;
} else {
 lean_dec_ref(x_80);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(0, 1, 1);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set_uint8(x_88, sizeof(void*)*1, x_45);
x_89 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_89, 0, x_81);
lean_ctor_set(x_89, 1, x_82);
lean_ctor_set(x_89, 2, x_83);
lean_ctor_set(x_89, 3, x_84);
lean_ctor_set(x_89, 4, x_88);
lean_ctor_set(x_89, 5, x_85);
if (lean_is_scalar(x_32)) {
 x_90 = lean_alloc_ctor(1, 2, 0);
} else {
 x_90 = x_32;
 lean_ctor_set_tag(x_90, 1);
}
lean_ctor_set(x_90, 0, x_71);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_195; lean_object* x_196; uint8_t x_197; lean_object* x_198; uint8_t x_199; lean_object* x_200; lean_object* x_215; lean_object* x_216; lean_object* x_230; 
x_195 = lean_ctor_get_uint8(x_43, sizeof(void*)*1);
x_196 = lean_ctor_get(x_43, 0);
lean_inc(x_196);
lean_dec(x_43);
x_197 = 0;
x_198 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_198, 0, x_196);
lean_ctor_set_uint8(x_198, sizeof(void*)*1, x_197);
lean_ctor_set(x_41, 4, x_198);
lean_inc(x_6);
lean_inc(x_1);
x_230 = l_Lean_Meta_inferType(x_1, x_6, x_41);
if (lean_obj_tag(x_230) == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
lean_dec(x_230);
lean_inc(x_6);
lean_inc(x_35);
x_233 = l_Lean_Meta_inferType(x_35, x_6, x_232);
if (lean_obj_tag(x_233) == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; uint8_t x_238; uint8_t x_239; uint8_t x_240; lean_object* x_241; uint8_t x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
lean_dec(x_233);
x_236 = lean_ctor_get(x_10, 0);
lean_inc(x_236);
x_237 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 1);
x_238 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 2);
x_239 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 3);
x_240 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 4);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_241 = x_10;
} else {
 lean_dec_ref(x_10);
 x_241 = lean_box(0);
}
x_242 = 1;
if (lean_is_scalar(x_241)) {
 x_243 = lean_alloc_ctor(0, 1, 6);
} else {
 x_243 = x_241;
}
lean_ctor_set(x_243, 0, x_236);
lean_ctor_set_uint8(x_243, sizeof(void*)*1, x_16);
lean_ctor_set_uint8(x_243, sizeof(void*)*1 + 1, x_237);
lean_ctor_set_uint8(x_243, sizeof(void*)*1 + 2, x_238);
lean_ctor_set_uint8(x_243, sizeof(void*)*1 + 3, x_239);
lean_ctor_set_uint8(x_243, sizeof(void*)*1 + 4, x_240);
lean_ctor_set_uint8(x_243, sizeof(void*)*1 + 5, x_242);
lean_inc(x_11);
x_244 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_11);
lean_ctor_set(x_244, 2, x_12);
lean_inc(x_234);
lean_inc(x_231);
x_245 = l_Lean_Meta_isExprDefEqAux(x_231, x_234, x_244, x_235);
if (lean_obj_tag(x_245) == 0)
{
lean_object* x_246; uint8_t x_247; 
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
x_247 = lean_unbox(x_246);
if (x_247 == 0)
{
lean_object* x_248; lean_object* x_249; uint8_t x_250; 
lean_dec(x_32);
lean_dec(x_18);
x_248 = lean_ctor_get(x_245, 1);
lean_inc(x_248);
lean_dec(x_245);
x_249 = lean_ctor_get(x_248, 4);
lean_inc(x_249);
x_250 = lean_ctor_get_uint8(x_249, sizeof(void*)*1);
lean_dec(x_249);
if (x_250 == 0)
{
uint8_t x_251; 
lean_dec(x_234);
lean_dec(x_231);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_251 = lean_unbox(x_246);
lean_dec(x_246);
x_199 = x_251;
x_200 = x_248;
goto block_214;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; uint8_t x_255; 
x_252 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_253 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_252, x_6, x_248);
x_254 = lean_ctor_get(x_253, 0);
lean_inc(x_254);
x_255 = lean_unbox(x_254);
lean_dec(x_254);
if (x_255 == 0)
{
lean_object* x_256; uint8_t x_257; 
lean_dec(x_234);
lean_dec(x_231);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_256 = lean_ctor_get(x_253, 1);
lean_inc(x_256);
lean_dec(x_253);
x_257 = lean_unbox(x_246);
lean_dec(x_246);
x_199 = x_257;
x_200 = x_256;
goto block_214;
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; uint8_t x_277; 
x_258 = lean_ctor_get(x_253, 1);
lean_inc(x_258);
lean_dec(x_253);
x_259 = lean_ctor_get(x_258, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_258, 1);
lean_inc(x_260);
x_261 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_261, 0, x_1);
x_262 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_263 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_263, 0, x_261);
lean_ctor_set(x_263, 1, x_262);
x_264 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_264, 0, x_231);
x_265 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_265, 0, x_263);
lean_ctor_set(x_265, 1, x_264);
x_266 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_267 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_267, 0, x_265);
lean_ctor_set(x_267, 1, x_266);
x_268 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_268, 0, x_35);
x_269 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_269, 0, x_267);
lean_ctor_set(x_269, 1, x_268);
x_270 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_270, 0, x_269);
lean_ctor_set(x_270, 1, x_262);
x_271 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_271, 0, x_234);
x_272 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_272, 0, x_270);
lean_ctor_set(x_272, 1, x_271);
x_273 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_273, 0, x_259);
lean_ctor_set(x_273, 1, x_260);
lean_ctor_set(x_273, 2, x_11);
lean_ctor_set(x_273, 3, x_272);
x_274 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_275 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_274, x_273, x_6, x_258);
lean_dec(x_6);
x_276 = lean_ctor_get(x_275, 1);
lean_inc(x_276);
lean_dec(x_275);
x_277 = lean_unbox(x_246);
lean_dec(x_246);
x_199 = x_277;
x_200 = x_276;
goto block_214;
}
}
}
else
{
lean_object* x_278; lean_object* x_279; 
lean_dec(x_234);
lean_dec(x_231);
lean_dec(x_11);
lean_dec(x_1);
x_278 = lean_ctor_get(x_245, 1);
lean_inc(x_278);
lean_dec(x_245);
x_279 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_278);
lean_dec(x_6);
if (lean_obj_tag(x_279) == 0)
{
lean_object* x_280; uint8_t x_281; 
lean_dec(x_32);
x_280 = lean_ctor_get(x_279, 1);
lean_inc(x_280);
lean_dec(x_279);
x_281 = lean_unbox(x_246);
lean_dec(x_246);
x_199 = x_281;
x_200 = x_280;
goto block_214;
}
else
{
lean_object* x_282; lean_object* x_283; 
lean_dec(x_246);
lean_dec(x_37);
x_282 = lean_ctor_get(x_279, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_279, 1);
lean_inc(x_283);
lean_dec(x_279);
x_215 = x_282;
x_216 = x_283;
goto block_229;
}
}
}
else
{
lean_object* x_284; lean_object* x_285; 
lean_dec(x_234);
lean_dec(x_231);
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_284 = lean_ctor_get(x_245, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_245, 1);
lean_inc(x_285);
lean_dec(x_245);
x_215 = x_284;
x_216 = x_285;
goto block_229;
}
}
else
{
lean_object* x_286; lean_object* x_287; 
lean_dec(x_231);
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_286 = lean_ctor_get(x_233, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_233, 1);
lean_inc(x_287);
lean_dec(x_233);
x_215 = x_286;
x_216 = x_287;
goto block_229;
}
}
else
{
lean_object* x_288; lean_object* x_289; 
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_288 = lean_ctor_get(x_230, 0);
lean_inc(x_288);
x_289 = lean_ctor_get(x_230, 1);
lean_inc(x_289);
lean_dec(x_230);
x_215 = x_288;
x_216 = x_289;
goto block_229;
}
block_214:
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_201 = lean_ctor_get(x_200, 4);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_200, 1);
lean_inc(x_203);
x_204 = lean_ctor_get(x_200, 2);
lean_inc(x_204);
x_205 = lean_ctor_get(x_200, 3);
lean_inc(x_205);
x_206 = lean_ctor_get(x_200, 5);
lean_inc(x_206);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 lean_ctor_release(x_200, 2);
 lean_ctor_release(x_200, 3);
 lean_ctor_release(x_200, 4);
 lean_ctor_release(x_200, 5);
 x_207 = x_200;
} else {
 lean_dec_ref(x_200);
 x_207 = lean_box(0);
}
x_208 = lean_ctor_get(x_201, 0);
lean_inc(x_208);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 x_209 = x_201;
} else {
 lean_dec_ref(x_201);
 x_209 = lean_box(0);
}
if (lean_is_scalar(x_209)) {
 x_210 = lean_alloc_ctor(0, 1, 1);
} else {
 x_210 = x_209;
}
lean_ctor_set(x_210, 0, x_208);
lean_ctor_set_uint8(x_210, sizeof(void*)*1, x_195);
if (lean_is_scalar(x_207)) {
 x_211 = lean_alloc_ctor(0, 6, 0);
} else {
 x_211 = x_207;
}
lean_ctor_set(x_211, 0, x_202);
lean_ctor_set(x_211, 1, x_203);
lean_ctor_set(x_211, 2, x_204);
lean_ctor_set(x_211, 3, x_205);
lean_ctor_set(x_211, 4, x_210);
lean_ctor_set(x_211, 5, x_206);
x_212 = lean_box(x_199);
if (lean_is_scalar(x_37)) {
 x_213 = lean_alloc_ctor(0, 2, 0);
} else {
 x_213 = x_37;
}
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_211);
return x_213;
}
block_229:
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_217 = lean_ctor_get(x_216, 4);
lean_inc(x_217);
x_218 = lean_ctor_get(x_216, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_216, 1);
lean_inc(x_219);
x_220 = lean_ctor_get(x_216, 2);
lean_inc(x_220);
x_221 = lean_ctor_get(x_216, 3);
lean_inc(x_221);
x_222 = lean_ctor_get(x_216, 5);
lean_inc(x_222);
if (lean_is_exclusive(x_216)) {
 lean_ctor_release(x_216, 0);
 lean_ctor_release(x_216, 1);
 lean_ctor_release(x_216, 2);
 lean_ctor_release(x_216, 3);
 lean_ctor_release(x_216, 4);
 lean_ctor_release(x_216, 5);
 x_223 = x_216;
} else {
 lean_dec_ref(x_216);
 x_223 = lean_box(0);
}
x_224 = lean_ctor_get(x_217, 0);
lean_inc(x_224);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 x_225 = x_217;
} else {
 lean_dec_ref(x_217);
 x_225 = lean_box(0);
}
if (lean_is_scalar(x_225)) {
 x_226 = lean_alloc_ctor(0, 1, 1);
} else {
 x_226 = x_225;
}
lean_ctor_set(x_226, 0, x_224);
lean_ctor_set_uint8(x_226, sizeof(void*)*1, x_195);
if (lean_is_scalar(x_223)) {
 x_227 = lean_alloc_ctor(0, 6, 0);
} else {
 x_227 = x_223;
}
lean_ctor_set(x_227, 0, x_218);
lean_ctor_set(x_227, 1, x_219);
lean_ctor_set(x_227, 2, x_220);
lean_ctor_set(x_227, 3, x_221);
lean_ctor_set(x_227, 4, x_226);
lean_ctor_set(x_227, 5, x_222);
if (lean_is_scalar(x_32)) {
 x_228 = lean_alloc_ctor(1, 2, 0);
} else {
 x_228 = x_32;
 lean_ctor_set_tag(x_228, 1);
}
lean_ctor_set(x_228, 0, x_215);
lean_ctor_set(x_228, 1, x_227);
return x_228;
}
}
}
else
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; uint8_t x_296; lean_object* x_297; lean_object* x_298; uint8_t x_299; lean_object* x_300; lean_object* x_301; uint8_t x_302; lean_object* x_303; lean_object* x_318; lean_object* x_319; lean_object* x_333; 
x_290 = lean_ctor_get(x_41, 4);
x_291 = lean_ctor_get(x_41, 0);
x_292 = lean_ctor_get(x_41, 1);
x_293 = lean_ctor_get(x_41, 2);
x_294 = lean_ctor_get(x_41, 3);
x_295 = lean_ctor_get(x_41, 5);
lean_inc(x_295);
lean_inc(x_290);
lean_inc(x_294);
lean_inc(x_293);
lean_inc(x_292);
lean_inc(x_291);
lean_dec(x_41);
x_296 = lean_ctor_get_uint8(x_290, sizeof(void*)*1);
x_297 = lean_ctor_get(x_290, 0);
lean_inc(x_297);
if (lean_is_exclusive(x_290)) {
 lean_ctor_release(x_290, 0);
 x_298 = x_290;
} else {
 lean_dec_ref(x_290);
 x_298 = lean_box(0);
}
x_299 = 0;
if (lean_is_scalar(x_298)) {
 x_300 = lean_alloc_ctor(0, 1, 1);
} else {
 x_300 = x_298;
}
lean_ctor_set(x_300, 0, x_297);
lean_ctor_set_uint8(x_300, sizeof(void*)*1, x_299);
x_301 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_301, 0, x_291);
lean_ctor_set(x_301, 1, x_292);
lean_ctor_set(x_301, 2, x_293);
lean_ctor_set(x_301, 3, x_294);
lean_ctor_set(x_301, 4, x_300);
lean_ctor_set(x_301, 5, x_295);
lean_inc(x_6);
lean_inc(x_1);
x_333 = l_Lean_Meta_inferType(x_1, x_6, x_301);
if (lean_obj_tag(x_333) == 0)
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_334 = lean_ctor_get(x_333, 0);
lean_inc(x_334);
x_335 = lean_ctor_get(x_333, 1);
lean_inc(x_335);
lean_dec(x_333);
lean_inc(x_6);
lean_inc(x_35);
x_336 = l_Lean_Meta_inferType(x_35, x_6, x_335);
if (lean_obj_tag(x_336) == 0)
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; uint8_t x_340; uint8_t x_341; uint8_t x_342; uint8_t x_343; lean_object* x_344; uint8_t x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_337 = lean_ctor_get(x_336, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_336, 1);
lean_inc(x_338);
lean_dec(x_336);
x_339 = lean_ctor_get(x_10, 0);
lean_inc(x_339);
x_340 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 1);
x_341 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 2);
x_342 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 3);
x_343 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 4);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_344 = x_10;
} else {
 lean_dec_ref(x_10);
 x_344 = lean_box(0);
}
x_345 = 1;
if (lean_is_scalar(x_344)) {
 x_346 = lean_alloc_ctor(0, 1, 6);
} else {
 x_346 = x_344;
}
lean_ctor_set(x_346, 0, x_339);
lean_ctor_set_uint8(x_346, sizeof(void*)*1, x_16);
lean_ctor_set_uint8(x_346, sizeof(void*)*1 + 1, x_340);
lean_ctor_set_uint8(x_346, sizeof(void*)*1 + 2, x_341);
lean_ctor_set_uint8(x_346, sizeof(void*)*1 + 3, x_342);
lean_ctor_set_uint8(x_346, sizeof(void*)*1 + 4, x_343);
lean_ctor_set_uint8(x_346, sizeof(void*)*1 + 5, x_345);
lean_inc(x_11);
x_347 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_347, 0, x_346);
lean_ctor_set(x_347, 1, x_11);
lean_ctor_set(x_347, 2, x_12);
lean_inc(x_337);
lean_inc(x_334);
x_348 = l_Lean_Meta_isExprDefEqAux(x_334, x_337, x_347, x_338);
if (lean_obj_tag(x_348) == 0)
{
lean_object* x_349; uint8_t x_350; 
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
x_350 = lean_unbox(x_349);
if (x_350 == 0)
{
lean_object* x_351; lean_object* x_352; uint8_t x_353; 
lean_dec(x_32);
lean_dec(x_18);
x_351 = lean_ctor_get(x_348, 1);
lean_inc(x_351);
lean_dec(x_348);
x_352 = lean_ctor_get(x_351, 4);
lean_inc(x_352);
x_353 = lean_ctor_get_uint8(x_352, sizeof(void*)*1);
lean_dec(x_352);
if (x_353 == 0)
{
uint8_t x_354; 
lean_dec(x_337);
lean_dec(x_334);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_354 = lean_unbox(x_349);
lean_dec(x_349);
x_302 = x_354;
x_303 = x_351;
goto block_317;
}
else
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; uint8_t x_358; 
x_355 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_356 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_355, x_6, x_351);
x_357 = lean_ctor_get(x_356, 0);
lean_inc(x_357);
x_358 = lean_unbox(x_357);
lean_dec(x_357);
if (x_358 == 0)
{
lean_object* x_359; uint8_t x_360; 
lean_dec(x_337);
lean_dec(x_334);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_359 = lean_ctor_get(x_356, 1);
lean_inc(x_359);
lean_dec(x_356);
x_360 = lean_unbox(x_349);
lean_dec(x_349);
x_302 = x_360;
x_303 = x_359;
goto block_317;
}
else
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; uint8_t x_380; 
x_361 = lean_ctor_get(x_356, 1);
lean_inc(x_361);
lean_dec(x_356);
x_362 = lean_ctor_get(x_361, 0);
lean_inc(x_362);
x_363 = lean_ctor_get(x_361, 1);
lean_inc(x_363);
x_364 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_364, 0, x_1);
x_365 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_366 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_366, 0, x_364);
lean_ctor_set(x_366, 1, x_365);
x_367 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_367, 0, x_334);
x_368 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_368, 0, x_366);
lean_ctor_set(x_368, 1, x_367);
x_369 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_370 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_370, 0, x_368);
lean_ctor_set(x_370, 1, x_369);
x_371 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_371, 0, x_35);
x_372 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_372, 0, x_370);
lean_ctor_set(x_372, 1, x_371);
x_373 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_373, 0, x_372);
lean_ctor_set(x_373, 1, x_365);
x_374 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_374, 0, x_337);
x_375 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_375, 0, x_373);
lean_ctor_set(x_375, 1, x_374);
x_376 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_376, 0, x_362);
lean_ctor_set(x_376, 1, x_363);
lean_ctor_set(x_376, 2, x_11);
lean_ctor_set(x_376, 3, x_375);
x_377 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_378 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_377, x_376, x_6, x_361);
lean_dec(x_6);
x_379 = lean_ctor_get(x_378, 1);
lean_inc(x_379);
lean_dec(x_378);
x_380 = lean_unbox(x_349);
lean_dec(x_349);
x_302 = x_380;
x_303 = x_379;
goto block_317;
}
}
}
else
{
lean_object* x_381; lean_object* x_382; 
lean_dec(x_337);
lean_dec(x_334);
lean_dec(x_11);
lean_dec(x_1);
x_381 = lean_ctor_get(x_348, 1);
lean_inc(x_381);
lean_dec(x_348);
x_382 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_381);
lean_dec(x_6);
if (lean_obj_tag(x_382) == 0)
{
lean_object* x_383; uint8_t x_384; 
lean_dec(x_32);
x_383 = lean_ctor_get(x_382, 1);
lean_inc(x_383);
lean_dec(x_382);
x_384 = lean_unbox(x_349);
lean_dec(x_349);
x_302 = x_384;
x_303 = x_383;
goto block_317;
}
else
{
lean_object* x_385; lean_object* x_386; 
lean_dec(x_349);
lean_dec(x_37);
x_385 = lean_ctor_get(x_382, 0);
lean_inc(x_385);
x_386 = lean_ctor_get(x_382, 1);
lean_inc(x_386);
lean_dec(x_382);
x_318 = x_385;
x_319 = x_386;
goto block_332;
}
}
}
else
{
lean_object* x_387; lean_object* x_388; 
lean_dec(x_337);
lean_dec(x_334);
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_387 = lean_ctor_get(x_348, 0);
lean_inc(x_387);
x_388 = lean_ctor_get(x_348, 1);
lean_inc(x_388);
lean_dec(x_348);
x_318 = x_387;
x_319 = x_388;
goto block_332;
}
}
else
{
lean_object* x_389; lean_object* x_390; 
lean_dec(x_334);
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_389 = lean_ctor_get(x_336, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_336, 1);
lean_inc(x_390);
lean_dec(x_336);
x_318 = x_389;
x_319 = x_390;
goto block_332;
}
}
else
{
lean_object* x_391; lean_object* x_392; 
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_391 = lean_ctor_get(x_333, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_333, 1);
lean_inc(x_392);
lean_dec(x_333);
x_318 = x_391;
x_319 = x_392;
goto block_332;
}
block_317:
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
x_304 = lean_ctor_get(x_303, 4);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 0);
lean_inc(x_305);
x_306 = lean_ctor_get(x_303, 1);
lean_inc(x_306);
x_307 = lean_ctor_get(x_303, 2);
lean_inc(x_307);
x_308 = lean_ctor_get(x_303, 3);
lean_inc(x_308);
x_309 = lean_ctor_get(x_303, 5);
lean_inc(x_309);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 lean_ctor_release(x_303, 2);
 lean_ctor_release(x_303, 3);
 lean_ctor_release(x_303, 4);
 lean_ctor_release(x_303, 5);
 x_310 = x_303;
} else {
 lean_dec_ref(x_303);
 x_310 = lean_box(0);
}
x_311 = lean_ctor_get(x_304, 0);
lean_inc(x_311);
if (lean_is_exclusive(x_304)) {
 lean_ctor_release(x_304, 0);
 x_312 = x_304;
} else {
 lean_dec_ref(x_304);
 x_312 = lean_box(0);
}
if (lean_is_scalar(x_312)) {
 x_313 = lean_alloc_ctor(0, 1, 1);
} else {
 x_313 = x_312;
}
lean_ctor_set(x_313, 0, x_311);
lean_ctor_set_uint8(x_313, sizeof(void*)*1, x_296);
if (lean_is_scalar(x_310)) {
 x_314 = lean_alloc_ctor(0, 6, 0);
} else {
 x_314 = x_310;
}
lean_ctor_set(x_314, 0, x_305);
lean_ctor_set(x_314, 1, x_306);
lean_ctor_set(x_314, 2, x_307);
lean_ctor_set(x_314, 3, x_308);
lean_ctor_set(x_314, 4, x_313);
lean_ctor_set(x_314, 5, x_309);
x_315 = lean_box(x_302);
if (lean_is_scalar(x_37)) {
 x_316 = lean_alloc_ctor(0, 2, 0);
} else {
 x_316 = x_37;
}
lean_ctor_set(x_316, 0, x_315);
lean_ctor_set(x_316, 1, x_314);
return x_316;
}
block_332:
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; 
x_320 = lean_ctor_get(x_319, 4);
lean_inc(x_320);
x_321 = lean_ctor_get(x_319, 0);
lean_inc(x_321);
x_322 = lean_ctor_get(x_319, 1);
lean_inc(x_322);
x_323 = lean_ctor_get(x_319, 2);
lean_inc(x_323);
x_324 = lean_ctor_get(x_319, 3);
lean_inc(x_324);
x_325 = lean_ctor_get(x_319, 5);
lean_inc(x_325);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 lean_ctor_release(x_319, 2);
 lean_ctor_release(x_319, 3);
 lean_ctor_release(x_319, 4);
 lean_ctor_release(x_319, 5);
 x_326 = x_319;
} else {
 lean_dec_ref(x_319);
 x_326 = lean_box(0);
}
x_327 = lean_ctor_get(x_320, 0);
lean_inc(x_327);
if (lean_is_exclusive(x_320)) {
 lean_ctor_release(x_320, 0);
 x_328 = x_320;
} else {
 lean_dec_ref(x_320);
 x_328 = lean_box(0);
}
if (lean_is_scalar(x_328)) {
 x_329 = lean_alloc_ctor(0, 1, 1);
} else {
 x_329 = x_328;
}
lean_ctor_set(x_329, 0, x_327);
lean_ctor_set_uint8(x_329, sizeof(void*)*1, x_296);
if (lean_is_scalar(x_326)) {
 x_330 = lean_alloc_ctor(0, 6, 0);
} else {
 x_330 = x_326;
}
lean_ctor_set(x_330, 0, x_321);
lean_ctor_set(x_330, 1, x_322);
lean_ctor_set(x_330, 2, x_323);
lean_ctor_set(x_330, 3, x_324);
lean_ctor_set(x_330, 4, x_329);
lean_ctor_set(x_330, 5, x_325);
if (lean_is_scalar(x_32)) {
 x_331 = lean_alloc_ctor(1, 2, 0);
} else {
 x_331 = x_32;
 lean_ctor_set_tag(x_331, 1);
}
lean_ctor_set(x_331, 0, x_318);
lean_ctor_set(x_331, 1, x_330);
return x_331;
}
}
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; uint8_t x_396; lean_object* x_397; lean_object* x_407; lean_object* x_408; lean_object* x_416; 
lean_dec(x_37);
lean_dec(x_32);
x_393 = l___private_Init_Lean_Util_Trace_2__getResetTraces___at_Lean_Meta_check___spec__1___rarg(x_41);
x_394 = lean_ctor_get(x_393, 0);
lean_inc(x_394);
x_395 = lean_ctor_get(x_393, 1);
lean_inc(x_395);
lean_dec(x_393);
lean_inc(x_6);
lean_inc(x_1);
x_416 = l_Lean_Meta_inferType(x_1, x_6, x_395);
if (lean_obj_tag(x_416) == 0)
{
lean_object* x_417; lean_object* x_418; lean_object* x_419; 
x_417 = lean_ctor_get(x_416, 0);
lean_inc(x_417);
x_418 = lean_ctor_get(x_416, 1);
lean_inc(x_418);
lean_dec(x_416);
lean_inc(x_6);
lean_inc(x_35);
x_419 = l_Lean_Meta_inferType(x_35, x_6, x_418);
if (lean_obj_tag(x_419) == 0)
{
lean_object* x_420; lean_object* x_421; uint8_t x_422; 
x_420 = lean_ctor_get(x_419, 0);
lean_inc(x_420);
x_421 = lean_ctor_get(x_419, 1);
lean_inc(x_421);
lean_dec(x_419);
x_422 = !lean_is_exclusive(x_10);
if (x_422 == 0)
{
uint8_t x_423; lean_object* x_424; lean_object* x_425; 
x_423 = 1;
lean_ctor_set_uint8(x_10, sizeof(void*)*1 + 5, x_423);
lean_inc(x_11);
x_424 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_424, 0, x_10);
lean_ctor_set(x_424, 1, x_11);
lean_ctor_set(x_424, 2, x_12);
lean_inc(x_420);
lean_inc(x_417);
x_425 = l_Lean_Meta_isExprDefEqAux(x_417, x_420, x_424, x_421);
if (lean_obj_tag(x_425) == 0)
{
lean_object* x_426; uint8_t x_427; 
x_426 = lean_ctor_get(x_425, 0);
lean_inc(x_426);
x_427 = lean_unbox(x_426);
if (x_427 == 0)
{
lean_object* x_428; lean_object* x_429; uint8_t x_430; 
lean_dec(x_18);
x_428 = lean_ctor_get(x_425, 1);
lean_inc(x_428);
lean_dec(x_425);
x_429 = lean_ctor_get(x_428, 4);
lean_inc(x_429);
x_430 = lean_ctor_get_uint8(x_429, sizeof(void*)*1);
lean_dec(x_429);
if (x_430 == 0)
{
uint8_t x_431; 
lean_dec(x_420);
lean_dec(x_417);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_1);
x_431 = lean_unbox(x_426);
lean_dec(x_426);
x_396 = x_431;
x_397 = x_428;
goto block_406;
}
else
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; uint8_t x_435; 
x_432 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_433 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_432, x_6, x_428);
x_434 = lean_ctor_get(x_433, 0);
lean_inc(x_434);
x_435 = lean_unbox(x_434);
lean_dec(x_434);
if (x_435 == 0)
{
lean_object* x_436; uint8_t x_437; 
lean_dec(x_420);
lean_dec(x_417);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_1);
x_436 = lean_ctor_get(x_433, 1);
lean_inc(x_436);
lean_dec(x_433);
x_437 = lean_unbox(x_426);
lean_dec(x_426);
x_396 = x_437;
x_397 = x_436;
goto block_406;
}
else
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; uint8_t x_457; 
x_438 = lean_ctor_get(x_433, 1);
lean_inc(x_438);
lean_dec(x_433);
x_439 = lean_ctor_get(x_438, 0);
lean_inc(x_439);
x_440 = lean_ctor_get(x_438, 1);
lean_inc(x_440);
x_441 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_441, 0, x_1);
x_442 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_443 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_443, 0, x_441);
lean_ctor_set(x_443, 1, x_442);
x_444 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_444, 0, x_417);
x_445 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_445, 0, x_443);
lean_ctor_set(x_445, 1, x_444);
x_446 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_447 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_447, 0, x_445);
lean_ctor_set(x_447, 1, x_446);
x_448 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_448, 0, x_35);
x_449 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_449, 0, x_447);
lean_ctor_set(x_449, 1, x_448);
x_450 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_450, 0, x_449);
lean_ctor_set(x_450, 1, x_442);
x_451 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_451, 0, x_420);
x_452 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_452, 0, x_450);
lean_ctor_set(x_452, 1, x_451);
x_453 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_453, 0, x_439);
lean_ctor_set(x_453, 1, x_440);
lean_ctor_set(x_453, 2, x_11);
lean_ctor_set(x_453, 3, x_452);
x_454 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_455 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_454, x_453, x_6, x_438);
x_456 = lean_ctor_get(x_455, 1);
lean_inc(x_456);
lean_dec(x_455);
x_457 = lean_unbox(x_426);
lean_dec(x_426);
x_396 = x_457;
x_397 = x_456;
goto block_406;
}
}
}
else
{
lean_object* x_458; lean_object* x_459; 
lean_dec(x_420);
lean_dec(x_417);
lean_dec(x_11);
lean_dec(x_1);
x_458 = lean_ctor_get(x_425, 1);
lean_inc(x_458);
lean_dec(x_425);
x_459 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_458);
if (lean_obj_tag(x_459) == 0)
{
lean_object* x_460; uint8_t x_461; 
x_460 = lean_ctor_get(x_459, 1);
lean_inc(x_460);
lean_dec(x_459);
x_461 = lean_unbox(x_426);
lean_dec(x_426);
x_396 = x_461;
x_397 = x_460;
goto block_406;
}
else
{
lean_object* x_462; lean_object* x_463; 
lean_dec(x_426);
x_462 = lean_ctor_get(x_459, 0);
lean_inc(x_462);
x_463 = lean_ctor_get(x_459, 1);
lean_inc(x_463);
lean_dec(x_459);
x_407 = x_462;
x_408 = x_463;
goto block_415;
}
}
}
else
{
lean_object* x_464; lean_object* x_465; 
lean_dec(x_420);
lean_dec(x_417);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_1);
x_464 = lean_ctor_get(x_425, 0);
lean_inc(x_464);
x_465 = lean_ctor_get(x_425, 1);
lean_inc(x_465);
lean_dec(x_425);
x_407 = x_464;
x_408 = x_465;
goto block_415;
}
}
else
{
lean_object* x_466; uint8_t x_467; uint8_t x_468; uint8_t x_469; uint8_t x_470; uint8_t x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; 
x_466 = lean_ctor_get(x_10, 0);
x_467 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 1);
x_468 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 2);
x_469 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 3);
x_470 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 4);
lean_inc(x_466);
lean_dec(x_10);
x_471 = 1;
x_472 = lean_alloc_ctor(0, 1, 6);
lean_ctor_set(x_472, 0, x_466);
lean_ctor_set_uint8(x_472, sizeof(void*)*1, x_16);
lean_ctor_set_uint8(x_472, sizeof(void*)*1 + 1, x_467);
lean_ctor_set_uint8(x_472, sizeof(void*)*1 + 2, x_468);
lean_ctor_set_uint8(x_472, sizeof(void*)*1 + 3, x_469);
lean_ctor_set_uint8(x_472, sizeof(void*)*1 + 4, x_470);
lean_ctor_set_uint8(x_472, sizeof(void*)*1 + 5, x_471);
lean_inc(x_11);
x_473 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_473, 0, x_472);
lean_ctor_set(x_473, 1, x_11);
lean_ctor_set(x_473, 2, x_12);
lean_inc(x_420);
lean_inc(x_417);
x_474 = l_Lean_Meta_isExprDefEqAux(x_417, x_420, x_473, x_421);
if (lean_obj_tag(x_474) == 0)
{
lean_object* x_475; uint8_t x_476; 
x_475 = lean_ctor_get(x_474, 0);
lean_inc(x_475);
x_476 = lean_unbox(x_475);
if (x_476 == 0)
{
lean_object* x_477; lean_object* x_478; uint8_t x_479; 
lean_dec(x_18);
x_477 = lean_ctor_get(x_474, 1);
lean_inc(x_477);
lean_dec(x_474);
x_478 = lean_ctor_get(x_477, 4);
lean_inc(x_478);
x_479 = lean_ctor_get_uint8(x_478, sizeof(void*)*1);
lean_dec(x_478);
if (x_479 == 0)
{
uint8_t x_480; 
lean_dec(x_420);
lean_dec(x_417);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_1);
x_480 = lean_unbox(x_475);
lean_dec(x_475);
x_396 = x_480;
x_397 = x_477;
goto block_406;
}
else
{
lean_object* x_481; lean_object* x_482; lean_object* x_483; uint8_t x_484; 
x_481 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_482 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_481, x_6, x_477);
x_483 = lean_ctor_get(x_482, 0);
lean_inc(x_483);
x_484 = lean_unbox(x_483);
lean_dec(x_483);
if (x_484 == 0)
{
lean_object* x_485; uint8_t x_486; 
lean_dec(x_420);
lean_dec(x_417);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_1);
x_485 = lean_ctor_get(x_482, 1);
lean_inc(x_485);
lean_dec(x_482);
x_486 = lean_unbox(x_475);
lean_dec(x_475);
x_396 = x_486;
x_397 = x_485;
goto block_406;
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; uint8_t x_506; 
x_487 = lean_ctor_get(x_482, 1);
lean_inc(x_487);
lean_dec(x_482);
x_488 = lean_ctor_get(x_487, 0);
lean_inc(x_488);
x_489 = lean_ctor_get(x_487, 1);
lean_inc(x_489);
x_490 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_490, 0, x_1);
x_491 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_492 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_492, 0, x_490);
lean_ctor_set(x_492, 1, x_491);
x_493 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_493, 0, x_417);
x_494 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_494, 0, x_492);
lean_ctor_set(x_494, 1, x_493);
x_495 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_496 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_496, 0, x_494);
lean_ctor_set(x_496, 1, x_495);
x_497 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_497, 0, x_35);
x_498 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_498, 0, x_496);
lean_ctor_set(x_498, 1, x_497);
x_499 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_499, 0, x_498);
lean_ctor_set(x_499, 1, x_491);
x_500 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_500, 0, x_420);
x_501 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_501, 0, x_499);
lean_ctor_set(x_501, 1, x_500);
x_502 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_502, 0, x_488);
lean_ctor_set(x_502, 1, x_489);
lean_ctor_set(x_502, 2, x_11);
lean_ctor_set(x_502, 3, x_501);
x_503 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_504 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_503, x_502, x_6, x_487);
x_505 = lean_ctor_get(x_504, 1);
lean_inc(x_505);
lean_dec(x_504);
x_506 = lean_unbox(x_475);
lean_dec(x_475);
x_396 = x_506;
x_397 = x_505;
goto block_406;
}
}
}
else
{
lean_object* x_507; lean_object* x_508; 
lean_dec(x_420);
lean_dec(x_417);
lean_dec(x_11);
lean_dec(x_1);
x_507 = lean_ctor_get(x_474, 1);
lean_inc(x_507);
lean_dec(x_474);
x_508 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_507);
if (lean_obj_tag(x_508) == 0)
{
lean_object* x_509; uint8_t x_510; 
x_509 = lean_ctor_get(x_508, 1);
lean_inc(x_509);
lean_dec(x_508);
x_510 = lean_unbox(x_475);
lean_dec(x_475);
x_396 = x_510;
x_397 = x_509;
goto block_406;
}
else
{
lean_object* x_511; lean_object* x_512; 
lean_dec(x_475);
x_511 = lean_ctor_get(x_508, 0);
lean_inc(x_511);
x_512 = lean_ctor_get(x_508, 1);
lean_inc(x_512);
lean_dec(x_508);
x_407 = x_511;
x_408 = x_512;
goto block_415;
}
}
}
else
{
lean_object* x_513; lean_object* x_514; 
lean_dec(x_420);
lean_dec(x_417);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_1);
x_513 = lean_ctor_get(x_474, 0);
lean_inc(x_513);
x_514 = lean_ctor_get(x_474, 1);
lean_inc(x_514);
lean_dec(x_474);
x_407 = x_513;
x_408 = x_514;
goto block_415;
}
}
}
else
{
lean_object* x_515; lean_object* x_516; 
lean_dec(x_417);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_515 = lean_ctor_get(x_419, 0);
lean_inc(x_515);
x_516 = lean_ctor_get(x_419, 1);
lean_inc(x_516);
lean_dec(x_419);
x_407 = x_515;
x_408 = x_516;
goto block_415;
}
}
else
{
lean_object* x_517; lean_object* x_518; 
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_517 = lean_ctor_get(x_416, 0);
lean_inc(x_517);
x_518 = lean_ctor_get(x_416, 1);
lean_inc(x_518);
lean_dec(x_416);
x_407 = x_517;
x_408 = x_518;
goto block_415;
}
block_406:
{
lean_object* x_398; lean_object* x_399; uint8_t x_400; 
x_398 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__2;
x_399 = l___private_Init_Lean_Util_Trace_1__addNode___at_Lean_Meta_check___spec__2(x_394, x_398, x_6, x_397);
lean_dec(x_6);
x_400 = !lean_is_exclusive(x_399);
if (x_400 == 0)
{
lean_object* x_401; lean_object* x_402; 
x_401 = lean_ctor_get(x_399, 0);
lean_dec(x_401);
x_402 = lean_box(x_396);
lean_ctor_set(x_399, 0, x_402);
return x_399;
}
else
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_403 = lean_ctor_get(x_399, 1);
lean_inc(x_403);
lean_dec(x_399);
x_404 = lean_box(x_396);
x_405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_405, 0, x_404);
lean_ctor_set(x_405, 1, x_403);
return x_405;
}
}
block_415:
{
lean_object* x_409; lean_object* x_410; uint8_t x_411; 
x_409 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__2;
x_410 = l___private_Init_Lean_Util_Trace_1__addNode___at_Lean_Meta_check___spec__2(x_394, x_409, x_6, x_408);
lean_dec(x_6);
x_411 = !lean_is_exclusive(x_410);
if (x_411 == 0)
{
lean_object* x_412; 
x_412 = lean_ctor_get(x_410, 0);
lean_dec(x_412);
lean_ctor_set_tag(x_410, 1);
lean_ctor_set(x_410, 0, x_407);
return x_410;
}
else
{
lean_object* x_413; lean_object* x_414; 
x_413 = lean_ctor_get(x_410, 1);
lean_inc(x_413);
lean_dec(x_410);
x_414 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_414, 0, x_407);
lean_ctor_set(x_414, 1, x_413);
return x_414;
}
}
}
}
}
else
{
lean_object* x_528; lean_object* x_529; uint8_t x_530; 
lean_dec(x_32);
lean_inc(x_6);
lean_inc(x_35);
x_528 = l_Lean_Meta_isTypeCorrect(x_35, x_6, x_36);
x_529 = lean_ctor_get(x_528, 0);
lean_inc(x_529);
x_530 = lean_unbox(x_529);
lean_dec(x_529);
if (x_530 == 0)
{
uint8_t x_531; 
lean_dec(x_37);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_10);
x_531 = !lean_is_exclusive(x_528);
if (x_531 == 0)
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; uint8_t x_535; 
x_532 = lean_ctor_get(x_528, 1);
x_533 = lean_ctor_get(x_528, 0);
lean_dec(x_533);
x_534 = lean_ctor_get(x_532, 4);
lean_inc(x_534);
x_535 = lean_ctor_get_uint8(x_534, sizeof(void*)*1);
lean_dec(x_534);
if (x_535 == 0)
{
lean_dec(x_35);
lean_dec(x_11);
if (x_16 == 0)
{
uint8_t x_536; lean_object* x_537; 
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_536 = 0;
x_537 = lean_box(x_536);
lean_ctor_set(x_528, 0, x_537);
return x_528;
}
else
{
lean_object* x_538; 
lean_free_object(x_528);
x_538 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_5, x_14, x_6, x_532);
lean_dec(x_5);
return x_538;
}
}
else
{
lean_object* x_539; lean_object* x_540; lean_object* x_541; uint8_t x_542; 
lean_free_object(x_528);
x_539 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__11;
x_540 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_539, x_6, x_532);
x_541 = lean_ctor_get(x_540, 0);
lean_inc(x_541);
x_542 = lean_unbox(x_541);
lean_dec(x_541);
if (x_542 == 0)
{
lean_dec(x_35);
lean_dec(x_11);
if (x_16 == 0)
{
uint8_t x_543; 
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_543 = !lean_is_exclusive(x_540);
if (x_543 == 0)
{
lean_object* x_544; uint8_t x_545; lean_object* x_546; 
x_544 = lean_ctor_get(x_540, 0);
lean_dec(x_544);
x_545 = 0;
x_546 = lean_box(x_545);
lean_ctor_set(x_540, 0, x_546);
return x_540;
}
else
{
lean_object* x_547; uint8_t x_548; lean_object* x_549; lean_object* x_550; 
x_547 = lean_ctor_get(x_540, 1);
lean_inc(x_547);
lean_dec(x_540);
x_548 = 0;
x_549 = lean_box(x_548);
x_550 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_550, 0, x_549);
lean_ctor_set(x_550, 1, x_547);
return x_550;
}
}
else
{
lean_object* x_551; lean_object* x_552; 
x_551 = lean_ctor_get(x_540, 1);
lean_inc(x_551);
lean_dec(x_540);
x_552 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_5, x_14, x_6, x_551);
lean_dec(x_5);
return x_552;
}
}
else
{
lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; 
x_553 = lean_ctor_get(x_540, 1);
lean_inc(x_553);
lean_dec(x_540);
x_554 = lean_ctor_get(x_553, 0);
lean_inc(x_554);
x_555 = lean_ctor_get(x_553, 1);
lean_inc(x_555);
lean_inc(x_1);
x_556 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_556, 0, x_1);
x_557 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_558 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_558, 0, x_556);
lean_ctor_set(x_558, 1, x_557);
x_559 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_559, 0, x_35);
x_560 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_560, 0, x_558);
lean_ctor_set(x_560, 1, x_559);
x_561 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_561, 0, x_554);
lean_ctor_set(x_561, 1, x_555);
lean_ctor_set(x_561, 2, x_11);
lean_ctor_set(x_561, 3, x_560);
x_562 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__10;
x_563 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_562, x_561, x_6, x_553);
if (x_16 == 0)
{
uint8_t x_564; 
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_564 = !lean_is_exclusive(x_563);
if (x_564 == 0)
{
lean_object* x_565; uint8_t x_566; lean_object* x_567; 
x_565 = lean_ctor_get(x_563, 0);
lean_dec(x_565);
x_566 = 0;
x_567 = lean_box(x_566);
lean_ctor_set(x_563, 0, x_567);
return x_563;
}
else
{
lean_object* x_568; uint8_t x_569; lean_object* x_570; lean_object* x_571; 
x_568 = lean_ctor_get(x_563, 1);
lean_inc(x_568);
lean_dec(x_563);
x_569 = 0;
x_570 = lean_box(x_569);
x_571 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_571, 0, x_570);
lean_ctor_set(x_571, 1, x_568);
return x_571;
}
}
else
{
lean_object* x_572; lean_object* x_573; 
x_572 = lean_ctor_get(x_563, 1);
lean_inc(x_572);
lean_dec(x_563);
x_573 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_5, x_14, x_6, x_572);
lean_dec(x_5);
return x_573;
}
}
}
}
else
{
lean_object* x_574; lean_object* x_575; uint8_t x_576; 
x_574 = lean_ctor_get(x_528, 1);
lean_inc(x_574);
lean_dec(x_528);
x_575 = lean_ctor_get(x_574, 4);
lean_inc(x_575);
x_576 = lean_ctor_get_uint8(x_575, sizeof(void*)*1);
lean_dec(x_575);
if (x_576 == 0)
{
lean_dec(x_35);
lean_dec(x_11);
if (x_16 == 0)
{
uint8_t x_577; lean_object* x_578; lean_object* x_579; 
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_577 = 0;
x_578 = lean_box(x_577);
x_579 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_579, 0, x_578);
lean_ctor_set(x_579, 1, x_574);
return x_579;
}
else
{
lean_object* x_580; 
x_580 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_5, x_14, x_6, x_574);
lean_dec(x_5);
return x_580;
}
}
else
{
lean_object* x_581; lean_object* x_582; lean_object* x_583; uint8_t x_584; 
x_581 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__11;
x_582 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_581, x_6, x_574);
x_583 = lean_ctor_get(x_582, 0);
lean_inc(x_583);
x_584 = lean_unbox(x_583);
lean_dec(x_583);
if (x_584 == 0)
{
lean_dec(x_35);
lean_dec(x_11);
if (x_16 == 0)
{
lean_object* x_585; lean_object* x_586; uint8_t x_587; lean_object* x_588; lean_object* x_589; 
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_585 = lean_ctor_get(x_582, 1);
lean_inc(x_585);
if (lean_is_exclusive(x_582)) {
 lean_ctor_release(x_582, 0);
 lean_ctor_release(x_582, 1);
 x_586 = x_582;
} else {
 lean_dec_ref(x_582);
 x_586 = lean_box(0);
}
x_587 = 0;
x_588 = lean_box(x_587);
if (lean_is_scalar(x_586)) {
 x_589 = lean_alloc_ctor(0, 2, 0);
} else {
 x_589 = x_586;
}
lean_ctor_set(x_589, 0, x_588);
lean_ctor_set(x_589, 1, x_585);
return x_589;
}
else
{
lean_object* x_590; lean_object* x_591; 
x_590 = lean_ctor_get(x_582, 1);
lean_inc(x_590);
lean_dec(x_582);
x_591 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_5, x_14, x_6, x_590);
lean_dec(x_5);
return x_591;
}
}
else
{
lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; 
x_592 = lean_ctor_get(x_582, 1);
lean_inc(x_592);
lean_dec(x_582);
x_593 = lean_ctor_get(x_592, 0);
lean_inc(x_593);
x_594 = lean_ctor_get(x_592, 1);
lean_inc(x_594);
lean_inc(x_1);
x_595 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_595, 0, x_1);
x_596 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_597 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_597, 0, x_595);
lean_ctor_set(x_597, 1, x_596);
x_598 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_598, 0, x_35);
x_599 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_599, 0, x_597);
lean_ctor_set(x_599, 1, x_598);
x_600 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_600, 0, x_593);
lean_ctor_set(x_600, 1, x_594);
lean_ctor_set(x_600, 2, x_11);
lean_ctor_set(x_600, 3, x_599);
x_601 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__10;
x_602 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_601, x_600, x_6, x_592);
if (x_16 == 0)
{
lean_object* x_603; lean_object* x_604; uint8_t x_605; lean_object* x_606; lean_object* x_607; 
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_603 = lean_ctor_get(x_602, 1);
lean_inc(x_603);
if (lean_is_exclusive(x_602)) {
 lean_ctor_release(x_602, 0);
 lean_ctor_release(x_602, 1);
 x_604 = x_602;
} else {
 lean_dec_ref(x_602);
 x_604 = lean_box(0);
}
x_605 = 0;
x_606 = lean_box(x_605);
if (lean_is_scalar(x_604)) {
 x_607 = lean_alloc_ctor(0, 2, 0);
} else {
 x_607 = x_604;
}
lean_ctor_set(x_607, 0, x_606);
lean_ctor_set(x_607, 1, x_603);
return x_607;
}
else
{
lean_object* x_608; lean_object* x_609; 
x_608 = lean_ctor_get(x_602, 1);
lean_inc(x_608);
lean_dec(x_602);
x_609 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_5, x_14, x_6, x_608);
lean_dec(x_5);
return x_609;
}
}
}
}
}
else
{
lean_object* x_610; lean_object* x_611; uint8_t x_612; lean_object* x_613; lean_object* x_1092; uint8_t x_1093; 
lean_dec(x_14);
lean_dec(x_5);
x_610 = lean_ctor_get(x_528, 1);
lean_inc(x_610);
if (lean_is_exclusive(x_528)) {
 lean_ctor_release(x_528, 0);
 lean_ctor_release(x_528, 1);
 x_611 = x_528;
} else {
 lean_dec_ref(x_528);
 x_611 = lean_box(0);
}
x_1092 = lean_ctor_get(x_610, 4);
lean_inc(x_1092);
x_1093 = lean_ctor_get_uint8(x_1092, sizeof(void*)*1);
lean_dec(x_1092);
if (x_1093 == 0)
{
uint8_t x_1094; 
x_1094 = 0;
x_612 = x_1094;
x_613 = x_610;
goto block_1091;
}
else
{
lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; uint8_t x_1099; 
x_1095 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__9;
x_1096 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_1095, x_6, x_610);
x_1097 = lean_ctor_get(x_1096, 0);
lean_inc(x_1097);
x_1098 = lean_ctor_get(x_1096, 1);
lean_inc(x_1098);
lean_dec(x_1096);
x_1099 = lean_unbox(x_1097);
lean_dec(x_1097);
x_612 = x_1099;
x_613 = x_1098;
goto block_1091;
}
block_1091:
{
if (x_612 == 0)
{
uint8_t x_614; 
x_614 = !lean_is_exclusive(x_613);
if (x_614 == 0)
{
lean_object* x_615; uint8_t x_616; 
x_615 = lean_ctor_get(x_613, 4);
x_616 = !lean_is_exclusive(x_615);
if (x_616 == 0)
{
uint8_t x_617; uint8_t x_618; uint8_t x_619; lean_object* x_620; lean_object* x_643; lean_object* x_644; lean_object* x_664; 
x_617 = lean_ctor_get_uint8(x_615, sizeof(void*)*1);
x_618 = 0;
lean_ctor_set_uint8(x_615, sizeof(void*)*1, x_618);
lean_inc(x_6);
lean_inc(x_1);
x_664 = l_Lean_Meta_inferType(x_1, x_6, x_613);
if (lean_obj_tag(x_664) == 0)
{
lean_object* x_665; lean_object* x_666; lean_object* x_667; 
x_665 = lean_ctor_get(x_664, 0);
lean_inc(x_665);
x_666 = lean_ctor_get(x_664, 1);
lean_inc(x_666);
lean_dec(x_664);
lean_inc(x_6);
lean_inc(x_35);
x_667 = l_Lean_Meta_inferType(x_35, x_6, x_666);
if (lean_obj_tag(x_667) == 0)
{
lean_object* x_668; lean_object* x_669; uint8_t x_670; 
x_668 = lean_ctor_get(x_667, 0);
lean_inc(x_668);
x_669 = lean_ctor_get(x_667, 1);
lean_inc(x_669);
lean_dec(x_667);
x_670 = !lean_is_exclusive(x_10);
if (x_670 == 0)
{
uint8_t x_671; lean_object* x_672; lean_object* x_673; 
x_671 = 1;
lean_ctor_set_uint8(x_10, sizeof(void*)*1 + 5, x_671);
lean_inc(x_11);
x_672 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_672, 0, x_10);
lean_ctor_set(x_672, 1, x_11);
lean_ctor_set(x_672, 2, x_12);
lean_inc(x_668);
lean_inc(x_665);
x_673 = l_Lean_Meta_isExprDefEqAux(x_665, x_668, x_672, x_669);
if (lean_obj_tag(x_673) == 0)
{
lean_object* x_674; uint8_t x_675; 
x_674 = lean_ctor_get(x_673, 0);
lean_inc(x_674);
x_675 = lean_unbox(x_674);
if (x_675 == 0)
{
lean_object* x_676; lean_object* x_677; uint8_t x_678; 
lean_dec(x_37);
lean_dec(x_18);
x_676 = lean_ctor_get(x_673, 1);
lean_inc(x_676);
lean_dec(x_673);
x_677 = lean_ctor_get(x_676, 4);
lean_inc(x_677);
x_678 = lean_ctor_get_uint8(x_677, sizeof(void*)*1);
lean_dec(x_677);
if (x_678 == 0)
{
uint8_t x_679; 
lean_dec(x_668);
lean_dec(x_665);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_679 = lean_unbox(x_674);
lean_dec(x_674);
x_619 = x_679;
x_620 = x_676;
goto block_642;
}
else
{
lean_object* x_680; lean_object* x_681; lean_object* x_682; uint8_t x_683; 
x_680 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_681 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_680, x_6, x_676);
x_682 = lean_ctor_get(x_681, 0);
lean_inc(x_682);
x_683 = lean_unbox(x_682);
lean_dec(x_682);
if (x_683 == 0)
{
lean_object* x_684; uint8_t x_685; 
lean_dec(x_668);
lean_dec(x_665);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_684 = lean_ctor_get(x_681, 1);
lean_inc(x_684);
lean_dec(x_681);
x_685 = lean_unbox(x_674);
lean_dec(x_674);
x_619 = x_685;
x_620 = x_684;
goto block_642;
}
else
{
lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; uint8_t x_705; 
x_686 = lean_ctor_get(x_681, 1);
lean_inc(x_686);
lean_dec(x_681);
x_687 = lean_ctor_get(x_686, 0);
lean_inc(x_687);
x_688 = lean_ctor_get(x_686, 1);
lean_inc(x_688);
x_689 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_689, 0, x_1);
x_690 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_691 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_691, 0, x_689);
lean_ctor_set(x_691, 1, x_690);
x_692 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_692, 0, x_665);
x_693 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_693, 0, x_691);
lean_ctor_set(x_693, 1, x_692);
x_694 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_695 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_695, 0, x_693);
lean_ctor_set(x_695, 1, x_694);
x_696 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_696, 0, x_35);
x_697 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_697, 0, x_695);
lean_ctor_set(x_697, 1, x_696);
x_698 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_698, 0, x_697);
lean_ctor_set(x_698, 1, x_690);
x_699 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_699, 0, x_668);
x_700 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_700, 0, x_698);
lean_ctor_set(x_700, 1, x_699);
x_701 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_701, 0, x_687);
lean_ctor_set(x_701, 1, x_688);
lean_ctor_set(x_701, 2, x_11);
lean_ctor_set(x_701, 3, x_700);
x_702 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_703 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_702, x_701, x_6, x_686);
lean_dec(x_6);
x_704 = lean_ctor_get(x_703, 1);
lean_inc(x_704);
lean_dec(x_703);
x_705 = lean_unbox(x_674);
lean_dec(x_674);
x_619 = x_705;
x_620 = x_704;
goto block_642;
}
}
}
else
{
lean_object* x_706; lean_object* x_707; 
lean_dec(x_668);
lean_dec(x_665);
lean_dec(x_11);
lean_dec(x_1);
x_706 = lean_ctor_get(x_673, 1);
lean_inc(x_706);
lean_dec(x_673);
x_707 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_706);
lean_dec(x_6);
if (lean_obj_tag(x_707) == 0)
{
lean_object* x_708; uint8_t x_709; 
lean_dec(x_37);
x_708 = lean_ctor_get(x_707, 1);
lean_inc(x_708);
lean_dec(x_707);
x_709 = lean_unbox(x_674);
lean_dec(x_674);
x_619 = x_709;
x_620 = x_708;
goto block_642;
}
else
{
lean_object* x_710; lean_object* x_711; 
lean_dec(x_674);
lean_dec(x_611);
x_710 = lean_ctor_get(x_707, 0);
lean_inc(x_710);
x_711 = lean_ctor_get(x_707, 1);
lean_inc(x_711);
lean_dec(x_707);
x_643 = x_710;
x_644 = x_711;
goto block_663;
}
}
}
else
{
lean_object* x_712; lean_object* x_713; 
lean_dec(x_668);
lean_dec(x_665);
lean_dec(x_611);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_712 = lean_ctor_get(x_673, 0);
lean_inc(x_712);
x_713 = lean_ctor_get(x_673, 1);
lean_inc(x_713);
lean_dec(x_673);
x_643 = x_712;
x_644 = x_713;
goto block_663;
}
}
else
{
lean_object* x_714; uint8_t x_715; uint8_t x_716; uint8_t x_717; uint8_t x_718; uint8_t x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; 
x_714 = lean_ctor_get(x_10, 0);
x_715 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 1);
x_716 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 2);
x_717 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 3);
x_718 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 4);
lean_inc(x_714);
lean_dec(x_10);
x_719 = 1;
x_720 = lean_alloc_ctor(0, 1, 6);
lean_ctor_set(x_720, 0, x_714);
lean_ctor_set_uint8(x_720, sizeof(void*)*1, x_16);
lean_ctor_set_uint8(x_720, sizeof(void*)*1 + 1, x_715);
lean_ctor_set_uint8(x_720, sizeof(void*)*1 + 2, x_716);
lean_ctor_set_uint8(x_720, sizeof(void*)*1 + 3, x_717);
lean_ctor_set_uint8(x_720, sizeof(void*)*1 + 4, x_718);
lean_ctor_set_uint8(x_720, sizeof(void*)*1 + 5, x_719);
lean_inc(x_11);
x_721 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_721, 0, x_720);
lean_ctor_set(x_721, 1, x_11);
lean_ctor_set(x_721, 2, x_12);
lean_inc(x_668);
lean_inc(x_665);
x_722 = l_Lean_Meta_isExprDefEqAux(x_665, x_668, x_721, x_669);
if (lean_obj_tag(x_722) == 0)
{
lean_object* x_723; uint8_t x_724; 
x_723 = lean_ctor_get(x_722, 0);
lean_inc(x_723);
x_724 = lean_unbox(x_723);
if (x_724 == 0)
{
lean_object* x_725; lean_object* x_726; uint8_t x_727; 
lean_dec(x_37);
lean_dec(x_18);
x_725 = lean_ctor_get(x_722, 1);
lean_inc(x_725);
lean_dec(x_722);
x_726 = lean_ctor_get(x_725, 4);
lean_inc(x_726);
x_727 = lean_ctor_get_uint8(x_726, sizeof(void*)*1);
lean_dec(x_726);
if (x_727 == 0)
{
uint8_t x_728; 
lean_dec(x_668);
lean_dec(x_665);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_728 = lean_unbox(x_723);
lean_dec(x_723);
x_619 = x_728;
x_620 = x_725;
goto block_642;
}
else
{
lean_object* x_729; lean_object* x_730; lean_object* x_731; uint8_t x_732; 
x_729 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_730 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_729, x_6, x_725);
x_731 = lean_ctor_get(x_730, 0);
lean_inc(x_731);
x_732 = lean_unbox(x_731);
lean_dec(x_731);
if (x_732 == 0)
{
lean_object* x_733; uint8_t x_734; 
lean_dec(x_668);
lean_dec(x_665);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_733 = lean_ctor_get(x_730, 1);
lean_inc(x_733);
lean_dec(x_730);
x_734 = lean_unbox(x_723);
lean_dec(x_723);
x_619 = x_734;
x_620 = x_733;
goto block_642;
}
else
{
lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; uint8_t x_754; 
x_735 = lean_ctor_get(x_730, 1);
lean_inc(x_735);
lean_dec(x_730);
x_736 = lean_ctor_get(x_735, 0);
lean_inc(x_736);
x_737 = lean_ctor_get(x_735, 1);
lean_inc(x_737);
x_738 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_738, 0, x_1);
x_739 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_740 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_740, 0, x_738);
lean_ctor_set(x_740, 1, x_739);
x_741 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_741, 0, x_665);
x_742 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_742, 0, x_740);
lean_ctor_set(x_742, 1, x_741);
x_743 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_744 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_744, 0, x_742);
lean_ctor_set(x_744, 1, x_743);
x_745 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_745, 0, x_35);
x_746 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_746, 0, x_744);
lean_ctor_set(x_746, 1, x_745);
x_747 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_747, 0, x_746);
lean_ctor_set(x_747, 1, x_739);
x_748 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_748, 0, x_668);
x_749 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_749, 0, x_747);
lean_ctor_set(x_749, 1, x_748);
x_750 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_750, 0, x_736);
lean_ctor_set(x_750, 1, x_737);
lean_ctor_set(x_750, 2, x_11);
lean_ctor_set(x_750, 3, x_749);
x_751 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_752 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_751, x_750, x_6, x_735);
lean_dec(x_6);
x_753 = lean_ctor_get(x_752, 1);
lean_inc(x_753);
lean_dec(x_752);
x_754 = lean_unbox(x_723);
lean_dec(x_723);
x_619 = x_754;
x_620 = x_753;
goto block_642;
}
}
}
else
{
lean_object* x_755; lean_object* x_756; 
lean_dec(x_668);
lean_dec(x_665);
lean_dec(x_11);
lean_dec(x_1);
x_755 = lean_ctor_get(x_722, 1);
lean_inc(x_755);
lean_dec(x_722);
x_756 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_755);
lean_dec(x_6);
if (lean_obj_tag(x_756) == 0)
{
lean_object* x_757; uint8_t x_758; 
lean_dec(x_37);
x_757 = lean_ctor_get(x_756, 1);
lean_inc(x_757);
lean_dec(x_756);
x_758 = lean_unbox(x_723);
lean_dec(x_723);
x_619 = x_758;
x_620 = x_757;
goto block_642;
}
else
{
lean_object* x_759; lean_object* x_760; 
lean_dec(x_723);
lean_dec(x_611);
x_759 = lean_ctor_get(x_756, 0);
lean_inc(x_759);
x_760 = lean_ctor_get(x_756, 1);
lean_inc(x_760);
lean_dec(x_756);
x_643 = x_759;
x_644 = x_760;
goto block_663;
}
}
}
else
{
lean_object* x_761; lean_object* x_762; 
lean_dec(x_668);
lean_dec(x_665);
lean_dec(x_611);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_761 = lean_ctor_get(x_722, 0);
lean_inc(x_761);
x_762 = lean_ctor_get(x_722, 1);
lean_inc(x_762);
lean_dec(x_722);
x_643 = x_761;
x_644 = x_762;
goto block_663;
}
}
}
else
{
lean_object* x_763; lean_object* x_764; 
lean_dec(x_665);
lean_dec(x_611);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_763 = lean_ctor_get(x_667, 0);
lean_inc(x_763);
x_764 = lean_ctor_get(x_667, 1);
lean_inc(x_764);
lean_dec(x_667);
x_643 = x_763;
x_644 = x_764;
goto block_663;
}
}
else
{
lean_object* x_765; lean_object* x_766; 
lean_dec(x_611);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_765 = lean_ctor_get(x_664, 0);
lean_inc(x_765);
x_766 = lean_ctor_get(x_664, 1);
lean_inc(x_766);
lean_dec(x_664);
x_643 = x_765;
x_644 = x_766;
goto block_663;
}
block_642:
{
uint8_t x_621; 
x_621 = !lean_is_exclusive(x_620);
if (x_621 == 0)
{
lean_object* x_622; uint8_t x_623; 
x_622 = lean_ctor_get(x_620, 4);
x_623 = !lean_is_exclusive(x_622);
if (x_623 == 0)
{
lean_object* x_624; lean_object* x_625; 
lean_ctor_set_uint8(x_622, sizeof(void*)*1, x_617);
x_624 = lean_box(x_619);
if (lean_is_scalar(x_611)) {
 x_625 = lean_alloc_ctor(0, 2, 0);
} else {
 x_625 = x_611;
}
lean_ctor_set(x_625, 0, x_624);
lean_ctor_set(x_625, 1, x_620);
return x_625;
}
else
{
lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; 
x_626 = lean_ctor_get(x_622, 0);
lean_inc(x_626);
lean_dec(x_622);
x_627 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_627, 0, x_626);
lean_ctor_set_uint8(x_627, sizeof(void*)*1, x_617);
lean_ctor_set(x_620, 4, x_627);
x_628 = lean_box(x_619);
if (lean_is_scalar(x_611)) {
 x_629 = lean_alloc_ctor(0, 2, 0);
} else {
 x_629 = x_611;
}
lean_ctor_set(x_629, 0, x_628);
lean_ctor_set(x_629, 1, x_620);
return x_629;
}
}
else
{
lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; 
x_630 = lean_ctor_get(x_620, 4);
x_631 = lean_ctor_get(x_620, 0);
x_632 = lean_ctor_get(x_620, 1);
x_633 = lean_ctor_get(x_620, 2);
x_634 = lean_ctor_get(x_620, 3);
x_635 = lean_ctor_get(x_620, 5);
lean_inc(x_635);
lean_inc(x_630);
lean_inc(x_634);
lean_inc(x_633);
lean_inc(x_632);
lean_inc(x_631);
lean_dec(x_620);
x_636 = lean_ctor_get(x_630, 0);
lean_inc(x_636);
if (lean_is_exclusive(x_630)) {
 lean_ctor_release(x_630, 0);
 x_637 = x_630;
} else {
 lean_dec_ref(x_630);
 x_637 = lean_box(0);
}
if (lean_is_scalar(x_637)) {
 x_638 = lean_alloc_ctor(0, 1, 1);
} else {
 x_638 = x_637;
}
lean_ctor_set(x_638, 0, x_636);
lean_ctor_set_uint8(x_638, sizeof(void*)*1, x_617);
x_639 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_639, 0, x_631);
lean_ctor_set(x_639, 1, x_632);
lean_ctor_set(x_639, 2, x_633);
lean_ctor_set(x_639, 3, x_634);
lean_ctor_set(x_639, 4, x_638);
lean_ctor_set(x_639, 5, x_635);
x_640 = lean_box(x_619);
if (lean_is_scalar(x_611)) {
 x_641 = lean_alloc_ctor(0, 2, 0);
} else {
 x_641 = x_611;
}
lean_ctor_set(x_641, 0, x_640);
lean_ctor_set(x_641, 1, x_639);
return x_641;
}
}
block_663:
{
uint8_t x_645; 
x_645 = !lean_is_exclusive(x_644);
if (x_645 == 0)
{
lean_object* x_646; uint8_t x_647; 
x_646 = lean_ctor_get(x_644, 4);
x_647 = !lean_is_exclusive(x_646);
if (x_647 == 0)
{
lean_object* x_648; 
lean_ctor_set_uint8(x_646, sizeof(void*)*1, x_617);
if (lean_is_scalar(x_37)) {
 x_648 = lean_alloc_ctor(1, 2, 0);
} else {
 x_648 = x_37;
 lean_ctor_set_tag(x_648, 1);
}
lean_ctor_set(x_648, 0, x_643);
lean_ctor_set(x_648, 1, x_644);
return x_648;
}
else
{
lean_object* x_649; lean_object* x_650; lean_object* x_651; 
x_649 = lean_ctor_get(x_646, 0);
lean_inc(x_649);
lean_dec(x_646);
x_650 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_650, 0, x_649);
lean_ctor_set_uint8(x_650, sizeof(void*)*1, x_617);
lean_ctor_set(x_644, 4, x_650);
if (lean_is_scalar(x_37)) {
 x_651 = lean_alloc_ctor(1, 2, 0);
} else {
 x_651 = x_37;
 lean_ctor_set_tag(x_651, 1);
}
lean_ctor_set(x_651, 0, x_643);
lean_ctor_set(x_651, 1, x_644);
return x_651;
}
}
else
{
lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; 
x_652 = lean_ctor_get(x_644, 4);
x_653 = lean_ctor_get(x_644, 0);
x_654 = lean_ctor_get(x_644, 1);
x_655 = lean_ctor_get(x_644, 2);
x_656 = lean_ctor_get(x_644, 3);
x_657 = lean_ctor_get(x_644, 5);
lean_inc(x_657);
lean_inc(x_652);
lean_inc(x_656);
lean_inc(x_655);
lean_inc(x_654);
lean_inc(x_653);
lean_dec(x_644);
x_658 = lean_ctor_get(x_652, 0);
lean_inc(x_658);
if (lean_is_exclusive(x_652)) {
 lean_ctor_release(x_652, 0);
 x_659 = x_652;
} else {
 lean_dec_ref(x_652);
 x_659 = lean_box(0);
}
if (lean_is_scalar(x_659)) {
 x_660 = lean_alloc_ctor(0, 1, 1);
} else {
 x_660 = x_659;
}
lean_ctor_set(x_660, 0, x_658);
lean_ctor_set_uint8(x_660, sizeof(void*)*1, x_617);
x_661 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_661, 0, x_653);
lean_ctor_set(x_661, 1, x_654);
lean_ctor_set(x_661, 2, x_655);
lean_ctor_set(x_661, 3, x_656);
lean_ctor_set(x_661, 4, x_660);
lean_ctor_set(x_661, 5, x_657);
if (lean_is_scalar(x_37)) {
 x_662 = lean_alloc_ctor(1, 2, 0);
} else {
 x_662 = x_37;
 lean_ctor_set_tag(x_662, 1);
}
lean_ctor_set(x_662, 0, x_643);
lean_ctor_set(x_662, 1, x_661);
return x_662;
}
}
}
else
{
uint8_t x_767; lean_object* x_768; uint8_t x_769; lean_object* x_770; uint8_t x_771; lean_object* x_772; lean_object* x_787; lean_object* x_788; lean_object* x_802; 
x_767 = lean_ctor_get_uint8(x_615, sizeof(void*)*1);
x_768 = lean_ctor_get(x_615, 0);
lean_inc(x_768);
lean_dec(x_615);
x_769 = 0;
x_770 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_770, 0, x_768);
lean_ctor_set_uint8(x_770, sizeof(void*)*1, x_769);
lean_ctor_set(x_613, 4, x_770);
lean_inc(x_6);
lean_inc(x_1);
x_802 = l_Lean_Meta_inferType(x_1, x_6, x_613);
if (lean_obj_tag(x_802) == 0)
{
lean_object* x_803; lean_object* x_804; lean_object* x_805; 
x_803 = lean_ctor_get(x_802, 0);
lean_inc(x_803);
x_804 = lean_ctor_get(x_802, 1);
lean_inc(x_804);
lean_dec(x_802);
lean_inc(x_6);
lean_inc(x_35);
x_805 = l_Lean_Meta_inferType(x_35, x_6, x_804);
if (lean_obj_tag(x_805) == 0)
{
lean_object* x_806; lean_object* x_807; lean_object* x_808; uint8_t x_809; uint8_t x_810; uint8_t x_811; uint8_t x_812; lean_object* x_813; uint8_t x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; 
x_806 = lean_ctor_get(x_805, 0);
lean_inc(x_806);
x_807 = lean_ctor_get(x_805, 1);
lean_inc(x_807);
lean_dec(x_805);
x_808 = lean_ctor_get(x_10, 0);
lean_inc(x_808);
x_809 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 1);
x_810 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 2);
x_811 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 3);
x_812 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 4);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_813 = x_10;
} else {
 lean_dec_ref(x_10);
 x_813 = lean_box(0);
}
x_814 = 1;
if (lean_is_scalar(x_813)) {
 x_815 = lean_alloc_ctor(0, 1, 6);
} else {
 x_815 = x_813;
}
lean_ctor_set(x_815, 0, x_808);
lean_ctor_set_uint8(x_815, sizeof(void*)*1, x_16);
lean_ctor_set_uint8(x_815, sizeof(void*)*1 + 1, x_809);
lean_ctor_set_uint8(x_815, sizeof(void*)*1 + 2, x_810);
lean_ctor_set_uint8(x_815, sizeof(void*)*1 + 3, x_811);
lean_ctor_set_uint8(x_815, sizeof(void*)*1 + 4, x_812);
lean_ctor_set_uint8(x_815, sizeof(void*)*1 + 5, x_814);
lean_inc(x_11);
x_816 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_816, 0, x_815);
lean_ctor_set(x_816, 1, x_11);
lean_ctor_set(x_816, 2, x_12);
lean_inc(x_806);
lean_inc(x_803);
x_817 = l_Lean_Meta_isExprDefEqAux(x_803, x_806, x_816, x_807);
if (lean_obj_tag(x_817) == 0)
{
lean_object* x_818; uint8_t x_819; 
x_818 = lean_ctor_get(x_817, 0);
lean_inc(x_818);
x_819 = lean_unbox(x_818);
if (x_819 == 0)
{
lean_object* x_820; lean_object* x_821; uint8_t x_822; 
lean_dec(x_37);
lean_dec(x_18);
x_820 = lean_ctor_get(x_817, 1);
lean_inc(x_820);
lean_dec(x_817);
x_821 = lean_ctor_get(x_820, 4);
lean_inc(x_821);
x_822 = lean_ctor_get_uint8(x_821, sizeof(void*)*1);
lean_dec(x_821);
if (x_822 == 0)
{
uint8_t x_823; 
lean_dec(x_806);
lean_dec(x_803);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_823 = lean_unbox(x_818);
lean_dec(x_818);
x_771 = x_823;
x_772 = x_820;
goto block_786;
}
else
{
lean_object* x_824; lean_object* x_825; lean_object* x_826; uint8_t x_827; 
x_824 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_825 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_824, x_6, x_820);
x_826 = lean_ctor_get(x_825, 0);
lean_inc(x_826);
x_827 = lean_unbox(x_826);
lean_dec(x_826);
if (x_827 == 0)
{
lean_object* x_828; uint8_t x_829; 
lean_dec(x_806);
lean_dec(x_803);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_828 = lean_ctor_get(x_825, 1);
lean_inc(x_828);
lean_dec(x_825);
x_829 = lean_unbox(x_818);
lean_dec(x_818);
x_771 = x_829;
x_772 = x_828;
goto block_786;
}
else
{
lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; uint8_t x_849; 
x_830 = lean_ctor_get(x_825, 1);
lean_inc(x_830);
lean_dec(x_825);
x_831 = lean_ctor_get(x_830, 0);
lean_inc(x_831);
x_832 = lean_ctor_get(x_830, 1);
lean_inc(x_832);
x_833 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_833, 0, x_1);
x_834 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_835 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_835, 0, x_833);
lean_ctor_set(x_835, 1, x_834);
x_836 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_836, 0, x_803);
x_837 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_837, 0, x_835);
lean_ctor_set(x_837, 1, x_836);
x_838 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_839 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_839, 0, x_837);
lean_ctor_set(x_839, 1, x_838);
x_840 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_840, 0, x_35);
x_841 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_841, 0, x_839);
lean_ctor_set(x_841, 1, x_840);
x_842 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_842, 0, x_841);
lean_ctor_set(x_842, 1, x_834);
x_843 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_843, 0, x_806);
x_844 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_844, 0, x_842);
lean_ctor_set(x_844, 1, x_843);
x_845 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_845, 0, x_831);
lean_ctor_set(x_845, 1, x_832);
lean_ctor_set(x_845, 2, x_11);
lean_ctor_set(x_845, 3, x_844);
x_846 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_847 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_846, x_845, x_6, x_830);
lean_dec(x_6);
x_848 = lean_ctor_get(x_847, 1);
lean_inc(x_848);
lean_dec(x_847);
x_849 = lean_unbox(x_818);
lean_dec(x_818);
x_771 = x_849;
x_772 = x_848;
goto block_786;
}
}
}
else
{
lean_object* x_850; lean_object* x_851; 
lean_dec(x_806);
lean_dec(x_803);
lean_dec(x_11);
lean_dec(x_1);
x_850 = lean_ctor_get(x_817, 1);
lean_inc(x_850);
lean_dec(x_817);
x_851 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_850);
lean_dec(x_6);
if (lean_obj_tag(x_851) == 0)
{
lean_object* x_852; uint8_t x_853; 
lean_dec(x_37);
x_852 = lean_ctor_get(x_851, 1);
lean_inc(x_852);
lean_dec(x_851);
x_853 = lean_unbox(x_818);
lean_dec(x_818);
x_771 = x_853;
x_772 = x_852;
goto block_786;
}
else
{
lean_object* x_854; lean_object* x_855; 
lean_dec(x_818);
lean_dec(x_611);
x_854 = lean_ctor_get(x_851, 0);
lean_inc(x_854);
x_855 = lean_ctor_get(x_851, 1);
lean_inc(x_855);
lean_dec(x_851);
x_787 = x_854;
x_788 = x_855;
goto block_801;
}
}
}
else
{
lean_object* x_856; lean_object* x_857; 
lean_dec(x_806);
lean_dec(x_803);
lean_dec(x_611);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_856 = lean_ctor_get(x_817, 0);
lean_inc(x_856);
x_857 = lean_ctor_get(x_817, 1);
lean_inc(x_857);
lean_dec(x_817);
x_787 = x_856;
x_788 = x_857;
goto block_801;
}
}
else
{
lean_object* x_858; lean_object* x_859; 
lean_dec(x_803);
lean_dec(x_611);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_858 = lean_ctor_get(x_805, 0);
lean_inc(x_858);
x_859 = lean_ctor_get(x_805, 1);
lean_inc(x_859);
lean_dec(x_805);
x_787 = x_858;
x_788 = x_859;
goto block_801;
}
}
else
{
lean_object* x_860; lean_object* x_861; 
lean_dec(x_611);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_860 = lean_ctor_get(x_802, 0);
lean_inc(x_860);
x_861 = lean_ctor_get(x_802, 1);
lean_inc(x_861);
lean_dec(x_802);
x_787 = x_860;
x_788 = x_861;
goto block_801;
}
block_786:
{
lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; 
x_773 = lean_ctor_get(x_772, 4);
lean_inc(x_773);
x_774 = lean_ctor_get(x_772, 0);
lean_inc(x_774);
x_775 = lean_ctor_get(x_772, 1);
lean_inc(x_775);
x_776 = lean_ctor_get(x_772, 2);
lean_inc(x_776);
x_777 = lean_ctor_get(x_772, 3);
lean_inc(x_777);
x_778 = lean_ctor_get(x_772, 5);
lean_inc(x_778);
if (lean_is_exclusive(x_772)) {
 lean_ctor_release(x_772, 0);
 lean_ctor_release(x_772, 1);
 lean_ctor_release(x_772, 2);
 lean_ctor_release(x_772, 3);
 lean_ctor_release(x_772, 4);
 lean_ctor_release(x_772, 5);
 x_779 = x_772;
} else {
 lean_dec_ref(x_772);
 x_779 = lean_box(0);
}
x_780 = lean_ctor_get(x_773, 0);
lean_inc(x_780);
if (lean_is_exclusive(x_773)) {
 lean_ctor_release(x_773, 0);
 x_781 = x_773;
} else {
 lean_dec_ref(x_773);
 x_781 = lean_box(0);
}
if (lean_is_scalar(x_781)) {
 x_782 = lean_alloc_ctor(0, 1, 1);
} else {
 x_782 = x_781;
}
lean_ctor_set(x_782, 0, x_780);
lean_ctor_set_uint8(x_782, sizeof(void*)*1, x_767);
if (lean_is_scalar(x_779)) {
 x_783 = lean_alloc_ctor(0, 6, 0);
} else {
 x_783 = x_779;
}
lean_ctor_set(x_783, 0, x_774);
lean_ctor_set(x_783, 1, x_775);
lean_ctor_set(x_783, 2, x_776);
lean_ctor_set(x_783, 3, x_777);
lean_ctor_set(x_783, 4, x_782);
lean_ctor_set(x_783, 5, x_778);
x_784 = lean_box(x_771);
if (lean_is_scalar(x_611)) {
 x_785 = lean_alloc_ctor(0, 2, 0);
} else {
 x_785 = x_611;
}
lean_ctor_set(x_785, 0, x_784);
lean_ctor_set(x_785, 1, x_783);
return x_785;
}
block_801:
{
lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; 
x_789 = lean_ctor_get(x_788, 4);
lean_inc(x_789);
x_790 = lean_ctor_get(x_788, 0);
lean_inc(x_790);
x_791 = lean_ctor_get(x_788, 1);
lean_inc(x_791);
x_792 = lean_ctor_get(x_788, 2);
lean_inc(x_792);
x_793 = lean_ctor_get(x_788, 3);
lean_inc(x_793);
x_794 = lean_ctor_get(x_788, 5);
lean_inc(x_794);
if (lean_is_exclusive(x_788)) {
 lean_ctor_release(x_788, 0);
 lean_ctor_release(x_788, 1);
 lean_ctor_release(x_788, 2);
 lean_ctor_release(x_788, 3);
 lean_ctor_release(x_788, 4);
 lean_ctor_release(x_788, 5);
 x_795 = x_788;
} else {
 lean_dec_ref(x_788);
 x_795 = lean_box(0);
}
x_796 = lean_ctor_get(x_789, 0);
lean_inc(x_796);
if (lean_is_exclusive(x_789)) {
 lean_ctor_release(x_789, 0);
 x_797 = x_789;
} else {
 lean_dec_ref(x_789);
 x_797 = lean_box(0);
}
if (lean_is_scalar(x_797)) {
 x_798 = lean_alloc_ctor(0, 1, 1);
} else {
 x_798 = x_797;
}
lean_ctor_set(x_798, 0, x_796);
lean_ctor_set_uint8(x_798, sizeof(void*)*1, x_767);
if (lean_is_scalar(x_795)) {
 x_799 = lean_alloc_ctor(0, 6, 0);
} else {
 x_799 = x_795;
}
lean_ctor_set(x_799, 0, x_790);
lean_ctor_set(x_799, 1, x_791);
lean_ctor_set(x_799, 2, x_792);
lean_ctor_set(x_799, 3, x_793);
lean_ctor_set(x_799, 4, x_798);
lean_ctor_set(x_799, 5, x_794);
if (lean_is_scalar(x_37)) {
 x_800 = lean_alloc_ctor(1, 2, 0);
} else {
 x_800 = x_37;
 lean_ctor_set_tag(x_800, 1);
}
lean_ctor_set(x_800, 0, x_787);
lean_ctor_set(x_800, 1, x_799);
return x_800;
}
}
}
else
{
lean_object* x_862; lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; uint8_t x_868; lean_object* x_869; lean_object* x_870; uint8_t x_871; lean_object* x_872; lean_object* x_873; uint8_t x_874; lean_object* x_875; lean_object* x_890; lean_object* x_891; lean_object* x_905; 
x_862 = lean_ctor_get(x_613, 4);
x_863 = lean_ctor_get(x_613, 0);
x_864 = lean_ctor_get(x_613, 1);
x_865 = lean_ctor_get(x_613, 2);
x_866 = lean_ctor_get(x_613, 3);
x_867 = lean_ctor_get(x_613, 5);
lean_inc(x_867);
lean_inc(x_862);
lean_inc(x_866);
lean_inc(x_865);
lean_inc(x_864);
lean_inc(x_863);
lean_dec(x_613);
x_868 = lean_ctor_get_uint8(x_862, sizeof(void*)*1);
x_869 = lean_ctor_get(x_862, 0);
lean_inc(x_869);
if (lean_is_exclusive(x_862)) {
 lean_ctor_release(x_862, 0);
 x_870 = x_862;
} else {
 lean_dec_ref(x_862);
 x_870 = lean_box(0);
}
x_871 = 0;
if (lean_is_scalar(x_870)) {
 x_872 = lean_alloc_ctor(0, 1, 1);
} else {
 x_872 = x_870;
}
lean_ctor_set(x_872, 0, x_869);
lean_ctor_set_uint8(x_872, sizeof(void*)*1, x_871);
x_873 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_873, 0, x_863);
lean_ctor_set(x_873, 1, x_864);
lean_ctor_set(x_873, 2, x_865);
lean_ctor_set(x_873, 3, x_866);
lean_ctor_set(x_873, 4, x_872);
lean_ctor_set(x_873, 5, x_867);
lean_inc(x_6);
lean_inc(x_1);
x_905 = l_Lean_Meta_inferType(x_1, x_6, x_873);
if (lean_obj_tag(x_905) == 0)
{
lean_object* x_906; lean_object* x_907; lean_object* x_908; 
x_906 = lean_ctor_get(x_905, 0);
lean_inc(x_906);
x_907 = lean_ctor_get(x_905, 1);
lean_inc(x_907);
lean_dec(x_905);
lean_inc(x_6);
lean_inc(x_35);
x_908 = l_Lean_Meta_inferType(x_35, x_6, x_907);
if (lean_obj_tag(x_908) == 0)
{
lean_object* x_909; lean_object* x_910; lean_object* x_911; uint8_t x_912; uint8_t x_913; uint8_t x_914; uint8_t x_915; lean_object* x_916; uint8_t x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; 
x_909 = lean_ctor_get(x_908, 0);
lean_inc(x_909);
x_910 = lean_ctor_get(x_908, 1);
lean_inc(x_910);
lean_dec(x_908);
x_911 = lean_ctor_get(x_10, 0);
lean_inc(x_911);
x_912 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 1);
x_913 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 2);
x_914 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 3);
x_915 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 4);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_916 = x_10;
} else {
 lean_dec_ref(x_10);
 x_916 = lean_box(0);
}
x_917 = 1;
if (lean_is_scalar(x_916)) {
 x_918 = lean_alloc_ctor(0, 1, 6);
} else {
 x_918 = x_916;
}
lean_ctor_set(x_918, 0, x_911);
lean_ctor_set_uint8(x_918, sizeof(void*)*1, x_16);
lean_ctor_set_uint8(x_918, sizeof(void*)*1 + 1, x_912);
lean_ctor_set_uint8(x_918, sizeof(void*)*1 + 2, x_913);
lean_ctor_set_uint8(x_918, sizeof(void*)*1 + 3, x_914);
lean_ctor_set_uint8(x_918, sizeof(void*)*1 + 4, x_915);
lean_ctor_set_uint8(x_918, sizeof(void*)*1 + 5, x_917);
lean_inc(x_11);
x_919 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_919, 0, x_918);
lean_ctor_set(x_919, 1, x_11);
lean_ctor_set(x_919, 2, x_12);
lean_inc(x_909);
lean_inc(x_906);
x_920 = l_Lean_Meta_isExprDefEqAux(x_906, x_909, x_919, x_910);
if (lean_obj_tag(x_920) == 0)
{
lean_object* x_921; uint8_t x_922; 
x_921 = lean_ctor_get(x_920, 0);
lean_inc(x_921);
x_922 = lean_unbox(x_921);
if (x_922 == 0)
{
lean_object* x_923; lean_object* x_924; uint8_t x_925; 
lean_dec(x_37);
lean_dec(x_18);
x_923 = lean_ctor_get(x_920, 1);
lean_inc(x_923);
lean_dec(x_920);
x_924 = lean_ctor_get(x_923, 4);
lean_inc(x_924);
x_925 = lean_ctor_get_uint8(x_924, sizeof(void*)*1);
lean_dec(x_924);
if (x_925 == 0)
{
uint8_t x_926; 
lean_dec(x_909);
lean_dec(x_906);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_926 = lean_unbox(x_921);
lean_dec(x_921);
x_874 = x_926;
x_875 = x_923;
goto block_889;
}
else
{
lean_object* x_927; lean_object* x_928; lean_object* x_929; uint8_t x_930; 
x_927 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_928 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_927, x_6, x_923);
x_929 = lean_ctor_get(x_928, 0);
lean_inc(x_929);
x_930 = lean_unbox(x_929);
lean_dec(x_929);
if (x_930 == 0)
{
lean_object* x_931; uint8_t x_932; 
lean_dec(x_909);
lean_dec(x_906);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_931 = lean_ctor_get(x_928, 1);
lean_inc(x_931);
lean_dec(x_928);
x_932 = lean_unbox(x_921);
lean_dec(x_921);
x_874 = x_932;
x_875 = x_931;
goto block_889;
}
else
{
lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; uint8_t x_952; 
x_933 = lean_ctor_get(x_928, 1);
lean_inc(x_933);
lean_dec(x_928);
x_934 = lean_ctor_get(x_933, 0);
lean_inc(x_934);
x_935 = lean_ctor_get(x_933, 1);
lean_inc(x_935);
x_936 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_936, 0, x_1);
x_937 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_938 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_938, 0, x_936);
lean_ctor_set(x_938, 1, x_937);
x_939 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_939, 0, x_906);
x_940 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_940, 0, x_938);
lean_ctor_set(x_940, 1, x_939);
x_941 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_942 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_942, 0, x_940);
lean_ctor_set(x_942, 1, x_941);
x_943 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_943, 0, x_35);
x_944 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_944, 0, x_942);
lean_ctor_set(x_944, 1, x_943);
x_945 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_945, 0, x_944);
lean_ctor_set(x_945, 1, x_937);
x_946 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_946, 0, x_909);
x_947 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_947, 0, x_945);
lean_ctor_set(x_947, 1, x_946);
x_948 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_948, 0, x_934);
lean_ctor_set(x_948, 1, x_935);
lean_ctor_set(x_948, 2, x_11);
lean_ctor_set(x_948, 3, x_947);
x_949 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_950 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_949, x_948, x_6, x_933);
lean_dec(x_6);
x_951 = lean_ctor_get(x_950, 1);
lean_inc(x_951);
lean_dec(x_950);
x_952 = lean_unbox(x_921);
lean_dec(x_921);
x_874 = x_952;
x_875 = x_951;
goto block_889;
}
}
}
else
{
lean_object* x_953; lean_object* x_954; 
lean_dec(x_909);
lean_dec(x_906);
lean_dec(x_11);
lean_dec(x_1);
x_953 = lean_ctor_get(x_920, 1);
lean_inc(x_953);
lean_dec(x_920);
x_954 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_953);
lean_dec(x_6);
if (lean_obj_tag(x_954) == 0)
{
lean_object* x_955; uint8_t x_956; 
lean_dec(x_37);
x_955 = lean_ctor_get(x_954, 1);
lean_inc(x_955);
lean_dec(x_954);
x_956 = lean_unbox(x_921);
lean_dec(x_921);
x_874 = x_956;
x_875 = x_955;
goto block_889;
}
else
{
lean_object* x_957; lean_object* x_958; 
lean_dec(x_921);
lean_dec(x_611);
x_957 = lean_ctor_get(x_954, 0);
lean_inc(x_957);
x_958 = lean_ctor_get(x_954, 1);
lean_inc(x_958);
lean_dec(x_954);
x_890 = x_957;
x_891 = x_958;
goto block_904;
}
}
}
else
{
lean_object* x_959; lean_object* x_960; 
lean_dec(x_909);
lean_dec(x_906);
lean_dec(x_611);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
x_959 = lean_ctor_get(x_920, 0);
lean_inc(x_959);
x_960 = lean_ctor_get(x_920, 1);
lean_inc(x_960);
lean_dec(x_920);
x_890 = x_959;
x_891 = x_960;
goto block_904;
}
}
else
{
lean_object* x_961; lean_object* x_962; 
lean_dec(x_906);
lean_dec(x_611);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_961 = lean_ctor_get(x_908, 0);
lean_inc(x_961);
x_962 = lean_ctor_get(x_908, 1);
lean_inc(x_962);
lean_dec(x_908);
x_890 = x_961;
x_891 = x_962;
goto block_904;
}
}
else
{
lean_object* x_963; lean_object* x_964; 
lean_dec(x_611);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_963 = lean_ctor_get(x_905, 0);
lean_inc(x_963);
x_964 = lean_ctor_get(x_905, 1);
lean_inc(x_964);
lean_dec(x_905);
x_890 = x_963;
x_891 = x_964;
goto block_904;
}
block_889:
{
lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; 
x_876 = lean_ctor_get(x_875, 4);
lean_inc(x_876);
x_877 = lean_ctor_get(x_875, 0);
lean_inc(x_877);
x_878 = lean_ctor_get(x_875, 1);
lean_inc(x_878);
x_879 = lean_ctor_get(x_875, 2);
lean_inc(x_879);
x_880 = lean_ctor_get(x_875, 3);
lean_inc(x_880);
x_881 = lean_ctor_get(x_875, 5);
lean_inc(x_881);
if (lean_is_exclusive(x_875)) {
 lean_ctor_release(x_875, 0);
 lean_ctor_release(x_875, 1);
 lean_ctor_release(x_875, 2);
 lean_ctor_release(x_875, 3);
 lean_ctor_release(x_875, 4);
 lean_ctor_release(x_875, 5);
 x_882 = x_875;
} else {
 lean_dec_ref(x_875);
 x_882 = lean_box(0);
}
x_883 = lean_ctor_get(x_876, 0);
lean_inc(x_883);
if (lean_is_exclusive(x_876)) {
 lean_ctor_release(x_876, 0);
 x_884 = x_876;
} else {
 lean_dec_ref(x_876);
 x_884 = lean_box(0);
}
if (lean_is_scalar(x_884)) {
 x_885 = lean_alloc_ctor(0, 1, 1);
} else {
 x_885 = x_884;
}
lean_ctor_set(x_885, 0, x_883);
lean_ctor_set_uint8(x_885, sizeof(void*)*1, x_868);
if (lean_is_scalar(x_882)) {
 x_886 = lean_alloc_ctor(0, 6, 0);
} else {
 x_886 = x_882;
}
lean_ctor_set(x_886, 0, x_877);
lean_ctor_set(x_886, 1, x_878);
lean_ctor_set(x_886, 2, x_879);
lean_ctor_set(x_886, 3, x_880);
lean_ctor_set(x_886, 4, x_885);
lean_ctor_set(x_886, 5, x_881);
x_887 = lean_box(x_874);
if (lean_is_scalar(x_611)) {
 x_888 = lean_alloc_ctor(0, 2, 0);
} else {
 x_888 = x_611;
}
lean_ctor_set(x_888, 0, x_887);
lean_ctor_set(x_888, 1, x_886);
return x_888;
}
block_904:
{
lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; 
x_892 = lean_ctor_get(x_891, 4);
lean_inc(x_892);
x_893 = lean_ctor_get(x_891, 0);
lean_inc(x_893);
x_894 = lean_ctor_get(x_891, 1);
lean_inc(x_894);
x_895 = lean_ctor_get(x_891, 2);
lean_inc(x_895);
x_896 = lean_ctor_get(x_891, 3);
lean_inc(x_896);
x_897 = lean_ctor_get(x_891, 5);
lean_inc(x_897);
if (lean_is_exclusive(x_891)) {
 lean_ctor_release(x_891, 0);
 lean_ctor_release(x_891, 1);
 lean_ctor_release(x_891, 2);
 lean_ctor_release(x_891, 3);
 lean_ctor_release(x_891, 4);
 lean_ctor_release(x_891, 5);
 x_898 = x_891;
} else {
 lean_dec_ref(x_891);
 x_898 = lean_box(0);
}
x_899 = lean_ctor_get(x_892, 0);
lean_inc(x_899);
if (lean_is_exclusive(x_892)) {
 lean_ctor_release(x_892, 0);
 x_900 = x_892;
} else {
 lean_dec_ref(x_892);
 x_900 = lean_box(0);
}
if (lean_is_scalar(x_900)) {
 x_901 = lean_alloc_ctor(0, 1, 1);
} else {
 x_901 = x_900;
}
lean_ctor_set(x_901, 0, x_899);
lean_ctor_set_uint8(x_901, sizeof(void*)*1, x_868);
if (lean_is_scalar(x_898)) {
 x_902 = lean_alloc_ctor(0, 6, 0);
} else {
 x_902 = x_898;
}
lean_ctor_set(x_902, 0, x_893);
lean_ctor_set(x_902, 1, x_894);
lean_ctor_set(x_902, 2, x_895);
lean_ctor_set(x_902, 3, x_896);
lean_ctor_set(x_902, 4, x_901);
lean_ctor_set(x_902, 5, x_897);
if (lean_is_scalar(x_37)) {
 x_903 = lean_alloc_ctor(1, 2, 0);
} else {
 x_903 = x_37;
 lean_ctor_set_tag(x_903, 1);
}
lean_ctor_set(x_903, 0, x_890);
lean_ctor_set(x_903, 1, x_902);
return x_903;
}
}
}
else
{
lean_object* x_965; lean_object* x_966; lean_object* x_967; uint8_t x_968; lean_object* x_969; lean_object* x_979; lean_object* x_980; lean_object* x_988; 
lean_dec(x_611);
lean_dec(x_37);
x_965 = l___private_Init_Lean_Util_Trace_2__getResetTraces___at_Lean_Meta_check___spec__1___rarg(x_613);
x_966 = lean_ctor_get(x_965, 0);
lean_inc(x_966);
x_967 = lean_ctor_get(x_965, 1);
lean_inc(x_967);
lean_dec(x_965);
lean_inc(x_6);
lean_inc(x_1);
x_988 = l_Lean_Meta_inferType(x_1, x_6, x_967);
if (lean_obj_tag(x_988) == 0)
{
lean_object* x_989; lean_object* x_990; lean_object* x_991; 
x_989 = lean_ctor_get(x_988, 0);
lean_inc(x_989);
x_990 = lean_ctor_get(x_988, 1);
lean_inc(x_990);
lean_dec(x_988);
lean_inc(x_6);
lean_inc(x_35);
x_991 = l_Lean_Meta_inferType(x_35, x_6, x_990);
if (lean_obj_tag(x_991) == 0)
{
lean_object* x_992; lean_object* x_993; uint8_t x_994; 
x_992 = lean_ctor_get(x_991, 0);
lean_inc(x_992);
x_993 = lean_ctor_get(x_991, 1);
lean_inc(x_993);
lean_dec(x_991);
x_994 = !lean_is_exclusive(x_10);
if (x_994 == 0)
{
uint8_t x_995; lean_object* x_996; lean_object* x_997; 
x_995 = 1;
lean_ctor_set_uint8(x_10, sizeof(void*)*1 + 5, x_995);
lean_inc(x_11);
x_996 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_996, 0, x_10);
lean_ctor_set(x_996, 1, x_11);
lean_ctor_set(x_996, 2, x_12);
lean_inc(x_992);
lean_inc(x_989);
x_997 = l_Lean_Meta_isExprDefEqAux(x_989, x_992, x_996, x_993);
if (lean_obj_tag(x_997) == 0)
{
lean_object* x_998; uint8_t x_999; 
x_998 = lean_ctor_get(x_997, 0);
lean_inc(x_998);
x_999 = lean_unbox(x_998);
if (x_999 == 0)
{
lean_object* x_1000; lean_object* x_1001; uint8_t x_1002; 
lean_dec(x_18);
x_1000 = lean_ctor_get(x_997, 1);
lean_inc(x_1000);
lean_dec(x_997);
x_1001 = lean_ctor_get(x_1000, 4);
lean_inc(x_1001);
x_1002 = lean_ctor_get_uint8(x_1001, sizeof(void*)*1);
lean_dec(x_1001);
if (x_1002 == 0)
{
uint8_t x_1003; 
lean_dec(x_992);
lean_dec(x_989);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_1);
x_1003 = lean_unbox(x_998);
lean_dec(x_998);
x_968 = x_1003;
x_969 = x_1000;
goto block_978;
}
else
{
lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; uint8_t x_1007; 
x_1004 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_1005 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_1004, x_6, x_1000);
x_1006 = lean_ctor_get(x_1005, 0);
lean_inc(x_1006);
x_1007 = lean_unbox(x_1006);
lean_dec(x_1006);
if (x_1007 == 0)
{
lean_object* x_1008; uint8_t x_1009; 
lean_dec(x_992);
lean_dec(x_989);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_1);
x_1008 = lean_ctor_get(x_1005, 1);
lean_inc(x_1008);
lean_dec(x_1005);
x_1009 = lean_unbox(x_998);
lean_dec(x_998);
x_968 = x_1009;
x_969 = x_1008;
goto block_978;
}
else
{
lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; uint8_t x_1029; 
x_1010 = lean_ctor_get(x_1005, 1);
lean_inc(x_1010);
lean_dec(x_1005);
x_1011 = lean_ctor_get(x_1010, 0);
lean_inc(x_1011);
x_1012 = lean_ctor_get(x_1010, 1);
lean_inc(x_1012);
x_1013 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1013, 0, x_1);
x_1014 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_1015 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1015, 0, x_1013);
lean_ctor_set(x_1015, 1, x_1014);
x_1016 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1016, 0, x_989);
x_1017 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1017, 0, x_1015);
lean_ctor_set(x_1017, 1, x_1016);
x_1018 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_1019 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1019, 0, x_1017);
lean_ctor_set(x_1019, 1, x_1018);
x_1020 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1020, 0, x_35);
x_1021 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1021, 0, x_1019);
lean_ctor_set(x_1021, 1, x_1020);
x_1022 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1022, 0, x_1021);
lean_ctor_set(x_1022, 1, x_1014);
x_1023 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1023, 0, x_992);
x_1024 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1024, 0, x_1022);
lean_ctor_set(x_1024, 1, x_1023);
x_1025 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_1025, 0, x_1011);
lean_ctor_set(x_1025, 1, x_1012);
lean_ctor_set(x_1025, 2, x_11);
lean_ctor_set(x_1025, 3, x_1024);
x_1026 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_1027 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_1026, x_1025, x_6, x_1010);
x_1028 = lean_ctor_get(x_1027, 1);
lean_inc(x_1028);
lean_dec(x_1027);
x_1029 = lean_unbox(x_998);
lean_dec(x_998);
x_968 = x_1029;
x_969 = x_1028;
goto block_978;
}
}
}
else
{
lean_object* x_1030; lean_object* x_1031; 
lean_dec(x_992);
lean_dec(x_989);
lean_dec(x_11);
lean_dec(x_1);
x_1030 = lean_ctor_get(x_997, 1);
lean_inc(x_1030);
lean_dec(x_997);
x_1031 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_1030);
if (lean_obj_tag(x_1031) == 0)
{
lean_object* x_1032; uint8_t x_1033; 
x_1032 = lean_ctor_get(x_1031, 1);
lean_inc(x_1032);
lean_dec(x_1031);
x_1033 = lean_unbox(x_998);
lean_dec(x_998);
x_968 = x_1033;
x_969 = x_1032;
goto block_978;
}
else
{
lean_object* x_1034; lean_object* x_1035; 
lean_dec(x_998);
x_1034 = lean_ctor_get(x_1031, 0);
lean_inc(x_1034);
x_1035 = lean_ctor_get(x_1031, 1);
lean_inc(x_1035);
lean_dec(x_1031);
x_979 = x_1034;
x_980 = x_1035;
goto block_987;
}
}
}
else
{
lean_object* x_1036; lean_object* x_1037; 
lean_dec(x_992);
lean_dec(x_989);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_1);
x_1036 = lean_ctor_get(x_997, 0);
lean_inc(x_1036);
x_1037 = lean_ctor_get(x_997, 1);
lean_inc(x_1037);
lean_dec(x_997);
x_979 = x_1036;
x_980 = x_1037;
goto block_987;
}
}
else
{
lean_object* x_1038; uint8_t x_1039; uint8_t x_1040; uint8_t x_1041; uint8_t x_1042; uint8_t x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; 
x_1038 = lean_ctor_get(x_10, 0);
x_1039 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 1);
x_1040 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 2);
x_1041 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 3);
x_1042 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 4);
lean_inc(x_1038);
lean_dec(x_10);
x_1043 = 1;
x_1044 = lean_alloc_ctor(0, 1, 6);
lean_ctor_set(x_1044, 0, x_1038);
lean_ctor_set_uint8(x_1044, sizeof(void*)*1, x_16);
lean_ctor_set_uint8(x_1044, sizeof(void*)*1 + 1, x_1039);
lean_ctor_set_uint8(x_1044, sizeof(void*)*1 + 2, x_1040);
lean_ctor_set_uint8(x_1044, sizeof(void*)*1 + 3, x_1041);
lean_ctor_set_uint8(x_1044, sizeof(void*)*1 + 4, x_1042);
lean_ctor_set_uint8(x_1044, sizeof(void*)*1 + 5, x_1043);
lean_inc(x_11);
x_1045 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1045, 0, x_1044);
lean_ctor_set(x_1045, 1, x_11);
lean_ctor_set(x_1045, 2, x_12);
lean_inc(x_992);
lean_inc(x_989);
x_1046 = l_Lean_Meta_isExprDefEqAux(x_989, x_992, x_1045, x_993);
if (lean_obj_tag(x_1046) == 0)
{
lean_object* x_1047; uint8_t x_1048; 
x_1047 = lean_ctor_get(x_1046, 0);
lean_inc(x_1047);
x_1048 = lean_unbox(x_1047);
if (x_1048 == 0)
{
lean_object* x_1049; lean_object* x_1050; uint8_t x_1051; 
lean_dec(x_18);
x_1049 = lean_ctor_get(x_1046, 1);
lean_inc(x_1049);
lean_dec(x_1046);
x_1050 = lean_ctor_get(x_1049, 4);
lean_inc(x_1050);
x_1051 = lean_ctor_get_uint8(x_1050, sizeof(void*)*1);
lean_dec(x_1050);
if (x_1051 == 0)
{
uint8_t x_1052; 
lean_dec(x_992);
lean_dec(x_989);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_1);
x_1052 = lean_unbox(x_1047);
lean_dec(x_1047);
x_968 = x_1052;
x_969 = x_1049;
goto block_978;
}
else
{
lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; uint8_t x_1056; 
x_1053 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5;
x_1054 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_1053, x_6, x_1049);
x_1055 = lean_ctor_get(x_1054, 0);
lean_inc(x_1055);
x_1056 = lean_unbox(x_1055);
lean_dec(x_1055);
if (x_1056 == 0)
{
lean_object* x_1057; uint8_t x_1058; 
lean_dec(x_992);
lean_dec(x_989);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_1);
x_1057 = lean_ctor_get(x_1054, 1);
lean_inc(x_1057);
lean_dec(x_1054);
x_1058 = lean_unbox(x_1047);
lean_dec(x_1047);
x_968 = x_1058;
x_969 = x_1057;
goto block_978;
}
else
{
lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; uint8_t x_1078; 
x_1059 = lean_ctor_get(x_1054, 1);
lean_inc(x_1059);
lean_dec(x_1054);
x_1060 = lean_ctor_get(x_1059, 0);
lean_inc(x_1060);
x_1061 = lean_ctor_get(x_1059, 1);
lean_inc(x_1061);
x_1062 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1062, 0, x_1);
x_1063 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8;
x_1064 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1064, 0, x_1062);
lean_ctor_set(x_1064, 1, x_1063);
x_1065 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1065, 0, x_989);
x_1066 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1066, 0, x_1064);
lean_ctor_set(x_1066, 1, x_1065);
x_1067 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_1068 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1068, 0, x_1066);
lean_ctor_set(x_1068, 1, x_1067);
x_1069 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1069, 0, x_35);
x_1070 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1070, 0, x_1068);
lean_ctor_set(x_1070, 1, x_1069);
x_1071 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1071, 0, x_1070);
lean_ctor_set(x_1071, 1, x_1063);
x_1072 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1072, 0, x_992);
x_1073 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_1073, 0, x_1071);
lean_ctor_set(x_1073, 1, x_1072);
x_1074 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_1074, 0, x_1060);
lean_ctor_set(x_1074, 1, x_1061);
lean_ctor_set(x_1074, 2, x_11);
lean_ctor_set(x_1074, 3, x_1073);
x_1075 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4;
x_1076 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_1075, x_1074, x_6, x_1059);
x_1077 = lean_ctor_get(x_1076, 1);
lean_inc(x_1077);
lean_dec(x_1076);
x_1078 = lean_unbox(x_1047);
lean_dec(x_1047);
x_968 = x_1078;
x_969 = x_1077;
goto block_978;
}
}
}
else
{
lean_object* x_1079; lean_object* x_1080; 
lean_dec(x_992);
lean_dec(x_989);
lean_dec(x_11);
lean_dec(x_1);
x_1079 = lean_ctor_get(x_1046, 1);
lean_inc(x_1079);
lean_dec(x_1046);
x_1080 = l_Lean_Meta_assignExprMVar(x_18, x_35, x_6, x_1079);
if (lean_obj_tag(x_1080) == 0)
{
lean_object* x_1081; uint8_t x_1082; 
x_1081 = lean_ctor_get(x_1080, 1);
lean_inc(x_1081);
lean_dec(x_1080);
x_1082 = lean_unbox(x_1047);
lean_dec(x_1047);
x_968 = x_1082;
x_969 = x_1081;
goto block_978;
}
else
{
lean_object* x_1083; lean_object* x_1084; 
lean_dec(x_1047);
x_1083 = lean_ctor_get(x_1080, 0);
lean_inc(x_1083);
x_1084 = lean_ctor_get(x_1080, 1);
lean_inc(x_1084);
lean_dec(x_1080);
x_979 = x_1083;
x_980 = x_1084;
goto block_987;
}
}
}
else
{
lean_object* x_1085; lean_object* x_1086; 
lean_dec(x_992);
lean_dec(x_989);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_1);
x_1085 = lean_ctor_get(x_1046, 0);
lean_inc(x_1085);
x_1086 = lean_ctor_get(x_1046, 1);
lean_inc(x_1086);
lean_dec(x_1046);
x_979 = x_1085;
x_980 = x_1086;
goto block_987;
}
}
}
else
{
lean_object* x_1087; lean_object* x_1088; 
lean_dec(x_989);
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_1087 = lean_ctor_get(x_991, 0);
lean_inc(x_1087);
x_1088 = lean_ctor_get(x_991, 1);
lean_inc(x_1088);
lean_dec(x_991);
x_979 = x_1087;
x_980 = x_1088;
goto block_987;
}
}
else
{
lean_object* x_1089; lean_object* x_1090; 
lean_dec(x_35);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_1089 = lean_ctor_get(x_988, 0);
lean_inc(x_1089);
x_1090 = lean_ctor_get(x_988, 1);
lean_inc(x_1090);
lean_dec(x_988);
x_979 = x_1089;
x_980 = x_1090;
goto block_987;
}
block_978:
{
lean_object* x_970; lean_object* x_971; uint8_t x_972; 
x_970 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__2;
x_971 = l___private_Init_Lean_Util_Trace_1__addNode___at_Lean_Meta_check___spec__2(x_966, x_970, x_6, x_969);
lean_dec(x_6);
x_972 = !lean_is_exclusive(x_971);
if (x_972 == 0)
{
lean_object* x_973; lean_object* x_974; 
x_973 = lean_ctor_get(x_971, 0);
lean_dec(x_973);
x_974 = lean_box(x_968);
lean_ctor_set(x_971, 0, x_974);
return x_971;
}
else
{
lean_object* x_975; lean_object* x_976; lean_object* x_977; 
x_975 = lean_ctor_get(x_971, 1);
lean_inc(x_975);
lean_dec(x_971);
x_976 = lean_box(x_968);
x_977 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_977, 0, x_976);
lean_ctor_set(x_977, 1, x_975);
return x_977;
}
}
block_987:
{
lean_object* x_981; lean_object* x_982; uint8_t x_983; 
x_981 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__2;
x_982 = l___private_Init_Lean_Util_Trace_1__addNode___at_Lean_Meta_check___spec__2(x_966, x_981, x_6, x_980);
lean_dec(x_6);
x_983 = !lean_is_exclusive(x_982);
if (x_983 == 0)
{
lean_object* x_984; 
x_984 = lean_ctor_get(x_982, 0);
lean_dec(x_984);
lean_ctor_set_tag(x_982, 1);
lean_ctor_set(x_982, 0, x_979);
return x_982;
}
else
{
lean_object* x_985; lean_object* x_986; 
x_985 = lean_ctor_get(x_982, 1);
lean_inc(x_985);
lean_dec(x_982);
x_986 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_986, 0, x_979);
lean_ctor_set(x_986, 1, x_985);
return x_986;
}
}
}
}
}
}
}
else
{
uint8_t x_1100; 
lean_dec(x_32);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_1100 = !lean_is_exclusive(x_34);
if (x_1100 == 0)
{
return x_34;
}
else
{
lean_object* x_1101; lean_object* x_1102; lean_object* x_1103; 
x_1101 = lean_ctor_get(x_34, 0);
x_1102 = lean_ctor_get(x_34, 1);
lean_inc(x_1102);
lean_inc(x_1101);
lean_dec(x_34);
x_1103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1103, 0, x_1101);
lean_ctor_set(x_1103, 1, x_1102);
return x_1103;
}
}
}
}
else
{
uint8_t x_1104; 
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_1104 = !lean_is_exclusive(x_19);
if (x_1104 == 0)
{
return x_19;
}
else
{
lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; 
x_1105 = lean_ctor_get(x_19, 0);
x_1106 = lean_ctor_get(x_19, 1);
lean_inc(x_1106);
lean_inc(x_1105);
lean_dec(x_19);
x_1107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1107, 0, x_1105);
lean_ctor_set(x_1107, 1, x_1106);
return x_1107;
}
}
}
}
else
{
lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; 
lean_dec(x_8);
x_1116 = lean_ctor_get(x_6, 0);
lean_inc(x_1116);
x_1117 = lean_array_fget(x_5, x_4);
lean_inc(x_6);
x_1118 = l___private_Init_Lean_Meta_ExprDefEq_16__simpAssignmentArg(x_1117, x_6, x_7);
if (lean_obj_tag(x_1118) == 0)
{
uint8_t x_1119; 
x_1119 = !lean_is_exclusive(x_1118);
if (x_1119 == 0)
{
lean_object* x_1120; lean_object* x_1121; lean_object* x_1122; 
x_1120 = lean_ctor_get(x_1118, 0);
x_1121 = lean_ctor_get(x_1118, 1);
lean_inc(x_1120);
lean_inc(x_5);
x_1122 = lean_array_fset(x_5, x_4, x_1120);
if (lean_obj_tag(x_1120) == 1)
{
lean_object* x_1123; lean_object* x_1124; uint8_t x_1125; 
x_1123 = lean_ctor_get(x_1120, 0);
lean_inc(x_1123);
x_1124 = lean_array_get_size(x_1122);
x_1125 = lean_nat_dec_le(x_4, x_1124);
if (x_1125 == 0)
{
lean_object* x_1126; uint8_t x_1127; 
x_1126 = lean_unsigned_to_nat(0u);
x_1127 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__2(x_4, x_5, lean_box(0), x_1120, x_1122, x_1124, x_1126);
lean_dec(x_1124);
lean_dec(x_1120);
lean_dec(x_5);
if (x_1127 == 0)
{
lean_object* x_1128; uint8_t x_1129; 
x_1128 = lean_ctor_get(x_2, 1);
x_1129 = l_Lean_LocalContext_contains(x_1128, x_1123);
lean_dec(x_1123);
if (x_1129 == 0)
{
lean_object* x_1130; lean_object* x_1131; 
lean_free_object(x_1118);
lean_dec(x_1116);
x_1130 = lean_unsigned_to_nat(1u);
x_1131 = lean_nat_add(x_4, x_1130);
lean_dec(x_4);
x_4 = x_1131;
x_5 = x_1122;
x_7 = x_1121;
goto _start;
}
else
{
uint8_t x_1133; 
x_1133 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1 + 2);
if (x_1133 == 0)
{
uint8_t x_1134; 
lean_dec(x_4);
x_1134 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1);
lean_dec(x_1116);
if (x_1134 == 0)
{
uint8_t x_1135; lean_object* x_1136; 
lean_dec(x_1122);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_1135 = 0;
x_1136 = lean_box(x_1135);
lean_ctor_set(x_1118, 0, x_1136);
return x_1118;
}
else
{
lean_object* x_1137; 
lean_free_object(x_1118);
x_1137 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_1122, x_3, x_6, x_1121);
lean_dec(x_1122);
return x_1137;
}
}
else
{
lean_object* x_1138; lean_object* x_1139; 
lean_free_object(x_1118);
lean_dec(x_1116);
x_1138 = lean_unsigned_to_nat(1u);
x_1139 = lean_nat_add(x_4, x_1138);
lean_dec(x_4);
x_4 = x_1139;
x_5 = x_1122;
x_7 = x_1121;
goto _start;
}
}
}
else
{
uint8_t x_1141; 
lean_dec(x_1123);
lean_dec(x_4);
x_1141 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1);
lean_dec(x_1116);
if (x_1141 == 0)
{
uint8_t x_1142; lean_object* x_1143; 
lean_dec(x_1122);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_1142 = 0;
x_1143 = lean_box(x_1142);
lean_ctor_set(x_1118, 0, x_1143);
return x_1118;
}
else
{
lean_object* x_1144; 
lean_free_object(x_1118);
x_1144 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_1122, x_3, x_6, x_1121);
lean_dec(x_1122);
return x_1144;
}
}
}
else
{
lean_object* x_1145; uint8_t x_1146; 
lean_dec(x_1124);
x_1145 = lean_unsigned_to_nat(0u);
x_1146 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__3(x_4, x_5, lean_box(0), x_1120, lean_box(0), x_1122, x_4, x_1145);
lean_dec(x_1120);
lean_dec(x_5);
if (x_1146 == 0)
{
lean_object* x_1147; uint8_t x_1148; 
x_1147 = lean_ctor_get(x_2, 1);
x_1148 = l_Lean_LocalContext_contains(x_1147, x_1123);
lean_dec(x_1123);
if (x_1148 == 0)
{
lean_object* x_1149; lean_object* x_1150; 
lean_free_object(x_1118);
lean_dec(x_1116);
x_1149 = lean_unsigned_to_nat(1u);
x_1150 = lean_nat_add(x_4, x_1149);
lean_dec(x_4);
x_4 = x_1150;
x_5 = x_1122;
x_7 = x_1121;
goto _start;
}
else
{
uint8_t x_1152; 
x_1152 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1 + 2);
if (x_1152 == 0)
{
uint8_t x_1153; 
lean_dec(x_4);
x_1153 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1);
lean_dec(x_1116);
if (x_1153 == 0)
{
uint8_t x_1154; lean_object* x_1155; 
lean_dec(x_1122);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_1154 = 0;
x_1155 = lean_box(x_1154);
lean_ctor_set(x_1118, 0, x_1155);
return x_1118;
}
else
{
lean_object* x_1156; 
lean_free_object(x_1118);
x_1156 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_1122, x_3, x_6, x_1121);
lean_dec(x_1122);
return x_1156;
}
}
else
{
lean_object* x_1157; lean_object* x_1158; 
lean_free_object(x_1118);
lean_dec(x_1116);
x_1157 = lean_unsigned_to_nat(1u);
x_1158 = lean_nat_add(x_4, x_1157);
lean_dec(x_4);
x_4 = x_1158;
x_5 = x_1122;
x_7 = x_1121;
goto _start;
}
}
}
else
{
uint8_t x_1160; 
lean_dec(x_1123);
lean_dec(x_4);
x_1160 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1);
lean_dec(x_1116);
if (x_1160 == 0)
{
uint8_t x_1161; lean_object* x_1162; 
lean_dec(x_1122);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_1161 = 0;
x_1162 = lean_box(x_1161);
lean_ctor_set(x_1118, 0, x_1162);
return x_1118;
}
else
{
lean_object* x_1163; 
lean_free_object(x_1118);
x_1163 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_1122, x_3, x_6, x_1121);
lean_dec(x_1122);
return x_1163;
}
}
}
}
else
{
uint8_t x_1164; 
lean_dec(x_1120);
lean_dec(x_5);
lean_dec(x_4);
x_1164 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1);
lean_dec(x_1116);
if (x_1164 == 0)
{
uint8_t x_1165; lean_object* x_1166; 
lean_dec(x_1122);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_1165 = 0;
x_1166 = lean_box(x_1165);
lean_ctor_set(x_1118, 0, x_1166);
return x_1118;
}
else
{
lean_object* x_1167; 
lean_free_object(x_1118);
x_1167 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_1122, x_3, x_6, x_1121);
lean_dec(x_1122);
return x_1167;
}
}
}
else
{
lean_object* x_1168; lean_object* x_1169; lean_object* x_1170; 
x_1168 = lean_ctor_get(x_1118, 0);
x_1169 = lean_ctor_get(x_1118, 1);
lean_inc(x_1169);
lean_inc(x_1168);
lean_dec(x_1118);
lean_inc(x_1168);
lean_inc(x_5);
x_1170 = lean_array_fset(x_5, x_4, x_1168);
if (lean_obj_tag(x_1168) == 1)
{
lean_object* x_1171; lean_object* x_1172; uint8_t x_1173; 
x_1171 = lean_ctor_get(x_1168, 0);
lean_inc(x_1171);
x_1172 = lean_array_get_size(x_1170);
x_1173 = lean_nat_dec_le(x_4, x_1172);
if (x_1173 == 0)
{
lean_object* x_1174; uint8_t x_1175; 
x_1174 = lean_unsigned_to_nat(0u);
x_1175 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__2(x_4, x_5, lean_box(0), x_1168, x_1170, x_1172, x_1174);
lean_dec(x_1172);
lean_dec(x_1168);
lean_dec(x_5);
if (x_1175 == 0)
{
lean_object* x_1176; uint8_t x_1177; 
x_1176 = lean_ctor_get(x_2, 1);
x_1177 = l_Lean_LocalContext_contains(x_1176, x_1171);
lean_dec(x_1171);
if (x_1177 == 0)
{
lean_object* x_1178; lean_object* x_1179; 
lean_dec(x_1116);
x_1178 = lean_unsigned_to_nat(1u);
x_1179 = lean_nat_add(x_4, x_1178);
lean_dec(x_4);
x_4 = x_1179;
x_5 = x_1170;
x_7 = x_1169;
goto _start;
}
else
{
uint8_t x_1181; 
x_1181 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1 + 2);
if (x_1181 == 0)
{
uint8_t x_1182; 
lean_dec(x_4);
x_1182 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1);
lean_dec(x_1116);
if (x_1182 == 0)
{
uint8_t x_1183; lean_object* x_1184; lean_object* x_1185; 
lean_dec(x_1170);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_1183 = 0;
x_1184 = lean_box(x_1183);
x_1185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1185, 0, x_1184);
lean_ctor_set(x_1185, 1, x_1169);
return x_1185;
}
else
{
lean_object* x_1186; 
x_1186 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_1170, x_3, x_6, x_1169);
lean_dec(x_1170);
return x_1186;
}
}
else
{
lean_object* x_1187; lean_object* x_1188; 
lean_dec(x_1116);
x_1187 = lean_unsigned_to_nat(1u);
x_1188 = lean_nat_add(x_4, x_1187);
lean_dec(x_4);
x_4 = x_1188;
x_5 = x_1170;
x_7 = x_1169;
goto _start;
}
}
}
else
{
uint8_t x_1190; 
lean_dec(x_1171);
lean_dec(x_4);
x_1190 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1);
lean_dec(x_1116);
if (x_1190 == 0)
{
uint8_t x_1191; lean_object* x_1192; lean_object* x_1193; 
lean_dec(x_1170);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_1191 = 0;
x_1192 = lean_box(x_1191);
x_1193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1193, 0, x_1192);
lean_ctor_set(x_1193, 1, x_1169);
return x_1193;
}
else
{
lean_object* x_1194; 
x_1194 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_1170, x_3, x_6, x_1169);
lean_dec(x_1170);
return x_1194;
}
}
}
else
{
lean_object* x_1195; uint8_t x_1196; 
lean_dec(x_1172);
x_1195 = lean_unsigned_to_nat(0u);
x_1196 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__3(x_4, x_5, lean_box(0), x_1168, lean_box(0), x_1170, x_4, x_1195);
lean_dec(x_1168);
lean_dec(x_5);
if (x_1196 == 0)
{
lean_object* x_1197; uint8_t x_1198; 
x_1197 = lean_ctor_get(x_2, 1);
x_1198 = l_Lean_LocalContext_contains(x_1197, x_1171);
lean_dec(x_1171);
if (x_1198 == 0)
{
lean_object* x_1199; lean_object* x_1200; 
lean_dec(x_1116);
x_1199 = lean_unsigned_to_nat(1u);
x_1200 = lean_nat_add(x_4, x_1199);
lean_dec(x_4);
x_4 = x_1200;
x_5 = x_1170;
x_7 = x_1169;
goto _start;
}
else
{
uint8_t x_1202; 
x_1202 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1 + 2);
if (x_1202 == 0)
{
uint8_t x_1203; 
lean_dec(x_4);
x_1203 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1);
lean_dec(x_1116);
if (x_1203 == 0)
{
uint8_t x_1204; lean_object* x_1205; lean_object* x_1206; 
lean_dec(x_1170);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_1204 = 0;
x_1205 = lean_box(x_1204);
x_1206 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1206, 0, x_1205);
lean_ctor_set(x_1206, 1, x_1169);
return x_1206;
}
else
{
lean_object* x_1207; 
x_1207 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_1170, x_3, x_6, x_1169);
lean_dec(x_1170);
return x_1207;
}
}
else
{
lean_object* x_1208; lean_object* x_1209; 
lean_dec(x_1116);
x_1208 = lean_unsigned_to_nat(1u);
x_1209 = lean_nat_add(x_4, x_1208);
lean_dec(x_4);
x_4 = x_1209;
x_5 = x_1170;
x_7 = x_1169;
goto _start;
}
}
}
else
{
uint8_t x_1211; 
lean_dec(x_1171);
lean_dec(x_4);
x_1211 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1);
lean_dec(x_1116);
if (x_1211 == 0)
{
uint8_t x_1212; lean_object* x_1213; lean_object* x_1214; 
lean_dec(x_1170);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_1212 = 0;
x_1213 = lean_box(x_1212);
x_1214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1214, 0, x_1213);
lean_ctor_set(x_1214, 1, x_1169);
return x_1214;
}
else
{
lean_object* x_1215; 
x_1215 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_1170, x_3, x_6, x_1169);
lean_dec(x_1170);
return x_1215;
}
}
}
}
else
{
uint8_t x_1216; 
lean_dec(x_1168);
lean_dec(x_5);
lean_dec(x_4);
x_1216 = lean_ctor_get_uint8(x_1116, sizeof(void*)*1);
lean_dec(x_1116);
if (x_1216 == 0)
{
uint8_t x_1217; lean_object* x_1218; lean_object* x_1219; 
lean_dec(x_1170);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_1217 = 0;
x_1218 = lean_box(x_1217);
x_1219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1219, 0, x_1218);
lean_ctor_set(x_1219, 1, x_1169);
return x_1219;
}
else
{
lean_object* x_1220; 
x_1220 = l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main(x_1, x_1170, x_3, x_6, x_1169);
lean_dec(x_1170);
return x_1220;
}
}
}
}
else
{
uint8_t x_1221; 
lean_dec(x_1116);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_1221 = !lean_is_exclusive(x_1118);
if (x_1221 == 0)
{
return x_1118;
}
else
{
lean_object* x_1222; lean_object* x_1223; lean_object* x_1224; 
x_1222 = lean_ctor_get(x_1118, 0);
x_1223 = lean_ctor_get(x_1118, 1);
lean_inc(x_1223);
lean_inc(x_1222);
lean_dec(x_1118);
x_1224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1224, 0, x_1222);
lean_ctor_set(x_1224, 1, x_1223);
return x_1224;
}
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(x_8);
return x_9;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(x_9);
return x_10;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_310; uint8_t x_311; 
x_310 = lean_ctor_get(x_4, 4);
lean_inc(x_310);
x_311 = lean_ctor_get_uint8(x_310, sizeof(void*)*1);
lean_dec(x_310);
if (x_311 == 0)
{
uint8_t x_312; 
x_312 = 0;
x_5 = x_312;
x_6 = x_4;
goto block_309;
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; uint8_t x_317; 
x_313 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment___closed__1;
x_314 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_313, x_3, x_4);
x_315 = lean_ctor_get(x_314, 0);
lean_inc(x_315);
x_316 = lean_ctor_get(x_314, 1);
lean_inc(x_316);
lean_dec(x_314);
x_317 = lean_unbox(x_315);
lean_dec(x_315);
x_5 = x_317;
x_6 = x_316;
goto block_309;
}
block_309:
{
if (x_5 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_6, 4);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get_uint8(x_8, sizeof(void*)*1);
x_11 = 0;
lean_ctor_set_uint8(x_8, sizeof(void*)*1, x_11);
x_12 = l_Lean_Expr_getAppFn___main(x_1);
x_13 = l_Lean_Expr_mvarId_x21(x_12);
x_14 = l_Lean_Meta_getMVarDecl(x_13, x_3, x_6);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_17);
x_19 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_18);
x_20 = lean_mk_array(x_18, x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_18, x_21);
lean_dec(x_18);
x_23 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_20, x_22);
x_24 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main(x_12, x_15, x_2, x_17, x_23, x_3, x_16);
lean_dec(x_15);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 4);
lean_inc(x_26);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_24, 1);
lean_dec(x_28);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_25, 4);
lean_dec(x_30);
x_31 = !lean_is_exclusive(x_26);
if (x_31 == 0)
{
lean_ctor_set_uint8(x_26, sizeof(void*)*1, x_10);
return x_24;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set_uint8(x_33, sizeof(void*)*1, x_10);
lean_ctor_set(x_25, 4, x_33);
return x_24;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_34 = lean_ctor_get(x_25, 0);
x_35 = lean_ctor_get(x_25, 1);
x_36 = lean_ctor_get(x_25, 2);
x_37 = lean_ctor_get(x_25, 3);
x_38 = lean_ctor_get(x_25, 5);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_25);
x_39 = lean_ctor_get(x_26, 0);
lean_inc(x_39);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 x_40 = x_26;
} else {
 lean_dec_ref(x_26);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(0, 1, 1);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set_uint8(x_41, sizeof(void*)*1, x_10);
x_42 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_42, 0, x_34);
lean_ctor_set(x_42, 1, x_35);
lean_ctor_set(x_42, 2, x_36);
lean_ctor_set(x_42, 3, x_37);
lean_ctor_set(x_42, 4, x_41);
lean_ctor_set(x_42, 5, x_38);
lean_ctor_set(x_24, 1, x_42);
return x_24;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_43 = lean_ctor_get(x_24, 0);
lean_inc(x_43);
lean_dec(x_24);
x_44 = lean_ctor_get(x_25, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_25, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_25, 2);
lean_inc(x_46);
x_47 = lean_ctor_get(x_25, 3);
lean_inc(x_47);
x_48 = lean_ctor_get(x_25, 5);
lean_inc(x_48);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 lean_ctor_release(x_25, 2);
 lean_ctor_release(x_25, 3);
 lean_ctor_release(x_25, 4);
 lean_ctor_release(x_25, 5);
 x_49 = x_25;
} else {
 lean_dec_ref(x_25);
 x_49 = lean_box(0);
}
x_50 = lean_ctor_get(x_26, 0);
lean_inc(x_50);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 x_51 = x_26;
} else {
 lean_dec_ref(x_26);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(0, 1, 1);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set_uint8(x_52, sizeof(void*)*1, x_10);
if (lean_is_scalar(x_49)) {
 x_53 = lean_alloc_ctor(0, 6, 0);
} else {
 x_53 = x_49;
}
lean_ctor_set(x_53, 0, x_44);
lean_ctor_set(x_53, 1, x_45);
lean_ctor_set(x_53, 2, x_46);
lean_ctor_set(x_53, 3, x_47);
lean_ctor_set(x_53, 4, x_52);
lean_ctor_set(x_53, 5, x_48);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_43);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_55 = lean_ctor_get(x_24, 1);
lean_inc(x_55);
x_56 = lean_ctor_get(x_55, 4);
lean_inc(x_56);
x_57 = !lean_is_exclusive(x_24);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_24, 1);
lean_dec(x_58);
x_59 = !lean_is_exclusive(x_55);
if (x_59 == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_55, 4);
lean_dec(x_60);
x_61 = !lean_is_exclusive(x_56);
if (x_61 == 0)
{
lean_ctor_set_uint8(x_56, sizeof(void*)*1, x_10);
return x_24;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_56, 0);
lean_inc(x_62);
lean_dec(x_56);
x_63 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set_uint8(x_63, sizeof(void*)*1, x_10);
lean_ctor_set(x_55, 4, x_63);
return x_24;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_64 = lean_ctor_get(x_55, 0);
x_65 = lean_ctor_get(x_55, 1);
x_66 = lean_ctor_get(x_55, 2);
x_67 = lean_ctor_get(x_55, 3);
x_68 = lean_ctor_get(x_55, 5);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_55);
x_69 = lean_ctor_get(x_56, 0);
lean_inc(x_69);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 x_70 = x_56;
} else {
 lean_dec_ref(x_56);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(0, 1, 1);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set_uint8(x_71, sizeof(void*)*1, x_10);
x_72 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_72, 0, x_64);
lean_ctor_set(x_72, 1, x_65);
lean_ctor_set(x_72, 2, x_66);
lean_ctor_set(x_72, 3, x_67);
lean_ctor_set(x_72, 4, x_71);
lean_ctor_set(x_72, 5, x_68);
lean_ctor_set(x_24, 1, x_72);
return x_24;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_73 = lean_ctor_get(x_24, 0);
lean_inc(x_73);
lean_dec(x_24);
x_74 = lean_ctor_get(x_55, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_55, 1);
lean_inc(x_75);
x_76 = lean_ctor_get(x_55, 2);
lean_inc(x_76);
x_77 = lean_ctor_get(x_55, 3);
lean_inc(x_77);
x_78 = lean_ctor_get(x_55, 5);
lean_inc(x_78);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 lean_ctor_release(x_55, 2);
 lean_ctor_release(x_55, 3);
 lean_ctor_release(x_55, 4);
 lean_ctor_release(x_55, 5);
 x_79 = x_55;
} else {
 lean_dec_ref(x_55);
 x_79 = lean_box(0);
}
x_80 = lean_ctor_get(x_56, 0);
lean_inc(x_80);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 x_81 = x_56;
} else {
 lean_dec_ref(x_56);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(0, 1, 1);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set_uint8(x_82, sizeof(void*)*1, x_10);
if (lean_is_scalar(x_79)) {
 x_83 = lean_alloc_ctor(0, 6, 0);
} else {
 x_83 = x_79;
}
lean_ctor_set(x_83, 0, x_74);
lean_ctor_set(x_83, 1, x_75);
lean_ctor_set(x_83, 2, x_76);
lean_ctor_set(x_83, 3, x_77);
lean_ctor_set(x_83, 4, x_82);
lean_ctor_set(x_83, 5, x_78);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_73);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
lean_object* x_85; lean_object* x_86; uint8_t x_87; 
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_85 = lean_ctor_get(x_14, 1);
lean_inc(x_85);
x_86 = lean_ctor_get(x_85, 4);
lean_inc(x_86);
x_87 = !lean_is_exclusive(x_14);
if (x_87 == 0)
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_ctor_get(x_14, 1);
lean_dec(x_88);
x_89 = !lean_is_exclusive(x_85);
if (x_89 == 0)
{
lean_object* x_90; uint8_t x_91; 
x_90 = lean_ctor_get(x_85, 4);
lean_dec(x_90);
x_91 = !lean_is_exclusive(x_86);
if (x_91 == 0)
{
lean_ctor_set_uint8(x_86, sizeof(void*)*1, x_10);
return x_14;
}
else
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_86, 0);
lean_inc(x_92);
lean_dec(x_86);
x_93 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set_uint8(x_93, sizeof(void*)*1, x_10);
lean_ctor_set(x_85, 4, x_93);
return x_14;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_94 = lean_ctor_get(x_85, 0);
x_95 = lean_ctor_get(x_85, 1);
x_96 = lean_ctor_get(x_85, 2);
x_97 = lean_ctor_get(x_85, 3);
x_98 = lean_ctor_get(x_85, 5);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_85);
x_99 = lean_ctor_get(x_86, 0);
lean_inc(x_99);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 x_100 = x_86;
} else {
 lean_dec_ref(x_86);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(0, 1, 1);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set_uint8(x_101, sizeof(void*)*1, x_10);
x_102 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_102, 0, x_94);
lean_ctor_set(x_102, 1, x_95);
lean_ctor_set(x_102, 2, x_96);
lean_ctor_set(x_102, 3, x_97);
lean_ctor_set(x_102, 4, x_101);
lean_ctor_set(x_102, 5, x_98);
lean_ctor_set(x_14, 1, x_102);
return x_14;
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_103 = lean_ctor_get(x_14, 0);
lean_inc(x_103);
lean_dec(x_14);
x_104 = lean_ctor_get(x_85, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_85, 1);
lean_inc(x_105);
x_106 = lean_ctor_get(x_85, 2);
lean_inc(x_106);
x_107 = lean_ctor_get(x_85, 3);
lean_inc(x_107);
x_108 = lean_ctor_get(x_85, 5);
lean_inc(x_108);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 lean_ctor_release(x_85, 2);
 lean_ctor_release(x_85, 3);
 lean_ctor_release(x_85, 4);
 lean_ctor_release(x_85, 5);
 x_109 = x_85;
} else {
 lean_dec_ref(x_85);
 x_109 = lean_box(0);
}
x_110 = lean_ctor_get(x_86, 0);
lean_inc(x_110);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 x_111 = x_86;
} else {
 lean_dec_ref(x_86);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(0, 1, 1);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set_uint8(x_112, sizeof(void*)*1, x_10);
if (lean_is_scalar(x_109)) {
 x_113 = lean_alloc_ctor(0, 6, 0);
} else {
 x_113 = x_109;
}
lean_ctor_set(x_113, 0, x_104);
lean_ctor_set(x_113, 1, x_105);
lean_ctor_set(x_113, 2, x_106);
lean_ctor_set(x_113, 3, x_107);
lean_ctor_set(x_113, 4, x_112);
lean_ctor_set(x_113, 5, x_108);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_103);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
else
{
uint8_t x_115; lean_object* x_116; uint8_t x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_115 = lean_ctor_get_uint8(x_8, sizeof(void*)*1);
x_116 = lean_ctor_get(x_8, 0);
lean_inc(x_116);
lean_dec(x_8);
x_117 = 0;
x_118 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set_uint8(x_118, sizeof(void*)*1, x_117);
lean_ctor_set(x_6, 4, x_118);
x_119 = l_Lean_Expr_getAppFn___main(x_1);
x_120 = l_Lean_Expr_mvarId_x21(x_119);
x_121 = l_Lean_Meta_getMVarDecl(x_120, x_3, x_6);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_unsigned_to_nat(0u);
x_125 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_124);
x_126 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_125);
x_127 = lean_mk_array(x_125, x_126);
x_128 = lean_unsigned_to_nat(1u);
x_129 = lean_nat_sub(x_125, x_128);
lean_dec(x_125);
x_130 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_127, x_129);
x_131 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main(x_119, x_122, x_2, x_124, x_130, x_3, x_123);
lean_dec(x_122);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_132 = lean_ctor_get(x_131, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_132, 4);
lean_inc(x_133);
x_134 = lean_ctor_get(x_131, 0);
lean_inc(x_134);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_135 = x_131;
} else {
 lean_dec_ref(x_131);
 x_135 = lean_box(0);
}
x_136 = lean_ctor_get(x_132, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_132, 1);
lean_inc(x_137);
x_138 = lean_ctor_get(x_132, 2);
lean_inc(x_138);
x_139 = lean_ctor_get(x_132, 3);
lean_inc(x_139);
x_140 = lean_ctor_get(x_132, 5);
lean_inc(x_140);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 lean_ctor_release(x_132, 2);
 lean_ctor_release(x_132, 3);
 lean_ctor_release(x_132, 4);
 lean_ctor_release(x_132, 5);
 x_141 = x_132;
} else {
 lean_dec_ref(x_132);
 x_141 = lean_box(0);
}
x_142 = lean_ctor_get(x_133, 0);
lean_inc(x_142);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 x_143 = x_133;
} else {
 lean_dec_ref(x_133);
 x_143 = lean_box(0);
}
if (lean_is_scalar(x_143)) {
 x_144 = lean_alloc_ctor(0, 1, 1);
} else {
 x_144 = x_143;
}
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set_uint8(x_144, sizeof(void*)*1, x_115);
if (lean_is_scalar(x_141)) {
 x_145 = lean_alloc_ctor(0, 6, 0);
} else {
 x_145 = x_141;
}
lean_ctor_set(x_145, 0, x_136);
lean_ctor_set(x_145, 1, x_137);
lean_ctor_set(x_145, 2, x_138);
lean_ctor_set(x_145, 3, x_139);
lean_ctor_set(x_145, 4, x_144);
lean_ctor_set(x_145, 5, x_140);
if (lean_is_scalar(x_135)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_135;
}
lean_ctor_set(x_146, 0, x_134);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_147 = lean_ctor_get(x_131, 1);
lean_inc(x_147);
x_148 = lean_ctor_get(x_147, 4);
lean_inc(x_148);
x_149 = lean_ctor_get(x_131, 0);
lean_inc(x_149);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_150 = x_131;
} else {
 lean_dec_ref(x_131);
 x_150 = lean_box(0);
}
x_151 = lean_ctor_get(x_147, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_147, 1);
lean_inc(x_152);
x_153 = lean_ctor_get(x_147, 2);
lean_inc(x_153);
x_154 = lean_ctor_get(x_147, 3);
lean_inc(x_154);
x_155 = lean_ctor_get(x_147, 5);
lean_inc(x_155);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 lean_ctor_release(x_147, 2);
 lean_ctor_release(x_147, 3);
 lean_ctor_release(x_147, 4);
 lean_ctor_release(x_147, 5);
 x_156 = x_147;
} else {
 lean_dec_ref(x_147);
 x_156 = lean_box(0);
}
x_157 = lean_ctor_get(x_148, 0);
lean_inc(x_157);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 x_158 = x_148;
} else {
 lean_dec_ref(x_148);
 x_158 = lean_box(0);
}
if (lean_is_scalar(x_158)) {
 x_159 = lean_alloc_ctor(0, 1, 1);
} else {
 x_159 = x_158;
}
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set_uint8(x_159, sizeof(void*)*1, x_115);
if (lean_is_scalar(x_156)) {
 x_160 = lean_alloc_ctor(0, 6, 0);
} else {
 x_160 = x_156;
}
lean_ctor_set(x_160, 0, x_151);
lean_ctor_set(x_160, 1, x_152);
lean_ctor_set(x_160, 2, x_153);
lean_ctor_set(x_160, 3, x_154);
lean_ctor_set(x_160, 4, x_159);
lean_ctor_set(x_160, 5, x_155);
if (lean_is_scalar(x_150)) {
 x_161 = lean_alloc_ctor(1, 2, 0);
} else {
 x_161 = x_150;
}
lean_ctor_set(x_161, 0, x_149);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_119);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_162 = lean_ctor_get(x_121, 1);
lean_inc(x_162);
x_163 = lean_ctor_get(x_162, 4);
lean_inc(x_163);
x_164 = lean_ctor_get(x_121, 0);
lean_inc(x_164);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_165 = x_121;
} else {
 lean_dec_ref(x_121);
 x_165 = lean_box(0);
}
x_166 = lean_ctor_get(x_162, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_162, 1);
lean_inc(x_167);
x_168 = lean_ctor_get(x_162, 2);
lean_inc(x_168);
x_169 = lean_ctor_get(x_162, 3);
lean_inc(x_169);
x_170 = lean_ctor_get(x_162, 5);
lean_inc(x_170);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 lean_ctor_release(x_162, 2);
 lean_ctor_release(x_162, 3);
 lean_ctor_release(x_162, 4);
 lean_ctor_release(x_162, 5);
 x_171 = x_162;
} else {
 lean_dec_ref(x_162);
 x_171 = lean_box(0);
}
x_172 = lean_ctor_get(x_163, 0);
lean_inc(x_172);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 x_173 = x_163;
} else {
 lean_dec_ref(x_163);
 x_173 = lean_box(0);
}
if (lean_is_scalar(x_173)) {
 x_174 = lean_alloc_ctor(0, 1, 1);
} else {
 x_174 = x_173;
}
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set_uint8(x_174, sizeof(void*)*1, x_115);
if (lean_is_scalar(x_171)) {
 x_175 = lean_alloc_ctor(0, 6, 0);
} else {
 x_175 = x_171;
}
lean_ctor_set(x_175, 0, x_166);
lean_ctor_set(x_175, 1, x_167);
lean_ctor_set(x_175, 2, x_168);
lean_ctor_set(x_175, 3, x_169);
lean_ctor_set(x_175, 4, x_174);
lean_ctor_set(x_175, 5, x_170);
if (lean_is_scalar(x_165)) {
 x_176 = lean_alloc_ctor(1, 2, 0);
} else {
 x_176 = x_165;
}
lean_ctor_set(x_176, 0, x_164);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_177 = lean_ctor_get(x_6, 4);
x_178 = lean_ctor_get(x_6, 0);
x_179 = lean_ctor_get(x_6, 1);
x_180 = lean_ctor_get(x_6, 2);
x_181 = lean_ctor_get(x_6, 3);
x_182 = lean_ctor_get(x_6, 5);
lean_inc(x_182);
lean_inc(x_177);
lean_inc(x_181);
lean_inc(x_180);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_6);
x_183 = lean_ctor_get_uint8(x_177, sizeof(void*)*1);
x_184 = lean_ctor_get(x_177, 0);
lean_inc(x_184);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 x_185 = x_177;
} else {
 lean_dec_ref(x_177);
 x_185 = lean_box(0);
}
x_186 = 0;
if (lean_is_scalar(x_185)) {
 x_187 = lean_alloc_ctor(0, 1, 1);
} else {
 x_187 = x_185;
}
lean_ctor_set(x_187, 0, x_184);
lean_ctor_set_uint8(x_187, sizeof(void*)*1, x_186);
x_188 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_188, 0, x_178);
lean_ctor_set(x_188, 1, x_179);
lean_ctor_set(x_188, 2, x_180);
lean_ctor_set(x_188, 3, x_181);
lean_ctor_set(x_188, 4, x_187);
lean_ctor_set(x_188, 5, x_182);
x_189 = l_Lean_Expr_getAppFn___main(x_1);
x_190 = l_Lean_Expr_mvarId_x21(x_189);
x_191 = l_Lean_Meta_getMVarDecl(x_190, x_3, x_188);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_194 = lean_unsigned_to_nat(0u);
x_195 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_194);
x_196 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_195);
x_197 = lean_mk_array(x_195, x_196);
x_198 = lean_unsigned_to_nat(1u);
x_199 = lean_nat_sub(x_195, x_198);
lean_dec(x_195);
x_200 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_197, x_199);
x_201 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main(x_189, x_192, x_2, x_194, x_200, x_3, x_193);
lean_dec(x_192);
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_202 = lean_ctor_get(x_201, 1);
lean_inc(x_202);
x_203 = lean_ctor_get(x_202, 4);
lean_inc(x_203);
x_204 = lean_ctor_get(x_201, 0);
lean_inc(x_204);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 x_205 = x_201;
} else {
 lean_dec_ref(x_201);
 x_205 = lean_box(0);
}
x_206 = lean_ctor_get(x_202, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_202, 1);
lean_inc(x_207);
x_208 = lean_ctor_get(x_202, 2);
lean_inc(x_208);
x_209 = lean_ctor_get(x_202, 3);
lean_inc(x_209);
x_210 = lean_ctor_get(x_202, 5);
lean_inc(x_210);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 lean_ctor_release(x_202, 2);
 lean_ctor_release(x_202, 3);
 lean_ctor_release(x_202, 4);
 lean_ctor_release(x_202, 5);
 x_211 = x_202;
} else {
 lean_dec_ref(x_202);
 x_211 = lean_box(0);
}
x_212 = lean_ctor_get(x_203, 0);
lean_inc(x_212);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 x_213 = x_203;
} else {
 lean_dec_ref(x_203);
 x_213 = lean_box(0);
}
if (lean_is_scalar(x_213)) {
 x_214 = lean_alloc_ctor(0, 1, 1);
} else {
 x_214 = x_213;
}
lean_ctor_set(x_214, 0, x_212);
lean_ctor_set_uint8(x_214, sizeof(void*)*1, x_183);
if (lean_is_scalar(x_211)) {
 x_215 = lean_alloc_ctor(0, 6, 0);
} else {
 x_215 = x_211;
}
lean_ctor_set(x_215, 0, x_206);
lean_ctor_set(x_215, 1, x_207);
lean_ctor_set(x_215, 2, x_208);
lean_ctor_set(x_215, 3, x_209);
lean_ctor_set(x_215, 4, x_214);
lean_ctor_set(x_215, 5, x_210);
if (lean_is_scalar(x_205)) {
 x_216 = lean_alloc_ctor(0, 2, 0);
} else {
 x_216 = x_205;
}
lean_ctor_set(x_216, 0, x_204);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_217 = lean_ctor_get(x_201, 1);
lean_inc(x_217);
x_218 = lean_ctor_get(x_217, 4);
lean_inc(x_218);
x_219 = lean_ctor_get(x_201, 0);
lean_inc(x_219);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 x_220 = x_201;
} else {
 lean_dec_ref(x_201);
 x_220 = lean_box(0);
}
x_221 = lean_ctor_get(x_217, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_217, 1);
lean_inc(x_222);
x_223 = lean_ctor_get(x_217, 2);
lean_inc(x_223);
x_224 = lean_ctor_get(x_217, 3);
lean_inc(x_224);
x_225 = lean_ctor_get(x_217, 5);
lean_inc(x_225);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 lean_ctor_release(x_217, 2);
 lean_ctor_release(x_217, 3);
 lean_ctor_release(x_217, 4);
 lean_ctor_release(x_217, 5);
 x_226 = x_217;
} else {
 lean_dec_ref(x_217);
 x_226 = lean_box(0);
}
x_227 = lean_ctor_get(x_218, 0);
lean_inc(x_227);
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 x_228 = x_218;
} else {
 lean_dec_ref(x_218);
 x_228 = lean_box(0);
}
if (lean_is_scalar(x_228)) {
 x_229 = lean_alloc_ctor(0, 1, 1);
} else {
 x_229 = x_228;
}
lean_ctor_set(x_229, 0, x_227);
lean_ctor_set_uint8(x_229, sizeof(void*)*1, x_183);
if (lean_is_scalar(x_226)) {
 x_230 = lean_alloc_ctor(0, 6, 0);
} else {
 x_230 = x_226;
}
lean_ctor_set(x_230, 0, x_221);
lean_ctor_set(x_230, 1, x_222);
lean_ctor_set(x_230, 2, x_223);
lean_ctor_set(x_230, 3, x_224);
lean_ctor_set(x_230, 4, x_229);
lean_ctor_set(x_230, 5, x_225);
if (lean_is_scalar(x_220)) {
 x_231 = lean_alloc_ctor(1, 2, 0);
} else {
 x_231 = x_220;
}
lean_ctor_set(x_231, 0, x_219);
lean_ctor_set(x_231, 1, x_230);
return x_231;
}
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
lean_dec(x_189);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_232 = lean_ctor_get(x_191, 1);
lean_inc(x_232);
x_233 = lean_ctor_get(x_232, 4);
lean_inc(x_233);
x_234 = lean_ctor_get(x_191, 0);
lean_inc(x_234);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_235 = x_191;
} else {
 lean_dec_ref(x_191);
 x_235 = lean_box(0);
}
x_236 = lean_ctor_get(x_232, 0);
lean_inc(x_236);
x_237 = lean_ctor_get(x_232, 1);
lean_inc(x_237);
x_238 = lean_ctor_get(x_232, 2);
lean_inc(x_238);
x_239 = lean_ctor_get(x_232, 3);
lean_inc(x_239);
x_240 = lean_ctor_get(x_232, 5);
lean_inc(x_240);
if (lean_is_exclusive(x_232)) {
 lean_ctor_release(x_232, 0);
 lean_ctor_release(x_232, 1);
 lean_ctor_release(x_232, 2);
 lean_ctor_release(x_232, 3);
 lean_ctor_release(x_232, 4);
 lean_ctor_release(x_232, 5);
 x_241 = x_232;
} else {
 lean_dec_ref(x_232);
 x_241 = lean_box(0);
}
x_242 = lean_ctor_get(x_233, 0);
lean_inc(x_242);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 x_243 = x_233;
} else {
 lean_dec_ref(x_233);
 x_243 = lean_box(0);
}
if (lean_is_scalar(x_243)) {
 x_244 = lean_alloc_ctor(0, 1, 1);
} else {
 x_244 = x_243;
}
lean_ctor_set(x_244, 0, x_242);
lean_ctor_set_uint8(x_244, sizeof(void*)*1, x_183);
if (lean_is_scalar(x_241)) {
 x_245 = lean_alloc_ctor(0, 6, 0);
} else {
 x_245 = x_241;
}
lean_ctor_set(x_245, 0, x_236);
lean_ctor_set(x_245, 1, x_237);
lean_ctor_set(x_245, 2, x_238);
lean_ctor_set(x_245, 3, x_239);
lean_ctor_set(x_245, 4, x_244);
lean_ctor_set(x_245, 5, x_240);
if (lean_is_scalar(x_235)) {
 x_246 = lean_alloc_ctor(1, 2, 0);
} else {
 x_246 = x_235;
}
lean_ctor_set(x_246, 0, x_234);
lean_ctor_set(x_246, 1, x_245);
return x_246;
}
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_289; uint8_t x_290; 
x_247 = l___private_Init_Lean_Util_Trace_2__getResetTraces___at_Lean_Meta_check___spec__1___rarg(x_6);
x_248 = lean_ctor_get(x_247, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_247, 1);
lean_inc(x_249);
lean_dec(x_247);
x_289 = lean_ctor_get(x_249, 4);
lean_inc(x_289);
x_290 = lean_ctor_get_uint8(x_289, sizeof(void*)*1);
lean_dec(x_289);
if (x_290 == 0)
{
x_250 = x_249;
goto block_288;
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; uint8_t x_294; 
x_291 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment___closed__1;
x_292 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_291, x_3, x_249);
x_293 = lean_ctor_get(x_292, 0);
lean_inc(x_293);
x_294 = lean_unbox(x_293);
lean_dec(x_293);
if (x_294 == 0)
{
lean_object* x_295; 
x_295 = lean_ctor_get(x_292, 1);
lean_inc(x_295);
lean_dec(x_292);
x_250 = x_295;
goto block_288;
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; 
x_296 = lean_ctor_get(x_292, 1);
lean_inc(x_296);
lean_dec(x_292);
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_296, 1);
lean_inc(x_298);
x_299 = lean_ctor_get(x_3, 1);
lean_inc(x_299);
lean_inc(x_1);
x_300 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_300, 0, x_1);
x_301 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7;
x_302 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_302, 0, x_300);
lean_ctor_set(x_302, 1, x_301);
lean_inc(x_2);
x_303 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_303, 0, x_2);
x_304 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_304, 0, x_302);
lean_ctor_set(x_304, 1, x_303);
x_305 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_305, 0, x_297);
lean_ctor_set(x_305, 1, x_298);
lean_ctor_set(x_305, 2, x_299);
lean_ctor_set(x_305, 3, x_304);
x_306 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_307 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_306, x_305, x_3, x_296);
x_308 = lean_ctor_get(x_307, 1);
lean_inc(x_308);
lean_dec(x_307);
x_250 = x_308;
goto block_288;
}
}
block_288:
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = l_Lean_Expr_getAppFn___main(x_1);
x_252 = l_Lean_Expr_mvarId_x21(x_251);
x_253 = l_Lean_Meta_getMVarDecl(x_252, x_3, x_250);
if (lean_obj_tag(x_253) == 0)
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_254 = lean_ctor_get(x_253, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_253, 1);
lean_inc(x_255);
lean_dec(x_253);
x_256 = lean_unsigned_to_nat(0u);
x_257 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_256);
x_258 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_257);
x_259 = lean_mk_array(x_257, x_258);
x_260 = lean_unsigned_to_nat(1u);
x_261 = lean_nat_sub(x_257, x_260);
lean_dec(x_257);
x_262 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_259, x_261);
lean_inc(x_3);
x_263 = l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main(x_251, x_254, x_2, x_256, x_262, x_3, x_255);
lean_dec(x_254);
if (lean_obj_tag(x_263) == 0)
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; 
x_264 = lean_ctor_get(x_263, 0);
lean_inc(x_264);
x_265 = lean_ctor_get(x_263, 1);
lean_inc(x_265);
lean_dec(x_263);
x_266 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_267 = l___private_Init_Lean_Util_Trace_1__addNode___at_Lean_Meta_check___spec__2(x_248, x_266, x_3, x_265);
lean_dec(x_3);
x_268 = !lean_is_exclusive(x_267);
if (x_268 == 0)
{
lean_object* x_269; 
x_269 = lean_ctor_get(x_267, 0);
lean_dec(x_269);
lean_ctor_set(x_267, 0, x_264);
return x_267;
}
else
{
lean_object* x_270; lean_object* x_271; 
x_270 = lean_ctor_get(x_267, 1);
lean_inc(x_270);
lean_dec(x_267);
x_271 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_271, 0, x_264);
lean_ctor_set(x_271, 1, x_270);
return x_271;
}
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; uint8_t x_276; 
x_272 = lean_ctor_get(x_263, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_263, 1);
lean_inc(x_273);
lean_dec(x_263);
x_274 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_275 = l___private_Init_Lean_Util_Trace_1__addNode___at_Lean_Meta_check___spec__2(x_248, x_274, x_3, x_273);
lean_dec(x_3);
x_276 = !lean_is_exclusive(x_275);
if (x_276 == 0)
{
lean_object* x_277; 
x_277 = lean_ctor_get(x_275, 0);
lean_dec(x_277);
lean_ctor_set_tag(x_275, 1);
lean_ctor_set(x_275, 0, x_272);
return x_275;
}
else
{
lean_object* x_278; lean_object* x_279; 
x_278 = lean_ctor_get(x_275, 1);
lean_inc(x_278);
lean_dec(x_275);
x_279 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_279, 0, x_272);
lean_ctor_set(x_279, 1, x_278);
return x_279;
}
}
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; 
lean_dec(x_251);
lean_dec(x_2);
lean_dec(x_1);
x_280 = lean_ctor_get(x_253, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_253, 1);
lean_inc(x_281);
lean_dec(x_253);
x_282 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3;
x_283 = l___private_Init_Lean_Util_Trace_1__addNode___at_Lean_Meta_check___spec__2(x_248, x_282, x_3, x_281);
lean_dec(x_3);
x_284 = !lean_is_exclusive(x_283);
if (x_284 == 0)
{
lean_object* x_285; 
x_285 = lean_ctor_get(x_283, 0);
lean_dec(x_285);
lean_ctor_set_tag(x_283, 1);
lean_ctor_set(x_283, 0, x_280);
return x_283;
}
else
{
lean_object* x_286; lean_object* x_287; 
x_286 = lean_ctor_get(x_283, 1);
lean_inc(x_286);
lean_dec(x_283);
x_287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_287, 0, x_280);
lean_ctor_set(x_287, 1, x_286);
return x_287;
}
}
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_19__isDeltaCandidate(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Expr_getAppFn___main(x_1);
if (lean_obj_tag(x_4) == 4)
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = 1;
x_7 = l_Lean_Meta_getConstAux(x_5, x_6, x_2, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_19__isDeltaCandidate___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Meta_ExprDefEq_19__isDeltaCandidate(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_20__isListLevelDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_isListLevelDefEqAux___main(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Bool_toLBool(x_8);
x_10 = lean_box(x_9);
lean_ctor_set(x_5, 0, x_10);
return x_5;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_5);
x_13 = lean_unbox(x_11);
lean_dec(x_11);
x_14 = l_Bool_toLBool(x_13);
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_12);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_5);
if (x_17 == 0)
{
return x_5;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_5, 0);
x_19 = lean_ctor_get(x_5, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_5);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_20__isListLevelDefEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_ExprDefEq_20__isListLevelDefEq(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("delta");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__1;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unfoldLeft");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__4;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = l_Lean_Meta_isExprDefEqAux(x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
x_12 = l_Bool_toLBool(x_11);
x_13 = lean_box(x_12);
lean_ctor_set(x_8, 0, x_13);
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_unbox(x_14);
lean_dec(x_14);
x_17 = l_Bool_toLBool(x_16);
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_8);
if (x_20 == 0)
{
return x_8;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_8, 0);
x_22 = lean_ctor_get(x_8, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_8);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__5;
x_25 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_24, x_4, x_5);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_Lean_Meta_isExprDefEqAux(x_2, x_3, x_4, x_28);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; uint8_t x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
x_33 = l_Bool_toLBool(x_32);
x_34 = lean_box(x_33);
lean_ctor_set(x_29, 0, x_34);
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_29);
x_37 = lean_unbox(x_35);
lean_dec(x_35);
x_38 = l_Bool_toLBool(x_37);
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_36);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_29);
if (x_41 == 0)
{
return x_29;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_29, 0);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_29);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_45 = lean_ctor_get(x_25, 1);
lean_inc(x_45);
lean_dec(x_25);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_4, 1);
lean_inc(x_48);
x_49 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_49, 0, x_1);
x_50 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_50, 0, x_46);
lean_ctor_set(x_50, 1, x_47);
lean_ctor_set(x_50, 2, x_48);
lean_ctor_set(x_50, 3, x_49);
x_51 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__4;
x_52 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_51, x_50, x_4, x_45);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = l_Lean_Meta_isExprDefEqAux(x_2, x_3, x_4, x_53);
if (lean_obj_tag(x_54) == 0)
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_54, 0);
x_57 = lean_unbox(x_56);
lean_dec(x_56);
x_58 = l_Bool_toLBool(x_57);
x_59 = lean_box(x_58);
lean_ctor_set(x_54, 0, x_59);
return x_54;
}
else
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_60 = lean_ctor_get(x_54, 0);
x_61 = lean_ctor_get(x_54, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_54);
x_62 = lean_unbox(x_60);
lean_dec(x_60);
x_63 = l_Bool_toLBool(x_62);
x_64 = lean_box(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_61);
return x_65;
}
}
else
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_54);
if (x_66 == 0)
{
return x_54;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_54, 0);
x_68 = lean_ctor_get(x_54, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_54);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
}
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unfoldRight");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__2;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = l_Lean_Meta_isExprDefEqAux(x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
x_12 = l_Bool_toLBool(x_11);
x_13 = lean_box(x_12);
lean_ctor_set(x_8, 0, x_13);
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_unbox(x_14);
lean_dec(x_14);
x_17 = l_Bool_toLBool(x_16);
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_8);
if (x_20 == 0)
{
return x_8;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_8, 0);
x_22 = lean_ctor_get(x_8, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_8);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__3;
x_25 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_24, x_4, x_5);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_Lean_Meta_isExprDefEqAux(x_2, x_3, x_4, x_28);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; uint8_t x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
x_33 = l_Bool_toLBool(x_32);
x_34 = lean_box(x_33);
lean_ctor_set(x_29, 0, x_34);
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_29);
x_37 = lean_unbox(x_35);
lean_dec(x_35);
x_38 = l_Bool_toLBool(x_37);
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_36);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_29);
if (x_41 == 0)
{
return x_29;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_29, 0);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_29);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_45 = lean_ctor_get(x_25, 1);
lean_inc(x_45);
lean_dec(x_25);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_4, 1);
lean_inc(x_48);
x_49 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_49, 0, x_1);
x_50 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_50, 0, x_46);
lean_ctor_set(x_50, 1, x_47);
lean_ctor_set(x_50, 2, x_48);
lean_ctor_set(x_50, 3, x_49);
x_51 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__2;
x_52 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_51, x_50, x_4, x_45);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = l_Lean_Meta_isExprDefEqAux(x_2, x_3, x_4, x_53);
if (lean_obj_tag(x_54) == 0)
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_54, 0);
x_57 = lean_unbox(x_56);
lean_dec(x_56);
x_58 = l_Bool_toLBool(x_57);
x_59 = lean_box(x_58);
lean_ctor_set(x_54, 0, x_59);
return x_54;
}
else
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_60 = lean_ctor_get(x_54, 0);
x_61 = lean_ctor_get(x_54, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_54);
x_62 = lean_unbox(x_60);
lean_dec(x_60);
x_63 = l_Bool_toLBool(x_62);
x_64 = lean_box(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_61);
return x_65;
}
}
else
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_54);
if (x_66 == 0)
{
return x_54;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_54, 0);
x_68 = lean_ctor_get(x_54, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_54);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
}
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unfoldLeftRight");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__2;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = l_Lean_Meta_isExprDefEqAux(x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
x_12 = l_Bool_toLBool(x_11);
x_13 = lean_box(x_12);
lean_ctor_set(x_8, 0, x_13);
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_unbox(x_14);
lean_dec(x_14);
x_17 = l_Bool_toLBool(x_16);
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_8);
if (x_20 == 0)
{
return x_8;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_8, 0);
x_22 = lean_ctor_get(x_8, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_8);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__3;
x_25 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_24, x_4, x_5);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_Lean_Meta_isExprDefEqAux(x_2, x_3, x_4, x_28);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; uint8_t x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
x_33 = l_Bool_toLBool(x_32);
x_34 = lean_box(x_33);
lean_ctor_set(x_29, 0, x_34);
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_29);
x_37 = lean_unbox(x_35);
lean_dec(x_35);
x_38 = l_Bool_toLBool(x_37);
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_36);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_29);
if (x_41 == 0)
{
return x_29;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_29, 0);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_29);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_45 = lean_ctor_get(x_25, 1);
lean_inc(x_45);
lean_dec(x_25);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_4, 1);
lean_inc(x_48);
x_49 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_49, 0, x_1);
x_50 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_50, 0, x_46);
lean_ctor_set(x_50, 1, x_47);
lean_ctor_set(x_50, 2, x_48);
lean_ctor_set(x_50, 3, x_49);
x_51 = l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__2;
x_52 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_51, x_50, x_4, x_45);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = l_Lean_Meta_isExprDefEqAux(x_2, x_3, x_4, x_53);
if (lean_obj_tag(x_54) == 0)
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_54, 0);
x_57 = lean_unbox(x_56);
lean_dec(x_56);
x_58 = l_Bool_toLBool(x_57);
x_59 = lean_box(x_58);
lean_ctor_set(x_54, 0, x_59);
return x_54;
}
else
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_60 = lean_ctor_get(x_54, 0);
x_61 = lean_ctor_get(x_54, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_54);
x_62 = lean_unbox(x_60);
lean_dec(x_60);
x_63 = l_Bool_toLBool(x_62);
x_64 = lean_box(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_61);
return x_65;
}
}
else
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_54);
if (x_66 == 0)
{
return x_54;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_54, 0);
x_68 = lean_ctor_get(x_54, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_54);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
}
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (x_3 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Expr_constLevels_x21(x_1);
x_9 = l_Lean_Expr_constLevels_x21(x_2);
x_10 = l_Lean_Meta_isListLevelDefEqAux___main(x_8, x_9, x_4, x_5);
return x_10;
}
}
}
lean_object* _init_l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("heuristic failed ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (x_4 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_6, 4);
lean_inc(x_7);
x_8 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
lean_inc(x_1);
x_12 = l_Lean_Name_append___main(x_11, x_1);
x_13 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_12, x_5, x_6);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
uint8_t x_16; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_13, 0);
lean_dec(x_17);
x_18 = lean_box(x_4);
lean_ctor_set(x_13, 0, x_18);
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_dec(x_13);
x_20 = lean_box(x_4);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_dec(x_13);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_5, 1);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_2);
x_27 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__3;
x_28 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Lean_Meta_Exception_toMessageData___closed__51;
x_30 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_3);
x_32 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
lean_inc(x_25);
x_33 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_33, 0, x_23);
lean_ctor_set(x_33, 1, x_24);
lean_ctor_set(x_33, 2, x_25);
lean_ctor_set(x_33, 3, x_32);
x_34 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_1, x_33, x_5, x_22);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
x_37 = lean_box(x_4);
lean_ctor_set(x_34, 0, x_37);
return x_34;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
lean_dec(x_34);
x_39 = lean_box(x_4);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
}
else
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = lean_box(x_4);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
return x_42;
}
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_8);
x_10 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_9);
x_11 = lean_mk_array(x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_9, x_12);
lean_dec(x_9);
lean_inc(x_1);
x_14 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_11, x_13);
x_15 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_8);
lean_inc(x_15);
x_16 = lean_mk_array(x_15, x_10);
x_17 = lean_nat_sub(x_15, x_12);
lean_dec(x_15);
lean_inc(x_2);
x_18 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_16, x_17);
lean_inc(x_3);
x_19 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs___boxed), 5, 3);
lean_closure_set(x_19, 0, x_3);
lean_closure_set(x_19, 1, x_14);
lean_closure_set(x_19, 2, x_18);
x_20 = lean_alloc_closure((void*)(l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__1___boxed), 5, 2);
lean_closure_set(x_20, 0, x_3);
lean_closure_set(x_20, 1, x_4);
x_21 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg), 4, 2);
lean_closure_set(x_21, 0, x_19);
lean_closure_set(x_21, 1, x_20);
x_22 = lean_alloc_closure((void*)(l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___boxed), 6, 3);
lean_closure_set(x_22, 0, x_5);
lean_closure_set(x_22, 1, x_1);
lean_closure_set(x_22, 2, x_2);
x_23 = !lean_is_exclusive(x_7);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_36; 
x_24 = lean_ctor_get(x_7, 0);
x_25 = lean_ctor_get(x_7, 1);
x_26 = lean_ctor_get(x_7, 5);
x_27 = l_PersistentArray_empty___closed__3;
lean_inc(x_25);
lean_inc(x_24);
lean_ctor_set(x_7, 5, x_27);
lean_inc(x_6);
x_36 = l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(x_21, x_22, x_6, x_7);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_24, x_25, x_26, x_6, x_39);
lean_dec(x_6);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
lean_ctor_set(x_40, 0, x_37);
return x_40;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_37);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_37);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_dec(x_36);
x_46 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_6, x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; uint8_t x_48; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_unbox(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_dec(x_46);
x_50 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_24, x_25, x_26, x_6, x_49);
lean_dec(x_6);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_50, 0);
lean_dec(x_52);
lean_ctor_set(x_50, 0, x_47);
return x_50;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_dec(x_50);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_47);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
else
{
uint8_t x_55; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_6);
x_55 = !lean_is_exclusive(x_46);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_46, 0);
lean_dec(x_56);
return x_46;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_46, 1);
lean_inc(x_57);
lean_dec(x_46);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_47);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_46, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_46, 1);
lean_inc(x_60);
lean_dec(x_46);
x_28 = x_59;
x_29 = x_60;
goto block_35;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_36, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_36, 1);
lean_inc(x_62);
lean_dec(x_36);
x_28 = x_61;
x_29 = x_62;
goto block_35;
}
block_35:
{
lean_object* x_30; uint8_t x_31; 
x_30 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_24, x_25, x_26, x_6, x_29);
lean_dec(x_6);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
lean_ctor_set_tag(x_30, 1);
lean_ctor_set(x_30, 0, x_28);
return x_30;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_78; 
x_63 = lean_ctor_get(x_7, 0);
x_64 = lean_ctor_get(x_7, 1);
x_65 = lean_ctor_get(x_7, 2);
x_66 = lean_ctor_get(x_7, 3);
x_67 = lean_ctor_get(x_7, 4);
x_68 = lean_ctor_get(x_7, 5);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_7);
x_69 = l_PersistentArray_empty___closed__3;
lean_inc(x_64);
lean_inc(x_63);
x_70 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_70, 0, x_63);
lean_ctor_set(x_70, 1, x_64);
lean_ctor_set(x_70, 2, x_65);
lean_ctor_set(x_70, 3, x_66);
lean_ctor_set(x_70, 4, x_67);
lean_ctor_set(x_70, 5, x_69);
lean_inc(x_6);
x_78 = l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(x_21, x_22, x_6, x_70);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; uint8_t x_80; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_unbox(x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
lean_dec(x_78);
x_82 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_63, x_64, x_68, x_6, x_81);
lean_dec(x_6);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_84 = x_82;
} else {
 lean_dec_ref(x_82);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_79);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_79);
x_86 = lean_ctor_get(x_78, 1);
lean_inc(x_86);
lean_dec(x_78);
x_87 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_6, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_unbox(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_87, 1);
lean_inc(x_90);
lean_dec(x_87);
x_91 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_63, x_64, x_68, x_6, x_90);
lean_dec(x_6);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_93 = x_91;
} else {
 lean_dec_ref(x_91);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_88);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_68);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_6);
x_95 = lean_ctor_get(x_87, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_96 = x_87;
} else {
 lean_dec_ref(x_87);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_88);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
else
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_87, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_87, 1);
lean_inc(x_99);
lean_dec(x_87);
x_71 = x_98;
x_72 = x_99;
goto block_77;
}
}
}
else
{
lean_object* x_100; lean_object* x_101; 
x_100 = lean_ctor_get(x_78, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_78, 1);
lean_inc(x_101);
lean_dec(x_78);
x_71 = x_100;
x_72 = x_101;
goto block_77;
}
block_77:
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_63, x_64, x_68, x_6, x_72);
lean_dec(x_6);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_75 = x_73;
} else {
 lean_dec_ref(x_73);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
 lean_ctor_set_tag(x_76, 1);
}
lean_ctor_set(x_76, 0, x_71);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_8);
x_10 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_9);
x_11 = lean_mk_array(x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_9, x_12);
lean_dec(x_9);
lean_inc(x_1);
x_14 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_11, x_13);
x_15 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_8);
lean_inc(x_15);
x_16 = lean_mk_array(x_15, x_10);
x_17 = lean_nat_sub(x_15, x_12);
lean_dec(x_15);
lean_inc(x_2);
x_18 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_16, x_17);
lean_inc(x_3);
x_19 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs___boxed), 5, 3);
lean_closure_set(x_19, 0, x_3);
lean_closure_set(x_19, 1, x_14);
lean_closure_set(x_19, 2, x_18);
x_20 = lean_alloc_closure((void*)(l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__1___boxed), 5, 2);
lean_closure_set(x_20, 0, x_3);
lean_closure_set(x_20, 1, x_4);
x_21 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg), 4, 2);
lean_closure_set(x_21, 0, x_19);
lean_closure_set(x_21, 1, x_20);
x_22 = lean_alloc_closure((void*)(l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___boxed), 6, 3);
lean_closure_set(x_22, 0, x_5);
lean_closure_set(x_22, 1, x_1);
lean_closure_set(x_22, 2, x_2);
x_23 = !lean_is_exclusive(x_7);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_36; 
x_24 = lean_ctor_get(x_7, 0);
x_25 = lean_ctor_get(x_7, 1);
x_26 = lean_ctor_get(x_7, 5);
x_27 = l_PersistentArray_empty___closed__3;
lean_inc(x_25);
lean_inc(x_24);
lean_ctor_set(x_7, 5, x_27);
lean_inc(x_6);
x_36 = l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(x_21, x_22, x_6, x_7);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_24, x_25, x_26, x_6, x_39);
lean_dec(x_6);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
lean_ctor_set(x_40, 0, x_37);
return x_40;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_37);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_37);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_dec(x_36);
x_46 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_6, x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; uint8_t x_48; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_unbox(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_dec(x_46);
x_50 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_24, x_25, x_26, x_6, x_49);
lean_dec(x_6);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_50, 0);
lean_dec(x_52);
lean_ctor_set(x_50, 0, x_47);
return x_50;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_dec(x_50);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_47);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
else
{
uint8_t x_55; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_6);
x_55 = !lean_is_exclusive(x_46);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_46, 0);
lean_dec(x_56);
return x_46;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_46, 1);
lean_inc(x_57);
lean_dec(x_46);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_47);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_46, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_46, 1);
lean_inc(x_60);
lean_dec(x_46);
x_28 = x_59;
x_29 = x_60;
goto block_35;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_36, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_36, 1);
lean_inc(x_62);
lean_dec(x_36);
x_28 = x_61;
x_29 = x_62;
goto block_35;
}
block_35:
{
lean_object* x_30; uint8_t x_31; 
x_30 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_24, x_25, x_26, x_6, x_29);
lean_dec(x_6);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
lean_ctor_set_tag(x_30, 1);
lean_ctor_set(x_30, 0, x_28);
return x_30;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_78; 
x_63 = lean_ctor_get(x_7, 0);
x_64 = lean_ctor_get(x_7, 1);
x_65 = lean_ctor_get(x_7, 2);
x_66 = lean_ctor_get(x_7, 3);
x_67 = lean_ctor_get(x_7, 4);
x_68 = lean_ctor_get(x_7, 5);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_7);
x_69 = l_PersistentArray_empty___closed__3;
lean_inc(x_64);
lean_inc(x_63);
x_70 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_70, 0, x_63);
lean_ctor_set(x_70, 1, x_64);
lean_ctor_set(x_70, 2, x_65);
lean_ctor_set(x_70, 3, x_66);
lean_ctor_set(x_70, 4, x_67);
lean_ctor_set(x_70, 5, x_69);
lean_inc(x_6);
x_78 = l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(x_21, x_22, x_6, x_70);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; uint8_t x_80; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_unbox(x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
lean_dec(x_78);
x_82 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_63, x_64, x_68, x_6, x_81);
lean_dec(x_6);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_84 = x_82;
} else {
 lean_dec_ref(x_82);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_79);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_79);
x_86 = lean_ctor_get(x_78, 1);
lean_inc(x_86);
lean_dec(x_78);
x_87 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_6, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_unbox(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_87, 1);
lean_inc(x_90);
lean_dec(x_87);
x_91 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_63, x_64, x_68, x_6, x_90);
lean_dec(x_6);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_93 = x_91;
} else {
 lean_dec_ref(x_91);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_88);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_68);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_6);
x_95 = lean_ctor_get(x_87, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_96 = x_87;
} else {
 lean_dec_ref(x_87);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_88);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
else
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_87, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_87, 1);
lean_inc(x_99);
lean_dec(x_87);
x_71 = x_98;
x_72 = x_99;
goto block_77;
}
}
}
else
{
lean_object* x_100; lean_object* x_101; 
x_100 = lean_ctor_get(x_78, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_78, 1);
lean_inc(x_101);
lean_dec(x_78);
x_71 = x_100;
x_72 = x_101;
goto block_77;
}
block_77:
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_63, x_64, x_68, x_6, x_72);
lean_dec(x_6);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_75 = x_73;
} else {
 lean_dec_ref(x_73);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
 lean_ctor_set_tag(x_76, 1);
}
lean_ctor_set(x_76, 0, x_71);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_176; uint8_t x_177; 
x_5 = l_Lean_Expr_getAppFn___main(x_1);
x_6 = l_Lean_Expr_getAppFn___main(x_2);
x_176 = lean_ctor_get(x_4, 4);
lean_inc(x_176);
x_177 = lean_ctor_get_uint8(x_176, sizeof(void*)*1);
lean_dec(x_176);
if (x_177 == 0)
{
uint8_t x_178; 
x_178 = 0;
x_7 = x_178;
x_8 = x_4;
goto block_175;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_183; 
x_179 = l___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___closed__1;
x_180 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_179, x_3, x_4);
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
x_183 = lean_unbox(x_181);
lean_dec(x_181);
x_7 = x_183;
x_8 = x_182;
goto block_175;
}
block_175:
{
if (x_7 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_8, 4);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get_uint8(x_10, sizeof(void*)*1);
x_13 = 0;
lean_ctor_set_uint8(x_10, sizeof(void*)*1, x_13);
x_14 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2;
x_15 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1(x_1, x_2, x_5, x_6, x_14, x_3, x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 4);
lean_inc(x_17);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_15, 1);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_16, 4);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
lean_ctor_set_uint8(x_17, sizeof(void*)*1, x_12);
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_17, 0);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*1, x_12);
lean_ctor_set(x_16, 4, x_24);
return x_15;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 1);
x_27 = lean_ctor_get(x_16, 2);
x_28 = lean_ctor_get(x_16, 3);
x_29 = lean_ctor_get(x_16, 5);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_30 = lean_ctor_get(x_17, 0);
lean_inc(x_30);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_31 = x_17;
} else {
 lean_dec_ref(x_17);
 x_31 = lean_box(0);
}
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(0, 1, 1);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set_uint8(x_32, sizeof(void*)*1, x_12);
x_33 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_33, 0, x_25);
lean_ctor_set(x_33, 1, x_26);
lean_ctor_set(x_33, 2, x_27);
lean_ctor_set(x_33, 3, x_28);
lean_ctor_set(x_33, 4, x_32);
lean_ctor_set(x_33, 5, x_29);
lean_ctor_set(x_15, 1, x_33);
return x_15;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_34 = lean_ctor_get(x_15, 0);
lean_inc(x_34);
lean_dec(x_15);
x_35 = lean_ctor_get(x_16, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_16, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_16, 2);
lean_inc(x_37);
x_38 = lean_ctor_get(x_16, 3);
lean_inc(x_38);
x_39 = lean_ctor_get(x_16, 5);
lean_inc(x_39);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 lean_ctor_release(x_16, 2);
 lean_ctor_release(x_16, 3);
 lean_ctor_release(x_16, 4);
 lean_ctor_release(x_16, 5);
 x_40 = x_16;
} else {
 lean_dec_ref(x_16);
 x_40 = lean_box(0);
}
x_41 = lean_ctor_get(x_17, 0);
lean_inc(x_41);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_42 = x_17;
} else {
 lean_dec_ref(x_17);
 x_42 = lean_box(0);
}
if (lean_is_scalar(x_42)) {
 x_43 = lean_alloc_ctor(0, 1, 1);
} else {
 x_43 = x_42;
}
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set_uint8(x_43, sizeof(void*)*1, x_12);
if (lean_is_scalar(x_40)) {
 x_44 = lean_alloc_ctor(0, 6, 0);
} else {
 x_44 = x_40;
}
lean_ctor_set(x_44, 0, x_35);
lean_ctor_set(x_44, 1, x_36);
lean_ctor_set(x_44, 2, x_37);
lean_ctor_set(x_44, 3, x_38);
lean_ctor_set(x_44, 4, x_43);
lean_ctor_set(x_44, 5, x_39);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_34);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_15, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_46, 4);
lean_inc(x_47);
x_48 = !lean_is_exclusive(x_15);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_15, 1);
lean_dec(x_49);
x_50 = !lean_is_exclusive(x_46);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_46, 4);
lean_dec(x_51);
x_52 = !lean_is_exclusive(x_47);
if (x_52 == 0)
{
lean_ctor_set_uint8(x_47, sizeof(void*)*1, x_12);
return x_15;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_47, 0);
lean_inc(x_53);
lean_dec(x_47);
x_54 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set_uint8(x_54, sizeof(void*)*1, x_12);
lean_ctor_set(x_46, 4, x_54);
return x_15;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_55 = lean_ctor_get(x_46, 0);
x_56 = lean_ctor_get(x_46, 1);
x_57 = lean_ctor_get(x_46, 2);
x_58 = lean_ctor_get(x_46, 3);
x_59 = lean_ctor_get(x_46, 5);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_46);
x_60 = lean_ctor_get(x_47, 0);
lean_inc(x_60);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 x_61 = x_47;
} else {
 lean_dec_ref(x_47);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(0, 1, 1);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set_uint8(x_62, sizeof(void*)*1, x_12);
x_63 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_63, 0, x_55);
lean_ctor_set(x_63, 1, x_56);
lean_ctor_set(x_63, 2, x_57);
lean_ctor_set(x_63, 3, x_58);
lean_ctor_set(x_63, 4, x_62);
lean_ctor_set(x_63, 5, x_59);
lean_ctor_set(x_15, 1, x_63);
return x_15;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_64 = lean_ctor_get(x_15, 0);
lean_inc(x_64);
lean_dec(x_15);
x_65 = lean_ctor_get(x_46, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_46, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_46, 2);
lean_inc(x_67);
x_68 = lean_ctor_get(x_46, 3);
lean_inc(x_68);
x_69 = lean_ctor_get(x_46, 5);
lean_inc(x_69);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 lean_ctor_release(x_46, 4);
 lean_ctor_release(x_46, 5);
 x_70 = x_46;
} else {
 lean_dec_ref(x_46);
 x_70 = lean_box(0);
}
x_71 = lean_ctor_get(x_47, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 x_72 = x_47;
} else {
 lean_dec_ref(x_47);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(0, 1, 1);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set_uint8(x_73, sizeof(void*)*1, x_12);
if (lean_is_scalar(x_70)) {
 x_74 = lean_alloc_ctor(0, 6, 0);
} else {
 x_74 = x_70;
}
lean_ctor_set(x_74, 0, x_65);
lean_ctor_set(x_74, 1, x_66);
lean_ctor_set(x_74, 2, x_67);
lean_ctor_set(x_74, 3, x_68);
lean_ctor_set(x_74, 4, x_73);
lean_ctor_set(x_74, 5, x_69);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_64);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
uint8_t x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_76 = lean_ctor_get_uint8(x_10, sizeof(void*)*1);
x_77 = lean_ctor_get(x_10, 0);
lean_inc(x_77);
lean_dec(x_10);
x_78 = 0;
x_79 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set_uint8(x_79, sizeof(void*)*1, x_78);
lean_ctor_set(x_8, 4, x_79);
x_80 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2;
x_81 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1(x_1, x_2, x_5, x_6, x_80, x_3, x_8);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
x_83 = lean_ctor_get(x_82, 4);
lean_inc(x_83);
x_84 = lean_ctor_get(x_81, 0);
lean_inc(x_84);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_85 = x_81;
} else {
 lean_dec_ref(x_81);
 x_85 = lean_box(0);
}
x_86 = lean_ctor_get(x_82, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_82, 1);
lean_inc(x_87);
x_88 = lean_ctor_get(x_82, 2);
lean_inc(x_88);
x_89 = lean_ctor_get(x_82, 3);
lean_inc(x_89);
x_90 = lean_ctor_get(x_82, 5);
lean_inc(x_90);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 lean_ctor_release(x_82, 2);
 lean_ctor_release(x_82, 3);
 lean_ctor_release(x_82, 4);
 lean_ctor_release(x_82, 5);
 x_91 = x_82;
} else {
 lean_dec_ref(x_82);
 x_91 = lean_box(0);
}
x_92 = lean_ctor_get(x_83, 0);
lean_inc(x_92);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 x_93 = x_83;
} else {
 lean_dec_ref(x_83);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(0, 1, 1);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set_uint8(x_94, sizeof(void*)*1, x_76);
if (lean_is_scalar(x_91)) {
 x_95 = lean_alloc_ctor(0, 6, 0);
} else {
 x_95 = x_91;
}
lean_ctor_set(x_95, 0, x_86);
lean_ctor_set(x_95, 1, x_87);
lean_ctor_set(x_95, 2, x_88);
lean_ctor_set(x_95, 3, x_89);
lean_ctor_set(x_95, 4, x_94);
lean_ctor_set(x_95, 5, x_90);
if (lean_is_scalar(x_85)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_85;
}
lean_ctor_set(x_96, 0, x_84);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_97 = lean_ctor_get(x_81, 1);
lean_inc(x_97);
x_98 = lean_ctor_get(x_97, 4);
lean_inc(x_98);
x_99 = lean_ctor_get(x_81, 0);
lean_inc(x_99);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_100 = x_81;
} else {
 lean_dec_ref(x_81);
 x_100 = lean_box(0);
}
x_101 = lean_ctor_get(x_97, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_97, 1);
lean_inc(x_102);
x_103 = lean_ctor_get(x_97, 2);
lean_inc(x_103);
x_104 = lean_ctor_get(x_97, 3);
lean_inc(x_104);
x_105 = lean_ctor_get(x_97, 5);
lean_inc(x_105);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 lean_ctor_release(x_97, 2);
 lean_ctor_release(x_97, 3);
 lean_ctor_release(x_97, 4);
 lean_ctor_release(x_97, 5);
 x_106 = x_97;
} else {
 lean_dec_ref(x_97);
 x_106 = lean_box(0);
}
x_107 = lean_ctor_get(x_98, 0);
lean_inc(x_107);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 x_108 = x_98;
} else {
 lean_dec_ref(x_98);
 x_108 = lean_box(0);
}
if (lean_is_scalar(x_108)) {
 x_109 = lean_alloc_ctor(0, 1, 1);
} else {
 x_109 = x_108;
}
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set_uint8(x_109, sizeof(void*)*1, x_76);
if (lean_is_scalar(x_106)) {
 x_110 = lean_alloc_ctor(0, 6, 0);
} else {
 x_110 = x_106;
}
lean_ctor_set(x_110, 0, x_101);
lean_ctor_set(x_110, 1, x_102);
lean_ctor_set(x_110, 2, x_103);
lean_ctor_set(x_110, 3, x_104);
lean_ctor_set(x_110, 4, x_109);
lean_ctor_set(x_110, 5, x_105);
if (lean_is_scalar(x_100)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_100;
}
lean_ctor_set(x_111, 0, x_99);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_112 = lean_ctor_get(x_8, 4);
x_113 = lean_ctor_get(x_8, 0);
x_114 = lean_ctor_get(x_8, 1);
x_115 = lean_ctor_get(x_8, 2);
x_116 = lean_ctor_get(x_8, 3);
x_117 = lean_ctor_get(x_8, 5);
lean_inc(x_117);
lean_inc(x_112);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_8);
x_118 = lean_ctor_get_uint8(x_112, sizeof(void*)*1);
x_119 = lean_ctor_get(x_112, 0);
lean_inc(x_119);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 x_120 = x_112;
} else {
 lean_dec_ref(x_112);
 x_120 = lean_box(0);
}
x_121 = 0;
if (lean_is_scalar(x_120)) {
 x_122 = lean_alloc_ctor(0, 1, 1);
} else {
 x_122 = x_120;
}
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set_uint8(x_122, sizeof(void*)*1, x_121);
x_123 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_123, 0, x_113);
lean_ctor_set(x_123, 1, x_114);
lean_ctor_set(x_123, 2, x_115);
lean_ctor_set(x_123, 3, x_116);
lean_ctor_set(x_123, 4, x_122);
lean_ctor_set(x_123, 5, x_117);
x_124 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2;
x_125 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1(x_1, x_2, x_5, x_6, x_124, x_3, x_123);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_126 = lean_ctor_get(x_125, 1);
lean_inc(x_126);
x_127 = lean_ctor_get(x_126, 4);
lean_inc(x_127);
x_128 = lean_ctor_get(x_125, 0);
lean_inc(x_128);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_129 = x_125;
} else {
 lean_dec_ref(x_125);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_126, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_126, 1);
lean_inc(x_131);
x_132 = lean_ctor_get(x_126, 2);
lean_inc(x_132);
x_133 = lean_ctor_get(x_126, 3);
lean_inc(x_133);
x_134 = lean_ctor_get(x_126, 5);
lean_inc(x_134);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 lean_ctor_release(x_126, 2);
 lean_ctor_release(x_126, 3);
 lean_ctor_release(x_126, 4);
 lean_ctor_release(x_126, 5);
 x_135 = x_126;
} else {
 lean_dec_ref(x_126);
 x_135 = lean_box(0);
}
x_136 = lean_ctor_get(x_127, 0);
lean_inc(x_136);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 x_137 = x_127;
} else {
 lean_dec_ref(x_127);
 x_137 = lean_box(0);
}
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(0, 1, 1);
} else {
 x_138 = x_137;
}
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set_uint8(x_138, sizeof(void*)*1, x_118);
if (lean_is_scalar(x_135)) {
 x_139 = lean_alloc_ctor(0, 6, 0);
} else {
 x_139 = x_135;
}
lean_ctor_set(x_139, 0, x_130);
lean_ctor_set(x_139, 1, x_131);
lean_ctor_set(x_139, 2, x_132);
lean_ctor_set(x_139, 3, x_133);
lean_ctor_set(x_139, 4, x_138);
lean_ctor_set(x_139, 5, x_134);
if (lean_is_scalar(x_129)) {
 x_140 = lean_alloc_ctor(0, 2, 0);
} else {
 x_140 = x_129;
}
lean_ctor_set(x_140, 0, x_128);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_141 = lean_ctor_get(x_125, 1);
lean_inc(x_141);
x_142 = lean_ctor_get(x_141, 4);
lean_inc(x_142);
x_143 = lean_ctor_get(x_125, 0);
lean_inc(x_143);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_144 = x_125;
} else {
 lean_dec_ref(x_125);
 x_144 = lean_box(0);
}
x_145 = lean_ctor_get(x_141, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_141, 1);
lean_inc(x_146);
x_147 = lean_ctor_get(x_141, 2);
lean_inc(x_147);
x_148 = lean_ctor_get(x_141, 3);
lean_inc(x_148);
x_149 = lean_ctor_get(x_141, 5);
lean_inc(x_149);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 lean_ctor_release(x_141, 2);
 lean_ctor_release(x_141, 3);
 lean_ctor_release(x_141, 4);
 lean_ctor_release(x_141, 5);
 x_150 = x_141;
} else {
 lean_dec_ref(x_141);
 x_150 = lean_box(0);
}
x_151 = lean_ctor_get(x_142, 0);
lean_inc(x_151);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 x_152 = x_142;
} else {
 lean_dec_ref(x_142);
 x_152 = lean_box(0);
}
if (lean_is_scalar(x_152)) {
 x_153 = lean_alloc_ctor(0, 1, 1);
} else {
 x_153 = x_152;
}
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set_uint8(x_153, sizeof(void*)*1, x_118);
if (lean_is_scalar(x_150)) {
 x_154 = lean_alloc_ctor(0, 6, 0);
} else {
 x_154 = x_150;
}
lean_ctor_set(x_154, 0, x_145);
lean_ctor_set(x_154, 1, x_146);
lean_ctor_set(x_154, 2, x_147);
lean_ctor_set(x_154, 3, x_148);
lean_ctor_set(x_154, 4, x_153);
lean_ctor_set(x_154, 5, x_149);
if (lean_is_scalar(x_144)) {
 x_155 = lean_alloc_ctor(1, 2, 0);
} else {
 x_155 = x_144;
}
lean_ctor_set(x_155, 0, x_143);
lean_ctor_set(x_155, 1, x_154);
return x_155;
}
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_156 = l___private_Init_Lean_Util_Trace_2__getResetTraces___at_Lean_Meta_check___spec__1___rarg(x_8);
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
lean_dec(x_156);
x_159 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2;
lean_inc(x_3);
x_160 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__2(x_1, x_2, x_5, x_6, x_159, x_3, x_158);
if (lean_obj_tag(x_160) == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; 
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_160, 1);
lean_inc(x_162);
lean_dec(x_160);
x_163 = l___private_Init_Lean_Util_Trace_1__addNode___at_Lean_Meta_check___spec__2(x_157, x_159, x_3, x_162);
lean_dec(x_3);
x_164 = !lean_is_exclusive(x_163);
if (x_164 == 0)
{
lean_object* x_165; 
x_165 = lean_ctor_get(x_163, 0);
lean_dec(x_165);
lean_ctor_set(x_163, 0, x_161);
return x_163;
}
else
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_163, 1);
lean_inc(x_166);
lean_dec(x_163);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_161);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; 
x_168 = lean_ctor_get(x_160, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_160, 1);
lean_inc(x_169);
lean_dec(x_160);
x_170 = l___private_Init_Lean_Util_Trace_1__addNode___at_Lean_Meta_check___spec__2(x_157, x_159, x_3, x_169);
lean_dec(x_3);
x_171 = !lean_is_exclusive(x_170);
if (x_171 == 0)
{
lean_object* x_172; 
x_172 = lean_ctor_get(x_170, 0);
lean_dec(x_172);
lean_ctor_set_tag(x_170, 1);
lean_ctor_set(x_170, 0, x_168);
return x_170;
}
else
{
lean_object* x_173; lean_object* x_174; 
x_173 = lean_ctor_get(x_170, 1);
lean_inc(x_173);
lean_dec(x_170);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_168);
lean_ctor_set(x_174, 1, x_173);
return x_174;
}
}
}
}
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__1(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2(x_1, x_2, x_3, x_7, x_5, x_6);
lean_dec(x_5);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_25__unfold___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
x_6 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_1, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_4, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_apply_3(x_3, x_11, x_4, x_10);
return x_12;
}
}
else
{
uint8_t x_13; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_25__unfold(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_ExprDefEq_25__unfold___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_26__unfoldBothDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 4:
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l___private_Init_Lean_Meta_ExprDefEq_20__isListLevelDefEq(x_6, x_7, x_4, x_5);
lean_dec(x_4);
return x_8;
}
else
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
}
case 5:
{
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_12; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_12 = l___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic(x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
lean_inc(x_4);
lean_inc(x_2);
x_16 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_2, x_4, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_4);
x_19 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_3, x_4, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
x_23 = 0;
x_24 = lean_box(x_23);
lean_ctor_set(x_19, 0, x_24);
return x_19;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = 0;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_dec(x_19);
x_30 = lean_ctor_get(x_20, 0);
lean_inc(x_30);
lean_dec(x_20);
x_31 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight(x_1, x_2, x_30, x_4, x_29);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_2);
x_36 = lean_ctor_get(x_16, 1);
lean_inc(x_36);
lean_dec(x_16);
x_37 = lean_ctor_get(x_17, 0);
lean_inc(x_37);
lean_dec(x_17);
lean_inc(x_4);
lean_inc(x_3);
x_38 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_3, x_4, x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft(x_1, x_37, x_3, x_4, x_40);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_3);
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
lean_dec(x_38);
x_43 = lean_ctor_get(x_39, 0);
lean_inc(x_43);
lean_dec(x_39);
x_44 = l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight(x_1, x_37, x_43, x_4, x_42);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_37);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
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
}
else
{
uint8_t x_49; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_16);
if (x_49 == 0)
{
return x_16;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_16, 0);
x_51 = lean_ctor_get(x_16, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_16);
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
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_12);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_12, 0);
lean_dec(x_54);
x_55 = 1;
x_56 = lean_box(x_55);
lean_ctor_set(x_12, 0, x_56);
return x_12;
}
else
{
lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_12, 1);
lean_inc(x_57);
lean_dec(x_12);
x_58 = 1;
x_59 = lean_box(x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_61 = !lean_is_exclusive(x_12);
if (x_61 == 0)
{
return x_12;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_12, 0);
x_63 = lean_ctor_get(x_12, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_12);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_65 = 0;
x_66 = lean_box(x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_5);
return x_67;
}
}
default: 
{
uint8_t x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_68 = 0;
x_69 = lean_box(x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_5);
return x_70;
}
}
}
}
uint8_t l___private_Init_Lean_Meta_ExprDefEq_27__sameHeadSymbol(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Expr_getAppFn___main(x_1);
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_4; 
lean_dec(x_3);
x_4 = l_Lean_Expr_getAppFn___main(x_2);
if (lean_obj_tag(x_4) == 4)
{
uint8_t x_5; 
lean_dec(x_4);
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
}
else
{
uint8_t x_7; 
lean_dec(x_3);
x_7 = 0;
return x_7;
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_27__sameHeadSymbol___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Lean_Meta_ExprDefEq_27__sameHeadSymbol(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_28__unfoldComparingHeadsDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_3);
x_7 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_3, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
x_10 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_5);
lean_dec(x_3);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = 2;
x_15 = lean_box(x_14);
lean_ctor_set(x_10, 0, x_15);
return x_10;
}
else
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = 2;
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_dec(x_10);
x_21 = lean_ctor_get(x_11, 0);
lean_inc(x_21);
lean_dec(x_11);
x_22 = l_Lean_ConstantInfo_name(x_2);
x_23 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight(x_22, x_3, x_21, x_5, x_20);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_5);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_10);
if (x_24 == 0)
{
return x_10;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_10, 0);
x_26 = lean_ctor_get(x_10, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_10);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_7, 1);
lean_inc(x_28);
lean_dec(x_7);
x_29 = lean_ctor_get(x_8, 0);
lean_inc(x_29);
lean_dec(x_8);
x_30 = l___private_Init_Lean_Meta_ExprDefEq_27__sameHeadSymbol(x_29, x_4);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = l_Lean_ConstantInfo_name(x_1);
lean_inc(x_5);
lean_inc(x_4);
x_32 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_4, x_5, x_28);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_3);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft(x_31, x_29, x_4, x_5, x_34);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_dec(x_4);
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_dec(x_32);
x_37 = lean_ctor_get(x_33, 0);
lean_inc(x_37);
lean_dec(x_33);
x_38 = l___private_Init_Lean_Meta_ExprDefEq_27__sameHeadSymbol(x_3, x_37);
if (x_38 == 0)
{
lean_object* x_39; 
lean_dec(x_3);
x_39 = l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight(x_31, x_29, x_37, x_5, x_36);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_31);
lean_dec(x_29);
x_40 = l_Lean_ConstantInfo_name(x_2);
x_41 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight(x_40, x_3, x_37, x_5, x_36);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_42 = !lean_is_exclusive(x_32);
if (x_42 == 0)
{
return x_32;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_32, 0);
x_44 = lean_ctor_get(x_32, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_32);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_3);
x_46 = l_Lean_ConstantInfo_name(x_1);
x_47 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft(x_46, x_29, x_4, x_5, x_28);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_7);
if (x_48 == 0)
{
return x_7;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_7, 0);
x_50 = lean_ctor_get(x_7, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_7);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_28__unfoldComparingHeadsDefEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Meta_ExprDefEq_28__unfoldComparingHeadsDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Lean_Expr_hasExprMVar(x_3);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_Lean_Expr_hasExprMVar(x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_ConstantInfo_hints(x_1);
x_10 = l_Lean_ConstantInfo_hints(x_2);
x_11 = l_Lean_ReducibilityHints_lt(x_9, x_10);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = l_Lean_ReducibilityHints_lt(x_10, x_9);
lean_dec(x_9);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = l___private_Init_Lean_Meta_ExprDefEq_28__unfoldComparingHeadsDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
return x_13;
}
else
{
lean_object* x_14; 
lean_inc(x_5);
lean_inc(x_4);
x_14 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_4, x_5, x_6);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l___private_Init_Lean_Meta_ExprDefEq_28__unfoldComparingHeadsDefEq(x_1, x_2, x_3, x_4, x_5, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_4);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = l_Lean_ConstantInfo_name(x_2);
x_21 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight(x_20, x_3, x_19, x_5, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_10);
lean_dec(x_9);
lean_inc(x_5);
lean_inc(x_3);
x_26 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_3, x_5, x_6);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l___private_Init_Lean_Meta_ExprDefEq_28__unfoldComparingHeadsDefEq(x_1, x_2, x_3, x_4, x_5, x_28);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_3);
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = lean_ctor_get(x_27, 0);
lean_inc(x_31);
lean_dec(x_27);
x_32 = l_Lean_ConstantInfo_name(x_1);
x_33 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft(x_32, x_31, x_4, x_5, x_30);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_34 = !lean_is_exclusive(x_26);
if (x_34 == 0)
{
return x_26;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_26, 0);
x_36 = lean_ctor_get(x_26, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_26);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
else
{
lean_object* x_38; 
x_38 = l___private_Init_Lean_Meta_ExprDefEq_28__unfoldComparingHeadsDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
return x_38;
}
}
else
{
lean_object* x_39; 
x_39 = l___private_Init_Lean_Meta_ExprDefEq_28__unfoldComparingHeadsDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
return x_39;
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_30__unfoldReducibeDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; uint8_t x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 5);
lean_dec(x_7);
x_9 = 2;
x_10 = l_Lean_Meta_TransparencyMode_beq(x_8, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_11 = l_Lean_ConstantInfo_name(x_1);
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_12);
x_13 = l_Lean_isReducible(x_12, x_11);
x_14 = l_Lean_ConstantInfo_name(x_2);
lean_inc(x_14);
x_15 = l_Lean_isReducible(x_12, x_14);
if (x_13 == 0)
{
lean_object* x_43; 
lean_dec(x_11);
x_43 = lean_box(0);
x_16 = x_43;
goto block_42;
}
else
{
if (x_15 == 0)
{
lean_object* x_44; 
lean_dec(x_14);
lean_inc(x_5);
lean_inc(x_3);
x_44 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_3, x_5, x_6);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_11);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(x_1, x_2, x_3, x_4, x_5, x_46);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_3);
x_48 = lean_ctor_get(x_44, 1);
lean_inc(x_48);
lean_dec(x_44);
x_49 = lean_ctor_get(x_45, 0);
lean_inc(x_49);
lean_dec(x_45);
x_50 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft(x_11, x_49, x_4, x_5, x_48);
return x_50;
}
}
else
{
uint8_t x_51; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_51 = !lean_is_exclusive(x_44);
if (x_51 == 0)
{
return x_44;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_44, 0);
x_53 = lean_ctor_get(x_44, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_44);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; 
lean_dec(x_11);
x_55 = lean_box(0);
x_16 = x_55;
goto block_42;
}
}
block_42:
{
lean_dec(x_16);
if (x_13 == 0)
{
if (x_15 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
x_17 = l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
return x_17;
}
else
{
lean_object* x_18; 
lean_inc(x_5);
lean_inc(x_4);
x_18 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_4, x_5, x_6);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_14);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(x_1, x_2, x_3, x_4, x_5, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_4);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
x_24 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight(x_14, x_3, x_23, x_5, x_22);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
return x_18;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
else
{
if (x_10 == 0)
{
lean_object* x_29; 
lean_dec(x_14);
x_29 = l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
return x_29;
}
else
{
if (x_15 == 0)
{
lean_object* x_30; 
lean_dec(x_14);
x_30 = l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
return x_30;
}
else
{
lean_object* x_31; 
lean_inc(x_5);
lean_inc(x_4);
x_31 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_4, x_5, x_6);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_14);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(x_1, x_2, x_3, x_4, x_5, x_33);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_4);
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec(x_31);
x_36 = lean_ctor_get(x_32, 0);
lean_inc(x_36);
lean_dec(x_32);
x_37 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight(x_14, x_3, x_36, x_5, x_35);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_31);
if (x_38 == 0)
{
return x_31;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_31, 0);
x_40 = lean_ctor_get(x_31, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_31);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
}
}
else
{
lean_object* x_56; 
x_56 = l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
return x_56;
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_30__unfoldReducibeDefEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Meta_ExprDefEq_30__unfoldReducibeDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_31__unfoldNonProjFnDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = l_Lean_ConstantInfo_name(x_1);
lean_inc(x_8);
x_9 = l_Lean_Environment_isProjectionFn(x_7, x_8);
x_10 = l_Lean_ConstantInfo_name(x_2);
lean_inc(x_10);
x_11 = l_Lean_Environment_isProjectionFn(x_7, x_10);
lean_dec(x_7);
if (x_9 == 0)
{
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
x_12 = l___private_Init_Lean_Meta_ExprDefEq_30__unfoldReducibeDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
return x_12;
}
else
{
lean_object* x_13; 
lean_inc(x_5);
lean_inc(x_3);
x_13 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_3, x_5, x_6);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_8);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(x_1, x_2, x_3, x_4, x_5, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
x_19 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft(x_8, x_18, x_4, x_5, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 0);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_13);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
else
{
lean_dec(x_8);
if (x_11 == 0)
{
lean_object* x_24; 
lean_inc(x_5);
lean_inc(x_4);
x_24 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_4, x_5, x_6);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_10);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l___private_Init_Lean_Meta_ExprDefEq_29__unfoldDefEq(x_1, x_2, x_3, x_4, x_5, x_26);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_4);
x_28 = lean_ctor_get(x_24, 1);
lean_inc(x_28);
lean_dec(x_24);
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
lean_dec(x_25);
x_30 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight(x_10, x_3, x_29, x_5, x_28);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_31 = !lean_is_exclusive(x_24);
if (x_31 == 0)
{
return x_24;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_24, 0);
x_33 = lean_ctor_get(x_24, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_24);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; 
lean_dec(x_10);
x_35 = l___private_Init_Lean_Meta_ExprDefEq_30__unfoldReducibeDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
return x_35;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_31__unfoldNonProjFnDefEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Meta_ExprDefEq_31__unfoldNonProjFnDefEq(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_32__isDefEqDelta(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Expr_getAppFn___main(x_1);
x_6 = l___private_Init_Lean_Meta_ExprDefEq_19__isDeltaCandidate(x_5, x_3, x_4);
lean_dec(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Expr_getAppFn___main(x_2);
x_10 = l___private_Init_Lean_Meta_ExprDefEq_19__isDeltaCandidate(x_9, x_3, x_8);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = 2;
x_15 = lean_box(x_14);
lean_ctor_set(x_10, 0, x_15);
return x_10;
}
else
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = 2;
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_dec(x_10);
x_21 = lean_ctor_get(x_11, 0);
lean_inc(x_21);
lean_dec(x_11);
lean_inc(x_3);
x_22 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_2, x_3, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
lean_dec(x_21);
lean_dec(x_3);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_22, 0);
lean_dec(x_25);
x_26 = 2;
x_27 = lean_box(x_26);
lean_ctor_set(x_22, 0, x_27);
return x_22;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_dec(x_22);
x_29 = 2;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_22, 1);
lean_inc(x_32);
lean_dec(x_22);
x_33 = lean_ctor_get(x_23, 0);
lean_inc(x_33);
lean_dec(x_23);
x_34 = l_Lean_ConstantInfo_name(x_21);
lean_dec(x_21);
x_35 = l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight(x_34, x_1, x_33, x_3, x_32);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_21);
lean_dec(x_3);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_22);
if (x_36 == 0)
{
return x_22;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_22, 0);
x_38 = lean_ctor_get(x_22, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_22);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_10, 0);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_10, 1);
lean_inc(x_41);
lean_dec(x_10);
x_42 = lean_ctor_get(x_7, 0);
lean_inc(x_42);
lean_dec(x_7);
lean_inc(x_3);
x_43 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition___spec__1(x_1, x_3, x_41);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
if (lean_obj_tag(x_44) == 0)
{
uint8_t x_45; 
lean_dec(x_42);
lean_dec(x_3);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_43);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_43, 0);
lean_dec(x_46);
x_47 = 2;
x_48 = lean_box(x_47);
lean_ctor_set(x_43, 0, x_48);
return x_43;
}
else
{
lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_43, 1);
lean_inc(x_49);
lean_dec(x_43);
x_50 = 2;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_43, 1);
lean_inc(x_53);
lean_dec(x_43);
x_54 = lean_ctor_get(x_44, 0);
lean_inc(x_54);
lean_dec(x_44);
x_55 = l_Lean_ConstantInfo_name(x_42);
lean_dec(x_42);
x_56 = l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft(x_55, x_54, x_2, x_3, x_53);
return x_56;
}
}
else
{
uint8_t x_57; 
lean_dec(x_42);
lean_dec(x_3);
lean_dec(x_2);
x_57 = !lean_is_exclusive(x_43);
if (x_57 == 0)
{
return x_43;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_43, 0);
x_59 = lean_ctor_get(x_43, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_43);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_61 = lean_ctor_get(x_10, 1);
lean_inc(x_61);
lean_dec(x_10);
x_62 = lean_ctor_get(x_7, 0);
lean_inc(x_62);
lean_dec(x_7);
x_63 = lean_ctor_get(x_40, 0);
lean_inc(x_63);
lean_dec(x_40);
x_64 = l_Lean_ConstantInfo_name(x_62);
x_65 = l_Lean_ConstantInfo_name(x_63);
x_66 = lean_name_eq(x_64, x_65);
lean_dec(x_65);
if (x_66 == 0)
{
lean_object* x_67; 
lean_dec(x_64);
x_67 = l___private_Init_Lean_Meta_ExprDefEq_31__unfoldNonProjFnDefEq(x_62, x_63, x_1, x_2, x_3, x_61);
lean_dec(x_63);
lean_dec(x_62);
return x_67;
}
else
{
lean_object* x_68; 
lean_dec(x_63);
lean_dec(x_62);
x_68 = l___private_Init_Lean_Meta_ExprDefEq_26__unfoldBothDefEq(x_64, x_1, x_2, x_3, x_61);
return x_68;
}
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_10);
if (x_69 == 0)
{
return x_10;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_10, 0);
x_71 = lean_ctor_get(x_10, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_10);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_6);
if (x_73 == 0)
{
return x_6;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_6, 0);
x_75 = lean_ctor_get(x_6, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_6);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_33__isAssigned(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_metavar_ctx_is_expr_assigned(x_5, x_4);
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_33__isAssigned___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Meta_ExprDefEq_33__isAssigned(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_34__isSynthetic(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_Meta_isSyntheticExprMVar(x_4, x_2, x_3);
return x_5;
}
else
{
uint8_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_6 = 0;
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_34__isSynthetic___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Meta_ExprDefEq_34__isSynthetic(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_35__isAssignable(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_Meta_isReadOnlyOrSyntheticExprMVar(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_5, 0);
lean_dec(x_9);
x_10 = 1;
x_11 = lean_box(x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
x_13 = 1;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_5);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_5, 0);
lean_dec(x_17);
x_18 = 0;
x_19 = lean_box(x_18);
lean_ctor_set(x_5, 0, x_19);
return x_5;
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_dec(x_5);
x_21 = 0;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_5);
if (x_24 == 0)
{
return x_5;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_5, 0);
x_26 = lean_ctor_get(x_5, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_5);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_1);
x_28 = 0;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_3);
return x_30;
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_35__isAssignable___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Meta_ExprDefEq_35__isAssignable(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
uint8_t l___private_Init_Lean_Meta_ExprDefEq_36__etaEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l___private_Init_Lean_Expr_9__etaExpandedAux___main(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_expr_eqv(x_6, x_2);
lean_dec(x_6);
return x_7;
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_36__etaEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Lean_Meta_ExprDefEq_36__etaEq(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_37__isLetFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_getLocalDecl(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_LocalDecl_isLet(x_6);
lean_dec(x_6);
x_8 = lean_box(x_7);
lean_ctor_set(x_4, 0, x_8);
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_4);
x_11 = l_Lean_LocalDecl_isLet(x_9);
lean_dec(x_9);
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_4);
if (x_14 == 0)
{
return x_4;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_4, 0);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_4);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_38__isDefEqQuick___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_407; 
switch (lean_obj_tag(x_1)) {
case 1:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_431 = lean_ctor_get(x_1, 0);
lean_inc(x_431);
lean_dec(x_1);
x_432 = lean_ctor_get(x_2, 0);
lean_inc(x_432);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_431);
x_433 = l___private_Init_Lean_Meta_ExprDefEq_37__isLetFVar(x_431, x_3, x_4);
if (lean_obj_tag(x_433) == 0)
{
lean_object* x_434; uint8_t x_435; 
x_434 = lean_ctor_get(x_433, 0);
lean_inc(x_434);
x_435 = lean_unbox(x_434);
lean_dec(x_434);
if (x_435 == 0)
{
lean_object* x_436; lean_object* x_437; 
x_436 = lean_ctor_get(x_433, 1);
lean_inc(x_436);
lean_dec(x_433);
lean_inc(x_432);
x_437 = l___private_Init_Lean_Meta_ExprDefEq_37__isLetFVar(x_432, x_3, x_436);
if (lean_obj_tag(x_437) == 0)
{
lean_object* x_438; uint8_t x_439; 
x_438 = lean_ctor_get(x_437, 0);
lean_inc(x_438);
x_439 = lean_unbox(x_438);
lean_dec(x_438);
if (x_439 == 0)
{
uint8_t x_440; 
x_440 = !lean_is_exclusive(x_437);
if (x_440 == 0)
{
lean_object* x_441; uint8_t x_442; uint8_t x_443; lean_object* x_444; 
x_441 = lean_ctor_get(x_437, 0);
lean_dec(x_441);
x_442 = lean_name_eq(x_431, x_432);
lean_dec(x_432);
lean_dec(x_431);
x_443 = l_Bool_toLBool(x_442);
x_444 = lean_box(x_443);
lean_ctor_set(x_437, 0, x_444);
return x_437;
}
else
{
lean_object* x_445; uint8_t x_446; uint8_t x_447; lean_object* x_448; lean_object* x_449; 
x_445 = lean_ctor_get(x_437, 1);
lean_inc(x_445);
lean_dec(x_437);
x_446 = lean_name_eq(x_431, x_432);
lean_dec(x_432);
lean_dec(x_431);
x_447 = l_Bool_toLBool(x_446);
x_448 = lean_box(x_447);
x_449 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_449, 0, x_448);
lean_ctor_set(x_449, 1, x_445);
return x_449;
}
}
else
{
uint8_t x_450; 
lean_dec(x_432);
lean_dec(x_431);
x_450 = !lean_is_exclusive(x_437);
if (x_450 == 0)
{
lean_object* x_451; uint8_t x_452; lean_object* x_453; 
x_451 = lean_ctor_get(x_437, 0);
lean_dec(x_451);
x_452 = 2;
x_453 = lean_box(x_452);
lean_ctor_set(x_437, 0, x_453);
return x_437;
}
else
{
lean_object* x_454; uint8_t x_455; lean_object* x_456; lean_object* x_457; 
x_454 = lean_ctor_get(x_437, 1);
lean_inc(x_454);
lean_dec(x_437);
x_455 = 2;
x_456 = lean_box(x_455);
x_457 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_457, 0, x_456);
lean_ctor_set(x_457, 1, x_454);
return x_457;
}
}
}
else
{
uint8_t x_458; 
lean_dec(x_432);
lean_dec(x_431);
x_458 = !lean_is_exclusive(x_437);
if (x_458 == 0)
{
return x_437;
}
else
{
lean_object* x_459; lean_object* x_460; lean_object* x_461; 
x_459 = lean_ctor_get(x_437, 0);
x_460 = lean_ctor_get(x_437, 1);
lean_inc(x_460);
lean_inc(x_459);
lean_dec(x_437);
x_461 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_461, 0, x_459);
lean_ctor_set(x_461, 1, x_460);
return x_461;
}
}
}
else
{
uint8_t x_462; 
lean_dec(x_432);
lean_dec(x_431);
lean_dec(x_3);
x_462 = !lean_is_exclusive(x_433);
if (x_462 == 0)
{
lean_object* x_463; uint8_t x_464; lean_object* x_465; 
x_463 = lean_ctor_get(x_433, 0);
lean_dec(x_463);
x_464 = 2;
x_465 = lean_box(x_464);
lean_ctor_set(x_433, 0, x_465);
return x_433;
}
else
{
lean_object* x_466; uint8_t x_467; lean_object* x_468; lean_object* x_469; 
x_466 = lean_ctor_get(x_433, 1);
lean_inc(x_466);
lean_dec(x_433);
x_467 = 2;
x_468 = lean_box(x_467);
x_469 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_469, 0, x_468);
lean_ctor_set(x_469, 1, x_466);
return x_469;
}
}
}
else
{
uint8_t x_470; 
lean_dec(x_432);
lean_dec(x_431);
lean_dec(x_3);
x_470 = !lean_is_exclusive(x_433);
if (x_470 == 0)
{
return x_433;
}
else
{
lean_object* x_471; lean_object* x_472; lean_object* x_473; 
x_471 = lean_ctor_get(x_433, 0);
x_472 = lean_ctor_get(x_433, 1);
lean_inc(x_472);
lean_inc(x_471);
lean_dec(x_433);
x_473 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_473, 0, x_471);
lean_ctor_set(x_473, 1, x_472);
return x_473;
}
}
}
case 10:
{
lean_object* x_474; 
x_474 = lean_ctor_get(x_2, 1);
lean_inc(x_474);
lean_dec(x_2);
x_2 = x_474;
goto _start;
}
default: 
{
lean_object* x_476; 
x_476 = lean_box(0);
x_5 = x_476;
goto block_406;
}
}
}
case 3:
{
switch (lean_obj_tag(x_2)) {
case 3:
{
lean_object* x_477; lean_object* x_478; lean_object* x_479; 
x_477 = lean_ctor_get(x_1, 0);
lean_inc(x_477);
lean_dec(x_1);
x_478 = lean_ctor_get(x_2, 0);
lean_inc(x_478);
lean_dec(x_2);
x_479 = l_Lean_Meta_isLevelDefEqAux___main(x_477, x_478, x_3, x_4);
lean_dec(x_3);
if (lean_obj_tag(x_479) == 0)
{
uint8_t x_480; 
x_480 = !lean_is_exclusive(x_479);
if (x_480 == 0)
{
lean_object* x_481; uint8_t x_482; uint8_t x_483; lean_object* x_484; 
x_481 = lean_ctor_get(x_479, 0);
x_482 = lean_unbox(x_481);
lean_dec(x_481);
x_483 = l_Bool_toLBool(x_482);
x_484 = lean_box(x_483);
lean_ctor_set(x_479, 0, x_484);
return x_479;
}
else
{
lean_object* x_485; lean_object* x_486; uint8_t x_487; uint8_t x_488; lean_object* x_489; lean_object* x_490; 
x_485 = lean_ctor_get(x_479, 0);
x_486 = lean_ctor_get(x_479, 1);
lean_inc(x_486);
lean_inc(x_485);
lean_dec(x_479);
x_487 = lean_unbox(x_485);
lean_dec(x_485);
x_488 = l_Bool_toLBool(x_487);
x_489 = lean_box(x_488);
x_490 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_490, 0, x_489);
lean_ctor_set(x_490, 1, x_486);
return x_490;
}
}
else
{
uint8_t x_491; 
x_491 = !lean_is_exclusive(x_479);
if (x_491 == 0)
{
return x_479;
}
else
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; 
x_492 = lean_ctor_get(x_479, 0);
x_493 = lean_ctor_get(x_479, 1);
lean_inc(x_493);
lean_inc(x_492);
lean_dec(x_479);
x_494 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_494, 0, x_492);
lean_ctor_set(x_494, 1, x_493);
return x_494;
}
}
}
case 10:
{
lean_object* x_495; 
x_495 = lean_ctor_get(x_2, 1);
lean_inc(x_495);
lean_dec(x_2);
x_2 = x_495;
goto _start;
}
default: 
{
lean_object* x_497; 
x_497 = lean_box(0);
x_5 = x_497;
goto block_406;
}
}
}
case 6:
{
switch (lean_obj_tag(x_2)) {
case 6:
{
lean_object* x_498; 
x_498 = lean_box(0);
x_407 = x_498;
goto block_430;
}
case 10:
{
lean_object* x_499; 
x_499 = lean_ctor_get(x_2, 1);
lean_inc(x_499);
lean_dec(x_2);
x_2 = x_499;
goto _start;
}
default: 
{
lean_object* x_501; 
x_501 = lean_box(0);
x_5 = x_501;
goto block_406;
}
}
}
case 7:
{
switch (lean_obj_tag(x_2)) {
case 7:
{
lean_object* x_502; 
x_502 = lean_box(0);
x_407 = x_502;
goto block_430;
}
case 10:
{
lean_object* x_503; 
x_503 = lean_ctor_get(x_2, 1);
lean_inc(x_503);
lean_dec(x_2);
x_2 = x_503;
goto _start;
}
default: 
{
lean_object* x_505; 
x_505 = lean_box(0);
x_5 = x_505;
goto block_406;
}
}
}
case 9:
{
switch (lean_obj_tag(x_2)) {
case 9:
{
lean_object* x_506; lean_object* x_507; uint8_t x_508; uint8_t x_509; lean_object* x_510; lean_object* x_511; 
lean_dec(x_3);
x_506 = lean_ctor_get(x_1, 0);
lean_inc(x_506);
lean_dec(x_1);
x_507 = lean_ctor_get(x_2, 0);
lean_inc(x_507);
lean_dec(x_2);
x_508 = l_Lean_Literal_beq(x_506, x_507);
lean_dec(x_507);
lean_dec(x_506);
x_509 = l_Bool_toLBool(x_508);
x_510 = lean_box(x_509);
x_511 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_511, 0, x_510);
lean_ctor_set(x_511, 1, x_4);
return x_511;
}
case 10:
{
lean_object* x_512; 
x_512 = lean_ctor_get(x_2, 1);
lean_inc(x_512);
lean_dec(x_2);
x_2 = x_512;
goto _start;
}
default: 
{
lean_object* x_514; 
x_514 = lean_box(0);
x_5 = x_514;
goto block_406;
}
}
}
case 10:
{
lean_object* x_515; 
x_515 = lean_ctor_get(x_1, 1);
lean_inc(x_515);
lean_dec(x_1);
x_1 = x_515;
goto _start;
}
default: 
{
if (lean_obj_tag(x_2) == 10)
{
lean_object* x_517; 
x_517 = lean_ctor_get(x_2, 1);
lean_inc(x_517);
lean_dec(x_2);
x_2 = x_517;
goto _start;
}
else
{
lean_object* x_519; 
x_519 = lean_box(0);
x_5 = x_519;
goto block_406;
}
}
}
block_406:
{
uint8_t x_6; 
lean_dec(x_5);
x_6 = lean_expr_eqv(x_1, x_2);
if (x_6 == 0)
{
uint8_t x_7; 
lean_inc(x_1);
x_7 = l___private_Init_Lean_Meta_ExprDefEq_36__etaEq(x_1, x_2);
if (x_7 == 0)
{
uint8_t x_8; 
lean_inc(x_2);
x_8 = l___private_Init_Lean_Meta_ExprDefEq_36__etaEq(x_2, x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = l_Lean_Expr_getAppFn___main(x_1);
x_10 = l_Lean_Expr_getAppFn___main(x_2);
x_11 = l_Lean_Expr_isMVar(x_9);
if (x_11 == 0)
{
uint8_t x_391; 
x_391 = l_Lean_Expr_isMVar(x_10);
if (x_391 == 0)
{
uint8_t x_392; lean_object* x_393; lean_object* x_394; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_392 = 2;
x_393 = lean_box(x_392);
x_394 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_394, 0, x_393);
lean_ctor_set(x_394, 1, x_4);
return x_394;
}
else
{
lean_object* x_395; 
x_395 = lean_box(0);
x_12 = x_395;
goto block_390;
}
}
else
{
lean_object* x_396; 
x_396 = lean_box(0);
x_12 = x_396;
goto block_390;
}
block_390:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_12);
lean_inc(x_9);
x_13 = l___private_Init_Lean_Meta_ExprDefEq_33__isAssigned(x_9, x_3, x_4);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; uint8_t x_362; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
lean_inc(x_10);
x_17 = l___private_Init_Lean_Meta_ExprDefEq_33__isAssigned(x_10, x_3, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_362 = lean_unbox(x_18);
lean_dec(x_18);
if (x_362 == 0)
{
lean_object* x_363; 
lean_inc(x_9);
x_363 = l___private_Init_Lean_Meta_ExprDefEq_34__isSynthetic(x_9, x_3, x_19);
if (lean_obj_tag(x_363) == 0)
{
lean_object* x_364; uint8_t x_365; 
x_364 = lean_ctor_get(x_363, 0);
lean_inc(x_364);
x_365 = lean_unbox(x_364);
if (x_365 == 0)
{
lean_object* x_366; uint8_t x_367; 
x_366 = lean_ctor_get(x_363, 1);
lean_inc(x_366);
lean_dec(x_363);
x_367 = lean_unbox(x_364);
lean_dec(x_364);
x_20 = x_367;
x_21 = x_366;
goto block_361;
}
else
{
lean_object* x_368; lean_object* x_369; 
lean_dec(x_364);
x_368 = lean_ctor_get(x_363, 1);
lean_inc(x_368);
lean_dec(x_363);
lean_inc(x_3);
lean_inc(x_9);
x_369 = l_Lean_Meta_synthPending(x_9, x_3, x_368);
if (lean_obj_tag(x_369) == 0)
{
lean_object* x_370; lean_object* x_371; uint8_t x_372; 
x_370 = lean_ctor_get(x_369, 0);
lean_inc(x_370);
x_371 = lean_ctor_get(x_369, 1);
lean_inc(x_371);
lean_dec(x_369);
x_372 = lean_unbox(x_370);
lean_dec(x_370);
x_20 = x_372;
x_21 = x_371;
goto block_361;
}
else
{
uint8_t x_373; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_373 = !lean_is_exclusive(x_369);
if (x_373 == 0)
{
return x_369;
}
else
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; 
x_374 = lean_ctor_get(x_369, 0);
x_375 = lean_ctor_get(x_369, 1);
lean_inc(x_375);
lean_inc(x_374);
lean_dec(x_369);
x_376 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_376, 0, x_374);
lean_ctor_set(x_376, 1, x_375);
return x_376;
}
}
}
}
else
{
uint8_t x_377; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_377 = !lean_is_exclusive(x_363);
if (x_377 == 0)
{
return x_363;
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; 
x_378 = lean_ctor_get(x_363, 0);
x_379 = lean_ctor_get(x_363, 1);
lean_inc(x_379);
lean_inc(x_378);
lean_dec(x_363);
x_380 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_380, 0, x_378);
lean_ctor_set(x_380, 1, x_379);
return x_380;
}
}
}
else
{
lean_object* x_381; lean_object* x_382; lean_object* x_383; 
lean_dec(x_10);
lean_dec(x_9);
x_381 = l_Lean_Meta_instantiateMVars(x_2, x_3, x_19);
x_382 = lean_ctor_get(x_381, 0);
lean_inc(x_382);
x_383 = lean_ctor_get(x_381, 1);
lean_inc(x_383);
lean_dec(x_381);
x_2 = x_382;
x_4 = x_383;
goto _start;
}
block_361:
{
uint8_t x_22; lean_object* x_23; 
if (x_20 == 0)
{
lean_object* x_339; 
lean_inc(x_10);
x_339 = l___private_Init_Lean_Meta_ExprDefEq_34__isSynthetic(x_10, x_3, x_21);
if (lean_obj_tag(x_339) == 0)
{
lean_object* x_340; uint8_t x_341; 
x_340 = lean_ctor_get(x_339, 0);
lean_inc(x_340);
x_341 = lean_unbox(x_340);
if (x_341 == 0)
{
lean_object* x_342; uint8_t x_343; 
x_342 = lean_ctor_get(x_339, 1);
lean_inc(x_342);
lean_dec(x_339);
x_343 = lean_unbox(x_340);
lean_dec(x_340);
x_22 = x_343;
x_23 = x_342;
goto block_338;
}
else
{
lean_object* x_344; lean_object* x_345; 
lean_dec(x_340);
x_344 = lean_ctor_get(x_339, 1);
lean_inc(x_344);
lean_dec(x_339);
lean_inc(x_3);
lean_inc(x_10);
x_345 = l_Lean_Meta_synthPending(x_10, x_3, x_344);
if (lean_obj_tag(x_345) == 0)
{
lean_object* x_346; lean_object* x_347; uint8_t x_348; 
x_346 = lean_ctor_get(x_345, 0);
lean_inc(x_346);
x_347 = lean_ctor_get(x_345, 1);
lean_inc(x_347);
lean_dec(x_345);
x_348 = lean_unbox(x_346);
lean_dec(x_346);
x_22 = x_348;
x_23 = x_347;
goto block_338;
}
else
{
uint8_t x_349; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_349 = !lean_is_exclusive(x_345);
if (x_349 == 0)
{
return x_345;
}
else
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_350 = lean_ctor_get(x_345, 0);
x_351 = lean_ctor_get(x_345, 1);
lean_inc(x_351);
lean_inc(x_350);
lean_dec(x_345);
x_352 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_352, 0, x_350);
lean_ctor_set(x_352, 1, x_351);
return x_352;
}
}
}
}
else
{
uint8_t x_353; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_353 = !lean_is_exclusive(x_339);
if (x_353 == 0)
{
return x_339;
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_354 = lean_ctor_get(x_339, 0);
x_355 = lean_ctor_get(x_339, 1);
lean_inc(x_355);
lean_inc(x_354);
lean_dec(x_339);
x_356 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_356, 0, x_354);
lean_ctor_set(x_356, 1, x_355);
return x_356;
}
}
}
else
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; 
lean_dec(x_10);
lean_dec(x_9);
x_357 = l_Lean_Meta_instantiateMVars(x_1, x_3, x_21);
x_358 = lean_ctor_get(x_357, 0);
lean_inc(x_358);
x_359 = lean_ctor_get(x_357, 1);
lean_inc(x_359);
lean_dec(x_357);
x_1 = x_358;
x_4 = x_359;
goto _start;
}
block_338:
{
if (x_22 == 0)
{
lean_object* x_24; 
lean_inc(x_9);
x_24 = l___private_Init_Lean_Meta_ExprDefEq_35__isAssignable(x_9, x_3, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_10);
x_27 = l___private_Init_Lean_Meta_ExprDefEq_35__isAssignable(x_10, x_3, x_26);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = lean_unbox(x_25);
lean_dec(x_25);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
lean_dec(x_9);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
if (x_11 == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_27);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_27, 1);
x_33 = lean_ctor_get(x_27, 0);
lean_dec(x_33);
x_34 = l_Lean_Expr_isMVar(x_10);
lean_dec(x_10);
if (x_34 == 0)
{
uint8_t x_35; lean_object* x_36; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = 2;
x_36 = lean_box(x_35);
lean_ctor_set(x_27, 0, x_36);
return x_27;
}
else
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
x_38 = lean_ctor_get_uint8(x_37, sizeof(void*)*1 + 3);
lean_dec(x_37);
if (x_38 == 0)
{
uint8_t x_39; lean_object* x_40; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = 0;
x_40 = lean_box(x_39);
lean_ctor_set(x_27, 0, x_40);
return x_27;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_32, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_3, 1);
lean_inc(x_43);
lean_dec(x_3);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
lean_ctor_set(x_44, 2, x_43);
x_45 = lean_alloc_ctor(12, 3, 0);
lean_ctor_set(x_45, 0, x_1);
lean_ctor_set(x_45, 1, x_2);
lean_ctor_set(x_45, 2, x_44);
lean_ctor_set_tag(x_27, 1);
lean_ctor_set(x_27, 0, x_45);
return x_27;
}
}
}
else
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_ctor_get(x_27, 1);
lean_inc(x_46);
lean_dec(x_27);
x_47 = l_Lean_Expr_isMVar(x_10);
lean_dec(x_10);
if (x_47 == 0)
{
uint8_t x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_48 = 2;
x_49 = lean_box(x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_46);
return x_50;
}
else
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_3, 0);
lean_inc(x_51);
x_52 = lean_ctor_get_uint8(x_51, sizeof(void*)*1 + 3);
lean_dec(x_51);
if (x_52 == 0)
{
uint8_t x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = 0;
x_54 = lean_box(x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_46);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_46, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_46, 1);
lean_inc(x_57);
x_58 = lean_ctor_get(x_3, 1);
lean_inc(x_58);
lean_dec(x_3);
x_59 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
lean_ctor_set(x_59, 2, x_58);
x_60 = lean_alloc_ctor(12, 3, 0);
lean_ctor_set(x_60, 0, x_1);
lean_ctor_set(x_60, 1, x_2);
lean_ctor_set(x_60, 2, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_46);
return x_61;
}
}
}
}
else
{
lean_object* x_62; uint8_t x_63; 
lean_dec(x_10);
x_62 = lean_ctor_get(x_3, 0);
lean_inc(x_62);
x_63 = lean_ctor_get_uint8(x_62, sizeof(void*)*1 + 3);
lean_dec(x_62);
if (x_63 == 0)
{
uint8_t x_64; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_64 = !lean_is_exclusive(x_27);
if (x_64 == 0)
{
lean_object* x_65; uint8_t x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_27, 0);
lean_dec(x_65);
x_66 = 0;
x_67 = lean_box(x_66);
lean_ctor_set(x_27, 0, x_67);
return x_27;
}
else
{
lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; 
x_68 = lean_ctor_get(x_27, 1);
lean_inc(x_68);
lean_dec(x_27);
x_69 = 0;
x_70 = lean_box(x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_68);
return x_71;
}
}
else
{
uint8_t x_72; 
x_72 = !lean_is_exclusive(x_27);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_73 = lean_ctor_get(x_27, 1);
x_74 = lean_ctor_get(x_27, 0);
lean_dec(x_74);
x_75 = lean_ctor_get(x_73, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_73, 1);
lean_inc(x_76);
x_77 = lean_ctor_get(x_3, 1);
lean_inc(x_77);
lean_dec(x_3);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
lean_ctor_set(x_78, 2, x_77);
x_79 = lean_alloc_ctor(12, 3, 0);
lean_ctor_set(x_79, 0, x_1);
lean_ctor_set(x_79, 1, x_2);
lean_ctor_set(x_79, 2, x_78);
lean_ctor_set_tag(x_27, 1);
lean_ctor_set(x_27, 0, x_79);
return x_27;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_80 = lean_ctor_get(x_27, 1);
lean_inc(x_80);
lean_dec(x_27);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
x_83 = lean_ctor_get(x_3, 1);
lean_inc(x_83);
lean_dec(x_3);
x_84 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
lean_ctor_set(x_84, 2, x_83);
x_85 = lean_alloc_ctor(12, 3, 0);
lean_ctor_set(x_85, 0, x_1);
lean_ctor_set(x_85, 1, x_2);
lean_ctor_set(x_85, 2, x_84);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_80);
return x_86;
}
}
}
}
else
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_10);
x_87 = lean_ctor_get(x_27, 1);
lean_inc(x_87);
lean_dec(x_27);
x_88 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_2, x_1, x_3, x_87);
if (lean_obj_tag(x_88) == 0)
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
lean_object* x_90; uint8_t x_91; uint8_t x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_88, 0);
x_91 = lean_unbox(x_90);
lean_dec(x_90);
x_92 = l_Bool_toLBool(x_91);
x_93 = lean_box(x_92);
lean_ctor_set(x_88, 0, x_93);
return x_88;
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; uint8_t x_97; lean_object* x_98; lean_object* x_99; 
x_94 = lean_ctor_get(x_88, 0);
x_95 = lean_ctor_get(x_88, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_88);
x_96 = lean_unbox(x_94);
lean_dec(x_94);
x_97 = l_Bool_toLBool(x_96);
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_95);
return x_99;
}
}
else
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_88);
if (x_100 == 0)
{
return x_88;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_88, 0);
x_102 = lean_ctor_get(x_88, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_88);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
}
else
{
lean_object* x_104; uint8_t x_105; 
x_104 = lean_ctor_get(x_27, 0);
lean_inc(x_104);
x_105 = lean_unbox(x_104);
lean_dec(x_104);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
lean_dec(x_10);
lean_dec(x_9);
x_106 = lean_ctor_get(x_27, 1);
lean_inc(x_106);
lean_dec(x_27);
x_107 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_1, x_2, x_3, x_106);
if (lean_obj_tag(x_107) == 0)
{
uint8_t x_108; 
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
lean_object* x_109; uint8_t x_110; uint8_t x_111; lean_object* x_112; 
x_109 = lean_ctor_get(x_107, 0);
x_110 = lean_unbox(x_109);
lean_dec(x_109);
x_111 = l_Bool_toLBool(x_110);
x_112 = lean_box(x_111);
lean_ctor_set(x_107, 0, x_112);
return x_107;
}
else
{
lean_object* x_113; lean_object* x_114; uint8_t x_115; uint8_t x_116; lean_object* x_117; lean_object* x_118; 
x_113 = lean_ctor_get(x_107, 0);
x_114 = lean_ctor_get(x_107, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_107);
x_115 = lean_unbox(x_113);
lean_dec(x_113);
x_116 = l_Bool_toLBool(x_115);
x_117 = lean_box(x_116);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_114);
return x_118;
}
}
else
{
uint8_t x_119; 
x_119 = !lean_is_exclusive(x_107);
if (x_119 == 0)
{
return x_107;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_107, 0);
x_121 = lean_ctor_get(x_107, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_107);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_27, 1);
lean_inc(x_123);
lean_dec(x_27);
x_124 = l_Lean_Expr_mvarId_x21(x_9);
lean_dec(x_9);
x_125 = l_Lean_Meta_getMVarDecl(x_124, x_3, x_123);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = l_Lean_Expr_mvarId_x21(x_10);
lean_dec(x_10);
x_129 = l_Lean_Meta_getMVarDecl(x_128, x_3, x_127);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = lean_ctor_get(x_126, 1);
lean_inc(x_133);
lean_dec(x_126);
lean_inc(x_133);
lean_inc(x_132);
x_134 = l_Lean_LocalContext_isSubPrefixOf(x_132, x_133);
if (x_134 == 0)
{
lean_object* x_135; 
lean_dec(x_133);
lean_dec(x_132);
x_135 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_2, x_1, x_3, x_131);
if (lean_obj_tag(x_135) == 0)
{
uint8_t x_136; 
x_136 = !lean_is_exclusive(x_135);
if (x_136 == 0)
{
lean_object* x_137; uint8_t x_138; uint8_t x_139; lean_object* x_140; 
x_137 = lean_ctor_get(x_135, 0);
x_138 = lean_unbox(x_137);
lean_dec(x_137);
x_139 = l_Bool_toLBool(x_138);
x_140 = lean_box(x_139);
lean_ctor_set(x_135, 0, x_140);
return x_135;
}
else
{
lean_object* x_141; lean_object* x_142; uint8_t x_143; uint8_t x_144; lean_object* x_145; lean_object* x_146; 
x_141 = lean_ctor_get(x_135, 0);
x_142 = lean_ctor_get(x_135, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_135);
x_143 = lean_unbox(x_141);
lean_dec(x_141);
x_144 = l_Bool_toLBool(x_143);
x_145 = lean_box(x_144);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_142);
return x_146;
}
}
else
{
uint8_t x_147; 
x_147 = !lean_is_exclusive(x_135);
if (x_147 == 0)
{
return x_135;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_135, 0);
x_149 = lean_ctor_get(x_135, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_135);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
else
{
uint8_t x_151; uint8_t x_152; 
x_151 = l_Lean_Expr_isApp(x_1);
if (x_151 == 0)
{
uint8_t x_301; 
x_301 = l_Lean_Expr_isApp(x_2);
if (x_301 == 0)
{
x_152 = x_301;
goto block_300;
}
else
{
lean_object* x_302; 
lean_dec(x_133);
lean_dec(x_132);
x_302 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_1, x_2, x_3, x_131);
if (lean_obj_tag(x_302) == 0)
{
uint8_t x_303; 
x_303 = !lean_is_exclusive(x_302);
if (x_303 == 0)
{
lean_object* x_304; uint8_t x_305; uint8_t x_306; lean_object* x_307; 
x_304 = lean_ctor_get(x_302, 0);
x_305 = lean_unbox(x_304);
lean_dec(x_304);
x_306 = l_Bool_toLBool(x_305);
x_307 = lean_box(x_306);
lean_ctor_set(x_302, 0, x_307);
return x_302;
}
else
{
lean_object* x_308; lean_object* x_309; uint8_t x_310; uint8_t x_311; lean_object* x_312; lean_object* x_313; 
x_308 = lean_ctor_get(x_302, 0);
x_309 = lean_ctor_get(x_302, 1);
lean_inc(x_309);
lean_inc(x_308);
lean_dec(x_302);
x_310 = lean_unbox(x_308);
lean_dec(x_308);
x_311 = l_Bool_toLBool(x_310);
x_312 = lean_box(x_311);
x_313 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_313, 0, x_312);
lean_ctor_set(x_313, 1, x_309);
return x_313;
}
}
else
{
uint8_t x_314; 
x_314 = !lean_is_exclusive(x_302);
if (x_314 == 0)
{
return x_302;
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_315 = lean_ctor_get(x_302, 0);
x_316 = lean_ctor_get(x_302, 1);
lean_inc(x_316);
lean_inc(x_315);
lean_dec(x_302);
x_317 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_317, 0, x_315);
lean_ctor_set(x_317, 1, x_316);
return x_317;
}
}
}
}
else
{
x_152 = x_22;
goto block_300;
}
block_300:
{
uint8_t x_153; 
x_153 = l_Lean_Expr_isApp(x_2);
if (x_153 == 0)
{
if (x_151 == 0)
{
lean_dec(x_133);
lean_dec(x_132);
if (x_152 == 0)
{
lean_object* x_154; 
x_154 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_1, x_2, x_3, x_131);
if (lean_obj_tag(x_154) == 0)
{
uint8_t x_155; 
x_155 = !lean_is_exclusive(x_154);
if (x_155 == 0)
{
lean_object* x_156; uint8_t x_157; uint8_t x_158; lean_object* x_159; 
x_156 = lean_ctor_get(x_154, 0);
x_157 = lean_unbox(x_156);
lean_dec(x_156);
x_158 = l_Bool_toLBool(x_157);
x_159 = lean_box(x_158);
lean_ctor_set(x_154, 0, x_159);
return x_154;
}
else
{
lean_object* x_160; lean_object* x_161; uint8_t x_162; uint8_t x_163; lean_object* x_164; lean_object* x_165; 
x_160 = lean_ctor_get(x_154, 0);
x_161 = lean_ctor_get(x_154, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_154);
x_162 = lean_unbox(x_160);
lean_dec(x_160);
x_163 = l_Bool_toLBool(x_162);
x_164 = lean_box(x_163);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_161);
return x_165;
}
}
else
{
uint8_t x_166; 
x_166 = !lean_is_exclusive(x_154);
if (x_166 == 0)
{
return x_154;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_167 = lean_ctor_get(x_154, 0);
x_168 = lean_ctor_get(x_154, 1);
lean_inc(x_168);
lean_inc(x_167);
lean_dec(x_154);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
return x_169;
}
}
}
else
{
lean_object* x_170; 
x_170 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_2, x_1, x_3, x_131);
if (lean_obj_tag(x_170) == 0)
{
uint8_t x_171; 
x_171 = !lean_is_exclusive(x_170);
if (x_171 == 0)
{
lean_object* x_172; uint8_t x_173; uint8_t x_174; lean_object* x_175; 
x_172 = lean_ctor_get(x_170, 0);
x_173 = lean_unbox(x_172);
lean_dec(x_172);
x_174 = l_Bool_toLBool(x_173);
x_175 = lean_box(x_174);
lean_ctor_set(x_170, 0, x_175);
return x_170;
}
else
{
lean_object* x_176; lean_object* x_177; uint8_t x_178; uint8_t x_179; lean_object* x_180; lean_object* x_181; 
x_176 = lean_ctor_get(x_170, 0);
x_177 = lean_ctor_get(x_170, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_170);
x_178 = lean_unbox(x_176);
lean_dec(x_176);
x_179 = l_Bool_toLBool(x_178);
x_180 = lean_box(x_179);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_177);
return x_181;
}
}
else
{
uint8_t x_182; 
x_182 = !lean_is_exclusive(x_170);
if (x_182 == 0)
{
return x_170;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_183 = lean_ctor_get(x_170, 0);
x_184 = lean_ctor_get(x_170, 1);
lean_inc(x_184);
lean_inc(x_183);
lean_dec(x_170);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
return x_185;
}
}
}
}
else
{
uint8_t x_186; 
x_186 = l_Lean_LocalContext_isSubPrefixOf(x_133, x_132);
if (x_186 == 0)
{
lean_object* x_187; 
x_187 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_1, x_2, x_3, x_131);
if (lean_obj_tag(x_187) == 0)
{
uint8_t x_188; 
x_188 = !lean_is_exclusive(x_187);
if (x_188 == 0)
{
lean_object* x_189; uint8_t x_190; uint8_t x_191; lean_object* x_192; 
x_189 = lean_ctor_get(x_187, 0);
x_190 = lean_unbox(x_189);
lean_dec(x_189);
x_191 = l_Bool_toLBool(x_190);
x_192 = lean_box(x_191);
lean_ctor_set(x_187, 0, x_192);
return x_187;
}
else
{
lean_object* x_193; lean_object* x_194; uint8_t x_195; uint8_t x_196; lean_object* x_197; lean_object* x_198; 
x_193 = lean_ctor_get(x_187, 0);
x_194 = lean_ctor_get(x_187, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_187);
x_195 = lean_unbox(x_193);
lean_dec(x_193);
x_196 = l_Bool_toLBool(x_195);
x_197 = lean_box(x_196);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_194);
return x_198;
}
}
else
{
uint8_t x_199; 
x_199 = !lean_is_exclusive(x_187);
if (x_199 == 0)
{
return x_187;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_187, 0);
x_201 = lean_ctor_get(x_187, 1);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_187);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_201);
return x_202;
}
}
}
else
{
lean_object* x_203; 
x_203 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_2, x_1, x_3, x_131);
if (lean_obj_tag(x_203) == 0)
{
uint8_t x_204; 
x_204 = !lean_is_exclusive(x_203);
if (x_204 == 0)
{
lean_object* x_205; uint8_t x_206; uint8_t x_207; lean_object* x_208; 
x_205 = lean_ctor_get(x_203, 0);
x_206 = lean_unbox(x_205);
lean_dec(x_205);
x_207 = l_Bool_toLBool(x_206);
x_208 = lean_box(x_207);
lean_ctor_set(x_203, 0, x_208);
return x_203;
}
else
{
lean_object* x_209; lean_object* x_210; uint8_t x_211; uint8_t x_212; lean_object* x_213; lean_object* x_214; 
x_209 = lean_ctor_get(x_203, 0);
x_210 = lean_ctor_get(x_203, 1);
lean_inc(x_210);
lean_inc(x_209);
lean_dec(x_203);
x_211 = lean_unbox(x_209);
lean_dec(x_209);
x_212 = l_Bool_toLBool(x_211);
x_213 = lean_box(x_212);
x_214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_210);
return x_214;
}
}
else
{
uint8_t x_215; 
x_215 = !lean_is_exclusive(x_203);
if (x_215 == 0)
{
return x_203;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_216 = lean_ctor_get(x_203, 0);
x_217 = lean_ctor_get(x_203, 1);
lean_inc(x_217);
lean_inc(x_216);
lean_dec(x_203);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_216);
lean_ctor_set(x_218, 1, x_217);
return x_218;
}
}
}
}
}
else
{
if (x_152 == 0)
{
lean_object* x_219; 
lean_dec(x_133);
lean_dec(x_132);
x_219 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_1, x_2, x_3, x_131);
if (lean_obj_tag(x_219) == 0)
{
uint8_t x_220; 
x_220 = !lean_is_exclusive(x_219);
if (x_220 == 0)
{
lean_object* x_221; uint8_t x_222; uint8_t x_223; lean_object* x_224; 
x_221 = lean_ctor_get(x_219, 0);
x_222 = lean_unbox(x_221);
lean_dec(x_221);
x_223 = l_Bool_toLBool(x_222);
x_224 = lean_box(x_223);
lean_ctor_set(x_219, 0, x_224);
return x_219;
}
else
{
lean_object* x_225; lean_object* x_226; uint8_t x_227; uint8_t x_228; lean_object* x_229; lean_object* x_230; 
x_225 = lean_ctor_get(x_219, 0);
x_226 = lean_ctor_get(x_219, 1);
lean_inc(x_226);
lean_inc(x_225);
lean_dec(x_219);
x_227 = lean_unbox(x_225);
lean_dec(x_225);
x_228 = l_Bool_toLBool(x_227);
x_229 = lean_box(x_228);
x_230 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_226);
return x_230;
}
}
else
{
uint8_t x_231; 
x_231 = !lean_is_exclusive(x_219);
if (x_231 == 0)
{
return x_219;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_232 = lean_ctor_get(x_219, 0);
x_233 = lean_ctor_get(x_219, 1);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_219);
x_234 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_234, 0, x_232);
lean_ctor_set(x_234, 1, x_233);
return x_234;
}
}
}
else
{
if (x_151 == 0)
{
lean_dec(x_133);
lean_dec(x_132);
if (x_152 == 0)
{
lean_object* x_235; 
x_235 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_1, x_2, x_3, x_131);
if (lean_obj_tag(x_235) == 0)
{
uint8_t x_236; 
x_236 = !lean_is_exclusive(x_235);
if (x_236 == 0)
{
lean_object* x_237; uint8_t x_238; uint8_t x_239; lean_object* x_240; 
x_237 = lean_ctor_get(x_235, 0);
x_238 = lean_unbox(x_237);
lean_dec(x_237);
x_239 = l_Bool_toLBool(x_238);
x_240 = lean_box(x_239);
lean_ctor_set(x_235, 0, x_240);
return x_235;
}
else
{
lean_object* x_241; lean_object* x_242; uint8_t x_243; uint8_t x_244; lean_object* x_245; lean_object* x_246; 
x_241 = lean_ctor_get(x_235, 0);
x_242 = lean_ctor_get(x_235, 1);
lean_inc(x_242);
lean_inc(x_241);
lean_dec(x_235);
x_243 = lean_unbox(x_241);
lean_dec(x_241);
x_244 = l_Bool_toLBool(x_243);
x_245 = lean_box(x_244);
x_246 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_242);
return x_246;
}
}
else
{
uint8_t x_247; 
x_247 = !lean_is_exclusive(x_235);
if (x_247 == 0)
{
return x_235;
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_248 = lean_ctor_get(x_235, 0);
x_249 = lean_ctor_get(x_235, 1);
lean_inc(x_249);
lean_inc(x_248);
lean_dec(x_235);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_248);
lean_ctor_set(x_250, 1, x_249);
return x_250;
}
}
}
else
{
lean_object* x_251; 
x_251 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_2, x_1, x_3, x_131);
if (lean_obj_tag(x_251) == 0)
{
uint8_t x_252; 
x_252 = !lean_is_exclusive(x_251);
if (x_252 == 0)
{
lean_object* x_253; uint8_t x_254; uint8_t x_255; lean_object* x_256; 
x_253 = lean_ctor_get(x_251, 0);
x_254 = lean_unbox(x_253);
lean_dec(x_253);
x_255 = l_Bool_toLBool(x_254);
x_256 = lean_box(x_255);
lean_ctor_set(x_251, 0, x_256);
return x_251;
}
else
{
lean_object* x_257; lean_object* x_258; uint8_t x_259; uint8_t x_260; lean_object* x_261; lean_object* x_262; 
x_257 = lean_ctor_get(x_251, 0);
x_258 = lean_ctor_get(x_251, 1);
lean_inc(x_258);
lean_inc(x_257);
lean_dec(x_251);
x_259 = lean_unbox(x_257);
lean_dec(x_257);
x_260 = l_Bool_toLBool(x_259);
x_261 = lean_box(x_260);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_258);
return x_262;
}
}
else
{
uint8_t x_263; 
x_263 = !lean_is_exclusive(x_251);
if (x_263 == 0)
{
return x_251;
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_264 = lean_ctor_get(x_251, 0);
x_265 = lean_ctor_get(x_251, 1);
lean_inc(x_265);
lean_inc(x_264);
lean_dec(x_251);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
return x_266;
}
}
}
}
else
{
uint8_t x_267; 
x_267 = l_Lean_LocalContext_isSubPrefixOf(x_133, x_132);
if (x_267 == 0)
{
lean_object* x_268; 
x_268 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_1, x_2, x_3, x_131);
if (lean_obj_tag(x_268) == 0)
{
uint8_t x_269; 
x_269 = !lean_is_exclusive(x_268);
if (x_269 == 0)
{
lean_object* x_270; uint8_t x_271; uint8_t x_272; lean_object* x_273; 
x_270 = lean_ctor_get(x_268, 0);
x_271 = lean_unbox(x_270);
lean_dec(x_270);
x_272 = l_Bool_toLBool(x_271);
x_273 = lean_box(x_272);
lean_ctor_set(x_268, 0, x_273);
return x_268;
}
else
{
lean_object* x_274; lean_object* x_275; uint8_t x_276; uint8_t x_277; lean_object* x_278; lean_object* x_279; 
x_274 = lean_ctor_get(x_268, 0);
x_275 = lean_ctor_get(x_268, 1);
lean_inc(x_275);
lean_inc(x_274);
lean_dec(x_268);
x_276 = lean_unbox(x_274);
lean_dec(x_274);
x_277 = l_Bool_toLBool(x_276);
x_278 = lean_box(x_277);
x_279 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_279, 0, x_278);
lean_ctor_set(x_279, 1, x_275);
return x_279;
}
}
else
{
uint8_t x_280; 
x_280 = !lean_is_exclusive(x_268);
if (x_280 == 0)
{
return x_268;
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_281 = lean_ctor_get(x_268, 0);
x_282 = lean_ctor_get(x_268, 1);
lean_inc(x_282);
lean_inc(x_281);
lean_dec(x_268);
x_283 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_283, 0, x_281);
lean_ctor_set(x_283, 1, x_282);
return x_283;
}
}
}
else
{
lean_object* x_284; 
x_284 = l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment(x_2, x_1, x_3, x_131);
if (lean_obj_tag(x_284) == 0)
{
uint8_t x_285; 
x_285 = !lean_is_exclusive(x_284);
if (x_285 == 0)
{
lean_object* x_286; uint8_t x_287; uint8_t x_288; lean_object* x_289; 
x_286 = lean_ctor_get(x_284, 0);
x_287 = lean_unbox(x_286);
lean_dec(x_286);
x_288 = l_Bool_toLBool(x_287);
x_289 = lean_box(x_288);
lean_ctor_set(x_284, 0, x_289);
return x_284;
}
else
{
lean_object* x_290; lean_object* x_291; uint8_t x_292; uint8_t x_293; lean_object* x_294; lean_object* x_295; 
x_290 = lean_ctor_get(x_284, 0);
x_291 = lean_ctor_get(x_284, 1);
lean_inc(x_291);
lean_inc(x_290);
lean_dec(x_284);
x_292 = lean_unbox(x_290);
lean_dec(x_290);
x_293 = l_Bool_toLBool(x_292);
x_294 = lean_box(x_293);
x_295 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_295, 0, x_294);
lean_ctor_set(x_295, 1, x_291);
return x_295;
}
}
else
{
uint8_t x_296; 
x_296 = !lean_is_exclusive(x_284);
if (x_296 == 0)
{
return x_284;
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_297 = lean_ctor_get(x_284, 0);
x_298 = lean_ctor_get(x_284, 1);
lean_inc(x_298);
lean_inc(x_297);
lean_dec(x_284);
x_299 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_299, 0, x_297);
lean_ctor_set(x_299, 1, x_298);
return x_299;
}
}
}
}
}
}
}
}
}
else
{
uint8_t x_318; 
lean_dec(x_126);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_318 = !lean_is_exclusive(x_129);
if (x_318 == 0)
{
return x_129;
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_319 = lean_ctor_get(x_129, 0);
x_320 = lean_ctor_get(x_129, 1);
lean_inc(x_320);
lean_inc(x_319);
lean_dec(x_129);
x_321 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_321, 0, x_319);
lean_ctor_set(x_321, 1, x_320);
return x_321;
}
}
}
else
{
uint8_t x_322; 
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_322 = !lean_is_exclusive(x_125);
if (x_322 == 0)
{
return x_125;
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; 
x_323 = lean_ctor_get(x_125, 0);
x_324 = lean_ctor_get(x_125, 1);
lean_inc(x_324);
lean_inc(x_323);
lean_dec(x_125);
x_325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_325, 0, x_323);
lean_ctor_set(x_325, 1, x_324);
return x_325;
}
}
}
}
}
else
{
uint8_t x_326; 
lean_dec(x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_326 = !lean_is_exclusive(x_27);
if (x_326 == 0)
{
return x_27;
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_327 = lean_ctor_get(x_27, 0);
x_328 = lean_ctor_get(x_27, 1);
lean_inc(x_328);
lean_inc(x_327);
lean_dec(x_27);
x_329 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_329, 0, x_327);
lean_ctor_set(x_329, 1, x_328);
return x_329;
}
}
}
else
{
uint8_t x_330; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_330 = !lean_is_exclusive(x_24);
if (x_330 == 0)
{
return x_24;
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_331 = lean_ctor_get(x_24, 0);
x_332 = lean_ctor_get(x_24, 1);
lean_inc(x_332);
lean_inc(x_331);
lean_dec(x_24);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_331);
lean_ctor_set(x_333, 1, x_332);
return x_333;
}
}
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; 
lean_dec(x_10);
lean_dec(x_9);
x_334 = l_Lean_Meta_instantiateMVars(x_2, x_3, x_23);
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_334, 1);
lean_inc(x_336);
lean_dec(x_334);
x_2 = x_335;
x_4 = x_336;
goto _start;
}
}
}
}
else
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; 
lean_dec(x_10);
lean_dec(x_9);
x_385 = lean_ctor_get(x_13, 1);
lean_inc(x_385);
lean_dec(x_13);
x_386 = l_Lean_Meta_instantiateMVars(x_1, x_3, x_385);
x_387 = lean_ctor_get(x_386, 0);
lean_inc(x_387);
x_388 = lean_ctor_get(x_386, 1);
lean_inc(x_388);
lean_dec(x_386);
x_1 = x_387;
x_4 = x_388;
goto _start;
}
}
}
else
{
uint8_t x_397; lean_object* x_398; lean_object* x_399; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_397 = 1;
x_398 = lean_box(x_397);
x_399 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_399, 0, x_398);
lean_ctor_set(x_399, 1, x_4);
return x_399;
}
}
else
{
uint8_t x_400; lean_object* x_401; lean_object* x_402; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_400 = 1;
x_401 = lean_box(x_400);
x_402 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_4);
return x_402;
}
}
else
{
uint8_t x_403; lean_object* x_404; lean_object* x_405; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_403 = 1;
x_404 = lean_box(x_403);
x_405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_405, 0, x_404);
lean_ctor_set(x_405, 1, x_4);
return x_405;
}
}
block_430:
{
uint8_t x_408; 
lean_dec(x_407);
x_408 = lean_expr_eqv(x_1, x_2);
if (x_408 == 0)
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; 
x_409 = lean_ctor_get(x_3, 1);
lean_inc(x_409);
x_410 = l_Array_empty___closed__1;
x_411 = l___private_Init_Lean_Meta_ExprDefEq_5__isDefEqBindingAux___main(x_409, x_410, x_1, x_2, x_410, x_3, x_4);
lean_dec(x_2);
if (lean_obj_tag(x_411) == 0)
{
uint8_t x_412; 
x_412 = !lean_is_exclusive(x_411);
if (x_412 == 0)
{
lean_object* x_413; uint8_t x_414; uint8_t x_415; lean_object* x_416; 
x_413 = lean_ctor_get(x_411, 0);
x_414 = lean_unbox(x_413);
lean_dec(x_413);
x_415 = l_Bool_toLBool(x_414);
x_416 = lean_box(x_415);
lean_ctor_set(x_411, 0, x_416);
return x_411;
}
else
{
lean_object* x_417; lean_object* x_418; uint8_t x_419; uint8_t x_420; lean_object* x_421; lean_object* x_422; 
x_417 = lean_ctor_get(x_411, 0);
x_418 = lean_ctor_get(x_411, 1);
lean_inc(x_418);
lean_inc(x_417);
lean_dec(x_411);
x_419 = lean_unbox(x_417);
lean_dec(x_417);
x_420 = l_Bool_toLBool(x_419);
x_421 = lean_box(x_420);
x_422 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_422, 0, x_421);
lean_ctor_set(x_422, 1, x_418);
return x_422;
}
}
else
{
uint8_t x_423; 
x_423 = !lean_is_exclusive(x_411);
if (x_423 == 0)
{
return x_411;
}
else
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; 
x_424 = lean_ctor_get(x_411, 0);
x_425 = lean_ctor_get(x_411, 1);
lean_inc(x_425);
lean_inc(x_424);
lean_dec(x_411);
x_426 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_426, 0, x_424);
lean_ctor_set(x_426, 1, x_425);
return x_426;
}
}
}
else
{
uint8_t x_427; lean_object* x_428; lean_object* x_429; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_427 = 1;
x_428 = lean_box(x_427);
x_429 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_429, 0, x_428);
lean_ctor_set(x_429, 1, x_4);
return x_429;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_38__isDefEqQuick(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_ExprDefEq_38__isDefEqQuick___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_39__isDefEqProofIrrel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_1);
x_5 = l_Lean_Meta_isProofQuick___main(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_unbox(x_6);
switch (x_7) {
case 0:
{
uint8_t x_8; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_5, 0);
lean_dec(x_9);
x_10 = 2;
x_11 = lean_box(x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
x_13 = 2;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_dec(x_5);
lean_inc(x_3);
x_17 = l_Lean_Meta_inferType(x_1, x_3, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_3);
x_20 = l_Lean_Meta_inferType(x_2, x_3, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Meta_isExprDefEqAux(x_18, x_21, x_3, x_22);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; uint8_t x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
x_27 = l_Bool_toLBool(x_26);
x_28 = lean_box(x_27);
lean_ctor_set(x_23, 0, x_28);
return x_23;
}
else
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_23, 0);
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_23);
x_31 = lean_unbox(x_29);
lean_dec(x_29);
x_32 = l_Bool_toLBool(x_31);
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_30);
return x_34;
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_23);
if (x_35 == 0)
{
return x_23;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_23, 0);
x_37 = lean_ctor_get(x_23, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_23);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_18);
lean_dec(x_3);
x_39 = !lean_is_exclusive(x_20);
if (x_39 == 0)
{
return x_20;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_20, 0);
x_41 = lean_ctor_get(x_20, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_20);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_3);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_17);
if (x_43 == 0)
{
return x_17;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_17, 0);
x_45 = lean_ctor_get(x_17, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_17);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
default: 
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_5, 1);
lean_inc(x_47);
lean_dec(x_5);
lean_inc(x_3);
x_48 = l_Lean_Meta_inferType(x_1, x_3, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
lean_inc(x_3);
lean_inc(x_49);
x_51 = l_Lean_Meta_isProp(x_49, x_3, x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_unbox(x_52);
lean_dec(x_52);
if (x_53 == 0)
{
uint8_t x_54; 
lean_dec(x_49);
lean_dec(x_3);
lean_dec(x_2);
x_54 = !lean_is_exclusive(x_51);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_51, 0);
lean_dec(x_55);
lean_ctor_set(x_51, 0, x_6);
return x_51;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_dec(x_51);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_6);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_6);
x_58 = lean_ctor_get(x_51, 1);
lean_inc(x_58);
lean_dec(x_51);
lean_inc(x_3);
x_59 = l_Lean_Meta_inferType(x_2, x_3, x_58);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = l_Lean_Meta_isExprDefEqAux(x_49, x_60, x_3, x_61);
if (lean_obj_tag(x_62) == 0)
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_62);
if (x_63 == 0)
{
lean_object* x_64; uint8_t x_65; uint8_t x_66; lean_object* x_67; 
x_64 = lean_ctor_get(x_62, 0);
x_65 = lean_unbox(x_64);
lean_dec(x_64);
x_66 = l_Bool_toLBool(x_65);
x_67 = lean_box(x_66);
lean_ctor_set(x_62, 0, x_67);
return x_62;
}
else
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; 
x_68 = lean_ctor_get(x_62, 0);
x_69 = lean_ctor_get(x_62, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_62);
x_70 = lean_unbox(x_68);
lean_dec(x_68);
x_71 = l_Bool_toLBool(x_70);
x_72 = lean_box(x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_69);
return x_73;
}
}
else
{
uint8_t x_74; 
x_74 = !lean_is_exclusive(x_62);
if (x_74 == 0)
{
return x_62;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_62, 0);
x_76 = lean_ctor_get(x_62, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_62);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_49);
lean_dec(x_3);
x_78 = !lean_is_exclusive(x_59);
if (x_78 == 0)
{
return x_59;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_59, 0);
x_80 = lean_ctor_get(x_59, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_59);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_49);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_82 = !lean_is_exclusive(x_51);
if (x_82 == 0)
{
return x_51;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_51, 0);
x_84 = lean_ctor_get(x_51, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_51);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_86 = !lean_is_exclusive(x_48);
if (x_86 == 0)
{
return x_48;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_48, 0);
x_88 = lean_ctor_get(x_48, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_48);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_90 = !lean_is_exclusive(x_5);
if (x_90 == 0)
{
return x_5;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_5, 0);
x_92 = lean_ctor_get(x_5, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_5);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
}
lean_object* l_Lean_Meta_tryL(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = lean_apply_2(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
switch (x_7) {
case 0:
{
uint8_t x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_5, 0);
lean_dec(x_9);
x_10 = 0;
x_11 = lean_box(x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
}
case 1:
{
uint8_t x_16; 
lean_dec(x_3);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_5);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_5, 0);
lean_dec(x_17);
x_18 = 1;
x_19 = lean_box(x_18);
lean_ctor_set(x_5, 0, x_19);
return x_5;
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_dec(x_5);
x_21 = 1;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
default: 
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_dec(x_5);
x_25 = lean_apply_2(x_2, x_3, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_3);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_5);
if (x_26 == 0)
{
return x_5;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_5, 0);
x_28 = lean_ctor_get(x_5, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_5);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_40__isDefEqWHNF(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_1);
x_6 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_1, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_4);
lean_inc(x_2);
x_9 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_2, x_4, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_expr_eqv(x_1, x_7);
lean_dec(x_1);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_2);
lean_inc(x_4);
lean_inc(x_10);
lean_inc(x_7);
x_13 = l___private_Init_Lean_Meta_ExprDefEq_38__isDefEqQuick___main(x_7, x_10, x_4, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
switch (x_15) {
case 0:
{
uint8_t x_16; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
lean_dec(x_17);
x_18 = 0;
x_19 = lean_box(x_18);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_dec(x_13);
x_21 = 0;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
case 1:
{
uint8_t x_24; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_13);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_13, 0);
lean_dec(x_25);
x_26 = 1;
x_27 = lean_box(x_26);
lean_ctor_set(x_13, 0, x_27);
return x_13;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_dec(x_13);
x_29 = 1;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
default: 
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_13, 1);
lean_inc(x_32);
lean_dec(x_13);
x_33 = lean_apply_4(x_3, x_7, x_10, x_4, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_34 = !lean_is_exclusive(x_13);
if (x_34 == 0)
{
return x_13;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_13, 0);
x_36 = lean_ctor_get(x_13, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_13);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
x_38 = lean_expr_eqv(x_2, x_10);
lean_dec(x_2);
if (x_38 == 0)
{
lean_object* x_39; 
lean_inc(x_4);
lean_inc(x_10);
lean_inc(x_7);
x_39 = l___private_Init_Lean_Meta_ExprDefEq_38__isDefEqQuick___main(x_7, x_10, x_4, x_11);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_unbox(x_40);
lean_dec(x_40);
switch (x_41) {
case 0:
{
uint8_t x_42; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_42 = !lean_is_exclusive(x_39);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_39, 0);
lean_dec(x_43);
x_44 = 0;
x_45 = lean_box(x_44);
lean_ctor_set(x_39, 0, x_45);
return x_39;
}
else
{
lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_39, 1);
lean_inc(x_46);
lean_dec(x_39);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
}
case 1:
{
uint8_t x_50; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_50 = !lean_is_exclusive(x_39);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_39, 0);
lean_dec(x_51);
x_52 = 1;
x_53 = lean_box(x_52);
lean_ctor_set(x_39, 0, x_53);
return x_39;
}
else
{
lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_39, 1);
lean_inc(x_54);
lean_dec(x_39);
x_55 = 1;
x_56 = lean_box(x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
}
default: 
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_39, 1);
lean_inc(x_58);
lean_dec(x_39);
x_59 = lean_apply_4(x_3, x_7, x_10, x_4, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_60 = !lean_is_exclusive(x_39);
if (x_60 == 0)
{
return x_39;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_39, 0);
x_62 = lean_ctor_get(x_39, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_39);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
lean_object* x_64; 
x_64 = lean_apply_4(x_3, x_7, x_10, x_4, x_11);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
else
{
uint8_t x_69; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_6);
if (x_69 == 0)
{
return x_6;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_6, 0);
x_71 = lean_ctor_get(x_6, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_6);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_getConst___boxed), 3, 0);
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_whnf), 3, 0);
return x_1;
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l___private_Init_Lean_Meta_Check_2__checkLambdaLet___lambda__2___closed__1;
x_7 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__1;
x_8 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__2;
lean_inc(x_1);
x_9 = l_Lean_WHNF_getStuckMVar___main___rarg(x_6, x_7, x_8, x_1);
lean_inc(x_4);
x_10 = lean_apply_2(x_9, x_4, x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_apply_2(x_3, x_4, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec(x_11);
lean_inc(x_4);
x_16 = l_Lean_Meta_synthPending(x_15, x_4, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_apply_2(x_3, x_4, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
x_22 = l_Lean_Meta_instantiateMVars(x_1, x_4, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_apply_3(x_2, x_23, x_4, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_16);
if (x_26 == 0)
{
return x_16;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_10);
if (x_30 == 0)
{
return x_10;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_10, 0);
x_32 = lean_ctor_get(x_10, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_10);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Lean_WHNF_isQuotRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_21; lean_object* x_22; 
x_21 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_22 = lean_box(x_21);
switch (lean_obj_tag(x_22)) {
case 2:
{
lean_object* x_23; 
x_23 = lean_unsigned_to_nat(5u);
x_6 = x_23;
goto block_20;
}
case 3:
{
lean_object* x_24; 
x_24 = lean_unsigned_to_nat(4u);
x_6 = x_24;
goto block_20;
}
default: 
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_4);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_5);
return x_26;
}
}
block_20:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_3);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_array_fget(x_3, x_6);
lean_inc(x_4);
x_12 = l_Lean_Meta_whnf(x_11, x_4, x_5);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_WHNF_getStuckMVar___main___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__2(x_13, x_4, x_14);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_4);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
}
lean_object* l_Lean_WHNF_isRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = l_Lean_RecursorVal_getMajorIdx(x_1);
x_8 = lean_array_get_size(x_3);
x_9 = lean_nat_dec_lt(x_7, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_4);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_fget(x_3, x_7);
lean_dec(x_7);
lean_inc(x_4);
x_13 = l_Lean_Meta_whnf(x_12, x_4, x_5);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_WHNF_getStuckMVar___main___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__2(x_14, x_4, x_15);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_4);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_5);
return x_22;
}
}
}
lean_object* l_Lean_WHNF_getStuckMVar___main___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
case 5:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Lean_Expr_getAppFn___main(x_6);
lean_dec(x_6);
switch (lean_obj_tag(x_7)) {
case 2:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
case 4:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = 1;
x_13 = l_Lean_Meta_getConstAux(x_10, x_12, x_2, x_3);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_14, 0);
lean_inc(x_21);
lean_dec(x_14);
switch (lean_obj_tag(x_21)) {
case 4:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_dec(x_13);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_24);
x_26 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_25);
x_27 = lean_mk_array(x_25, x_26);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_sub(x_25, x_28);
lean_dec(x_25);
x_30 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_27, x_29);
x_31 = l_Lean_WHNF_isQuotRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__3(x_23, x_11, x_30, x_2, x_22);
lean_dec(x_30);
lean_dec(x_11);
lean_dec(x_23);
return x_31;
}
case 7:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_32 = lean_ctor_get(x_13, 1);
lean_inc(x_32);
lean_dec(x_13);
x_33 = lean_ctor_get(x_21, 0);
lean_inc(x_33);
lean_dec(x_21);
x_34 = lean_unsigned_to_nat(0u);
x_35 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_34);
x_36 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_35);
x_37 = lean_mk_array(x_35, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_sub(x_35, x_38);
lean_dec(x_35);
x_40 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_37, x_39);
x_41 = l_Lean_WHNF_isRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__4(x_33, x_11, x_40, x_2, x_32);
lean_dec(x_40);
lean_dec(x_11);
lean_dec(x_33);
return x_41;
}
default: 
{
uint8_t x_42; 
lean_dec(x_21);
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_13, 0);
lean_dec(x_43);
x_44 = lean_box(0);
lean_ctor_set(x_13, 0, x_44);
return x_13;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_13, 1);
lean_inc(x_45);
lean_dec(x_13);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_13);
if (x_48 == 0)
{
return x_13;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_13, 0);
x_50 = lean_ctor_get(x_13, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_13);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
default: 
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_3);
return x_53;
}
}
}
case 10:
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_1, 1);
lean_inc(x_54);
lean_dec(x_1);
x_1 = x_54;
goto _start;
}
case 11:
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_1, 2);
lean_inc(x_56);
lean_dec(x_1);
lean_inc(x_2);
x_57 = l_Lean_Meta_whnf(x_56, x_2, x_3);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_1 = x_58;
x_3 = x_59;
goto _start;
}
else
{
uint8_t x_61; 
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_57);
if (x_61 == 0)
{
return x_57;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_57, 0);
x_63 = lean_ctor_get(x_57, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_57);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
default: 
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_2);
lean_dec(x_1);
x_65 = lean_box(0);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_3);
return x_66;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_Lean_WHNF_getStuckMVar___main___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__2(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = 0;
x_10 = lean_box(x_9);
lean_ctor_set(x_5, 0, x_10);
return x_5;
}
else
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_dec(x_5);
x_12 = 0;
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_ctor_get(x_6, 0);
lean_inc(x_16);
lean_dec(x_6);
lean_inc(x_3);
x_17 = l_Lean_Meta_synthPending(x_16, x_3, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
uint8_t x_20; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 0);
lean_dec(x_21);
x_22 = 0;
x_23 = lean_box(x_22);
lean_ctor_set(x_17, 0, x_23);
return x_17;
}
else
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_dec(x_17);
x_25 = 0;
x_26 = lean_box(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_17, 1);
lean_inc(x_28);
lean_dec(x_17);
x_29 = l_Lean_Meta_instantiateMVars(x_2, x_3, x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Meta_isExprDefEqAux(x_1, x_30, x_3, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_17);
if (x_33 == 0)
{
return x_17;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_17, 0);
x_35 = lean_ctor_get(x_17, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_17);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_5);
if (x_37 == 0)
{
return x_5;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_5, 0);
x_39 = lean_ctor_get(x_5, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_5);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
x_6 = l_Lean_WHNF_getStuckMVar___main___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__2(x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__1(x_1, x_2, x_4, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_4);
x_12 = l_Lean_Meta_synthPending(x_11, x_4, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__1(x_1, x_2, x_4, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_1);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = l_Lean_Meta_instantiateMVars(x_3, x_4, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Meta_isExprDefEqAux(x_19, x_2, x_4, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
}
else
{
uint8_t x_26; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_6);
if (x_26 == 0)
{
return x_6;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_6, 0);
x_28 = lean_ctor_get(x_6, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_6);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_1);
x_5 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_1, x_2, x_1, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_WHNF_isQuotRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_WHNF_isQuotRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_WHNF_isRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_WHNF_isRecStuck___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_try___at_Lean_Meta_isExprDefEqAuxImpl___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (x_4 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_9);
x_11 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_10);
x_12 = lean_mk_array(x_10, x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_10, x_13);
lean_dec(x_10);
x_15 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_1, x_12, x_14);
x_16 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_9);
lean_inc(x_16);
x_17 = lean_mk_array(x_16, x_11);
x_18 = lean_nat_sub(x_16, x_13);
lean_dec(x_16);
x_19 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_17, x_18);
x_20 = l___private_Init_Lean_Meta_ExprDefEq_4__isDefEqArgs(x_3, x_15, x_19, x_5, x_6);
lean_dec(x_19);
lean_dec(x_15);
return x_20;
}
}
}
lean_object* l_Lean_Meta_try___at_Lean_Meta_isExprDefEqAuxImpl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = l_Lean_Expr_getAppFn___main(x_2);
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAux), 4, 2);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_try___at_Lean_Meta_isExprDefEqAuxImpl___spec__1___lambda__1___boxed), 6, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_22; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
x_12 = lean_ctor_get(x_5, 5);
x_13 = l_PersistentArray_empty___closed__3;
lean_inc(x_11);
lean_inc(x_10);
lean_ctor_set(x_5, 5, x_13);
lean_inc(x_4);
x_22 = l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(x_7, x_8, x_4, x_5);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_10, x_11, x_12, x_4, x_25);
lean_dec(x_4);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_23);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_23);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_23);
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_dec(x_22);
x_32 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_4, x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_unbox(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_10, x_11, x_12, x_4, x_35);
lean_dec(x_4);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 0);
lean_dec(x_38);
lean_ctor_set(x_36, 0, x_33);
return x_36;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_33);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_4);
x_41 = !lean_is_exclusive(x_32);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_32, 0);
lean_dec(x_42);
return x_32;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_32, 1);
lean_inc(x_43);
lean_dec(x_32);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_33);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_32, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_32, 1);
lean_inc(x_46);
lean_dec(x_32);
x_14 = x_45;
x_15 = x_46;
goto block_21;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_22, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_22, 1);
lean_inc(x_48);
lean_dec(x_22);
x_14 = x_47;
x_15 = x_48;
goto block_21;
}
block_21:
{
lean_object* x_16; uint8_t x_17; 
x_16 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_10, x_11, x_12, x_4, x_15);
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 0, x_14);
return x_16;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_64; 
x_49 = lean_ctor_get(x_5, 0);
x_50 = lean_ctor_get(x_5, 1);
x_51 = lean_ctor_get(x_5, 2);
x_52 = lean_ctor_get(x_5, 3);
x_53 = lean_ctor_get(x_5, 4);
x_54 = lean_ctor_get(x_5, 5);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_5);
x_55 = l_PersistentArray_empty___closed__3;
lean_inc(x_50);
lean_inc(x_49);
x_56 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_56, 0, x_49);
lean_ctor_set(x_56, 1, x_50);
lean_ctor_set(x_56, 2, x_51);
lean_ctor_set(x_56, 3, x_52);
lean_ctor_set(x_56, 4, x_53);
lean_ctor_set(x_56, 5, x_55);
lean_inc(x_4);
x_64 = l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(x_7, x_8, x_4, x_56);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; uint8_t x_66; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_unbox(x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_67 = lean_ctor_get(x_64, 1);
lean_inc(x_67);
lean_dec(x_64);
x_68 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_49, x_50, x_54, x_4, x_67);
lean_dec(x_4);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_70 = x_68;
} else {
 lean_dec_ref(x_68);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_65);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; 
lean_dec(x_65);
x_72 = lean_ctor_get(x_64, 1);
lean_inc(x_72);
lean_dec(x_64);
x_73 = l___private_Init_Lean_Meta_LevelDefEq_11__processPostponed(x_4, x_72);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; uint8_t x_75; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_unbox(x_74);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_76 = lean_ctor_get(x_73, 1);
lean_inc(x_76);
lean_dec(x_73);
x_77 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_49, x_50, x_54, x_4, x_76);
lean_dec(x_4);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_79 = x_77;
} else {
 lean_dec_ref(x_77);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_74);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_54);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_4);
x_81 = lean_ctor_get(x_73, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_82 = x_73;
} else {
 lean_dec_ref(x_73);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_74);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
else
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_73, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_73, 1);
lean_inc(x_85);
lean_dec(x_73);
x_57 = x_84;
x_58 = x_85;
goto block_63;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_64, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_64, 1);
lean_inc(x_87);
lean_dec(x_64);
x_57 = x_86;
x_58 = x_87;
goto block_63;
}
block_63:
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = l___private_Init_Lean_Meta_LevelDefEq_12__restore(x_49, x_50, x_54, x_4, x_58);
lean_dec(x_4);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
 lean_ctor_set_tag(x_62, 1);
}
lean_ctor_set(x_62, 0, x_57);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_ExprDefEq_40__isDefEqWHNF___at_Lean_Meta_isExprDefEqAuxImpl___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_1);
x_5 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_Lean_WHNF_whnfCore___main___at_Lean_Meta_whnfCore___spec__1(x_2, x_3, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_11 = x_8;
} else {
 lean_dec_ref(x_8);
 x_11 = lean_box(0);
}
x_12 = lean_expr_eqv(x_1, x_6);
lean_dec(x_1);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_11);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_13 = l___private_Init_Lean_Meta_ExprDefEq_38__isDefEqQuick___main(x_6, x_9, x_3, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
switch (x_15) {
case 0:
{
uint8_t x_16; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
lean_dec(x_17);
x_18 = 0;
x_19 = lean_box(x_18);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_dec(x_13);
x_21 = 0;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
case 1:
{
uint8_t x_24; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_13);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_13, 0);
lean_dec(x_25);
x_26 = 1;
x_27 = lean_box(x_26);
lean_ctor_set(x_13, 0, x_27);
return x_13;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_dec(x_13);
x_29 = 1;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
default: 
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_59; 
x_32 = lean_ctor_get(x_13, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_33 = x_13;
} else {
 lean_dec_ref(x_13);
 x_33 = lean_box(0);
}
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_59 = l_Lean_Meta_isDefEqOffset(x_6, x_9, x_3, x_32);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_unbox(x_60);
lean_dec(x_60);
switch (x_61) {
case 0:
{
uint8_t x_62; 
lean_dec(x_33);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_62 = !lean_is_exclusive(x_59);
if (x_62 == 0)
{
lean_object* x_63; uint8_t x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_59, 0);
lean_dec(x_63);
x_64 = 0;
x_65 = lean_box(x_64);
lean_ctor_set(x_59, 0, x_65);
return x_59;
}
else
{
lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_59, 1);
lean_inc(x_66);
lean_dec(x_59);
x_67 = 0;
x_68 = lean_box(x_67);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_66);
return x_69;
}
}
case 1:
{
uint8_t x_70; 
lean_dec(x_33);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_70 = !lean_is_exclusive(x_59);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_59, 0);
lean_dec(x_71);
x_72 = 1;
x_73 = lean_box(x_72);
lean_ctor_set(x_59, 0, x_73);
return x_59;
}
else
{
lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; 
x_74 = lean_ctor_get(x_59, 1);
lean_inc(x_74);
lean_dec(x_59);
x_75 = 1;
x_76 = lean_box(x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_74);
return x_77;
}
}
default: 
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_59, 1);
lean_inc(x_78);
lean_dec(x_59);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_79 = l___private_Init_Lean_Meta_ExprDefEq_32__isDefEqDelta(x_6, x_9, x_3, x_78);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; uint8_t x_81; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_unbox(x_80);
lean_dec(x_80);
switch (x_81) {
case 0:
{
uint8_t x_82; 
lean_dec(x_33);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_82 = !lean_is_exclusive(x_79);
if (x_82 == 0)
{
lean_object* x_83; uint8_t x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_79, 0);
lean_dec(x_83);
x_84 = 0;
x_85 = lean_box(x_84);
lean_ctor_set(x_79, 0, x_85);
return x_79;
}
else
{
lean_object* x_86; uint8_t x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_79, 1);
lean_inc(x_86);
lean_dec(x_79);
x_87 = 0;
x_88 = lean_box(x_87);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_86);
return x_89;
}
}
case 1:
{
uint8_t x_90; 
lean_dec(x_33);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_90 = !lean_is_exclusive(x_79);
if (x_90 == 0)
{
lean_object* x_91; uint8_t x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_79, 0);
lean_dec(x_91);
x_92 = 1;
x_93 = lean_box(x_92);
lean_ctor_set(x_79, 0, x_93);
return x_79;
}
else
{
lean_object* x_94; uint8_t x_95; lean_object* x_96; lean_object* x_97; 
x_94 = lean_ctor_get(x_79, 1);
lean_inc(x_94);
lean_dec(x_79);
x_95 = 1;
x_96 = lean_box(x_95);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_94);
return x_97;
}
}
default: 
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_79, 1);
lean_inc(x_98);
lean_dec(x_79);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_99 = l___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta(x_6, x_9, x_3, x_98);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; uint8_t x_101; 
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_unbox(x_100);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; 
lean_dec(x_100);
x_102 = lean_ctor_get(x_99, 1);
lean_inc(x_102);
lean_dec(x_99);
lean_inc(x_3);
lean_inc(x_6);
lean_inc(x_9);
x_103 = l___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta(x_9, x_6, x_3, x_102);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = lean_unbox(x_104);
lean_dec(x_104);
x_34 = x_106;
x_35 = x_105;
goto block_58;
}
else
{
uint8_t x_107; 
lean_dec(x_33);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_107 = !lean_is_exclusive(x_103);
if (x_107 == 0)
{
return x_103;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_103, 0);
x_109 = lean_ctor_get(x_103, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_103);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
else
{
lean_object* x_111; uint8_t x_112; 
x_111 = lean_ctor_get(x_99, 1);
lean_inc(x_111);
lean_dec(x_99);
x_112 = lean_unbox(x_100);
lean_dec(x_100);
x_34 = x_112;
x_35 = x_111;
goto block_58;
}
}
else
{
uint8_t x_113; 
lean_dec(x_33);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_113 = !lean_is_exclusive(x_99);
if (x_113 == 0)
{
return x_99;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_99, 0);
x_115 = lean_ctor_get(x_99, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_99);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
}
}
else
{
uint8_t x_117; 
lean_dec(x_33);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_117 = !lean_is_exclusive(x_79);
if (x_117 == 0)
{
return x_79;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_79, 0);
x_119 = lean_ctor_get(x_79, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_79);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
}
}
else
{
uint8_t x_121; 
lean_dec(x_33);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_121 = !lean_is_exclusive(x_59);
if (x_121 == 0)
{
return x_59;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_59, 0);
x_123 = lean_ctor_get(x_59, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_59);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
block_58:
{
if (x_34 == 0)
{
lean_dec(x_33);
switch (lean_obj_tag(x_6)) {
case 4:
{
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_6, 1);
lean_inc(x_36);
lean_dec(x_6);
x_37 = lean_ctor_get(x_9, 1);
lean_inc(x_37);
lean_dec(x_9);
x_38 = l_Lean_Meta_isListLevelDefEqAux___main(x_36, x_37, x_3, x_35);
lean_dec(x_3);
return x_38;
}
else
{
lean_object* x_39; 
lean_inc(x_6);
x_39 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_35);
return x_39;
}
}
case 5:
{
if (lean_obj_tag(x_9) == 5)
{
lean_object* x_40; lean_object* x_41; 
x_40 = l_Lean_Expr_getAppFn___main(x_6);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_41 = l_Lean_Meta_try___at_Lean_Meta_isExprDefEqAuxImpl___spec__1(x_6, x_9, x_40, x_3, x_35);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_42);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
lean_inc(x_6);
x_45 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_44);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_41);
if (x_46 == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_41, 0);
lean_dec(x_47);
return x_41;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_dec(x_41);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_42);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_50 = !lean_is_exclusive(x_41);
if (x_50 == 0)
{
return x_41;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_41, 0);
x_52 = lean_ctor_get(x_41, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_41);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
lean_object* x_54; 
lean_inc(x_6);
x_54 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_35);
return x_54;
}
}
default: 
{
lean_object* x_55; 
lean_inc(x_6);
x_55 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_35);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_56 = lean_box(x_34);
if (lean_is_scalar(x_33)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_33;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_35);
return x_57;
}
}
}
}
}
else
{
uint8_t x_125; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_125 = !lean_is_exclusive(x_13);
if (x_125 == 0)
{
return x_13;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_13, 0);
x_127 = lean_ctor_get(x_13, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_13);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
return x_128;
}
}
}
else
{
uint8_t x_129; 
x_129 = lean_expr_eqv(x_2, x_9);
lean_dec(x_2);
if (x_129 == 0)
{
lean_object* x_130; 
lean_dec(x_11);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_130 = l___private_Init_Lean_Meta_ExprDefEq_38__isDefEqQuick___main(x_6, x_9, x_3, x_10);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; uint8_t x_132; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_unbox(x_131);
lean_dec(x_131);
switch (x_132) {
case 0:
{
uint8_t x_133; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_133 = !lean_is_exclusive(x_130);
if (x_133 == 0)
{
lean_object* x_134; uint8_t x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_130, 0);
lean_dec(x_134);
x_135 = 0;
x_136 = lean_box(x_135);
lean_ctor_set(x_130, 0, x_136);
return x_130;
}
else
{
lean_object* x_137; uint8_t x_138; lean_object* x_139; lean_object* x_140; 
x_137 = lean_ctor_get(x_130, 1);
lean_inc(x_137);
lean_dec(x_130);
x_138 = 0;
x_139 = lean_box(x_138);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_137);
return x_140;
}
}
case 1:
{
uint8_t x_141; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_141 = !lean_is_exclusive(x_130);
if (x_141 == 0)
{
lean_object* x_142; uint8_t x_143; lean_object* x_144; 
x_142 = lean_ctor_get(x_130, 0);
lean_dec(x_142);
x_143 = 1;
x_144 = lean_box(x_143);
lean_ctor_set(x_130, 0, x_144);
return x_130;
}
else
{
lean_object* x_145; uint8_t x_146; lean_object* x_147; lean_object* x_148; 
x_145 = lean_ctor_get(x_130, 1);
lean_inc(x_145);
lean_dec(x_130);
x_146 = 1;
x_147 = lean_box(x_146);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_145);
return x_148;
}
}
default: 
{
lean_object* x_149; lean_object* x_150; uint8_t x_151; lean_object* x_152; lean_object* x_176; 
x_149 = lean_ctor_get(x_130, 1);
lean_inc(x_149);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_150 = x_130;
} else {
 lean_dec_ref(x_130);
 x_150 = lean_box(0);
}
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_176 = l_Lean_Meta_isDefEqOffset(x_6, x_9, x_3, x_149);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; uint8_t x_178; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_unbox(x_177);
lean_dec(x_177);
switch (x_178) {
case 0:
{
uint8_t x_179; 
lean_dec(x_150);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_179 = !lean_is_exclusive(x_176);
if (x_179 == 0)
{
lean_object* x_180; uint8_t x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_176, 0);
lean_dec(x_180);
x_181 = 0;
x_182 = lean_box(x_181);
lean_ctor_set(x_176, 0, x_182);
return x_176;
}
else
{
lean_object* x_183; uint8_t x_184; lean_object* x_185; lean_object* x_186; 
x_183 = lean_ctor_get(x_176, 1);
lean_inc(x_183);
lean_dec(x_176);
x_184 = 0;
x_185 = lean_box(x_184);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_183);
return x_186;
}
}
case 1:
{
uint8_t x_187; 
lean_dec(x_150);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_187 = !lean_is_exclusive(x_176);
if (x_187 == 0)
{
lean_object* x_188; uint8_t x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_176, 0);
lean_dec(x_188);
x_189 = 1;
x_190 = lean_box(x_189);
lean_ctor_set(x_176, 0, x_190);
return x_176;
}
else
{
lean_object* x_191; uint8_t x_192; lean_object* x_193; lean_object* x_194; 
x_191 = lean_ctor_get(x_176, 1);
lean_inc(x_191);
lean_dec(x_176);
x_192 = 1;
x_193 = lean_box(x_192);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_191);
return x_194;
}
}
default: 
{
lean_object* x_195; lean_object* x_196; 
x_195 = lean_ctor_get(x_176, 1);
lean_inc(x_195);
lean_dec(x_176);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_196 = l___private_Init_Lean_Meta_ExprDefEq_32__isDefEqDelta(x_6, x_9, x_3, x_195);
if (lean_obj_tag(x_196) == 0)
{
lean_object* x_197; uint8_t x_198; 
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
x_198 = lean_unbox(x_197);
lean_dec(x_197);
switch (x_198) {
case 0:
{
uint8_t x_199; 
lean_dec(x_150);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_199 = !lean_is_exclusive(x_196);
if (x_199 == 0)
{
lean_object* x_200; uint8_t x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_196, 0);
lean_dec(x_200);
x_201 = 0;
x_202 = lean_box(x_201);
lean_ctor_set(x_196, 0, x_202);
return x_196;
}
else
{
lean_object* x_203; uint8_t x_204; lean_object* x_205; lean_object* x_206; 
x_203 = lean_ctor_get(x_196, 1);
lean_inc(x_203);
lean_dec(x_196);
x_204 = 0;
x_205 = lean_box(x_204);
x_206 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_203);
return x_206;
}
}
case 1:
{
uint8_t x_207; 
lean_dec(x_150);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_207 = !lean_is_exclusive(x_196);
if (x_207 == 0)
{
lean_object* x_208; uint8_t x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_196, 0);
lean_dec(x_208);
x_209 = 1;
x_210 = lean_box(x_209);
lean_ctor_set(x_196, 0, x_210);
return x_196;
}
else
{
lean_object* x_211; uint8_t x_212; lean_object* x_213; lean_object* x_214; 
x_211 = lean_ctor_get(x_196, 1);
lean_inc(x_211);
lean_dec(x_196);
x_212 = 1;
x_213 = lean_box(x_212);
x_214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_211);
return x_214;
}
}
default: 
{
lean_object* x_215; lean_object* x_216; 
x_215 = lean_ctor_get(x_196, 1);
lean_inc(x_215);
lean_dec(x_196);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_216 = l___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta(x_6, x_9, x_3, x_215);
if (lean_obj_tag(x_216) == 0)
{
lean_object* x_217; uint8_t x_218; 
x_217 = lean_ctor_get(x_216, 0);
lean_inc(x_217);
x_218 = lean_unbox(x_217);
if (x_218 == 0)
{
lean_object* x_219; lean_object* x_220; 
lean_dec(x_217);
x_219 = lean_ctor_get(x_216, 1);
lean_inc(x_219);
lean_dec(x_216);
lean_inc(x_3);
lean_inc(x_6);
lean_inc(x_9);
x_220 = l___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta(x_9, x_6, x_3, x_219);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; lean_object* x_222; uint8_t x_223; 
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
lean_dec(x_220);
x_223 = lean_unbox(x_221);
lean_dec(x_221);
x_151 = x_223;
x_152 = x_222;
goto block_175;
}
else
{
uint8_t x_224; 
lean_dec(x_150);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_224 = !lean_is_exclusive(x_220);
if (x_224 == 0)
{
return x_220;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_225 = lean_ctor_get(x_220, 0);
x_226 = lean_ctor_get(x_220, 1);
lean_inc(x_226);
lean_inc(x_225);
lean_dec(x_220);
x_227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_227, 0, x_225);
lean_ctor_set(x_227, 1, x_226);
return x_227;
}
}
}
else
{
lean_object* x_228; uint8_t x_229; 
x_228 = lean_ctor_get(x_216, 1);
lean_inc(x_228);
lean_dec(x_216);
x_229 = lean_unbox(x_217);
lean_dec(x_217);
x_151 = x_229;
x_152 = x_228;
goto block_175;
}
}
else
{
uint8_t x_230; 
lean_dec(x_150);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_230 = !lean_is_exclusive(x_216);
if (x_230 == 0)
{
return x_216;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_216, 0);
x_232 = lean_ctor_get(x_216, 1);
lean_inc(x_232);
lean_inc(x_231);
lean_dec(x_216);
x_233 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set(x_233, 1, x_232);
return x_233;
}
}
}
}
}
else
{
uint8_t x_234; 
lean_dec(x_150);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_234 = !lean_is_exclusive(x_196);
if (x_234 == 0)
{
return x_196;
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_235 = lean_ctor_get(x_196, 0);
x_236 = lean_ctor_get(x_196, 1);
lean_inc(x_236);
lean_inc(x_235);
lean_dec(x_196);
x_237 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_237, 0, x_235);
lean_ctor_set(x_237, 1, x_236);
return x_237;
}
}
}
}
}
else
{
uint8_t x_238; 
lean_dec(x_150);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_238 = !lean_is_exclusive(x_176);
if (x_238 == 0)
{
return x_176;
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_239 = lean_ctor_get(x_176, 0);
x_240 = lean_ctor_get(x_176, 1);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_176);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_239);
lean_ctor_set(x_241, 1, x_240);
return x_241;
}
}
block_175:
{
if (x_151 == 0)
{
lean_dec(x_150);
switch (lean_obj_tag(x_6)) {
case 4:
{
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_6, 1);
lean_inc(x_153);
lean_dec(x_6);
x_154 = lean_ctor_get(x_9, 1);
lean_inc(x_154);
lean_dec(x_9);
x_155 = l_Lean_Meta_isListLevelDefEqAux___main(x_153, x_154, x_3, x_152);
lean_dec(x_3);
return x_155;
}
else
{
lean_object* x_156; 
lean_inc(x_6);
x_156 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_152);
return x_156;
}
}
case 5:
{
if (lean_obj_tag(x_9) == 5)
{
lean_object* x_157; lean_object* x_158; 
x_157 = l_Lean_Expr_getAppFn___main(x_6);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_158 = l_Lean_Meta_try___at_Lean_Meta_isExprDefEqAuxImpl___spec__1(x_6, x_9, x_157, x_3, x_152);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; uint8_t x_160; 
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_unbox(x_159);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; 
lean_dec(x_159);
x_161 = lean_ctor_get(x_158, 1);
lean_inc(x_161);
lean_dec(x_158);
lean_inc(x_6);
x_162 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_161);
return x_162;
}
else
{
uint8_t x_163; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_163 = !lean_is_exclusive(x_158);
if (x_163 == 0)
{
lean_object* x_164; 
x_164 = lean_ctor_get(x_158, 0);
lean_dec(x_164);
return x_158;
}
else
{
lean_object* x_165; lean_object* x_166; 
x_165 = lean_ctor_get(x_158, 1);
lean_inc(x_165);
lean_dec(x_158);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_159);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
else
{
uint8_t x_167; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_167 = !lean_is_exclusive(x_158);
if (x_167 == 0)
{
return x_158;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_158, 0);
x_169 = lean_ctor_get(x_158, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_158);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
else
{
lean_object* x_171; 
lean_inc(x_6);
x_171 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_152);
return x_171;
}
}
default: 
{
lean_object* x_172; 
lean_inc(x_6);
x_172 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_152);
return x_172;
}
}
}
else
{
lean_object* x_173; lean_object* x_174; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_173 = lean_box(x_151);
if (lean_is_scalar(x_150)) {
 x_174 = lean_alloc_ctor(0, 2, 0);
} else {
 x_174 = x_150;
}
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_152);
return x_174;
}
}
}
}
}
else
{
uint8_t x_242; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_242 = !lean_is_exclusive(x_130);
if (x_242 == 0)
{
return x_130;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_243 = lean_ctor_get(x_130, 0);
x_244 = lean_ctor_get(x_130, 1);
lean_inc(x_244);
lean_inc(x_243);
lean_dec(x_130);
x_245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_245, 0, x_243);
lean_ctor_set(x_245, 1, x_244);
return x_245;
}
}
}
else
{
uint8_t x_246; lean_object* x_247; lean_object* x_271; 
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_271 = l_Lean_Meta_isDefEqOffset(x_6, x_9, x_3, x_10);
if (lean_obj_tag(x_271) == 0)
{
lean_object* x_272; uint8_t x_273; 
x_272 = lean_ctor_get(x_271, 0);
lean_inc(x_272);
x_273 = lean_unbox(x_272);
lean_dec(x_272);
switch (x_273) {
case 0:
{
uint8_t x_274; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_274 = !lean_is_exclusive(x_271);
if (x_274 == 0)
{
lean_object* x_275; uint8_t x_276; lean_object* x_277; 
x_275 = lean_ctor_get(x_271, 0);
lean_dec(x_275);
x_276 = 0;
x_277 = lean_box(x_276);
lean_ctor_set(x_271, 0, x_277);
return x_271;
}
else
{
lean_object* x_278; uint8_t x_279; lean_object* x_280; lean_object* x_281; 
x_278 = lean_ctor_get(x_271, 1);
lean_inc(x_278);
lean_dec(x_271);
x_279 = 0;
x_280 = lean_box(x_279);
x_281 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_281, 0, x_280);
lean_ctor_set(x_281, 1, x_278);
return x_281;
}
}
case 1:
{
uint8_t x_282; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_282 = !lean_is_exclusive(x_271);
if (x_282 == 0)
{
lean_object* x_283; uint8_t x_284; lean_object* x_285; 
x_283 = lean_ctor_get(x_271, 0);
lean_dec(x_283);
x_284 = 1;
x_285 = lean_box(x_284);
lean_ctor_set(x_271, 0, x_285);
return x_271;
}
else
{
lean_object* x_286; uint8_t x_287; lean_object* x_288; lean_object* x_289; 
x_286 = lean_ctor_get(x_271, 1);
lean_inc(x_286);
lean_dec(x_271);
x_287 = 1;
x_288 = lean_box(x_287);
x_289 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_286);
return x_289;
}
}
default: 
{
lean_object* x_290; lean_object* x_291; 
x_290 = lean_ctor_get(x_271, 1);
lean_inc(x_290);
lean_dec(x_271);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_291 = l___private_Init_Lean_Meta_ExprDefEq_32__isDefEqDelta(x_6, x_9, x_3, x_290);
if (lean_obj_tag(x_291) == 0)
{
lean_object* x_292; uint8_t x_293; 
x_292 = lean_ctor_get(x_291, 0);
lean_inc(x_292);
x_293 = lean_unbox(x_292);
lean_dec(x_292);
switch (x_293) {
case 0:
{
uint8_t x_294; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_294 = !lean_is_exclusive(x_291);
if (x_294 == 0)
{
lean_object* x_295; uint8_t x_296; lean_object* x_297; 
x_295 = lean_ctor_get(x_291, 0);
lean_dec(x_295);
x_296 = 0;
x_297 = lean_box(x_296);
lean_ctor_set(x_291, 0, x_297);
return x_291;
}
else
{
lean_object* x_298; uint8_t x_299; lean_object* x_300; lean_object* x_301; 
x_298 = lean_ctor_get(x_291, 1);
lean_inc(x_298);
lean_dec(x_291);
x_299 = 0;
x_300 = lean_box(x_299);
x_301 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_301, 0, x_300);
lean_ctor_set(x_301, 1, x_298);
return x_301;
}
}
case 1:
{
uint8_t x_302; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_302 = !lean_is_exclusive(x_291);
if (x_302 == 0)
{
lean_object* x_303; uint8_t x_304; lean_object* x_305; 
x_303 = lean_ctor_get(x_291, 0);
lean_dec(x_303);
x_304 = 1;
x_305 = lean_box(x_304);
lean_ctor_set(x_291, 0, x_305);
return x_291;
}
else
{
lean_object* x_306; uint8_t x_307; lean_object* x_308; lean_object* x_309; 
x_306 = lean_ctor_get(x_291, 1);
lean_inc(x_306);
lean_dec(x_291);
x_307 = 1;
x_308 = lean_box(x_307);
x_309 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_309, 0, x_308);
lean_ctor_set(x_309, 1, x_306);
return x_309;
}
}
default: 
{
lean_object* x_310; lean_object* x_311; 
x_310 = lean_ctor_get(x_291, 1);
lean_inc(x_310);
lean_dec(x_291);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_311 = l___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta(x_6, x_9, x_3, x_310);
if (lean_obj_tag(x_311) == 0)
{
lean_object* x_312; uint8_t x_313; 
x_312 = lean_ctor_get(x_311, 0);
lean_inc(x_312);
x_313 = lean_unbox(x_312);
if (x_313 == 0)
{
lean_object* x_314; lean_object* x_315; 
lean_dec(x_312);
x_314 = lean_ctor_get(x_311, 1);
lean_inc(x_314);
lean_dec(x_311);
lean_inc(x_3);
lean_inc(x_6);
lean_inc(x_9);
x_315 = l___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta(x_9, x_6, x_3, x_314);
if (lean_obj_tag(x_315) == 0)
{
lean_object* x_316; lean_object* x_317; uint8_t x_318; 
x_316 = lean_ctor_get(x_315, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_315, 1);
lean_inc(x_317);
lean_dec(x_315);
x_318 = lean_unbox(x_316);
lean_dec(x_316);
x_246 = x_318;
x_247 = x_317;
goto block_270;
}
else
{
uint8_t x_319; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_319 = !lean_is_exclusive(x_315);
if (x_319 == 0)
{
return x_315;
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; 
x_320 = lean_ctor_get(x_315, 0);
x_321 = lean_ctor_get(x_315, 1);
lean_inc(x_321);
lean_inc(x_320);
lean_dec(x_315);
x_322 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_322, 0, x_320);
lean_ctor_set(x_322, 1, x_321);
return x_322;
}
}
}
else
{
lean_object* x_323; uint8_t x_324; 
x_323 = lean_ctor_get(x_311, 1);
lean_inc(x_323);
lean_dec(x_311);
x_324 = lean_unbox(x_312);
lean_dec(x_312);
x_246 = x_324;
x_247 = x_323;
goto block_270;
}
}
else
{
uint8_t x_325; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_325 = !lean_is_exclusive(x_311);
if (x_325 == 0)
{
return x_311;
}
else
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; 
x_326 = lean_ctor_get(x_311, 0);
x_327 = lean_ctor_get(x_311, 1);
lean_inc(x_327);
lean_inc(x_326);
lean_dec(x_311);
x_328 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_328, 0, x_326);
lean_ctor_set(x_328, 1, x_327);
return x_328;
}
}
}
}
}
else
{
uint8_t x_329; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_329 = !lean_is_exclusive(x_291);
if (x_329 == 0)
{
return x_291;
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_330 = lean_ctor_get(x_291, 0);
x_331 = lean_ctor_get(x_291, 1);
lean_inc(x_331);
lean_inc(x_330);
lean_dec(x_291);
x_332 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_332, 0, x_330);
lean_ctor_set(x_332, 1, x_331);
return x_332;
}
}
}
}
}
else
{
uint8_t x_333; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_333 = !lean_is_exclusive(x_271);
if (x_333 == 0)
{
return x_271;
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_334 = lean_ctor_get(x_271, 0);
x_335 = lean_ctor_get(x_271, 1);
lean_inc(x_335);
lean_inc(x_334);
lean_dec(x_271);
x_336 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_336, 0, x_334);
lean_ctor_set(x_336, 1, x_335);
return x_336;
}
}
block_270:
{
if (x_246 == 0)
{
lean_dec(x_11);
switch (lean_obj_tag(x_6)) {
case 4:
{
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_248 = lean_ctor_get(x_6, 1);
lean_inc(x_248);
lean_dec(x_6);
x_249 = lean_ctor_get(x_9, 1);
lean_inc(x_249);
lean_dec(x_9);
x_250 = l_Lean_Meta_isListLevelDefEqAux___main(x_248, x_249, x_3, x_247);
lean_dec(x_3);
return x_250;
}
else
{
lean_object* x_251; 
lean_inc(x_6);
x_251 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_247);
return x_251;
}
}
case 5:
{
if (lean_obj_tag(x_9) == 5)
{
lean_object* x_252; lean_object* x_253; 
x_252 = l_Lean_Expr_getAppFn___main(x_6);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_6);
x_253 = l_Lean_Meta_try___at_Lean_Meta_isExprDefEqAuxImpl___spec__1(x_6, x_9, x_252, x_3, x_247);
if (lean_obj_tag(x_253) == 0)
{
lean_object* x_254; uint8_t x_255; 
x_254 = lean_ctor_get(x_253, 0);
lean_inc(x_254);
x_255 = lean_unbox(x_254);
if (x_255 == 0)
{
lean_object* x_256; lean_object* x_257; 
lean_dec(x_254);
x_256 = lean_ctor_get(x_253, 1);
lean_inc(x_256);
lean_dec(x_253);
lean_inc(x_6);
x_257 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_256);
return x_257;
}
else
{
uint8_t x_258; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_258 = !lean_is_exclusive(x_253);
if (x_258 == 0)
{
lean_object* x_259; 
x_259 = lean_ctor_get(x_253, 0);
lean_dec(x_259);
return x_253;
}
else
{
lean_object* x_260; lean_object* x_261; 
x_260 = lean_ctor_get(x_253, 1);
lean_inc(x_260);
lean_dec(x_253);
x_261 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_261, 0, x_254);
lean_ctor_set(x_261, 1, x_260);
return x_261;
}
}
}
else
{
uint8_t x_262; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_262 = !lean_is_exclusive(x_253);
if (x_262 == 0)
{
return x_253;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_263 = lean_ctor_get(x_253, 0);
x_264 = lean_ctor_get(x_253, 1);
lean_inc(x_264);
lean_inc(x_263);
lean_dec(x_253);
x_265 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_265, 0, x_263);
lean_ctor_set(x_265, 1, x_264);
return x_265;
}
}
}
else
{
lean_object* x_266; 
lean_inc(x_6);
x_266 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_247);
return x_266;
}
}
default: 
{
lean_object* x_267; 
lean_inc(x_6);
x_267 = l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___at___private_Init_Lean_Meta_ExprDefEq_42__isDefEqOnFailure___spec__5(x_6, x_9, x_6, x_3, x_247);
return x_267;
}
}
}
else
{
lean_object* x_268; lean_object* x_269; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_268 = lean_box(x_246);
if (lean_is_scalar(x_11)) {
 x_269 = lean_alloc_ctor(0, 2, 0);
} else {
 x_269 = x_11;
}
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_247);
return x_269;
}
}
}
}
}
else
{
uint8_t x_337; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_337 = !lean_is_exclusive(x_8);
if (x_337 == 0)
{
return x_8;
}
else
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; 
x_338 = lean_ctor_get(x_8, 0);
x_339 = lean_ctor_get(x_8, 1);
lean_inc(x_339);
lean_inc(x_338);
lean_dec(x_8);
x_340 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_340, 0, x_338);
lean_ctor_set(x_340, 1, x_339);
return x_340;
}
}
}
else
{
uint8_t x_341; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_341 = !lean_is_exclusive(x_5);
if (x_341 == 0)
{
return x_5;
}
else
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_342 = lean_ctor_get(x_5, 0);
x_343 = lean_ctor_get(x_5, 1);
lean_inc(x_343);
lean_inc(x_342);
lean_dec(x_5);
x_344 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_344, 0, x_342);
lean_ctor_set(x_344, 1, x_343);
return x_344;
}
}
}
}
lean_object* _init_l_Lean_Meta_isExprDefEqAuxImpl___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__1;
x_2 = l_Lean_Meta_isLevelDefEqAux___main___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_isExprDefEqAuxImpl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SimpleMonadTracerAdapter_isTracingEnabledFor___rarg___lambda__1___closed__2;
x_2 = l_Lean_Meta_isExprDefEqAuxImpl___closed__1;
x_3 = l_Lean_Name_append___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_isExprDefEqAuxImpl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_56; uint8_t x_57; 
x_56 = lean_ctor_get(x_4, 4);
lean_inc(x_56);
x_57 = lean_ctor_get_uint8(x_56, sizeof(void*)*1);
lean_dec(x_56);
if (x_57 == 0)
{
x_5 = x_4;
goto block_55;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_58 = l_Lean_Meta_isExprDefEqAuxImpl___closed__2;
x_59 = l___private_Init_Lean_Util_Trace_4__checkTraceOption___at_Lean_Meta_trace___spec__1(x_58, x_3, x_4);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_unbox(x_60);
lean_dec(x_60);
if (x_61 == 0)
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_5 = x_62;
goto block_55;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
lean_dec(x_59);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
x_66 = lean_ctor_get(x_3, 1);
lean_inc(x_66);
lean_inc(x_1);
x_67 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_67, 0, x_1);
x_68 = l_Lean_Meta_Exception_toMessageData___closed__51;
x_69 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
lean_inc(x_2);
x_70 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_70, 0, x_2);
x_71 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(x_72, 0, x_64);
lean_ctor_set(x_72, 1, x_65);
lean_ctor_set(x_72, 2, x_66);
lean_ctor_set(x_72, 3, x_71);
x_73 = l_Lean_Meta_isExprDefEqAuxImpl___closed__1;
x_74 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_trace___spec__2(x_73, x_72, x_3, x_63);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_5 = x_75;
goto block_55;
}
}
block_55:
{
lean_object* x_6; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l___private_Init_Lean_Meta_ExprDefEq_38__isDefEqQuick___main(x_1, x_2, x_3, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
switch (x_8) {
case 0:
{
uint8_t x_9; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
lean_dec(x_10);
x_11 = 0;
x_12 = lean_box(x_11);
lean_ctor_set(x_6, 0, x_12);
return x_6;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_dec(x_6);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
}
case 1:
{
uint8_t x_17; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_6);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_6, 0);
lean_dec(x_18);
x_19 = 1;
x_20 = lean_box(x_19);
lean_ctor_set(x_6, 0, x_20);
return x_6;
}
else
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_6, 1);
lean_inc(x_21);
lean_dec(x_6);
x_22 = 1;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
default: 
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_6, 1);
lean_inc(x_25);
lean_dec(x_6);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_26 = l___private_Init_Lean_Meta_ExprDefEq_39__isDefEqProofIrrel(x_1, x_2, x_3, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
switch (x_28) {
case 0:
{
uint8_t x_29; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_26);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 0);
lean_dec(x_30);
x_31 = 0;
x_32 = lean_box(x_31);
lean_ctor_set(x_26, 0, x_32);
return x_26;
}
else
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_dec(x_26);
x_34 = 0;
x_35 = lean_box(x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
case 1:
{
uint8_t x_37; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_26);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_26, 0);
lean_dec(x_38);
x_39 = 1;
x_40 = lean_box(x_39);
lean_ctor_set(x_26, 0, x_40);
return x_26;
}
else
{
lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_26, 1);
lean_inc(x_41);
lean_dec(x_26);
x_42 = 1;
x_43 = lean_box(x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
return x_44;
}
}
default: 
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_26, 1);
lean_inc(x_45);
lean_dec(x_26);
x_46 = l___private_Init_Lean_Meta_ExprDefEq_40__isDefEqWHNF___at_Lean_Meta_isExprDefEqAuxImpl___spec__2(x_1, x_2, x_3, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_6);
if (x_51 == 0)
{
return x_6;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_6, 0);
x_53 = lean_ctor_get(x_6, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_6);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
lean_object* l_Lean_Meta_try___at_Lean_Meta_isExprDefEqAuxImpl___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_Lean_Meta_try___at_Lean_Meta_isExprDefEqAuxImpl___spec__1___lambda__1(x_1, x_2, x_3, x_7, x_5, x_6);
return x_8;
}
}
lean_object* _init_l_Lean_Meta_setIsExprDefEqAuxRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAuxImpl), 4, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_setIsExprDefEqAuxRef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Meta_isExprDefEqAuxRef;
x_3 = l_Lean_Meta_setIsExprDefEqAuxRef___closed__1;
x_4 = lean_io_ref_set(x_2, x_3, x_1);
return x_4;
}
}
lean_object* initialize_Init_Lean_ProjFns(lean_object*);
lean_object* initialize_Init_Lean_Meta_WHNF(lean_object*);
lean_object* initialize_Init_Lean_Meta_InferType(lean_object*);
lean_object* initialize_Init_Lean_Meta_FunInfo(lean_object*);
lean_object* initialize_Init_Lean_Meta_LevelDefEq(lean_object*);
lean_object* initialize_Init_Lean_Meta_Check(lean_object*);
lean_object* initialize_Init_Lean_Meta_Offset(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Meta_ExprDefEq(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Lean_ProjFns(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_WHNF(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_InferType(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_FunInfo(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_LevelDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_Check(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_Offset(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1___closed__1 = _init_l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1___closed__1();
lean_mark_persistent(l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__1___closed__1);
l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__1 = _init_l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__1();
lean_mark_persistent(l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__1);
l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__2 = _init_l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__2();
lean_mark_persistent(l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__2);
l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__3 = _init_l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__3();
lean_mark_persistent(l_Lean_Meta_CheckAssignment_Lean_MonadCache___closed__3);
l_Lean_Meta_CheckAssignment_Lean_MonadCache = _init_l_Lean_Meta_CheckAssignment_Lean_MonadCache();
lean_mark_persistent(l_Lean_Meta_CheckAssignment_Lean_MonadCache);
l_Lean_Meta_CheckAssignment_check___main___closed__1 = _init_l_Lean_Meta_CheckAssignment_check___main___closed__1();
lean_mark_persistent(l_Lean_Meta_CheckAssignment_check___main___closed__1);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__1 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__1);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__2 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__2();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__2);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__3);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__4 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__4();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__4);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__5 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__5();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__5);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__6 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__6();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__6);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__7);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__8 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__8();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__8);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__9 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__9();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__9);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__10 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__10();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__10);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__11 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__11();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__11);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__12 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__12();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__12);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__13 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__13();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__13);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__14 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__14();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__14);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__15 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__15();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__15);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__16 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__16();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__16);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__17 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__17();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__17);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__18 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__18();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__18);
l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__19 = _init_l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__19();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_10__checkAssignmentFailure___closed__19);
l_Lean_Meta_checkAssignment___closed__1 = _init_l_Lean_Meta_checkAssignment___closed__1();
lean_mark_persistent(l_Lean_Meta_checkAssignment___closed__1);
l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__1 = _init_l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__1);
l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__2 = _init_l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__2();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__2);
l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__3 = _init_l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__3();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_14__processAssignmentFOApprox___main___closed__3);
l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__1 = _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__1);
l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__2 = _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__2();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__2);
l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__3 = _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__3();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__3);
l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4 = _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__4);
l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5 = _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__5);
l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__6 = _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__6();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__6);
l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__7 = _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__7();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__7);
l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8 = _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__8);
l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__9 = _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__9();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__9);
l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__10 = _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__10();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__10);
l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__11 = _init_l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__11();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_17__processAssignmentAux___main___closed__11);
l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment___closed__1 = _init_l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_18__processAssignment___closed__1);
l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__1 = _init_l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__1);
l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2 = _init_l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__2);
l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__3 = _init_l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__3();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__3);
l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__4 = _init_l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__4();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__4);
l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__5 = _init_l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__5();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_21__isDefEqLeft___closed__5);
l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__1 = _init_l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__1);
l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__2 = _init_l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__2();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__2);
l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__3 = _init_l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__3();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_22__isDefEqRight___closed__3);
l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__1 = _init_l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__1);
l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__2 = _init_l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__2();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__2);
l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__3 = _init_l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__3();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_23__isDefEqLeftRight___closed__3);
l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__1 = _init_l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__1);
l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__2 = _init_l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__2);
l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__3 = _init_l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Meta_try___at___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___spec__1___lambda__2___closed__3);
l___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___closed__1 = _init_l___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_24__tryHeuristic___closed__1);
l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__1 = _init_l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__1);
l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__2 = _init_l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__2();
lean_mark_persistent(l___private_Init_Lean_Meta_ExprDefEq_41__unstuckMVar___closed__2);
l_Lean_Meta_isExprDefEqAuxImpl___closed__1 = _init_l_Lean_Meta_isExprDefEqAuxImpl___closed__1();
lean_mark_persistent(l_Lean_Meta_isExprDefEqAuxImpl___closed__1);
l_Lean_Meta_isExprDefEqAuxImpl___closed__2 = _init_l_Lean_Meta_isExprDefEqAuxImpl___closed__2();
lean_mark_persistent(l_Lean_Meta_isExprDefEqAuxImpl___closed__2);
l_Lean_Meta_setIsExprDefEqAuxRef___closed__1 = _init_l_Lean_Meta_setIsExprDefEqAuxRef___closed__1();
lean_mark_persistent(l_Lean_Meta_setIsExprDefEqAuxRef___closed__1);
res = l_Lean_Meta_setIsExprDefEqAuxRef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif