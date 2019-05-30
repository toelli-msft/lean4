// Lean compiler output
// Module: init.lean.parser.notation
// Imports: init.lean.parser.token
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_Lean_Parser_withTrailing___rarg___lambda__1(obj*, obj*);
obj* l_Lean_Parser_command_reserveMixfix_HasView_x27;
obj* l_Lean_Parser_command_notation_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_transition_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__mkStringResult___rarg(obj*, obj*);
obj* l_List_mfoldl___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_mixfix_kind_Parser___closed__1;
obj* l_Lean_Parser_raw_view___rarg(obj*, obj*, obj*, obj*, obj*, uint8);
obj* l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_transition_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_precedenceLit;
obj* l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_NotationSpec_binder;
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_Lean_Parser_command_notation_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_foldActionFolder;
obj* l_Lean_Parser_raw_view___rarg___lambda__1___boxed(obj*);
extern obj* l_Lean_Parser_TermParserM_Lean_Parser_MonadRec;
obj* l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_Parser_Lean_Parser_HasView(obj*);
obj* l_Lean_Parser_command_NotationSpec_transition;
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__3___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Combinators_anyOf___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_DList_singleton___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_command_notationLike_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_rule_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_reserveNotation_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_symbol_tokens___rarg(obj*, obj*);
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView;
obj* l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasView;
obj* l_ReaderT_bind___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__5___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_notation_Parser_Lean_Parser_HasTokens;
uint8 l_String_isEmpty(obj*);
obj* l_Lean_Parser_command_reserveMixfix;
obj* l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__1;
extern obj* l_Lean_Parser_Combinators_choiceAux___main___rarg___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedence_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_unquotedSymbol_tokens;
obj* l_Lean_Parser_command_NotationSpec_transition_Parser___closed__1;
obj* l_Lean_Parser_command_mixfix_HasView_x27;
obj* l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens(obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__7;
obj* l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27;
extern obj* l_mjoin___rarg___closed__1;
obj* l_Lean_Parser_command_NotationSpec_transition_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__4;
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__2;
obj* l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3;
extern obj* l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
extern obj* l_Lean_Parser_finishCommentBlock___closed__2;
obj* l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__4;
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_mixfix;
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_withTrailing___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__6___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_notationLike_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_actionKind_HasView;
obj* l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_NotationSpec_foldAction_HasView;
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__1;
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__3___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__3;
obj* l_Lean_Parser_command_reserveMixfix_HasView;
obj* l_Lean_Parser_command_NotationSpec_binders_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_binders_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_RecT_recurse___at_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__1;
obj* l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__2;
extern obj* l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__3;
obj* l_Function_comp___rarg(obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_ParsecT_labelsMkRes___rarg(obj*, obj*);
uint32 l_String_OldIterator_curr___main(obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27;
obj* l_List_reverse___rarg(obj*);
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__3(obj*);
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_scopedAction_HasView;
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1___closed__1;
obj* l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4(obj*);
uint8 l_Lean_Parser_Syntax_isOfKind___main(obj*, obj*);
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__3;
obj* l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_MonadParsec_takeWhile___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__1(obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___boxed(obj*);
obj* l_ReaderT_bind___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__5(obj*, obj*);
obj* l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1;
extern obj* l_Lean_Parser_TermParserM_Alternative;
obj* l_Lean_Parser_command_NotationSpec_HasView_x27___elambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedence_Parser___closed__1;
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
obj* l_String_OldIterator_remaining___main(obj*);
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___elambda__1(obj*);
extern obj* l_Lean_Parser_detailIdent_HasView_x27___elambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView;
obj* l_Lean_Parser_command_reserveNotation_Parser___closed__1;
obj* l_List_map___main___rarg(obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol;
obj* l_Lean_Parser_Combinators_node_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_argument_HasView;
obj* l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_notationLike_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___boxed(obj*);
obj* l_Lean_Parser_command_reserveNotation_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens;
extern obj* l_Lean_Parser_number_HasView;
obj* l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_binder_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedence;
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView;
obj* l_Lean_Parser_Substring_toString(obj*);
obj* l_Lean_Parser_command_notationLike_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1(obj*);
obj* l_Lean_Parser_command_mixfix_HasView;
obj* l_Lean_Parser_command_NotationSpec_HasView;
obj* l_Lean_Parser_command_reserveNotation_HasView;
obj* l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_notationLike;
obj* l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__3;
obj* l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj*);
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___elambda__1___closed__1;
namespace lean {
obj* string_push(obj*, uint32);
}
obj* l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_NotationSpec_rule_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27;
obj* l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_scopedAction;
obj* l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_Parser_Lean_Parser_HasView___closed__1;
obj* l_Lean_Parser_command_NotationSpec_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_whitespace(obj*, obj*, obj*);
obj* l_Lean_Parser_Syntax_asNode___main(obj*);
obj* l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_HasView;
extern obj* l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
obj* l_Lean_Parser_command_notation_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_foldAction_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__3;
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_mkRawRes(obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__3;
obj* l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_NotationSpec_action_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_mixfix_kind;
obj* l_Lean_Parser_command_NotationSpec_binder_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__3;
obj* l_Lean_Parser_Combinators_recurse_view___rarg(obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_action_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_notationLike_Parser_Lean_Parser_HasTokens;
obj* l___private_init_lean_parser_parsec_2__strAux___main(obj*, obj*, obj*);
obj* l_Lean_Parser_command_notation_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote;
obj* l_Lean_Parser_Term_Parser(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_action;
obj* l_Lean_Parser_command_mixfix_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__3;
obj* l_ReaderT_orelse___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__2(obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_mixfix_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_notationLike_HasView;
obj* l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_reserveNotation_HasView_x27___elambda__1___closed__1;
extern obj* l_Lean_Parser_number;
obj* l_Lean_Parser_command_NotationSpec_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1(obj*);
obj* l_String_OldIterator_next___main(obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_notationSymbol;
obj* l_Lean_Parser_command_notation_HasView_x27___elambda__1___closed__1;
extern obj* l_Lean_Parser_Combinators_anyOf___rarg___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_Parser___closed__1;
obj* l_Lean_Parser_Syntax_mkNode(obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_binders_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_List_foldl___main___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat___main(obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_actionKind;
obj* l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l___private_init_lean_parser_combinators_1__many1Aux___main___rarg___closed__1;
obj* l_Lean_Parser_command_NotationSpec_binder_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__2;
obj* l___private_init_lean_parser_combinators_1__many1Aux___main___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_rule_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__1;
extern obj* l_Lean_Parser_noKind;
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_MonadParsec_takeWhile___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_rule_HasView;
obj* l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens;
obj* l_List_append___rarg(obj*, obj*);
obj* l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__4;
extern "C" obj* lean_name_mk_string(obj*, obj*);
extern obj* l_Lean_Parser_Combinators_optional___rarg___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_ParsecT_orelseMkRes___rarg(obj*, obj*);
uint8 l_String_OldIterator_hasNext___main(obj*);
obj* l_Lean_Parser_Term_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_argument;
obj* l_Lean_Parser_command_notation;
obj* l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg(obj*, obj*, obj*, obj*);
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_Lean_Parser_command_reserveNotation_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView;
obj* l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27;
obj* l_Lean_Parser_tokens___rarg(obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_View_toNat___main(obj*);
obj* l_Lean_Parser_command_NotationSpec_argument_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_Parser(obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
obj* l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_ParsecT_tryMkRes___rarg(obj*);
obj* l_Lean_Parser_raw_view___rarg___lambda__2___boxed(obj*);
obj* l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat(obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_View_toNat(obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm;
obj* l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___elambda__1(obj*);
obj* l___private_init_lean_parser_token_3__updateTrailing___main(obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__2;
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l_Lean_Parser_command_NotationSpec_rule_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_foldAction_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Combinators_label_view___rarg(obj*, obj*, obj*, obj*, obj*);
uint8 l_UInt32_decEq(uint32, uint32);
obj* l_Lean_Parser_command_notation_HasView;
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__2(obj*);
obj* l_Lean_Parser_command_NotationSpec_transition_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_mixfix_kind_HasView;
obj* l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_reserveMixfix_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_5__takeWhileAux___main___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__2(obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__1;
extern obj* l_Lean_Parser_maxPrec;
obj* l_Lean_Parser_command_NotationSpec_action_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser(obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceOffset;
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4(obj*);
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__5;
obj* l_Lean_Parser_command_NotationSpec_action_HasView_x27;
obj* l_Lean_Parser_withTrailing___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__6(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___boxed(obj*);
obj* l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__5;
obj* l_Lean_Parser_command_NotationSpec_binders;
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__4;
obj* l_String_trim(obj*);
obj* l_Lean_Parser_ParsecT_bindMkRes___rarg(obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__5;
extern obj* l_Lean_Parser_number_HasView_x27___elambda__1___closed__6;
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_transition_HasView;
extern obj* l_Lean_Parser_TermParserM_Monad;
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_NotationSpec_binder_HasView;
extern "C" obj* lean_name_mk_numeral(obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp;
obj* l_Lean_Parser_command_NotationSpec_binders_HasView;
obj* l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_HasView;
obj* l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__6;
obj* l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_token(obj*, obj*, obj*);
obj* l_Lean_Parser_command_mixfix_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__2(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_List_cons_tokens___rarg(obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_mixfix_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_MonadParsec_strCore___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__4___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_reserveMixfix_Parser___closed__1;
obj* l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__1___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_notationLike_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_NotationSpec_binders_HasView_x27___lambda__1___closed__1;
extern obj* l_Lean_Parser_number_HasView_x27___elambda__1___closed__4;
obj* l_ReaderT_orelse___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_NotationSpec_foldAction;
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_notationLike_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
extern obj* l_Lean_Parser_TermParserM_Lean_Parser_monadBasicParser;
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_MonadParsec_strCore___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__4(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__6;
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_command_mixfix_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser___rarg(obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___elambda__1(obj*);
obj* l___private_init_lean_parser_combinators_1__many1Aux___main___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__3___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_notation_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__2;
obj* l_Lean_Parser_command_NotationSpec_rule_Parser___closed__1;
obj* l_Lean_Parser_command_NotationSpec_argument_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__5;
obj* l_Lean_Parser_command_mixfix_kind_Parser(obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_TermParserM_MonadExcept;
obj* l_String_quote(obj*);
obj* l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_rule;
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_Substring_ofString(obj*);
obj* l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
obj* l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7(obj*, uint8, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_notation_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_NotationSpec_binder_HasView_x27;
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__4;
obj* l_Lean_Parser_command_NotationSpec_unquotedSymbol_View;
obj* l_Lean_Parser_command_reserveNotation;
obj* l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1(obj*);
obj* l_Lean_Parser_MonadParsec_takeWhile___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__1___rarg(obj*, obj*);
extern obj* l_Lean_Parser_Combinators_many___rarg___closed__1;
obj* l_Lean_Parser_Combinators_many___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_precedence_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27;
extern obj* l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedence_HasView;
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___lambda__1___closed__1;
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__2;
obj* l_Lean_Parser_command_NotationSpec;
obj* l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___boxed(obj*);
obj* l_Lean_Parser_command_NotationSpec_transition_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView;
obj* l_Lean_Parser_command_reserveMixfix_HasView_x27___elambda__1(obj*);
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__2;
obj* l_Lean_Parser_number_View_toNat___main(obj*);
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__2___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__2;
extern obj* l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
extern obj* l_Lean_Parser_number_Parser___rarg___lambda__1___closed__1;
obj* l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_NotationSpec_rule_HasView_x27;
obj* l_Lean_Parser_command_NotationSpec_action_HasView;
obj* l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___elambda__1___boxed(obj*);
obj* l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__1;
extern obj* l_String_splitAux___main___closed__1;
obj* l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasTokens;
namespace lean {
obj* string_length(obj*);
}
obj* l_Lean_Parser_RecT_recurse___at_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = lean::apply_5(x_2, x_1, x_3, x_4, x_5, x_6);
return x_7;
}
}
obj* _init_l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_tokens___rarg(x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___closed__1;
return x_2;
}
}
obj* l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_Parser_Lean_Parser_HasView___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("Term");
return x_1;
}
}
obj* l_Lean_Parser_Term_Parser_Lean_Parser_HasView(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
lean::inc(x_1);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_RecT_recurse___at_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___spec__1), 6, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = l_Lean_Parser_TermParserM_Lean_Parser_MonadRec;
x_4 = l_Lean_Parser_Combinators_recurse_view___rarg(x_1, x_3);
lean::dec(x_1);
x_5 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_6 = l_Lean_Parser_TermParserM_Alternative;
x_7 = l_Lean_Parser_Term_Parser_Lean_Parser_HasView___closed__1;
x_8 = l_Lean_Parser_Combinators_label_view___rarg(x_5, x_6, x_2, x_7, x_4);
lean::dec(x_2);
return x_8;
}
}
obj* _init_l_Lean_Parser_Term_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::mk_string("Term");
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = lean::apply_5(x_2, x_1, x_3, x_4, x_5, x_6);
x_8 = !lean::is_exclusive(x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; 
x_9 = lean::cnstr_get(x_7, 0);
x_10 = l_Lean_Parser_Term_Parser___closed__1;
x_11 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_9, x_10);
lean::cnstr_set(x_7, 0, x_11);
return x_7;
}
else
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_12 = lean::cnstr_get(x_7, 0);
x_13 = lean::cnstr_get(x_7, 1);
lean::inc(x_13);
lean::inc(x_12);
lean::dec(x_7);
x_14 = l_Lean_Parser_Term_Parser___closed__1;
x_15 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_12, x_14);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_13);
return x_16;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceLit() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("precedenceLit");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::box(0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_number_HasView;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::apply_1(x_5, x_3);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
x_8 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__1;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_2);
x_11 = l_Lean_Parser_command_NotationSpec_precedenceLit;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_2);
x_15 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__3;
x_16 = l_Lean_Parser_Syntax_mkNode(x_15, x_14);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_2);
x_18 = l_Lean_Parser_command_NotationSpec_precedenceLit;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
return x_19;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_number_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("precedenceLit");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1;
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__2;
x_8 = lean_name_dec_eq(x_5, x_7);
lean::dec(x_5);
if (x_8 == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1;
return x_9;
}
else
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
x_10 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1;
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_6, 0);
lean::inc(x_12);
lean::dec(x_6);
x_13 = l_Lean_Parser_Syntax_asNode___main(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1;
return x_14;
}
else
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
switch (lean::obj_tag(x_16)) {
case 0:
{
obj* x_17; 
lean::dec(x_15);
x_17 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1;
return x_17;
}
case 1:
{
obj* x_18; 
lean::dec(x_16);
lean::dec(x_15);
x_18 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1;
return x_18;
}
default: 
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; uint8 x_23; 
x_19 = lean::cnstr_get(x_15, 1);
lean::inc(x_19);
lean::dec(x_15);
x_20 = lean::cnstr_get(x_16, 0);
lean::inc(x_20);
x_21 = lean::cnstr_get(x_16, 1);
lean::inc(x_21);
lean::dec(x_16);
x_22 = lean::box(0);
x_23 = lean_name_dec_eq(x_20, x_22);
lean::dec(x_20);
if (x_23 == 0)
{
obj* x_24; 
lean::dec(x_21);
lean::dec(x_19);
x_24 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1;
return x_24;
}
else
{
if (lean::obj_tag(x_19) == 0)
{
obj* x_25; 
lean::dec(x_21);
x_25 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1;
return x_25;
}
else
{
obj* x_26; 
x_26 = lean::cnstr_get(x_19, 1);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; uint8 x_29; 
x_27 = lean::cnstr_get(x_19, 0);
lean::inc(x_27);
lean::dec(x_19);
x_28 = lean::mk_nat_obj(0u);
x_29 = lean::nat_dec_eq(x_21, x_28);
lean::dec(x_21);
if (x_29 == 0)
{
obj* x_30; 
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_27);
return x_30;
}
else
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_31 = l_Lean_Parser_number_HasView;
x_32 = lean::cnstr_get(x_31, 0);
lean::inc(x_32);
x_33 = lean::apply_1(x_32, x_27);
x_34 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_34, 0, x_33);
return x_34;
}
}
else
{
obj* x_35; 
lean::dec(x_26);
lean::dec(x_21);
lean::dec(x_19);
x_35 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1;
return x_35;
}
}
}
}
}
}
}
else
{
obj* x_36; 
lean::dec(x_11);
lean::dec(x_6);
x_36 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1;
return x_36;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceLit_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27;
return x_1;
}
}
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
lean::inc(x_3);
lean::inc(x_1);
x_5 = l_Lean_Parser_token(x_1, x_3, x_4);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_5);
if (x_7 == 0)
{
obj* x_8; obj* x_9; uint8 x_10; 
x_8 = lean::cnstr_get(x_5, 1);
x_9 = lean::cnstr_get(x_5, 0);
lean::dec(x_9);
x_10 = !lean::is_exclusive(x_6);
if (x_10 == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; uint8 x_15; 
x_11 = lean::cnstr_get(x_6, 0);
x_12 = lean::cnstr_get(x_6, 1);
x_13 = lean::cnstr_get(x_6, 2);
x_14 = l_Lean_Parser_number;
x_15 = l_Lean_Parser_Syntax_isOfKind___main(x_14, x_11);
if (x_15 == 0)
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; uint8 x_21; 
lean::free_heap_obj(x_6);
lean::dec(x_11);
lean::free_heap_obj(x_5);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_3);
x_17 = lean::box(0);
x_18 = l_String_splitAux___main___closed__1;
x_19 = l_Lean_Parser_number_Parser___rarg___lambda__1___closed__1;
x_20 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_18, x_19, x_16, x_17, x_1, x_12, x_8);
lean::dec(x_1);
lean::dec(x_16);
x_21 = !lean::is_exclusive(x_20);
if (x_21 == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_22 = lean::cnstr_get(x_20, 0);
x_23 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_22);
x_24 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_25 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_24, x_23);
x_26 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_25);
lean::cnstr_set(x_20, 0, x_26);
return x_20;
}
else
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_27 = lean::cnstr_get(x_20, 0);
x_28 = lean::cnstr_get(x_20, 1);
lean::inc(x_28);
lean::inc(x_27);
lean::dec(x_20);
x_29 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_27);
x_30 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_31 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_30, x_29);
x_32 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_31);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_28);
return x_33;
}
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_3);
lean::dec(x_1);
x_34 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
lean::cnstr_set(x_6, 2, x_34);
x_35 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_6);
x_36 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_34, x_35);
x_37 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_36);
lean::cnstr_set(x_5, 0, x_37);
return x_5;
}
}
else
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; uint8 x_42; 
x_38 = lean::cnstr_get(x_6, 0);
x_39 = lean::cnstr_get(x_6, 1);
x_40 = lean::cnstr_get(x_6, 2);
lean::inc(x_40);
lean::inc(x_39);
lean::inc(x_38);
lean::dec(x_6);
x_41 = l_Lean_Parser_number;
x_42 = l_Lean_Parser_Syntax_isOfKind___main(x_41, x_38);
if (x_42 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
lean::dec(x_38);
lean::free_heap_obj(x_5);
x_43 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_43, 0, x_3);
x_44 = lean::box(0);
x_45 = l_String_splitAux___main___closed__1;
x_46 = l_Lean_Parser_number_Parser___rarg___lambda__1___closed__1;
x_47 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_45, x_46, x_43, x_44, x_1, x_39, x_8);
lean::dec(x_1);
lean::dec(x_43);
x_48 = lean::cnstr_get(x_47, 0);
lean::inc(x_48);
x_49 = lean::cnstr_get(x_47, 1);
lean::inc(x_49);
if (lean::is_exclusive(x_47)) {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 1);
 x_50 = x_47;
} else {
 lean::dec_ref(x_47);
 x_50 = lean::box(0);
}
x_51 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_40, x_48);
x_52 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_53 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_52, x_51);
x_54 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_53);
if (lean::is_scalar(x_50)) {
 x_55 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_55 = x_50;
}
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_49);
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_3);
lean::dec(x_1);
x_56 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_57 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_57, 0, x_38);
lean::cnstr_set(x_57, 1, x_39);
lean::cnstr_set(x_57, 2, x_56);
x_58 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_40, x_57);
x_59 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_56, x_58);
x_60 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_59);
lean::cnstr_set(x_5, 0, x_60);
return x_5;
}
}
}
else
{
obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; uint8 x_67; 
x_61 = lean::cnstr_get(x_5, 1);
lean::inc(x_61);
lean::dec(x_5);
x_62 = lean::cnstr_get(x_6, 0);
lean::inc(x_62);
x_63 = lean::cnstr_get(x_6, 1);
lean::inc(x_63);
x_64 = lean::cnstr_get(x_6, 2);
lean::inc(x_64);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_65 = x_6;
} else {
 lean::dec_ref(x_6);
 x_65 = lean::box(0);
}
x_66 = l_Lean_Parser_number;
x_67 = l_Lean_Parser_Syntax_isOfKind___main(x_66, x_62);
if (x_67 == 0)
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
lean::dec(x_65);
lean::dec(x_62);
x_68 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_68, 0, x_3);
x_69 = lean::box(0);
x_70 = l_String_splitAux___main___closed__1;
x_71 = l_Lean_Parser_number_Parser___rarg___lambda__1___closed__1;
x_72 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_70, x_71, x_68, x_69, x_1, x_63, x_61);
lean::dec(x_1);
lean::dec(x_68);
x_73 = lean::cnstr_get(x_72, 0);
lean::inc(x_73);
x_74 = lean::cnstr_get(x_72, 1);
lean::inc(x_74);
if (lean::is_exclusive(x_72)) {
 lean::cnstr_release(x_72, 0);
 lean::cnstr_release(x_72, 1);
 x_75 = x_72;
} else {
 lean::dec_ref(x_72);
 x_75 = lean::box(0);
}
x_76 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_64, x_73);
x_77 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_78 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_77, x_76);
x_79 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_78);
if (lean::is_scalar(x_75)) {
 x_80 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_80 = x_75;
}
lean::cnstr_set(x_80, 0, x_79);
lean::cnstr_set(x_80, 1, x_74);
return x_80;
}
else
{
obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
lean::dec(x_3);
lean::dec(x_1);
x_81 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
if (lean::is_scalar(x_65)) {
 x_82 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_82 = x_65;
}
lean::cnstr_set(x_82, 0, x_62);
lean::cnstr_set(x_82, 1, x_63);
lean::cnstr_set(x_82, 2, x_81);
x_83 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_64, x_82);
x_84 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_81, x_83);
x_85 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_84);
x_86 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_86, 0, x_85);
lean::cnstr_set(x_86, 1, x_61);
return x_86;
}
}
}
else
{
uint8 x_87; 
lean::dec(x_3);
lean::dec(x_1);
x_87 = !lean::is_exclusive(x_5);
if (x_87 == 0)
{
obj* x_88; uint8 x_89; 
x_88 = lean::cnstr_get(x_5, 0);
lean::dec(x_88);
x_89 = !lean::is_exclusive(x_6);
if (x_89 == 0)
{
obj* x_90; obj* x_91; obj* x_92; 
x_90 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_91 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_90, x_6);
x_92 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_91);
lean::cnstr_set(x_5, 0, x_92);
return x_5;
}
else
{
obj* x_93; uint8 x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; 
x_93 = lean::cnstr_get(x_6, 0);
x_94 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
lean::inc(x_93);
lean::dec(x_6);
x_95 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_95, 0, x_93);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_94);
x_96 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_97 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_96, x_95);
x_98 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_97);
lean::cnstr_set(x_5, 0, x_98);
return x_5;
}
}
else
{
obj* x_99; obj* x_100; uint8 x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
x_99 = lean::cnstr_get(x_5, 1);
lean::inc(x_99);
lean::dec(x_5);
x_100 = lean::cnstr_get(x_6, 0);
lean::inc(x_100);
x_101 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_102 = x_6;
} else {
 lean::dec_ref(x_6);
 x_102 = lean::box(0);
}
if (lean::is_scalar(x_102)) {
 x_103 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_103 = x_102;
}
lean::cnstr_set(x_103, 0, x_100);
lean::cnstr_set_scalar(x_103, sizeof(void*)*1, x_101);
x_104 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_105 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_104, x_103);
x_106 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_105);
x_107 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_107, 0, x_106);
lean::cnstr_set(x_107, 1, x_99);
return x_107;
}
}
}
}
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; 
lean::inc(x_5);
lean::inc(x_3);
x_7 = l_Lean_Parser_token(x_3, x_5, x_6);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_9 = lean::cnstr_get(x_7, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_10 = x_7;
} else {
 lean::dec_ref(x_7);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
x_12 = lean::cnstr_get(x_8, 1);
lean::inc(x_12);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 lean::cnstr_release(x_8, 2);
 x_14 = x_8;
} else {
 lean::dec_ref(x_8);
 x_14 = lean::box(0);
}
switch (lean::obj_tag(x_11)) {
case 0:
{
obj* x_91; obj* x_92; obj* x_93; 
x_91 = lean::cnstr_get(x_11, 0);
lean::inc(x_91);
x_92 = lean::cnstr_get(x_91, 1);
lean::inc(x_92);
lean::dec(x_91);
x_93 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_93, 0, x_92);
x_15 = x_93;
goto block_90;
}
case 1:
{
obj* x_94; obj* x_95; obj* x_96; obj* x_97; 
x_94 = lean::cnstr_get(x_11, 0);
lean::inc(x_94);
x_95 = lean::cnstr_get(x_94, 1);
lean::inc(x_95);
lean::dec(x_94);
x_96 = l_Lean_Parser_Substring_toString(x_95);
lean::dec(x_95);
x_97 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_97, 0, x_96);
x_15 = x_97;
goto block_90;
}
default: 
{
obj* x_98; 
x_98 = lean::box(0);
x_15 = x_98;
goto block_90;
}
}
block_90:
{
uint8 x_16; 
if (lean::obj_tag(x_15) == 0)
{
uint8 x_85; 
x_85 = 1;
x_16 = x_85;
goto block_84;
}
else
{
obj* x_86; uint8 x_87; 
x_86 = lean::cnstr_get(x_15, 0);
lean::inc(x_86);
lean::dec(x_15);
x_87 = lean::string_dec_eq(x_86, x_1);
lean::dec(x_86);
if (x_87 == 0)
{
uint8 x_88; 
x_88 = 1;
x_16 = x_88;
goto block_84;
}
else
{
uint8 x_89; 
x_89 = 0;
x_16 = x_89;
goto block_84;
}
}
block_84:
{
if (x_16 == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_1);
x_17 = l_Lean_Parser_finishCommentBlock___closed__2;
if (lean::is_scalar(x_14)) {
 x_18 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_18 = x_14;
}
lean::cnstr_set(x_18, 0, x_11);
lean::cnstr_set(x_18, 1, x_12);
lean::cnstr_set(x_18, 2, x_17);
x_19 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_18);
x_20 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_21 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_20, x_19);
x_22 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_21);
if (lean::is_scalar(x_10)) {
 x_23 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_23 = x_10;
}
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_9);
return x_23;
}
else
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_14);
lean::dec(x_10);
x_24 = l_String_quote(x_1);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_25, 0, x_24);
x_26 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_26, 0, x_5);
x_27 = lean::box(0);
x_28 = l_String_splitAux___main___closed__1;
x_29 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_28, x_25, x_26, x_27, x_3, x_12, x_9);
lean::dec(x_3);
lean::dec(x_26);
x_30 = lean::cnstr_get(x_29, 0);
lean::inc(x_30);
if (lean::obj_tag(x_30) == 0)
{
uint8 x_31; 
x_31 = !lean::is_exclusive(x_29);
if (x_31 == 0)
{
obj* x_32; uint8 x_33; 
x_32 = lean::cnstr_get(x_29, 0);
lean::dec(x_32);
x_33 = !lean::is_exclusive(x_30);
if (x_33 == 0)
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
x_34 = lean::cnstr_get(x_30, 2);
x_35 = lean::cnstr_get(x_30, 0);
lean::dec(x_35);
x_36 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
lean::cnstr_set(x_30, 2, x_36);
lean::cnstr_set(x_30, 0, x_11);
x_37 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_34, x_30);
x_38 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_37);
x_39 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_36, x_38);
x_40 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_39);
lean::cnstr_set(x_29, 0, x_40);
return x_29;
}
else
{
obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_41 = lean::cnstr_get(x_30, 1);
x_42 = lean::cnstr_get(x_30, 2);
lean::inc(x_42);
lean::inc(x_41);
lean::dec(x_30);
x_43 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_44 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_44, 0, x_11);
lean::cnstr_set(x_44, 1, x_41);
lean::cnstr_set(x_44, 2, x_43);
x_45 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_42, x_44);
x_46 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_45);
x_47 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_43, x_46);
x_48 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_47);
lean::cnstr_set(x_29, 0, x_48);
return x_29;
}
}
else
{
obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_49 = lean::cnstr_get(x_29, 1);
lean::inc(x_49);
lean::dec(x_29);
x_50 = lean::cnstr_get(x_30, 1);
lean::inc(x_50);
x_51 = lean::cnstr_get(x_30, 2);
lean::inc(x_51);
if (lean::is_exclusive(x_30)) {
 lean::cnstr_release(x_30, 0);
 lean::cnstr_release(x_30, 1);
 lean::cnstr_release(x_30, 2);
 x_52 = x_30;
} else {
 lean::dec_ref(x_30);
 x_52 = lean::box(0);
}
x_53 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
if (lean::is_scalar(x_52)) {
 x_54 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_54 = x_52;
}
lean::cnstr_set(x_54, 0, x_11);
lean::cnstr_set(x_54, 1, x_50);
lean::cnstr_set(x_54, 2, x_53);
x_55 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_51, x_54);
x_56 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_55);
x_57 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_53, x_56);
x_58 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_57);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_49);
return x_59;
}
}
else
{
uint8 x_60; 
lean::dec(x_11);
x_60 = !lean::is_exclusive(x_29);
if (x_60 == 0)
{
obj* x_61; uint8 x_62; 
x_61 = lean::cnstr_get(x_29, 0);
lean::dec(x_61);
x_62 = !lean::is_exclusive(x_30);
if (x_62 == 0)
{
obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_63 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_30);
x_64 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_65 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_64, x_63);
x_66 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_65);
lean::cnstr_set(x_29, 0, x_66);
return x_29;
}
else
{
obj* x_67; uint8 x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
x_67 = lean::cnstr_get(x_30, 0);
x_68 = lean::cnstr_get_scalar<uint8>(x_30, sizeof(void*)*1);
lean::inc(x_67);
lean::dec(x_30);
x_69 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_69, 0, x_67);
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_68);
x_70 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_69);
x_71 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_72 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_71, x_70);
x_73 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_72);
lean::cnstr_set(x_29, 0, x_73);
return x_29;
}
}
else
{
obj* x_74; obj* x_75; uint8 x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
x_74 = lean::cnstr_get(x_29, 1);
lean::inc(x_74);
lean::dec(x_29);
x_75 = lean::cnstr_get(x_30, 0);
lean::inc(x_75);
x_76 = lean::cnstr_get_scalar<uint8>(x_30, sizeof(void*)*1);
if (lean::is_exclusive(x_30)) {
 lean::cnstr_release(x_30, 0);
 x_77 = x_30;
} else {
 lean::dec_ref(x_30);
 x_77 = lean::box(0);
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
lean::cnstr_set_scalar(x_78, sizeof(void*)*1, x_76);
x_79 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_78);
x_80 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_81 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_80, x_79);
x_82 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_81);
x_83 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_74);
return x_83;
}
}
}
}
}
}
else
{
uint8 x_99; 
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_1);
x_99 = !lean::is_exclusive(x_7);
if (x_99 == 0)
{
obj* x_100; uint8 x_101; 
x_100 = lean::cnstr_get(x_7, 0);
lean::dec(x_100);
x_101 = !lean::is_exclusive(x_8);
if (x_101 == 0)
{
obj* x_102; obj* x_103; obj* x_104; 
x_102 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_103 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_102, x_8);
x_104 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_103);
lean::cnstr_set(x_7, 0, x_104);
return x_7;
}
else
{
obj* x_105; uint8 x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; 
x_105 = lean::cnstr_get(x_8, 0);
x_106 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
lean::inc(x_105);
lean::dec(x_8);
x_107 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_107, 0, x_105);
lean::cnstr_set_scalar(x_107, sizeof(void*)*1, x_106);
x_108 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_109 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_108, x_107);
x_110 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_109);
lean::cnstr_set(x_7, 0, x_110);
return x_7;
}
}
else
{
obj* x_111; obj* x_112; uint8 x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
x_111 = lean::cnstr_get(x_7, 1);
lean::inc(x_111);
lean::dec(x_7);
x_112 = lean::cnstr_get(x_8, 0);
lean::inc(x_112);
x_113 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 x_114 = x_8;
} else {
 lean::dec_ref(x_8);
 x_114 = lean::box(0);
}
if (lean::is_scalar(x_114)) {
 x_115 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_115 = x_114;
}
lean::cnstr_set(x_115, 0, x_112);
lean::cnstr_set_scalar(x_115, sizeof(void*)*1, x_113);
x_116 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_117 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_116, x_115);
x_118 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_117);
x_119 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_119, 0, x_118);
lean::cnstr_set(x_119, 1, x_111);
return x_119;
}
}
}
}
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_10; uint8 x_11; obj* x_12; obj* x_13; 
x_10 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_1);
lean::cnstr_set(x_10, 2, x_2);
lean::cnstr_set(x_10, 3, x_4);
x_11 = 0;
x_12 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set_scalar(x_12, sizeof(void*)*1, x_11);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_9);
return x_13;
}
else
{
obj* x_14; obj* x_15; uint8 x_16; obj* x_17; obj* x_18; 
lean::dec(x_8);
x_14 = lean::cnstr_get(x_3, 0);
lean::inc(x_14);
x_15 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_1);
lean::cnstr_set(x_15, 2, x_2);
lean::cnstr_set(x_15, 3, x_4);
x_16 = 0;
x_17 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set_scalar(x_17, sizeof(void*)*1, x_16);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_9);
return x_18;
}
}
}
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg___boxed), 9, 0);
return x_2;
}
}
obj* l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_2);
x_8 = lean::box(0);
x_9 = l_Lean_Parser_Combinators_choiceAux___main___rarg___closed__1;
x_10 = l_mjoin___rarg___closed__1;
x_11 = l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg(x_9, x_10, x_8, x_8, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
return x_11;
}
else
{
uint8 x_12; 
x_12 = !lean::is_exclusive(x_1);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_13 = lean::cnstr_get(x_1, 0);
x_14 = lean::cnstr_get(x_1, 1);
x_15 = lean::mk_nat_obj(1u);
x_16 = lean::nat_add(x_2, x_15);
lean::inc(x_6);
lean::inc(x_5);
lean::inc(x_4);
lean::inc(x_3);
x_17 = lean::apply_5(x_13, x_3, x_4, x_5, x_6, x_7);
x_18 = lean::cnstr_get(x_17, 0);
lean::inc(x_18);
if (lean::obj_tag(x_18) == 0)
{
uint8 x_19; 
x_19 = !lean::is_exclusive(x_17);
if (x_19 == 0)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_17, 1);
x_21 = lean::cnstr_get(x_17, 0);
lean::dec(x_21);
x_22 = !lean::is_exclusive(x_18);
if (x_22 == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_23 = lean::cnstr_get(x_18, 0);
x_24 = lean::cnstr_get(x_18, 2);
x_25 = lean::box(0);
x_26 = lean_name_mk_numeral(x_25, x_2);
x_27 = lean::box(0);
lean::cnstr_set(x_1, 1, x_27);
lean::cnstr_set(x_1, 0, x_23);
x_28 = l_Lean_Parser_Syntax_mkNode(x_26, x_1);
x_29 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
lean::cnstr_set(x_18, 2, x_29);
lean::cnstr_set(x_18, 0, x_28);
x_30 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_24, x_18);
if (lean::obj_tag(x_30) == 0)
{
lean::dec(x_16);
lean::dec(x_14);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::cnstr_set(x_17, 0, x_30);
return x_17;
}
else
{
uint8 x_31; 
x_31 = lean::cnstr_get_scalar<uint8>(x_30, sizeof(void*)*1);
if (x_31 == 0)
{
obj* x_32; obj* x_33; uint8 x_34; 
lean::free_heap_obj(x_17);
x_32 = lean::cnstr_get(x_30, 0);
lean::inc(x_32);
lean::dec(x_30);
x_33 = l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3(x_14, x_16, x_3, x_4, x_5, x_6, x_20);
x_34 = !lean::is_exclusive(x_33);
if (x_34 == 0)
{
obj* x_35; obj* x_36; 
x_35 = lean::cnstr_get(x_33, 0);
x_36 = l_Lean_Parser_ParsecT_orelseMkRes___rarg(x_32, x_35);
lean::cnstr_set(x_33, 0, x_36);
return x_33;
}
else
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
x_37 = lean::cnstr_get(x_33, 0);
x_38 = lean::cnstr_get(x_33, 1);
lean::inc(x_38);
lean::inc(x_37);
lean::dec(x_33);
x_39 = l_Lean_Parser_ParsecT_orelseMkRes___rarg(x_32, x_37);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_38);
return x_40;
}
}
else
{
lean::dec(x_16);
lean::dec(x_14);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::cnstr_set(x_17, 0, x_30);
return x_17;
}
}
}
else
{
obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
x_41 = lean::cnstr_get(x_18, 0);
x_42 = lean::cnstr_get(x_18, 1);
x_43 = lean::cnstr_get(x_18, 2);
lean::inc(x_43);
lean::inc(x_42);
lean::inc(x_41);
lean::dec(x_18);
x_44 = lean::box(0);
x_45 = lean_name_mk_numeral(x_44, x_2);
x_46 = lean::box(0);
lean::cnstr_set(x_1, 1, x_46);
lean::cnstr_set(x_1, 0, x_41);
x_47 = l_Lean_Parser_Syntax_mkNode(x_45, x_1);
x_48 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_49 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_49, 0, x_47);
lean::cnstr_set(x_49, 1, x_42);
lean::cnstr_set(x_49, 2, x_48);
x_50 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_43, x_49);
if (lean::obj_tag(x_50) == 0)
{
lean::dec(x_16);
lean::dec(x_14);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::cnstr_set(x_17, 0, x_50);
return x_17;
}
else
{
uint8 x_51; 
x_51 = lean::cnstr_get_scalar<uint8>(x_50, sizeof(void*)*1);
if (x_51 == 0)
{
obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; 
lean::free_heap_obj(x_17);
x_52 = lean::cnstr_get(x_50, 0);
lean::inc(x_52);
lean::dec(x_50);
x_53 = l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3(x_14, x_16, x_3, x_4, x_5, x_6, x_20);
x_54 = lean::cnstr_get(x_53, 0);
lean::inc(x_54);
x_55 = lean::cnstr_get(x_53, 1);
lean::inc(x_55);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 lean::cnstr_release(x_53, 1);
 x_56 = x_53;
} else {
 lean::dec_ref(x_53);
 x_56 = lean::box(0);
}
x_57 = l_Lean_Parser_ParsecT_orelseMkRes___rarg(x_52, x_54);
if (lean::is_scalar(x_56)) {
 x_58 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_58 = x_56;
}
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_55);
return x_58;
}
else
{
lean::dec(x_16);
lean::dec(x_14);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::cnstr_set(x_17, 0, x_50);
return x_17;
}
}
}
}
else
{
obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_59 = lean::cnstr_get(x_17, 1);
lean::inc(x_59);
lean::dec(x_17);
x_60 = lean::cnstr_get(x_18, 0);
lean::inc(x_60);
x_61 = lean::cnstr_get(x_18, 1);
lean::inc(x_61);
x_62 = lean::cnstr_get(x_18, 2);
lean::inc(x_62);
if (lean::is_exclusive(x_18)) {
 lean::cnstr_release(x_18, 0);
 lean::cnstr_release(x_18, 1);
 lean::cnstr_release(x_18, 2);
 x_63 = x_18;
} else {
 lean::dec_ref(x_18);
 x_63 = lean::box(0);
}
x_64 = lean::box(0);
x_65 = lean_name_mk_numeral(x_64, x_2);
x_66 = lean::box(0);
lean::cnstr_set(x_1, 1, x_66);
lean::cnstr_set(x_1, 0, x_60);
x_67 = l_Lean_Parser_Syntax_mkNode(x_65, x_1);
x_68 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
if (lean::is_scalar(x_63)) {
 x_69 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_69 = x_63;
}
lean::cnstr_set(x_69, 0, x_67);
lean::cnstr_set(x_69, 1, x_61);
lean::cnstr_set(x_69, 2, x_68);
x_70 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_62, x_69);
if (lean::obj_tag(x_70) == 0)
{
obj* x_71; 
lean::dec(x_16);
lean::dec(x_14);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_59);
return x_71;
}
else
{
uint8 x_72; 
x_72 = lean::cnstr_get_scalar<uint8>(x_70, sizeof(void*)*1);
if (x_72 == 0)
{
obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; 
x_73 = lean::cnstr_get(x_70, 0);
lean::inc(x_73);
lean::dec(x_70);
x_74 = l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3(x_14, x_16, x_3, x_4, x_5, x_6, x_59);
x_75 = lean::cnstr_get(x_74, 0);
lean::inc(x_75);
x_76 = lean::cnstr_get(x_74, 1);
lean::inc(x_76);
if (lean::is_exclusive(x_74)) {
 lean::cnstr_release(x_74, 0);
 lean::cnstr_release(x_74, 1);
 x_77 = x_74;
} else {
 lean::dec_ref(x_74);
 x_77 = lean::box(0);
}
x_78 = l_Lean_Parser_ParsecT_orelseMkRes___rarg(x_73, x_75);
if (lean::is_scalar(x_77)) {
 x_79 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_79 = x_77;
}
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_76);
return x_79;
}
else
{
obj* x_80; 
lean::dec(x_16);
lean::dec(x_14);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_70);
lean::cnstr_set(x_80, 1, x_59);
return x_80;
}
}
}
}
else
{
uint8 x_81; 
lean::free_heap_obj(x_1);
lean::dec(x_2);
x_81 = lean::cnstr_get_scalar<uint8>(x_18, sizeof(void*)*1);
if (x_81 == 0)
{
obj* x_82; obj* x_83; obj* x_84; uint8 x_85; 
x_82 = lean::cnstr_get(x_17, 1);
lean::inc(x_82);
lean::dec(x_17);
x_83 = lean::cnstr_get(x_18, 0);
lean::inc(x_83);
lean::dec(x_18);
x_84 = l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3(x_14, x_16, x_3, x_4, x_5, x_6, x_82);
x_85 = !lean::is_exclusive(x_84);
if (x_85 == 0)
{
obj* x_86; obj* x_87; 
x_86 = lean::cnstr_get(x_84, 0);
x_87 = l_Lean_Parser_ParsecT_orelseMkRes___rarg(x_83, x_86);
lean::cnstr_set(x_84, 0, x_87);
return x_84;
}
else
{
obj* x_88; obj* x_89; obj* x_90; obj* x_91; 
x_88 = lean::cnstr_get(x_84, 0);
x_89 = lean::cnstr_get(x_84, 1);
lean::inc(x_89);
lean::inc(x_88);
lean::dec(x_84);
x_90 = l_Lean_Parser_ParsecT_orelseMkRes___rarg(x_83, x_88);
x_91 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_89);
return x_91;
}
}
else
{
uint8 x_92; 
lean::dec(x_16);
lean::dec(x_14);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
x_92 = !lean::is_exclusive(x_17);
if (x_92 == 0)
{
obj* x_93; uint8 x_94; 
x_93 = lean::cnstr_get(x_17, 0);
lean::dec(x_93);
x_94 = !lean::is_exclusive(x_18);
if (x_94 == 0)
{
return x_17;
}
else
{
obj* x_95; obj* x_96; 
x_95 = lean::cnstr_get(x_18, 0);
lean::inc(x_95);
lean::dec(x_18);
x_96 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_96, 0, x_95);
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_81);
lean::cnstr_set(x_17, 0, x_96);
return x_17;
}
}
else
{
obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; 
x_97 = lean::cnstr_get(x_17, 1);
lean::inc(x_97);
lean::dec(x_17);
x_98 = lean::cnstr_get(x_18, 0);
lean::inc(x_98);
if (lean::is_exclusive(x_18)) {
 lean::cnstr_release(x_18, 0);
 x_99 = x_18;
} else {
 lean::dec_ref(x_18);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_99)) {
 x_100 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_100 = x_99;
}
lean::cnstr_set(x_100, 0, x_98);
lean::cnstr_set_scalar(x_100, sizeof(void*)*1, x_81);
x_101 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_101, 0, x_100);
lean::cnstr_set(x_101, 1, x_97);
return x_101;
}
}
}
}
else
{
obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
x_102 = lean::cnstr_get(x_1, 0);
x_103 = lean::cnstr_get(x_1, 1);
lean::inc(x_103);
lean::inc(x_102);
lean::dec(x_1);
x_104 = lean::mk_nat_obj(1u);
x_105 = lean::nat_add(x_2, x_104);
lean::inc(x_6);
lean::inc(x_5);
lean::inc(x_4);
lean::inc(x_3);
x_106 = lean::apply_5(x_102, x_3, x_4, x_5, x_6, x_7);
x_107 = lean::cnstr_get(x_106, 0);
lean::inc(x_107);
if (lean::obj_tag(x_107) == 0)
{
obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; 
x_108 = lean::cnstr_get(x_106, 1);
lean::inc(x_108);
if (lean::is_exclusive(x_106)) {
 lean::cnstr_release(x_106, 0);
 lean::cnstr_release(x_106, 1);
 x_109 = x_106;
} else {
 lean::dec_ref(x_106);
 x_109 = lean::box(0);
}
x_110 = lean::cnstr_get(x_107, 0);
lean::inc(x_110);
x_111 = lean::cnstr_get(x_107, 1);
lean::inc(x_111);
x_112 = lean::cnstr_get(x_107, 2);
lean::inc(x_112);
if (lean::is_exclusive(x_107)) {
 lean::cnstr_release(x_107, 0);
 lean::cnstr_release(x_107, 1);
 lean::cnstr_release(x_107, 2);
 x_113 = x_107;
} else {
 lean::dec_ref(x_107);
 x_113 = lean::box(0);
}
x_114 = lean::box(0);
x_115 = lean_name_mk_numeral(x_114, x_2);
x_116 = lean::box(0);
x_117 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_117, 0, x_110);
lean::cnstr_set(x_117, 1, x_116);
x_118 = l_Lean_Parser_Syntax_mkNode(x_115, x_117);
x_119 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
if (lean::is_scalar(x_113)) {
 x_120 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_120 = x_113;
}
lean::cnstr_set(x_120, 0, x_118);
lean::cnstr_set(x_120, 1, x_111);
lean::cnstr_set(x_120, 2, x_119);
x_121 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_112, x_120);
if (lean::obj_tag(x_121) == 0)
{
obj* x_122; 
lean::dec(x_105);
lean::dec(x_103);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
if (lean::is_scalar(x_109)) {
 x_122 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_122 = x_109;
}
lean::cnstr_set(x_122, 0, x_121);
lean::cnstr_set(x_122, 1, x_108);
return x_122;
}
else
{
uint8 x_123; 
x_123 = lean::cnstr_get_scalar<uint8>(x_121, sizeof(void*)*1);
if (x_123 == 0)
{
obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; 
lean::dec(x_109);
x_124 = lean::cnstr_get(x_121, 0);
lean::inc(x_124);
lean::dec(x_121);
x_125 = l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3(x_103, x_105, x_3, x_4, x_5, x_6, x_108);
x_126 = lean::cnstr_get(x_125, 0);
lean::inc(x_126);
x_127 = lean::cnstr_get(x_125, 1);
lean::inc(x_127);
if (lean::is_exclusive(x_125)) {
 lean::cnstr_release(x_125, 0);
 lean::cnstr_release(x_125, 1);
 x_128 = x_125;
} else {
 lean::dec_ref(x_125);
 x_128 = lean::box(0);
}
x_129 = l_Lean_Parser_ParsecT_orelseMkRes___rarg(x_124, x_126);
if (lean::is_scalar(x_128)) {
 x_130 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_130 = x_128;
}
lean::cnstr_set(x_130, 0, x_129);
lean::cnstr_set(x_130, 1, x_127);
return x_130;
}
else
{
obj* x_131; 
lean::dec(x_105);
lean::dec(x_103);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
if (lean::is_scalar(x_109)) {
 x_131 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_131 = x_109;
}
lean::cnstr_set(x_131, 0, x_121);
lean::cnstr_set(x_131, 1, x_108);
return x_131;
}
}
}
else
{
uint8 x_132; 
lean::dec(x_2);
x_132 = lean::cnstr_get_scalar<uint8>(x_107, sizeof(void*)*1);
if (x_132 == 0)
{
obj* x_133; obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
x_133 = lean::cnstr_get(x_106, 1);
lean::inc(x_133);
lean::dec(x_106);
x_134 = lean::cnstr_get(x_107, 0);
lean::inc(x_134);
lean::dec(x_107);
x_135 = l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3(x_103, x_105, x_3, x_4, x_5, x_6, x_133);
x_136 = lean::cnstr_get(x_135, 0);
lean::inc(x_136);
x_137 = lean::cnstr_get(x_135, 1);
lean::inc(x_137);
if (lean::is_exclusive(x_135)) {
 lean::cnstr_release(x_135, 0);
 lean::cnstr_release(x_135, 1);
 x_138 = x_135;
} else {
 lean::dec_ref(x_135);
 x_138 = lean::box(0);
}
x_139 = l_Lean_Parser_ParsecT_orelseMkRes___rarg(x_134, x_136);
if (lean::is_scalar(x_138)) {
 x_140 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_140 = x_138;
}
lean::cnstr_set(x_140, 0, x_139);
lean::cnstr_set(x_140, 1, x_137);
return x_140;
}
else
{
obj* x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; 
lean::dec(x_105);
lean::dec(x_103);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
x_141 = lean::cnstr_get(x_106, 1);
lean::inc(x_141);
if (lean::is_exclusive(x_106)) {
 lean::cnstr_release(x_106, 0);
 lean::cnstr_release(x_106, 1);
 x_142 = x_106;
} else {
 lean::dec_ref(x_106);
 x_142 = lean::box(0);
}
x_143 = lean::cnstr_get(x_107, 0);
lean::inc(x_143);
if (lean::is_exclusive(x_107)) {
 lean::cnstr_release(x_107, 0);
 x_144 = x_107;
} else {
 lean::dec_ref(x_107);
 x_144 = lean::box(0);
}
if (lean::is_scalar(x_144)) {
 x_145 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_145 = x_144;
}
lean::cnstr_set(x_145, 0, x_143);
lean::cnstr_set_scalar(x_145, sizeof(void*)*1, x_132);
if (lean::is_scalar(x_142)) {
 x_146 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_146 = x_142;
}
lean::cnstr_set(x_146, 0, x_145);
lean::cnstr_set(x_146, 1, x_141);
return x_146;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_List_cons_tokens___rarg(x_1, x_1);
x_3 = l_Lean_Parser_List_cons_tokens___rarg(x_1, x_2);
lean::dec(x_2);
x_4 = l_Lean_Parser_tokens___rarg(x_3);
lean::dec(x_3);
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_1);
lean::dec(x_4);
x_6 = l_Lean_Parser_tokens___rarg(x_5);
lean::dec(x_5);
return x_6;
}
}
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___rarg(x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_4);
lean::dec(x_2);
return x_7;
}
}
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; 
x_10 = l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean::dec(x_7);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_3);
return x_10;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_1 = lean::mk_string("max");
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___boxed), 1, 0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_4);
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_8, 0, x_6);
lean::closure_set(x_8, 1, x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
x_10 = l_Lean_Parser_TermParserM_Monad;
x_11 = l_Lean_Parser_TermParserM_MonadExcept;
x_12 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_13 = l_Lean_Parser_TermParserM_Alternative;
x_14 = l_Lean_Parser_command_NotationSpec_precedenceLit;
x_15 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView;
x_16 = l_Lean_Parser_Combinators_node_view___rarg(x_10, x_11, x_12, x_13, x_14, x_9, x_15);
lean::dec(x_9);
return x_16;
}
}
obj* l_List_mfoldl___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
x_9 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_10 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_10, 0, x_2);
lean::cnstr_set(x_10, 1, x_7);
lean::cnstr_set(x_10, 2, x_9);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_68; obj* x_69; 
x_12 = lean::cnstr_get(x_3, 0);
lean::inc(x_12);
x_13 = lean::cnstr_get(x_3, 1);
lean::inc(x_13);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_14 = x_3;
} else {
 lean::dec_ref(x_3);
 x_14 = lean::box(0);
}
lean::inc(x_6);
lean::inc(x_5);
lean::inc(x_4);
x_68 = lean::apply_5(x_12, x_4, x_5, x_6, x_7, x_8);
x_69 = lean::cnstr_get(x_68, 0);
lean::inc(x_69);
if (lean::obj_tag(x_69) == 0)
{
obj* x_70; 
x_70 = lean::cnstr_get(x_68, 1);
lean::inc(x_70);
lean::dec(x_68);
x_15 = x_69;
x_16 = x_70;
goto block_67;
}
else
{
if (lean::obj_tag(x_2) == 0)
{
uint8 x_71; 
x_71 = lean::cnstr_get_scalar<uint8>(x_69, sizeof(void*)*1);
if (x_71 == 0)
{
obj* x_72; uint8 x_73; 
x_72 = lean::cnstr_get(x_68, 1);
lean::inc(x_72);
lean::dec(x_68);
x_73 = !lean::is_exclusive(x_69);
if (x_73 == 0)
{
uint8 x_74; 
x_74 = 0;
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_74);
x_15 = x_69;
x_16 = x_72;
goto block_67;
}
else
{
obj* x_75; uint8 x_76; obj* x_77; 
x_75 = lean::cnstr_get(x_69, 0);
lean::inc(x_75);
lean::dec(x_69);
x_76 = 0;
x_77 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_77, 0, x_75);
lean::cnstr_set_scalar(x_77, sizeof(void*)*1, x_76);
x_15 = x_77;
x_16 = x_72;
goto block_67;
}
}
else
{
obj* x_78; uint8 x_79; 
x_78 = lean::cnstr_get(x_68, 1);
lean::inc(x_78);
lean::dec(x_68);
x_79 = !lean::is_exclusive(x_69);
if (x_79 == 0)
{
uint8 x_80; 
x_80 = 1;
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_80);
x_15 = x_69;
x_16 = x_78;
goto block_67;
}
else
{
obj* x_81; uint8 x_82; obj* x_83; 
x_81 = lean::cnstr_get(x_69, 0);
lean::inc(x_81);
lean::dec(x_69);
x_82 = 1;
x_83 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_83, 0, x_81);
lean::cnstr_set_scalar(x_83, sizeof(void*)*1, x_82);
x_15 = x_83;
x_16 = x_78;
goto block_67;
}
}
}
else
{
obj* x_84; obj* x_85; 
x_84 = lean::cnstr_get(x_69, 0);
lean::inc(x_84);
x_85 = lean::cnstr_get(x_84, 3);
lean::inc(x_85);
if (lean::obj_tag(x_85) == 0)
{
obj* x_86; uint8 x_87; 
x_86 = lean::cnstr_get(x_68, 1);
lean::inc(x_86);
lean::dec(x_68);
x_87 = !lean::is_exclusive(x_69);
if (x_87 == 0)
{
uint8 x_88; obj* x_89; uint8 x_90; 
x_88 = lean::cnstr_get_scalar<uint8>(x_69, sizeof(void*)*1);
x_89 = lean::cnstr_get(x_69, 0);
lean::dec(x_89);
x_90 = !lean::is_exclusive(x_84);
if (x_90 == 0)
{
obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; 
x_91 = lean::cnstr_get(x_84, 3);
lean::dec(x_91);
x_92 = lean::box(3);
lean::inc(x_2);
x_93 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_93, 0, x_92);
lean::cnstr_set(x_93, 1, x_2);
x_94 = l_List_reverse___rarg(x_93);
lean::inc(x_1);
x_95 = l_Lean_Parser_Syntax_mkNode(x_1, x_94);
x_96 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_96, 0, x_95);
lean::cnstr_set(x_84, 3, x_96);
if (x_88 == 0)
{
uint8 x_97; 
x_97 = 0;
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_97);
x_15 = x_69;
x_16 = x_86;
goto block_67;
}
else
{
uint8 x_98; 
x_98 = 1;
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_98);
x_15 = x_69;
x_16 = x_86;
goto block_67;
}
}
else
{
obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
x_99 = lean::cnstr_get(x_84, 0);
x_100 = lean::cnstr_get(x_84, 1);
x_101 = lean::cnstr_get(x_84, 2);
lean::inc(x_101);
lean::inc(x_100);
lean::inc(x_99);
lean::dec(x_84);
x_102 = lean::box(3);
lean::inc(x_2);
x_103 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_103, 0, x_102);
lean::cnstr_set(x_103, 1, x_2);
x_104 = l_List_reverse___rarg(x_103);
lean::inc(x_1);
x_105 = l_Lean_Parser_Syntax_mkNode(x_1, x_104);
x_106 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_106, 0, x_105);
x_107 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_107, 0, x_99);
lean::cnstr_set(x_107, 1, x_100);
lean::cnstr_set(x_107, 2, x_101);
lean::cnstr_set(x_107, 3, x_106);
if (x_88 == 0)
{
uint8 x_108; 
x_108 = 0;
lean::cnstr_set(x_69, 0, x_107);
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_108);
x_15 = x_69;
x_16 = x_86;
goto block_67;
}
else
{
uint8 x_109; 
x_109 = 1;
lean::cnstr_set(x_69, 0, x_107);
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_109);
x_15 = x_69;
x_16 = x_86;
goto block_67;
}
}
}
else
{
uint8 x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; 
x_110 = lean::cnstr_get_scalar<uint8>(x_69, sizeof(void*)*1);
lean::dec(x_69);
x_111 = lean::cnstr_get(x_84, 0);
lean::inc(x_111);
x_112 = lean::cnstr_get(x_84, 1);
lean::inc(x_112);
x_113 = lean::cnstr_get(x_84, 2);
lean::inc(x_113);
if (lean::is_exclusive(x_84)) {
 lean::cnstr_release(x_84, 0);
 lean::cnstr_release(x_84, 1);
 lean::cnstr_release(x_84, 2);
 lean::cnstr_release(x_84, 3);
 x_114 = x_84;
} else {
 lean::dec_ref(x_84);
 x_114 = lean::box(0);
}
x_115 = lean::box(3);
lean::inc(x_2);
x_116 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_116, 0, x_115);
lean::cnstr_set(x_116, 1, x_2);
x_117 = l_List_reverse___rarg(x_116);
lean::inc(x_1);
x_118 = l_Lean_Parser_Syntax_mkNode(x_1, x_117);
x_119 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_119, 0, x_118);
if (lean::is_scalar(x_114)) {
 x_120 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_120 = x_114;
}
lean::cnstr_set(x_120, 0, x_111);
lean::cnstr_set(x_120, 1, x_112);
lean::cnstr_set(x_120, 2, x_113);
lean::cnstr_set(x_120, 3, x_119);
if (x_110 == 0)
{
uint8 x_121; obj* x_122; 
x_121 = 0;
x_122 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_122, 0, x_120);
lean::cnstr_set_scalar(x_122, sizeof(void*)*1, x_121);
x_15 = x_122;
x_16 = x_86;
goto block_67;
}
else
{
uint8 x_123; obj* x_124; 
x_123 = 1;
x_124 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_124, 0, x_120);
lean::cnstr_set_scalar(x_124, sizeof(void*)*1, x_123);
x_15 = x_124;
x_16 = x_86;
goto block_67;
}
}
}
else
{
obj* x_125; uint8 x_126; 
x_125 = lean::cnstr_get(x_68, 1);
lean::inc(x_125);
lean::dec(x_68);
x_126 = !lean::is_exclusive(x_69);
if (x_126 == 0)
{
uint8 x_127; obj* x_128; uint8 x_129; 
x_127 = lean::cnstr_get_scalar<uint8>(x_69, sizeof(void*)*1);
x_128 = lean::cnstr_get(x_69, 0);
lean::dec(x_128);
x_129 = !lean::is_exclusive(x_84);
if (x_129 == 0)
{
obj* x_130; uint8 x_131; 
x_130 = lean::cnstr_get(x_84, 3);
lean::dec(x_130);
x_131 = !lean::is_exclusive(x_85);
if (x_131 == 0)
{
obj* x_132; obj* x_133; obj* x_134; obj* x_135; 
x_132 = lean::cnstr_get(x_85, 0);
lean::inc(x_2);
x_133 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_133, 0, x_132);
lean::cnstr_set(x_133, 1, x_2);
x_134 = l_List_reverse___rarg(x_133);
lean::inc(x_1);
x_135 = l_Lean_Parser_Syntax_mkNode(x_1, x_134);
lean::cnstr_set(x_85, 0, x_135);
if (x_127 == 0)
{
uint8 x_136; 
x_136 = 0;
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_136);
x_15 = x_69;
x_16 = x_125;
goto block_67;
}
else
{
uint8 x_137; 
x_137 = 1;
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_137);
x_15 = x_69;
x_16 = x_125;
goto block_67;
}
}
else
{
obj* x_138; obj* x_139; obj* x_140; obj* x_141; obj* x_142; 
x_138 = lean::cnstr_get(x_85, 0);
lean::inc(x_138);
lean::dec(x_85);
lean::inc(x_2);
x_139 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_139, 0, x_138);
lean::cnstr_set(x_139, 1, x_2);
x_140 = l_List_reverse___rarg(x_139);
lean::inc(x_1);
x_141 = l_Lean_Parser_Syntax_mkNode(x_1, x_140);
x_142 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_142, 0, x_141);
lean::cnstr_set(x_84, 3, x_142);
if (x_127 == 0)
{
uint8 x_143; 
x_143 = 0;
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_143);
x_15 = x_69;
x_16 = x_125;
goto block_67;
}
else
{
uint8 x_144; 
x_144 = 1;
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_144);
x_15 = x_69;
x_16 = x_125;
goto block_67;
}
}
}
else
{
obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_152; obj* x_153; obj* x_154; 
x_145 = lean::cnstr_get(x_84, 0);
x_146 = lean::cnstr_get(x_84, 1);
x_147 = lean::cnstr_get(x_84, 2);
lean::inc(x_147);
lean::inc(x_146);
lean::inc(x_145);
lean::dec(x_84);
x_148 = lean::cnstr_get(x_85, 0);
lean::inc(x_148);
if (lean::is_exclusive(x_85)) {
 lean::cnstr_release(x_85, 0);
 x_149 = x_85;
} else {
 lean::dec_ref(x_85);
 x_149 = lean::box(0);
}
lean::inc(x_2);
x_150 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_150, 0, x_148);
lean::cnstr_set(x_150, 1, x_2);
x_151 = l_List_reverse___rarg(x_150);
lean::inc(x_1);
x_152 = l_Lean_Parser_Syntax_mkNode(x_1, x_151);
if (lean::is_scalar(x_149)) {
 x_153 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_153 = x_149;
}
lean::cnstr_set(x_153, 0, x_152);
x_154 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_154, 0, x_145);
lean::cnstr_set(x_154, 1, x_146);
lean::cnstr_set(x_154, 2, x_147);
lean::cnstr_set(x_154, 3, x_153);
if (x_127 == 0)
{
uint8 x_155; 
x_155 = 0;
lean::cnstr_set(x_69, 0, x_154);
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_155);
x_15 = x_69;
x_16 = x_125;
goto block_67;
}
else
{
uint8 x_156; 
x_156 = 1;
lean::cnstr_set(x_69, 0, x_154);
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_156);
x_15 = x_69;
x_16 = x_125;
goto block_67;
}
}
}
else
{
uint8 x_157; obj* x_158; obj* x_159; obj* x_160; obj* x_161; obj* x_162; obj* x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; 
x_157 = lean::cnstr_get_scalar<uint8>(x_69, sizeof(void*)*1);
lean::dec(x_69);
x_158 = lean::cnstr_get(x_84, 0);
lean::inc(x_158);
x_159 = lean::cnstr_get(x_84, 1);
lean::inc(x_159);
x_160 = lean::cnstr_get(x_84, 2);
lean::inc(x_160);
if (lean::is_exclusive(x_84)) {
 lean::cnstr_release(x_84, 0);
 lean::cnstr_release(x_84, 1);
 lean::cnstr_release(x_84, 2);
 lean::cnstr_release(x_84, 3);
 x_161 = x_84;
} else {
 lean::dec_ref(x_84);
 x_161 = lean::box(0);
}
x_162 = lean::cnstr_get(x_85, 0);
lean::inc(x_162);
if (lean::is_exclusive(x_85)) {
 lean::cnstr_release(x_85, 0);
 x_163 = x_85;
} else {
 lean::dec_ref(x_85);
 x_163 = lean::box(0);
}
lean::inc(x_2);
x_164 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_164, 0, x_162);
lean::cnstr_set(x_164, 1, x_2);
x_165 = l_List_reverse___rarg(x_164);
lean::inc(x_1);
x_166 = l_Lean_Parser_Syntax_mkNode(x_1, x_165);
if (lean::is_scalar(x_163)) {
 x_167 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_167 = x_163;
}
lean::cnstr_set(x_167, 0, x_166);
if (lean::is_scalar(x_161)) {
 x_168 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_168 = x_161;
}
lean::cnstr_set(x_168, 0, x_158);
lean::cnstr_set(x_168, 1, x_159);
lean::cnstr_set(x_168, 2, x_160);
lean::cnstr_set(x_168, 3, x_167);
if (x_157 == 0)
{
uint8 x_169; obj* x_170; 
x_169 = 0;
x_170 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_170, 0, x_168);
lean::cnstr_set_scalar(x_170, sizeof(void*)*1, x_169);
x_15 = x_170;
x_16 = x_125;
goto block_67;
}
else
{
uint8 x_171; obj* x_172; 
x_171 = 1;
x_172 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_172, 0, x_168);
lean::cnstr_set_scalar(x_172, sizeof(void*)*1, x_171);
x_15 = x_172;
x_16 = x_125;
goto block_67;
}
}
}
}
}
block_67:
{
if (lean::obj_tag(x_15) == 0)
{
uint8 x_17; 
x_17 = !lean::is_exclusive(x_15);
if (x_17 == 0)
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_18 = lean::cnstr_get(x_15, 0);
x_19 = lean::cnstr_get(x_15, 2);
if (lean::is_scalar(x_14)) {
 x_20 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_20 = x_14;
}
lean::cnstr_set(x_20, 0, x_18);
lean::cnstr_set(x_20, 1, x_2);
x_21 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
lean::cnstr_set(x_15, 2, x_21);
lean::cnstr_set(x_15, 0, x_20);
x_22 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_19, x_15);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; uint8 x_27; 
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
x_24 = lean::cnstr_get(x_22, 1);
lean::inc(x_24);
x_25 = lean::cnstr_get(x_22, 2);
lean::inc(x_25);
lean::dec(x_22);
x_26 = l_List_mfoldl___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__2(x_1, x_23, x_13, x_4, x_5, x_6, x_24, x_16);
x_27 = !lean::is_exclusive(x_26);
if (x_27 == 0)
{
obj* x_28; obj* x_29; 
x_28 = lean::cnstr_get(x_26, 0);
x_29 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_25, x_28);
lean::cnstr_set(x_26, 0, x_29);
return x_26;
}
else
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_30 = lean::cnstr_get(x_26, 0);
x_31 = lean::cnstr_get(x_26, 1);
lean::inc(x_31);
lean::inc(x_30);
lean::dec(x_26);
x_32 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_25, x_30);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_31);
return x_33;
}
}
else
{
uint8 x_34; 
lean::dec(x_13);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
x_34 = !lean::is_exclusive(x_22);
if (x_34 == 0)
{
obj* x_35; 
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_22);
lean::cnstr_set(x_35, 1, x_16);
return x_35;
}
else
{
obj* x_36; uint8 x_37; obj* x_38; obj* x_39; 
x_36 = lean::cnstr_get(x_22, 0);
x_37 = lean::cnstr_get_scalar<uint8>(x_22, sizeof(void*)*1);
lean::inc(x_36);
lean::dec(x_22);
x_38 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_38, 0, x_36);
lean::cnstr_set_scalar(x_38, sizeof(void*)*1, x_37);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_16);
return x_39;
}
}
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_40 = lean::cnstr_get(x_15, 0);
x_41 = lean::cnstr_get(x_15, 1);
x_42 = lean::cnstr_get(x_15, 2);
lean::inc(x_42);
lean::inc(x_41);
lean::inc(x_40);
lean::dec(x_15);
if (lean::is_scalar(x_14)) {
 x_43 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_43 = x_14;
}
lean::cnstr_set(x_43, 0, x_40);
lean::cnstr_set(x_43, 1, x_2);
x_44 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_45 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_45, 0, x_43);
lean::cnstr_set(x_45, 1, x_41);
lean::cnstr_set(x_45, 2, x_44);
x_46 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_42, x_45);
if (lean::obj_tag(x_46) == 0)
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
x_48 = lean::cnstr_get(x_46, 1);
lean::inc(x_48);
x_49 = lean::cnstr_get(x_46, 2);
lean::inc(x_49);
lean::dec(x_46);
x_50 = l_List_mfoldl___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__2(x_1, x_47, x_13, x_4, x_5, x_6, x_48, x_16);
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
x_52 = lean::cnstr_get(x_50, 1);
lean::inc(x_52);
if (lean::is_exclusive(x_50)) {
 lean::cnstr_release(x_50, 0);
 lean::cnstr_release(x_50, 1);
 x_53 = x_50;
} else {
 lean::dec_ref(x_50);
 x_53 = lean::box(0);
}
x_54 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_49, x_51);
if (lean::is_scalar(x_53)) {
 x_55 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_55 = x_53;
}
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_52);
return x_55;
}
else
{
obj* x_56; uint8 x_57; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_13);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
x_56 = lean::cnstr_get(x_46, 0);
lean::inc(x_56);
x_57 = lean::cnstr_get_scalar<uint8>(x_46, sizeof(void*)*1);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 0);
 x_58 = x_46;
} else {
 lean::dec_ref(x_46);
 x_58 = lean::box(0);
}
if (lean::is_scalar(x_58)) {
 x_59 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_59 = x_58;
}
lean::cnstr_set(x_59, 0, x_56);
lean::cnstr_set_scalar(x_59, sizeof(void*)*1, x_57);
x_60 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_16);
return x_60;
}
}
}
else
{
uint8 x_61; 
lean::dec(x_14);
lean::dec(x_13);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
x_61 = !lean::is_exclusive(x_15);
if (x_61 == 0)
{
obj* x_62; 
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_15);
lean::cnstr_set(x_62, 1, x_16);
return x_62;
}
else
{
obj* x_63; uint8 x_64; obj* x_65; obj* x_66; 
x_63 = lean::cnstr_get(x_15, 0);
x_64 = lean::cnstr_get_scalar<uint8>(x_15, sizeof(void*)*1);
lean::inc(x_63);
lean::dec(x_15);
x_65 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_65, 0, x_63);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_64);
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_16);
return x_66;
}
}
}
}
}
}
obj* l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::box(0);
lean::inc(x_1);
x_9 = l_List_mfoldl___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__2(x_1, x_8, x_2, x_3, x_4, x_5, x_6, x_7);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_9);
if (x_11 == 0)
{
obj* x_12; uint8 x_13; 
x_12 = lean::cnstr_get(x_9, 0);
lean::dec(x_12);
x_13 = !lean::is_exclusive(x_10);
if (x_13 == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_14 = lean::cnstr_get(x_10, 0);
x_15 = lean::cnstr_get(x_10, 2);
x_16 = l_List_reverse___rarg(x_14);
x_17 = l_Lean_Parser_Syntax_mkNode(x_1, x_16);
x_18 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
lean::cnstr_set(x_10, 2, x_18);
lean::cnstr_set(x_10, 0, x_17);
x_19 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_15, x_10);
lean::cnstr_set(x_9, 0, x_19);
return x_9;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_20 = lean::cnstr_get(x_10, 0);
x_21 = lean::cnstr_get(x_10, 1);
x_22 = lean::cnstr_get(x_10, 2);
lean::inc(x_22);
lean::inc(x_21);
lean::inc(x_20);
lean::dec(x_10);
x_23 = l_List_reverse___rarg(x_20);
x_24 = l_Lean_Parser_Syntax_mkNode(x_1, x_23);
x_25 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_26 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_21);
lean::cnstr_set(x_26, 2, x_25);
x_27 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_22, x_26);
lean::cnstr_set(x_9, 0, x_27);
return x_9;
}
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_28 = lean::cnstr_get(x_9, 1);
lean::inc(x_28);
lean::dec(x_9);
x_29 = lean::cnstr_get(x_10, 0);
lean::inc(x_29);
x_30 = lean::cnstr_get(x_10, 1);
lean::inc(x_30);
x_31 = lean::cnstr_get(x_10, 2);
lean::inc(x_31);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 lean::cnstr_release(x_10, 2);
 x_32 = x_10;
} else {
 lean::dec_ref(x_10);
 x_32 = lean::box(0);
}
x_33 = l_List_reverse___rarg(x_29);
x_34 = l_Lean_Parser_Syntax_mkNode(x_1, x_33);
x_35 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
if (lean::is_scalar(x_32)) {
 x_36 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_36 = x_32;
}
lean::cnstr_set(x_36, 0, x_34);
lean::cnstr_set(x_36, 1, x_30);
lean::cnstr_set(x_36, 2, x_35);
x_37 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_31, x_36);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_28);
return x_38;
}
}
else
{
uint8 x_39; 
lean::dec(x_1);
x_39 = !lean::is_exclusive(x_9);
if (x_39 == 0)
{
obj* x_40; uint8 x_41; 
x_40 = lean::cnstr_get(x_9, 0);
lean::dec(x_40);
x_41 = !lean::is_exclusive(x_10);
if (x_41 == 0)
{
return x_9;
}
else
{
obj* x_42; uint8 x_43; obj* x_44; 
x_42 = lean::cnstr_get(x_10, 0);
x_43 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
lean::inc(x_42);
lean::dec(x_10);
x_44 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_44, 0, x_42);
lean::cnstr_set_scalar(x_44, sizeof(void*)*1, x_43);
lean::cnstr_set(x_9, 0, x_44);
return x_9;
}
}
else
{
obj* x_45; obj* x_46; uint8 x_47; obj* x_48; obj* x_49; obj* x_50; 
x_45 = lean::cnstr_get(x_9, 1);
lean::inc(x_45);
lean::dec(x_9);
x_46 = lean::cnstr_get(x_10, 0);
lean::inc(x_46);
x_47 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_48 = x_10;
} else {
 lean::dec_ref(x_10);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
lean::cnstr_set_scalar(x_49, sizeof(void*)*1, x_47);
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_45);
return x_50;
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceLit_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::mk_string("max");
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___boxed), 1, 0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_4);
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_8, 0, x_6);
lean::closure_set(x_8, 1, x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_NotationSpec_precedenceLit;
x_7 = l_Lean_Parser_command_NotationSpec_precedenceLit_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_View_toNat___main(obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_3; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
lean::dec(x_1);
x_3 = l_Lean_Parser_number_View_toNat___main(x_2);
return x_3;
}
else
{
obj* x_4; 
lean::dec(x_1);
x_4 = l_Lean_Parser_maxPrec;
return x_4;
}
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceLit_View_toNat(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_command_NotationSpec_precedenceLit_View_toNat___main(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("precedenceOffsetOp");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_nat_obj(0u);
x_4 = lean_name_mk_numeral(x_2, x_3);
x_5 = lean::box(3);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = l_Lean_Parser_Syntax_mkNode(x_4, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp;
x_10 = l_Lean_Parser_Syntax_mkNode(x_9, x_8);
return x_10;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_nat_obj(1u);
x_4 = lean_name_mk_numeral(x_2, x_3);
x_5 = lean::box(3);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = l_Lean_Parser_Syntax_mkNode(x_4, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp;
x_10 = l_Lean_Parser_Syntax_mkNode(x_9, x_8);
return x_10;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::box(0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
x_3 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; 
x_4 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__1;
return x_4;
}
else
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
x_6 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
x_8 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__1;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_2);
x_11 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__2;
return x_14;
}
else
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
x_16 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_2);
x_18 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__3;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_2);
x_21 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp;
x_22 = l_Lean_Parser_Syntax_mkNode(x_21, x_20);
return x_22;
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__2;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("precedenceOffsetOp");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__4;
x_8 = lean_name_dec_eq(x_5, x_7);
lean::dec(x_5);
if (x_8 == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_9;
}
else
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
x_10 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_6, 0);
lean::inc(x_12);
lean::dec(x_6);
x_13 = l_Lean_Parser_Syntax_asNode___main(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_14;
}
else
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_13);
if (x_15 == 0)
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_13, 0);
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
switch (lean::obj_tag(x_17)) {
case 0:
{
obj* x_18; 
lean::free_heap_obj(x_13);
lean::dec(x_16);
x_18 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_18;
}
case 1:
{
obj* x_19; 
lean::dec(x_17);
lean::free_heap_obj(x_13);
lean::dec(x_16);
x_19 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_19;
}
default: 
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; uint8 x_24; 
x_20 = lean::cnstr_get(x_16, 1);
lean::inc(x_20);
lean::dec(x_16);
x_21 = lean::cnstr_get(x_17, 0);
lean::inc(x_21);
x_22 = lean::cnstr_get(x_17, 1);
lean::inc(x_22);
lean::dec(x_17);
x_23 = lean::box(0);
x_24 = lean_name_dec_eq(x_21, x_23);
lean::dec(x_21);
if (x_24 == 0)
{
obj* x_25; 
lean::dec(x_22);
lean::dec(x_20);
lean::free_heap_obj(x_13);
x_25 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_25;
}
else
{
if (lean::obj_tag(x_20) == 0)
{
obj* x_26; 
lean::dec(x_22);
lean::free_heap_obj(x_13);
x_26 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_26;
}
else
{
obj* x_27; 
x_27 = lean::cnstr_get(x_20, 1);
lean::inc(x_27);
if (lean::obj_tag(x_27) == 0)
{
obj* x_28; obj* x_29; uint8 x_30; 
x_28 = lean::cnstr_get(x_20, 0);
lean::inc(x_28);
lean::dec(x_20);
x_29 = lean::mk_nat_obj(0u);
x_30 = lean::nat_dec_eq(x_22, x_29);
lean::dec(x_22);
if (x_30 == 0)
{
if (lean::obj_tag(x_28) == 0)
{
obj* x_31; obj* x_32; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
lean::cnstr_set(x_13, 0, x_31);
x_32 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_32, 0, x_13);
return x_32;
}
else
{
obj* x_33; 
lean::dec(x_28);
lean::free_heap_obj(x_13);
x_33 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__1;
return x_33;
}
}
else
{
if (lean::obj_tag(x_28) == 0)
{
obj* x_34; obj* x_35; 
x_34 = lean::cnstr_get(x_28, 0);
lean::inc(x_34);
lean::dec(x_28);
lean::cnstr_set(x_13, 0, x_34);
x_35 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_35, 0, x_13);
return x_35;
}
else
{
obj* x_36; 
lean::dec(x_28);
lean::free_heap_obj(x_13);
x_36 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__2;
return x_36;
}
}
}
else
{
obj* x_37; 
lean::dec(x_27);
lean::dec(x_22);
lean::dec(x_20);
lean::free_heap_obj(x_13);
x_37 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_37;
}
}
}
}
}
}
else
{
obj* x_38; obj* x_39; 
x_38 = lean::cnstr_get(x_13, 0);
lean::inc(x_38);
lean::dec(x_13);
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
switch (lean::obj_tag(x_39)) {
case 0:
{
obj* x_40; 
lean::dec(x_38);
x_40 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_40;
}
case 1:
{
obj* x_41; 
lean::dec(x_39);
lean::dec(x_38);
x_41 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_41;
}
default: 
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; uint8 x_46; 
x_42 = lean::cnstr_get(x_38, 1);
lean::inc(x_42);
lean::dec(x_38);
x_43 = lean::cnstr_get(x_39, 0);
lean::inc(x_43);
x_44 = lean::cnstr_get(x_39, 1);
lean::inc(x_44);
lean::dec(x_39);
x_45 = lean::box(0);
x_46 = lean_name_dec_eq(x_43, x_45);
lean::dec(x_43);
if (x_46 == 0)
{
obj* x_47; 
lean::dec(x_44);
lean::dec(x_42);
x_47 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_47;
}
else
{
if (lean::obj_tag(x_42) == 0)
{
obj* x_48; 
lean::dec(x_44);
x_48 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_48;
}
else
{
obj* x_49; 
x_49 = lean::cnstr_get(x_42, 1);
lean::inc(x_49);
if (lean::obj_tag(x_49) == 0)
{
obj* x_50; obj* x_51; uint8 x_52; 
x_50 = lean::cnstr_get(x_42, 0);
lean::inc(x_50);
lean::dec(x_42);
x_51 = lean::mk_nat_obj(0u);
x_52 = lean::nat_dec_eq(x_44, x_51);
lean::dec(x_44);
if (x_52 == 0)
{
if (lean::obj_tag(x_50) == 0)
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = lean::cnstr_get(x_50, 0);
lean::inc(x_53);
lean::dec(x_50);
x_54 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_54, 0, x_53);
x_55 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_55, 0, x_54);
return x_55;
}
else
{
obj* x_56; 
lean::dec(x_50);
x_56 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__1;
return x_56;
}
}
else
{
if (lean::obj_tag(x_50) == 0)
{
obj* x_57; obj* x_58; obj* x_59; 
x_57 = lean::cnstr_get(x_50, 0);
lean::inc(x_57);
lean::dec(x_50);
x_58 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_58, 0, x_57);
x_59 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_59, 0, x_58);
return x_59;
}
else
{
obj* x_60; 
lean::dec(x_50);
x_60 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__2;
return x_60;
}
}
}
else
{
obj* x_61; 
lean::dec(x_49);
lean::dec(x_44);
lean::dec(x_42);
x_61 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_61;
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
obj* x_62; 
lean::dec(x_11);
lean::dec(x_6);
x_62 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3;
return x_62;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___boxed), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffset() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("precedenceOffset");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_1, 2);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_1, 3);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_1, 4);
lean::inc(x_6);
lean::dec(x_1);
x_7 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView;
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
x_9 = lean::apply_1(x_8, x_3);
x_10 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView;
x_11 = lean::cnstr_get(x_10, 1);
lean::inc(x_11);
x_12 = lean::apply_1(x_11, x_4);
x_13 = l_Lean_Parser_number_HasView;
x_14 = lean::cnstr_get(x_13, 1);
lean::inc(x_14);
x_15 = lean::apply_1(x_14, x_5);
x_16 = lean::box(0);
if (lean::obj_tag(x_2) == 0)
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_17 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_15);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_12);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_9);
lean::cnstr_set(x_20, 1, x_19);
x_21 = lean::box(3);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_20);
x_23 = l_Lean_Parser_command_NotationSpec_precedenceOffset;
x_24 = l_Lean_Parser_Syntax_mkNode(x_23, x_22);
return x_24;
}
else
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_25 = lean::cnstr_get(x_6, 0);
lean::inc(x_25);
lean::dec(x_6);
x_26 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_26, 0, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_16);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_15);
lean::cnstr_set(x_28, 1, x_27);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_12);
lean::cnstr_set(x_29, 1, x_28);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_9);
lean::cnstr_set(x_30, 1, x_29);
x_31 = lean::box(3);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_30);
x_33 = l_Lean_Parser_command_NotationSpec_precedenceOffset;
x_34 = l_Lean_Parser_Syntax_mkNode(x_33, x_32);
return x_34;
}
}
else
{
obj* x_35; obj* x_36; 
x_35 = lean::cnstr_get(x_2, 0);
lean::inc(x_35);
lean::dec(x_2);
x_36 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_36, 0, x_35);
if (lean::obj_tag(x_6) == 0)
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_37 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_15);
lean::cnstr_set(x_38, 1, x_37);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_12);
lean::cnstr_set(x_39, 1, x_38);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_9);
lean::cnstr_set(x_40, 1, x_39);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_36);
lean::cnstr_set(x_41, 1, x_40);
x_42 = l_Lean_Parser_command_NotationSpec_precedenceOffset;
x_43 = l_Lean_Parser_Syntax_mkNode(x_42, x_41);
return x_43;
}
else
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
x_44 = lean::cnstr_get(x_6, 0);
lean::inc(x_44);
lean::dec(x_6);
x_45 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_45, 0, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_16);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_15);
lean::cnstr_set(x_47, 1, x_46);
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_12);
lean::cnstr_set(x_48, 1, x_47);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_9);
lean::cnstr_set(x_49, 1, x_48);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_36);
lean::cnstr_set(x_50, 1, x_49);
x_51 = l_Lean_Parser_command_NotationSpec_precedenceOffset;
x_52 = l_Lean_Parser_Syntax_mkNode(x_51, x_50);
return x_52;
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_number_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_3, x_4);
x_6 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView;
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_8 = lean::apply_1(x_7, x_4);
x_9 = l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__1;
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_1);
lean::cnstr_set(x_10, 1, x_5);
lean::cnstr_set(x_10, 2, x_8);
lean::cnstr_set(x_10, 3, x_9);
lean::cnstr_set(x_10, 4, x_1);
return x_10;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_44; 
x_44 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_44) == 0)
{
obj* x_45; 
x_45 = l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__2;
return x_45;
}
else
{
obj* x_46; obj* x_47; 
x_46 = lean::cnstr_get(x_44, 0);
lean::inc(x_46);
lean::dec(x_44);
x_47 = lean::cnstr_get(x_46, 1);
lean::inc(x_47);
lean::dec(x_46);
if (lean::obj_tag(x_47) == 0)
{
obj* x_48; 
x_48 = lean::box(3);
x_2 = x_47;
x_3 = x_48;
goto block_43;
}
else
{
obj* x_49; obj* x_50; 
x_49 = lean::cnstr_get(x_47, 0);
lean::inc(x_49);
x_50 = lean::cnstr_get(x_47, 1);
lean::inc(x_50);
lean::dec(x_47);
x_2 = x_50;
x_3 = x_49;
goto block_43;
}
}
block_43:
{
obj* x_4; 
if (lean::obj_tag(x_3) == 0)
{
obj* x_40; obj* x_41; 
x_40 = lean::cnstr_get(x_3, 0);
lean::inc(x_40);
lean::dec(x_3);
x_41 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_41, 0, x_40);
x_4 = x_41;
goto block_39;
}
else
{
obj* x_42; 
lean::dec(x_3);
x_42 = lean::box(0);
x_4 = x_42;
goto block_39;
}
block_39:
{
obj* x_5; obj* x_6; 
if (lean::obj_tag(x_2) == 0)
{
obj* x_36; 
x_36 = lean::box(3);
x_5 = x_2;
x_6 = x_36;
goto block_35;
}
else
{
obj* x_37; obj* x_38; 
x_37 = lean::cnstr_get(x_2, 0);
lean::inc(x_37);
x_38 = lean::cnstr_get(x_2, 1);
lean::inc(x_38);
lean::dec(x_2);
x_5 = x_38;
x_6 = x_37;
goto block_35;
}
block_35:
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView;
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_9 = lean::apply_1(x_8, x_6);
if (lean::obj_tag(x_5) == 0)
{
obj* x_32; 
x_32 = lean::box(3);
x_10 = x_5;
x_11 = x_32;
goto block_31;
}
else
{
obj* x_33; obj* x_34; 
x_33 = lean::cnstr_get(x_5, 0);
lean::inc(x_33);
x_34 = lean::cnstr_get(x_5, 1);
lean::inc(x_34);
lean::dec(x_5);
x_10 = x_34;
x_11 = x_33;
goto block_31;
}
block_31:
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView;
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_14 = lean::apply_1(x_13, x_11);
if (lean::obj_tag(x_10) == 0)
{
obj* x_15; obj* x_16; obj* x_17; 
x_15 = lean::box(0);
x_16 = l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__1;
x_17 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_17, 0, x_4);
lean::cnstr_set(x_17, 1, x_9);
lean::cnstr_set(x_17, 2, x_14);
lean::cnstr_set(x_17, 3, x_16);
lean::cnstr_set(x_17, 4, x_15);
return x_17;
}
else
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_18 = lean::cnstr_get(x_10, 0);
lean::inc(x_18);
x_19 = lean::cnstr_get(x_10, 1);
lean::inc(x_19);
lean::dec(x_10);
x_20 = l_Lean_Parser_number_HasView;
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
x_22 = lean::apply_1(x_21, x_18);
if (lean::obj_tag(x_19) == 0)
{
obj* x_23; obj* x_24; 
x_23 = lean::box(0);
x_24 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_24, 0, x_4);
lean::cnstr_set(x_24, 1, x_9);
lean::cnstr_set(x_24, 2, x_14);
lean::cnstr_set(x_24, 3, x_22);
lean::cnstr_set(x_24, 4, x_23);
return x_24;
}
else
{
obj* x_25; 
x_25 = lean::cnstr_get(x_19, 0);
lean::inc(x_25);
lean::dec(x_19);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_27; obj* x_28; 
x_26 = lean::cnstr_get(x_25, 0);
lean::inc(x_26);
lean::dec(x_25);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_28 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_28, 0, x_4);
lean::cnstr_set(x_28, 1, x_9);
lean::cnstr_set(x_28, 2, x_14);
lean::cnstr_set(x_28, 3, x_22);
lean::cnstr_set(x_28, 4, x_27);
return x_28;
}
else
{
obj* x_29; obj* x_30; 
lean::dec(x_25);
x_29 = lean::box(0);
x_30 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_30, 0, x_4);
lean::cnstr_set(x_30, 1, x_9);
lean::cnstr_set(x_30, 2, x_14);
lean::cnstr_set(x_30, 3, x_22);
lean::cnstr_set(x_30, 4, x_29);
return x_30;
}
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceTerm() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("precedenceTerm");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::box(0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::apply_1(x_5, x_3);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
x_8 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__1;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_2);
x_11 = l_Lean_Parser_command_NotationSpec_precedenceTerm;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
x_14 = l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView;
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
x_16 = lean::apply_1(x_15, x_13);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_2);
x_18 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__3;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_2);
x_21 = l_Lean_Parser_command_NotationSpec_precedenceTerm;
x_22 = l_Lean_Parser_Syntax_mkNode(x_21, x_20);
return x_22;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("precedenceTerm");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1;
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__2;
x_8 = lean_name_dec_eq(x_5, x_7);
lean::dec(x_5);
if (x_8 == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1;
return x_9;
}
else
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
x_10 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1;
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_6, 0);
lean::inc(x_12);
lean::dec(x_6);
x_13 = l_Lean_Parser_Syntax_asNode___main(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1;
return x_14;
}
else
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
switch (lean::obj_tag(x_16)) {
case 0:
{
obj* x_17; 
lean::dec(x_15);
x_17 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1;
return x_17;
}
case 1:
{
obj* x_18; 
lean::dec(x_16);
lean::dec(x_15);
x_18 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1;
return x_18;
}
default: 
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; uint8 x_23; 
x_19 = lean::cnstr_get(x_15, 1);
lean::inc(x_19);
lean::dec(x_15);
x_20 = lean::cnstr_get(x_16, 0);
lean::inc(x_20);
x_21 = lean::cnstr_get(x_16, 1);
lean::inc(x_21);
lean::dec(x_16);
x_22 = lean::box(0);
x_23 = lean_name_dec_eq(x_20, x_22);
lean::dec(x_20);
if (x_23 == 0)
{
obj* x_24; 
lean::dec(x_21);
lean::dec(x_19);
x_24 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1;
return x_24;
}
else
{
if (lean::obj_tag(x_19) == 0)
{
obj* x_25; 
lean::dec(x_21);
x_25 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1;
return x_25;
}
else
{
obj* x_26; 
x_26 = lean::cnstr_get(x_19, 1);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; uint8 x_29; 
x_27 = lean::cnstr_get(x_19, 0);
lean::inc(x_27);
lean::dec(x_19);
x_28 = lean::mk_nat_obj(0u);
x_29 = lean::nat_dec_eq(x_21, x_28);
lean::dec(x_21);
if (x_29 == 0)
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_30 = l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView;
x_31 = lean::cnstr_get(x_30, 0);
lean::inc(x_31);
x_32 = lean::apply_1(x_31, x_27);
x_33 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_33, 0, x_32);
return x_33;
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_34 = l_Lean_Parser_command_NotationSpec_precedenceLit_HasView;
x_35 = lean::cnstr_get(x_34, 0);
lean::inc(x_35);
x_36 = lean::apply_1(x_35, x_27);
x_37 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_37, 0, x_36);
return x_37;
}
}
else
{
obj* x_38; 
lean::dec(x_26);
lean::dec(x_21);
lean::dec(x_19);
x_38 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1;
return x_38;
}
}
}
}
}
}
}
else
{
obj* x_39; 
lean::dec(x_11);
lean::dec(x_6);
x_39 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1;
return x_39;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27;
return x_1;
}
}
obj* l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; obj* x_10; obj* x_11; 
lean::inc(x_1);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_9, 0, x_1);
lean::inc(x_7);
lean::inc(x_5);
x_10 = l_Lean_Parser_token(x_5, x_7, x_8);
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
uint8 x_12; 
x_12 = !lean::is_exclusive(x_10);
if (x_12 == 0)
{
obj* x_13; obj* x_14; uint8 x_15; 
x_13 = lean::cnstr_get(x_10, 1);
x_14 = lean::cnstr_get(x_10, 0);
lean::dec(x_14);
x_15 = !lean::is_exclusive(x_11);
if (x_15 == 0)
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_16 = lean::cnstr_get(x_11, 0);
x_17 = lean::cnstr_get(x_11, 1);
x_18 = lean::cnstr_get(x_11, 2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_40; obj* x_41; uint8 x_42; 
x_40 = lean::cnstr_get(x_16, 0);
lean::inc(x_40);
x_41 = lean::cnstr_get(x_40, 1);
lean::inc(x_41);
lean::dec(x_40);
x_42 = lean::string_dec_eq(x_1, x_41);
lean::dec(x_1);
if (x_42 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
lean::free_heap_obj(x_11);
lean::free_heap_obj(x_10);
x_43 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_43, 0, x_7);
x_44 = lean::box(0);
x_45 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_41, x_3, x_43, x_44, x_5, x_17, x_13);
lean::dec(x_5);
lean::dec(x_43);
x_46 = lean::cnstr_get(x_45, 0);
lean::inc(x_46);
if (lean::obj_tag(x_46) == 0)
{
uint8 x_47; 
x_47 = !lean::is_exclusive(x_45);
if (x_47 == 0)
{
obj* x_48; uint8 x_49; 
x_48 = lean::cnstr_get(x_45, 0);
lean::dec(x_48);
x_49 = !lean::is_exclusive(x_46);
if (x_49 == 0)
{
obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
x_50 = lean::cnstr_get(x_46, 2);
x_51 = lean::cnstr_get(x_46, 0);
lean::dec(x_51);
x_52 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
lean::cnstr_set(x_46, 2, x_52);
lean::cnstr_set(x_46, 0, x_16);
x_53 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_50, x_46);
x_54 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_53);
x_55 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_52, x_54);
x_56 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_55, x_9);
x_57 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_56);
lean::cnstr_set(x_45, 0, x_57);
return x_45;
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_58 = lean::cnstr_get(x_46, 1);
x_59 = lean::cnstr_get(x_46, 2);
lean::inc(x_59);
lean::inc(x_58);
lean::dec(x_46);
x_60 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_61 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_61, 0, x_16);
lean::cnstr_set(x_61, 1, x_58);
lean::cnstr_set(x_61, 2, x_60);
x_62 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_59, x_61);
x_63 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_62);
x_64 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_60, x_63);
x_65 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_64, x_9);
x_66 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_65);
lean::cnstr_set(x_45, 0, x_66);
return x_45;
}
}
else
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; 
x_67 = lean::cnstr_get(x_45, 1);
lean::inc(x_67);
lean::dec(x_45);
x_68 = lean::cnstr_get(x_46, 1);
lean::inc(x_68);
x_69 = lean::cnstr_get(x_46, 2);
lean::inc(x_69);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 0);
 lean::cnstr_release(x_46, 1);
 lean::cnstr_release(x_46, 2);
 x_70 = x_46;
} else {
 lean::dec_ref(x_46);
 x_70 = lean::box(0);
}
x_71 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
if (lean::is_scalar(x_70)) {
 x_72 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_72 = x_70;
}
lean::cnstr_set(x_72, 0, x_16);
lean::cnstr_set(x_72, 1, x_68);
lean::cnstr_set(x_72, 2, x_71);
x_73 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_69, x_72);
x_74 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_73);
x_75 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_71, x_74);
x_76 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_75, x_9);
x_77 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_76);
x_78 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_78, 0, x_77);
lean::cnstr_set(x_78, 1, x_67);
return x_78;
}
}
else
{
uint8 x_79; 
lean::dec(x_16);
x_79 = !lean::is_exclusive(x_45);
if (x_79 == 0)
{
obj* x_80; uint8 x_81; 
x_80 = lean::cnstr_get(x_45, 0);
lean::dec(x_80);
x_81 = !lean::is_exclusive(x_46);
if (x_81 == 0)
{
obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
x_82 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_46);
x_83 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_84 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_83, x_82);
x_85 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_84, x_9);
x_86 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_85);
lean::cnstr_set(x_45, 0, x_86);
return x_45;
}
else
{
obj* x_87; uint8 x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; 
x_87 = lean::cnstr_get(x_46, 0);
x_88 = lean::cnstr_get_scalar<uint8>(x_46, sizeof(void*)*1);
lean::inc(x_87);
lean::dec(x_46);
x_89 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_89, 0, x_87);
lean::cnstr_set_scalar(x_89, sizeof(void*)*1, x_88);
x_90 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_89);
x_91 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_92 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_91, x_90);
x_93 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_92, x_9);
x_94 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_93);
lean::cnstr_set(x_45, 0, x_94);
return x_45;
}
}
else
{
obj* x_95; obj* x_96; uint8 x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; 
x_95 = lean::cnstr_get(x_45, 1);
lean::inc(x_95);
lean::dec(x_45);
x_96 = lean::cnstr_get(x_46, 0);
lean::inc(x_96);
x_97 = lean::cnstr_get_scalar<uint8>(x_46, sizeof(void*)*1);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 0);
 x_98 = x_46;
} else {
 lean::dec_ref(x_46);
 x_98 = lean::box(0);
}
if (lean::is_scalar(x_98)) {
 x_99 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_99 = x_98;
}
lean::cnstr_set(x_99, 0, x_96);
lean::cnstr_set_scalar(x_99, sizeof(void*)*1, x_97);
x_100 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_99);
x_101 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_102 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_101, x_100);
x_103 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_102, x_9);
x_104 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_103);
x_105 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_105, 0, x_104);
lean::cnstr_set(x_105, 1, x_95);
return x_105;
}
}
}
else
{
obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; 
lean::dec(x_41);
lean::dec(x_7);
lean::dec(x_5);
lean::dec(x_3);
x_106 = l_Lean_Parser_finishCommentBlock___closed__2;
lean::cnstr_set(x_11, 2, x_106);
x_107 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_11);
x_108 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_109 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_108, x_107);
x_110 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_109, x_9);
x_111 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_110);
lean::cnstr_set(x_10, 0, x_111);
return x_10;
}
}
else
{
obj* x_112; 
lean::free_heap_obj(x_11);
lean::dec(x_16);
lean::free_heap_obj(x_10);
lean::dec(x_1);
x_112 = lean::box(0);
x_19 = x_112;
goto block_39;
}
block_39:
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; uint8 x_24; 
lean::dec(x_19);
x_20 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_20, 0, x_7);
x_21 = lean::box(0);
x_22 = l_String_splitAux___main___closed__1;
x_23 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_22, x_3, x_20, x_21, x_5, x_17, x_13);
lean::dec(x_5);
lean::dec(x_20);
x_24 = !lean::is_exclusive(x_23);
if (x_24 == 0)
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_25 = lean::cnstr_get(x_23, 0);
x_26 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_25);
x_27 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_28 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_27, x_26);
x_29 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_28, x_9);
x_30 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_29);
lean::cnstr_set(x_23, 0, x_30);
return x_23;
}
else
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_31 = lean::cnstr_get(x_23, 0);
x_32 = lean::cnstr_get(x_23, 1);
lean::inc(x_32);
lean::inc(x_31);
lean::dec(x_23);
x_33 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_31);
x_34 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_35 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_34, x_33);
x_36 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_35, x_9);
x_37 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_36);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_32);
return x_38;
}
}
}
else
{
obj* x_113; obj* x_114; obj* x_115; obj* x_116; 
x_113 = lean::cnstr_get(x_11, 0);
x_114 = lean::cnstr_get(x_11, 1);
x_115 = lean::cnstr_get(x_11, 2);
lean::inc(x_115);
lean::inc(x_114);
lean::inc(x_113);
lean::dec(x_11);
if (lean::obj_tag(x_113) == 0)
{
obj* x_131; obj* x_132; uint8 x_133; 
x_131 = lean::cnstr_get(x_113, 0);
lean::inc(x_131);
x_132 = lean::cnstr_get(x_131, 1);
lean::inc(x_132);
lean::dec(x_131);
x_133 = lean::string_dec_eq(x_1, x_132);
lean::dec(x_1);
if (x_133 == 0)
{
obj* x_134; obj* x_135; obj* x_136; obj* x_137; 
lean::free_heap_obj(x_10);
x_134 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_134, 0, x_7);
x_135 = lean::box(0);
x_136 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_132, x_3, x_134, x_135, x_5, x_114, x_13);
lean::dec(x_5);
lean::dec(x_134);
x_137 = lean::cnstr_get(x_136, 0);
lean::inc(x_137);
if (lean::obj_tag(x_137) == 0)
{
obj* x_138; obj* x_139; obj* x_140; obj* x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; 
x_138 = lean::cnstr_get(x_136, 1);
lean::inc(x_138);
if (lean::is_exclusive(x_136)) {
 lean::cnstr_release(x_136, 0);
 lean::cnstr_release(x_136, 1);
 x_139 = x_136;
} else {
 lean::dec_ref(x_136);
 x_139 = lean::box(0);
}
x_140 = lean::cnstr_get(x_137, 1);
lean::inc(x_140);
x_141 = lean::cnstr_get(x_137, 2);
lean::inc(x_141);
if (lean::is_exclusive(x_137)) {
 lean::cnstr_release(x_137, 0);
 lean::cnstr_release(x_137, 1);
 lean::cnstr_release(x_137, 2);
 x_142 = x_137;
} else {
 lean::dec_ref(x_137);
 x_142 = lean::box(0);
}
x_143 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
if (lean::is_scalar(x_142)) {
 x_144 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_144 = x_142;
}
lean::cnstr_set(x_144, 0, x_113);
lean::cnstr_set(x_144, 1, x_140);
lean::cnstr_set(x_144, 2, x_143);
x_145 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_141, x_144);
x_146 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_115, x_145);
x_147 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_143, x_146);
x_148 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_147, x_9);
x_149 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_148);
if (lean::is_scalar(x_139)) {
 x_150 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_150 = x_139;
}
lean::cnstr_set(x_150, 0, x_149);
lean::cnstr_set(x_150, 1, x_138);
return x_150;
}
else
{
obj* x_151; obj* x_152; obj* x_153; uint8 x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_158; obj* x_159; obj* x_160; obj* x_161; obj* x_162; 
lean::dec(x_113);
x_151 = lean::cnstr_get(x_136, 1);
lean::inc(x_151);
if (lean::is_exclusive(x_136)) {
 lean::cnstr_release(x_136, 0);
 lean::cnstr_release(x_136, 1);
 x_152 = x_136;
} else {
 lean::dec_ref(x_136);
 x_152 = lean::box(0);
}
x_153 = lean::cnstr_get(x_137, 0);
lean::inc(x_153);
x_154 = lean::cnstr_get_scalar<uint8>(x_137, sizeof(void*)*1);
if (lean::is_exclusive(x_137)) {
 lean::cnstr_release(x_137, 0);
 x_155 = x_137;
} else {
 lean::dec_ref(x_137);
 x_155 = lean::box(0);
}
if (lean::is_scalar(x_155)) {
 x_156 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_156 = x_155;
}
lean::cnstr_set(x_156, 0, x_153);
lean::cnstr_set_scalar(x_156, sizeof(void*)*1, x_154);
x_157 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_115, x_156);
x_158 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_159 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_158, x_157);
x_160 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_159, x_9);
x_161 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_160);
if (lean::is_scalar(x_152)) {
 x_162 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_162 = x_152;
}
lean::cnstr_set(x_162, 0, x_161);
lean::cnstr_set(x_162, 1, x_151);
return x_162;
}
}
else
{
obj* x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; 
lean::dec(x_132);
lean::dec(x_7);
lean::dec(x_5);
lean::dec(x_3);
x_163 = l_Lean_Parser_finishCommentBlock___closed__2;
x_164 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_164, 0, x_113);
lean::cnstr_set(x_164, 1, x_114);
lean::cnstr_set(x_164, 2, x_163);
x_165 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_115, x_164);
x_166 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_167 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_166, x_165);
x_168 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_167, x_9);
x_169 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_168);
lean::cnstr_set(x_10, 0, x_169);
return x_10;
}
}
else
{
obj* x_170; 
lean::dec(x_113);
lean::free_heap_obj(x_10);
lean::dec(x_1);
x_170 = lean::box(0);
x_116 = x_170;
goto block_130;
}
block_130:
{
obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; 
lean::dec(x_116);
x_117 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_117, 0, x_7);
x_118 = lean::box(0);
x_119 = l_String_splitAux___main___closed__1;
x_120 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_119, x_3, x_117, x_118, x_5, x_114, x_13);
lean::dec(x_5);
lean::dec(x_117);
x_121 = lean::cnstr_get(x_120, 0);
lean::inc(x_121);
x_122 = lean::cnstr_get(x_120, 1);
lean::inc(x_122);
if (lean::is_exclusive(x_120)) {
 lean::cnstr_release(x_120, 0);
 lean::cnstr_release(x_120, 1);
 x_123 = x_120;
} else {
 lean::dec_ref(x_120);
 x_123 = lean::box(0);
}
x_124 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_115, x_121);
x_125 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_126 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_125, x_124);
x_127 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_126, x_9);
x_128 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_127);
if (lean::is_scalar(x_123)) {
 x_129 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_129 = x_123;
}
lean::cnstr_set(x_129, 0, x_128);
lean::cnstr_set(x_129, 1, x_122);
return x_129;
}
}
}
else
{
obj* x_171; obj* x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; 
x_171 = lean::cnstr_get(x_10, 1);
lean::inc(x_171);
lean::dec(x_10);
x_172 = lean::cnstr_get(x_11, 0);
lean::inc(x_172);
x_173 = lean::cnstr_get(x_11, 1);
lean::inc(x_173);
x_174 = lean::cnstr_get(x_11, 2);
lean::inc(x_174);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 0);
 lean::cnstr_release(x_11, 1);
 lean::cnstr_release(x_11, 2);
 x_175 = x_11;
} else {
 lean::dec_ref(x_11);
 x_175 = lean::box(0);
}
if (lean::obj_tag(x_172) == 0)
{
obj* x_191; obj* x_192; uint8 x_193; 
x_191 = lean::cnstr_get(x_172, 0);
lean::inc(x_191);
x_192 = lean::cnstr_get(x_191, 1);
lean::inc(x_192);
lean::dec(x_191);
x_193 = lean::string_dec_eq(x_1, x_192);
lean::dec(x_1);
if (x_193 == 0)
{
obj* x_194; obj* x_195; obj* x_196; obj* x_197; 
lean::dec(x_175);
x_194 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_194, 0, x_7);
x_195 = lean::box(0);
x_196 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_192, x_3, x_194, x_195, x_5, x_173, x_171);
lean::dec(x_5);
lean::dec(x_194);
x_197 = lean::cnstr_get(x_196, 0);
lean::inc(x_197);
if (lean::obj_tag(x_197) == 0)
{
obj* x_198; obj* x_199; obj* x_200; obj* x_201; obj* x_202; obj* x_203; obj* x_204; obj* x_205; obj* x_206; obj* x_207; obj* x_208; obj* x_209; obj* x_210; 
x_198 = lean::cnstr_get(x_196, 1);
lean::inc(x_198);
if (lean::is_exclusive(x_196)) {
 lean::cnstr_release(x_196, 0);
 lean::cnstr_release(x_196, 1);
 x_199 = x_196;
} else {
 lean::dec_ref(x_196);
 x_199 = lean::box(0);
}
x_200 = lean::cnstr_get(x_197, 1);
lean::inc(x_200);
x_201 = lean::cnstr_get(x_197, 2);
lean::inc(x_201);
if (lean::is_exclusive(x_197)) {
 lean::cnstr_release(x_197, 0);
 lean::cnstr_release(x_197, 1);
 lean::cnstr_release(x_197, 2);
 x_202 = x_197;
} else {
 lean::dec_ref(x_197);
 x_202 = lean::box(0);
}
x_203 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
if (lean::is_scalar(x_202)) {
 x_204 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_204 = x_202;
}
lean::cnstr_set(x_204, 0, x_172);
lean::cnstr_set(x_204, 1, x_200);
lean::cnstr_set(x_204, 2, x_203);
x_205 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_201, x_204);
x_206 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_174, x_205);
x_207 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_203, x_206);
x_208 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_207, x_9);
x_209 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_208);
if (lean::is_scalar(x_199)) {
 x_210 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_210 = x_199;
}
lean::cnstr_set(x_210, 0, x_209);
lean::cnstr_set(x_210, 1, x_198);
return x_210;
}
else
{
obj* x_211; obj* x_212; obj* x_213; uint8 x_214; obj* x_215; obj* x_216; obj* x_217; obj* x_218; obj* x_219; obj* x_220; obj* x_221; obj* x_222; 
lean::dec(x_172);
x_211 = lean::cnstr_get(x_196, 1);
lean::inc(x_211);
if (lean::is_exclusive(x_196)) {
 lean::cnstr_release(x_196, 0);
 lean::cnstr_release(x_196, 1);
 x_212 = x_196;
} else {
 lean::dec_ref(x_196);
 x_212 = lean::box(0);
}
x_213 = lean::cnstr_get(x_197, 0);
lean::inc(x_213);
x_214 = lean::cnstr_get_scalar<uint8>(x_197, sizeof(void*)*1);
if (lean::is_exclusive(x_197)) {
 lean::cnstr_release(x_197, 0);
 x_215 = x_197;
} else {
 lean::dec_ref(x_197);
 x_215 = lean::box(0);
}
if (lean::is_scalar(x_215)) {
 x_216 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_216 = x_215;
}
lean::cnstr_set(x_216, 0, x_213);
lean::cnstr_set_scalar(x_216, sizeof(void*)*1, x_214);
x_217 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_174, x_216);
x_218 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_219 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_218, x_217);
x_220 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_219, x_9);
x_221 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_220);
if (lean::is_scalar(x_212)) {
 x_222 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_222 = x_212;
}
lean::cnstr_set(x_222, 0, x_221);
lean::cnstr_set(x_222, 1, x_211);
return x_222;
}
}
else
{
obj* x_223; obj* x_224; obj* x_225; obj* x_226; obj* x_227; obj* x_228; obj* x_229; obj* x_230; 
lean::dec(x_192);
lean::dec(x_7);
lean::dec(x_5);
lean::dec(x_3);
x_223 = l_Lean_Parser_finishCommentBlock___closed__2;
if (lean::is_scalar(x_175)) {
 x_224 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_224 = x_175;
}
lean::cnstr_set(x_224, 0, x_172);
lean::cnstr_set(x_224, 1, x_173);
lean::cnstr_set(x_224, 2, x_223);
x_225 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_174, x_224);
x_226 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_227 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_226, x_225);
x_228 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_227, x_9);
x_229 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_228);
x_230 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_230, 0, x_229);
lean::cnstr_set(x_230, 1, x_171);
return x_230;
}
}
else
{
obj* x_231; 
lean::dec(x_175);
lean::dec(x_172);
lean::dec(x_1);
x_231 = lean::box(0);
x_176 = x_231;
goto block_190;
}
block_190:
{
obj* x_177; obj* x_178; obj* x_179; obj* x_180; obj* x_181; obj* x_182; obj* x_183; obj* x_184; obj* x_185; obj* x_186; obj* x_187; obj* x_188; obj* x_189; 
lean::dec(x_176);
x_177 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_177, 0, x_7);
x_178 = lean::box(0);
x_179 = l_String_splitAux___main___closed__1;
x_180 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_179, x_3, x_177, x_178, x_5, x_173, x_171);
lean::dec(x_5);
lean::dec(x_177);
x_181 = lean::cnstr_get(x_180, 0);
lean::inc(x_181);
x_182 = lean::cnstr_get(x_180, 1);
lean::inc(x_182);
if (lean::is_exclusive(x_180)) {
 lean::cnstr_release(x_180, 0);
 lean::cnstr_release(x_180, 1);
 x_183 = x_180;
} else {
 lean::dec_ref(x_180);
 x_183 = lean::box(0);
}
x_184 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_174, x_181);
x_185 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_186 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_185, x_184);
x_187 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_186, x_9);
x_188 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_187);
if (lean::is_scalar(x_183)) {
 x_189 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_189 = x_183;
}
lean::cnstr_set(x_189, 0, x_188);
lean::cnstr_set(x_189, 1, x_182);
return x_189;
}
}
}
else
{
uint8 x_232; 
lean::dec(x_7);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_1);
x_232 = !lean::is_exclusive(x_10);
if (x_232 == 0)
{
obj* x_233; uint8 x_234; 
x_233 = lean::cnstr_get(x_10, 0);
lean::dec(x_233);
x_234 = !lean::is_exclusive(x_11);
if (x_234 == 0)
{
obj* x_235; obj* x_236; obj* x_237; obj* x_238; 
x_235 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_236 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_235, x_11);
x_237 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_236, x_9);
x_238 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_237);
lean::cnstr_set(x_10, 0, x_238);
return x_10;
}
else
{
obj* x_239; uint8 x_240; obj* x_241; obj* x_242; obj* x_243; obj* x_244; obj* x_245; 
x_239 = lean::cnstr_get(x_11, 0);
x_240 = lean::cnstr_get_scalar<uint8>(x_11, sizeof(void*)*1);
lean::inc(x_239);
lean::dec(x_11);
x_241 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_241, 0, x_239);
lean::cnstr_set_scalar(x_241, sizeof(void*)*1, x_240);
x_242 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_243 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_242, x_241);
x_244 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_243, x_9);
x_245 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_244);
lean::cnstr_set(x_10, 0, x_245);
return x_10;
}
}
else
{
obj* x_246; obj* x_247; uint8 x_248; obj* x_249; obj* x_250; obj* x_251; obj* x_252; obj* x_253; obj* x_254; obj* x_255; 
x_246 = lean::cnstr_get(x_10, 1);
lean::inc(x_246);
lean::dec(x_10);
x_247 = lean::cnstr_get(x_11, 0);
lean::inc(x_247);
x_248 = lean::cnstr_get_scalar<uint8>(x_11, sizeof(void*)*1);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 0);
 x_249 = x_11;
} else {
 lean::dec_ref(x_11);
 x_249 = lean::box(0);
}
if (lean::is_scalar(x_249)) {
 x_250 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_250 = x_249;
}
lean::cnstr_set(x_250, 0, x_247);
lean::cnstr_set_scalar(x_250, sizeof(void*)*1, x_248);
x_251 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_252 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_251, x_250);
x_253 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_252, x_9);
x_254 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_253);
x_255 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_255, 0, x_254);
lean::cnstr_set(x_255, 1, x_246);
return x_255;
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_1 = lean::mk_string("(");
x_2 = lean::mk_nat_obj(0u);
x_3 = l_Lean_Parser_symbol_tokens___rarg(x_1, x_2);
lean::dec(x_1);
x_4 = lean::mk_string(" + ");
x_5 = l_Lean_Parser_symbol_tokens___rarg(x_4, x_2);
lean::dec(x_4);
x_6 = lean::mk_string(" - ");
x_7 = l_Lean_Parser_symbol_tokens___rarg(x_6, x_2);
lean::dec(x_6);
x_8 = lean::box(0);
x_9 = l_Lean_Parser_List_cons_tokens___rarg(x_7, x_8);
lean::dec(x_7);
x_10 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_9);
lean::dec(x_9);
lean::dec(x_5);
x_11 = l_Lean_Parser_tokens___rarg(x_10);
lean::dec(x_10);
x_12 = l_Lean_Parser_List_cons_tokens___rarg(x_11, x_8);
lean::dec(x_11);
x_13 = l_Lean_Parser_tokens___rarg(x_12);
lean::dec(x_12);
x_14 = lean::mk_string(")");
x_15 = l_Lean_Parser_symbol_tokens___rarg(x_14, x_2);
lean::dec(x_14);
x_16 = l_Lean_Parser_List_cons_tokens___rarg(x_15, x_8);
lean::dec(x_15);
x_17 = l_Lean_Parser_List_cons_tokens___rarg(x_8, x_16);
lean::dec(x_16);
x_18 = l_Lean_Parser_List_cons_tokens___rarg(x_13, x_17);
lean::dec(x_17);
lean::dec(x_13);
x_19 = l_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens;
x_20 = l_Lean_Parser_List_cons_tokens___rarg(x_19, x_18);
lean::dec(x_18);
x_21 = l_Lean_Parser_List_cons_tokens___rarg(x_3, x_20);
lean::dec(x_20);
lean::dec(x_3);
x_22 = l_Lean_Parser_tokens___rarg(x_21);
lean::dec(x_21);
x_23 = l_Lean_Parser_List_cons_tokens___rarg(x_22, x_8);
lean::dec(x_22);
x_24 = l_Lean_Parser_List_cons_tokens___rarg(x_19, x_23);
lean::dec(x_23);
x_25 = l_Lean_Parser_tokens___rarg(x_24);
lean::dec(x_24);
x_26 = l_Lean_Parser_List_cons_tokens___rarg(x_25, x_8);
lean::dec(x_25);
x_27 = l_Lean_Parser_tokens___rarg(x_26);
lean::dec(x_26);
return x_27;
}
}
obj* l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; 
x_9 = l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean::dec(x_6);
lean::dec(x_4);
lean::dec(x_2);
return x_9;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
x_1 = lean::mk_string("(");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string(" + ");
x_7 = l_String_trim(x_6);
lean::dec(x_6);
lean::inc(x_7);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_9, 0, x_7);
lean::closure_set(x_9, 1, x_4);
lean::closure_set(x_9, 2, x_8);
x_10 = lean::mk_string(" - ");
x_11 = l_String_trim(x_10);
lean::dec(x_10);
lean::inc(x_11);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_13, 0, x_11);
lean::closure_set(x_13, 1, x_4);
lean::closure_set(x_13, 2, x_12);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_9);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_17, 0, x_16);
lean::closure_set(x_17, 1, x_4);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_14);
x_19 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp;
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_20, 0, x_19);
lean::closure_set(x_20, 1, x_18);
x_21 = lean::mk_string(")");
x_22 = l_String_trim(x_21);
lean::dec(x_21);
lean::inc(x_22);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_23, 0, x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_24, 0, x_22);
lean::closure_set(x_24, 1, x_4);
lean::closure_set(x_24, 2, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_14);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___boxed), 1, 0);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_25);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_20);
lean::cnstr_set(x_28, 1, x_27);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceLit_Parser), 5, 0);
lean::inc(x_29);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_28);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_5);
lean::cnstr_set(x_31, 1, x_30);
x_32 = l_Lean_Parser_command_NotationSpec_precedenceOffset;
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_33, 0, x_32);
lean::closure_set(x_33, 1, x_31);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_14);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_29);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_36, 0, x_35);
lean::closure_set(x_36, 1, x_4);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_14);
x_38 = l_Lean_Parser_TermParserM_Monad;
x_39 = l_Lean_Parser_TermParserM_MonadExcept;
x_40 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_41 = l_Lean_Parser_TermParserM_Alternative;
x_42 = l_Lean_Parser_command_NotationSpec_precedenceTerm;
x_43 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView;
x_44 = l_Lean_Parser_Combinators_node_view___rarg(x_38, x_39, x_40, x_41, x_42, x_37, x_43);
lean::dec(x_37);
return x_44;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_1 = lean::mk_string("(");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string(" + ");
x_7 = l_String_trim(x_6);
lean::dec(x_6);
lean::inc(x_7);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_9, 0, x_7);
lean::closure_set(x_9, 1, x_4);
lean::closure_set(x_9, 2, x_8);
x_10 = lean::mk_string(" - ");
x_11 = l_String_trim(x_10);
lean::dec(x_10);
lean::inc(x_11);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_13, 0, x_11);
lean::closure_set(x_13, 1, x_4);
lean::closure_set(x_13, 2, x_12);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_9);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_17, 0, x_16);
lean::closure_set(x_17, 1, x_4);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_14);
x_19 = l_Lean_Parser_command_NotationSpec_precedenceOffsetOp;
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_20, 0, x_19);
lean::closure_set(x_20, 1, x_18);
x_21 = lean::mk_string(")");
x_22 = l_String_trim(x_21);
lean::dec(x_21);
lean::inc(x_22);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_23, 0, x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_24, 0, x_22);
lean::closure_set(x_24, 1, x_4);
lean::closure_set(x_24, 2, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_14);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___boxed), 1, 0);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_25);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_20);
lean::cnstr_set(x_28, 1, x_27);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceLit_Parser), 5, 0);
lean::inc(x_29);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_28);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_5);
lean::cnstr_set(x_31, 1, x_30);
x_32 = l_Lean_Parser_command_NotationSpec_precedenceOffset;
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_33, 0, x_32);
lean::closure_set(x_33, 1, x_31);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_14);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_29);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_36, 0, x_35);
lean::closure_set(x_36, 1, x_4);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_14);
return x_37;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_NotationSpec_precedenceTerm;
x_7 = l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat___main(obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_3; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
lean::dec(x_1);
x_3 = l_Lean_Parser_command_NotationSpec_precedenceLit_View_toNat___main(x_2);
return x_3;
}
else
{
obj* x_4; obj* x_5; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
lean::dec(x_1);
x_5 = lean::cnstr_get(x_4, 2);
lean::inc(x_5);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_5);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
x_7 = l_Lean_Parser_command_NotationSpec_precedenceLit_View_toNat___main(x_6);
x_8 = lean::cnstr_get(x_4, 3);
lean::inc(x_8);
lean::dec(x_4);
x_9 = l_Lean_Parser_number_View_toNat___main(x_8);
x_10 = lean::nat_add(x_7, x_9);
lean::dec(x_9);
lean::dec(x_7);
return x_10;
}
else
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
lean::dec(x_5);
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
x_12 = l_Lean_Parser_command_NotationSpec_precedenceLit_View_toNat___main(x_11);
x_13 = lean::cnstr_get(x_4, 3);
lean::inc(x_13);
lean::dec(x_4);
x_14 = l_Lean_Parser_number_View_toNat___main(x_13);
x_15 = lean::nat_sub(x_12, x_14);
lean::dec(x_14);
lean::dec(x_12);
return x_15;
}
}
}
}
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat___main(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedence() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("precedence");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::apply_1(x_5, x_3);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
if (lean::obj_tag(x_2) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = lean::box(3);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_8);
x_11 = l_Lean_Parser_command_NotationSpec_precedence;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_13 = lean::cnstr_get(x_2, 0);
lean::inc(x_13);
lean::dec(x_2);
x_14 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_8);
x_16 = l_Lean_Parser_command_NotationSpec_precedence;
x_17 = l_Lean_Parser_Syntax_mkNode(x_16, x_15);
return x_17;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_3, x_4);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__2;
return x_1;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_21; 
x_21 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; 
x_22 = l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__3;
return x_22;
}
else
{
obj* x_23; obj* x_24; 
x_23 = lean::cnstr_get(x_21, 0);
lean::inc(x_23);
lean::dec(x_21);
x_24 = lean::cnstr_get(x_23, 1);
lean::inc(x_24);
lean::dec(x_23);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; 
x_25 = lean::box(3);
x_2 = x_24;
x_3 = x_25;
goto block_20;
}
else
{
obj* x_26; obj* x_27; 
x_26 = lean::cnstr_get(x_24, 0);
lean::inc(x_26);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_2 = x_27;
x_3 = x_26;
goto block_20;
}
}
block_20:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_5; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
if (lean::obj_tag(x_2) == 0)
{
obj* x_6; obj* x_7; 
x_6 = l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__1;
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
lean::dec(x_2);
x_9 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView;
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_11 = lean::apply_1(x_10, x_8);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_5);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
else
{
lean::dec(x_3);
if (lean::obj_tag(x_2) == 0)
{
obj* x_13; 
x_13 = l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__2;
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_14 = lean::cnstr_get(x_2, 0);
lean::inc(x_14);
lean::dec(x_2);
x_15 = lean::box(0);
x_16 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView;
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
x_18 = lean::apply_1(x_17, x_14);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_15);
lean::cnstr_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedence_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedence_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_precedence_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::mk_string(":");
x_2 = lean::mk_nat_obj(0u);
x_3 = l_Lean_Parser_symbol_tokens___rarg(x_1, x_2);
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens;
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_4);
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_3, x_6);
lean::dec(x_6);
lean::dec(x_3);
x_8 = l_Lean_Parser_tokens___rarg(x_7);
lean::dec(x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_1 = lean::mk_string(":");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser), 5, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_5);
lean::cnstr_set(x_9, 1, x_8);
x_10 = l_Lean_Parser_TermParserM_Monad;
x_11 = l_Lean_Parser_TermParserM_MonadExcept;
x_12 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_13 = l_Lean_Parser_TermParserM_Alternative;
x_14 = l_Lean_Parser_command_NotationSpec_precedence;
x_15 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_16 = l_Lean_Parser_Combinators_node_view___rarg(x_10, x_11, x_12, x_13, x_14, x_9, x_15);
lean::dec(x_9);
return x_16;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_precedence_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::mk_string(":");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser), 5, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_5);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
obj* l_Lean_Parser_command_NotationSpec_precedence_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_NotationSpec_precedence;
x_7 = l_Lean_Parser_command_NotationSpec_precedence_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* l___private_init_lean_parser_parsec_5__takeWhileAux___main___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__2(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; uint8 x_8; 
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_sub(x_1, x_6);
lean::dec(x_1);
x_8 = l_String_OldIterator_hasNext___main(x_3);
if (x_8 == 0)
{
obj* x_9; 
lean::dec(x_7);
x_9 = l___private_init_lean_parser_parsec_4__mkStringResult___rarg(x_2, x_3);
return x_9;
}
else
{
uint32 x_10; uint32 x_11; uint8 x_12; 
x_10 = l_String_OldIterator_curr___main(x_3);
x_11 = 96;
x_12 = x_10 == x_11;
if (x_12 == 0)
{
obj* x_13; obj* x_14; 
x_13 = lean::string_push(x_2, x_10);
x_14 = l_String_OldIterator_next___main(x_3);
x_1 = x_7;
x_2 = x_13;
x_3 = x_14;
goto _start;
}
else
{
obj* x_16; 
lean::dec(x_7);
x_16 = l___private_init_lean_parser_parsec_4__mkStringResult___rarg(x_2, x_3);
return x_16;
}
}
}
else
{
obj* x_17; 
lean::dec(x_1);
x_17 = l___private_init_lean_parser_parsec_4__mkStringResult___rarg(x_2, x_3);
return x_17;
}
}
}
obj* l_Lean_Parser_MonadParsec_takeWhile___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = l_String_OldIterator_remaining___main(x_1);
x_4 = l_String_splitAux___main___closed__1;
x_5 = l___private_init_lean_parser_parsec_5__takeWhileAux___main___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__2(x_3, x_4, x_1);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
return x_6;
}
}
obj* l_Lean_Parser_MonadParsec_takeWhile___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_MonadParsec_takeWhile___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__1___rarg), 2, 0);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
obj* l_Lean_Parser_MonadParsec_takeWhile___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_MonadParsec_takeWhile___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__1(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; uint8 x_5; obj* x_6; 
x_1 = l_Lean_Parser_TermParserM_Monad;
x_2 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_3 = l_Lean_Parser_TermParserM_Lean_Parser_monadBasicParser;
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_MonadParsec_takeWhile___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__1___boxed), 3, 0);
x_5 = 0;
x_6 = l_Lean_Parser_raw_view___rarg(x_1, x_2, x_3, lean::box(0), x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
lean::inc(x_1);
x_3 = l_Lean_Parser_MonadParsec_takeWhile___at_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens___spec__1___rarg(x_1, x_2);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_3);
if (x_5 == 0)
{
obj* x_6; uint8 x_7; 
x_6 = lean::cnstr_get(x_3, 0);
lean::dec(x_6);
x_7 = !lean::is_exclusive(x_4);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_8 = lean::cnstr_get(x_4, 1);
x_9 = lean::cnstr_get(x_4, 2);
x_10 = lean::cnstr_get(x_4, 0);
lean::dec(x_10);
lean::inc(x_8);
x_11 = l_Lean_Parser_mkRawRes(x_1, x_8);
x_12 = l_Lean_Parser_finishCommentBlock___closed__2;
lean::cnstr_set(x_4, 2, x_12);
lean::cnstr_set(x_4, 0, x_11);
x_13 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_9, x_4);
x_14 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_15 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_14, x_13);
lean::cnstr_set(x_3, 0, x_15);
return x_3;
}
else
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_16 = lean::cnstr_get(x_4, 1);
x_17 = lean::cnstr_get(x_4, 2);
lean::inc(x_17);
lean::inc(x_16);
lean::dec(x_4);
lean::inc(x_16);
x_18 = l_Lean_Parser_mkRawRes(x_1, x_16);
x_19 = l_Lean_Parser_finishCommentBlock___closed__2;
x_20 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_20, 0, x_18);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_19);
x_21 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_17, x_20);
x_22 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_23 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_22, x_21);
lean::cnstr_set(x_3, 0, x_23);
return x_3;
}
}
else
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_24 = lean::cnstr_get(x_3, 1);
lean::inc(x_24);
lean::dec(x_3);
x_25 = lean::cnstr_get(x_4, 1);
lean::inc(x_25);
x_26 = lean::cnstr_get(x_4, 2);
lean::inc(x_26);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 lean::cnstr_release(x_4, 2);
 x_27 = x_4;
} else {
 lean::dec_ref(x_4);
 x_27 = lean::box(0);
}
lean::inc(x_25);
x_28 = l_Lean_Parser_mkRawRes(x_1, x_25);
x_29 = l_Lean_Parser_finishCommentBlock___closed__2;
if (lean::is_scalar(x_27)) {
 x_30 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_30 = x_27;
}
lean::cnstr_set(x_30, 0, x_28);
lean::cnstr_set(x_30, 1, x_25);
lean::cnstr_set(x_30, 2, x_29);
x_31 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_26, x_30);
x_32 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_33 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_32, x_31);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_24);
return x_34;
}
}
else
{
uint8 x_35; 
lean::dec(x_1);
x_35 = !lean::is_exclusive(x_3);
if (x_35 == 0)
{
obj* x_36; uint8 x_37; 
x_36 = lean::cnstr_get(x_3, 0);
lean::dec(x_36);
x_37 = !lean::is_exclusive(x_4);
if (x_37 == 0)
{
obj* x_38; obj* x_39; 
x_38 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_39 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_38, x_4);
lean::cnstr_set(x_3, 0, x_39);
return x_3;
}
else
{
obj* x_40; uint8 x_41; obj* x_42; obj* x_43; obj* x_44; 
x_40 = lean::cnstr_get(x_4, 0);
x_41 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*1);
lean::inc(x_40);
lean::dec(x_4);
x_42 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_42, 0, x_40);
lean::cnstr_set_scalar(x_42, sizeof(void*)*1, x_41);
x_43 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_44 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_43, x_42);
lean::cnstr_set(x_3, 0, x_44);
return x_3;
}
}
else
{
obj* x_45; obj* x_46; uint8 x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
x_45 = lean::cnstr_get(x_3, 1);
lean::inc(x_45);
lean::dec(x_3);
x_46 = lean::cnstr_get(x_4, 0);
lean::inc(x_46);
x_47 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_48 = x_4;
} else {
 lean::dec_ref(x_4);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
lean::cnstr_set_scalar(x_49, sizeof(void*)*1, x_47);
x_50 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_51 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_50, x_49);
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_45);
return x_52;
}
}
}
}
obj* l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser___rarg), 2, 0);
return x_4;
}
}
obj* l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_symbolQuote() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("symbolQuote");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_noKind;
x_3 = l_Lean_Parser_Syntax_mkNode(x_2, x_1);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_1);
x_5 = lean::box(3);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_4);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_noKind;
x_3 = l_Lean_Parser_Syntax_mkNode(x_2, x_1);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_1);
x_5 = lean::box(3);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_4);
return x_6;
}
}
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_50; obj* x_51; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_1, 2);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_1, 3);
lean::inc(x_5);
lean::dec(x_1);
x_6 = lean::box(0);
if (lean::obj_tag(x_2) == 0)
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_94; 
x_94 = lean::box(3);
x_7 = x_94;
goto block_49;
}
else
{
obj* x_95; obj* x_96; 
x_95 = lean::cnstr_get(x_3, 0);
lean::inc(x_95);
lean::dec(x_3);
x_96 = lean::box(3);
x_50 = x_96;
x_51 = x_95;
goto block_93;
}
}
else
{
obj* x_97; obj* x_98; 
x_97 = lean::cnstr_get(x_2, 0);
lean::inc(x_97);
lean::dec(x_2);
x_98 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_98, 0, x_97);
if (lean::obj_tag(x_3) == 0)
{
x_7 = x_98;
goto block_49;
}
else
{
obj* x_99; 
x_99 = lean::cnstr_get(x_3, 0);
lean::inc(x_99);
lean::dec(x_3);
x_50 = x_98;
x_51 = x_99;
goto block_93;
}
}
block_49:
{
if (lean::obj_tag(x_4) == 0)
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_8 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__1;
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
x_10 = l_Lean_Parser_command_NotationSpec_symbolQuote;
x_11 = l_Lean_Parser_Syntax_mkNode(x_10, x_9);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_12 = lean::cnstr_get(x_5, 0);
lean::inc(x_12);
lean::dec(x_5);
x_13 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_14 = lean::cnstr_get(x_13, 1);
lean::inc(x_14);
x_15 = lean::apply_1(x_14, x_12);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_6);
x_17 = l_Lean_Parser_noKind;
x_18 = l_Lean_Parser_Syntax_mkNode(x_17, x_16);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_6);
x_20 = lean::box(3);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_20);
lean::cnstr_set(x_22, 1, x_21);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_7);
lean::cnstr_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_command_NotationSpec_symbolQuote;
x_25 = l_Lean_Parser_Syntax_mkNode(x_24, x_23);
return x_25;
}
}
else
{
obj* x_26; obj* x_27; 
x_26 = lean::cnstr_get(x_4, 0);
lean::inc(x_26);
lean::dec(x_4);
x_27 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
if (lean::obj_tag(x_5) == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_28 = l_Lean_Parser_detailIdent_HasView_x27___elambda__1___closed__1;
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_27);
lean::cnstr_set(x_29, 1, x_28);
x_30 = lean::box(3);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_7);
lean::cnstr_set(x_32, 1, x_31);
x_33 = l_Lean_Parser_command_NotationSpec_symbolQuote;
x_34 = l_Lean_Parser_Syntax_mkNode(x_33, x_32);
return x_34;
}
else
{
obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_35 = lean::cnstr_get(x_5, 0);
lean::inc(x_35);
lean::dec(x_5);
x_36 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_37 = lean::cnstr_get(x_36, 1);
lean::inc(x_37);
x_38 = lean::apply_1(x_37, x_35);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_6);
x_40 = l_Lean_Parser_noKind;
x_41 = l_Lean_Parser_Syntax_mkNode(x_40, x_39);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_6);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_27);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::box(3);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_43);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_7);
lean::cnstr_set(x_46, 1, x_45);
x_47 = l_Lean_Parser_command_NotationSpec_symbolQuote;
x_48 = l_Lean_Parser_Syntax_mkNode(x_47, x_46);
return x_48;
}
}
}
block_93:
{
obj* x_52; 
x_52 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_52, 0, x_51);
if (lean::obj_tag(x_4) == 0)
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
x_53 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__2;
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_52);
lean::cnstr_set(x_54, 1, x_53);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_50);
lean::cnstr_set(x_55, 1, x_54);
x_56 = l_Lean_Parser_command_NotationSpec_symbolQuote;
x_57 = l_Lean_Parser_Syntax_mkNode(x_56, x_55);
return x_57;
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
x_58 = lean::cnstr_get(x_5, 0);
lean::inc(x_58);
lean::dec(x_5);
x_59 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_60 = lean::cnstr_get(x_59, 1);
lean::inc(x_60);
x_61 = lean::apply_1(x_60, x_58);
x_62 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_6);
x_63 = l_Lean_Parser_noKind;
x_64 = l_Lean_Parser_Syntax_mkNode(x_63, x_62);
x_65 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_6);
x_66 = lean::box(3);
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_65);
x_68 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_68, 0, x_52);
lean::cnstr_set(x_68, 1, x_67);
x_69 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_69, 0, x_50);
lean::cnstr_set(x_69, 1, x_68);
x_70 = l_Lean_Parser_command_NotationSpec_symbolQuote;
x_71 = l_Lean_Parser_Syntax_mkNode(x_70, x_69);
return x_71;
}
}
else
{
obj* x_72; obj* x_73; 
x_72 = lean::cnstr_get(x_4, 0);
lean::inc(x_72);
lean::dec(x_4);
x_73 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_73, 0, x_72);
if (lean::obj_tag(x_5) == 0)
{
obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; 
x_74 = l_Lean_Parser_detailIdent_HasView_x27___elambda__1___closed__1;
x_75 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_75, 0, x_73);
lean::cnstr_set(x_75, 1, x_74);
x_76 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_76, 0, x_52);
lean::cnstr_set(x_76, 1, x_75);
x_77 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_77, 0, x_50);
lean::cnstr_set(x_77, 1, x_76);
x_78 = l_Lean_Parser_command_NotationSpec_symbolQuote;
x_79 = l_Lean_Parser_Syntax_mkNode(x_78, x_77);
return x_79;
}
else
{
obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_80 = lean::cnstr_get(x_5, 0);
lean::inc(x_80);
lean::dec(x_5);
x_81 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_82 = lean::cnstr_get(x_81, 1);
lean::inc(x_82);
x_83 = lean::apply_1(x_82, x_80);
x_84 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_6);
x_85 = l_Lean_Parser_noKind;
x_86 = l_Lean_Parser_Syntax_mkNode(x_85, x_84);
x_87 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_87, 0, x_86);
lean::cnstr_set(x_87, 1, x_6);
x_88 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_88, 0, x_73);
lean::cnstr_set(x_88, 1, x_87);
x_89 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_89, 0, x_52);
lean::cnstr_set(x_89, 1, x_88);
x_90 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_90, 0, x_50);
lean::cnstr_set(x_90, 1, x_89);
x_91 = l_Lean_Parser_command_NotationSpec_symbolQuote;
x_92 = l_Lean_Parser_Syntax_mkNode(x_91, x_90);
return x_92;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = lean::box(3);
x_3 = l_Lean_Parser_Syntax_asNode___main(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_5 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_1);
lean::cnstr_set(x_5, 2, x_1);
lean::cnstr_set(x_5, 3, x_4);
return x_5;
}
else
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_3);
if (x_6 == 0)
{
obj* x_7; obj* x_8; 
x_7 = lean::cnstr_get(x_3, 0);
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; 
lean::free_heap_obj(x_3);
x_9 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_9, 0, x_1);
lean::cnstr_set(x_9, 1, x_1);
lean::cnstr_set(x_9, 2, x_1);
lean::cnstr_set(x_9, 3, x_1);
return x_9;
}
else
{
obj* x_10; 
x_10 = lean::cnstr_get(x_8, 1);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
lean::dec(x_8);
x_12 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_14 = lean::apply_1(x_13, x_11);
lean::cnstr_set(x_3, 0, x_14);
x_15 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_15, 0, x_1);
lean::cnstr_set(x_15, 1, x_1);
lean::cnstr_set(x_15, 2, x_1);
lean::cnstr_set(x_15, 3, x_3);
return x_15;
}
else
{
obj* x_16; obj* x_17; 
lean::dec(x_10);
lean::dec(x_8);
lean::free_heap_obj(x_3);
x_16 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_17 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_17, 0, x_1);
lean::cnstr_set(x_17, 1, x_1);
lean::cnstr_set(x_17, 2, x_1);
lean::cnstr_set(x_17, 3, x_16);
return x_17;
}
}
}
else
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_3, 0);
lean::inc(x_18);
lean::dec(x_3);
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; 
x_20 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_20, 0, x_1);
lean::cnstr_set(x_20, 1, x_1);
lean::cnstr_set(x_20, 2, x_1);
lean::cnstr_set(x_20, 3, x_1);
return x_20;
}
else
{
obj* x_21; 
x_21 = lean::cnstr_get(x_19, 1);
lean::inc(x_21);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_22 = lean::cnstr_get(x_19, 0);
lean::inc(x_22);
lean::dec(x_19);
x_23 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
x_25 = lean::apply_1(x_24, x_22);
x_26 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_26, 0, x_25);
x_27 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_27, 0, x_1);
lean::cnstr_set(x_27, 1, x_1);
lean::cnstr_set(x_27, 2, x_1);
lean::cnstr_set(x_27, 3, x_26);
return x_27;
}
else
{
obj* x_28; obj* x_29; 
lean::dec(x_21);
lean::dec(x_19);
x_28 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_29 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_29, 0, x_1);
lean::cnstr_set(x_29, 1, x_1);
lean::cnstr_set(x_29, 2, x_1);
lean::cnstr_set(x_29, 3, x_28);
return x_29;
}
}
}
}
}
}
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_94; 
x_94 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_94) == 0)
{
obj* x_95; 
x_95 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__2;
return x_95;
}
else
{
obj* x_96; obj* x_97; 
x_96 = lean::cnstr_get(x_94, 0);
lean::inc(x_96);
lean::dec(x_94);
x_97 = lean::cnstr_get(x_96, 1);
lean::inc(x_97);
lean::dec(x_96);
if (lean::obj_tag(x_97) == 0)
{
obj* x_98; 
x_98 = lean::box(3);
x_2 = x_97;
x_3 = x_98;
goto block_93;
}
else
{
obj* x_99; obj* x_100; 
x_99 = lean::cnstr_get(x_97, 0);
lean::inc(x_99);
x_100 = lean::cnstr_get(x_97, 1);
lean::inc(x_100);
lean::dec(x_97);
x_2 = x_100;
x_3 = x_99;
goto block_93;
}
}
block_93:
{
obj* x_4; 
if (lean::obj_tag(x_3) == 0)
{
obj* x_90; obj* x_91; 
x_90 = lean::cnstr_get(x_3, 0);
lean::inc(x_90);
lean::dec(x_3);
x_91 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_91, 0, x_90);
x_4 = x_91;
goto block_89;
}
else
{
obj* x_92; 
lean::dec(x_3);
x_92 = lean::box(0);
x_4 = x_92;
goto block_89;
}
block_89:
{
obj* x_5; obj* x_6; 
if (lean::obj_tag(x_2) == 0)
{
obj* x_86; 
x_86 = lean::box(3);
x_5 = x_2;
x_6 = x_86;
goto block_85;
}
else
{
obj* x_87; obj* x_88; 
x_87 = lean::cnstr_get(x_2, 0);
lean::inc(x_87);
x_88 = lean::cnstr_get(x_2, 1);
lean::inc(x_88);
lean::dec(x_2);
x_5 = x_88;
x_6 = x_87;
goto block_85;
}
block_85:
{
obj* x_7; 
if (lean::obj_tag(x_6) == 0)
{
obj* x_82; obj* x_83; 
x_82 = lean::cnstr_get(x_6, 0);
lean::inc(x_82);
lean::dec(x_6);
x_83 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_83, 0, x_82);
x_7 = x_83;
goto block_81;
}
else
{
obj* x_84; 
lean::dec(x_6);
x_84 = lean::box(0);
x_7 = x_84;
goto block_81;
}
block_81:
{
obj* x_8; obj* x_40; obj* x_41; 
if (lean::obj_tag(x_5) == 0)
{
obj* x_72; 
x_72 = lean::box(0);
x_8 = x_72;
goto block_39;
}
else
{
obj* x_73; 
x_73 = lean::cnstr_get(x_5, 0);
lean::inc(x_73);
if (lean::obj_tag(x_73) == 0)
{
obj* x_74; obj* x_75; obj* x_76; 
x_74 = lean::cnstr_get(x_5, 1);
lean::inc(x_74);
lean::dec(x_5);
x_75 = lean::cnstr_get(x_73, 0);
lean::inc(x_75);
lean::dec(x_73);
x_76 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_76, 0, x_75);
if (lean::obj_tag(x_74) == 0)
{
x_8 = x_76;
goto block_39;
}
else
{
obj* x_77; 
x_77 = lean::cnstr_get(x_74, 0);
lean::inc(x_77);
lean::dec(x_74);
x_40 = x_76;
x_41 = x_77;
goto block_71;
}
}
else
{
obj* x_78; obj* x_79; 
lean::dec(x_73);
x_78 = lean::cnstr_get(x_5, 1);
lean::inc(x_78);
lean::dec(x_5);
x_79 = lean::box(0);
if (lean::obj_tag(x_78) == 0)
{
x_8 = x_79;
goto block_39;
}
else
{
obj* x_80; 
x_80 = lean::cnstr_get(x_78, 0);
lean::inc(x_80);
lean::dec(x_78);
x_40 = x_79;
x_41 = x_80;
goto block_71;
}
}
}
block_39:
{
obj* x_9; obj* x_10; 
x_9 = lean::box(3);
x_10 = l_Lean_Parser_Syntax_asNode___main(x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; 
x_11 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_12 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_12, 0, x_4);
lean::cnstr_set(x_12, 1, x_7);
lean::cnstr_set(x_12, 2, x_8);
lean::cnstr_set(x_12, 3, x_11);
return x_12;
}
else
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_10);
if (x_13 == 0)
{
obj* x_14; obj* x_15; 
x_14 = lean::cnstr_get(x_10, 0);
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
lean::dec(x_14);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_17; 
lean::free_heap_obj(x_10);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_17, 0, x_4);
lean::cnstr_set(x_17, 1, x_7);
lean::cnstr_set(x_17, 2, x_8);
lean::cnstr_set(x_17, 3, x_16);
return x_17;
}
else
{
obj* x_18; 
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_19 = lean::cnstr_get(x_15, 0);
lean::inc(x_19);
lean::dec(x_15);
x_20 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
x_22 = lean::apply_1(x_21, x_19);
lean::cnstr_set(x_10, 0, x_22);
x_23 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_23, 0, x_4);
lean::cnstr_set(x_23, 1, x_7);
lean::cnstr_set(x_23, 2, x_8);
lean::cnstr_set(x_23, 3, x_10);
return x_23;
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_18);
lean::dec(x_15);
lean::free_heap_obj(x_10);
x_24 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_25 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_25, 0, x_4);
lean::cnstr_set(x_25, 1, x_7);
lean::cnstr_set(x_25, 2, x_8);
lean::cnstr_set(x_25, 3, x_24);
return x_25;
}
}
}
else
{
obj* x_26; obj* x_27; 
x_26 = lean::cnstr_get(x_10, 0);
lean::inc(x_26);
lean::dec(x_10);
x_27 = lean::cnstr_get(x_26, 1);
lean::inc(x_27);
lean::dec(x_26);
if (lean::obj_tag(x_27) == 0)
{
obj* x_28; obj* x_29; 
x_28 = lean::box(0);
x_29 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_29, 0, x_4);
lean::cnstr_set(x_29, 1, x_7);
lean::cnstr_set(x_29, 2, x_8);
lean::cnstr_set(x_29, 3, x_28);
return x_29;
}
else
{
obj* x_30; 
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
if (lean::obj_tag(x_30) == 0)
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
x_31 = lean::cnstr_get(x_27, 0);
lean::inc(x_31);
lean::dec(x_27);
x_32 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_33 = lean::cnstr_get(x_32, 0);
lean::inc(x_33);
x_34 = lean::apply_1(x_33, x_31);
x_35 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_35, 0, x_34);
x_36 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_36, 0, x_4);
lean::cnstr_set(x_36, 1, x_7);
lean::cnstr_set(x_36, 2, x_8);
lean::cnstr_set(x_36, 3, x_35);
return x_36;
}
else
{
obj* x_37; obj* x_38; 
lean::dec(x_30);
lean::dec(x_27);
x_37 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_38 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_38, 0, x_4);
lean::cnstr_set(x_38, 1, x_7);
lean::cnstr_set(x_38, 2, x_8);
lean::cnstr_set(x_38, 3, x_37);
return x_38;
}
}
}
}
}
block_71:
{
obj* x_42; 
x_42 = l_Lean_Parser_Syntax_asNode___main(x_41);
if (lean::obj_tag(x_42) == 0)
{
obj* x_43; obj* x_44; 
x_43 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_44 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_44, 0, x_4);
lean::cnstr_set(x_44, 1, x_7);
lean::cnstr_set(x_44, 2, x_40);
lean::cnstr_set(x_44, 3, x_43);
return x_44;
}
else
{
uint8 x_45; 
x_45 = !lean::is_exclusive(x_42);
if (x_45 == 0)
{
obj* x_46; obj* x_47; 
x_46 = lean::cnstr_get(x_42, 0);
x_47 = lean::cnstr_get(x_46, 1);
lean::inc(x_47);
lean::dec(x_46);
if (lean::obj_tag(x_47) == 0)
{
obj* x_48; obj* x_49; 
lean::free_heap_obj(x_42);
x_48 = lean::box(0);
x_49 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_49, 0, x_4);
lean::cnstr_set(x_49, 1, x_7);
lean::cnstr_set(x_49, 2, x_40);
lean::cnstr_set(x_49, 3, x_48);
return x_49;
}
else
{
obj* x_50; 
x_50 = lean::cnstr_get(x_47, 1);
lean::inc(x_50);
if (lean::obj_tag(x_50) == 0)
{
obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
x_51 = lean::cnstr_get(x_47, 0);
lean::inc(x_51);
lean::dec(x_47);
x_52 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_53 = lean::cnstr_get(x_52, 0);
lean::inc(x_53);
x_54 = lean::apply_1(x_53, x_51);
lean::cnstr_set(x_42, 0, x_54);
x_55 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_55, 0, x_4);
lean::cnstr_set(x_55, 1, x_7);
lean::cnstr_set(x_55, 2, x_40);
lean::cnstr_set(x_55, 3, x_42);
return x_55;
}
else
{
obj* x_56; obj* x_57; 
lean::dec(x_50);
lean::dec(x_47);
lean::free_heap_obj(x_42);
x_56 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_57 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_57, 0, x_4);
lean::cnstr_set(x_57, 1, x_7);
lean::cnstr_set(x_57, 2, x_40);
lean::cnstr_set(x_57, 3, x_56);
return x_57;
}
}
}
else
{
obj* x_58; obj* x_59; 
x_58 = lean::cnstr_get(x_42, 0);
lean::inc(x_58);
lean::dec(x_42);
x_59 = lean::cnstr_get(x_58, 1);
lean::inc(x_59);
lean::dec(x_58);
if (lean::obj_tag(x_59) == 0)
{
obj* x_60; obj* x_61; 
x_60 = lean::box(0);
x_61 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_61, 0, x_4);
lean::cnstr_set(x_61, 1, x_7);
lean::cnstr_set(x_61, 2, x_40);
lean::cnstr_set(x_61, 3, x_60);
return x_61;
}
else
{
obj* x_62; 
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
if (lean::obj_tag(x_62) == 0)
{
obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_63 = lean::cnstr_get(x_59, 0);
lean::inc(x_63);
lean::dec(x_59);
x_64 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_65 = lean::cnstr_get(x_64, 0);
lean::inc(x_65);
x_66 = lean::apply_1(x_65, x_63);
x_67 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_67, 0, x_66);
x_68 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_68, 0, x_4);
lean::cnstr_set(x_68, 1, x_7);
lean::cnstr_set(x_68, 2, x_40);
lean::cnstr_set(x_68, 3, x_67);
return x_68;
}
else
{
obj* x_69; obj* x_70; 
lean::dec(x_62);
lean::dec(x_59);
x_69 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_70 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_70, 0, x_4);
lean::cnstr_set(x_70, 1, x_7);
lean::cnstr_set(x_70, 2, x_40);
lean::cnstr_set(x_70, 3, x_69);
return x_70;
}
}
}
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27;
return x_1;
}
}
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__1___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::apply_2(x_1, x_3, x_4);
return x_5;
}
}
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__2___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = lean::apply_3(x_1, x_3, x_4, x_5);
return x_6;
}
}
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__2(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__3___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = lean::apply_4(x_1, x_3, x_4, x_5, x_6);
return x_7;
}
}
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__3(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l_Lean_Parser_MonadParsec_strCore___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__4(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; 
x_8 = l_String_isEmpty(x_1);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = lean::string_length(x_1);
x_10 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_11 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_11, 0, x_1);
lean::cnstr_set(x_11, 1, x_10);
lean::cnstr_set(x_11, 2, x_10);
lean::inc(x_6);
x_12 = l___private_init_lean_parser_parsec_2__strAux___main(x_9, x_11, x_6);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; obj* x_15; uint8 x_16; obj* x_17; obj* x_18; 
lean::dec(x_1);
x_13 = lean::box(0);
x_14 = l_String_splitAux___main___closed__1;
x_15 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_15, 0, x_6);
lean::cnstr_set(x_15, 1, x_14);
lean::cnstr_set(x_15, 2, x_2);
lean::cnstr_set(x_15, 3, x_13);
x_16 = 0;
x_17 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set_scalar(x_17, sizeof(void*)*1, x_16);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_7);
return x_18;
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_6);
lean::dec(x_2);
x_19 = lean::cnstr_get(x_12, 0);
lean::inc(x_19);
lean::dec(x_12);
x_20 = lean::box(0);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_1);
lean::cnstr_set(x_21, 1, x_19);
lean::cnstr_set(x_21, 2, x_20);
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_7);
return x_22;
}
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_2);
lean::dec(x_1);
x_23 = l_String_splitAux___main___closed__1;
x_24 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_25 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_6);
lean::cnstr_set(x_25, 2, x_24);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_7);
return x_26;
}
}
}
obj* l_ReaderT_bind___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__5___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; 
lean::inc(x_5);
lean::inc(x_4);
lean::inc(x_3);
x_8 = lean::apply_5(x_1, x_3, x_4, x_5, x_6, x_7);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; uint8 x_15; 
x_10 = lean::cnstr_get(x_8, 1);
lean::inc(x_10);
lean::dec(x_8);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
x_13 = lean::cnstr_get(x_9, 2);
lean::inc(x_13);
lean::dec(x_9);
x_14 = lean::apply_6(x_2, x_11, x_3, x_4, x_5, x_12, x_10);
x_15 = !lean::is_exclusive(x_14);
if (x_15 == 0)
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_14, 0);
x_17 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_16);
lean::cnstr_set(x_14, 0, x_17);
return x_14;
}
else
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_18 = lean::cnstr_get(x_14, 0);
x_19 = lean::cnstr_get(x_14, 1);
lean::inc(x_19);
lean::inc(x_18);
lean::dec(x_14);
x_20 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_18);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8 x_22; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_22 = !lean::is_exclusive(x_8);
if (x_22 == 0)
{
obj* x_23; uint8 x_24; 
x_23 = lean::cnstr_get(x_8, 0);
lean::dec(x_23);
x_24 = !lean::is_exclusive(x_9);
if (x_24 == 0)
{
return x_8;
}
else
{
obj* x_25; uint8 x_26; obj* x_27; 
x_25 = lean::cnstr_get(x_9, 0);
x_26 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
lean::inc(x_25);
lean::dec(x_9);
x_27 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_27, 0, x_25);
lean::cnstr_set_scalar(x_27, sizeof(void*)*1, x_26);
lean::cnstr_set(x_8, 0, x_27);
return x_8;
}
}
else
{
obj* x_28; obj* x_29; uint8 x_30; obj* x_31; obj* x_32; obj* x_33; 
x_28 = lean::cnstr_get(x_8, 1);
lean::inc(x_28);
lean::dec(x_8);
x_29 = lean::cnstr_get(x_9, 0);
lean::inc(x_29);
x_30 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_31 = x_9;
} else {
 lean::dec_ref(x_9);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
lean::cnstr_set_scalar(x_32, sizeof(void*)*1, x_30);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_28);
return x_33;
}
}
}
}
obj* l_ReaderT_bind___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__5(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_bind___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__5___rarg), 7, 0);
return x_3;
}
}
obj* l_Lean_Parser_withTrailing___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__6(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; 
lean::inc(x_5);
x_7 = l_Lean_Parser_whitespace(x_3, x_5, x_6);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
uint8 x_9; 
x_9 = !lean::is_exclusive(x_7);
if (x_9 == 0)
{
obj* x_10; uint8 x_11; 
x_10 = lean::cnstr_get(x_7, 0);
lean::dec(x_10);
x_11 = !lean::is_exclusive(x_8);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_12 = lean::cnstr_get(x_8, 1);
x_13 = lean::cnstr_get(x_8, 2);
x_14 = lean::cnstr_get(x_8, 0);
lean::dec(x_14);
lean::inc(x_12);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_5);
lean::cnstr_set(x_15, 1, x_12);
x_16 = l_Lean_Parser_finishCommentBlock___closed__2;
lean::cnstr_set(x_8, 2, x_16);
lean::cnstr_set(x_8, 0, x_15);
x_17 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_8);
x_18 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_19 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_17);
if (lean::obj_tag(x_19) == 0)
{
uint8 x_20; 
x_20 = !lean::is_exclusive(x_19);
if (x_20 == 0)
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_21 = lean::cnstr_get(x_19, 0);
x_22 = lean::cnstr_get(x_19, 2);
x_23 = l___private_init_lean_parser_token_3__updateTrailing___main(x_21, x_1);
lean::cnstr_set(x_19, 2, x_18);
lean::cnstr_set(x_19, 0, x_23);
x_24 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_22, x_19);
lean::cnstr_set(x_7, 0, x_24);
return x_7;
}
else
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_25 = lean::cnstr_get(x_19, 0);
x_26 = lean::cnstr_get(x_19, 1);
x_27 = lean::cnstr_get(x_19, 2);
lean::inc(x_27);
lean::inc(x_26);
lean::inc(x_25);
lean::dec(x_19);
x_28 = l___private_init_lean_parser_token_3__updateTrailing___main(x_25, x_1);
x_29 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_26);
lean::cnstr_set(x_29, 2, x_18);
x_30 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_27, x_29);
lean::cnstr_set(x_7, 0, x_30);
return x_7;
}
}
else
{
uint8 x_31; 
lean::dec(x_1);
x_31 = !lean::is_exclusive(x_19);
if (x_31 == 0)
{
lean::cnstr_set(x_7, 0, x_19);
return x_7;
}
else
{
obj* x_32; uint8 x_33; obj* x_34; 
x_32 = lean::cnstr_get(x_19, 0);
x_33 = lean::cnstr_get_scalar<uint8>(x_19, sizeof(void*)*1);
lean::inc(x_32);
lean::dec(x_19);
x_34 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_34, 0, x_32);
lean::cnstr_set_scalar(x_34, sizeof(void*)*1, x_33);
lean::cnstr_set(x_7, 0, x_34);
return x_7;
}
}
}
else
{
obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_35 = lean::cnstr_get(x_8, 1);
x_36 = lean::cnstr_get(x_8, 2);
lean::inc(x_36);
lean::inc(x_35);
lean::dec(x_8);
lean::inc(x_35);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_5);
lean::cnstr_set(x_37, 1, x_35);
x_38 = l_Lean_Parser_finishCommentBlock___closed__2;
x_39 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_39, 0, x_37);
lean::cnstr_set(x_39, 1, x_35);
lean::cnstr_set(x_39, 2, x_38);
x_40 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_36, x_39);
x_41 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_42 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_41, x_40);
if (lean::obj_tag(x_42) == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_43 = lean::cnstr_get(x_42, 0);
lean::inc(x_43);
x_44 = lean::cnstr_get(x_42, 1);
lean::inc(x_44);
x_45 = lean::cnstr_get(x_42, 2);
lean::inc(x_45);
if (lean::is_exclusive(x_42)) {
 lean::cnstr_release(x_42, 0);
 lean::cnstr_release(x_42, 1);
 lean::cnstr_release(x_42, 2);
 x_46 = x_42;
} else {
 lean::dec_ref(x_42);
 x_46 = lean::box(0);
}
x_47 = l___private_init_lean_parser_token_3__updateTrailing___main(x_43, x_1);
if (lean::is_scalar(x_46)) {
 x_48 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_48 = x_46;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_44);
lean::cnstr_set(x_48, 2, x_41);
x_49 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_45, x_48);
lean::cnstr_set(x_7, 0, x_49);
return x_7;
}
else
{
obj* x_50; uint8 x_51; obj* x_52; obj* x_53; 
lean::dec(x_1);
x_50 = lean::cnstr_get(x_42, 0);
lean::inc(x_50);
x_51 = lean::cnstr_get_scalar<uint8>(x_42, sizeof(void*)*1);
if (lean::is_exclusive(x_42)) {
 lean::cnstr_release(x_42, 0);
 x_52 = x_42;
} else {
 lean::dec_ref(x_42);
 x_52 = lean::box(0);
}
if (lean::is_scalar(x_52)) {
 x_53 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_53 = x_52;
}
lean::cnstr_set(x_53, 0, x_50);
lean::cnstr_set_scalar(x_53, sizeof(void*)*1, x_51);
lean::cnstr_set(x_7, 0, x_53);
return x_7;
}
}
}
else
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_54 = lean::cnstr_get(x_7, 1);
lean::inc(x_54);
lean::dec(x_7);
x_55 = lean::cnstr_get(x_8, 1);
lean::inc(x_55);
x_56 = lean::cnstr_get(x_8, 2);
lean::inc(x_56);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 lean::cnstr_release(x_8, 2);
 x_57 = x_8;
} else {
 lean::dec_ref(x_8);
 x_57 = lean::box(0);
}
lean::inc(x_55);
x_58 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_58, 0, x_5);
lean::cnstr_set(x_58, 1, x_55);
x_59 = l_Lean_Parser_finishCommentBlock___closed__2;
if (lean::is_scalar(x_57)) {
 x_60 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_60 = x_57;
}
lean::cnstr_set(x_60, 0, x_58);
lean::cnstr_set(x_60, 1, x_55);
lean::cnstr_set(x_60, 2, x_59);
x_61 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_56, x_60);
x_62 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_63 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_62, x_61);
if (lean::obj_tag(x_63) == 0)
{
obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
x_64 = lean::cnstr_get(x_63, 0);
lean::inc(x_64);
x_65 = lean::cnstr_get(x_63, 1);
lean::inc(x_65);
x_66 = lean::cnstr_get(x_63, 2);
lean::inc(x_66);
if (lean::is_exclusive(x_63)) {
 lean::cnstr_release(x_63, 0);
 lean::cnstr_release(x_63, 1);
 lean::cnstr_release(x_63, 2);
 x_67 = x_63;
} else {
 lean::dec_ref(x_63);
 x_67 = lean::box(0);
}
x_68 = l___private_init_lean_parser_token_3__updateTrailing___main(x_64, x_1);
if (lean::is_scalar(x_67)) {
 x_69 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_69 = x_67;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_65);
lean::cnstr_set(x_69, 2, x_62);
x_70 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_66, x_69);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_54);
return x_71;
}
else
{
obj* x_72; uint8 x_73; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_1);
x_72 = lean::cnstr_get(x_63, 0);
lean::inc(x_72);
x_73 = lean::cnstr_get_scalar<uint8>(x_63, sizeof(void*)*1);
if (lean::is_exclusive(x_63)) {
 lean::cnstr_release(x_63, 0);
 x_74 = x_63;
} else {
 lean::dec_ref(x_63);
 x_74 = lean::box(0);
}
if (lean::is_scalar(x_74)) {
 x_75 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_75 = x_74;
}
lean::cnstr_set(x_75, 0, x_72);
lean::cnstr_set_scalar(x_75, sizeof(void*)*1, x_73);
x_76 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_54);
return x_76;
}
}
}
else
{
uint8 x_77; 
lean::dec(x_5);
x_77 = !lean::is_exclusive(x_7);
if (x_77 == 0)
{
obj* x_78; uint8 x_79; 
x_78 = lean::cnstr_get(x_7, 0);
lean::dec(x_78);
x_79 = !lean::is_exclusive(x_8);
if (x_79 == 0)
{
obj* x_80; obj* x_81; 
x_80 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_81 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_80, x_8);
if (lean::obj_tag(x_81) == 0)
{
uint8 x_82; 
x_82 = !lean::is_exclusive(x_81);
if (x_82 == 0)
{
obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
x_83 = lean::cnstr_get(x_81, 0);
x_84 = lean::cnstr_get(x_81, 2);
x_85 = l___private_init_lean_parser_token_3__updateTrailing___main(x_83, x_1);
lean::cnstr_set(x_81, 2, x_80);
lean::cnstr_set(x_81, 0, x_85);
x_86 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_84, x_81);
lean::cnstr_set(x_7, 0, x_86);
return x_7;
}
else
{
obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_87 = lean::cnstr_get(x_81, 0);
x_88 = lean::cnstr_get(x_81, 1);
x_89 = lean::cnstr_get(x_81, 2);
lean::inc(x_89);
lean::inc(x_88);
lean::inc(x_87);
lean::dec(x_81);
x_90 = l___private_init_lean_parser_token_3__updateTrailing___main(x_87, x_1);
x_91 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_88);
lean::cnstr_set(x_91, 2, x_80);
x_92 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_89, x_91);
lean::cnstr_set(x_7, 0, x_92);
return x_7;
}
}
else
{
uint8 x_93; 
lean::dec(x_1);
x_93 = !lean::is_exclusive(x_81);
if (x_93 == 0)
{
lean::cnstr_set(x_7, 0, x_81);
return x_7;
}
else
{
obj* x_94; uint8 x_95; obj* x_96; 
x_94 = lean::cnstr_get(x_81, 0);
x_95 = lean::cnstr_get_scalar<uint8>(x_81, sizeof(void*)*1);
lean::inc(x_94);
lean::dec(x_81);
x_96 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_96, 0, x_94);
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_95);
lean::cnstr_set(x_7, 0, x_96);
return x_7;
}
}
}
else
{
obj* x_97; uint8 x_98; obj* x_99; obj* x_100; obj* x_101; 
x_97 = lean::cnstr_get(x_8, 0);
x_98 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
lean::inc(x_97);
lean::dec(x_8);
x_99 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_99, 0, x_97);
lean::cnstr_set_scalar(x_99, sizeof(void*)*1, x_98);
x_100 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_101 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_100, x_99);
if (lean::obj_tag(x_101) == 0)
{
obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; 
x_102 = lean::cnstr_get(x_101, 0);
lean::inc(x_102);
x_103 = lean::cnstr_get(x_101, 1);
lean::inc(x_103);
x_104 = lean::cnstr_get(x_101, 2);
lean::inc(x_104);
if (lean::is_exclusive(x_101)) {
 lean::cnstr_release(x_101, 0);
 lean::cnstr_release(x_101, 1);
 lean::cnstr_release(x_101, 2);
 x_105 = x_101;
} else {
 lean::dec_ref(x_101);
 x_105 = lean::box(0);
}
x_106 = l___private_init_lean_parser_token_3__updateTrailing___main(x_102, x_1);
if (lean::is_scalar(x_105)) {
 x_107 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_107 = x_105;
}
lean::cnstr_set(x_107, 0, x_106);
lean::cnstr_set(x_107, 1, x_103);
lean::cnstr_set(x_107, 2, x_100);
x_108 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_104, x_107);
lean::cnstr_set(x_7, 0, x_108);
return x_7;
}
else
{
obj* x_109; uint8 x_110; obj* x_111; obj* x_112; 
lean::dec(x_1);
x_109 = lean::cnstr_get(x_101, 0);
lean::inc(x_109);
x_110 = lean::cnstr_get_scalar<uint8>(x_101, sizeof(void*)*1);
if (lean::is_exclusive(x_101)) {
 lean::cnstr_release(x_101, 0);
 x_111 = x_101;
} else {
 lean::dec_ref(x_101);
 x_111 = lean::box(0);
}
if (lean::is_scalar(x_111)) {
 x_112 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_112 = x_111;
}
lean::cnstr_set(x_112, 0, x_109);
lean::cnstr_set_scalar(x_112, sizeof(void*)*1, x_110);
lean::cnstr_set(x_7, 0, x_112);
return x_7;
}
}
}
else
{
obj* x_113; obj* x_114; uint8 x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
x_113 = lean::cnstr_get(x_7, 1);
lean::inc(x_113);
lean::dec(x_7);
x_114 = lean::cnstr_get(x_8, 0);
lean::inc(x_114);
x_115 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 x_116 = x_8;
} else {
 lean::dec_ref(x_8);
 x_116 = lean::box(0);
}
if (lean::is_scalar(x_116)) {
 x_117 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_117 = x_116;
}
lean::cnstr_set(x_117, 0, x_114);
lean::cnstr_set_scalar(x_117, sizeof(void*)*1, x_115);
x_118 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_119 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_118, x_117);
if (lean::obj_tag(x_119) == 0)
{
obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; obj* x_127; 
x_120 = lean::cnstr_get(x_119, 0);
lean::inc(x_120);
x_121 = lean::cnstr_get(x_119, 1);
lean::inc(x_121);
x_122 = lean::cnstr_get(x_119, 2);
lean::inc(x_122);
if (lean::is_exclusive(x_119)) {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 lean::cnstr_release(x_119, 2);
 x_123 = x_119;
} else {
 lean::dec_ref(x_119);
 x_123 = lean::box(0);
}
x_124 = l___private_init_lean_parser_token_3__updateTrailing___main(x_120, x_1);
if (lean::is_scalar(x_123)) {
 x_125 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_125 = x_123;
}
lean::cnstr_set(x_125, 0, x_124);
lean::cnstr_set(x_125, 1, x_121);
lean::cnstr_set(x_125, 2, x_118);
x_126 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_122, x_125);
x_127 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_127, 0, x_126);
lean::cnstr_set(x_127, 1, x_113);
return x_127;
}
else
{
obj* x_128; uint8 x_129; obj* x_130; obj* x_131; obj* x_132; 
lean::dec(x_1);
x_128 = lean::cnstr_get(x_119, 0);
lean::inc(x_128);
x_129 = lean::cnstr_get_scalar<uint8>(x_119, sizeof(void*)*1);
if (lean::is_exclusive(x_119)) {
 lean::cnstr_release(x_119, 0);
 x_130 = x_119;
} else {
 lean::dec_ref(x_119);
 x_130 = lean::box(0);
}
if (lean::is_scalar(x_130)) {
 x_131 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_131 = x_130;
}
lean::cnstr_set(x_131, 0, x_128);
lean::cnstr_set_scalar(x_131, sizeof(void*)*1, x_129);
x_132 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_132, 0, x_131);
lean::cnstr_set(x_132, 1, x_113);
return x_132;
}
}
}
}
}
obj* l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; 
if (x_2 == 0)
{
obj* x_54; obj* x_55; obj* x_56; obj* x_95; obj* x_96; 
x_54 = lean::box(0);
lean::inc(x_6);
x_95 = lean::apply_5(x_1, x_3, x_4, x_5, x_6, x_7);
x_96 = lean::cnstr_get(x_95, 0);
lean::inc(x_96);
if (lean::obj_tag(x_96) == 0)
{
obj* x_97; 
x_97 = lean::cnstr_get(x_95, 1);
lean::inc(x_97);
lean::dec(x_95);
x_55 = x_96;
x_56 = x_97;
goto block_94;
}
else
{
obj* x_98; obj* x_99; 
x_98 = lean::cnstr_get(x_96, 0);
lean::inc(x_98);
x_99 = lean::cnstr_get(x_98, 3);
lean::inc(x_99);
if (lean::obj_tag(x_99) == 0)
{
obj* x_100; uint8 x_101; 
x_100 = lean::cnstr_get(x_95, 1);
lean::inc(x_100);
lean::dec(x_95);
x_101 = !lean::is_exclusive(x_96);
if (x_101 == 0)
{
uint8 x_102; obj* x_103; uint8 x_104; 
x_102 = lean::cnstr_get_scalar<uint8>(x_96, sizeof(void*)*1);
x_103 = lean::cnstr_get(x_96, 0);
lean::dec(x_103);
x_104 = !lean::is_exclusive(x_98);
if (x_104 == 0)
{
obj* x_105; obj* x_106; 
x_105 = lean::cnstr_get(x_98, 3);
lean::dec(x_105);
x_106 = l_Lean_Parser_Combinators_optional___rarg___lambda__1___closed__1;
lean::cnstr_set(x_98, 3, x_106);
if (x_102 == 0)
{
uint8 x_107; 
x_107 = 0;
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_107);
x_55 = x_96;
x_56 = x_100;
goto block_94;
}
else
{
uint8 x_108; 
x_108 = 1;
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_108);
x_55 = x_96;
x_56 = x_100;
goto block_94;
}
}
else
{
obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; 
x_109 = lean::cnstr_get(x_98, 0);
x_110 = lean::cnstr_get(x_98, 1);
x_111 = lean::cnstr_get(x_98, 2);
lean::inc(x_111);
lean::inc(x_110);
lean::inc(x_109);
lean::dec(x_98);
x_112 = l_Lean_Parser_Combinators_optional___rarg___lambda__1___closed__1;
x_113 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_113, 0, x_109);
lean::cnstr_set(x_113, 1, x_110);
lean::cnstr_set(x_113, 2, x_111);
lean::cnstr_set(x_113, 3, x_112);
if (x_102 == 0)
{
uint8 x_114; 
x_114 = 0;
lean::cnstr_set(x_96, 0, x_113);
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_114);
x_55 = x_96;
x_56 = x_100;
goto block_94;
}
else
{
uint8 x_115; 
x_115 = 1;
lean::cnstr_set(x_96, 0, x_113);
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_115);
x_55 = x_96;
x_56 = x_100;
goto block_94;
}
}
}
else
{
uint8 x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; 
x_116 = lean::cnstr_get_scalar<uint8>(x_96, sizeof(void*)*1);
lean::dec(x_96);
x_117 = lean::cnstr_get(x_98, 0);
lean::inc(x_117);
x_118 = lean::cnstr_get(x_98, 1);
lean::inc(x_118);
x_119 = lean::cnstr_get(x_98, 2);
lean::inc(x_119);
if (lean::is_exclusive(x_98)) {
 lean::cnstr_release(x_98, 0);
 lean::cnstr_release(x_98, 1);
 lean::cnstr_release(x_98, 2);
 lean::cnstr_release(x_98, 3);
 x_120 = x_98;
} else {
 lean::dec_ref(x_98);
 x_120 = lean::box(0);
}
x_121 = l_Lean_Parser_Combinators_optional___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_120)) {
 x_122 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_122 = x_120;
}
lean::cnstr_set(x_122, 0, x_117);
lean::cnstr_set(x_122, 1, x_118);
lean::cnstr_set(x_122, 2, x_119);
lean::cnstr_set(x_122, 3, x_121);
if (x_116 == 0)
{
uint8 x_123; obj* x_124; 
x_123 = 0;
x_124 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_124, 0, x_122);
lean::cnstr_set_scalar(x_124, sizeof(void*)*1, x_123);
x_55 = x_124;
x_56 = x_100;
goto block_94;
}
else
{
uint8 x_125; obj* x_126; 
x_125 = 1;
x_126 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_126, 0, x_122);
lean::cnstr_set_scalar(x_126, sizeof(void*)*1, x_125);
x_55 = x_126;
x_56 = x_100;
goto block_94;
}
}
}
else
{
obj* x_127; uint8 x_128; 
x_127 = lean::cnstr_get(x_95, 1);
lean::inc(x_127);
lean::dec(x_95);
x_128 = !lean::is_exclusive(x_96);
if (x_128 == 0)
{
uint8 x_129; obj* x_130; uint8 x_131; 
x_129 = lean::cnstr_get_scalar<uint8>(x_96, sizeof(void*)*1);
x_130 = lean::cnstr_get(x_96, 0);
lean::dec(x_130);
x_131 = !lean::is_exclusive(x_98);
if (x_131 == 0)
{
obj* x_132; uint8 x_133; 
x_132 = lean::cnstr_get(x_98, 3);
lean::dec(x_132);
x_133 = !lean::is_exclusive(x_99);
if (x_133 == 0)
{
obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; 
x_134 = lean::cnstr_get(x_99, 0);
x_135 = lean::box(0);
x_136 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_136, 0, x_134);
lean::cnstr_set(x_136, 1, x_135);
x_137 = l_Lean_Parser_noKind;
x_138 = l_Lean_Parser_Syntax_mkNode(x_137, x_136);
lean::cnstr_set(x_99, 0, x_138);
if (x_129 == 0)
{
uint8 x_139; 
x_139 = 0;
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_139);
x_55 = x_96;
x_56 = x_127;
goto block_94;
}
else
{
uint8 x_140; 
x_140 = 1;
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_140);
x_55 = x_96;
x_56 = x_127;
goto block_94;
}
}
else
{
obj* x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; 
x_141 = lean::cnstr_get(x_99, 0);
lean::inc(x_141);
lean::dec(x_99);
x_142 = lean::box(0);
x_143 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_143, 0, x_141);
lean::cnstr_set(x_143, 1, x_142);
x_144 = l_Lean_Parser_noKind;
x_145 = l_Lean_Parser_Syntax_mkNode(x_144, x_143);
x_146 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_146, 0, x_145);
lean::cnstr_set(x_98, 3, x_146);
if (x_129 == 0)
{
uint8 x_147; 
x_147 = 0;
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_147);
x_55 = x_96;
x_56 = x_127;
goto block_94;
}
else
{
uint8 x_148; 
x_148 = 1;
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_148);
x_55 = x_96;
x_56 = x_127;
goto block_94;
}
}
}
else
{
obj* x_149; obj* x_150; obj* x_151; obj* x_152; obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_158; obj* x_159; 
x_149 = lean::cnstr_get(x_98, 0);
x_150 = lean::cnstr_get(x_98, 1);
x_151 = lean::cnstr_get(x_98, 2);
lean::inc(x_151);
lean::inc(x_150);
lean::inc(x_149);
lean::dec(x_98);
x_152 = lean::cnstr_get(x_99, 0);
lean::inc(x_152);
if (lean::is_exclusive(x_99)) {
 lean::cnstr_release(x_99, 0);
 x_153 = x_99;
} else {
 lean::dec_ref(x_99);
 x_153 = lean::box(0);
}
x_154 = lean::box(0);
x_155 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_155, 0, x_152);
lean::cnstr_set(x_155, 1, x_154);
x_156 = l_Lean_Parser_noKind;
x_157 = l_Lean_Parser_Syntax_mkNode(x_156, x_155);
if (lean::is_scalar(x_153)) {
 x_158 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_158 = x_153;
}
lean::cnstr_set(x_158, 0, x_157);
x_159 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_159, 0, x_149);
lean::cnstr_set(x_159, 1, x_150);
lean::cnstr_set(x_159, 2, x_151);
lean::cnstr_set(x_159, 3, x_158);
if (x_129 == 0)
{
uint8 x_160; 
x_160 = 0;
lean::cnstr_set(x_96, 0, x_159);
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_160);
x_55 = x_96;
x_56 = x_127;
goto block_94;
}
else
{
uint8 x_161; 
x_161 = 1;
lean::cnstr_set(x_96, 0, x_159);
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_161);
x_55 = x_96;
x_56 = x_127;
goto block_94;
}
}
}
else
{
uint8 x_162; obj* x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; obj* x_172; obj* x_173; obj* x_174; 
x_162 = lean::cnstr_get_scalar<uint8>(x_96, sizeof(void*)*1);
lean::dec(x_96);
x_163 = lean::cnstr_get(x_98, 0);
lean::inc(x_163);
x_164 = lean::cnstr_get(x_98, 1);
lean::inc(x_164);
x_165 = lean::cnstr_get(x_98, 2);
lean::inc(x_165);
if (lean::is_exclusive(x_98)) {
 lean::cnstr_release(x_98, 0);
 lean::cnstr_release(x_98, 1);
 lean::cnstr_release(x_98, 2);
 lean::cnstr_release(x_98, 3);
 x_166 = x_98;
} else {
 lean::dec_ref(x_98);
 x_166 = lean::box(0);
}
x_167 = lean::cnstr_get(x_99, 0);
lean::inc(x_167);
if (lean::is_exclusive(x_99)) {
 lean::cnstr_release(x_99, 0);
 x_168 = x_99;
} else {
 lean::dec_ref(x_99);
 x_168 = lean::box(0);
}
x_169 = lean::box(0);
x_170 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_170, 0, x_167);
lean::cnstr_set(x_170, 1, x_169);
x_171 = l_Lean_Parser_noKind;
x_172 = l_Lean_Parser_Syntax_mkNode(x_171, x_170);
if (lean::is_scalar(x_168)) {
 x_173 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_173 = x_168;
}
lean::cnstr_set(x_173, 0, x_172);
if (lean::is_scalar(x_166)) {
 x_174 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_174 = x_166;
}
lean::cnstr_set(x_174, 0, x_163);
lean::cnstr_set(x_174, 1, x_164);
lean::cnstr_set(x_174, 2, x_165);
lean::cnstr_set(x_174, 3, x_173);
if (x_162 == 0)
{
uint8 x_175; obj* x_176; 
x_175 = 0;
x_176 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_176, 0, x_174);
lean::cnstr_set_scalar(x_176, sizeof(void*)*1, x_175);
x_55 = x_176;
x_56 = x_127;
goto block_94;
}
else
{
uint8 x_177; obj* x_178; 
x_177 = 1;
x_178 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_178, 0, x_174);
lean::cnstr_set_scalar(x_178, sizeof(void*)*1, x_177);
x_55 = x_178;
x_56 = x_127;
goto block_94;
}
}
}
}
block_94:
{
if (lean::obj_tag(x_55) == 0)
{
uint8 x_57; 
x_57 = !lean::is_exclusive(x_55);
if (x_57 == 0)
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_58 = lean::cnstr_get(x_55, 0);
x_59 = lean::cnstr_get(x_55, 2);
x_60 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_60, 0, x_58);
x_61 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
lean::cnstr_set(x_55, 2, x_61);
lean::cnstr_set(x_55, 0, x_60);
x_62 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_59, x_55);
if (lean::obj_tag(x_62) == 0)
{
lean::dec(x_6);
x_8 = x_62;
x_9 = x_56;
goto block_53;
}
else
{
uint8 x_63; 
x_63 = lean::cnstr_get_scalar<uint8>(x_62, sizeof(void*)*1);
if (x_63 == 0)
{
obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
x_64 = lean::cnstr_get(x_62, 0);
lean::inc(x_64);
lean::dec(x_62);
x_65 = lean::cnstr_get(x_64, 2);
lean::inc(x_65);
lean::dec(x_64);
x_66 = l_mjoin___rarg___closed__1;
x_67 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_comp___rarg), 3, 2);
lean::closure_set(x_67, 0, x_65);
lean::closure_set(x_67, 1, x_66);
x_68 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_68, 0, x_67);
x_69 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_69, 0, x_54);
lean::cnstr_set(x_69, 1, x_6);
lean::cnstr_set(x_69, 2, x_68);
x_8 = x_69;
x_9 = x_56;
goto block_53;
}
else
{
lean::dec(x_6);
x_8 = x_62;
x_9 = x_56;
goto block_53;
}
}
}
else
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
x_70 = lean::cnstr_get(x_55, 0);
x_71 = lean::cnstr_get(x_55, 1);
x_72 = lean::cnstr_get(x_55, 2);
lean::inc(x_72);
lean::inc(x_71);
lean::inc(x_70);
lean::dec(x_55);
x_73 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_73, 0, x_70);
x_74 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_75 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_75, 0, x_73);
lean::cnstr_set(x_75, 1, x_71);
lean::cnstr_set(x_75, 2, x_74);
x_76 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_72, x_75);
if (lean::obj_tag(x_76) == 0)
{
lean::dec(x_6);
x_8 = x_76;
x_9 = x_56;
goto block_53;
}
else
{
uint8 x_77; 
x_77 = lean::cnstr_get_scalar<uint8>(x_76, sizeof(void*)*1);
if (x_77 == 0)
{
obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
x_78 = lean::cnstr_get(x_76, 0);
lean::inc(x_78);
lean::dec(x_76);
x_79 = lean::cnstr_get(x_78, 2);
lean::inc(x_79);
lean::dec(x_78);
x_80 = l_mjoin___rarg___closed__1;
x_81 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_comp___rarg), 3, 2);
lean::closure_set(x_81, 0, x_79);
lean::closure_set(x_81, 1, x_80);
x_82 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_82, 0, x_81);
x_83 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_83, 0, x_54);
lean::cnstr_set(x_83, 1, x_6);
lean::cnstr_set(x_83, 2, x_82);
x_8 = x_83;
x_9 = x_56;
goto block_53;
}
else
{
lean::dec(x_6);
x_8 = x_76;
x_9 = x_56;
goto block_53;
}
}
}
}
else
{
uint8 x_84; 
x_84 = lean::cnstr_get_scalar<uint8>(x_55, sizeof(void*)*1);
if (x_84 == 0)
{
obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; 
x_85 = lean::cnstr_get(x_55, 0);
lean::inc(x_85);
lean::dec(x_55);
x_86 = lean::cnstr_get(x_85, 2);
lean::inc(x_86);
lean::dec(x_85);
x_87 = l_mjoin___rarg___closed__1;
x_88 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_comp___rarg), 3, 2);
lean::closure_set(x_88, 0, x_86);
lean::closure_set(x_88, 1, x_87);
x_89 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_89, 0, x_88);
x_90 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_90, 0, x_54);
lean::cnstr_set(x_90, 1, x_6);
lean::cnstr_set(x_90, 2, x_89);
x_8 = x_90;
x_9 = x_56;
goto block_53;
}
else
{
uint8 x_91; 
lean::dec(x_6);
x_91 = !lean::is_exclusive(x_55);
if (x_91 == 0)
{
x_8 = x_55;
x_9 = x_56;
goto block_53;
}
else
{
obj* x_92; obj* x_93; 
x_92 = lean::cnstr_get(x_55, 0);
lean::inc(x_92);
lean::dec(x_55);
x_93 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_93, 0, x_92);
lean::cnstr_set_scalar(x_93, sizeof(void*)*1, x_84);
x_8 = x_93;
x_9 = x_56;
goto block_53;
}
}
}
}
}
else
{
obj* x_179; 
x_179 = lean::apply_5(x_1, x_3, x_4, x_5, x_6, x_7);
return x_179;
}
block_53:
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_10; 
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_8);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_12 = lean::cnstr_get(x_8, 2);
x_13 = lean::cnstr_get(x_8, 0);
lean::dec(x_13);
x_14 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_15 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
lean::cnstr_set(x_8, 2, x_15);
lean::cnstr_set(x_8, 0, x_14);
x_16 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_12, x_8);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_9);
return x_17;
}
else
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_18 = lean::cnstr_get(x_8, 1);
x_19 = lean::cnstr_get(x_8, 2);
lean::inc(x_19);
lean::inc(x_18);
lean::dec(x_8);
x_20 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_21 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_22 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_22, 0, x_20);
lean::cnstr_set(x_22, 1, x_18);
lean::cnstr_set(x_22, 2, x_21);
x_23 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_19, x_22);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_9);
return x_24;
}
}
else
{
uint8 x_25; 
x_25 = !lean::is_exclusive(x_8);
if (x_25 == 0)
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_26 = lean::cnstr_get(x_8, 2);
x_27 = lean::cnstr_get(x_8, 0);
lean::dec(x_27);
x_28 = lean::cnstr_get(x_10, 0);
lean::inc(x_28);
lean::dec(x_10);
x_29 = lean::box(0);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_28);
lean::cnstr_set(x_30, 1, x_29);
x_31 = l_Lean_Parser_noKind;
x_32 = l_Lean_Parser_Syntax_mkNode(x_31, x_30);
x_33 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
lean::cnstr_set(x_8, 2, x_33);
lean::cnstr_set(x_8, 0, x_32);
x_34 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_26, x_8);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_9);
return x_35;
}
else
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_8, 1);
x_37 = lean::cnstr_get(x_8, 2);
lean::inc(x_37);
lean::inc(x_36);
lean::dec(x_8);
x_38 = lean::cnstr_get(x_10, 0);
lean::inc(x_38);
lean::dec(x_10);
x_39 = lean::box(0);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_38);
lean::cnstr_set(x_40, 1, x_39);
x_41 = l_Lean_Parser_noKind;
x_42 = l_Lean_Parser_Syntax_mkNode(x_41, x_40);
x_43 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_44 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_44, 0, x_42);
lean::cnstr_set(x_44, 1, x_36);
lean::cnstr_set(x_44, 2, x_43);
x_45 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_37, x_44);
x_46 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_9);
return x_46;
}
}
}
else
{
uint8 x_47; 
x_47 = !lean::is_exclusive(x_8);
if (x_47 == 0)
{
obj* x_48; 
x_48 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_48, 0, x_8);
lean::cnstr_set(x_48, 1, x_9);
return x_48;
}
else
{
obj* x_49; uint8 x_50; obj* x_51; obj* x_52; 
x_49 = lean::cnstr_get(x_8, 0);
x_50 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
lean::inc(x_49);
lean::dec(x_8);
x_51 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_51, 0, x_49);
lean::cnstr_set_scalar(x_51, sizeof(void*)*1, x_50);
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_9);
return x_52;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasTokens;
x_3 = l_Lean_Parser_tokens___rarg(x_2);
x_4 = l_Lean_Parser_List_cons_tokens___rarg(x_3, x_1);
lean::dec(x_3);
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_1, x_4);
lean::dec(x_4);
x_6 = l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens;
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_6, x_5);
lean::dec(x_5);
x_8 = l_Lean_Parser_List_cons_tokens___rarg(x_1, x_7);
lean::dec(x_7);
x_9 = l_Lean_Parser_tokens___rarg(x_8);
lean::dec(x_8);
return x_9;
}
}
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__1___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__1___rarg(x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__2___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_2);
return x_6;
}
}
obj* l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__3___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_2);
return x_7;
}
}
obj* l_Lean_Parser_MonadParsec_strCore___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__4___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_Lean_Parser_MonadParsec_strCore___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
return x_8;
}
}
obj* l_Lean_Parser_withTrailing___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__6___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Lean_Parser_withTrailing___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__6(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
return x_7;
}
}
obj* l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; obj* x_9; 
x_8 = lean::unbox(x_2);
lean::dec(x_2);
x_9 = l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("`");
return x_1;
}
}
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1___closed__1;
x_9 = l_Lean_Parser_MonadParsec_strCore___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__4(x_8, x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_9);
if (x_11 == 0)
{
obj* x_12; uint8 x_13; 
x_12 = lean::cnstr_get(x_9, 0);
lean::dec(x_12);
x_13 = !lean::is_exclusive(x_10);
if (x_13 == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_14 = lean::cnstr_get(x_10, 1);
x_15 = lean::cnstr_get(x_10, 2);
x_16 = lean::cnstr_get(x_10, 0);
lean::dec(x_16);
lean::inc(x_14);
x_17 = l_Lean_Parser_mkRawRes(x_2, x_14);
x_18 = l_Lean_Parser_finishCommentBlock___closed__2;
lean::cnstr_set(x_10, 2, x_18);
lean::cnstr_set(x_10, 0, x_17);
x_19 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_15, x_10);
lean::cnstr_set(x_9, 0, x_19);
return x_9;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_20 = lean::cnstr_get(x_10, 1);
x_21 = lean::cnstr_get(x_10, 2);
lean::inc(x_21);
lean::inc(x_20);
lean::dec(x_10);
lean::inc(x_20);
x_22 = l_Lean_Parser_mkRawRes(x_2, x_20);
x_23 = l_Lean_Parser_finishCommentBlock___closed__2;
x_24 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_20);
lean::cnstr_set(x_24, 2, x_23);
x_25 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_21, x_24);
lean::cnstr_set(x_9, 0, x_25);
return x_9;
}
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_26 = lean::cnstr_get(x_9, 1);
lean::inc(x_26);
lean::dec(x_9);
x_27 = lean::cnstr_get(x_10, 1);
lean::inc(x_27);
x_28 = lean::cnstr_get(x_10, 2);
lean::inc(x_28);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 lean::cnstr_release(x_10, 2);
 x_29 = x_10;
} else {
 lean::dec_ref(x_10);
 x_29 = lean::box(0);
}
lean::inc(x_27);
x_30 = l_Lean_Parser_mkRawRes(x_2, x_27);
x_31 = l_Lean_Parser_finishCommentBlock___closed__2;
if (lean::is_scalar(x_29)) {
 x_32 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_32 = x_29;
}
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set(x_32, 1, x_27);
lean::cnstr_set(x_32, 2, x_31);
x_33 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_28, x_32);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_26);
return x_34;
}
}
else
{
uint8 x_35; 
lean::dec(x_2);
x_35 = !lean::is_exclusive(x_9);
if (x_35 == 0)
{
obj* x_36; uint8 x_37; 
x_36 = lean::cnstr_get(x_9, 0);
lean::dec(x_36);
x_37 = !lean::is_exclusive(x_10);
if (x_37 == 0)
{
return x_9;
}
else
{
obj* x_38; uint8 x_39; obj* x_40; 
x_38 = lean::cnstr_get(x_10, 0);
x_39 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
lean::inc(x_38);
lean::dec(x_10);
x_40 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_40, 0, x_38);
lean::cnstr_set_scalar(x_40, sizeof(void*)*1, x_39);
lean::cnstr_set(x_9, 0, x_40);
return x_9;
}
}
else
{
obj* x_41; obj* x_42; uint8 x_43; obj* x_44; obj* x_45; obj* x_46; 
x_41 = lean::cnstr_get(x_9, 1);
lean::inc(x_41);
lean::dec(x_9);
x_42 = lean::cnstr_get(x_10, 0);
lean::inc(x_42);
x_43 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_44 = x_10;
} else {
 lean::dec_ref(x_10);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_44)) {
 x_45 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_45 = x_44;
}
lean::cnstr_set(x_45, 0, x_42);
lean::cnstr_set_scalar(x_45, sizeof(void*)*1, x_43);
x_46 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_41);
return x_46;
}
}
}
}
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1___closed__1;
x_9 = l_Lean_Parser_MonadParsec_strCore___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__4(x_8, x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; uint8 x_16; 
x_11 = lean::cnstr_get(x_9, 1);
lean::inc(x_11);
lean::dec(x_9);
x_12 = lean::cnstr_get(x_10, 1);
lean::inc(x_12);
x_13 = lean::cnstr_get(x_10, 2);
lean::inc(x_13);
lean::dec(x_10);
lean::inc(x_12);
x_14 = l_Lean_Parser_mkRawRes(x_2, x_12);
x_15 = l_Lean_Parser_withTrailing___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__6(x_14, x_3, x_4, x_5, x_12, x_11);
x_16 = !lean::is_exclusive(x_15);
if (x_16 == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_17 = lean::cnstr_get(x_15, 0);
x_18 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_19 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_17);
x_20 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_19);
lean::cnstr_set(x_15, 0, x_20);
return x_15;
}
else
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_21 = lean::cnstr_get(x_15, 0);
x_22 = lean::cnstr_get(x_15, 1);
lean::inc(x_22);
lean::inc(x_21);
lean::dec(x_15);
x_23 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_24 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_23, x_21);
x_25 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_24);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_22);
return x_26;
}
}
else
{
uint8 x_27; 
lean::dec(x_2);
x_27 = !lean::is_exclusive(x_9);
if (x_27 == 0)
{
obj* x_28; uint8 x_29; 
x_28 = lean::cnstr_get(x_9, 0);
lean::dec(x_28);
x_29 = !lean::is_exclusive(x_10);
if (x_29 == 0)
{
return x_9;
}
else
{
obj* x_30; uint8 x_31; obj* x_32; 
x_30 = lean::cnstr_get(x_10, 0);
x_31 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
lean::inc(x_30);
lean::dec(x_10);
x_32 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set_scalar(x_32, sizeof(void*)*1, x_31);
lean::cnstr_set(x_9, 0, x_32);
return x_9;
}
}
else
{
obj* x_33; obj* x_34; uint8 x_35; obj* x_36; obj* x_37; obj* x_38; 
x_33 = lean::cnstr_get(x_9, 1);
lean::inc(x_33);
lean::dec(x_9);
x_34 = lean::cnstr_get(x_10, 0);
lean::inc(x_34);
x_35 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_36 = x_10;
} else {
 lean::dec_ref(x_10);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_34);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_33);
return x_38;
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; uint8 x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_1 = lean::mk_string("`");
x_2 = l_String_quote(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_withTrailing___rarg___lambda__1), 2, 0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__1___rarg___boxed), 4, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__2___rarg___boxed), 5, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__3___rarg___boxed), 6, 1);
lean::closure_set(x_7, 0, x_6);
lean::inc(x_3);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1___boxed), 7, 1);
lean::closure_set(x_8, 0, x_3);
lean::inc(x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_bind___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__5___rarg), 7, 2);
lean::closure_set(x_9, 0, x_7);
lean::closure_set(x_9, 1, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__2___boxed), 7, 1);
lean::closure_set(x_10, 0, x_3);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_bind___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__5___rarg), 7, 2);
lean::closure_set(x_11, 0, x_7);
lean::closure_set(x_11, 1, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedence_Parser), 5, 0);
x_13 = 0;
x_14 = lean::box(x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_15, 0, x_12);
lean::closure_set(x_15, 1, x_14);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_11);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser___boxed), 3, 0);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_18);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_9);
lean::cnstr_set(x_21, 1, x_20);
x_22 = l_Lean_Parser_TermParserM_Monad;
x_23 = l_Lean_Parser_TermParserM_MonadExcept;
x_24 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_25 = l_Lean_Parser_TermParserM_Alternative;
x_26 = l_Lean_Parser_command_NotationSpec_symbolQuote;
x_27 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView;
x_28 = l_Lean_Parser_Combinators_node_view___rarg(x_22, x_23, x_24, x_25, x_26, x_21, x_27);
lean::dec(x_21);
return x_28;
}
}
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
return x_8;
}
}
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_symbolQuote_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; uint8 x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_1 = lean::mk_string("`");
x_2 = l_String_quote(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_withTrailing___rarg___lambda__1), 2, 0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__1___rarg___boxed), 4, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__2___rarg___boxed), 5, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__3___rarg___boxed), 6, 1);
lean::closure_set(x_7, 0, x_6);
lean::inc(x_3);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1___boxed), 7, 1);
lean::closure_set(x_8, 0, x_3);
lean::inc(x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_bind___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__5___rarg), 7, 2);
lean::closure_set(x_9, 0, x_7);
lean::closure_set(x_9, 1, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__2___boxed), 7, 1);
lean::closure_set(x_10, 0, x_3);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_bind___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__5___rarg), 7, 2);
lean::closure_set(x_11, 0, x_7);
lean::closure_set(x_11, 1, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedence_Parser), 5, 0);
x_13 = 0;
x_14 = lean::box(x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_15, 0, x_12);
lean::closure_set(x_15, 1, x_14);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_11);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser___boxed), 3, 0);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_18);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_9);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
}
obj* l_Lean_Parser_command_NotationSpec_symbolQuote_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_NotationSpec_symbolQuote;
x_7 = l_Lean_Parser_command_NotationSpec_symbolQuote_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::mk_string("symbol");
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
lean::inc(x_4);
lean::inc(x_2);
x_6 = l_Lean_Parser_token(x_2, x_4, x_5);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_6);
if (x_8 == 0)
{
obj* x_9; obj* x_10; uint8 x_11; 
x_9 = lean::cnstr_get(x_6, 1);
x_10 = lean::cnstr_get(x_6, 0);
lean::dec(x_10);
x_11 = !lean::is_exclusive(x_7);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_12 = lean::cnstr_get(x_7, 0);
x_13 = lean::cnstr_get(x_7, 1);
x_14 = lean::cnstr_get(x_7, 2);
if (lean::obj_tag(x_12) == 0)
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
lean::dec(x_4);
lean::dec(x_2);
x_37 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
lean::cnstr_set(x_7, 2, x_37);
x_38 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_14, x_7);
x_39 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_37, x_38);
x_40 = l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1;
x_41 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_39, x_40);
x_42 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_41);
lean::cnstr_set(x_6, 0, x_42);
return x_6;
}
else
{
obj* x_43; 
lean::free_heap_obj(x_7);
lean::dec(x_12);
lean::free_heap_obj(x_6);
x_43 = lean::box(0);
x_15 = x_43;
goto block_36;
}
block_36:
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; uint8 x_21; 
lean::dec(x_15);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_4);
x_17 = lean::box(0);
x_18 = l_String_splitAux___main___closed__1;
x_19 = l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1;
x_20 = l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg(x_18, x_19, x_16, x_17, x_1, x_2, x_3, x_13, x_9);
lean::dec(x_2);
lean::dec(x_16);
x_21 = !lean::is_exclusive(x_20);
if (x_21 == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_22 = lean::cnstr_get(x_20, 0);
x_23 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_14, x_22);
x_24 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_25 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_24, x_23);
x_26 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_25, x_19);
x_27 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_26);
lean::cnstr_set(x_20, 0, x_27);
return x_20;
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_28 = lean::cnstr_get(x_20, 0);
x_29 = lean::cnstr_get(x_20, 1);
lean::inc(x_29);
lean::inc(x_28);
lean::dec(x_20);
x_30 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_14, x_28);
x_31 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_32 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_31, x_30);
x_33 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_32, x_19);
x_34 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_29);
return x_35;
}
}
}
else
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_44 = lean::cnstr_get(x_7, 0);
x_45 = lean::cnstr_get(x_7, 1);
x_46 = lean::cnstr_get(x_7, 2);
lean::inc(x_46);
lean::inc(x_45);
lean::inc(x_44);
lean::dec(x_7);
if (lean::obj_tag(x_44) == 0)
{
obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
lean::dec(x_4);
lean::dec(x_2);
x_63 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_64 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_64, 0, x_44);
lean::cnstr_set(x_64, 1, x_45);
lean::cnstr_set(x_64, 2, x_63);
x_65 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_46, x_64);
x_66 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_63, x_65);
x_67 = l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1;
x_68 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_66, x_67);
x_69 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_68);
lean::cnstr_set(x_6, 0, x_69);
return x_6;
}
else
{
obj* x_70; 
lean::dec(x_44);
lean::free_heap_obj(x_6);
x_70 = lean::box(0);
x_47 = x_70;
goto block_62;
}
block_62:
{
obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
lean::dec(x_47);
x_48 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_48, 0, x_4);
x_49 = lean::box(0);
x_50 = l_String_splitAux___main___closed__1;
x_51 = l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1;
x_52 = l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg(x_50, x_51, x_48, x_49, x_1, x_2, x_3, x_45, x_9);
lean::dec(x_2);
lean::dec(x_48);
x_53 = lean::cnstr_get(x_52, 0);
lean::inc(x_53);
x_54 = lean::cnstr_get(x_52, 1);
lean::inc(x_54);
if (lean::is_exclusive(x_52)) {
 lean::cnstr_release(x_52, 0);
 lean::cnstr_release(x_52, 1);
 x_55 = x_52;
} else {
 lean::dec_ref(x_52);
 x_55 = lean::box(0);
}
x_56 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_46, x_53);
x_57 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_58 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_57, x_56);
x_59 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_58, x_51);
x_60 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_59);
if (lean::is_scalar(x_55)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_55;
}
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_54);
return x_61;
}
}
}
else
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
x_71 = lean::cnstr_get(x_6, 1);
lean::inc(x_71);
lean::dec(x_6);
x_72 = lean::cnstr_get(x_7, 0);
lean::inc(x_72);
x_73 = lean::cnstr_get(x_7, 1);
lean::inc(x_73);
x_74 = lean::cnstr_get(x_7, 2);
lean::inc(x_74);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 lean::cnstr_release(x_7, 2);
 x_75 = x_7;
} else {
 lean::dec_ref(x_7);
 x_75 = lean::box(0);
}
if (lean::obj_tag(x_72) == 0)
{
obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
lean::dec(x_4);
lean::dec(x_2);
x_92 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
if (lean::is_scalar(x_75)) {
 x_93 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_93 = x_75;
}
lean::cnstr_set(x_93, 0, x_72);
lean::cnstr_set(x_93, 1, x_73);
lean::cnstr_set(x_93, 2, x_92);
x_94 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_74, x_93);
x_95 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_92, x_94);
x_96 = l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1;
x_97 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_95, x_96);
x_98 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_97);
x_99 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_99, 0, x_98);
lean::cnstr_set(x_99, 1, x_71);
return x_99;
}
else
{
obj* x_100; 
lean::dec(x_75);
lean::dec(x_72);
x_100 = lean::box(0);
x_76 = x_100;
goto block_91;
}
block_91:
{
obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; 
lean::dec(x_76);
x_77 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_77, 0, x_4);
x_78 = lean::box(0);
x_79 = l_String_splitAux___main___closed__1;
x_80 = l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1;
x_81 = l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg(x_79, x_80, x_77, x_78, x_1, x_2, x_3, x_73, x_71);
lean::dec(x_2);
lean::dec(x_77);
x_82 = lean::cnstr_get(x_81, 0);
lean::inc(x_82);
x_83 = lean::cnstr_get(x_81, 1);
lean::inc(x_83);
if (lean::is_exclusive(x_81)) {
 lean::cnstr_release(x_81, 0);
 lean::cnstr_release(x_81, 1);
 x_84 = x_81;
} else {
 lean::dec_ref(x_81);
 x_84 = lean::box(0);
}
x_85 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_74, x_82);
x_86 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_87 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_86, x_85);
x_88 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_87, x_80);
x_89 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_88);
if (lean::is_scalar(x_84)) {
 x_90 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_90 = x_84;
}
lean::cnstr_set(x_90, 0, x_89);
lean::cnstr_set(x_90, 1, x_83);
return x_90;
}
}
}
else
{
uint8 x_101; 
lean::dec(x_4);
lean::dec(x_2);
x_101 = !lean::is_exclusive(x_6);
if (x_101 == 0)
{
obj* x_102; uint8 x_103; 
x_102 = lean::cnstr_get(x_6, 0);
lean::dec(x_102);
x_103 = !lean::is_exclusive(x_7);
if (x_103 == 0)
{
obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; 
x_104 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_105 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_104, x_7);
x_106 = l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1;
x_107 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_105, x_106);
x_108 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_107);
lean::cnstr_set(x_6, 0, x_108);
return x_6;
}
else
{
obj* x_109; uint8 x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; 
x_109 = lean::cnstr_get(x_7, 0);
x_110 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1);
lean::inc(x_109);
lean::dec(x_7);
x_111 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_111, 0, x_109);
lean::cnstr_set_scalar(x_111, sizeof(void*)*1, x_110);
x_112 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_113 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_112, x_111);
x_114 = l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1;
x_115 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_113, x_114);
x_116 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_115);
lean::cnstr_set(x_6, 0, x_116);
return x_6;
}
}
else
{
obj* x_117; obj* x_118; uint8 x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; obj* x_127; 
x_117 = lean::cnstr_get(x_6, 1);
lean::inc(x_117);
lean::dec(x_6);
x_118 = lean::cnstr_get(x_7, 0);
lean::inc(x_118);
x_119 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_120 = x_7;
} else {
 lean::dec_ref(x_7);
 x_120 = lean::box(0);
}
if (lean::is_scalar(x_120)) {
 x_121 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_121 = x_120;
}
lean::cnstr_set(x_121, 0, x_118);
lean::cnstr_set_scalar(x_121, sizeof(void*)*1, x_119);
x_122 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_123 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_122, x_121);
x_124 = l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1;
x_125 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_123, x_124);
x_126 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_125);
x_127 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_127, 0, x_126);
lean::cnstr_set(x_127, 1, x_117);
return x_127;
}
}
}
}
obj* l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_3);
lean::dec(x_1);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_unquotedSymbol_tokens() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_unquotedSymbol_View() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_raw_view___rarg___lambda__1___boxed), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_raw_view___rarg___lambda__2___boxed), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_notationSymbol() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("notationSymbol");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_2 = lean::box(0);
x_3 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView;
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
x_5 = lean::apply_1(x_4, x_1);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__1;
x_8 = l_Lean_Parser_Syntax_mkNode(x_7, x_6);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_2);
x_10 = l_Lean_Parser_command_NotationSpec_notationSymbol;
x_11 = l_Lean_Parser_Syntax_mkNode(x_10, x_9);
return x_11;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("notationSymbol");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1;
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__2;
x_8 = lean_name_dec_eq(x_5, x_7);
lean::dec(x_5);
if (x_8 == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1;
return x_9;
}
else
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
x_10 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1;
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_6, 0);
lean::inc(x_12);
lean::dec(x_6);
x_13 = l_Lean_Parser_Syntax_asNode___main(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1;
return x_14;
}
else
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
switch (lean::obj_tag(x_16)) {
case 0:
{
obj* x_17; 
lean::dec(x_15);
x_17 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1;
return x_17;
}
case 1:
{
obj* x_18; 
lean::dec(x_16);
lean::dec(x_15);
x_18 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1;
return x_18;
}
default: 
{
obj* x_19; obj* x_20; obj* x_21; uint8 x_22; 
x_19 = lean::cnstr_get(x_15, 1);
lean::inc(x_19);
lean::dec(x_15);
x_20 = lean::cnstr_get(x_16, 0);
lean::inc(x_20);
lean::dec(x_16);
x_21 = lean::box(0);
x_22 = lean_name_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; 
lean::dec(x_19);
x_23 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1;
return x_23;
}
else
{
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; 
x_24 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1;
return x_24;
}
else
{
obj* x_25; 
x_25 = lean::cnstr_get(x_19, 1);
lean::inc(x_25);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_26 = lean::cnstr_get(x_19, 0);
lean::inc(x_26);
lean::dec(x_19);
x_27 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView;
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_29 = lean::apply_1(x_28, x_26);
return x_29;
}
else
{
obj* x_30; 
lean::dec(x_25);
lean::dec(x_19);
x_30 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1;
return x_30;
}
}
}
}
}
}
}
else
{
obj* x_31; 
lean::dec(x_11);
lean::dec(x_6);
x_31 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1;
return x_31;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_notationSymbol_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens;
x_3 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_1);
x_4 = l_Lean_Parser_tokens___rarg(x_3);
lean::dec(x_3);
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_1);
lean::dec(x_4);
x_6 = l_Lean_Parser_tokens___rarg(x_5);
lean::dec(x_5);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_1 = lean::box(0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser), 5, 0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_5, 0, x_3);
lean::closure_set(x_5, 1, x_4);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = l_Lean_Parser_TermParserM_Monad;
x_8 = l_Lean_Parser_TermParserM_MonadExcept;
x_9 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_10 = l_Lean_Parser_TermParserM_Alternative;
x_11 = l_Lean_Parser_command_NotationSpec_notationSymbol;
x_12 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
x_13 = l_Lean_Parser_Combinators_node_view___rarg(x_7, x_8, x_9, x_10, x_11, x_6, x_12);
lean::dec(x_6);
return x_13;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_notationSymbol_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = lean::box(0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser), 5, 0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_5, 0, x_3);
lean::closure_set(x_5, 1, x_4);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
return x_6;
}
}
obj* l_Lean_Parser_command_NotationSpec_notationSymbol_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_NotationSpec_notationSymbol;
x_7 = l_Lean_Parser_command_NotationSpec_notationSymbol_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("mixfixSymbol");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___elambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_nat_obj(1u);
x_4 = lean_name_mk_numeral(x_2, x_3);
x_5 = lean::box(3);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = l_Lean_Parser_Syntax_mkNode(x_4, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_command_NotationSpec_mixfixSymbol;
x_10 = l_Lean_Parser_Syntax_mkNode(x_9, x_8);
return x_10;
}
}
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::box(0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::apply_1(x_5, x_3);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
x_8 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__1;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_2);
x_11 = l_Lean_Parser_command_NotationSpec_mixfixSymbol;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___elambda__1___closed__1;
return x_14;
}
else
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_16 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_2);
x_18 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__3;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_2);
x_21 = l_Lean_Parser_command_NotationSpec_mixfixSymbol;
x_22 = l_Lean_Parser_Syntax_mkNode(x_21, x_20);
return x_22;
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("mixfixSymbol");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__3;
x_8 = lean_name_dec_eq(x_5, x_7);
lean::dec(x_5);
if (x_8 == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_9;
}
else
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
x_10 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_6, 0);
lean::inc(x_12);
lean::dec(x_6);
x_13 = l_Lean_Parser_Syntax_asNode___main(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_14;
}
else
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_13);
if (x_15 == 0)
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_13, 0);
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
switch (lean::obj_tag(x_17)) {
case 0:
{
obj* x_18; 
lean::free_heap_obj(x_13);
lean::dec(x_16);
x_18 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_18;
}
case 1:
{
obj* x_19; 
lean::dec(x_17);
lean::free_heap_obj(x_13);
lean::dec(x_16);
x_19 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_19;
}
default: 
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; uint8 x_24; 
x_20 = lean::cnstr_get(x_16, 1);
lean::inc(x_20);
lean::dec(x_16);
x_21 = lean::cnstr_get(x_17, 0);
lean::inc(x_21);
x_22 = lean::cnstr_get(x_17, 1);
lean::inc(x_22);
lean::dec(x_17);
x_23 = lean::box(0);
x_24 = lean_name_dec_eq(x_21, x_23);
lean::dec(x_21);
if (x_24 == 0)
{
obj* x_25; 
lean::dec(x_22);
lean::dec(x_20);
lean::free_heap_obj(x_13);
x_25 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_25;
}
else
{
if (lean::obj_tag(x_20) == 0)
{
obj* x_26; 
lean::dec(x_22);
lean::free_heap_obj(x_13);
x_26 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_26;
}
else
{
obj* x_27; 
x_27 = lean::cnstr_get(x_20, 1);
lean::inc(x_27);
if (lean::obj_tag(x_27) == 0)
{
obj* x_28; obj* x_29; uint8 x_30; 
x_28 = lean::cnstr_get(x_20, 0);
lean::inc(x_28);
lean::dec(x_20);
x_29 = lean::mk_nat_obj(0u);
x_30 = lean::nat_dec_eq(x_22, x_29);
lean::dec(x_22);
if (x_30 == 0)
{
if (lean::obj_tag(x_28) == 0)
{
obj* x_31; obj* x_32; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
lean::cnstr_set(x_13, 0, x_31);
x_32 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_32, 0, x_13);
return x_32;
}
else
{
obj* x_33; 
lean::dec(x_28);
lean::free_heap_obj(x_13);
x_33 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__1;
return x_33;
}
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
lean::free_heap_obj(x_13);
x_34 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView;
x_35 = lean::cnstr_get(x_34, 0);
lean::inc(x_35);
x_36 = lean::apply_1(x_35, x_28);
x_37 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_37, 0, x_36);
return x_37;
}
}
else
{
obj* x_38; 
lean::dec(x_27);
lean::dec(x_22);
lean::dec(x_20);
lean::free_heap_obj(x_13);
x_38 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_38;
}
}
}
}
}
}
else
{
obj* x_39; obj* x_40; 
x_39 = lean::cnstr_get(x_13, 0);
lean::inc(x_39);
lean::dec(x_13);
x_40 = lean::cnstr_get(x_39, 0);
lean::inc(x_40);
switch (lean::obj_tag(x_40)) {
case 0:
{
obj* x_41; 
lean::dec(x_39);
x_41 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_41;
}
case 1:
{
obj* x_42; 
lean::dec(x_40);
lean::dec(x_39);
x_42 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_42;
}
default: 
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; uint8 x_47; 
x_43 = lean::cnstr_get(x_39, 1);
lean::inc(x_43);
lean::dec(x_39);
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
x_45 = lean::cnstr_get(x_40, 1);
lean::inc(x_45);
lean::dec(x_40);
x_46 = lean::box(0);
x_47 = lean_name_dec_eq(x_44, x_46);
lean::dec(x_44);
if (x_47 == 0)
{
obj* x_48; 
lean::dec(x_45);
lean::dec(x_43);
x_48 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_48;
}
else
{
if (lean::obj_tag(x_43) == 0)
{
obj* x_49; 
lean::dec(x_45);
x_49 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_49;
}
else
{
obj* x_50; 
x_50 = lean::cnstr_get(x_43, 1);
lean::inc(x_50);
if (lean::obj_tag(x_50) == 0)
{
obj* x_51; obj* x_52; uint8 x_53; 
x_51 = lean::cnstr_get(x_43, 0);
lean::inc(x_51);
lean::dec(x_43);
x_52 = lean::mk_nat_obj(0u);
x_53 = lean::nat_dec_eq(x_45, x_52);
lean::dec(x_45);
if (x_53 == 0)
{
if (lean::obj_tag(x_51) == 0)
{
obj* x_54; obj* x_55; obj* x_56; 
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
lean::dec(x_51);
x_55 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_55, 0, x_54);
x_56 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_56, 0, x_55);
return x_56;
}
else
{
obj* x_57; 
lean::dec(x_51);
x_57 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__1;
return x_57;
}
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_58 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView;
x_59 = lean::cnstr_get(x_58, 0);
lean::inc(x_59);
x_60 = lean::apply_1(x_59, x_51);
x_61 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_61, 0, x_60);
return x_61;
}
}
else
{
obj* x_62; 
lean::dec(x_50);
lean::dec(x_45);
lean::dec(x_43);
x_62 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_62;
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
obj* x_63; 
lean::dec(x_11);
lean::dec(x_6);
x_63 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2;
return x_63;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_command_NotationSpec_unquotedSymbol_tokens;
x_3 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_1);
x_4 = l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens;
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_3);
lean::dec(x_3);
x_6 = l_Lean_Parser_tokens___rarg(x_5);
lean::dec(x_5);
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_6, x_1);
lean::dec(x_6);
x_8 = l_Lean_Parser_tokens___rarg(x_7);
lean::dec(x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_1 = lean::box(0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___boxed), 5, 0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser), 5, 0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_7, 0, x_5);
lean::closure_set(x_7, 1, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_TermParserM_Monad;
x_10 = l_Lean_Parser_TermParserM_MonadExcept;
x_11 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_12 = l_Lean_Parser_TermParserM_Alternative;
x_13 = l_Lean_Parser_command_NotationSpec_mixfixSymbol;
x_14 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView;
x_15 = l_Lean_Parser_Combinators_node_view___rarg(x_9, x_10, x_11, x_12, x_13, x_8, x_14);
lean::dec(x_8);
return x_15;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::box(0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___boxed), 5, 0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser), 5, 0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_7, 0, x_5);
lean::closure_set(x_7, 1, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
return x_8;
}
}
obj* l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_NotationSpec_mixfixSymbol;
x_7 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldActionFolder() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("foldActionFolder");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_1, 0);
x_3 = lean::cnstr_get(x_1, 1);
x_4 = lean::cnstr_get(x_1, 2);
x_5 = lean::cnstr_get(x_1, 3);
x_6 = lean::cnstr_get(x_1, 4);
x_7 = lean::cnstr_get(x_1, 5);
lean::inc(x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_3);
lean::inc(x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_4);
x_10 = lean::box(0);
if (lean::obj_tag(x_2) == 0)
{
if (lean::obj_tag(x_5) == 0)
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_11 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
lean::inc(x_6);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_6);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::box(3);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_9);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_13);
lean::cnstr_set(x_17, 1, x_16);
x_18 = l_Lean_Parser_command_NotationSpec_foldActionFolder;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
return x_19;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_20 = lean::cnstr_get(x_7, 0);
lean::inc(x_20);
x_21 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_21, 0, x_20);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_10);
lean::inc(x_6);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_6);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::box(3);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_23);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_9);
lean::cnstr_set(x_26, 1, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_8);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_24);
lean::cnstr_set(x_28, 1, x_27);
x_29 = l_Lean_Parser_command_NotationSpec_foldActionFolder;
x_30 = l_Lean_Parser_Syntax_mkNode(x_29, x_28);
return x_30;
}
}
else
{
obj* x_31; obj* x_32; 
x_31 = lean::cnstr_get(x_5, 0);
lean::inc(x_31);
x_32 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_32, 0, x_31);
if (lean::obj_tag(x_7) == 0)
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_33 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
lean::inc(x_6);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_6);
lean::cnstr_set(x_34, 1, x_33);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_32);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_9);
lean::cnstr_set(x_36, 1, x_35);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_8);
lean::cnstr_set(x_37, 1, x_36);
x_38 = lean::box(3);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_37);
x_40 = l_Lean_Parser_command_NotationSpec_foldActionFolder;
x_41 = l_Lean_Parser_Syntax_mkNode(x_40, x_39);
return x_41;
}
else
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
x_42 = lean::cnstr_get(x_7, 0);
lean::inc(x_42);
x_43 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_43, 0, x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_10);
lean::inc(x_6);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_6);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_32);
lean::cnstr_set(x_46, 1, x_45);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_9);
lean::cnstr_set(x_47, 1, x_46);
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_8);
lean::cnstr_set(x_48, 1, x_47);
x_49 = lean::box(3);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_48);
x_51 = l_Lean_Parser_command_NotationSpec_foldActionFolder;
x_52 = l_Lean_Parser_Syntax_mkNode(x_51, x_50);
return x_52;
}
}
}
else
{
obj* x_53; obj* x_54; 
x_53 = lean::cnstr_get(x_2, 0);
lean::inc(x_53);
x_54 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_54, 0, x_53);
if (lean::obj_tag(x_5) == 0)
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_55 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
lean::inc(x_6);
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_6);
lean::cnstr_set(x_56, 1, x_55);
x_57 = lean::box(3);
x_58 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_56);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_9);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_60, 0, x_8);
lean::cnstr_set(x_60, 1, x_59);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_54);
lean::cnstr_set(x_61, 1, x_60);
x_62 = l_Lean_Parser_command_NotationSpec_foldActionFolder;
x_63 = l_Lean_Parser_Syntax_mkNode(x_62, x_61);
return x_63;
}
else
{
obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_64 = lean::cnstr_get(x_7, 0);
lean::inc(x_64);
x_65 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_65, 0, x_64);
x_66 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_10);
lean::inc(x_6);
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_6);
lean::cnstr_set(x_67, 1, x_66);
x_68 = lean::box(3);
x_69 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_67);
x_70 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_70, 0, x_9);
lean::cnstr_set(x_70, 1, x_69);
x_71 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_71, 0, x_8);
lean::cnstr_set(x_71, 1, x_70);
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_54);
lean::cnstr_set(x_72, 1, x_71);
x_73 = l_Lean_Parser_command_NotationSpec_foldActionFolder;
x_74 = l_Lean_Parser_Syntax_mkNode(x_73, x_72);
return x_74;
}
}
else
{
obj* x_75; obj* x_76; 
x_75 = lean::cnstr_get(x_5, 0);
lean::inc(x_75);
x_76 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_76, 0, x_75);
if (lean::obj_tag(x_7) == 0)
{
obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; 
x_77 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
lean::inc(x_6);
x_78 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_78, 0, x_6);
lean::cnstr_set(x_78, 1, x_77);
x_79 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_79, 0, x_76);
lean::cnstr_set(x_79, 1, x_78);
x_80 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_80, 0, x_9);
lean::cnstr_set(x_80, 1, x_79);
x_81 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_81, 0, x_8);
lean::cnstr_set(x_81, 1, x_80);
x_82 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_82, 0, x_54);
lean::cnstr_set(x_82, 1, x_81);
x_83 = l_Lean_Parser_command_NotationSpec_foldActionFolder;
x_84 = l_Lean_Parser_Syntax_mkNode(x_83, x_82);
return x_84;
}
else
{
obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; 
x_85 = lean::cnstr_get(x_7, 0);
lean::inc(x_85);
x_86 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_86, 0, x_85);
x_87 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_87, 0, x_86);
lean::cnstr_set(x_87, 1, x_10);
lean::inc(x_6);
x_88 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_88, 0, x_6);
lean::cnstr_set(x_88, 1, x_87);
x_89 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_89, 0, x_76);
lean::cnstr_set(x_89, 1, x_88);
x_90 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_90, 0, x_9);
lean::cnstr_set(x_90, 1, x_89);
x_91 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_91, 0, x_8);
lean::cnstr_set(x_91, 1, x_90);
x_92 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_92, 0, x_54);
lean::cnstr_set(x_92, 1, x_91);
x_93 = l_Lean_Parser_command_NotationSpec_foldActionFolder;
x_94 = l_Lean_Parser_Syntax_mkNode(x_93, x_92);
return x_94;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_3 = lean::box(3);
x_4 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_2);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_1);
lean::cnstr_set(x_4, 4, x_3);
lean::cnstr_set(x_4, 5, x_1);
return x_4;
}
}
obj* l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_60; 
x_60 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_60) == 0)
{
obj* x_61; 
x_61 = l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___lambda__1___closed__1;
return x_61;
}
else
{
obj* x_62; obj* x_63; 
x_62 = lean::cnstr_get(x_60, 0);
lean::inc(x_62);
lean::dec(x_60);
x_63 = lean::cnstr_get(x_62, 1);
lean::inc(x_63);
lean::dec(x_62);
if (lean::obj_tag(x_63) == 0)
{
obj* x_64; 
x_64 = lean::box(3);
x_2 = x_63;
x_3 = x_64;
goto block_59;
}
else
{
obj* x_65; obj* x_66; 
x_65 = lean::cnstr_get(x_63, 0);
lean::inc(x_65);
x_66 = lean::cnstr_get(x_63, 1);
lean::inc(x_66);
lean::dec(x_63);
x_2 = x_66;
x_3 = x_65;
goto block_59;
}
}
block_59:
{
obj* x_4; 
if (lean::obj_tag(x_3) == 0)
{
obj* x_56; obj* x_57; 
x_56 = lean::cnstr_get(x_3, 0);
lean::inc(x_56);
lean::dec(x_3);
x_57 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_57, 0, x_56);
x_4 = x_57;
goto block_55;
}
else
{
obj* x_58; 
lean::dec(x_3);
x_58 = lean::box(0);
x_4 = x_58;
goto block_55;
}
block_55:
{
obj* x_5; obj* x_6; 
if (lean::obj_tag(x_2) == 0)
{
obj* x_52; 
x_52 = lean::box(3);
x_5 = x_2;
x_6 = x_52;
goto block_51;
}
else
{
obj* x_53; obj* x_54; 
x_53 = lean::cnstr_get(x_2, 0);
lean::inc(x_53);
x_54 = lean::cnstr_get(x_2, 1);
lean::inc(x_54);
lean::dec(x_2);
x_5 = x_54;
x_6 = x_53;
goto block_51;
}
block_51:
{
obj* x_7; 
if (lean::obj_tag(x_6) == 1)
{
obj* x_49; 
x_49 = lean::cnstr_get(x_6, 0);
lean::inc(x_49);
lean::dec(x_6);
x_7 = x_49;
goto block_48;
}
else
{
obj* x_50; 
lean::dec(x_6);
x_50 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_7 = x_50;
goto block_48;
}
block_48:
{
obj* x_8; obj* x_9; 
if (lean::obj_tag(x_5) == 0)
{
obj* x_45; 
x_45 = lean::box(3);
x_8 = x_5;
x_9 = x_45;
goto block_44;
}
else
{
obj* x_46; obj* x_47; 
x_46 = lean::cnstr_get(x_5, 0);
lean::inc(x_46);
x_47 = lean::cnstr_get(x_5, 1);
lean::inc(x_47);
lean::dec(x_5);
x_8 = x_47;
x_9 = x_46;
goto block_44;
}
block_44:
{
obj* x_10; 
if (lean::obj_tag(x_9) == 1)
{
obj* x_42; 
x_42 = lean::cnstr_get(x_9, 0);
lean::inc(x_42);
lean::dec(x_9);
x_10 = x_42;
goto block_41;
}
else
{
obj* x_43; 
lean::dec(x_9);
x_43 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_10 = x_43;
goto block_41;
}
block_41:
{
obj* x_11; obj* x_12; obj* x_13; obj* x_23; obj* x_24; 
if (lean::obj_tag(x_8) == 0)
{
obj* x_38; 
x_38 = lean::box(3);
x_23 = x_8;
x_24 = x_38;
goto block_37;
}
else
{
obj* x_39; obj* x_40; 
x_39 = lean::cnstr_get(x_8, 0);
lean::inc(x_39);
x_40 = lean::cnstr_get(x_8, 1);
lean::inc(x_40);
lean::dec(x_8);
x_23 = x_40;
x_24 = x_39;
goto block_37;
}
block_22:
{
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_15; 
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_15, 0, x_4);
lean::cnstr_set(x_15, 1, x_7);
lean::cnstr_set(x_15, 2, x_10);
lean::cnstr_set(x_15, 3, x_11);
lean::cnstr_set(x_15, 4, x_12);
lean::cnstr_set(x_15, 5, x_14);
return x_15;
}
else
{
obj* x_16; 
x_16 = lean::cnstr_get(x_13, 0);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
x_18 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_18, 0, x_17);
x_19 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_19, 0, x_4);
lean::cnstr_set(x_19, 1, x_7);
lean::cnstr_set(x_19, 2, x_10);
lean::cnstr_set(x_19, 3, x_11);
lean::cnstr_set(x_19, 4, x_12);
lean::cnstr_set(x_19, 5, x_18);
return x_19;
}
else
{
obj* x_20; obj* x_21; 
x_20 = lean::box(0);
x_21 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_21, 0, x_4);
lean::cnstr_set(x_21, 1, x_7);
lean::cnstr_set(x_21, 2, x_10);
lean::cnstr_set(x_21, 3, x_11);
lean::cnstr_set(x_21, 4, x_12);
lean::cnstr_set(x_21, 5, x_20);
return x_21;
}
}
}
block_37:
{
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_26; 
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
lean::dec(x_24);
x_26 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_26, 0, x_25);
if (lean::obj_tag(x_23) == 0)
{
obj* x_27; obj* x_28; obj* x_29; 
x_27 = lean::box(0);
x_28 = lean::box(3);
x_29 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_29, 0, x_4);
lean::cnstr_set(x_29, 1, x_7);
lean::cnstr_set(x_29, 2, x_10);
lean::cnstr_set(x_29, 3, x_26);
lean::cnstr_set(x_29, 4, x_28);
lean::cnstr_set(x_29, 5, x_27);
return x_29;
}
else
{
obj* x_30; obj* x_31; 
x_30 = lean::cnstr_get(x_23, 0);
lean::inc(x_30);
x_31 = lean::cnstr_get(x_23, 1);
lean::inc(x_31);
lean::dec(x_23);
x_11 = x_26;
x_12 = x_30;
x_13 = x_31;
goto block_22;
}
}
else
{
obj* x_32; 
lean::dec(x_24);
x_32 = lean::box(0);
if (lean::obj_tag(x_23) == 0)
{
obj* x_33; obj* x_34; 
x_33 = lean::box(3);
x_34 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_34, 0, x_4);
lean::cnstr_set(x_34, 1, x_7);
lean::cnstr_set(x_34, 2, x_10);
lean::cnstr_set(x_34, 3, x_32);
lean::cnstr_set(x_34, 4, x_33);
lean::cnstr_set(x_34, 5, x_32);
return x_34;
}
else
{
obj* x_35; obj* x_36; 
x_35 = lean::cnstr_get(x_23, 0);
lean::inc(x_35);
x_36 = lean::cnstr_get(x_23, 1);
lean::inc(x_36);
lean::dec(x_23);
x_11 = x_32;
x_12 = x_35;
x_13 = x_36;
goto block_22;
}
}
}
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___elambda__1___boxed), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldAction() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("foldAction");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_1, 2);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_1, 3);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_1, 4);
lean::inc(x_6);
x_7 = lean::cnstr_get(x_1, 5);
lean::inc(x_7);
x_8 = lean::cnstr_get(x_1, 6);
lean::inc(x_8);
lean::dec(x_1);
x_9 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::inc(x_10);
x_11 = lean::apply_1(x_10, x_4);
x_12 = l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView;
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
x_14 = lean::apply_1(x_13, x_5);
x_15 = lean::apply_1(x_10, x_7);
x_16 = lean::box(0);
if (lean::obj_tag(x_2) == 0)
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_17 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_15);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_6);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_14);
lean::cnstr_set(x_20, 1, x_19);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_11);
lean::cnstr_set(x_21, 1, x_20);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_3);
lean::cnstr_set(x_22, 1, x_21);
x_23 = lean::box(3);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_22);
x_25 = l_Lean_Parser_command_NotationSpec_foldAction;
x_26 = l_Lean_Parser_Syntax_mkNode(x_25, x_24);
return x_26;
}
else
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_27 = lean::cnstr_get(x_8, 0);
lean::inc(x_27);
lean::dec(x_8);
x_28 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_16);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_15);
lean::cnstr_set(x_30, 1, x_29);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_6);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_14);
lean::cnstr_set(x_32, 1, x_31);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_11);
lean::cnstr_set(x_33, 1, x_32);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_3);
lean::cnstr_set(x_34, 1, x_33);
x_35 = lean::box(3);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_34);
x_37 = l_Lean_Parser_command_NotationSpec_foldAction;
x_38 = l_Lean_Parser_Syntax_mkNode(x_37, x_36);
return x_38;
}
}
else
{
obj* x_39; obj* x_40; 
x_39 = lean::cnstr_get(x_2, 0);
lean::inc(x_39);
lean::dec(x_2);
x_40 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_40, 0, x_39);
if (lean::obj_tag(x_8) == 0)
{
obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_41 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_15);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_6);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_14);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_11);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_3);
lean::cnstr_set(x_46, 1, x_45);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_40);
lean::cnstr_set(x_47, 1, x_46);
x_48 = l_Lean_Parser_command_NotationSpec_foldAction;
x_49 = l_Lean_Parser_Syntax_mkNode(x_48, x_47);
return x_49;
}
else
{
obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_50 = lean::cnstr_get(x_8, 0);
lean::inc(x_50);
lean::dec(x_8);
x_51 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_51, 0, x_50);
x_52 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_16);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_15);
lean::cnstr_set(x_53, 1, x_52);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_6);
lean::cnstr_set(x_54, 1, x_53);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_14);
lean::cnstr_set(x_55, 1, x_54);
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_11);
lean::cnstr_set(x_56, 1, x_55);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_3);
lean::cnstr_set(x_57, 1, x_56);
x_58 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_58, 0, x_40);
lean::cnstr_set(x_58, 1, x_57);
x_59 = l_Lean_Parser_command_NotationSpec_foldAction;
x_60 = l_Lean_Parser_Syntax_mkNode(x_59, x_58);
return x_60;
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_3, x_4);
x_6 = l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView;
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_8 = lean::apply_1(x_7, x_4);
x_9 = l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__1;
x_10 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_10, 0, x_1);
lean::cnstr_set(x_10, 1, x_4);
lean::cnstr_set(x_10, 2, x_5);
lean::cnstr_set(x_10, 3, x_8);
lean::cnstr_set(x_10, 4, x_4);
lean::cnstr_set(x_10, 5, x_9);
lean::cnstr_set(x_10, 6, x_1);
return x_10;
}
}
obj* l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_55; 
x_55 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_55) == 0)
{
obj* x_56; 
x_56 = l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__2;
return x_56;
}
else
{
obj* x_57; obj* x_58; 
x_57 = lean::cnstr_get(x_55, 0);
lean::inc(x_57);
lean::dec(x_55);
x_58 = lean::cnstr_get(x_57, 1);
lean::inc(x_58);
lean::dec(x_57);
if (lean::obj_tag(x_58) == 0)
{
obj* x_59; 
x_59 = lean::box(3);
x_2 = x_58;
x_3 = x_59;
goto block_54;
}
else
{
obj* x_60; obj* x_61; 
x_60 = lean::cnstr_get(x_58, 0);
lean::inc(x_60);
x_61 = lean::cnstr_get(x_58, 1);
lean::inc(x_61);
lean::dec(x_58);
x_2 = x_61;
x_3 = x_60;
goto block_54;
}
}
block_54:
{
obj* x_4; 
if (lean::obj_tag(x_3) == 0)
{
obj* x_51; obj* x_52; 
x_51 = lean::cnstr_get(x_3, 0);
lean::inc(x_51);
lean::dec(x_3);
x_52 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_52, 0, x_51);
x_4 = x_52;
goto block_50;
}
else
{
obj* x_53; 
lean::dec(x_3);
x_53 = lean::box(0);
x_4 = x_53;
goto block_50;
}
block_50:
{
obj* x_5; obj* x_6; 
if (lean::obj_tag(x_2) == 0)
{
obj* x_47; 
x_47 = lean::box(3);
x_5 = x_2;
x_6 = x_47;
goto block_46;
}
else
{
obj* x_48; obj* x_49; 
x_48 = lean::cnstr_get(x_2, 0);
lean::inc(x_48);
x_49 = lean::cnstr_get(x_2, 1);
lean::inc(x_49);
lean::dec(x_2);
x_5 = x_49;
x_6 = x_48;
goto block_46;
}
block_46:
{
obj* x_7; obj* x_8; 
if (lean::obj_tag(x_5) == 0)
{
obj* x_43; 
x_43 = lean::box(3);
x_7 = x_5;
x_8 = x_43;
goto block_42;
}
else
{
obj* x_44; obj* x_45; 
x_44 = lean::cnstr_get(x_5, 0);
lean::inc(x_44);
x_45 = lean::cnstr_get(x_5, 1);
lean::inc(x_45);
lean::dec(x_5);
x_7 = x_45;
x_8 = x_44;
goto block_42;
}
block_42:
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_9 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
lean::inc(x_10);
x_11 = lean::apply_1(x_10, x_8);
if (lean::obj_tag(x_7) == 0)
{
obj* x_39; 
x_39 = lean::box(3);
x_12 = x_7;
x_13 = x_39;
goto block_38;
}
else
{
obj* x_40; obj* x_41; 
x_40 = lean::cnstr_get(x_7, 0);
lean::inc(x_40);
x_41 = lean::cnstr_get(x_7, 1);
lean::inc(x_41);
lean::dec(x_7);
x_12 = x_41;
x_13 = x_40;
goto block_38;
}
block_38:
{
obj* x_14; obj* x_15; obj* x_16; 
x_14 = l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView;
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_16 = lean::apply_1(x_15, x_13);
if (lean::obj_tag(x_12) == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
lean::dec(x_10);
x_17 = lean::box(0);
x_18 = lean::box(3);
x_19 = l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__1;
x_20 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_20, 0, x_4);
lean::cnstr_set(x_20, 1, x_6);
lean::cnstr_set(x_20, 2, x_11);
lean::cnstr_set(x_20, 3, x_16);
lean::cnstr_set(x_20, 4, x_18);
lean::cnstr_set(x_20, 5, x_19);
lean::cnstr_set(x_20, 6, x_17);
return x_20;
}
else
{
obj* x_21; 
x_21 = lean::cnstr_get(x_12, 1);
lean::inc(x_21);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_10);
x_22 = lean::cnstr_get(x_12, 0);
lean::inc(x_22);
lean::dec(x_12);
x_23 = lean::box(0);
x_24 = l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__1;
x_25 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_25, 0, x_4);
lean::cnstr_set(x_25, 1, x_6);
lean::cnstr_set(x_25, 2, x_11);
lean::cnstr_set(x_25, 3, x_16);
lean::cnstr_set(x_25, 4, x_22);
lean::cnstr_set(x_25, 5, x_24);
lean::cnstr_set(x_25, 6, x_23);
return x_25;
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_26 = lean::cnstr_get(x_12, 0);
lean::inc(x_26);
lean::dec(x_12);
x_27 = lean::cnstr_get(x_21, 0);
lean::inc(x_27);
x_28 = lean::cnstr_get(x_21, 1);
lean::inc(x_28);
lean::dec(x_21);
x_29 = lean::apply_1(x_10, x_27);
if (lean::obj_tag(x_28) == 0)
{
obj* x_30; obj* x_31; 
x_30 = lean::box(0);
x_31 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_31, 0, x_4);
lean::cnstr_set(x_31, 1, x_6);
lean::cnstr_set(x_31, 2, x_11);
lean::cnstr_set(x_31, 3, x_16);
lean::cnstr_set(x_31, 4, x_26);
lean::cnstr_set(x_31, 5, x_29);
lean::cnstr_set(x_31, 6, x_30);
return x_31;
}
else
{
obj* x_32; 
x_32 = lean::cnstr_get(x_28, 0);
lean::inc(x_32);
lean::dec(x_28);
if (lean::obj_tag(x_32) == 0)
{
obj* x_33; obj* x_34; obj* x_35; 
x_33 = lean::cnstr_get(x_32, 0);
lean::inc(x_33);
lean::dec(x_32);
x_34 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_34, 0, x_33);
x_35 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_35, 0, x_4);
lean::cnstr_set(x_35, 1, x_6);
lean::cnstr_set(x_35, 2, x_11);
lean::cnstr_set(x_35, 3, x_16);
lean::cnstr_set(x_35, 4, x_26);
lean::cnstr_set(x_35, 5, x_29);
lean::cnstr_set(x_35, 6, x_34);
return x_35;
}
else
{
obj* x_36; obj* x_37; 
lean::dec(x_32);
x_36 = lean::box(0);
x_37 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_37, 0, x_4);
lean::cnstr_set(x_37, 1, x_6);
lean::cnstr_set(x_37, 2, x_11);
lean::cnstr_set(x_37, 3, x_16);
lean::cnstr_set(x_37, 4, x_26);
lean::cnstr_set(x_37, 5, x_29);
lean::cnstr_set(x_37, 6, x_36);
return x_37;
}
}
}
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldAction_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27;
return x_1;
}
}
obj* l_ReaderT_orelse___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__2___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; 
lean::inc(x_6);
lean::inc(x_5);
lean::inc(x_4);
lean::inc(x_3);
x_8 = lean::apply_5(x_1, x_3, x_4, x_5, x_6, x_7);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
uint8 x_10; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_10 = !lean::is_exclusive(x_8);
if (x_10 == 0)
{
obj* x_11; 
x_11 = lean::cnstr_get(x_8, 0);
lean::dec(x_11);
return x_8;
}
else
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_8, 1);
lean::inc(x_12);
lean::dec(x_8);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_9);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8 x_14; 
x_14 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (x_14 == 0)
{
obj* x_15; obj* x_16; obj* x_17; uint8 x_18; 
x_15 = lean::cnstr_get(x_8, 1);
lean::inc(x_15);
lean::dec(x_8);
x_16 = lean::cnstr_get(x_9, 0);
lean::inc(x_16);
lean::dec(x_9);
x_17 = lean::apply_5(x_2, x_3, x_4, x_5, x_6, x_15);
x_18 = !lean::is_exclusive(x_17);
if (x_18 == 0)
{
obj* x_19; obj* x_20; 
x_19 = lean::cnstr_get(x_17, 0);
x_20 = l_Lean_Parser_ParsecT_orelseMkRes___rarg(x_16, x_19);
lean::cnstr_set(x_17, 0, x_20);
return x_17;
}
else
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_21 = lean::cnstr_get(x_17, 0);
x_22 = lean::cnstr_get(x_17, 1);
lean::inc(x_22);
lean::inc(x_21);
lean::dec(x_17);
x_23 = l_Lean_Parser_ParsecT_orelseMkRes___rarg(x_16, x_21);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_22);
return x_24;
}
}
else
{
uint8 x_25; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_25 = !lean::is_exclusive(x_8);
if (x_25 == 0)
{
obj* x_26; 
x_26 = lean::cnstr_get(x_8, 0);
lean::dec(x_26);
return x_8;
}
else
{
obj* x_27; obj* x_28; 
x_27 = lean::cnstr_get(x_8, 1);
lean::inc(x_27);
lean::dec(x_8);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_9);
lean::cnstr_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
obj* l_ReaderT_orelse___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__2(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_orelse___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__2___rarg), 7, 0);
return x_2;
}
}
obj* l_List_foldl___main___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__3(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_8; 
x_8 = lean::apply_5(x_1, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_11; 
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
x_10 = lean::cnstr_get(x_2, 1);
lean::inc(x_10);
lean::dec(x_2);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_orelse___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__2___rarg), 7, 2);
lean::closure_set(x_11, 0, x_1);
lean::closure_set(x_11, 1, x_9);
x_1 = x_11;
x_2 = x_10;
goto _start;
}
}
}
obj* l_Lean_Parser_Combinators_anyOf___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_7 = lean::box(0);
x_8 = l_Lean_Parser_Combinators_anyOf___rarg___closed__1;
x_9 = l_mjoin___rarg___closed__1;
x_10 = l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg(x_8, x_9, x_7, x_7, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
return x_10;
}
else
{
obj* x_11; obj* x_12; obj* x_13; 
x_11 = lean::cnstr_get(x_1, 0);
lean::inc(x_11);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
lean::dec(x_1);
x_13 = l_List_foldl___main___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__3(x_11, x_12, x_2, x_3, x_4, x_5, x_6);
return x_13;
}
}
}
obj* _init_l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::mk_string("identifier");
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
lean::inc(x_3);
lean::inc(x_1);
x_5 = l_Lean_Parser_token(x_1, x_3, x_4);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_5);
if (x_7 == 0)
{
obj* x_8; obj* x_9; uint8 x_10; 
x_8 = lean::cnstr_get(x_5, 1);
x_9 = lean::cnstr_get(x_5, 0);
lean::dec(x_9);
x_10 = !lean::is_exclusive(x_6);
if (x_10 == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_11 = lean::cnstr_get(x_6, 0);
x_12 = lean::cnstr_get(x_6, 1);
x_13 = lean::cnstr_get(x_6, 2);
if (lean::obj_tag(x_11) == 1)
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_3);
lean::dec(x_1);
x_36 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
lean::cnstr_set(x_6, 2, x_36);
x_37 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_6);
x_38 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_36, x_37);
x_39 = l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1;
x_40 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_38, x_39);
x_41 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_40);
lean::cnstr_set(x_5, 0, x_41);
return x_5;
}
else
{
obj* x_42; 
lean::free_heap_obj(x_6);
lean::dec(x_11);
lean::free_heap_obj(x_5);
x_42 = lean::box(0);
x_14 = x_42;
goto block_35;
}
block_35:
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; uint8 x_20; 
lean::dec(x_14);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_3);
x_16 = lean::box(0);
x_17 = l_String_splitAux___main___closed__1;
x_18 = l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1;
x_19 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_17, x_18, x_15, x_16, x_1, x_12, x_8);
lean::dec(x_1);
lean::dec(x_15);
x_20 = !lean::is_exclusive(x_19);
if (x_20 == 0)
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_21 = lean::cnstr_get(x_19, 0);
x_22 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_21);
x_23 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_24 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_23, x_22);
x_25 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_24, x_18);
x_26 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_25);
lean::cnstr_set(x_19, 0, x_26);
return x_19;
}
else
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_27 = lean::cnstr_get(x_19, 0);
x_28 = lean::cnstr_get(x_19, 1);
lean::inc(x_28);
lean::inc(x_27);
lean::dec(x_19);
x_29 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_13, x_27);
x_30 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_31 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_30, x_29);
x_32 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_31, x_18);
x_33 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_32);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_28);
return x_34;
}
}
}
else
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_43 = lean::cnstr_get(x_6, 0);
x_44 = lean::cnstr_get(x_6, 1);
x_45 = lean::cnstr_get(x_6, 2);
lean::inc(x_45);
lean::inc(x_44);
lean::inc(x_43);
lean::dec(x_6);
if (lean::obj_tag(x_43) == 1)
{
obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
lean::dec(x_3);
lean::dec(x_1);
x_62 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_63 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_63, 0, x_43);
lean::cnstr_set(x_63, 1, x_44);
lean::cnstr_set(x_63, 2, x_62);
x_64 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_45, x_63);
x_65 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_62, x_64);
x_66 = l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1;
x_67 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_65, x_66);
x_68 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_67);
lean::cnstr_set(x_5, 0, x_68);
return x_5;
}
else
{
obj* x_69; 
lean::dec(x_43);
lean::free_heap_obj(x_5);
x_69 = lean::box(0);
x_46 = x_69;
goto block_61;
}
block_61:
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_46);
x_47 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_47, 0, x_3);
x_48 = lean::box(0);
x_49 = l_String_splitAux___main___closed__1;
x_50 = l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1;
x_51 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_49, x_50, x_47, x_48, x_1, x_44, x_8);
lean::dec(x_1);
lean::dec(x_47);
x_52 = lean::cnstr_get(x_51, 0);
lean::inc(x_52);
x_53 = lean::cnstr_get(x_51, 1);
lean::inc(x_53);
if (lean::is_exclusive(x_51)) {
 lean::cnstr_release(x_51, 0);
 lean::cnstr_release(x_51, 1);
 x_54 = x_51;
} else {
 lean::dec_ref(x_51);
 x_54 = lean::box(0);
}
x_55 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_45, x_52);
x_56 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_57 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_56, x_55);
x_58 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_57, x_50);
x_59 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_58);
if (lean::is_scalar(x_54)) {
 x_60 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_60 = x_54;
}
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_53);
return x_60;
}
}
}
else
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
x_70 = lean::cnstr_get(x_5, 1);
lean::inc(x_70);
lean::dec(x_5);
x_71 = lean::cnstr_get(x_6, 0);
lean::inc(x_71);
x_72 = lean::cnstr_get(x_6, 1);
lean::inc(x_72);
x_73 = lean::cnstr_get(x_6, 2);
lean::inc(x_73);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_74 = x_6;
} else {
 lean::dec_ref(x_6);
 x_74 = lean::box(0);
}
if (lean::obj_tag(x_71) == 1)
{
obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; 
lean::dec(x_3);
lean::dec(x_1);
x_91 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
if (lean::is_scalar(x_74)) {
 x_92 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_92 = x_74;
}
lean::cnstr_set(x_92, 0, x_71);
lean::cnstr_set(x_92, 1, x_72);
lean::cnstr_set(x_92, 2, x_91);
x_93 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_73, x_92);
x_94 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_91, x_93);
x_95 = l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1;
x_96 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_94, x_95);
x_97 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_96);
x_98 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_98, 0, x_97);
lean::cnstr_set(x_98, 1, x_70);
return x_98;
}
else
{
obj* x_99; 
lean::dec(x_74);
lean::dec(x_71);
x_99 = lean::box(0);
x_75 = x_99;
goto block_90;
}
block_90:
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; 
lean::dec(x_75);
x_76 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_76, 0, x_3);
x_77 = lean::box(0);
x_78 = l_String_splitAux___main___closed__1;
x_79 = l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1;
x_80 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_78, x_79, x_76, x_77, x_1, x_72, x_70);
lean::dec(x_1);
lean::dec(x_76);
x_81 = lean::cnstr_get(x_80, 0);
lean::inc(x_81);
x_82 = lean::cnstr_get(x_80, 1);
lean::inc(x_82);
if (lean::is_exclusive(x_80)) {
 lean::cnstr_release(x_80, 0);
 lean::cnstr_release(x_80, 1);
 x_83 = x_80;
} else {
 lean::dec_ref(x_80);
 x_83 = lean::box(0);
}
x_84 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_73, x_81);
x_85 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_86 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_85, x_84);
x_87 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_86, x_79);
x_88 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_87);
if (lean::is_scalar(x_83)) {
 x_89 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_89 = x_83;
}
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_82);
return x_89;
}
}
}
else
{
uint8 x_100; 
lean::dec(x_3);
lean::dec(x_1);
x_100 = !lean::is_exclusive(x_5);
if (x_100 == 0)
{
obj* x_101; uint8 x_102; 
x_101 = lean::cnstr_get(x_5, 0);
lean::dec(x_101);
x_102 = !lean::is_exclusive(x_6);
if (x_102 == 0)
{
obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
x_103 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_104 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_103, x_6);
x_105 = l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1;
x_106 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_104, x_105);
x_107 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_106);
lean::cnstr_set(x_5, 0, x_107);
return x_5;
}
else
{
obj* x_108; uint8 x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; 
x_108 = lean::cnstr_get(x_6, 0);
x_109 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
lean::inc(x_108);
lean::dec(x_6);
x_110 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_110, 0, x_108);
lean::cnstr_set_scalar(x_110, sizeof(void*)*1, x_109);
x_111 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_112 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_111, x_110);
x_113 = l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1;
x_114 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_112, x_113);
x_115 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_114);
lean::cnstr_set(x_5, 0, x_115);
return x_5;
}
}
else
{
obj* x_116; obj* x_117; uint8 x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; 
x_116 = lean::cnstr_get(x_5, 1);
lean::inc(x_116);
lean::dec(x_5);
x_117 = lean::cnstr_get(x_6, 0);
lean::inc(x_117);
x_118 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_119 = x_6;
} else {
 lean::dec_ref(x_6);
 x_119 = lean::box(0);
}
if (lean::is_scalar(x_119)) {
 x_120 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_120 = x_119;
}
lean::cnstr_set(x_120, 0, x_117);
lean::cnstr_set_scalar(x_120, sizeof(void*)*1, x_118);
x_121 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_122 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_121, x_120);
x_123 = l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1;
x_124 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_122, x_123);
x_125 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_124);
x_126 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_126, 0, x_125);
lean::cnstr_set(x_126, 1, x_116);
return x_126;
}
}
}
}
obj* l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_1 = lean::mk_string("(");
x_2 = lean::mk_nat_obj(0u);
x_3 = l_Lean_Parser_symbol_tokens___rarg(x_1, x_2);
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_4);
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_5);
lean::dec(x_5);
x_7 = l_Lean_Parser_tokens___rarg(x_6);
lean::dec(x_6);
x_8 = lean::mk_string(",");
x_9 = l_Lean_Parser_symbol_tokens___rarg(x_8, x_2);
lean::dec(x_8);
x_10 = l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens(x_2);
x_11 = lean::mk_string(")");
x_12 = l_Lean_Parser_symbol_tokens___rarg(x_11, x_2);
lean::dec(x_11);
x_13 = l_Lean_Parser_List_cons_tokens___rarg(x_12, x_4);
lean::dec(x_12);
x_14 = l_Lean_Parser_List_cons_tokens___rarg(x_10, x_13);
x_15 = l_Lean_Parser_List_cons_tokens___rarg(x_9, x_14);
lean::dec(x_14);
lean::dec(x_9);
x_16 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_15);
lean::dec(x_15);
x_17 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_16);
lean::dec(x_16);
x_18 = l_Lean_Parser_List_cons_tokens___rarg(x_3, x_17);
lean::dec(x_17);
x_19 = l_Lean_Parser_tokens___rarg(x_18);
lean::dec(x_18);
x_20 = l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasTokens;
x_21 = l_Lean_Parser_List_cons_tokens___rarg(x_20, x_13);
lean::dec(x_13);
x_22 = l_Lean_Parser_List_cons_tokens___rarg(x_10, x_21);
lean::dec(x_21);
lean::dec(x_10);
x_23 = l_Lean_Parser_List_cons_tokens___rarg(x_19, x_22);
lean::dec(x_22);
lean::dec(x_19);
x_24 = l_Lean_Parser_List_cons_tokens___rarg(x_20, x_23);
lean::dec(x_23);
x_25 = l_Lean_Parser_List_cons_tokens___rarg(x_7, x_24);
lean::dec(x_24);
lean::dec(x_7);
x_26 = l_Lean_Parser_List_cons_tokens___rarg(x_3, x_25);
lean::dec(x_25);
lean::dec(x_3);
x_27 = l_Lean_Parser_tokens___rarg(x_26);
lean::dec(x_26);
return x_27;
}
}
obj* l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg(x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
x_1 = lean::mk_string("(");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("foldl");
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string("foldr");
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_7);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_anyOf___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__1), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::mk_string(",");
x_15 = l_String_trim(x_14);
lean::dec(x_14);
lean::inc(x_15);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_16, 0, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_17, 0, x_15);
lean::closure_set(x_17, 1, x_4);
lean::closure_set(x_17, 2, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_18, 0, x_4);
x_19 = lean::mk_string(")");
x_20 = l_String_trim(x_19);
lean::dec(x_19);
lean::inc(x_20);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_21, 0, x_20);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_22, 0, x_20);
lean::closure_set(x_22, 1, x_4);
lean::closure_set(x_22, 2, x_21);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_10);
lean::inc(x_23);
lean::inc(x_18);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_18);
lean::cnstr_set(x_24, 1, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_17);
lean::cnstr_set(x_25, 1, x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___boxed), 1, 0);
lean::inc(x_26);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_25);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_26);
lean::cnstr_set(x_28, 1, x_27);
lean::inc(x_5);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_5);
lean::cnstr_set(x_29, 1, x_28);
x_30 = l_Lean_Parser_command_NotationSpec_foldActionFolder;
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_31, 0, x_30);
lean::closure_set(x_31, 1, x_29);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_notationSymbol_Parser), 5, 0);
lean::inc(x_32);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_23);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_18);
lean::cnstr_set(x_34, 1, x_33);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_31);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_32);
lean::cnstr_set(x_36, 1, x_35);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_13);
lean::cnstr_set(x_37, 1, x_36);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_5);
lean::cnstr_set(x_38, 1, x_37);
x_39 = l_Lean_Parser_TermParserM_Monad;
x_40 = l_Lean_Parser_TermParserM_MonadExcept;
x_41 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_42 = l_Lean_Parser_TermParserM_Alternative;
x_43 = l_Lean_Parser_command_NotationSpec_foldAction;
x_44 = l_Lean_Parser_command_NotationSpec_foldAction_HasView;
x_45 = l_Lean_Parser_Combinators_node_view___rarg(x_39, x_40, x_41, x_42, x_43, x_38, x_44);
lean::dec(x_38);
return x_45;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_foldAction_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_1 = lean::mk_string("(");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("foldl");
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string("foldr");
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_7);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_anyOf___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__1), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::mk_string(",");
x_15 = l_String_trim(x_14);
lean::dec(x_14);
lean::inc(x_15);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_16, 0, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_17, 0, x_15);
lean::closure_set(x_17, 1, x_4);
lean::closure_set(x_17, 2, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_18, 0, x_4);
x_19 = lean::mk_string(")");
x_20 = l_String_trim(x_19);
lean::dec(x_19);
lean::inc(x_20);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_21, 0, x_20);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_22, 0, x_20);
lean::closure_set(x_22, 1, x_4);
lean::closure_set(x_22, 2, x_21);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_10);
lean::inc(x_23);
lean::inc(x_18);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_18);
lean::cnstr_set(x_24, 1, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_17);
lean::cnstr_set(x_25, 1, x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___boxed), 1, 0);
lean::inc(x_26);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_25);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_26);
lean::cnstr_set(x_28, 1, x_27);
lean::inc(x_5);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_5);
lean::cnstr_set(x_29, 1, x_28);
x_30 = l_Lean_Parser_command_NotationSpec_foldActionFolder;
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_31, 0, x_30);
lean::closure_set(x_31, 1, x_29);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_notationSymbol_Parser), 5, 0);
lean::inc(x_32);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_23);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_18);
lean::cnstr_set(x_34, 1, x_33);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_31);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_32);
lean::cnstr_set(x_36, 1, x_35);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_13);
lean::cnstr_set(x_37, 1, x_36);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_5);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
}
obj* l_Lean_Parser_command_NotationSpec_foldAction_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_NotationSpec_foldAction;
x_7 = l_Lean_Parser_command_NotationSpec_foldAction_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_scopedAction() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("scopedAction");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_1, 2);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_1, 3);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_1, 4);
lean::inc(x_6);
x_7 = lean::cnstr_get(x_1, 5);
lean::inc(x_7);
x_8 = lean::cnstr_get(x_1, 6);
lean::inc(x_8);
lean::dec(x_1);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_3);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_5);
if (lean::obj_tag(x_2) == 0)
{
obj* x_107; 
x_107 = lean::box(3);
x_12 = x_107;
goto block_106;
}
else
{
obj* x_108; obj* x_109; 
x_108 = lean::cnstr_get(x_2, 0);
lean::inc(x_108);
lean::dec(x_2);
x_109 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_109, 0, x_108);
x_12 = x_109;
goto block_106;
}
block_106:
{
obj* x_13; obj* x_14; obj* x_15; 
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_10);
x_14 = l_Lean_Parser_noKind;
x_15 = l_Lean_Parser_Syntax_mkNode(x_14, x_13);
if (lean::obj_tag(x_4) == 0)
{
if (lean::obj_tag(x_6) == 0)
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_16 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_7);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::box(3);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_17);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_11);
lean::cnstr_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_20);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_15);
lean::cnstr_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_command_NotationSpec_scopedAction;
x_25 = l_Lean_Parser_Syntax_mkNode(x_24, x_23);
return x_25;
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_26 = lean::cnstr_get(x_8, 0);
lean::inc(x_26);
lean::dec(x_8);
x_27 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_9);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_7);
lean::cnstr_set(x_29, 1, x_28);
x_30 = lean::box(3);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_11);
lean::cnstr_set(x_32, 1, x_31);
x_33 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_32);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_15);
lean::cnstr_set(x_35, 1, x_34);
x_36 = l_Lean_Parser_command_NotationSpec_scopedAction;
x_37 = l_Lean_Parser_Syntax_mkNode(x_36, x_35);
return x_37;
}
}
else
{
obj* x_38; obj* x_39; 
x_38 = lean::cnstr_get(x_6, 0);
lean::inc(x_38);
lean::dec(x_6);
x_39 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
if (lean::obj_tag(x_8) == 0)
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_40 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_7);
lean::cnstr_set(x_41, 1, x_40);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_39);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_11);
lean::cnstr_set(x_43, 1, x_42);
x_44 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_43);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_15);
lean::cnstr_set(x_46, 1, x_45);
x_47 = l_Lean_Parser_command_NotationSpec_scopedAction;
x_48 = l_Lean_Parser_Syntax_mkNode(x_47, x_46);
return x_48;
}
else
{
obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_49 = lean::cnstr_get(x_8, 0);
lean::inc(x_49);
lean::dec(x_8);
x_50 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_50, 0, x_49);
x_51 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_9);
x_52 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_52, 0, x_7);
lean::cnstr_set(x_52, 1, x_51);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_39);
lean::cnstr_set(x_53, 1, x_52);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_11);
lean::cnstr_set(x_54, 1, x_53);
x_55 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_55);
lean::cnstr_set(x_56, 1, x_54);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_15);
lean::cnstr_set(x_57, 1, x_56);
x_58 = l_Lean_Parser_command_NotationSpec_scopedAction;
x_59 = l_Lean_Parser_Syntax_mkNode(x_58, x_57);
return x_59;
}
}
}
else
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
x_60 = lean::cnstr_get(x_4, 0);
lean::inc(x_60);
lean::dec(x_4);
x_61 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_62 = lean::cnstr_get(x_61, 1);
lean::inc(x_62);
x_63 = lean::apply_1(x_62, x_60);
x_64 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_9);
x_65 = l_Lean_Parser_Syntax_mkNode(x_14, x_64);
if (lean::obj_tag(x_6) == 0)
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_66 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_7);
lean::cnstr_set(x_67, 1, x_66);
x_68 = lean::box(3);
x_69 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_67);
x_70 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_70, 0, x_11);
lean::cnstr_set(x_70, 1, x_69);
x_71 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_71, 0, x_65);
lean::cnstr_set(x_71, 1, x_70);
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_15);
lean::cnstr_set(x_72, 1, x_71);
x_73 = l_Lean_Parser_command_NotationSpec_scopedAction;
x_74 = l_Lean_Parser_Syntax_mkNode(x_73, x_72);
return x_74;
}
else
{
obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; 
x_75 = lean::cnstr_get(x_8, 0);
lean::inc(x_75);
lean::dec(x_8);
x_76 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_76, 0, x_75);
x_77 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_9);
x_78 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_78, 0, x_7);
lean::cnstr_set(x_78, 1, x_77);
x_79 = lean::box(3);
x_80 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_80, 0, x_79);
lean::cnstr_set(x_80, 1, x_78);
x_81 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_81, 0, x_11);
lean::cnstr_set(x_81, 1, x_80);
x_82 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_82, 0, x_65);
lean::cnstr_set(x_82, 1, x_81);
x_83 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_83, 0, x_15);
lean::cnstr_set(x_83, 1, x_82);
x_84 = l_Lean_Parser_command_NotationSpec_scopedAction;
x_85 = l_Lean_Parser_Syntax_mkNode(x_84, x_83);
return x_85;
}
}
else
{
obj* x_86; obj* x_87; 
x_86 = lean::cnstr_get(x_6, 0);
lean::inc(x_86);
lean::dec(x_6);
x_87 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_87, 0, x_86);
if (lean::obj_tag(x_8) == 0)
{
obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
x_88 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
x_89 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_89, 0, x_7);
lean::cnstr_set(x_89, 1, x_88);
x_90 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_90, 0, x_87);
lean::cnstr_set(x_90, 1, x_89);
x_91 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_91, 0, x_11);
lean::cnstr_set(x_91, 1, x_90);
x_92 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_92, 0, x_65);
lean::cnstr_set(x_92, 1, x_91);
x_93 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_93, 0, x_15);
lean::cnstr_set(x_93, 1, x_92);
x_94 = l_Lean_Parser_command_NotationSpec_scopedAction;
x_95 = l_Lean_Parser_Syntax_mkNode(x_94, x_93);
return x_95;
}
else
{
obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; 
x_96 = lean::cnstr_get(x_8, 0);
lean::inc(x_96);
lean::dec(x_8);
x_97 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_97, 0, x_96);
x_98 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_98, 0, x_97);
lean::cnstr_set(x_98, 1, x_9);
x_99 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_99, 0, x_7);
lean::cnstr_set(x_99, 1, x_98);
x_100 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_100, 0, x_87);
lean::cnstr_set(x_100, 1, x_99);
x_101 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_101, 0, x_11);
lean::cnstr_set(x_101, 1, x_100);
x_102 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_102, 0, x_65);
lean::cnstr_set(x_102, 1, x_101);
x_103 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_103, 0, x_15);
lean::cnstr_set(x_103, 1, x_102);
x_104 = l_Lean_Parser_command_NotationSpec_scopedAction;
x_105 = l_Lean_Parser_Syntax_mkNode(x_104, x_103);
return x_105;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = lean::box(3);
x_3 = l_Lean_Parser_Syntax_asNode___main(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_5 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_6 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_4);
lean::cnstr_set(x_6, 3, x_5);
lean::cnstr_set(x_6, 4, x_1);
lean::cnstr_set(x_6, 5, x_2);
lean::cnstr_set(x_6, 6, x_1);
return x_6;
}
else
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_3);
if (x_7 == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_3, 0);
x_9 = lean::cnstr_get(x_8, 1);
lean::inc(x_9);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_11; 
lean::free_heap_obj(x_3);
x_10 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_11 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_11, 0, x_1);
lean::cnstr_set(x_11, 1, x_2);
lean::cnstr_set(x_11, 2, x_1);
lean::cnstr_set(x_11, 3, x_10);
lean::cnstr_set(x_11, 4, x_1);
lean::cnstr_set(x_11, 5, x_2);
lean::cnstr_set(x_11, 6, x_1);
return x_11;
}
else
{
obj* x_12; 
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
lean::dec(x_9);
x_14 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_16 = lean::apply_1(x_15, x_13);
lean::cnstr_set(x_3, 0, x_16);
x_17 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_18 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_18, 0, x_1);
lean::cnstr_set(x_18, 1, x_2);
lean::cnstr_set(x_18, 2, x_3);
lean::cnstr_set(x_18, 3, x_17);
lean::cnstr_set(x_18, 4, x_1);
lean::cnstr_set(x_18, 5, x_2);
lean::cnstr_set(x_18, 6, x_1);
return x_18;
}
else
{
obj* x_19; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_9);
lean::free_heap_obj(x_3);
x_19 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_20 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_21 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_21, 0, x_1);
lean::cnstr_set(x_21, 1, x_2);
lean::cnstr_set(x_21, 2, x_19);
lean::cnstr_set(x_21, 3, x_20);
lean::cnstr_set(x_21, 4, x_1);
lean::cnstr_set(x_21, 5, x_2);
lean::cnstr_set(x_21, 6, x_1);
return x_21;
}
}
}
else
{
obj* x_22; obj* x_23; 
x_22 = lean::cnstr_get(x_3, 0);
lean::inc(x_22);
lean::dec(x_3);
x_23 = lean::cnstr_get(x_22, 1);
lean::inc(x_23);
lean::dec(x_22);
if (lean::obj_tag(x_23) == 0)
{
obj* x_24; obj* x_25; 
x_24 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_25 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_25, 0, x_1);
lean::cnstr_set(x_25, 1, x_2);
lean::cnstr_set(x_25, 2, x_1);
lean::cnstr_set(x_25, 3, x_24);
lean::cnstr_set(x_25, 4, x_1);
lean::cnstr_set(x_25, 5, x_2);
lean::cnstr_set(x_25, 6, x_1);
return x_25;
}
else
{
obj* x_26; 
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_27 = lean::cnstr_get(x_23, 0);
lean::inc(x_27);
lean::dec(x_23);
x_28 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_29 = lean::cnstr_get(x_28, 0);
lean::inc(x_29);
x_30 = lean::apply_1(x_29, x_27);
x_31 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_31, 0, x_30);
x_32 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_33 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_33, 0, x_1);
lean::cnstr_set(x_33, 1, x_2);
lean::cnstr_set(x_33, 2, x_31);
lean::cnstr_set(x_33, 3, x_32);
lean::cnstr_set(x_33, 4, x_1);
lean::cnstr_set(x_33, 5, x_2);
lean::cnstr_set(x_33, 6, x_1);
return x_33;
}
else
{
obj* x_34; obj* x_35; obj* x_36; 
lean::dec(x_26);
lean::dec(x_23);
x_34 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_35 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_36 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_36, 0, x_1);
lean::cnstr_set(x_36, 1, x_2);
lean::cnstr_set(x_36, 2, x_34);
lean::cnstr_set(x_36, 3, x_35);
lean::cnstr_set(x_36, 4, x_1);
lean::cnstr_set(x_36, 5, x_2);
lean::cnstr_set(x_36, 6, x_1);
return x_36;
}
}
}
}
}
}
obj* l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_86; 
x_86 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_86) == 0)
{
obj* x_87; 
x_87 = l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___lambda__1___closed__1;
return x_87;
}
else
{
obj* x_88; obj* x_89; 
x_88 = lean::cnstr_get(x_86, 0);
lean::inc(x_88);
lean::dec(x_86);
x_89 = lean::cnstr_get(x_88, 1);
lean::inc(x_89);
lean::dec(x_88);
if (lean::obj_tag(x_89) == 0)
{
obj* x_90; 
x_90 = lean::box(3);
x_2 = x_89;
x_3 = x_90;
goto block_85;
}
else
{
obj* x_91; obj* x_92; obj* x_93; 
x_91 = lean::cnstr_get(x_89, 0);
lean::inc(x_91);
x_92 = lean::cnstr_get(x_89, 1);
lean::inc(x_92);
lean::dec(x_89);
x_93 = l_Lean_Parser_Syntax_asNode___main(x_91);
if (lean::obj_tag(x_93) == 0)
{
if (lean::obj_tag(x_92) == 0)
{
obj* x_94; 
x_94 = lean::box(3);
x_2 = x_92;
x_3 = x_94;
goto block_85;
}
else
{
obj* x_95; obj* x_96; 
x_95 = lean::cnstr_get(x_92, 0);
lean::inc(x_95);
x_96 = lean::cnstr_get(x_92, 1);
lean::inc(x_96);
lean::dec(x_92);
x_2 = x_96;
x_3 = x_95;
goto block_85;
}
}
else
{
obj* x_97; obj* x_98; obj* x_99; 
x_97 = lean::cnstr_get(x_93, 0);
lean::inc(x_97);
lean::dec(x_93);
x_98 = lean::cnstr_get(x_97, 1);
lean::inc(x_98);
lean::dec(x_97);
x_99 = l_List_append___rarg(x_98, x_92);
if (lean::obj_tag(x_99) == 0)
{
obj* x_100; 
x_100 = lean::box(3);
x_2 = x_99;
x_3 = x_100;
goto block_85;
}
else
{
obj* x_101; obj* x_102; 
x_101 = lean::cnstr_get(x_99, 0);
lean::inc(x_101);
x_102 = lean::cnstr_get(x_99, 1);
lean::inc(x_102);
lean::dec(x_99);
x_2 = x_102;
x_3 = x_101;
goto block_85;
}
}
}
}
block_85:
{
obj* x_4; 
if (lean::obj_tag(x_3) == 0)
{
obj* x_82; obj* x_83; 
x_82 = lean::cnstr_get(x_3, 0);
lean::inc(x_82);
lean::dec(x_3);
x_83 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_83, 0, x_82);
x_4 = x_83;
goto block_81;
}
else
{
obj* x_84; 
lean::dec(x_3);
x_84 = lean::box(0);
x_4 = x_84;
goto block_81;
}
block_81:
{
obj* x_5; obj* x_6; 
if (lean::obj_tag(x_2) == 0)
{
obj* x_78; 
x_78 = lean::box(3);
x_5 = x_2;
x_6 = x_78;
goto block_77;
}
else
{
obj* x_79; obj* x_80; 
x_79 = lean::cnstr_get(x_2, 0);
lean::inc(x_79);
x_80 = lean::cnstr_get(x_2, 1);
lean::inc(x_80);
lean::dec(x_2);
x_5 = x_80;
x_6 = x_79;
goto block_77;
}
block_77:
{
obj* x_7; obj* x_8; 
if (lean::obj_tag(x_5) == 0)
{
obj* x_74; 
x_74 = lean::box(3);
x_7 = x_5;
x_8 = x_74;
goto block_73;
}
else
{
obj* x_75; obj* x_76; 
x_75 = lean::cnstr_get(x_5, 0);
lean::inc(x_75);
x_76 = lean::cnstr_get(x_5, 1);
lean::inc(x_76);
lean::dec(x_5);
x_7 = x_76;
x_8 = x_75;
goto block_73;
}
block_73:
{
obj* x_9; obj* x_51; 
x_51 = l_Lean_Parser_Syntax_asNode___main(x_8);
if (lean::obj_tag(x_51) == 0)
{
obj* x_52; 
x_52 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_9 = x_52;
goto block_50;
}
else
{
uint8 x_53; 
x_53 = !lean::is_exclusive(x_51);
if (x_53 == 0)
{
obj* x_54; obj* x_55; 
x_54 = lean::cnstr_get(x_51, 0);
x_55 = lean::cnstr_get(x_54, 1);
lean::inc(x_55);
lean::dec(x_54);
if (lean::obj_tag(x_55) == 0)
{
obj* x_56; 
lean::free_heap_obj(x_51);
x_56 = lean::box(0);
x_9 = x_56;
goto block_50;
}
else
{
obj* x_57; 
x_57 = lean::cnstr_get(x_55, 1);
lean::inc(x_57);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_58 = lean::cnstr_get(x_55, 0);
lean::inc(x_58);
lean::dec(x_55);
x_59 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_60 = lean::cnstr_get(x_59, 0);
lean::inc(x_60);
x_61 = lean::apply_1(x_60, x_58);
lean::cnstr_set(x_51, 0, x_61);
x_9 = x_51;
goto block_50;
}
else
{
obj* x_62; 
lean::dec(x_57);
lean::dec(x_55);
lean::free_heap_obj(x_51);
x_62 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_9 = x_62;
goto block_50;
}
}
}
else
{
obj* x_63; obj* x_64; 
x_63 = lean::cnstr_get(x_51, 0);
lean::inc(x_63);
lean::dec(x_51);
x_64 = lean::cnstr_get(x_63, 1);
lean::inc(x_64);
lean::dec(x_63);
if (lean::obj_tag(x_64) == 0)
{
obj* x_65; 
x_65 = lean::box(0);
x_9 = x_65;
goto block_50;
}
else
{
obj* x_66; 
x_66 = lean::cnstr_get(x_64, 1);
lean::inc(x_66);
if (lean::obj_tag(x_66) == 0)
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
x_67 = lean::cnstr_get(x_64, 0);
lean::inc(x_67);
lean::dec(x_64);
x_68 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_69 = lean::cnstr_get(x_68, 0);
lean::inc(x_69);
x_70 = lean::apply_1(x_69, x_67);
x_71 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_71, 0, x_70);
x_9 = x_71;
goto block_50;
}
else
{
obj* x_72; 
lean::dec(x_66);
lean::dec(x_64);
x_72 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_9 = x_72;
goto block_50;
}
}
}
}
block_50:
{
obj* x_10; obj* x_11; 
if (lean::obj_tag(x_7) == 0)
{
obj* x_47; 
x_47 = lean::box(3);
x_10 = x_7;
x_11 = x_47;
goto block_46;
}
else
{
obj* x_48; obj* x_49; 
x_48 = lean::cnstr_get(x_7, 0);
lean::inc(x_48);
x_49 = lean::cnstr_get(x_7, 1);
lean::inc(x_49);
lean::dec(x_7);
x_10 = x_49;
x_11 = x_48;
goto block_46;
}
block_46:
{
obj* x_12; 
if (lean::obj_tag(x_11) == 1)
{
obj* x_44; 
x_44 = lean::cnstr_get(x_11, 0);
lean::inc(x_44);
lean::dec(x_11);
x_12 = x_44;
goto block_43;
}
else
{
obj* x_45; 
lean::dec(x_11);
x_45 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_12 = x_45;
goto block_43;
}
block_43:
{
obj* x_13; obj* x_14; obj* x_15; obj* x_25; obj* x_26; 
if (lean::obj_tag(x_10) == 0)
{
obj* x_40; 
x_40 = lean::box(3);
x_25 = x_10;
x_26 = x_40;
goto block_39;
}
else
{
obj* x_41; obj* x_42; 
x_41 = lean::cnstr_get(x_10, 0);
lean::inc(x_41);
x_42 = lean::cnstr_get(x_10, 1);
lean::inc(x_42);
lean::dec(x_10);
x_25 = x_42;
x_26 = x_41;
goto block_39;
}
block_24:
{
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_17; 
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_17, 0, x_4);
lean::cnstr_set(x_17, 1, x_6);
lean::cnstr_set(x_17, 2, x_9);
lean::cnstr_set(x_17, 3, x_12);
lean::cnstr_set(x_17, 4, x_13);
lean::cnstr_set(x_17, 5, x_14);
lean::cnstr_set(x_17, 6, x_16);
return x_17;
}
else
{
obj* x_18; 
x_18 = lean::cnstr_get(x_15, 0);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_20; obj* x_21; 
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_20 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_20, 0, x_19);
x_21 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_21, 0, x_4);
lean::cnstr_set(x_21, 1, x_6);
lean::cnstr_set(x_21, 2, x_9);
lean::cnstr_set(x_21, 3, x_12);
lean::cnstr_set(x_21, 4, x_13);
lean::cnstr_set(x_21, 5, x_14);
lean::cnstr_set(x_21, 6, x_20);
return x_21;
}
else
{
obj* x_22; obj* x_23; 
x_22 = lean::box(0);
x_23 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_23, 0, x_4);
lean::cnstr_set(x_23, 1, x_6);
lean::cnstr_set(x_23, 2, x_9);
lean::cnstr_set(x_23, 3, x_12);
lean::cnstr_set(x_23, 4, x_13);
lean::cnstr_set(x_23, 5, x_14);
lean::cnstr_set(x_23, 6, x_22);
return x_23;
}
}
}
block_39:
{
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; 
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
lean::dec(x_26);
x_28 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
if (lean::obj_tag(x_25) == 0)
{
obj* x_29; obj* x_30; obj* x_31; 
x_29 = lean::box(0);
x_30 = lean::box(3);
x_31 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_31, 0, x_4);
lean::cnstr_set(x_31, 1, x_6);
lean::cnstr_set(x_31, 2, x_9);
lean::cnstr_set(x_31, 3, x_12);
lean::cnstr_set(x_31, 4, x_28);
lean::cnstr_set(x_31, 5, x_30);
lean::cnstr_set(x_31, 6, x_29);
return x_31;
}
else
{
obj* x_32; obj* x_33; 
x_32 = lean::cnstr_get(x_25, 0);
lean::inc(x_32);
x_33 = lean::cnstr_get(x_25, 1);
lean::inc(x_33);
lean::dec(x_25);
x_13 = x_28;
x_14 = x_32;
x_15 = x_33;
goto block_24;
}
}
else
{
obj* x_34; 
lean::dec(x_26);
x_34 = lean::box(0);
if (lean::obj_tag(x_25) == 0)
{
obj* x_35; obj* x_36; 
x_35 = lean::box(3);
x_36 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_36, 0, x_4);
lean::cnstr_set(x_36, 1, x_6);
lean::cnstr_set(x_36, 2, x_9);
lean::cnstr_set(x_36, 3, x_12);
lean::cnstr_set(x_36, 4, x_34);
lean::cnstr_set(x_36, 5, x_35);
lean::cnstr_set(x_36, 6, x_34);
return x_36;
}
else
{
obj* x_37; obj* x_38; 
x_37 = lean::cnstr_get(x_25, 0);
lean::inc(x_37);
x_38 = lean::cnstr_get(x_25, 1);
lean::inc(x_38);
lean::dec(x_25);
x_13 = x_34;
x_14 = x_37;
x_15 = x_38;
goto block_24;
}
}
}
}
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_scopedAction_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_actionKind() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("actionKind");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::box(0);
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::apply_1(x_5, x_3);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
x_8 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__1;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_2);
x_11 = l_Lean_Parser_command_NotationSpec_actionKind;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
case 1:
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_2);
x_15 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__3;
x_16 = l_Lean_Parser_Syntax_mkNode(x_15, x_14);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_2);
x_18 = l_Lean_Parser_command_NotationSpec_actionKind;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
return x_19;
}
case 2:
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_20 = lean::cnstr_get(x_1, 0);
lean::inc(x_20);
lean::dec(x_1);
x_21 = l_Lean_Parser_command_NotationSpec_scopedAction_HasView;
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
x_23 = lean::apply_1(x_22, x_20);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_2);
x_25 = l_Lean_Parser_number_HasView_x27___elambda__1___closed__4;
x_26 = l_Lean_Parser_Syntax_mkNode(x_25, x_24);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_2);
x_28 = l_Lean_Parser_command_NotationSpec_actionKind;
x_29 = l_Lean_Parser_Syntax_mkNode(x_28, x_27);
return x_29;
}
default: 
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_30 = lean::cnstr_get(x_1, 0);
lean::inc(x_30);
lean::dec(x_1);
x_31 = l_Lean_Parser_command_NotationSpec_foldAction_HasView;
x_32 = lean::cnstr_get(x_31, 1);
lean::inc(x_32);
x_33 = lean::apply_1(x_32, x_30);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_2);
x_35 = l_Lean_Parser_number_HasView_x27___elambda__1___closed__6;
x_36 = l_Lean_Parser_Syntax_mkNode(x_35, x_34);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_2);
x_38 = l_Lean_Parser_command_NotationSpec_actionKind;
x_39 = l_Lean_Parser_Syntax_mkNode(x_38, x_37);
return x_39;
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("actionKind");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1;
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__2;
x_8 = lean_name_dec_eq(x_5, x_7);
lean::dec(x_5);
if (x_8 == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1;
return x_9;
}
else
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
x_10 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1;
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_6, 0);
lean::inc(x_12);
lean::dec(x_6);
x_13 = l_Lean_Parser_Syntax_asNode___main(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1;
return x_14;
}
else
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
switch (lean::obj_tag(x_16)) {
case 0:
{
obj* x_17; 
lean::dec(x_15);
x_17 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1;
return x_17;
}
case 1:
{
obj* x_18; 
lean::dec(x_16);
lean::dec(x_15);
x_18 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1;
return x_18;
}
default: 
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; uint8 x_23; 
x_19 = lean::cnstr_get(x_15, 1);
lean::inc(x_19);
lean::dec(x_15);
x_20 = lean::cnstr_get(x_16, 0);
lean::inc(x_20);
x_21 = lean::cnstr_get(x_16, 1);
lean::inc(x_21);
lean::dec(x_16);
x_22 = lean::box(0);
x_23 = lean_name_dec_eq(x_20, x_22);
lean::dec(x_20);
if (x_23 == 0)
{
obj* x_24; 
lean::dec(x_21);
lean::dec(x_19);
x_24 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1;
return x_24;
}
else
{
if (lean::obj_tag(x_19) == 0)
{
obj* x_25; 
lean::dec(x_21);
x_25 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1;
return x_25;
}
else
{
obj* x_26; 
x_26 = lean::cnstr_get(x_19, 1);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; uint8 x_29; 
x_27 = lean::cnstr_get(x_19, 0);
lean::inc(x_27);
lean::dec(x_19);
x_28 = lean::mk_nat_obj(0u);
x_29 = lean::nat_dec_eq(x_21, x_28);
if (x_29 == 0)
{
obj* x_30; uint8 x_31; 
x_30 = lean::mk_nat_obj(1u);
x_31 = lean::nat_dec_eq(x_21, x_30);
if (x_31 == 0)
{
obj* x_32; uint8 x_33; 
x_32 = lean::mk_nat_obj(2u);
x_33 = lean::nat_dec_eq(x_21, x_32);
lean::dec(x_21);
if (x_33 == 0)
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_34 = l_Lean_Parser_command_NotationSpec_foldAction_HasView;
x_35 = lean::cnstr_get(x_34, 0);
lean::inc(x_35);
x_36 = lean::apply_1(x_35, x_27);
x_37 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_37, 0, x_36);
return x_37;
}
else
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_38 = l_Lean_Parser_command_NotationSpec_scopedAction_HasView;
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
x_40 = lean::apply_1(x_39, x_27);
x_41 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_41, 0, x_40);
return x_41;
}
}
else
{
obj* x_42; 
lean::dec(x_21);
x_42 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_42, 0, x_27);
return x_42;
}
}
else
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_21);
x_43 = l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView;
x_44 = lean::cnstr_get(x_43, 0);
lean::inc(x_44);
x_45 = lean::apply_1(x_44, x_27);
x_46 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
else
{
obj* x_47; 
lean::dec(x_26);
lean::dec(x_21);
lean::dec(x_19);
x_47 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1;
return x_47;
}
}
}
}
}
}
}
else
{
obj* x_48; 
lean::dec(x_11);
lean::dec(x_6);
x_48 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1;
return x_48;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_actionKind_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_action() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("action");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_action_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_command_NotationSpec_actionKind_HasView;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::apply_1(x_5, x_3);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
if (lean::obj_tag(x_2) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = lean::box(3);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_8);
x_11 = l_Lean_Parser_command_NotationSpec_action;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_13 = lean::cnstr_get(x_2, 0);
lean::inc(x_13);
lean::dec(x_2);
x_14 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_8);
x_16 = l_Lean_Parser_command_NotationSpec_action;
x_17 = l_Lean_Parser_Syntax_mkNode(x_16, x_15);
return x_17;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_command_NotationSpec_actionKind_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_command_NotationSpec_actionKind_HasView;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_3, x_4);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__2;
return x_1;
}
}
obj* l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_21; 
x_21 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; 
x_22 = l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__3;
return x_22;
}
else
{
obj* x_23; obj* x_24; 
x_23 = lean::cnstr_get(x_21, 0);
lean::inc(x_23);
lean::dec(x_21);
x_24 = lean::cnstr_get(x_23, 1);
lean::inc(x_24);
lean::dec(x_23);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; 
x_25 = lean::box(3);
x_2 = x_24;
x_3 = x_25;
goto block_20;
}
else
{
obj* x_26; obj* x_27; 
x_26 = lean::cnstr_get(x_24, 0);
lean::inc(x_26);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_2 = x_27;
x_3 = x_26;
goto block_20;
}
}
block_20:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_5; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
if (lean::obj_tag(x_2) == 0)
{
obj* x_6; obj* x_7; 
x_6 = l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__1;
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
lean::dec(x_2);
x_9 = l_Lean_Parser_command_NotationSpec_actionKind_HasView;
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_11 = lean::apply_1(x_10, x_8);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_5);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
else
{
lean::dec(x_3);
if (lean::obj_tag(x_2) == 0)
{
obj* x_13; 
x_13 = l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__2;
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_14 = lean::cnstr_get(x_2, 0);
lean::inc(x_14);
lean::dec(x_2);
x_15 = lean::box(0);
x_16 = l_Lean_Parser_command_NotationSpec_actionKind_HasView;
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
x_18 = lean::apply_1(x_17, x_14);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_15);
lean::cnstr_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_action_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_action_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_action_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_1 = lean::mk_string(":");
x_2 = lean::mk_nat_obj(0u);
x_3 = l_Lean_Parser_symbol_tokens___rarg(x_1, x_2);
lean::dec(x_1);
x_4 = l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens;
x_5 = l_Lean_Parser_tokens___rarg(x_4);
x_6 = lean::box(0);
x_7 = lean::mk_string("(");
x_8 = l_Lean_Parser_symbol_tokens___rarg(x_7, x_2);
lean::dec(x_7);
x_9 = l_Lean_Parser_List_cons_tokens___rarg(x_6, x_6);
x_10 = l_Lean_Parser_List_cons_tokens___rarg(x_8, x_9);
lean::dec(x_9);
lean::dec(x_8);
x_11 = l_Lean_Parser_tokens___rarg(x_10);
lean::dec(x_10);
x_12 = l_Lean_Parser_tokens___rarg(x_11);
lean::dec(x_11);
x_13 = l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasTokens;
x_14 = l_Lean_Parser_tokens___rarg(x_13);
x_15 = lean::mk_string(", ");
x_16 = l_Lean_Parser_symbol_tokens___rarg(x_15, x_2);
lean::dec(x_15);
x_17 = l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens(x_2);
x_18 = lean::mk_string(")");
x_19 = l_Lean_Parser_symbol_tokens___rarg(x_18, x_2);
lean::dec(x_18);
x_20 = l_Lean_Parser_List_cons_tokens___rarg(x_19, x_6);
lean::dec(x_19);
x_21 = l_Lean_Parser_List_cons_tokens___rarg(x_17, x_20);
lean::dec(x_20);
lean::dec(x_17);
x_22 = l_Lean_Parser_List_cons_tokens___rarg(x_16, x_21);
lean::dec(x_21);
lean::dec(x_16);
x_23 = l_Lean_Parser_List_cons_tokens___rarg(x_6, x_22);
lean::dec(x_22);
x_24 = l_Lean_Parser_List_cons_tokens___rarg(x_14, x_23);
lean::dec(x_23);
lean::dec(x_14);
x_25 = l_Lean_Parser_List_cons_tokens___rarg(x_12, x_24);
lean::dec(x_24);
lean::dec(x_12);
x_26 = l_Lean_Parser_tokens___rarg(x_25);
lean::dec(x_25);
x_27 = l_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens;
x_28 = l_Lean_Parser_List_cons_tokens___rarg(x_27, x_6);
x_29 = l_Lean_Parser_List_cons_tokens___rarg(x_26, x_28);
lean::dec(x_28);
lean::dec(x_26);
x_30 = l_Lean_Parser_List_cons_tokens___rarg(x_6, x_29);
lean::dec(x_29);
x_31 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_30);
lean::dec(x_30);
lean::dec(x_5);
x_32 = l_Lean_Parser_tokens___rarg(x_31);
lean::dec(x_31);
x_33 = l_Lean_Parser_List_cons_tokens___rarg(x_32, x_6);
lean::dec(x_32);
x_34 = l_Lean_Parser_tokens___rarg(x_33);
lean::dec(x_33);
x_35 = l_Lean_Parser_List_cons_tokens___rarg(x_34, x_6);
lean::dec(x_34);
x_36 = l_Lean_Parser_List_cons_tokens___rarg(x_3, x_35);
lean::dec(x_35);
lean::dec(x_3);
x_37 = l_Lean_Parser_tokens___rarg(x_36);
lean::dec(x_36);
return x_37;
}
}
obj* l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser(x_1, x_2, x_3, x_4, x_5);
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_6, 0);
x_9 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_8);
lean::cnstr_set(x_6, 0, x_9);
return x_6;
}
else
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_10 = lean::cnstr_get(x_6, 0);
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
lean::inc(x_10);
lean::dec(x_6);
x_12 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_10);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_11);
return x_13;
}
}
}
obj* l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; uint8 x_9; 
x_7 = l_Lean_Parser_noKind;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean::is_exclusive(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; 
x_10 = lean::cnstr_get(x_8, 0);
x_11 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_10);
lean::cnstr_set(x_8, 0, x_11);
return x_8;
}
else
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_12 = lean::cnstr_get(x_8, 0);
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
lean::inc(x_12);
lean::dec(x_8);
x_14 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_12);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_13);
return x_15;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; uint8 x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; 
x_1 = lean::mk_string(":");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("prev");
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string("(");
x_9 = l_String_trim(x_8);
lean::dec(x_8);
lean::inc(x_9);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_11, 0, x_9);
lean::closure_set(x_11, 1, x_4);
lean::closure_set(x_11, 2, x_10);
x_12 = lean::mk_string("scoped");
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_11);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2), 6, 1);
lean::closure_set(x_17, 0, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedence_Parser), 5, 0);
x_19 = 0;
x_20 = lean::box(x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_21, 0, x_18);
lean::closure_set(x_21, 1, x_20);
x_22 = lean::mk_string(", ");
x_23 = l_String_trim(x_22);
lean::dec(x_22);
lean::inc(x_23);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_24, 0, x_23);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_25, 0, x_23);
lean::closure_set(x_25, 1, x_4);
lean::closure_set(x_25, 2, x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_26, 0, x_4);
x_27 = lean::mk_string(")");
x_28 = l_String_trim(x_27);
lean::dec(x_27);
lean::inc(x_28);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_29, 0, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_30, 0, x_28);
lean::closure_set(x_30, 1, x_4);
lean::closure_set(x_30, 2, x_29);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_14);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_26);
lean::cnstr_set(x_32, 1, x_31);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_25);
lean::cnstr_set(x_33, 1, x_32);
x_34 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___boxed), 1, 0);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_33);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_21);
lean::cnstr_set(x_36, 1, x_35);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_17);
lean::cnstr_set(x_37, 1, x_36);
x_38 = l_Lean_Parser_command_NotationSpec_scopedAction;
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_39, 0, x_38);
lean::closure_set(x_39, 1, x_37);
x_40 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_foldAction_Parser), 5, 0);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_14);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_39);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_7);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__1), 5, 0);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_43);
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_46, 0, x_45);
lean::closure_set(x_46, 1, x_4);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_14);
x_48 = l_Lean_Parser_command_NotationSpec_actionKind;
x_49 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_49, 0, x_48);
lean::closure_set(x_49, 1, x_47);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_14);
x_51 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_51, 0, x_5);
lean::cnstr_set(x_51, 1, x_50);
x_52 = l_Lean_Parser_TermParserM_Monad;
x_53 = l_Lean_Parser_TermParserM_MonadExcept;
x_54 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_55 = l_Lean_Parser_TermParserM_Alternative;
x_56 = l_Lean_Parser_command_NotationSpec_action;
x_57 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_58 = l_Lean_Parser_Combinators_node_view___rarg(x_52, x_53, x_54, x_55, x_56, x_51, x_57);
lean::dec(x_51);
return x_58;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_action_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; uint8 x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_1 = lean::mk_string(":");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("prev");
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string("(");
x_9 = l_String_trim(x_8);
lean::dec(x_8);
lean::inc(x_9);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_11, 0, x_9);
lean::closure_set(x_11, 1, x_4);
lean::closure_set(x_11, 2, x_10);
x_12 = lean::mk_string("scoped");
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_11);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2), 6, 1);
lean::closure_set(x_17, 0, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedence_Parser), 5, 0);
x_19 = 0;
x_20 = lean::box(x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_21, 0, x_18);
lean::closure_set(x_21, 1, x_20);
x_22 = lean::mk_string(", ");
x_23 = l_String_trim(x_22);
lean::dec(x_22);
lean::inc(x_23);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_24, 0, x_23);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_25, 0, x_23);
lean::closure_set(x_25, 1, x_4);
lean::closure_set(x_25, 2, x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_26, 0, x_4);
x_27 = lean::mk_string(")");
x_28 = l_String_trim(x_27);
lean::dec(x_27);
lean::inc(x_28);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_29, 0, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_30, 0, x_28);
lean::closure_set(x_30, 1, x_4);
lean::closure_set(x_30, 2, x_29);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_14);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_26);
lean::cnstr_set(x_32, 1, x_31);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_25);
lean::cnstr_set(x_33, 1, x_32);
x_34 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___boxed), 1, 0);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_33);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_21);
lean::cnstr_set(x_36, 1, x_35);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_17);
lean::cnstr_set(x_37, 1, x_36);
x_38 = l_Lean_Parser_command_NotationSpec_scopedAction;
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_39, 0, x_38);
lean::closure_set(x_39, 1, x_37);
x_40 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_foldAction_Parser), 5, 0);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_14);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_39);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_7);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__1), 5, 0);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_43);
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_46, 0, x_45);
lean::closure_set(x_46, 1, x_4);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_14);
x_48 = l_Lean_Parser_command_NotationSpec_actionKind;
x_49 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_49, 0, x_48);
lean::closure_set(x_49, 1, x_47);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_14);
x_51 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_51, 0, x_5);
lean::cnstr_set(x_51, 1, x_50);
return x_51;
}
}
obj* l_Lean_Parser_command_NotationSpec_action_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_NotationSpec_action;
x_7 = l_Lean_Parser_command_NotationSpec_action_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_binder() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("binder");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_binder_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_detailIdent_HasView_x27___elambda__1___closed__1;
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = l_Lean_Parser_command_NotationSpec_binder;
x_7 = l_Lean_Parser_Syntax_mkNode(x_6, x_5);
return x_7;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
lean::dec(x_1);
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
lean::dec(x_2);
x_10 = lean::box(0);
x_11 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
x_13 = lean::apply_1(x_12, x_9);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_10);
x_15 = l_Lean_Parser_noKind;
x_16 = l_Lean_Parser_Syntax_mkNode(x_15, x_14);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_10);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_8);
lean::cnstr_set(x_18, 1, x_17);
x_19 = l_Lean_Parser_command_NotationSpec_binder;
x_20 = l_Lean_Parser_Syntax_mkNode(x_19, x_18);
return x_20;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_binder_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
else
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_2);
if (x_5 == 0)
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_2, 0);
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
lean::dec(x_6);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; 
lean::free_heap_obj(x_2);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_1);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
else
{
obj* x_10; 
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_11 = lean::cnstr_get(x_7, 0);
lean::inc(x_11);
lean::dec(x_7);
x_12 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_14 = lean::apply_1(x_13, x_11);
lean::cnstr_set(x_2, 0, x_14);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_1);
lean::cnstr_set(x_15, 1, x_2);
return x_15;
}
else
{
obj* x_16; obj* x_17; 
lean::dec(x_10);
lean::dec(x_7);
lean::free_heap_obj(x_2);
x_16 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_1);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_2, 0);
lean::inc(x_18);
lean::dec(x_2);
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_21; 
x_20 = lean::box(0);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_1);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
else
{
obj* x_22; 
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_23 = lean::cnstr_get(x_19, 0);
lean::inc(x_23);
lean::dec(x_19);
x_24 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_26 = lean::apply_1(x_25, x_23);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_1);
lean::cnstr_set(x_28, 1, x_27);
return x_28;
}
else
{
obj* x_29; obj* x_30; 
lean::dec(x_22);
lean::dec(x_19);
x_29 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_1);
lean::cnstr_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
}
obj* l_Lean_Parser_command_NotationSpec_binder_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_65; 
x_65 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_65) == 0)
{
obj* x_66; 
x_66 = l_Lean_Parser_command_NotationSpec_binder_HasView_x27___lambda__1___closed__1;
return x_66;
}
else
{
obj* x_67; obj* x_68; 
x_67 = lean::cnstr_get(x_65, 0);
lean::inc(x_67);
lean::dec(x_65);
x_68 = lean::cnstr_get(x_67, 1);
lean::inc(x_68);
lean::dec(x_67);
if (lean::obj_tag(x_68) == 0)
{
obj* x_69; 
x_69 = lean::box(3);
x_2 = x_68;
x_3 = x_69;
goto block_64;
}
else
{
obj* x_70; obj* x_71; 
x_70 = lean::cnstr_get(x_68, 0);
lean::inc(x_70);
x_71 = lean::cnstr_get(x_68, 1);
lean::inc(x_71);
lean::dec(x_68);
x_2 = x_71;
x_3 = x_70;
goto block_64;
}
}
block_64:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; obj* x_5; 
x_4 = lean::box(3);
x_5 = l_Lean_Parser_Syntax_asNode___main(x_4);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_7; 
x_6 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_3);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
else
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_5);
if (x_8 == 0)
{
obj* x_9; obj* x_10; 
x_9 = lean::cnstr_get(x_5, 0);
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; 
lean::free_heap_obj(x_5);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_3);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
lean::dec(x_10);
x_15 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_17 = lean::apply_1(x_16, x_14);
lean::cnstr_set(x_5, 0, x_17);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_3);
lean::cnstr_set(x_18, 1, x_5);
return x_18;
}
else
{
obj* x_19; obj* x_20; 
lean::dec(x_13);
lean::dec(x_10);
lean::free_heap_obj(x_5);
x_19 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_3);
lean::cnstr_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
obj* x_21; obj* x_22; 
x_21 = lean::cnstr_get(x_5, 0);
lean::inc(x_21);
lean::dec(x_5);
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
lean::dec(x_21);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; 
x_23 = lean::box(0);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_3);
lean::cnstr_set(x_24, 1, x_23);
return x_24;
}
else
{
obj* x_25; 
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_26 = lean::cnstr_get(x_22, 0);
lean::inc(x_26);
lean::dec(x_22);
x_27 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_29 = lean::apply_1(x_28, x_26);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_29);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_3);
lean::cnstr_set(x_31, 1, x_30);
return x_31;
}
else
{
obj* x_32; obj* x_33; 
lean::dec(x_25);
lean::dec(x_22);
x_32 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_3);
lean::cnstr_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
else
{
obj* x_34; obj* x_35; 
x_34 = lean::cnstr_get(x_2, 0);
lean::inc(x_34);
lean::dec(x_2);
x_35 = l_Lean_Parser_Syntax_asNode___main(x_34);
if (lean::obj_tag(x_35) == 0)
{
obj* x_36; obj* x_37; 
x_36 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_3);
lean::cnstr_set(x_37, 1, x_36);
return x_37;
}
else
{
uint8 x_38; 
x_38 = !lean::is_exclusive(x_35);
if (x_38 == 0)
{
obj* x_39; obj* x_40; 
x_39 = lean::cnstr_get(x_35, 0);
x_40 = lean::cnstr_get(x_39, 1);
lean::inc(x_40);
lean::dec(x_39);
if (lean::obj_tag(x_40) == 0)
{
obj* x_41; obj* x_42; 
lean::free_heap_obj(x_35);
x_41 = lean::box(0);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_3);
lean::cnstr_set(x_42, 1, x_41);
return x_42;
}
else
{
obj* x_43; 
x_43 = lean::cnstr_get(x_40, 1);
lean::inc(x_43);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
lean::dec(x_40);
x_45 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_46 = lean::cnstr_get(x_45, 0);
lean::inc(x_46);
x_47 = lean::apply_1(x_46, x_44);
lean::cnstr_set(x_35, 0, x_47);
x_48 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_48, 0, x_3);
lean::cnstr_set(x_48, 1, x_35);
return x_48;
}
else
{
obj* x_49; obj* x_50; 
lean::dec(x_43);
lean::dec(x_40);
lean::free_heap_obj(x_35);
x_49 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_3);
lean::cnstr_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
obj* x_51; obj* x_52; 
x_51 = lean::cnstr_get(x_35, 0);
lean::inc(x_51);
lean::dec(x_35);
x_52 = lean::cnstr_get(x_51, 1);
lean::inc(x_52);
lean::dec(x_51);
if (lean::obj_tag(x_52) == 0)
{
obj* x_53; obj* x_54; 
x_53 = lean::box(0);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_3);
lean::cnstr_set(x_54, 1, x_53);
return x_54;
}
else
{
obj* x_55; 
x_55 = lean::cnstr_get(x_52, 1);
lean::inc(x_55);
if (lean::obj_tag(x_55) == 0)
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_56 = lean::cnstr_get(x_52, 0);
lean::inc(x_56);
lean::dec(x_52);
x_57 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_59 = lean::apply_1(x_58, x_56);
x_60 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_60, 0, x_59);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_3);
lean::cnstr_set(x_61, 1, x_60);
return x_61;
}
else
{
obj* x_62; obj* x_63; 
lean::dec(x_55);
lean::dec(x_52);
x_62 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_3);
lean::cnstr_set(x_63, 1, x_62);
return x_63;
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_binder_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_binder_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_binder_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_binder_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_binder_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_binders() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("binders");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_binders_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_detailIdent_HasView_x27___elambda__1___closed__1;
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = l_Lean_Parser_command_NotationSpec_binders;
x_7 = l_Lean_Parser_Syntax_mkNode(x_6, x_5);
return x_7;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
lean::dec(x_1);
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
lean::dec(x_2);
x_10 = lean::box(0);
x_11 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
x_13 = lean::apply_1(x_12, x_9);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_10);
x_15 = l_Lean_Parser_noKind;
x_16 = l_Lean_Parser_Syntax_mkNode(x_15, x_14);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_10);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_8);
lean::cnstr_set(x_18, 1, x_17);
x_19 = l_Lean_Parser_command_NotationSpec_binders;
x_20 = l_Lean_Parser_Syntax_mkNode(x_19, x_18);
return x_20;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_binders_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
else
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_2);
if (x_5 == 0)
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_2, 0);
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
lean::dec(x_6);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; 
lean::free_heap_obj(x_2);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_1);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
else
{
obj* x_10; 
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_11 = lean::cnstr_get(x_7, 0);
lean::inc(x_11);
lean::dec(x_7);
x_12 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_14 = lean::apply_1(x_13, x_11);
lean::cnstr_set(x_2, 0, x_14);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_1);
lean::cnstr_set(x_15, 1, x_2);
return x_15;
}
else
{
obj* x_16; obj* x_17; 
lean::dec(x_10);
lean::dec(x_7);
lean::free_heap_obj(x_2);
x_16 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_1);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_2, 0);
lean::inc(x_18);
lean::dec(x_2);
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_21; 
x_20 = lean::box(0);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_1);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
else
{
obj* x_22; 
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_23 = lean::cnstr_get(x_19, 0);
lean::inc(x_23);
lean::dec(x_19);
x_24 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_26 = lean::apply_1(x_25, x_23);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_1);
lean::cnstr_set(x_28, 1, x_27);
return x_28;
}
else
{
obj* x_29; obj* x_30; 
lean::dec(x_22);
lean::dec(x_19);
x_29 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_1);
lean::cnstr_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
}
obj* l_Lean_Parser_command_NotationSpec_binders_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_65; 
x_65 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_65) == 0)
{
obj* x_66; 
x_66 = l_Lean_Parser_command_NotationSpec_binders_HasView_x27___lambda__1___closed__1;
return x_66;
}
else
{
obj* x_67; obj* x_68; 
x_67 = lean::cnstr_get(x_65, 0);
lean::inc(x_67);
lean::dec(x_65);
x_68 = lean::cnstr_get(x_67, 1);
lean::inc(x_68);
lean::dec(x_67);
if (lean::obj_tag(x_68) == 0)
{
obj* x_69; 
x_69 = lean::box(3);
x_2 = x_68;
x_3 = x_69;
goto block_64;
}
else
{
obj* x_70; obj* x_71; 
x_70 = lean::cnstr_get(x_68, 0);
lean::inc(x_70);
x_71 = lean::cnstr_get(x_68, 1);
lean::inc(x_71);
lean::dec(x_68);
x_2 = x_71;
x_3 = x_70;
goto block_64;
}
}
block_64:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; obj* x_5; 
x_4 = lean::box(3);
x_5 = l_Lean_Parser_Syntax_asNode___main(x_4);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_7; 
x_6 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_3);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
else
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_5);
if (x_8 == 0)
{
obj* x_9; obj* x_10; 
x_9 = lean::cnstr_get(x_5, 0);
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; 
lean::free_heap_obj(x_5);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_3);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
lean::dec(x_10);
x_15 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_17 = lean::apply_1(x_16, x_14);
lean::cnstr_set(x_5, 0, x_17);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_3);
lean::cnstr_set(x_18, 1, x_5);
return x_18;
}
else
{
obj* x_19; obj* x_20; 
lean::dec(x_13);
lean::dec(x_10);
lean::free_heap_obj(x_5);
x_19 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_3);
lean::cnstr_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
obj* x_21; obj* x_22; 
x_21 = lean::cnstr_get(x_5, 0);
lean::inc(x_21);
lean::dec(x_5);
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
lean::dec(x_21);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; 
x_23 = lean::box(0);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_3);
lean::cnstr_set(x_24, 1, x_23);
return x_24;
}
else
{
obj* x_25; 
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_26 = lean::cnstr_get(x_22, 0);
lean::inc(x_26);
lean::dec(x_22);
x_27 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_29 = lean::apply_1(x_28, x_26);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_29);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_3);
lean::cnstr_set(x_31, 1, x_30);
return x_31;
}
else
{
obj* x_32; obj* x_33; 
lean::dec(x_25);
lean::dec(x_22);
x_32 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_3);
lean::cnstr_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
else
{
obj* x_34; obj* x_35; 
x_34 = lean::cnstr_get(x_2, 0);
lean::inc(x_34);
lean::dec(x_2);
x_35 = l_Lean_Parser_Syntax_asNode___main(x_34);
if (lean::obj_tag(x_35) == 0)
{
obj* x_36; obj* x_37; 
x_36 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_3);
lean::cnstr_set(x_37, 1, x_36);
return x_37;
}
else
{
uint8 x_38; 
x_38 = !lean::is_exclusive(x_35);
if (x_38 == 0)
{
obj* x_39; obj* x_40; 
x_39 = lean::cnstr_get(x_35, 0);
x_40 = lean::cnstr_get(x_39, 1);
lean::inc(x_40);
lean::dec(x_39);
if (lean::obj_tag(x_40) == 0)
{
obj* x_41; obj* x_42; 
lean::free_heap_obj(x_35);
x_41 = lean::box(0);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_3);
lean::cnstr_set(x_42, 1, x_41);
return x_42;
}
else
{
obj* x_43; 
x_43 = lean::cnstr_get(x_40, 1);
lean::inc(x_43);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
lean::dec(x_40);
x_45 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_46 = lean::cnstr_get(x_45, 0);
lean::inc(x_46);
x_47 = lean::apply_1(x_46, x_44);
lean::cnstr_set(x_35, 0, x_47);
x_48 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_48, 0, x_3);
lean::cnstr_set(x_48, 1, x_35);
return x_48;
}
else
{
obj* x_49; obj* x_50; 
lean::dec(x_43);
lean::dec(x_40);
lean::free_heap_obj(x_35);
x_49 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_3);
lean::cnstr_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
obj* x_51; obj* x_52; 
x_51 = lean::cnstr_get(x_35, 0);
lean::inc(x_51);
lean::dec(x_35);
x_52 = lean::cnstr_get(x_51, 1);
lean::inc(x_52);
lean::dec(x_51);
if (lean::obj_tag(x_52) == 0)
{
obj* x_53; obj* x_54; 
x_53 = lean::box(0);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_3);
lean::cnstr_set(x_54, 1, x_53);
return x_54;
}
else
{
obj* x_55; 
x_55 = lean::cnstr_get(x_52, 1);
lean::inc(x_55);
if (lean::obj_tag(x_55) == 0)
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_56 = lean::cnstr_get(x_52, 0);
lean::inc(x_56);
lean::dec(x_52);
x_57 = l_Lean_Parser_command_NotationSpec_precedence_HasView;
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_59 = lean::apply_1(x_58, x_56);
x_60 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_60, 0, x_59);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_3);
lean::cnstr_set(x_61, 1, x_60);
return x_61;
}
else
{
obj* x_62; obj* x_63; 
lean::dec(x_55);
lean::dec(x_52);
x_62 = l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1;
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_3);
lean::cnstr_set(x_63, 1, x_62);
return x_63;
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_binders_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_binders_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_binders_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_binders_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_binders_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_argument() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("argument");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_argument_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_5 = l_Lean_Parser_detailIdent_HasView_x27___elambda__1___closed__1;
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = l_Lean_Parser_command_NotationSpec_argument;
x_8 = l_Lean_Parser_Syntax_mkNode(x_7, x_6);
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_9 = lean::cnstr_get(x_3, 0);
lean::inc(x_9);
lean::dec(x_3);
x_10 = lean::box(0);
x_11 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
x_13 = lean::apply_1(x_12, x_9);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_10);
x_15 = l_Lean_Parser_noKind;
x_16 = l_Lean_Parser_Syntax_mkNode(x_15, x_14);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_10);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_4);
lean::cnstr_set(x_18, 1, x_17);
x_19 = l_Lean_Parser_command_NotationSpec_argument;
x_20 = l_Lean_Parser_Syntax_mkNode(x_19, x_18);
return x_20;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_1 = lean::box(0);
x_2 = lean::mk_string("NOTAnIdent");
lean::inc(x_2);
x_3 = l_Lean_Parser_Substring_ofString(x_2);
x_4 = lean::box(0);
x_5 = lean_name_mk_string(x_4, x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_1);
lean::cnstr_set(x_7, 1, x_3);
lean::cnstr_set(x_7, 2, x_5);
lean::cnstr_set(x_7, 3, x_6);
lean::cnstr_set(x_7, 4, x_6);
x_8 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_10 = lean::box(3);
x_11 = lean::apply_1(x_9, x_10);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_7);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::box(0);
x_2 = lean::mk_string("NOTAnIdent");
lean::inc(x_2);
x_3 = l_Lean_Parser_Substring_ofString(x_2);
x_4 = lean::box(0);
x_5 = lean_name_mk_string(x_4, x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_1);
lean::cnstr_set(x_7, 1, x_3);
lean::cnstr_set(x_7, 2, x_5);
lean::cnstr_set(x_7, 3, x_6);
lean::cnstr_set(x_7, 4, x_6);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__1;
return x_3;
}
else
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_2);
if (x_4 == 0)
{
obj* x_5; obj* x_6; 
x_5 = lean::cnstr_get(x_2, 0);
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
lean::dec(x_5);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; 
lean::free_heap_obj(x_2);
x_7 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__2;
return x_7;
}
else
{
obj* x_8; 
x_8 = lean::cnstr_get(x_6, 1);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_9 = lean::cnstr_get(x_6, 0);
lean::inc(x_9);
lean::dec(x_6);
x_10 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_12 = lean::apply_1(x_11, x_9);
lean::cnstr_set(x_2, 0, x_12);
x_13 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_2);
return x_14;
}
else
{
obj* x_15; 
lean::dec(x_8);
lean::dec(x_6);
lean::free_heap_obj(x_2);
x_15 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__1;
return x_15;
}
}
}
else
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_2, 0);
lean::inc(x_16);
lean::dec(x_2);
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
lean::dec(x_16);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; 
x_18 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__2;
return x_18;
}
else
{
obj* x_19; 
x_19 = lean::cnstr_get(x_17, 1);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_20 = lean::cnstr_get(x_17, 0);
lean::inc(x_20);
lean::dec(x_17);
x_21 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_22 = lean::cnstr_get(x_21, 0);
lean::inc(x_22);
x_23 = lean::apply_1(x_22, x_20);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
x_25 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_24);
return x_26;
}
else
{
obj* x_27; 
lean::dec(x_19);
lean::dec(x_17);
x_27 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__1;
return x_27;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__5() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__3;
return x_1;
}
}
obj* l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_98; 
x_98 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_98) == 0)
{
obj* x_99; 
x_99 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__5;
return x_99;
}
else
{
obj* x_100; obj* x_101; 
x_100 = lean::cnstr_get(x_98, 0);
lean::inc(x_100);
lean::dec(x_98);
x_101 = lean::cnstr_get(x_100, 1);
lean::inc(x_101);
lean::dec(x_100);
if (lean::obj_tag(x_101) == 0)
{
obj* x_102; 
x_102 = lean::box(3);
x_2 = x_101;
x_3 = x_102;
goto block_97;
}
else
{
obj* x_103; obj* x_104; 
x_103 = lean::cnstr_get(x_101, 0);
lean::inc(x_103);
x_104 = lean::cnstr_get(x_101, 1);
lean::inc(x_104);
lean::dec(x_101);
x_2 = x_104;
x_3 = x_103;
goto block_97;
}
}
block_97:
{
obj* x_4; 
if (lean::obj_tag(x_3) == 1)
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_34; obj* x_35; obj* x_36; 
x_34 = lean::cnstr_get(x_3, 0);
lean::inc(x_34);
lean::dec(x_3);
x_35 = lean::box(3);
x_36 = l_Lean_Parser_Syntax_asNode___main(x_35);
if (lean::obj_tag(x_36) == 0)
{
obj* x_37; obj* x_38; 
x_37 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__4;
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_34);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
else
{
uint8 x_39; 
x_39 = !lean::is_exclusive(x_36);
if (x_39 == 0)
{
obj* x_40; obj* x_41; 
x_40 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_40, 1);
lean::inc(x_41);
lean::dec(x_40);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; obj* x_43; 
lean::free_heap_obj(x_36);
x_42 = lean::box(0);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_34);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
else
{
obj* x_44; 
x_44 = lean::cnstr_get(x_41, 1);
lean::inc(x_44);
if (lean::obj_tag(x_44) == 0)
{
obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_45 = lean::cnstr_get(x_41, 0);
lean::inc(x_45);
lean::dec(x_41);
x_46 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
x_48 = lean::apply_1(x_47, x_45);
lean::cnstr_set(x_36, 0, x_48);
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_34);
lean::cnstr_set(x_49, 1, x_36);
return x_49;
}
else
{
obj* x_50; obj* x_51; 
lean::dec(x_44);
lean::dec(x_41);
lean::free_heap_obj(x_36);
x_50 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__4;
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_34);
lean::cnstr_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
obj* x_52; obj* x_53; 
x_52 = lean::cnstr_get(x_36, 0);
lean::inc(x_52);
lean::dec(x_36);
x_53 = lean::cnstr_get(x_52, 1);
lean::inc(x_53);
lean::dec(x_52);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_55; 
x_54 = lean::box(0);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_34);
lean::cnstr_set(x_55, 1, x_54);
return x_55;
}
else
{
obj* x_56; 
x_56 = lean::cnstr_get(x_53, 1);
lean::inc(x_56);
if (lean::obj_tag(x_56) == 0)
{
obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_57 = lean::cnstr_get(x_53, 0);
lean::inc(x_57);
lean::dec(x_53);
x_58 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_59 = lean::cnstr_get(x_58, 0);
lean::inc(x_59);
x_60 = lean::apply_1(x_59, x_57);
x_61 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_61, 0, x_60);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_34);
lean::cnstr_set(x_62, 1, x_61);
return x_62;
}
else
{
obj* x_63; obj* x_64; 
lean::dec(x_56);
lean::dec(x_53);
x_63 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__4;
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_34);
lean::cnstr_set(x_64, 1, x_63);
return x_64;
}
}
}
}
}
else
{
obj* x_65; obj* x_66; obj* x_67; 
x_65 = lean::cnstr_get(x_3, 0);
lean::inc(x_65);
lean::dec(x_3);
x_66 = lean::cnstr_get(x_2, 0);
lean::inc(x_66);
lean::dec(x_2);
x_67 = l_Lean_Parser_Syntax_asNode___main(x_66);
if (lean::obj_tag(x_67) == 0)
{
obj* x_68; obj* x_69; 
x_68 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__4;
x_69 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_69, 0, x_65);
lean::cnstr_set(x_69, 1, x_68);
return x_69;
}
else
{
uint8 x_70; 
x_70 = !lean::is_exclusive(x_67);
if (x_70 == 0)
{
obj* x_71; obj* x_72; 
x_71 = lean::cnstr_get(x_67, 0);
x_72 = lean::cnstr_get(x_71, 1);
lean::inc(x_72);
lean::dec(x_71);
if (lean::obj_tag(x_72) == 0)
{
obj* x_73; obj* x_74; 
lean::free_heap_obj(x_67);
x_73 = lean::box(0);
x_74 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_74, 0, x_65);
lean::cnstr_set(x_74, 1, x_73);
return x_74;
}
else
{
obj* x_75; 
x_75 = lean::cnstr_get(x_72, 1);
lean::inc(x_75);
if (lean::obj_tag(x_75) == 0)
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
x_76 = lean::cnstr_get(x_72, 0);
lean::inc(x_76);
lean::dec(x_72);
x_77 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_79 = lean::apply_1(x_78, x_76);
lean::cnstr_set(x_67, 0, x_79);
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_65);
lean::cnstr_set(x_80, 1, x_67);
return x_80;
}
else
{
obj* x_81; obj* x_82; 
lean::dec(x_75);
lean::dec(x_72);
lean::free_heap_obj(x_67);
x_81 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__4;
x_82 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_82, 0, x_65);
lean::cnstr_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
obj* x_83; obj* x_84; 
x_83 = lean::cnstr_get(x_67, 0);
lean::inc(x_83);
lean::dec(x_67);
x_84 = lean::cnstr_get(x_83, 1);
lean::inc(x_84);
lean::dec(x_83);
if (lean::obj_tag(x_84) == 0)
{
obj* x_85; obj* x_86; 
x_85 = lean::box(0);
x_86 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_86, 0, x_65);
lean::cnstr_set(x_86, 1, x_85);
return x_86;
}
else
{
obj* x_87; 
x_87 = lean::cnstr_get(x_84, 1);
lean::inc(x_87);
if (lean::obj_tag(x_87) == 0)
{
obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; 
x_88 = lean::cnstr_get(x_84, 0);
lean::inc(x_88);
lean::dec(x_84);
x_89 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_90 = lean::cnstr_get(x_89, 0);
lean::inc(x_90);
x_91 = lean::apply_1(x_90, x_88);
x_92 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_92, 0, x_91);
x_93 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_93, 0, x_65);
lean::cnstr_set(x_93, 1, x_92);
return x_93;
}
else
{
obj* x_94; obj* x_95; 
lean::dec(x_87);
lean::dec(x_84);
x_94 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__4;
x_95 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_95, 0, x_65);
lean::cnstr_set(x_95, 1, x_94);
return x_95;
}
}
}
}
}
}
else
{
obj* x_96; 
lean::dec(x_3);
x_96 = lean::box(0);
x_4 = x_96;
goto block_33;
}
block_33:
{
lean::dec(x_4);
if (lean::obj_tag(x_2) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__3;
return x_5;
}
else
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_2, 0);
lean::inc(x_6);
lean::dec(x_2);
x_7 = l_Lean_Parser_Syntax_asNode___main(x_6);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; 
x_8 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__1;
return x_8;
}
else
{
uint8 x_9; 
x_9 = !lean::is_exclusive(x_7);
if (x_9 == 0)
{
obj* x_10; obj* x_11; 
x_10 = lean::cnstr_get(x_7, 0);
x_11 = lean::cnstr_get(x_10, 1);
lean::inc(x_11);
lean::dec(x_10);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; 
lean::free_heap_obj(x_7);
x_12 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__2;
return x_12;
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
lean::dec(x_11);
x_15 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_17 = lean::apply_1(x_16, x_14);
lean::cnstr_set(x_7, 0, x_17);
x_18 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_7);
return x_19;
}
else
{
obj* x_20; 
lean::dec(x_13);
lean::dec(x_11);
lean::free_heap_obj(x_7);
x_20 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__1;
return x_20;
}
}
}
else
{
obj* x_21; obj* x_22; 
x_21 = lean::cnstr_get(x_7, 0);
lean::inc(x_21);
lean::dec(x_7);
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
lean::dec(x_21);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; 
x_23 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__2;
return x_23;
}
else
{
obj* x_24; 
x_24 = lean::cnstr_get(x_22, 1);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
lean::dec(x_22);
x_26 = l_Lean_Parser_command_NotationSpec_action_HasView;
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_28 = lean::apply_1(x_27, x_25);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
x_30 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
return x_31;
}
else
{
obj* x_32; 
lean::dec(x_24);
lean::dec(x_22);
x_32 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__1;
return x_32;
}
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_argument_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_argument_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_argument_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_transition() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("transition");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_transition_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::box(0);
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_command_NotationSpec_binder_HasView;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::apply_1(x_5, x_3);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
x_8 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__1;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_2);
x_11 = l_Lean_Parser_command_NotationSpec_transition;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
case 1:
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
x_14 = l_Lean_Parser_command_NotationSpec_binders_HasView;
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
x_16 = lean::apply_1(x_15, x_13);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_2);
x_18 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__3;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_2);
x_21 = l_Lean_Parser_command_NotationSpec_transition;
x_22 = l_Lean_Parser_Syntax_mkNode(x_21, x_20);
return x_22;
}
default: 
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_23 = lean::cnstr_get(x_1, 0);
lean::inc(x_23);
lean::dec(x_1);
x_24 = l_Lean_Parser_command_NotationSpec_argument_HasView;
x_25 = lean::cnstr_get(x_24, 1);
lean::inc(x_25);
x_26 = lean::apply_1(x_25, x_23);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_2);
x_28 = l_Lean_Parser_number_HasView_x27___elambda__1___closed__4;
x_29 = l_Lean_Parser_Syntax_mkNode(x_28, x_27);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_2);
x_31 = l_Lean_Parser_command_NotationSpec_transition;
x_32 = l_Lean_Parser_Syntax_mkNode(x_31, x_30);
return x_32;
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_command_NotationSpec_binder_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("transition");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1;
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__2;
x_8 = lean_name_dec_eq(x_5, x_7);
lean::dec(x_5);
if (x_8 == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1;
return x_9;
}
else
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
x_10 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1;
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_6, 0);
lean::inc(x_12);
lean::dec(x_6);
x_13 = l_Lean_Parser_Syntax_asNode___main(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1;
return x_14;
}
else
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
switch (lean::obj_tag(x_16)) {
case 0:
{
obj* x_17; 
lean::dec(x_15);
x_17 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1;
return x_17;
}
case 1:
{
obj* x_18; 
lean::dec(x_16);
lean::dec(x_15);
x_18 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1;
return x_18;
}
default: 
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; uint8 x_23; 
x_19 = lean::cnstr_get(x_15, 1);
lean::inc(x_19);
lean::dec(x_15);
x_20 = lean::cnstr_get(x_16, 0);
lean::inc(x_20);
x_21 = lean::cnstr_get(x_16, 1);
lean::inc(x_21);
lean::dec(x_16);
x_22 = lean::box(0);
x_23 = lean_name_dec_eq(x_20, x_22);
lean::dec(x_20);
if (x_23 == 0)
{
obj* x_24; 
lean::dec(x_21);
lean::dec(x_19);
x_24 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1;
return x_24;
}
else
{
if (lean::obj_tag(x_19) == 0)
{
obj* x_25; 
lean::dec(x_21);
x_25 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1;
return x_25;
}
else
{
obj* x_26; 
x_26 = lean::cnstr_get(x_19, 1);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; uint8 x_29; 
x_27 = lean::cnstr_get(x_19, 0);
lean::inc(x_27);
lean::dec(x_19);
x_28 = lean::mk_nat_obj(0u);
x_29 = lean::nat_dec_eq(x_21, x_28);
if (x_29 == 0)
{
obj* x_30; uint8 x_31; 
x_30 = lean::mk_nat_obj(1u);
x_31 = lean::nat_dec_eq(x_21, x_30);
lean::dec(x_21);
if (x_31 == 0)
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_32 = l_Lean_Parser_command_NotationSpec_argument_HasView;
x_33 = lean::cnstr_get(x_32, 0);
lean::inc(x_33);
x_34 = lean::apply_1(x_33, x_27);
x_35 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_35, 0, x_34);
return x_35;
}
else
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_36 = l_Lean_Parser_command_NotationSpec_binders_HasView;
x_37 = lean::cnstr_get(x_36, 0);
lean::inc(x_37);
x_38 = lean::apply_1(x_37, x_27);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
return x_39;
}
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
lean::dec(x_21);
x_40 = l_Lean_Parser_command_NotationSpec_binder_HasView;
x_41 = lean::cnstr_get(x_40, 0);
lean::inc(x_41);
x_42 = lean::apply_1(x_41, x_27);
x_43 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_43, 0, x_42);
return x_43;
}
}
else
{
obj* x_44; 
lean::dec(x_26);
lean::dec(x_21);
lean::dec(x_19);
x_44 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1;
return x_44;
}
}
}
}
}
}
}
else
{
obj* x_45; 
lean::dec(x_11);
lean::dec(x_6);
x_45 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1;
return x_45;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_transition_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_transition_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_transition_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_transition_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_transition_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasTokens;
x_3 = l_Lean_Parser_tokens___rarg(x_2);
x_4 = l_Lean_Parser_List_cons_tokens___rarg(x_3, x_1);
lean::dec(x_3);
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_1, x_4);
lean::dec(x_4);
x_6 = l_Lean_Parser_tokens___rarg(x_5);
lean::dec(x_5);
x_7 = l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasTokens;
x_8 = l_Lean_Parser_tokens___rarg(x_7);
x_9 = l_Lean_Parser_List_cons_tokens___rarg(x_8, x_1);
lean::dec(x_8);
x_10 = l_Lean_Parser_List_cons_tokens___rarg(x_1, x_9);
lean::dec(x_9);
x_11 = l_Lean_Parser_tokens___rarg(x_10);
lean::dec(x_10);
x_12 = l_Lean_Parser_List_cons_tokens___rarg(x_11, x_1);
lean::dec(x_11);
x_13 = l_Lean_Parser_List_cons_tokens___rarg(x_6, x_12);
lean::dec(x_12);
x_14 = l_Lean_Parser_List_cons_tokens___rarg(x_6, x_13);
lean::dec(x_13);
lean::dec(x_6);
x_15 = l_Lean_Parser_tokens___rarg(x_14);
lean::dec(x_14);
x_16 = l_Lean_Parser_List_cons_tokens___rarg(x_15, x_1);
lean::dec(x_15);
x_17 = l_Lean_Parser_tokens___rarg(x_16);
lean::dec(x_16);
return x_17;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_transition_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; uint8 x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_1 = lean::mk_string("binder");
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedence_Parser), 5, 0);
x_4 = 0;
x_5 = lean::box(x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
lean::inc(x_8);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_2);
lean::cnstr_set(x_9, 1, x_8);
x_10 = l_Lean_Parser_command_NotationSpec_binder;
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_11, 0, x_10);
lean::closure_set(x_11, 1, x_9);
x_12 = lean::mk_string("binders");
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_8);
x_15 = l_Lean_Parser_command_NotationSpec_binders;
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_16, 0, x_15);
lean::closure_set(x_16, 1, x_14);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser), 5, 0);
x_18 = lean::box(x_4);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_19, 0, x_17);
lean::closure_set(x_19, 1, x_18);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_7);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___boxed), 1, 0);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_20);
x_23 = l_Lean_Parser_command_NotationSpec_argument;
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_24, 0, x_23);
lean::closure_set(x_24, 1, x_22);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_7);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_16);
lean::cnstr_set(x_26, 1, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_11);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::mk_nat_obj(0u);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_29, 0, x_27);
lean::closure_set(x_29, 1, x_28);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_7);
x_31 = l_Lean_Parser_TermParserM_Monad;
x_32 = l_Lean_Parser_TermParserM_MonadExcept;
x_33 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_34 = l_Lean_Parser_TermParserM_Alternative;
x_35 = l_Lean_Parser_command_NotationSpec_transition;
x_36 = l_Lean_Parser_command_NotationSpec_transition_HasView;
x_37 = l_Lean_Parser_Combinators_node_view___rarg(x_31, x_32, x_33, x_34, x_35, x_30, x_36);
lean::dec(x_30);
return x_37;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_transition_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; uint8 x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_1 = lean::mk_string("binder");
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_precedence_Parser), 5, 0);
x_4 = 0;
x_5 = lean::box(x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
lean::inc(x_8);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_2);
lean::cnstr_set(x_9, 1, x_8);
x_10 = l_Lean_Parser_command_NotationSpec_binder;
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_11, 0, x_10);
lean::closure_set(x_11, 1, x_9);
x_12 = lean::mk_string("binders");
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__2___boxed), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_8);
x_15 = l_Lean_Parser_command_NotationSpec_binders;
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_16, 0, x_15);
lean::closure_set(x_16, 1, x_14);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser), 5, 0);
x_18 = lean::box(x_4);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_19, 0, x_17);
lean::closure_set(x_19, 1, x_18);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_7);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___boxed), 1, 0);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_20);
x_23 = l_Lean_Parser_command_NotationSpec_argument;
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_24, 0, x_23);
lean::closure_set(x_24, 1, x_22);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_7);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_16);
lean::cnstr_set(x_26, 1, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_11);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::mk_nat_obj(0u);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_29, 0, x_27);
lean::closure_set(x_29, 1, x_28);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_7);
return x_30;
}
}
obj* l_Lean_Parser_command_NotationSpec_transition_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_NotationSpec_transition;
x_7 = l_Lean_Parser_command_NotationSpec_transition_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_rule() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("rule");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_NotationSpec_rule_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::apply_1(x_5, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_7 = l_Lean_Parser_detailIdent_HasView_x27___elambda__1___closed__1;
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
x_9 = l_Lean_Parser_command_NotationSpec_rule;
x_10 = l_Lean_Parser_Syntax_mkNode(x_9, x_8);
return x_10;
}
else
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_11 = lean::cnstr_get(x_3, 0);
lean::inc(x_11);
lean::dec(x_3);
x_12 = lean::box(0);
x_13 = l_Lean_Parser_command_NotationSpec_transition_HasView;
x_14 = lean::cnstr_get(x_13, 1);
lean::inc(x_14);
x_15 = lean::apply_1(x_14, x_11);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_12);
x_17 = l_Lean_Parser_noKind;
x_18 = l_Lean_Parser_Syntax_mkNode(x_17, x_16);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_12);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_6);
lean::cnstr_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_command_NotationSpec_rule;
x_22 = l_Lean_Parser_Syntax_mkNode(x_21, x_20);
return x_22;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_command_NotationSpec_transition_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
x_5 = l_Lean_Parser_Syntax_asNode___main(x_3);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_7; 
x_6 = l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1;
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
else
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_5);
if (x_8 == 0)
{
obj* x_9; obj* x_10; 
x_9 = lean::cnstr_get(x_5, 0);
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; 
lean::free_heap_obj(x_5);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_4);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
lean::dec(x_10);
x_15 = l_Lean_Parser_command_NotationSpec_transition_HasView;
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_17 = lean::apply_1(x_16, x_14);
lean::cnstr_set(x_5, 0, x_17);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_4);
lean::cnstr_set(x_18, 1, x_5);
return x_18;
}
else
{
obj* x_19; obj* x_20; 
lean::dec(x_13);
lean::dec(x_10);
lean::free_heap_obj(x_5);
x_19 = l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1;
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_4);
lean::cnstr_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
obj* x_21; obj* x_22; 
x_21 = lean::cnstr_get(x_5, 0);
lean::inc(x_21);
lean::dec(x_5);
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
lean::dec(x_21);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; 
x_23 = lean::box(0);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_4);
lean::cnstr_set(x_24, 1, x_23);
return x_24;
}
else
{
obj* x_25; 
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_26 = lean::cnstr_get(x_22, 0);
lean::inc(x_26);
lean::dec(x_22);
x_27 = l_Lean_Parser_command_NotationSpec_transition_HasView;
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_29 = lean::apply_1(x_28, x_26);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_29);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_4);
lean::cnstr_set(x_31, 1, x_30);
return x_31;
}
else
{
obj* x_32; obj* x_33; 
lean::dec(x_25);
lean::dec(x_22);
x_32 = l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1;
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_4);
lean::cnstr_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
}
obj* l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_68; 
x_68 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_68) == 0)
{
obj* x_69; 
x_69 = l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__2;
return x_69;
}
else
{
obj* x_70; obj* x_71; 
x_70 = lean::cnstr_get(x_68, 0);
lean::inc(x_70);
lean::dec(x_68);
x_71 = lean::cnstr_get(x_70, 1);
lean::inc(x_71);
lean::dec(x_70);
if (lean::obj_tag(x_71) == 0)
{
obj* x_72; 
x_72 = lean::box(3);
x_2 = x_71;
x_3 = x_72;
goto block_67;
}
else
{
obj* x_73; obj* x_74; 
x_73 = lean::cnstr_get(x_71, 0);
lean::inc(x_73);
x_74 = lean::cnstr_get(x_71, 1);
lean::inc(x_74);
lean::dec(x_71);
x_2 = x_74;
x_3 = x_73;
goto block_67;
}
}
block_67:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::apply_1(x_5, x_3);
if (lean::obj_tag(x_2) == 0)
{
obj* x_7; obj* x_8; 
x_7 = lean::box(3);
x_8 = l_Lean_Parser_Syntax_asNode___main(x_7);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_10; 
x_9 = l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1;
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_6);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
else
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_8);
if (x_11 == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_8, 0);
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
lean::dec(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_15; 
lean::free_heap_obj(x_8);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_6);
lean::cnstr_set(x_15, 1, x_14);
return x_15;
}
else
{
obj* x_16; 
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_17 = lean::cnstr_get(x_13, 0);
lean::inc(x_17);
lean::dec(x_13);
x_18 = l_Lean_Parser_command_NotationSpec_transition_HasView;
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_20 = lean::apply_1(x_19, x_17);
lean::cnstr_set(x_8, 0, x_20);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_6);
lean::cnstr_set(x_21, 1, x_8);
return x_21;
}
else
{
obj* x_22; obj* x_23; 
lean::dec(x_16);
lean::dec(x_13);
lean::free_heap_obj(x_8);
x_22 = l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1;
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_6);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
obj* x_24; obj* x_25; 
x_24 = lean::cnstr_get(x_8, 0);
lean::inc(x_24);
lean::dec(x_8);
x_25 = lean::cnstr_get(x_24, 1);
lean::inc(x_25);
lean::dec(x_24);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_27; 
x_26 = lean::box(0);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_6);
lean::cnstr_set(x_27, 1, x_26);
return x_27;
}
else
{
obj* x_28; 
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_29 = lean::cnstr_get(x_25, 0);
lean::inc(x_29);
lean::dec(x_25);
x_30 = l_Lean_Parser_command_NotationSpec_transition_HasView;
x_31 = lean::cnstr_get(x_30, 0);
lean::inc(x_31);
x_32 = lean::apply_1(x_31, x_29);
x_33 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_33, 0, x_32);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_6);
lean::cnstr_set(x_34, 1, x_33);
return x_34;
}
else
{
obj* x_35; obj* x_36; 
lean::dec(x_28);
lean::dec(x_25);
x_35 = l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1;
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_6);
lean::cnstr_set(x_36, 1, x_35);
return x_36;
}
}
}
}
}
else
{
obj* x_37; obj* x_38; 
x_37 = lean::cnstr_get(x_2, 0);
lean::inc(x_37);
lean::dec(x_2);
x_38 = l_Lean_Parser_Syntax_asNode___main(x_37);
if (lean::obj_tag(x_38) == 0)
{
obj* x_39; obj* x_40; 
x_39 = l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1;
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_6);
lean::cnstr_set(x_40, 1, x_39);
return x_40;
}
else
{
uint8 x_41; 
x_41 = !lean::is_exclusive(x_38);
if (x_41 == 0)
{
obj* x_42; obj* x_43; 
x_42 = lean::cnstr_get(x_38, 0);
x_43 = lean::cnstr_get(x_42, 1);
lean::inc(x_43);
lean::dec(x_42);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_45; 
lean::free_heap_obj(x_38);
x_44 = lean::box(0);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_6);
lean::cnstr_set(x_45, 1, x_44);
return x_45;
}
else
{
obj* x_46; 
x_46 = lean::cnstr_get(x_43, 1);
lean::inc(x_46);
if (lean::obj_tag(x_46) == 0)
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = lean::cnstr_get(x_43, 0);
lean::inc(x_47);
lean::dec(x_43);
x_48 = l_Lean_Parser_command_NotationSpec_transition_HasView;
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
x_50 = lean::apply_1(x_49, x_47);
lean::cnstr_set(x_38, 0, x_50);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_6);
lean::cnstr_set(x_51, 1, x_38);
return x_51;
}
else
{
obj* x_52; obj* x_53; 
lean::dec(x_46);
lean::dec(x_43);
lean::free_heap_obj(x_38);
x_52 = l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1;
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_6);
lean::cnstr_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
obj* x_54; obj* x_55; 
x_54 = lean::cnstr_get(x_38, 0);
lean::inc(x_54);
lean::dec(x_38);
x_55 = lean::cnstr_get(x_54, 1);
lean::inc(x_55);
lean::dec(x_54);
if (lean::obj_tag(x_55) == 0)
{
obj* x_56; obj* x_57; 
x_56 = lean::box(0);
x_57 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_57, 0, x_6);
lean::cnstr_set(x_57, 1, x_56);
return x_57;
}
else
{
obj* x_58; 
x_58 = lean::cnstr_get(x_55, 1);
lean::inc(x_58);
if (lean::obj_tag(x_58) == 0)
{
obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_59 = lean::cnstr_get(x_55, 0);
lean::inc(x_59);
lean::dec(x_55);
x_60 = l_Lean_Parser_command_NotationSpec_transition_HasView;
x_61 = lean::cnstr_get(x_60, 0);
lean::inc(x_61);
x_62 = lean::apply_1(x_61, x_59);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_62);
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_6);
lean::cnstr_set(x_64, 1, x_63);
return x_64;
}
else
{
obj* x_65; obj* x_66; 
lean::dec(x_58);
lean::dec(x_55);
x_65 = l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1;
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_6);
lean::cnstr_set(x_66, 1, x_65);
return x_66;
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_rule_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_rule_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_rule_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_rule_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_rule_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_1 = l_Lean_Parser_command_NotationSpec_transition_Parser_Lean_Parser_HasTokens;
x_2 = l_Lean_Parser_tokens___rarg(x_1);
x_3 = lean::box(0);
x_4 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_3);
lean::dec(x_2);
x_5 = l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasTokens;
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_4);
lean::dec(x_4);
x_7 = l_Lean_Parser_tokens___rarg(x_6);
lean::dec(x_6);
return x_7;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_rule_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; uint8 x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_transition_Parser), 5, 0);
x_2 = 0;
x_3 = lean::box(x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_4, 0, x_1);
lean::closure_set(x_4, 1, x_3);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_notationSymbol_Parser), 5, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = l_Lean_Parser_TermParserM_Monad;
x_10 = l_Lean_Parser_TermParserM_MonadExcept;
x_11 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_12 = l_Lean_Parser_TermParserM_Alternative;
x_13 = l_Lean_Parser_command_NotationSpec_rule;
x_14 = l_Lean_Parser_command_NotationSpec_rule_HasView;
x_15 = l_Lean_Parser_Combinators_node_view___rarg(x_9, x_10, x_11, x_12, x_13, x_8, x_14);
lean::dec(x_8);
return x_15;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_rule_Parser___closed__1() {
_start:
{
obj* x_1; uint8 x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_transition_Parser), 5, 0);
x_2 = 0;
x_3 = lean::box(x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_4, 0, x_1);
lean::closure_set(x_4, 1, x_3);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_notationSymbol_Parser), 5, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
return x_8;
}
}
obj* l_Lean_Parser_command_NotationSpec_rule_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_NotationSpec_rule;
x_7 = l_Lean_Parser_command_NotationSpec_rule_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("NotationSpec");
x_9 = lean_name_mk_string(x_7, x_8);
return x_9;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_HasView_x27___elambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_command_NotationSpec_rule_HasView;
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
return x_2;
}
}
obj* l_Lean_Parser_command_NotationSpec_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_command_NotationSpec_HasView_x27___elambda__1___closed__1;
x_5 = l_List_map___main___rarg(x_4, x_3);
x_6 = l_Lean_Parser_noKind;
x_7 = l_Lean_Parser_Syntax_mkNode(x_6, x_5);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
if (lean::obj_tag(x_2) == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_10 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
x_12 = l_Lean_Parser_command_NotationSpec;
x_13 = l_Lean_Parser_Syntax_mkNode(x_12, x_11);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_14 = lean::cnstr_get(x_2, 0);
lean::inc(x_14);
lean::dec(x_2);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_8);
x_17 = l_Lean_Parser_Syntax_mkNode(x_6, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_9);
x_19 = l_Lean_Parser_command_NotationSpec;
x_20 = l_Lean_Parser_Syntax_mkNode(x_19, x_18);
return x_20;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = l_Lean_Parser_command_NotationSpec_rule_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_command_NotationSpec_rule_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::box(0);
x_2 = lean::mk_string("NOTAnIdent");
lean::inc(x_2);
x_3 = l_Lean_Parser_Substring_ofString(x_2);
x_4 = lean::box(0);
x_5 = lean_name_mk_string(x_4, x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_1);
lean::cnstr_set(x_7, 1, x_3);
lean::cnstr_set(x_7, 2, x_5);
lean::cnstr_set(x_7, 3, x_6);
lean::cnstr_set(x_7, 4, x_6);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_9 = lean::box(3);
x_10 = l_Lean_Parser_Syntax_asNode___main(x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; 
x_11 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__1;
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
lean::dec(x_10);
x_14 = lean::cnstr_get(x_13, 1);
lean::inc(x_14);
lean::dec(x_13);
x_15 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2;
x_16 = l_List_map___main___rarg(x_15, x_14);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_8);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::box(0);
x_2 = lean::mk_string("NOTAnIdent");
lean::inc(x_2);
x_3 = l_Lean_Parser_Substring_ofString(x_2);
x_4 = lean::box(0);
x_5 = lean_name_mk_string(x_4, x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_1);
lean::cnstr_set(x_7, 1, x_3);
lean::cnstr_set(x_7, 2, x_5);
lean::cnstr_set(x_7, 3, x_6);
lean::cnstr_set(x_7, 4, x_6);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = lean::box(3);
x_3 = l_Lean_Parser_Syntax_asNode___main(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__1;
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_4);
return x_5;
}
else
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
lean::dec(x_6);
x_8 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2;
x_9 = l_List_map___main___rarg(x_8, x_7);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_1);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3;
return x_3;
}
else
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_2);
if (x_4 == 0)
{
obj* x_5; obj* x_6; 
x_5 = lean::cnstr_get(x_2, 0);
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
lean::dec(x_5);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; 
lean::free_heap_obj(x_2);
x_7 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__5;
return x_7;
}
else
{
obj* x_8; 
x_8 = lean::cnstr_get(x_6, 1);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; 
x_9 = lean::cnstr_get(x_6, 0);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 1)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
lean::dec(x_9);
lean::cnstr_set(x_2, 0, x_10);
x_11 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2;
x_12 = l_List_map___main___rarg(x_11, x_6);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_2);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
else
{
obj* x_14; 
lean::dec(x_9);
lean::dec(x_6);
lean::free_heap_obj(x_2);
x_14 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3;
return x_14;
}
}
else
{
obj* x_15; 
lean::dec(x_8);
lean::dec(x_6);
lean::free_heap_obj(x_2);
x_15 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3;
return x_15;
}
}
}
else
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_2, 0);
lean::inc(x_16);
lean::dec(x_2);
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
lean::dec(x_16);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; 
x_18 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__5;
return x_18;
}
else
{
obj* x_19; 
x_19 = lean::cnstr_get(x_17, 1);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; 
x_20 = lean::cnstr_get(x_17, 0);
lean::inc(x_20);
if (lean::obj_tag(x_20) == 1)
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
lean::dec(x_20);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
x_23 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2;
x_24 = l_List_map___main___rarg(x_23, x_17);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_22);
lean::cnstr_set(x_25, 1, x_24);
return x_25;
}
else
{
obj* x_26; 
lean::dec(x_20);
lean::dec(x_17);
x_26 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3;
return x_26;
}
}
else
{
obj* x_27; 
lean::dec(x_19);
lean::dec(x_17);
x_27 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3;
return x_27;
}
}
}
}
}
}
obj* l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_13; obj* x_14; obj* x_71; 
x_71 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_71) == 0)
{
obj* x_72; 
x_72 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__6;
return x_72;
}
else
{
obj* x_73; obj* x_74; 
x_73 = lean::cnstr_get(x_71, 0);
lean::inc(x_73);
lean::dec(x_71);
x_74 = lean::cnstr_get(x_73, 1);
lean::inc(x_74);
lean::dec(x_73);
if (lean::obj_tag(x_74) == 0)
{
obj* x_75; 
x_75 = lean::box(3);
x_13 = x_74;
x_14 = x_75;
goto block_70;
}
else
{
obj* x_76; obj* x_77; 
x_76 = lean::cnstr_get(x_74, 0);
lean::inc(x_76);
x_77 = lean::cnstr_get(x_74, 1);
lean::inc(x_77);
lean::dec(x_74);
x_13 = x_77;
x_14 = x_76;
goto block_70;
}
}
block_12:
{
obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_6; 
x_5 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__1;
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
x_9 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2;
x_10 = l_List_map___main___rarg(x_9, x_8);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_2);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
block_70:
{
obj* x_15; obj* x_20; 
x_20 = l_Lean_Parser_Syntax_asNode___main(x_14);
if (lean::obj_tag(x_20) == 0)
{
if (lean::obj_tag(x_13) == 0)
{
obj* x_21; 
x_21 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3;
return x_21;
}
else
{
obj* x_22; obj* x_23; 
x_22 = lean::cnstr_get(x_13, 0);
lean::inc(x_22);
lean::dec(x_13);
x_23 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__4;
x_2 = x_23;
x_3 = x_22;
goto block_12;
}
}
else
{
uint8 x_24; 
x_24 = !lean::is_exclusive(x_20);
if (x_24 == 0)
{
obj* x_25; obj* x_26; 
x_25 = lean::cnstr_get(x_20, 0);
x_26 = lean::cnstr_get(x_25, 1);
lean::inc(x_26);
lean::dec(x_25);
if (lean::obj_tag(x_26) == 0)
{
lean::free_heap_obj(x_20);
if (lean::obj_tag(x_13) == 0)
{
obj* x_27; 
x_27 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__5;
return x_27;
}
else
{
obj* x_28; obj* x_29; 
x_28 = lean::cnstr_get(x_13, 0);
lean::inc(x_28);
lean::dec(x_13);
x_29 = lean::box(0);
x_2 = x_29;
x_3 = x_28;
goto block_12;
}
}
else
{
obj* x_30; 
x_30 = lean::cnstr_get(x_26, 1);
lean::inc(x_30);
if (lean::obj_tag(x_30) == 0)
{
obj* x_31; 
x_31 = lean::cnstr_get(x_26, 0);
lean::inc(x_31);
lean::dec(x_26);
if (lean::obj_tag(x_31) == 1)
{
obj* x_32; 
x_32 = lean::cnstr_get(x_31, 0);
lean::inc(x_32);
lean::dec(x_31);
lean::cnstr_set(x_20, 0, x_32);
if (lean::obj_tag(x_13) == 0)
{
obj* x_33; obj* x_34; 
x_33 = lean::box(3);
x_34 = l_Lean_Parser_Syntax_asNode___main(x_33);
if (lean::obj_tag(x_34) == 0)
{
obj* x_35; obj* x_36; 
x_35 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__1;
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_20);
lean::cnstr_set(x_36, 1, x_35);
return x_36;
}
else
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
lean::dec(x_34);
x_38 = lean::cnstr_get(x_37, 1);
lean::inc(x_38);
lean::dec(x_37);
x_39 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2;
x_40 = l_List_map___main___rarg(x_39, x_38);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_20);
lean::cnstr_set(x_41, 1, x_40);
return x_41;
}
}
else
{
obj* x_42; 
x_42 = lean::cnstr_get(x_13, 0);
lean::inc(x_42);
lean::dec(x_13);
x_2 = x_20;
x_3 = x_42;
goto block_12;
}
}
else
{
obj* x_43; 
lean::dec(x_31);
lean::free_heap_obj(x_20);
x_43 = lean::box(0);
x_15 = x_43;
goto block_19;
}
}
else
{
lean::dec(x_30);
lean::dec(x_26);
lean::free_heap_obj(x_20);
if (lean::obj_tag(x_13) == 0)
{
obj* x_44; 
x_44 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3;
return x_44;
}
else
{
obj* x_45; obj* x_46; 
x_45 = lean::cnstr_get(x_13, 0);
lean::inc(x_45);
lean::dec(x_13);
x_46 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__4;
x_2 = x_46;
x_3 = x_45;
goto block_12;
}
}
}
}
else
{
obj* x_47; obj* x_48; 
x_47 = lean::cnstr_get(x_20, 0);
lean::inc(x_47);
lean::dec(x_20);
x_48 = lean::cnstr_get(x_47, 1);
lean::inc(x_48);
lean::dec(x_47);
if (lean::obj_tag(x_48) == 0)
{
if (lean::obj_tag(x_13) == 0)
{
obj* x_49; 
x_49 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__5;
return x_49;
}
else
{
obj* x_50; obj* x_51; 
x_50 = lean::cnstr_get(x_13, 0);
lean::inc(x_50);
lean::dec(x_13);
x_51 = lean::box(0);
x_2 = x_51;
x_3 = x_50;
goto block_12;
}
}
else
{
obj* x_52; 
x_52 = lean::cnstr_get(x_48, 1);
lean::inc(x_52);
if (lean::obj_tag(x_52) == 0)
{
obj* x_53; 
x_53 = lean::cnstr_get(x_48, 0);
lean::inc(x_53);
lean::dec(x_48);
if (lean::obj_tag(x_53) == 1)
{
obj* x_54; obj* x_55; 
x_54 = lean::cnstr_get(x_53, 0);
lean::inc(x_54);
lean::dec(x_53);
x_55 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_55, 0, x_54);
if (lean::obj_tag(x_13) == 0)
{
obj* x_56; obj* x_57; 
x_56 = lean::box(3);
x_57 = l_Lean_Parser_Syntax_asNode___main(x_56);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_59; 
x_58 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__1;
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_55);
lean::cnstr_set(x_59, 1, x_58);
return x_59;
}
else
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_60 = lean::cnstr_get(x_57, 0);
lean::inc(x_60);
lean::dec(x_57);
x_61 = lean::cnstr_get(x_60, 1);
lean::inc(x_61);
lean::dec(x_60);
x_62 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2;
x_63 = l_List_map___main___rarg(x_62, x_61);
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_55);
lean::cnstr_set(x_64, 1, x_63);
return x_64;
}
}
else
{
obj* x_65; 
x_65 = lean::cnstr_get(x_13, 0);
lean::inc(x_65);
lean::dec(x_13);
x_2 = x_55;
x_3 = x_65;
goto block_12;
}
}
else
{
obj* x_66; 
lean::dec(x_53);
x_66 = lean::box(0);
x_15 = x_66;
goto block_19;
}
}
else
{
lean::dec(x_52);
lean::dec(x_48);
if (lean::obj_tag(x_13) == 0)
{
obj* x_67; 
x_67 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3;
return x_67;
}
else
{
obj* x_68; obj* x_69; 
x_68 = lean::cnstr_get(x_13, 0);
lean::inc(x_68);
lean::dec(x_13);
x_69 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__4;
x_2 = x_69;
x_3 = x_68;
goto block_12;
}
}
}
}
}
block_19:
{
lean::dec(x_15);
if (lean::obj_tag(x_13) == 0)
{
obj* x_16; 
x_16 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3;
return x_16;
}
else
{
obj* x_17; obj* x_18; 
x_17 = lean::cnstr_get(x_13, 0);
lean::inc(x_17);
lean::dec(x_13);
x_18 = l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__4;
x_2 = x_18;
x_3 = x_17;
goto block_12;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_NotationSpec_HasView_x27;
return x_1;
}
}
obj* l___private_init_lean_parser_combinators_1__many1Aux___main___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__3(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; uint8 x_10; 
x_9 = lean::mk_nat_obj(0u);
x_10 = lean::nat_dec_eq(x_3, x_9);
if (x_10 == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_89; obj* x_90; 
x_11 = lean::mk_nat_obj(1u);
x_12 = lean::nat_sub(x_3, x_11);
lean::inc(x_1);
lean::inc(x_6);
lean::inc(x_5);
lean::inc(x_4);
x_89 = lean::apply_5(x_1, x_4, x_5, x_6, x_7, x_8);
x_90 = lean::cnstr_get(x_89, 0);
lean::inc(x_90);
if (lean::obj_tag(x_90) == 0)
{
obj* x_91; 
x_91 = lean::cnstr_get(x_89, 1);
lean::inc(x_91);
lean::dec(x_89);
x_13 = x_90;
x_14 = x_91;
goto block_88;
}
else
{
obj* x_92; obj* x_93; 
x_92 = lean::cnstr_get(x_90, 0);
lean::inc(x_92);
x_93 = lean::cnstr_get(x_92, 3);
lean::inc(x_93);
if (lean::obj_tag(x_93) == 0)
{
obj* x_94; uint8 x_95; 
x_94 = lean::cnstr_get(x_89, 1);
lean::inc(x_94);
lean::dec(x_89);
x_95 = !lean::is_exclusive(x_90);
if (x_95 == 0)
{
uint8 x_96; obj* x_97; uint8 x_98; 
x_96 = lean::cnstr_get_scalar<uint8>(x_90, sizeof(void*)*1);
x_97 = lean::cnstr_get(x_90, 0);
lean::dec(x_97);
x_98 = !lean::is_exclusive(x_92);
if (x_98 == 0)
{
obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_99 = lean::cnstr_get(x_92, 3);
lean::dec(x_99);
x_100 = lean::box(3);
lean::inc(x_2);
x_101 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_101, 0, x_100);
lean::cnstr_set(x_101, 1, x_2);
x_102 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_102, 0, x_100);
lean::cnstr_set(x_102, 1, x_101);
x_103 = l_List_reverse___rarg(x_102);
x_104 = l_Lean_Parser_noKind;
x_105 = l_Lean_Parser_Syntax_mkNode(x_104, x_103);
x_106 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_106, 0, x_105);
lean::cnstr_set(x_92, 3, x_106);
if (x_96 == 0)
{
uint8 x_107; 
x_107 = 0;
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_107);
x_13 = x_90;
x_14 = x_94;
goto block_88;
}
else
{
uint8 x_108; 
x_108 = 1;
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_108);
x_13 = x_90;
x_14 = x_94;
goto block_88;
}
}
else
{
obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
x_109 = lean::cnstr_get(x_92, 0);
x_110 = lean::cnstr_get(x_92, 1);
x_111 = lean::cnstr_get(x_92, 2);
lean::inc(x_111);
lean::inc(x_110);
lean::inc(x_109);
lean::dec(x_92);
x_112 = lean::box(3);
lean::inc(x_2);
x_113 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_113, 0, x_112);
lean::cnstr_set(x_113, 1, x_2);
x_114 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_114, 0, x_112);
lean::cnstr_set(x_114, 1, x_113);
x_115 = l_List_reverse___rarg(x_114);
x_116 = l_Lean_Parser_noKind;
x_117 = l_Lean_Parser_Syntax_mkNode(x_116, x_115);
x_118 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_118, 0, x_117);
x_119 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_119, 0, x_109);
lean::cnstr_set(x_119, 1, x_110);
lean::cnstr_set(x_119, 2, x_111);
lean::cnstr_set(x_119, 3, x_118);
if (x_96 == 0)
{
uint8 x_120; 
x_120 = 0;
lean::cnstr_set(x_90, 0, x_119);
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_120);
x_13 = x_90;
x_14 = x_94;
goto block_88;
}
else
{
uint8 x_121; 
x_121 = 1;
lean::cnstr_set(x_90, 0, x_119);
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_121);
x_13 = x_90;
x_14 = x_94;
goto block_88;
}
}
}
else
{
uint8 x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; obj* x_132; obj* x_133; obj* x_134; 
x_122 = lean::cnstr_get_scalar<uint8>(x_90, sizeof(void*)*1);
lean::dec(x_90);
x_123 = lean::cnstr_get(x_92, 0);
lean::inc(x_123);
x_124 = lean::cnstr_get(x_92, 1);
lean::inc(x_124);
x_125 = lean::cnstr_get(x_92, 2);
lean::inc(x_125);
if (lean::is_exclusive(x_92)) {
 lean::cnstr_release(x_92, 0);
 lean::cnstr_release(x_92, 1);
 lean::cnstr_release(x_92, 2);
 lean::cnstr_release(x_92, 3);
 x_126 = x_92;
} else {
 lean::dec_ref(x_92);
 x_126 = lean::box(0);
}
x_127 = lean::box(3);
lean::inc(x_2);
x_128 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_128, 0, x_127);
lean::cnstr_set(x_128, 1, x_2);
x_129 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_129, 0, x_127);
lean::cnstr_set(x_129, 1, x_128);
x_130 = l_List_reverse___rarg(x_129);
x_131 = l_Lean_Parser_noKind;
x_132 = l_Lean_Parser_Syntax_mkNode(x_131, x_130);
x_133 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_133, 0, x_132);
if (lean::is_scalar(x_126)) {
 x_134 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_134 = x_126;
}
lean::cnstr_set(x_134, 0, x_123);
lean::cnstr_set(x_134, 1, x_124);
lean::cnstr_set(x_134, 2, x_125);
lean::cnstr_set(x_134, 3, x_133);
if (x_122 == 0)
{
uint8 x_135; obj* x_136; 
x_135 = 0;
x_136 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_136, 0, x_134);
lean::cnstr_set_scalar(x_136, sizeof(void*)*1, x_135);
x_13 = x_136;
x_14 = x_94;
goto block_88;
}
else
{
uint8 x_137; obj* x_138; 
x_137 = 1;
x_138 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_138, 0, x_134);
lean::cnstr_set_scalar(x_138, sizeof(void*)*1, x_137);
x_13 = x_138;
x_14 = x_94;
goto block_88;
}
}
}
else
{
obj* x_139; uint8 x_140; 
x_139 = lean::cnstr_get(x_89, 1);
lean::inc(x_139);
lean::dec(x_89);
x_140 = !lean::is_exclusive(x_90);
if (x_140 == 0)
{
uint8 x_141; obj* x_142; uint8 x_143; 
x_141 = lean::cnstr_get_scalar<uint8>(x_90, sizeof(void*)*1);
x_142 = lean::cnstr_get(x_90, 0);
lean::dec(x_142);
x_143 = !lean::is_exclusive(x_92);
if (x_143 == 0)
{
obj* x_144; uint8 x_145; 
x_144 = lean::cnstr_get(x_92, 3);
lean::dec(x_144);
x_145 = !lean::is_exclusive(x_93);
if (x_145 == 0)
{
obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_152; 
x_146 = lean::cnstr_get(x_93, 0);
lean::inc(x_2);
x_147 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_147, 0, x_146);
lean::cnstr_set(x_147, 1, x_2);
x_148 = lean::box(3);
x_149 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_149, 0, x_148);
lean::cnstr_set(x_149, 1, x_147);
x_150 = l_List_reverse___rarg(x_149);
x_151 = l_Lean_Parser_noKind;
x_152 = l_Lean_Parser_Syntax_mkNode(x_151, x_150);
lean::cnstr_set(x_93, 0, x_152);
if (x_141 == 0)
{
uint8 x_153; 
x_153 = 0;
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_153);
x_13 = x_90;
x_14 = x_139;
goto block_88;
}
else
{
uint8 x_154; 
x_154 = 1;
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_154);
x_13 = x_90;
x_14 = x_139;
goto block_88;
}
}
else
{
obj* x_155; obj* x_156; obj* x_157; obj* x_158; obj* x_159; obj* x_160; obj* x_161; obj* x_162; 
x_155 = lean::cnstr_get(x_93, 0);
lean::inc(x_155);
lean::dec(x_93);
lean::inc(x_2);
x_156 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_156, 0, x_155);
lean::cnstr_set(x_156, 1, x_2);
x_157 = lean::box(3);
x_158 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_158, 0, x_157);
lean::cnstr_set(x_158, 1, x_156);
x_159 = l_List_reverse___rarg(x_158);
x_160 = l_Lean_Parser_noKind;
x_161 = l_Lean_Parser_Syntax_mkNode(x_160, x_159);
x_162 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_162, 0, x_161);
lean::cnstr_set(x_92, 3, x_162);
if (x_141 == 0)
{
uint8 x_163; 
x_163 = 0;
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_163);
x_13 = x_90;
x_14 = x_139;
goto block_88;
}
else
{
uint8 x_164; 
x_164 = 1;
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_164);
x_13 = x_90;
x_14 = x_139;
goto block_88;
}
}
}
else
{
obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; obj* x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; obj* x_177; 
x_165 = lean::cnstr_get(x_92, 0);
x_166 = lean::cnstr_get(x_92, 1);
x_167 = lean::cnstr_get(x_92, 2);
lean::inc(x_167);
lean::inc(x_166);
lean::inc(x_165);
lean::dec(x_92);
x_168 = lean::cnstr_get(x_93, 0);
lean::inc(x_168);
if (lean::is_exclusive(x_93)) {
 lean::cnstr_release(x_93, 0);
 x_169 = x_93;
} else {
 lean::dec_ref(x_93);
 x_169 = lean::box(0);
}
lean::inc(x_2);
x_170 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_170, 0, x_168);
lean::cnstr_set(x_170, 1, x_2);
x_171 = lean::box(3);
x_172 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_172, 0, x_171);
lean::cnstr_set(x_172, 1, x_170);
x_173 = l_List_reverse___rarg(x_172);
x_174 = l_Lean_Parser_noKind;
x_175 = l_Lean_Parser_Syntax_mkNode(x_174, x_173);
if (lean::is_scalar(x_169)) {
 x_176 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_176 = x_169;
}
lean::cnstr_set(x_176, 0, x_175);
x_177 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_177, 0, x_165);
lean::cnstr_set(x_177, 1, x_166);
lean::cnstr_set(x_177, 2, x_167);
lean::cnstr_set(x_177, 3, x_176);
if (x_141 == 0)
{
uint8 x_178; 
x_178 = 0;
lean::cnstr_set(x_90, 0, x_177);
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_178);
x_13 = x_90;
x_14 = x_139;
goto block_88;
}
else
{
uint8 x_179; 
x_179 = 1;
lean::cnstr_set(x_90, 0, x_177);
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_179);
x_13 = x_90;
x_14 = x_139;
goto block_88;
}
}
}
else
{
uint8 x_180; obj* x_181; obj* x_182; obj* x_183; obj* x_184; obj* x_185; obj* x_186; obj* x_187; obj* x_188; obj* x_189; obj* x_190; obj* x_191; obj* x_192; obj* x_193; obj* x_194; 
x_180 = lean::cnstr_get_scalar<uint8>(x_90, sizeof(void*)*1);
lean::dec(x_90);
x_181 = lean::cnstr_get(x_92, 0);
lean::inc(x_181);
x_182 = lean::cnstr_get(x_92, 1);
lean::inc(x_182);
x_183 = lean::cnstr_get(x_92, 2);
lean::inc(x_183);
if (lean::is_exclusive(x_92)) {
 lean::cnstr_release(x_92, 0);
 lean::cnstr_release(x_92, 1);
 lean::cnstr_release(x_92, 2);
 lean::cnstr_release(x_92, 3);
 x_184 = x_92;
} else {
 lean::dec_ref(x_92);
 x_184 = lean::box(0);
}
x_185 = lean::cnstr_get(x_93, 0);
lean::inc(x_185);
if (lean::is_exclusive(x_93)) {
 lean::cnstr_release(x_93, 0);
 x_186 = x_93;
} else {
 lean::dec_ref(x_93);
 x_186 = lean::box(0);
}
lean::inc(x_2);
x_187 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_187, 0, x_185);
lean::cnstr_set(x_187, 1, x_2);
x_188 = lean::box(3);
x_189 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_189, 0, x_188);
lean::cnstr_set(x_189, 1, x_187);
x_190 = l_List_reverse___rarg(x_189);
x_191 = l_Lean_Parser_noKind;
x_192 = l_Lean_Parser_Syntax_mkNode(x_191, x_190);
if (lean::is_scalar(x_186)) {
 x_193 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_193 = x_186;
}
lean::cnstr_set(x_193, 0, x_192);
if (lean::is_scalar(x_184)) {
 x_194 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_194 = x_184;
}
lean::cnstr_set(x_194, 0, x_181);
lean::cnstr_set(x_194, 1, x_182);
lean::cnstr_set(x_194, 2, x_183);
lean::cnstr_set(x_194, 3, x_193);
if (x_180 == 0)
{
uint8 x_195; obj* x_196; 
x_195 = 0;
x_196 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_196, 0, x_194);
lean::cnstr_set_scalar(x_196, sizeof(void*)*1, x_195);
x_13 = x_196;
x_14 = x_139;
goto block_88;
}
else
{
uint8 x_197; obj* x_198; 
x_197 = 1;
x_198 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_198, 0, x_194);
lean::cnstr_set_scalar(x_198, sizeof(void*)*1, x_197);
x_13 = x_198;
x_14 = x_139;
goto block_88;
}
}
}
}
block_88:
{
if (lean::obj_tag(x_13) == 0)
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_13);
if (x_15 == 0)
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_16 = lean::cnstr_get(x_13, 0);
x_17 = lean::cnstr_get(x_13, 1);
x_18 = lean::cnstr_get(x_13, 2);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_2);
lean::inc(x_19);
x_20 = l_List_reverse___rarg(x_19);
x_21 = l_Lean_Parser_noKind;
x_22 = l_Lean_Parser_Syntax_mkNode(x_21, x_20);
lean::inc(x_17);
x_23 = l___private_init_lean_parser_combinators_1__many1Aux___main___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__3(x_1, x_19, x_12, x_4, x_5, x_6, x_17, x_14);
lean::dec(x_12);
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
uint8 x_25; 
lean::dec(x_22);
lean::free_heap_obj(x_13);
lean::dec(x_17);
x_25 = !lean::is_exclusive(x_23);
if (x_25 == 0)
{
obj* x_26; obj* x_27; 
x_26 = lean::cnstr_get(x_23, 0);
lean::dec(x_26);
x_27 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_24);
lean::cnstr_set(x_23, 0, x_27);
return x_23;
}
else
{
obj* x_28; obj* x_29; obj* x_30; 
x_28 = lean::cnstr_get(x_23, 1);
lean::inc(x_28);
lean::dec(x_23);
x_29 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_24);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_28);
return x_30;
}
}
else
{
uint8 x_31; 
x_31 = lean::cnstr_get_scalar<uint8>(x_24, sizeof(void*)*1);
if (x_31 == 0)
{
uint8 x_32; 
x_32 = !lean::is_exclusive(x_23);
if (x_32 == 0)
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_33 = lean::cnstr_get(x_23, 0);
lean::dec(x_33);
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
lean::dec(x_24);
x_35 = lean::cnstr_get(x_34, 2);
lean::inc(x_35);
lean::dec(x_34);
x_36 = l_mjoin___rarg___closed__1;
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_comp___rarg), 3, 2);
lean::closure_set(x_37, 0, x_35);
lean::closure_set(x_37, 1, x_36);
x_38 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_13, 2, x_38);
lean::cnstr_set(x_13, 0, x_22);
x_39 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_13);
lean::cnstr_set(x_23, 0, x_39);
return x_23;
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_40 = lean::cnstr_get(x_23, 1);
lean::inc(x_40);
lean::dec(x_23);
x_41 = lean::cnstr_get(x_24, 0);
lean::inc(x_41);
lean::dec(x_24);
x_42 = lean::cnstr_get(x_41, 2);
lean::inc(x_42);
lean::dec(x_41);
x_43 = l_mjoin___rarg___closed__1;
x_44 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_comp___rarg), 3, 2);
lean::closure_set(x_44, 0, x_42);
lean::closure_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_13, 2, x_45);
lean::cnstr_set(x_13, 0, x_22);
x_46 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_13);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_40);
return x_47;
}
}
else
{
uint8 x_48; 
lean::dec(x_22);
lean::free_heap_obj(x_13);
lean::dec(x_17);
x_48 = !lean::is_exclusive(x_23);
if (x_48 == 0)
{
obj* x_49; obj* x_50; 
x_49 = lean::cnstr_get(x_23, 0);
lean::dec(x_49);
x_50 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_24);
lean::cnstr_set(x_23, 0, x_50);
return x_23;
}
else
{
obj* x_51; obj* x_52; obj* x_53; 
x_51 = lean::cnstr_get(x_23, 1);
lean::inc(x_51);
lean::dec(x_23);
x_52 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_24);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
return x_53;
}
}
}
}
else
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_54 = lean::cnstr_get(x_13, 0);
x_55 = lean::cnstr_get(x_13, 1);
x_56 = lean::cnstr_get(x_13, 2);
lean::inc(x_56);
lean::inc(x_55);
lean::inc(x_54);
lean::dec(x_13);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_54);
lean::cnstr_set(x_57, 1, x_2);
lean::inc(x_57);
x_58 = l_List_reverse___rarg(x_57);
x_59 = l_Lean_Parser_noKind;
x_60 = l_Lean_Parser_Syntax_mkNode(x_59, x_58);
lean::inc(x_55);
x_61 = l___private_init_lean_parser_combinators_1__many1Aux___main___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__3(x_1, x_57, x_12, x_4, x_5, x_6, x_55, x_14);
lean::dec(x_12);
x_62 = lean::cnstr_get(x_61, 0);
lean::inc(x_62);
if (lean::obj_tag(x_62) == 0)
{
obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
lean::dec(x_60);
lean::dec(x_55);
x_63 = lean::cnstr_get(x_61, 1);
lean::inc(x_63);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_64 = x_61;
} else {
 lean::dec_ref(x_61);
 x_64 = lean::box(0);
}
x_65 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_56, x_62);
if (lean::is_scalar(x_64)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_64;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_63);
return x_66;
}
else
{
uint8 x_67; 
x_67 = lean::cnstr_get_scalar<uint8>(x_62, sizeof(void*)*1);
if (x_67 == 0)
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
x_68 = lean::cnstr_get(x_61, 1);
lean::inc(x_68);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_69 = x_61;
} else {
 lean::dec_ref(x_61);
 x_69 = lean::box(0);
}
x_70 = lean::cnstr_get(x_62, 0);
lean::inc(x_70);
lean::dec(x_62);
x_71 = lean::cnstr_get(x_70, 2);
lean::inc(x_71);
lean::dec(x_70);
x_72 = l_mjoin___rarg___closed__1;
x_73 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_comp___rarg), 3, 2);
lean::closure_set(x_73, 0, x_71);
lean::closure_set(x_73, 1, x_72);
x_74 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_74, 0, x_73);
x_75 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_75, 0, x_60);
lean::cnstr_set(x_75, 1, x_55);
lean::cnstr_set(x_75, 2, x_74);
x_76 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_56, x_75);
if (lean::is_scalar(x_69)) {
 x_77 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_77 = x_69;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_68);
return x_77;
}
else
{
obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
lean::dec(x_60);
lean::dec(x_55);
x_78 = lean::cnstr_get(x_61, 1);
lean::inc(x_78);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_79 = x_61;
} else {
 lean::dec_ref(x_61);
 x_79 = lean::box(0);
}
x_80 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_56, x_62);
if (lean::is_scalar(x_79)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_79;
}
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_78);
return x_81;
}
}
}
}
else
{
uint8 x_82; 
lean::dec(x_12);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
x_82 = !lean::is_exclusive(x_13);
if (x_82 == 0)
{
obj* x_83; 
x_83 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_83, 0, x_13);
lean::cnstr_set(x_83, 1, x_14);
return x_83;
}
else
{
obj* x_84; uint8 x_85; obj* x_86; obj* x_87; 
x_84 = lean::cnstr_get(x_13, 0);
x_85 = lean::cnstr_get_scalar<uint8>(x_13, sizeof(void*)*1);
lean::inc(x_84);
lean::dec(x_13);
x_86 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_86, 0, x_84);
lean::cnstr_set_scalar(x_86, sizeof(void*)*1, x_85);
x_87 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_87, 0, x_86);
lean::cnstr_set(x_87, 1, x_14);
return x_87;
}
}
}
}
else
{
obj* x_199; obj* x_200; obj* x_201; obj* x_202; 
lean::dec(x_2);
lean::dec(x_1);
x_199 = lean::box(0);
x_200 = l___private_init_lean_parser_combinators_1__many1Aux___main___rarg___closed__1;
x_201 = l_mjoin___rarg___closed__1;
x_202 = l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__4___rarg(x_200, x_201, x_199, x_199, x_4, x_5, x_6, x_7, x_8);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
return x_202;
}
}
}
obj* l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; uint8 x_12; 
x_7 = l_String_OldIterator_remaining___main(x_5);
x_8 = lean::box(0);
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_add(x_7, x_9);
lean::dec(x_7);
x_11 = l___private_init_lean_parser_combinators_1__many1Aux___main___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__3(x_1, x_8, x_10, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_10);
x_12 = !lean::is_exclusive(x_11);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; 
x_13 = lean::cnstr_get(x_11, 0);
x_14 = l_Lean_Parser_finishCommentBlock___closed__2;
x_15 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_14, x_13);
lean::cnstr_set(x_11, 0, x_15);
return x_11;
}
else
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_16 = lean::cnstr_get(x_11, 0);
x_17 = lean::cnstr_get(x_11, 1);
lean::inc(x_17);
lean::inc(x_16);
lean::dec(x_11);
x_18 = l_Lean_Parser_finishCommentBlock___closed__2;
x_19 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_18, x_16);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_17);
return x_20;
}
}
}
obj* l_Lean_Parser_Combinators_many___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; 
lean::inc(x_5);
x_7 = l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
uint8 x_9; 
lean::dec(x_5);
x_9 = !lean::is_exclusive(x_7);
if (x_9 == 0)
{
obj* x_10; 
x_10 = lean::cnstr_get(x_7, 0);
lean::dec(x_10);
return x_7;
}
else
{
obj* x_11; obj* x_12; 
x_11 = lean::cnstr_get(x_7, 1);
lean::inc(x_11);
lean::dec(x_7);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
else
{
uint8 x_13; 
x_13 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (x_13 == 0)
{
uint8 x_14; 
x_14 = !lean::is_exclusive(x_7);
if (x_14 == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_15 = lean::cnstr_get(x_7, 0);
lean::dec(x_15);
x_16 = lean::cnstr_get(x_8, 0);
lean::inc(x_16);
lean::dec(x_8);
x_17 = lean::cnstr_get(x_16, 2);
lean::inc(x_17);
lean::dec(x_16);
x_18 = l_mjoin___rarg___closed__1;
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_comp___rarg), 3, 2);
lean::closure_set(x_19, 0, x_17);
lean::closure_set(x_19, 1, x_18);
x_20 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_20, 0, x_19);
x_21 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_22 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_5);
lean::cnstr_set(x_22, 2, x_20);
lean::cnstr_set(x_7, 0, x_22);
return x_7;
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_23 = lean::cnstr_get(x_7, 1);
lean::inc(x_23);
lean::dec(x_7);
x_24 = lean::cnstr_get(x_8, 0);
lean::inc(x_24);
lean::dec(x_8);
x_25 = lean::cnstr_get(x_24, 2);
lean::inc(x_25);
lean::dec(x_24);
x_26 = l_mjoin___rarg___closed__1;
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_comp___rarg), 3, 2);
lean::closure_set(x_27, 0, x_25);
lean::closure_set(x_27, 1, x_26);
x_28 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
x_29 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_30 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_5);
lean::cnstr_set(x_30, 2, x_28);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_23);
return x_31;
}
}
else
{
uint8 x_32; 
lean::dec(x_5);
x_32 = !lean::is_exclusive(x_7);
if (x_32 == 0)
{
obj* x_33; 
x_33 = lean::cnstr_get(x_7, 0);
lean::dec(x_33);
return x_7;
}
else
{
obj* x_34; obj* x_35; 
x_34 = lean::cnstr_get(x_7, 1);
lean::inc(x_34);
lean::dec(x_7);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_8);
lean::cnstr_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_tokens___rarg(x_1);
x_3 = l_Lean_Parser_command_NotationSpec_rule_Parser_Lean_Parser_HasTokens;
x_4 = l_Lean_Parser_tokens___rarg(x_3);
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_1);
lean::dec(x_4);
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_5);
lean::dec(x_5);
lean::dec(x_2);
x_7 = l_Lean_Parser_tokens___rarg(x_6);
lean::dec(x_6);
return x_7;
}
}
obj* l___private_init_lean_parser_combinators_1__many1Aux___main___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__3___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; 
x_9 = l___private_init_lean_parser_combinators_1__many1Aux___main___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean::dec(x_3);
return x_9;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; uint8 x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___boxed), 1, 0);
x_2 = 0;
x_3 = lean::box(x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_4, 0, x_1);
lean::closure_set(x_4, 1, x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_rule_Parser), 5, 0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__1), 6, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_4);
lean::cnstr_set(x_9, 1, x_8);
x_10 = l_Lean_Parser_TermParserM_Monad;
x_11 = l_Lean_Parser_TermParserM_MonadExcept;
x_12 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_13 = l_Lean_Parser_TermParserM_Alternative;
x_14 = l_Lean_Parser_command_NotationSpec;
x_15 = l_Lean_Parser_command_NotationSpec_HasView;
x_16 = l_Lean_Parser_Combinators_node_view___rarg(x_10, x_11, x_12, x_13, x_14, x_9, x_15);
lean::dec(x_9);
return x_16;
}
}
obj* _init_l_Lean_Parser_command_NotationSpec_Parser___closed__1() {
_start:
{
obj* x_1; uint8 x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___boxed), 1, 0);
x_2 = 0;
x_3 = lean::box(x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_4, 0, x_1);
lean::closure_set(x_4, 1, x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_rule_Parser), 5, 0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many___at_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens___spec__1), 6, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_4);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
obj* l_Lean_Parser_command_NotationSpec_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_NotationSpec;
x_7 = l_Lean_Parser_command_NotationSpec_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_notation() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("notation");
x_9 = lean_name_mk_string(x_7, x_8);
return x_9;
}
}
obj* _init_l_Lean_Parser_command_notation_HasView_x27___elambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = lean::box(0);
x_2 = lean::box(3);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = l_Lean_Parser_noKind;
x_5 = l_Lean_Parser_Syntax_mkNode(x_4, x_3);
return x_5;
}
}
obj* l_Lean_Parser_command_notation_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_31; obj* x_32; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_1, 2);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_1, 3);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_1, 4);
lean::inc(x_6);
lean::dec(x_1);
x_7 = lean::box(0);
x_8 = l_Lean_Parser_command_NotationSpec_HasView;
x_9 = lean::cnstr_get(x_8, 1);
lean::inc(x_9);
x_10 = lean::apply_1(x_9, x_4);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_6);
lean::cnstr_set(x_11, 1, x_7);
if (lean::obj_tag(x_2) == 0)
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_52; 
x_52 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_12 = x_52;
goto block_30;
}
else
{
obj* x_53; obj* x_54; 
x_53 = lean::cnstr_get(x_3, 0);
lean::inc(x_53);
lean::dec(x_3);
x_54 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_31 = x_54;
x_32 = x_53;
goto block_51;
}
}
else
{
obj* x_55; 
x_55 = lean::cnstr_get(x_2, 0);
lean::inc(x_55);
lean::dec(x_2);
if (lean::obj_tag(x_55) == 0)
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_56; 
x_56 = l_Lean_Parser_command_notation_HasView_x27___elambda__1___closed__1;
x_12 = x_56;
goto block_30;
}
else
{
obj* x_57; obj* x_58; 
x_57 = lean::cnstr_get(x_3, 0);
lean::inc(x_57);
lean::dec(x_3);
x_58 = l_Lean_Parser_command_notation_HasView_x27___elambda__1___closed__1;
x_31 = x_58;
x_32 = x_57;
goto block_51;
}
}
else
{
obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_59 = lean::cnstr_get(x_55, 0);
lean::inc(x_59);
lean::dec(x_55);
x_60 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_60, 0, x_59);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_7);
x_62 = l_Lean_Parser_noKind;
x_63 = l_Lean_Parser_Syntax_mkNode(x_62, x_61);
if (lean::obj_tag(x_3) == 0)
{
x_12 = x_63;
goto block_30;
}
else
{
obj* x_64; 
x_64 = lean::cnstr_get(x_3, 0);
lean::inc(x_64);
lean::dec(x_3);
x_31 = x_63;
x_32 = x_64;
goto block_51;
}
}
}
block_30:
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_13 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_noKind;
x_16 = l_Lean_Parser_Syntax_mkNode(x_15, x_14);
if (lean::obj_tag(x_5) == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_17 = lean::box(3);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_11);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_10);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_16);
lean::cnstr_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_command_notation;
x_22 = l_Lean_Parser_Syntax_mkNode(x_21, x_20);
return x_22;
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_23 = lean::cnstr_get(x_5, 0);
lean::inc(x_23);
lean::dec(x_5);
x_24 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_11);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_10);
lean::cnstr_set(x_26, 1, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_16);
lean::cnstr_set(x_27, 1, x_26);
x_28 = l_Lean_Parser_command_notation;
x_29 = l_Lean_Parser_Syntax_mkNode(x_28, x_27);
return x_29;
}
}
block_51:
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_33 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_33, 0, x_32);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_7);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_31);
lean::cnstr_set(x_35, 1, x_34);
x_36 = l_Lean_Parser_noKind;
x_37 = l_Lean_Parser_Syntax_mkNode(x_36, x_35);
if (lean::obj_tag(x_5) == 0)
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_38 = lean::box(3);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_11);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_10);
lean::cnstr_set(x_40, 1, x_39);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_37);
lean::cnstr_set(x_41, 1, x_40);
x_42 = l_Lean_Parser_command_notation;
x_43 = l_Lean_Parser_Syntax_mkNode(x_42, x_41);
return x_43;
}
else
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
x_44 = lean::cnstr_get(x_5, 0);
lean::inc(x_44);
lean::dec(x_5);
x_45 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_45, 0, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_11);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_10);
lean::cnstr_set(x_47, 1, x_46);
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_37);
lean::cnstr_set(x_48, 1, x_47);
x_49 = l_Lean_Parser_command_notation;
x_50 = l_Lean_Parser_Syntax_mkNode(x_49, x_48);
return x_50;
}
}
}
}
obj* _init_l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_9; obj* x_10; 
x_9 = lean::box(3);
x_10 = l_Lean_Parser_Syntax_asNode___main(x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; 
x_11 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_1 = x_11;
goto block_8;
}
else
{
uint8 x_12; 
x_12 = !lean::is_exclusive(x_10);
if (x_12 == 0)
{
obj* x_13; obj* x_14; 
x_13 = lean::cnstr_get(x_10, 0);
x_14 = lean::cnstr_get(x_13, 1);
lean::inc(x_14);
lean::dec(x_13);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; 
lean::free_heap_obj(x_10);
x_15 = lean::box(0);
x_1 = x_15;
goto block_8;
}
else
{
obj* x_16; 
x_16 = lean::cnstr_get(x_14, 1);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; 
x_17 = lean::cnstr_get(x_14, 0);
lean::inc(x_17);
lean::dec(x_14);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_17, 0);
lean::inc(x_18);
lean::dec(x_17);
lean::cnstr_set(x_10, 0, x_18);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_10);
x_1 = x_19;
goto block_8;
}
else
{
obj* x_20; 
lean::dec(x_17);
lean::free_heap_obj(x_10);
x_20 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_1 = x_20;
goto block_8;
}
}
else
{
obj* x_21; 
lean::dec(x_16);
lean::dec(x_14);
lean::free_heap_obj(x_10);
x_21 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_1 = x_21;
goto block_8;
}
}
}
else
{
obj* x_22; obj* x_23; 
x_22 = lean::cnstr_get(x_10, 0);
lean::inc(x_22);
lean::dec(x_10);
x_23 = lean::cnstr_get(x_22, 1);
lean::inc(x_23);
lean::dec(x_22);
if (lean::obj_tag(x_23) == 0)
{
obj* x_24; 
x_24 = lean::box(0);
x_1 = x_24;
goto block_8;
}
else
{
obj* x_25; 
x_25 = lean::cnstr_get(x_23, 1);
lean::inc(x_25);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; 
x_26 = lean::cnstr_get(x_23, 0);
lean::inc(x_26);
lean::dec(x_23);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; obj* x_29; 
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
lean::dec(x_26);
x_28 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
x_1 = x_29;
goto block_8;
}
else
{
obj* x_30; 
lean::dec(x_26);
x_30 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_1 = x_30;
goto block_8;
}
}
else
{
obj* x_31; 
lean::dec(x_25);
lean::dec(x_23);
x_31 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_1 = x_31;
goto block_8;
}
}
}
}
block_8:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_2 = lean::box(0);
x_3 = l_Lean_Parser_command_NotationSpec_HasView;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::box(3);
x_6 = lean::apply_1(x_4, x_5);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_1);
lean::cnstr_set(x_7, 1, x_2);
lean::cnstr_set(x_7, 2, x_6);
lean::cnstr_set(x_7, 3, x_2);
lean::cnstr_set(x_7, 4, x_5);
return x_7;
}
}
}
obj* l_Lean_Parser_command_notation_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_66; 
x_66 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_66) == 0)
{
obj* x_67; 
x_67 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__2;
return x_67;
}
else
{
obj* x_68; obj* x_69; 
x_68 = lean::cnstr_get(x_66, 0);
lean::inc(x_68);
lean::dec(x_66);
x_69 = lean::cnstr_get(x_68, 1);
lean::inc(x_69);
lean::dec(x_68);
if (lean::obj_tag(x_69) == 0)
{
obj* x_70; 
x_70 = lean::box(3);
x_2 = x_69;
x_3 = x_70;
goto block_65;
}
else
{
obj* x_71; obj* x_72; obj* x_73; 
x_71 = lean::cnstr_get(x_69, 0);
lean::inc(x_71);
x_72 = lean::cnstr_get(x_69, 1);
lean::inc(x_72);
lean::dec(x_69);
x_73 = l_Lean_Parser_Syntax_asNode___main(x_71);
if (lean::obj_tag(x_73) == 0)
{
if (lean::obj_tag(x_72) == 0)
{
obj* x_74; 
x_74 = lean::box(3);
x_2 = x_72;
x_3 = x_74;
goto block_65;
}
else
{
obj* x_75; obj* x_76; 
x_75 = lean::cnstr_get(x_72, 0);
lean::inc(x_75);
x_76 = lean::cnstr_get(x_72, 1);
lean::inc(x_76);
lean::dec(x_72);
x_2 = x_76;
x_3 = x_75;
goto block_65;
}
}
else
{
obj* x_77; obj* x_78; obj* x_79; 
x_77 = lean::cnstr_get(x_73, 0);
lean::inc(x_77);
lean::dec(x_73);
x_78 = lean::cnstr_get(x_77, 1);
lean::inc(x_78);
lean::dec(x_77);
x_79 = l_List_append___rarg(x_78, x_72);
if (lean::obj_tag(x_79) == 0)
{
obj* x_80; 
x_80 = lean::box(3);
x_2 = x_79;
x_3 = x_80;
goto block_65;
}
else
{
obj* x_81; obj* x_82; 
x_81 = lean::cnstr_get(x_79, 0);
lean::inc(x_81);
x_82 = lean::cnstr_get(x_79, 1);
lean::inc(x_82);
lean::dec(x_79);
x_2 = x_82;
x_3 = x_81;
goto block_65;
}
}
}
}
block_65:
{
obj* x_4; obj* x_43; 
x_43 = l_Lean_Parser_Syntax_asNode___main(x_3);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; 
x_44 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_4 = x_44;
goto block_42;
}
else
{
uint8 x_45; 
x_45 = !lean::is_exclusive(x_43);
if (x_45 == 0)
{
obj* x_46; obj* x_47; 
x_46 = lean::cnstr_get(x_43, 0);
x_47 = lean::cnstr_get(x_46, 1);
lean::inc(x_47);
lean::dec(x_46);
if (lean::obj_tag(x_47) == 0)
{
obj* x_48; 
lean::free_heap_obj(x_43);
x_48 = lean::box(0);
x_4 = x_48;
goto block_42;
}
else
{
obj* x_49; 
x_49 = lean::cnstr_get(x_47, 1);
lean::inc(x_49);
if (lean::obj_tag(x_49) == 0)
{
obj* x_50; 
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
lean::dec(x_47);
if (lean::obj_tag(x_50) == 0)
{
obj* x_51; obj* x_52; 
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
lean::dec(x_50);
lean::cnstr_set(x_43, 0, x_51);
x_52 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_52, 0, x_43);
x_4 = x_52;
goto block_42;
}
else
{
obj* x_53; 
lean::dec(x_50);
lean::free_heap_obj(x_43);
x_53 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_4 = x_53;
goto block_42;
}
}
else
{
obj* x_54; 
lean::dec(x_49);
lean::dec(x_47);
lean::free_heap_obj(x_43);
x_54 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_4 = x_54;
goto block_42;
}
}
}
else
{
obj* x_55; obj* x_56; 
x_55 = lean::cnstr_get(x_43, 0);
lean::inc(x_55);
lean::dec(x_43);
x_56 = lean::cnstr_get(x_55, 1);
lean::inc(x_56);
lean::dec(x_55);
if (lean::obj_tag(x_56) == 0)
{
obj* x_57; 
x_57 = lean::box(0);
x_4 = x_57;
goto block_42;
}
else
{
obj* x_58; 
x_58 = lean::cnstr_get(x_56, 1);
lean::inc(x_58);
if (lean::obj_tag(x_58) == 0)
{
obj* x_59; 
x_59 = lean::cnstr_get(x_56, 0);
lean::inc(x_59);
lean::dec(x_56);
if (lean::obj_tag(x_59) == 0)
{
obj* x_60; obj* x_61; obj* x_62; 
x_60 = lean::cnstr_get(x_59, 0);
lean::inc(x_60);
lean::dec(x_59);
x_61 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_61, 0, x_60);
x_62 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_62, 0, x_61);
x_4 = x_62;
goto block_42;
}
else
{
obj* x_63; 
lean::dec(x_59);
x_63 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_4 = x_63;
goto block_42;
}
}
else
{
obj* x_64; 
lean::dec(x_58);
lean::dec(x_56);
x_64 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_4 = x_64;
goto block_42;
}
}
}
}
block_42:
{
obj* x_5; obj* x_6; 
if (lean::obj_tag(x_2) == 0)
{
obj* x_39; 
x_39 = lean::box(3);
x_5 = x_2;
x_6 = x_39;
goto block_38;
}
else
{
obj* x_40; obj* x_41; 
x_40 = lean::cnstr_get(x_2, 0);
lean::inc(x_40);
x_41 = lean::cnstr_get(x_2, 1);
lean::inc(x_41);
lean::dec(x_2);
x_5 = x_41;
x_6 = x_40;
goto block_38;
}
block_38:
{
obj* x_7; 
if (lean::obj_tag(x_6) == 0)
{
obj* x_35; obj* x_36; 
x_35 = lean::cnstr_get(x_6, 0);
lean::inc(x_35);
lean::dec(x_6);
x_36 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_36, 0, x_35);
x_7 = x_36;
goto block_34;
}
else
{
obj* x_37; 
lean::dec(x_6);
x_37 = lean::box(0);
x_7 = x_37;
goto block_34;
}
block_34:
{
obj* x_8; obj* x_9; 
if (lean::obj_tag(x_5) == 0)
{
obj* x_31; 
x_31 = lean::box(3);
x_8 = x_5;
x_9 = x_31;
goto block_30;
}
else
{
obj* x_32; obj* x_33; 
x_32 = lean::cnstr_get(x_5, 0);
lean::inc(x_32);
x_33 = lean::cnstr_get(x_5, 1);
lean::inc(x_33);
lean::dec(x_5);
x_8 = x_33;
x_9 = x_32;
goto block_30;
}
block_30:
{
obj* x_10; obj* x_11; obj* x_12; 
x_10 = l_Lean_Parser_command_NotationSpec_HasView;
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_12 = lean::apply_1(x_11, x_9);
if (lean::obj_tag(x_8) == 0)
{
obj* x_13; obj* x_14; obj* x_15; 
x_13 = lean::box(0);
x_14 = lean::box(3);
x_15 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_15, 0, x_4);
lean::cnstr_set(x_15, 1, x_7);
lean::cnstr_set(x_15, 2, x_12);
lean::cnstr_set(x_15, 3, x_13);
lean::cnstr_set(x_15, 4, x_14);
return x_15;
}
else
{
obj* x_16; 
x_16 = lean::cnstr_get(x_8, 0);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::cnstr_get(x_8, 1);
lean::inc(x_17);
lean::dec(x_8);
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
lean::dec(x_16);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
if (lean::obj_tag(x_17) == 0)
{
obj* x_20; obj* x_21; 
x_20 = lean::box(3);
x_21 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_21, 0, x_4);
lean::cnstr_set(x_21, 1, x_7);
lean::cnstr_set(x_21, 2, x_12);
lean::cnstr_set(x_21, 3, x_19);
lean::cnstr_set(x_21, 4, x_20);
return x_21;
}
else
{
obj* x_22; obj* x_23; 
x_22 = lean::cnstr_get(x_17, 0);
lean::inc(x_22);
lean::dec(x_17);
x_23 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_23, 0, x_4);
lean::cnstr_set(x_23, 1, x_7);
lean::cnstr_set(x_23, 2, x_12);
lean::cnstr_set(x_23, 3, x_19);
lean::cnstr_set(x_23, 4, x_22);
return x_23;
}
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_16);
x_24 = lean::cnstr_get(x_8, 1);
lean::inc(x_24);
lean::dec(x_8);
x_25 = lean::box(0);
if (lean::obj_tag(x_24) == 0)
{
obj* x_26; obj* x_27; 
x_26 = lean::box(3);
x_27 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_27, 0, x_4);
lean::cnstr_set(x_27, 1, x_7);
lean::cnstr_set(x_27, 2, x_12);
lean::cnstr_set(x_27, 3, x_25);
lean::cnstr_set(x_27, 4, x_26);
return x_27;
}
else
{
obj* x_28; obj* x_29; 
x_28 = lean::cnstr_get(x_24, 0);
lean::inc(x_28);
lean::dec(x_24);
x_29 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_29, 0, x_4);
lean::cnstr_set(x_29, 1, x_7);
lean::cnstr_set(x_29, 2, x_12);
lean::cnstr_set(x_29, 3, x_25);
lean::cnstr_set(x_29, 4, x_28);
return x_29;
}
}
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_notation_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_notation_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_notation_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_notation_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_notation_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_notation_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_1 = lean::mk_string("local ");
x_2 = lean::mk_nat_obj(0u);
x_3 = l_Lean_Parser_symbol_tokens___rarg(x_1, x_2);
lean::dec(x_1);
x_4 = l_Lean_Parser_tokens___rarg(x_3);
lean::dec(x_3);
x_5 = lean::mk_string("notation");
x_6 = l_Lean_Parser_symbol_tokens___rarg(x_5, x_2);
lean::dec(x_5);
x_7 = lean::box(0);
x_8 = l_Lean_Parser_List_cons_tokens___rarg(x_6, x_7);
lean::dec(x_6);
x_9 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_8);
lean::dec(x_8);
lean::dec(x_4);
x_10 = l_Lean_Parser_tokens___rarg(x_9);
lean::dec(x_9);
x_11 = l_Lean_Parser_tokens___rarg(x_10);
lean::dec(x_10);
x_12 = lean::mk_string(":=");
x_13 = l_Lean_Parser_symbol_tokens___rarg(x_12, x_2);
lean::dec(x_12);
x_14 = l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens(x_2);
x_15 = l_Lean_Parser_List_cons_tokens___rarg(x_14, x_7);
lean::dec(x_14);
x_16 = l_Lean_Parser_List_cons_tokens___rarg(x_13, x_15);
lean::dec(x_15);
lean::dec(x_13);
x_17 = l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens;
x_18 = l_Lean_Parser_List_cons_tokens___rarg(x_17, x_16);
lean::dec(x_16);
x_19 = l_Lean_Parser_List_cons_tokens___rarg(x_11, x_18);
lean::dec(x_18);
lean::dec(x_11);
x_20 = l_Lean_Parser_tokens___rarg(x_19);
lean::dec(x_19);
return x_20;
}
}
obj* _init_l_Lean_Parser_command_notation_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; uint8 x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_1 = lean::mk_string("local ");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = 0;
x_7 = lean::box(x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
x_9 = lean::mk_string("notation");
x_10 = l_String_trim(x_9);
lean::dec(x_9);
lean::inc(x_10);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_12, 0, x_10);
lean::closure_set(x_12, 1, x_4);
lean::closure_set(x_12, 2, x_11);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_8);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2), 6, 1);
lean::closure_set(x_16, 0, x_15);
x_17 = lean::mk_string(":=");
x_18 = l_String_trim(x_17);
lean::dec(x_17);
lean::inc(x_18);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_19, 0, x_18);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_20, 0, x_18);
lean::closure_set(x_20, 1, x_4);
lean::closure_set(x_20, 2, x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_21, 0, x_4);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_13);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_Parser), 5, 0);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_23);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_16);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_Lean_Parser_TermParserM_Monad;
x_28 = l_Lean_Parser_TermParserM_MonadExcept;
x_29 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_30 = l_Lean_Parser_TermParserM_Alternative;
x_31 = l_Lean_Parser_command_notation;
x_32 = l_Lean_Parser_command_notation_HasView;
x_33 = l_Lean_Parser_Combinators_node_view___rarg(x_27, x_28, x_29, x_30, x_31, x_26, x_32);
lean::dec(x_26);
return x_33;
}
}
obj* _init_l_Lean_Parser_command_notation_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; uint8 x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_1 = lean::mk_string("local ");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = 0;
x_7 = lean::box(x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
x_9 = lean::mk_string("notation");
x_10 = l_String_trim(x_9);
lean::dec(x_9);
lean::inc(x_10);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_12, 0, x_10);
lean::closure_set(x_12, 1, x_4);
lean::closure_set(x_12, 2, x_11);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_8);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2), 6, 1);
lean::closure_set(x_16, 0, x_15);
x_17 = lean::mk_string(":=");
x_18 = l_String_trim(x_17);
lean::dec(x_17);
lean::inc(x_18);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_19, 0, x_18);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_20, 0, x_18);
lean::closure_set(x_20, 1, x_4);
lean::closure_set(x_20, 2, x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_21, 0, x_4);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_13);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_Parser), 5, 0);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_23);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_16);
lean::cnstr_set(x_26, 1, x_25);
return x_26;
}
}
obj* l_Lean_Parser_command_notation_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_notation;
x_7 = l_Lean_Parser_command_notation_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_reserveNotation() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("reserveNotation");
x_9 = lean_name_mk_string(x_7, x_8);
return x_9;
}
}
obj* _init_l_Lean_Parser_command_reserveNotation_HasView_x27___elambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = lean::box(0);
x_2 = lean::box(3);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = l_Lean_Parser_noKind;
x_6 = l_Lean_Parser_Syntax_mkNode(x_5, x_4);
return x_6;
}
}
obj* l_Lean_Parser_command_reserveNotation_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_1, 2);
lean::inc(x_4);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = l_Lean_Parser_command_NotationSpec_HasView;
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
x_8 = lean::apply_1(x_7, x_4);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_5);
if (lean::obj_tag(x_2) == 0)
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_10 = l_Lean_Parser_command_reserveNotation_HasView_x27___elambda__1___closed__1;
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
x_12 = l_Lean_Parser_command_reserveNotation;
x_13 = l_Lean_Parser_Syntax_mkNode(x_12, x_11);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_14 = lean::cnstr_get(x_3, 0);
lean::inc(x_14);
lean::dec(x_3);
x_15 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_5);
x_17 = lean::box(3);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_16);
x_19 = l_Lean_Parser_noKind;
x_20 = l_Lean_Parser_Syntax_mkNode(x_19, x_18);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_9);
x_22 = l_Lean_Parser_command_reserveNotation;
x_23 = l_Lean_Parser_Syntax_mkNode(x_22, x_21);
return x_23;
}
}
else
{
obj* x_24; obj* x_25; 
x_24 = lean::cnstr_get(x_2, 0);
lean::inc(x_24);
lean::dec(x_2);
x_25 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_25, 0, x_24);
if (lean::obj_tag(x_3) == 0)
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_26 = l_Lean_Parser_detailIdentPartEscaped_HasView_x27___elambda__1___closed__2;
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_25);
lean::cnstr_set(x_27, 1, x_26);
x_28 = l_Lean_Parser_noKind;
x_29 = l_Lean_Parser_Syntax_mkNode(x_28, x_27);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_9);
x_31 = l_Lean_Parser_command_reserveNotation;
x_32 = l_Lean_Parser_Syntax_mkNode(x_31, x_30);
return x_32;
}
else
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_33 = lean::cnstr_get(x_3, 0);
lean::inc(x_33);
lean::dec(x_3);
x_34 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_34, 0, x_33);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_5);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_25);
lean::cnstr_set(x_36, 1, x_35);
x_37 = l_Lean_Parser_noKind;
x_38 = l_Lean_Parser_Syntax_mkNode(x_37, x_36);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_9);
x_40 = l_Lean_Parser_command_reserveNotation;
x_41 = l_Lean_Parser_Syntax_mkNode(x_40, x_39);
return x_41;
}
}
}
}
obj* _init_l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_command_NotationSpec_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__1;
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_33; 
x_33 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; 
x_34 = l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__2;
return x_34;
}
else
{
obj* x_35; obj* x_36; 
x_35 = lean::cnstr_get(x_33, 0);
lean::inc(x_35);
lean::dec(x_33);
x_36 = lean::cnstr_get(x_35, 1);
lean::inc(x_36);
lean::dec(x_35);
if (lean::obj_tag(x_36) == 0)
{
obj* x_37; 
x_37 = lean::box(3);
x_2 = x_36;
x_3 = x_37;
goto block_32;
}
else
{
obj* x_38; obj* x_39; obj* x_40; 
x_38 = lean::cnstr_get(x_36, 0);
lean::inc(x_38);
x_39 = lean::cnstr_get(x_36, 1);
lean::inc(x_39);
lean::dec(x_36);
x_40 = l_Lean_Parser_Syntax_asNode___main(x_38);
if (lean::obj_tag(x_40) == 0)
{
if (lean::obj_tag(x_39) == 0)
{
obj* x_41; 
x_41 = lean::box(3);
x_2 = x_39;
x_3 = x_41;
goto block_32;
}
else
{
obj* x_42; obj* x_43; 
x_42 = lean::cnstr_get(x_39, 0);
lean::inc(x_42);
x_43 = lean::cnstr_get(x_39, 1);
lean::inc(x_43);
lean::dec(x_39);
x_2 = x_43;
x_3 = x_42;
goto block_32;
}
}
else
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
lean::dec(x_40);
x_45 = lean::cnstr_get(x_44, 1);
lean::inc(x_45);
lean::dec(x_44);
x_46 = l_List_append___rarg(x_45, x_39);
if (lean::obj_tag(x_46) == 0)
{
obj* x_47; 
x_47 = lean::box(3);
x_2 = x_46;
x_3 = x_47;
goto block_32;
}
else
{
obj* x_48; obj* x_49; 
x_48 = lean::cnstr_get(x_46, 0);
lean::inc(x_48);
x_49 = lean::cnstr_get(x_46, 1);
lean::inc(x_49);
lean::dec(x_46);
x_2 = x_49;
x_3 = x_48;
goto block_32;
}
}
}
}
block_32:
{
obj* x_4; 
if (lean::obj_tag(x_3) == 0)
{
obj* x_29; obj* x_30; 
x_29 = lean::cnstr_get(x_3, 0);
lean::inc(x_29);
lean::dec(x_3);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_29);
x_4 = x_30;
goto block_28;
}
else
{
obj* x_31; 
lean::dec(x_3);
x_31 = lean::box(0);
x_4 = x_31;
goto block_28;
}
block_28:
{
obj* x_5; obj* x_6; 
if (lean::obj_tag(x_2) == 0)
{
obj* x_25; 
x_25 = lean::box(3);
x_5 = x_2;
x_6 = x_25;
goto block_24;
}
else
{
obj* x_26; obj* x_27; 
x_26 = lean::cnstr_get(x_2, 0);
lean::inc(x_26);
x_27 = lean::cnstr_get(x_2, 1);
lean::inc(x_27);
lean::dec(x_2);
x_5 = x_27;
x_6 = x_26;
goto block_24;
}
block_24:
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
lean::dec(x_6);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
if (lean::obj_tag(x_5) == 0)
{
obj* x_9; obj* x_10; 
x_9 = l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__1;
x_10 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_10, 0, x_4);
lean::cnstr_set(x_10, 1, x_8);
lean::cnstr_set(x_10, 2, x_9);
return x_10;
}
else
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_11 = lean::cnstr_get(x_5, 0);
lean::inc(x_11);
lean::dec(x_5);
x_12 = l_Lean_Parser_command_NotationSpec_HasView;
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_14 = lean::apply_1(x_13, x_11);
x_15 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_15, 0, x_4);
lean::cnstr_set(x_15, 1, x_8);
lean::cnstr_set(x_15, 2, x_14);
return x_15;
}
}
else
{
obj* x_16; 
lean::dec(x_6);
x_16 = lean::box(0);
if (lean::obj_tag(x_5) == 0)
{
obj* x_17; obj* x_18; 
x_17 = l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__1;
x_18 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_18, 0, x_4);
lean::cnstr_set(x_18, 1, x_16);
lean::cnstr_set(x_18, 2, x_17);
return x_18;
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_19 = lean::cnstr_get(x_5, 0);
lean::inc(x_19);
lean::dec(x_5);
x_20 = l_Lean_Parser_command_NotationSpec_HasView;
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
x_22 = lean::apply_1(x_21, x_19);
x_23 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_23, 0, x_4);
lean::cnstr_set(x_23, 1, x_16);
lean::cnstr_set(x_23, 2, x_22);
return x_23;
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_reserveNotation_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_reserveNotation_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_reserveNotation_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_reserveNotation_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_1 = lean::mk_string("reserve");
x_2 = lean::mk_nat_obj(0u);
x_3 = l_Lean_Parser_symbol_tokens___rarg(x_1, x_2);
lean::dec(x_1);
x_4 = lean::mk_string("notation");
x_5 = l_Lean_Parser_symbol_tokens___rarg(x_4, x_2);
lean::dec(x_4);
x_6 = lean::box(0);
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_6);
lean::dec(x_5);
x_8 = l_Lean_Parser_List_cons_tokens___rarg(x_3, x_7);
lean::dec(x_7);
lean::dec(x_3);
x_9 = l_Lean_Parser_tokens___rarg(x_8);
lean::dec(x_8);
x_10 = l_Lean_Parser_tokens___rarg(x_9);
lean::dec(x_9);
x_11 = l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens;
x_12 = l_Lean_Parser_List_cons_tokens___rarg(x_11, x_6);
x_13 = l_Lean_Parser_List_cons_tokens___rarg(x_10, x_12);
lean::dec(x_12);
lean::dec(x_10);
x_14 = l_Lean_Parser_tokens___rarg(x_13);
lean::dec(x_13);
return x_14;
}
}
obj* _init_l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_1 = lean::mk_string("reserve");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("notation");
x_7 = l_String_trim(x_6);
lean::dec(x_6);
lean::inc(x_7);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_9, 0, x_7);
lean::closure_set(x_9, 1, x_4);
lean::closure_set(x_9, 2, x_8);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_5);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_Parser), 5, 0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_10);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_13);
lean::cnstr_set(x_16, 1, x_15);
x_17 = l_Lean_Parser_TermParserM_Monad;
x_18 = l_Lean_Parser_TermParserM_MonadExcept;
x_19 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_20 = l_Lean_Parser_TermParserM_Alternative;
x_21 = l_Lean_Parser_command_reserveNotation;
x_22 = l_Lean_Parser_command_reserveNotation_HasView;
x_23 = l_Lean_Parser_Combinators_node_view___rarg(x_17, x_18, x_19, x_20, x_21, x_16, x_22);
lean::dec(x_16);
return x_23;
}
}
obj* _init_l_Lean_Parser_command_reserveNotation_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_1 = lean::mk_string("reserve");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("notation");
x_7 = l_String_trim(x_6);
lean::dec(x_6);
lean::inc(x_7);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_9, 0, x_7);
lean::closure_set(x_9, 1, x_4);
lean::closure_set(x_9, 2, x_8);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_5);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_Parser), 5, 0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_10);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_13);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
obj* l_Lean_Parser_command_reserveNotation_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_reserveNotation;
x_7 = l_Lean_Parser_command_reserveNotation_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("mixfix");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("kind");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_nat_obj(0u);
x_4 = lean_name_mk_numeral(x_2, x_3);
x_5 = lean::box(3);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = l_Lean_Parser_Syntax_mkNode(x_4, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_command_mixfix_kind;
x_10 = l_Lean_Parser_Syntax_mkNode(x_9, x_8);
return x_10;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_nat_obj(1u);
x_4 = lean_name_mk_numeral(x_2, x_3);
x_5 = lean::box(3);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = l_Lean_Parser_Syntax_mkNode(x_4, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_command_mixfix_kind;
x_10 = l_Lean_Parser_Syntax_mkNode(x_9, x_8);
return x_10;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_nat_obj(2u);
x_4 = lean_name_mk_numeral(x_2, x_3);
x_5 = lean::box(3);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = l_Lean_Parser_Syntax_mkNode(x_4, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_command_mixfix_kind;
x_10 = l_Lean_Parser_Syntax_mkNode(x_9, x_8);
return x_10;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_nat_obj(3u);
x_4 = lean_name_mk_numeral(x_2, x_3);
x_5 = lean::box(3);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = l_Lean_Parser_Syntax_mkNode(x_4, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_command_mixfix_kind;
x_10 = l_Lean_Parser_Syntax_mkNode(x_9, x_8);
return x_10;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_nat_obj(4u);
x_4 = lean_name_mk_numeral(x_2, x_3);
x_5 = lean::box(3);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
x_7 = l_Lean_Parser_Syntax_mkNode(x_4, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_command_mixfix_kind;
x_10 = l_Lean_Parser_Syntax_mkNode(x_9, x_8);
return x_10;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = lean::mk_nat_obj(4u);
x_3 = lean_name_mk_numeral(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::box(0);
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_3; 
x_3 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; 
x_4 = l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__1;
return x_4;
}
else
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
x_6 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
x_8 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__1;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_2);
x_11 = l_Lean_Parser_command_mixfix_kind;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
}
case 1:
{
obj* x_13; 
x_13 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__2;
return x_14;
}
else
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
x_16 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_2);
x_18 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__3;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_2);
x_21 = l_Lean_Parser_command_mixfix_kind;
x_22 = l_Lean_Parser_Syntax_mkNode(x_21, x_20);
return x_22;
}
}
case 2:
{
obj* x_23; 
x_23 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_23) == 0)
{
obj* x_24; 
x_24 = l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__3;
return x_24;
}
else
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_25 = lean::cnstr_get(x_23, 0);
lean::inc(x_25);
x_26 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_26, 0, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_2);
x_28 = l_Lean_Parser_number_HasView_x27___elambda__1___closed__4;
x_29 = l_Lean_Parser_Syntax_mkNode(x_28, x_27);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_2);
x_31 = l_Lean_Parser_command_mixfix_kind;
x_32 = l_Lean_Parser_Syntax_mkNode(x_31, x_30);
return x_32;
}
}
case 3:
{
obj* x_33; 
x_33 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; 
x_34 = l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__4;
return x_34;
}
else
{
obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_35 = lean::cnstr_get(x_33, 0);
lean::inc(x_35);
x_36 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_36, 0, x_35);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_2);
x_38 = l_Lean_Parser_number_HasView_x27___elambda__1___closed__6;
x_39 = l_Lean_Parser_Syntax_mkNode(x_38, x_37);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_2);
x_41 = l_Lean_Parser_command_mixfix_kind;
x_42 = l_Lean_Parser_Syntax_mkNode(x_41, x_40);
return x_42;
}
}
default: 
{
obj* x_43; 
x_43 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; 
x_44 = l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__5;
return x_44;
}
else
{
obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
x_45 = lean::cnstr_get(x_43, 0);
lean::inc(x_45);
x_46 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_46, 0, x_45);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_2);
x_48 = l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__6;
x_49 = l_Lean_Parser_Syntax_mkNode(x_48, x_47);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_2);
x_51 = l_Lean_Parser_command_mixfix_kind;
x_52 = l_Lean_Parser_Syntax_mkNode(x_51, x_50);
return x_52;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__5;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("mixfix");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean::mk_string("kind");
x_11 = lean_name_mk_string(x_9, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__7;
x_8 = lean_name_dec_eq(x_5, x_7);
lean::dec(x_5);
if (x_8 == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_9;
}
else
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
x_10 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_6, 0);
lean::inc(x_12);
lean::dec(x_6);
x_13 = l_Lean_Parser_Syntax_asNode___main(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_14;
}
else
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_13);
if (x_15 == 0)
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_13, 0);
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
switch (lean::obj_tag(x_17)) {
case 0:
{
obj* x_18; 
lean::free_heap_obj(x_13);
lean::dec(x_16);
x_18 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_18;
}
case 1:
{
obj* x_19; 
lean::dec(x_17);
lean::free_heap_obj(x_13);
lean::dec(x_16);
x_19 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_19;
}
default: 
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; uint8 x_24; 
x_20 = lean::cnstr_get(x_16, 1);
lean::inc(x_20);
lean::dec(x_16);
x_21 = lean::cnstr_get(x_17, 0);
lean::inc(x_21);
x_22 = lean::cnstr_get(x_17, 1);
lean::inc(x_22);
lean::dec(x_17);
x_23 = lean::box(0);
x_24 = lean_name_dec_eq(x_21, x_23);
lean::dec(x_21);
if (x_24 == 0)
{
obj* x_25; 
lean::dec(x_22);
lean::dec(x_20);
lean::free_heap_obj(x_13);
x_25 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_25;
}
else
{
if (lean::obj_tag(x_20) == 0)
{
obj* x_26; 
lean::dec(x_22);
lean::free_heap_obj(x_13);
x_26 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_26;
}
else
{
obj* x_27; 
x_27 = lean::cnstr_get(x_20, 1);
lean::inc(x_27);
if (lean::obj_tag(x_27) == 0)
{
obj* x_28; obj* x_29; uint8 x_30; 
x_28 = lean::cnstr_get(x_20, 0);
lean::inc(x_28);
lean::dec(x_20);
x_29 = lean::mk_nat_obj(0u);
x_30 = lean::nat_dec_eq(x_22, x_29);
if (x_30 == 0)
{
obj* x_31; uint8 x_32; 
x_31 = lean::mk_nat_obj(1u);
x_32 = lean::nat_dec_eq(x_22, x_31);
if (x_32 == 0)
{
obj* x_33; uint8 x_34; 
x_33 = lean::mk_nat_obj(2u);
x_34 = lean::nat_dec_eq(x_22, x_33);
if (x_34 == 0)
{
obj* x_35; uint8 x_36; 
x_35 = lean::mk_nat_obj(3u);
x_36 = lean::nat_dec_eq(x_22, x_35);
lean::dec(x_22);
if (x_36 == 0)
{
if (lean::obj_tag(x_28) == 0)
{
obj* x_37; obj* x_38; 
x_37 = lean::cnstr_get(x_28, 0);
lean::inc(x_37);
lean::dec(x_28);
lean::cnstr_set(x_13, 0, x_37);
x_38 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_38, 0, x_13);
return x_38;
}
else
{
obj* x_39; 
lean::dec(x_28);
lean::free_heap_obj(x_13);
x_39 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__1;
return x_39;
}
}
else
{
if (lean::obj_tag(x_28) == 0)
{
obj* x_40; obj* x_41; 
x_40 = lean::cnstr_get(x_28, 0);
lean::inc(x_40);
lean::dec(x_28);
lean::cnstr_set(x_13, 0, x_40);
x_41 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_41, 0, x_13);
return x_41;
}
else
{
obj* x_42; 
lean::dec(x_28);
lean::free_heap_obj(x_13);
x_42 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__2;
return x_42;
}
}
}
else
{
lean::dec(x_22);
if (lean::obj_tag(x_28) == 0)
{
obj* x_43; obj* x_44; 
x_43 = lean::cnstr_get(x_28, 0);
lean::inc(x_43);
lean::dec(x_28);
lean::cnstr_set(x_13, 0, x_43);
x_44 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_44, 0, x_13);
return x_44;
}
else
{
obj* x_45; 
lean::dec(x_28);
lean::free_heap_obj(x_13);
x_45 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__3;
return x_45;
}
}
}
else
{
lean::dec(x_22);
if (lean::obj_tag(x_28) == 0)
{
obj* x_46; obj* x_47; 
x_46 = lean::cnstr_get(x_28, 0);
lean::inc(x_46);
lean::dec(x_28);
lean::cnstr_set(x_13, 0, x_46);
x_47 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_47, 0, x_13);
return x_47;
}
else
{
obj* x_48; 
lean::dec(x_28);
lean::free_heap_obj(x_13);
x_48 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__4;
return x_48;
}
}
}
else
{
lean::dec(x_22);
if (lean::obj_tag(x_28) == 0)
{
obj* x_49; obj* x_50; 
x_49 = lean::cnstr_get(x_28, 0);
lean::inc(x_49);
lean::dec(x_28);
lean::cnstr_set(x_13, 0, x_49);
x_50 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_50, 0, x_13);
return x_50;
}
else
{
obj* x_51; 
lean::dec(x_28);
lean::free_heap_obj(x_13);
x_51 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__5;
return x_51;
}
}
}
else
{
obj* x_52; 
lean::dec(x_27);
lean::dec(x_22);
lean::dec(x_20);
lean::free_heap_obj(x_13);
x_52 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_52;
}
}
}
}
}
}
else
{
obj* x_53; obj* x_54; 
x_53 = lean::cnstr_get(x_13, 0);
lean::inc(x_53);
lean::dec(x_13);
x_54 = lean::cnstr_get(x_53, 0);
lean::inc(x_54);
switch (lean::obj_tag(x_54)) {
case 0:
{
obj* x_55; 
lean::dec(x_53);
x_55 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_55;
}
case 1:
{
obj* x_56; 
lean::dec(x_54);
lean::dec(x_53);
x_56 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_56;
}
default: 
{
obj* x_57; obj* x_58; obj* x_59; obj* x_60; uint8 x_61; 
x_57 = lean::cnstr_get(x_53, 1);
lean::inc(x_57);
lean::dec(x_53);
x_58 = lean::cnstr_get(x_54, 0);
lean::inc(x_58);
x_59 = lean::cnstr_get(x_54, 1);
lean::inc(x_59);
lean::dec(x_54);
x_60 = lean::box(0);
x_61 = lean_name_dec_eq(x_58, x_60);
lean::dec(x_58);
if (x_61 == 0)
{
obj* x_62; 
lean::dec(x_59);
lean::dec(x_57);
x_62 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_62;
}
else
{
if (lean::obj_tag(x_57) == 0)
{
obj* x_63; 
lean::dec(x_59);
x_63 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_63;
}
else
{
obj* x_64; 
x_64 = lean::cnstr_get(x_57, 1);
lean::inc(x_64);
if (lean::obj_tag(x_64) == 0)
{
obj* x_65; obj* x_66; uint8 x_67; 
x_65 = lean::cnstr_get(x_57, 0);
lean::inc(x_65);
lean::dec(x_57);
x_66 = lean::mk_nat_obj(0u);
x_67 = lean::nat_dec_eq(x_59, x_66);
if (x_67 == 0)
{
obj* x_68; uint8 x_69; 
x_68 = lean::mk_nat_obj(1u);
x_69 = lean::nat_dec_eq(x_59, x_68);
if (x_69 == 0)
{
obj* x_70; uint8 x_71; 
x_70 = lean::mk_nat_obj(2u);
x_71 = lean::nat_dec_eq(x_59, x_70);
if (x_71 == 0)
{
obj* x_72; uint8 x_73; 
x_72 = lean::mk_nat_obj(3u);
x_73 = lean::nat_dec_eq(x_59, x_72);
lean::dec(x_59);
if (x_73 == 0)
{
if (lean::obj_tag(x_65) == 0)
{
obj* x_74; obj* x_75; obj* x_76; 
x_74 = lean::cnstr_get(x_65, 0);
lean::inc(x_74);
lean::dec(x_65);
x_75 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_75, 0, x_74);
x_76 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_76, 0, x_75);
return x_76;
}
else
{
obj* x_77; 
lean::dec(x_65);
x_77 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__1;
return x_77;
}
}
else
{
if (lean::obj_tag(x_65) == 0)
{
obj* x_78; obj* x_79; obj* x_80; 
x_78 = lean::cnstr_get(x_65, 0);
lean::inc(x_78);
lean::dec(x_65);
x_79 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_79, 0, x_78);
x_80 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_80, 0, x_79);
return x_80;
}
else
{
obj* x_81; 
lean::dec(x_65);
x_81 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__2;
return x_81;
}
}
}
else
{
lean::dec(x_59);
if (lean::obj_tag(x_65) == 0)
{
obj* x_82; obj* x_83; obj* x_84; 
x_82 = lean::cnstr_get(x_65, 0);
lean::inc(x_82);
lean::dec(x_65);
x_83 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_83, 0, x_82);
x_84 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_84, 0, x_83);
return x_84;
}
else
{
obj* x_85; 
lean::dec(x_65);
x_85 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__3;
return x_85;
}
}
}
else
{
lean::dec(x_59);
if (lean::obj_tag(x_65) == 0)
{
obj* x_86; obj* x_87; obj* x_88; 
x_86 = lean::cnstr_get(x_65, 0);
lean::inc(x_86);
lean::dec(x_65);
x_87 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_87, 0, x_86);
x_88 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_88, 0, x_87);
return x_88;
}
else
{
obj* x_89; 
lean::dec(x_65);
x_89 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__4;
return x_89;
}
}
}
else
{
lean::dec(x_59);
if (lean::obj_tag(x_65) == 0)
{
obj* x_90; obj* x_91; obj* x_92; 
x_90 = lean::cnstr_get(x_65, 0);
lean::inc(x_90);
lean::dec(x_65);
x_91 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_91, 0, x_90);
x_92 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_92, 0, x_91);
return x_92;
}
else
{
obj* x_93; 
lean::dec(x_65);
x_93 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__5;
return x_93;
}
}
}
else
{
obj* x_94; 
lean::dec(x_64);
lean::dec(x_59);
lean::dec(x_57);
x_94 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_94;
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
obj* x_95; 
lean::dec(x_11);
lean::dec(x_6);
x_95 = l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6;
return x_95;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___boxed), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_mixfix_kind_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_1 = lean::mk_string("prefix");
x_2 = lean::mk_nat_obj(0u);
x_3 = l_Lean_Parser_symbol_tokens___rarg(x_1, x_2);
lean::dec(x_1);
x_4 = lean::mk_string("infix");
x_5 = l_Lean_Parser_symbol_tokens___rarg(x_4, x_2);
lean::dec(x_4);
x_6 = lean::mk_string("infixl");
x_7 = l_Lean_Parser_symbol_tokens___rarg(x_6, x_2);
lean::dec(x_6);
x_8 = lean::mk_string("infixr");
x_9 = l_Lean_Parser_symbol_tokens___rarg(x_8, x_2);
lean::dec(x_8);
x_10 = lean::mk_string("postfix");
x_11 = l_Lean_Parser_symbol_tokens___rarg(x_10, x_2);
lean::dec(x_10);
x_12 = lean::box(0);
x_13 = l_Lean_Parser_List_cons_tokens___rarg(x_11, x_12);
lean::dec(x_11);
x_14 = l_Lean_Parser_List_cons_tokens___rarg(x_9, x_13);
lean::dec(x_13);
lean::dec(x_9);
x_15 = l_Lean_Parser_List_cons_tokens___rarg(x_7, x_14);
lean::dec(x_14);
lean::dec(x_7);
x_16 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_15);
lean::dec(x_15);
lean::dec(x_5);
x_17 = l_Lean_Parser_List_cons_tokens___rarg(x_3, x_16);
lean::dec(x_16);
lean::dec(x_3);
x_18 = l_Lean_Parser_tokens___rarg(x_17);
lean::dec(x_17);
x_19 = l_Lean_Parser_List_cons_tokens___rarg(x_18, x_12);
lean::dec(x_18);
x_20 = l_Lean_Parser_tokens___rarg(x_19);
lean::dec(x_19);
return x_20;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
x_1 = lean::mk_string("prefix");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("infix");
x_7 = l_String_trim(x_6);
lean::dec(x_6);
lean::inc(x_7);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_9, 0, x_7);
lean::closure_set(x_9, 1, x_4);
lean::closure_set(x_9, 2, x_8);
x_10 = lean::mk_string("infixl");
x_11 = l_String_trim(x_10);
lean::dec(x_10);
lean::inc(x_11);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_13, 0, x_11);
lean::closure_set(x_13, 1, x_4);
lean::closure_set(x_13, 2, x_12);
x_14 = lean::mk_string("infixr");
x_15 = l_String_trim(x_14);
lean::dec(x_14);
lean::inc(x_15);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_16, 0, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_17, 0, x_15);
lean::closure_set(x_17, 1, x_4);
lean::closure_set(x_17, 2, x_16);
x_18 = lean::mk_string("postfix");
x_19 = l_String_trim(x_18);
lean::dec(x_18);
lean::inc(x_19);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_20, 0, x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_21, 0, x_19);
lean::closure_set(x_21, 1, x_4);
lean::closure_set(x_21, 2, x_20);
x_22 = lean::box(0);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_17);
lean::cnstr_set(x_24, 1, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_13);
lean::cnstr_set(x_25, 1, x_24);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_9);
lean::cnstr_set(x_26, 1, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_5);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_28, 0, x_27);
lean::closure_set(x_28, 1, x_4);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_22);
x_30 = l_Lean_Parser_TermParserM_Monad;
x_31 = l_Lean_Parser_TermParserM_MonadExcept;
x_32 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_33 = l_Lean_Parser_TermParserM_Alternative;
x_34 = l_Lean_Parser_command_mixfix_kind;
x_35 = l_Lean_Parser_command_mixfix_kind_HasView;
x_36 = l_Lean_Parser_Combinators_node_view___rarg(x_30, x_31, x_32, x_33, x_34, x_29, x_35);
lean::dec(x_29);
return x_36;
}
}
obj* _init_l_Lean_Parser_command_mixfix_kind_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_1 = lean::mk_string("prefix");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_string("infix");
x_7 = l_String_trim(x_6);
lean::dec(x_6);
lean::inc(x_7);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_9, 0, x_7);
lean::closure_set(x_9, 1, x_4);
lean::closure_set(x_9, 2, x_8);
x_10 = lean::mk_string("infixl");
x_11 = l_String_trim(x_10);
lean::dec(x_10);
lean::inc(x_11);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_13, 0, x_11);
lean::closure_set(x_13, 1, x_4);
lean::closure_set(x_13, 2, x_12);
x_14 = lean::mk_string("infixr");
x_15 = l_String_trim(x_14);
lean::dec(x_14);
lean::inc(x_15);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_16, 0, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_17, 0, x_15);
lean::closure_set(x_17, 1, x_4);
lean::closure_set(x_17, 2, x_16);
x_18 = lean::mk_string("postfix");
x_19 = l_String_trim(x_18);
lean::dec(x_18);
lean::inc(x_19);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_20, 0, x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_21, 0, x_19);
lean::closure_set(x_21, 1, x_4);
lean::closure_set(x_21, 2, x_20);
x_22 = lean::box(0);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_17);
lean::cnstr_set(x_24, 1, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_13);
lean::cnstr_set(x_25, 1, x_24);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_9);
lean::cnstr_set(x_26, 1, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_5);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_28, 0, x_27);
lean::closure_set(x_28, 1, x_4);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_22);
return x_29;
}
}
obj* l_Lean_Parser_command_mixfix_kind_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_mixfix_kind;
x_7 = l_Lean_Parser_command_mixfix_kind_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_mixfix() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("mixfix");
x_9 = lean_name_mk_string(x_7, x_8);
return x_9;
}
}
obj* l_Lean_Parser_command_mixfix_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_1, 2);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_1, 3);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_1, 4);
lean::inc(x_6);
lean::dec(x_1);
x_7 = l_Lean_Parser_command_mixfix_kind_HasView;
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
x_9 = lean::apply_1(x_8, x_3);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView;
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
x_14 = lean::apply_1(x_13, x_4);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_6);
lean::cnstr_set(x_15, 1, x_10);
if (lean::obj_tag(x_2) == 0)
{
obj* x_34; 
x_34 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_16 = x_34;
goto block_33;
}
else
{
obj* x_35; 
x_35 = lean::cnstr_get(x_2, 0);
lean::inc(x_35);
lean::dec(x_2);
if (lean::obj_tag(x_35) == 0)
{
obj* x_36; 
x_36 = l_Lean_Parser_command_notation_HasView_x27___elambda__1___closed__1;
x_16 = x_36;
goto block_33;
}
else
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_37 = lean::cnstr_get(x_35, 0);
lean::inc(x_37);
lean::dec(x_35);
x_38 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_38, 0, x_37);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_10);
x_40 = l_Lean_Parser_noKind;
x_41 = l_Lean_Parser_Syntax_mkNode(x_40, x_39);
x_16 = x_41;
goto block_33;
}
}
block_33:
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_11);
x_18 = l_Lean_Parser_noKind;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
if (lean::obj_tag(x_5) == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_20 = lean::box(3);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_15);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_14);
lean::cnstr_set(x_22, 1, x_21);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_19);
lean::cnstr_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_command_mixfix;
x_25 = l_Lean_Parser_Syntax_mkNode(x_24, x_23);
return x_25;
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_26 = lean::cnstr_get(x_5, 0);
lean::inc(x_26);
lean::dec(x_5);
x_27 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_15);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_14);
lean::cnstr_set(x_29, 1, x_28);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_19);
lean::cnstr_set(x_30, 1, x_29);
x_31 = l_Lean_Parser_command_mixfix;
x_32 = l_Lean_Parser_Syntax_mkNode(x_31, x_30);
return x_32;
}
}
}
}
obj* _init_l_Lean_Parser_command_mixfix_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_12; obj* x_13; 
x_12 = lean::box(3);
x_13 = l_Lean_Parser_Syntax_asNode___main(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_1 = x_14;
goto block_11;
}
else
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_13);
if (x_15 == 0)
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_13, 0);
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
lean::dec(x_16);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; 
lean::free_heap_obj(x_13);
x_18 = lean::box(0);
x_1 = x_18;
goto block_11;
}
else
{
obj* x_19; 
x_19 = lean::cnstr_get(x_17, 1);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; 
x_20 = lean::cnstr_get(x_17, 0);
lean::inc(x_20);
lean::dec(x_17);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_22; 
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
lean::dec(x_20);
lean::cnstr_set(x_13, 0, x_21);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_13);
x_1 = x_22;
goto block_11;
}
else
{
obj* x_23; 
lean::dec(x_20);
lean::free_heap_obj(x_13);
x_23 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_1 = x_23;
goto block_11;
}
}
else
{
obj* x_24; 
lean::dec(x_19);
lean::dec(x_17);
lean::free_heap_obj(x_13);
x_24 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_1 = x_24;
goto block_11;
}
}
}
else
{
obj* x_25; obj* x_26; 
x_25 = lean::cnstr_get(x_13, 0);
lean::inc(x_25);
lean::dec(x_13);
x_26 = lean::cnstr_get(x_25, 1);
lean::inc(x_26);
lean::dec(x_25);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; 
x_27 = lean::box(0);
x_1 = x_27;
goto block_11;
}
else
{
obj* x_28; 
x_28 = lean::cnstr_get(x_26, 1);
lean::inc(x_28);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; 
x_29 = lean::cnstr_get(x_26, 0);
lean::inc(x_29);
lean::dec(x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_30; obj* x_31; obj* x_32; 
x_30 = lean::cnstr_get(x_29, 0);
lean::inc(x_30);
lean::dec(x_29);
x_31 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_31, 0, x_30);
x_32 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_32, 0, x_31);
x_1 = x_32;
goto block_11;
}
else
{
obj* x_33; 
lean::dec(x_29);
x_33 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_1 = x_33;
goto block_11;
}
}
else
{
obj* x_34; 
lean::dec(x_28);
lean::dec(x_26);
x_34 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_1 = x_34;
goto block_11;
}
}
}
}
block_11:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = l_Lean_Parser_command_mixfix_kind_HasView;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_3, x_4);
x_6 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView;
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_8 = lean::apply_1(x_7, x_4);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_1);
lean::cnstr_set(x_10, 1, x_5);
lean::cnstr_set(x_10, 2, x_8);
lean::cnstr_set(x_10, 3, x_9);
lean::cnstr_set(x_10, 4, x_4);
return x_10;
}
}
}
obj* l_Lean_Parser_command_mixfix_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_64; 
x_64 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_64) == 0)
{
obj* x_65; 
x_65 = l_Lean_Parser_command_mixfix_HasView_x27___lambda__1___closed__1;
return x_65;
}
else
{
obj* x_66; obj* x_67; 
x_66 = lean::cnstr_get(x_64, 0);
lean::inc(x_66);
lean::dec(x_64);
x_67 = lean::cnstr_get(x_66, 1);
lean::inc(x_67);
lean::dec(x_66);
if (lean::obj_tag(x_67) == 0)
{
obj* x_68; 
x_68 = lean::box(3);
x_2 = x_67;
x_3 = x_68;
goto block_63;
}
else
{
obj* x_69; obj* x_70; obj* x_71; 
x_69 = lean::cnstr_get(x_67, 0);
lean::inc(x_69);
x_70 = lean::cnstr_get(x_67, 1);
lean::inc(x_70);
lean::dec(x_67);
x_71 = l_Lean_Parser_Syntax_asNode___main(x_69);
if (lean::obj_tag(x_71) == 0)
{
if (lean::obj_tag(x_70) == 0)
{
obj* x_72; 
x_72 = lean::box(3);
x_2 = x_70;
x_3 = x_72;
goto block_63;
}
else
{
obj* x_73; obj* x_74; 
x_73 = lean::cnstr_get(x_70, 0);
lean::inc(x_73);
x_74 = lean::cnstr_get(x_70, 1);
lean::inc(x_74);
lean::dec(x_70);
x_2 = x_74;
x_3 = x_73;
goto block_63;
}
}
else
{
obj* x_75; obj* x_76; obj* x_77; 
x_75 = lean::cnstr_get(x_71, 0);
lean::inc(x_75);
lean::dec(x_71);
x_76 = lean::cnstr_get(x_75, 1);
lean::inc(x_76);
lean::dec(x_75);
x_77 = l_List_append___rarg(x_76, x_70);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; 
x_78 = lean::box(3);
x_2 = x_77;
x_3 = x_78;
goto block_63;
}
else
{
obj* x_79; obj* x_80; 
x_79 = lean::cnstr_get(x_77, 0);
lean::inc(x_79);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
lean::dec(x_77);
x_2 = x_80;
x_3 = x_79;
goto block_63;
}
}
}
}
block_63:
{
obj* x_4; obj* x_41; 
x_41 = l_Lean_Parser_Syntax_asNode___main(x_3);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; 
x_42 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_4 = x_42;
goto block_40;
}
else
{
uint8 x_43; 
x_43 = !lean::is_exclusive(x_41);
if (x_43 == 0)
{
obj* x_44; obj* x_45; 
x_44 = lean::cnstr_get(x_41, 0);
x_45 = lean::cnstr_get(x_44, 1);
lean::inc(x_45);
lean::dec(x_44);
if (lean::obj_tag(x_45) == 0)
{
obj* x_46; 
lean::free_heap_obj(x_41);
x_46 = lean::box(0);
x_4 = x_46;
goto block_40;
}
else
{
obj* x_47; 
x_47 = lean::cnstr_get(x_45, 1);
lean::inc(x_47);
if (lean::obj_tag(x_47) == 0)
{
obj* x_48; 
x_48 = lean::cnstr_get(x_45, 0);
lean::inc(x_48);
lean::dec(x_45);
if (lean::obj_tag(x_48) == 0)
{
obj* x_49; obj* x_50; 
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
lean::dec(x_48);
lean::cnstr_set(x_41, 0, x_49);
x_50 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_50, 0, x_41);
x_4 = x_50;
goto block_40;
}
else
{
obj* x_51; 
lean::dec(x_48);
lean::free_heap_obj(x_41);
x_51 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_4 = x_51;
goto block_40;
}
}
else
{
obj* x_52; 
lean::dec(x_47);
lean::dec(x_45);
lean::free_heap_obj(x_41);
x_52 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_4 = x_52;
goto block_40;
}
}
}
else
{
obj* x_53; obj* x_54; 
x_53 = lean::cnstr_get(x_41, 0);
lean::inc(x_53);
lean::dec(x_41);
x_54 = lean::cnstr_get(x_53, 1);
lean::inc(x_54);
lean::dec(x_53);
if (lean::obj_tag(x_54) == 0)
{
obj* x_55; 
x_55 = lean::box(0);
x_4 = x_55;
goto block_40;
}
else
{
obj* x_56; 
x_56 = lean::cnstr_get(x_54, 1);
lean::inc(x_56);
if (lean::obj_tag(x_56) == 0)
{
obj* x_57; 
x_57 = lean::cnstr_get(x_54, 0);
lean::inc(x_57);
lean::dec(x_54);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_59; obj* x_60; 
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
lean::dec(x_57);
x_59 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_59, 0, x_58);
x_60 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_60, 0, x_59);
x_4 = x_60;
goto block_40;
}
else
{
obj* x_61; 
lean::dec(x_57);
x_61 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_4 = x_61;
goto block_40;
}
}
else
{
obj* x_62; 
lean::dec(x_56);
lean::dec(x_54);
x_62 = l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1;
x_4 = x_62;
goto block_40;
}
}
}
}
block_40:
{
obj* x_5; obj* x_6; 
if (lean::obj_tag(x_2) == 0)
{
obj* x_37; 
x_37 = lean::box(3);
x_5 = x_2;
x_6 = x_37;
goto block_36;
}
else
{
obj* x_38; obj* x_39; 
x_38 = lean::cnstr_get(x_2, 0);
lean::inc(x_38);
x_39 = lean::cnstr_get(x_2, 1);
lean::inc(x_39);
lean::dec(x_2);
x_5 = x_39;
x_6 = x_38;
goto block_36;
}
block_36:
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_command_mixfix_kind_HasView;
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_9 = lean::apply_1(x_8, x_6);
if (lean::obj_tag(x_5) == 0)
{
obj* x_33; 
x_33 = lean::box(3);
x_10 = x_5;
x_11 = x_33;
goto block_32;
}
else
{
obj* x_34; obj* x_35; 
x_34 = lean::cnstr_get(x_5, 0);
lean::inc(x_34);
x_35 = lean::cnstr_get(x_5, 1);
lean::inc(x_35);
lean::dec(x_5);
x_10 = x_35;
x_11 = x_34;
goto block_32;
}
block_32:
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView;
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_14 = lean::apply_1(x_13, x_11);
if (lean::obj_tag(x_10) == 0)
{
obj* x_15; obj* x_16; obj* x_17; 
x_15 = lean::box(0);
x_16 = lean::box(3);
x_17 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_17, 0, x_4);
lean::cnstr_set(x_17, 1, x_9);
lean::cnstr_set(x_17, 2, x_14);
lean::cnstr_set(x_17, 3, x_15);
lean::cnstr_set(x_17, 4, x_16);
return x_17;
}
else
{
obj* x_18; 
x_18 = lean::cnstr_get(x_10, 0);
lean::inc(x_18);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_20; obj* x_21; 
x_19 = lean::cnstr_get(x_10, 1);
lean::inc(x_19);
lean::dec(x_10);
x_20 = lean::cnstr_get(x_18, 0);
lean::inc(x_20);
lean::dec(x_18);
x_21 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_21, 0, x_20);
if (lean::obj_tag(x_19) == 0)
{
obj* x_22; obj* x_23; 
x_22 = lean::box(3);
x_23 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_23, 0, x_4);
lean::cnstr_set(x_23, 1, x_9);
lean::cnstr_set(x_23, 2, x_14);
lean::cnstr_set(x_23, 3, x_21);
lean::cnstr_set(x_23, 4, x_22);
return x_23;
}
else
{
obj* x_24; obj* x_25; 
x_24 = lean::cnstr_get(x_19, 0);
lean::inc(x_24);
lean::dec(x_19);
x_25 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_25, 0, x_4);
lean::cnstr_set(x_25, 1, x_9);
lean::cnstr_set(x_25, 2, x_14);
lean::cnstr_set(x_25, 3, x_21);
lean::cnstr_set(x_25, 4, x_24);
return x_25;
}
}
else
{
obj* x_26; obj* x_27; 
lean::dec(x_18);
x_26 = lean::cnstr_get(x_10, 1);
lean::inc(x_26);
lean::dec(x_10);
x_27 = lean::box(0);
if (lean::obj_tag(x_26) == 0)
{
obj* x_28; obj* x_29; 
x_28 = lean::box(3);
x_29 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_29, 0, x_4);
lean::cnstr_set(x_29, 1, x_9);
lean::cnstr_set(x_29, 2, x_14);
lean::cnstr_set(x_29, 3, x_27);
lean::cnstr_set(x_29, 4, x_28);
return x_29;
}
else
{
obj* x_30; obj* x_31; 
x_30 = lean::cnstr_get(x_26, 0);
lean::inc(x_30);
lean::dec(x_26);
x_31 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_31, 0, x_4);
lean::cnstr_set(x_31, 1, x_9);
lean::cnstr_set(x_31, 2, x_14);
lean::cnstr_set(x_31, 3, x_27);
lean::cnstr_set(x_31, 4, x_30);
return x_31;
}
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_mixfix_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_mixfix_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_mixfix_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_mixfix_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_mixfix_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_1 = lean::mk_string("local ");
x_2 = lean::mk_nat_obj(0u);
x_3 = l_Lean_Parser_symbol_tokens___rarg(x_1, x_2);
lean::dec(x_1);
x_4 = l_Lean_Parser_tokens___rarg(x_3);
lean::dec(x_3);
x_5 = lean::box(0);
x_6 = l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasTokens;
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_6, x_5);
x_8 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_7);
lean::dec(x_7);
lean::dec(x_4);
x_9 = l_Lean_Parser_tokens___rarg(x_8);
lean::dec(x_8);
x_10 = l_Lean_Parser_tokens___rarg(x_9);
lean::dec(x_9);
x_11 = lean::mk_string(":=");
x_12 = l_Lean_Parser_symbol_tokens___rarg(x_11, x_2);
lean::dec(x_11);
x_13 = l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens(x_2);
x_14 = l_Lean_Parser_List_cons_tokens___rarg(x_13, x_5);
lean::dec(x_13);
x_15 = l_Lean_Parser_List_cons_tokens___rarg(x_12, x_14);
lean::dec(x_14);
lean::dec(x_12);
x_16 = l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser_Lean_Parser_HasTokens;
x_17 = l_Lean_Parser_List_cons_tokens___rarg(x_16, x_15);
lean::dec(x_15);
x_18 = l_Lean_Parser_List_cons_tokens___rarg(x_10, x_17);
lean::dec(x_17);
lean::dec(x_10);
x_19 = l_Lean_Parser_tokens___rarg(x_18);
lean::dec(x_18);
return x_19;
}
}
obj* _init_l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; uint8 x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_1 = lean::mk_string("local ");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = 0;
x_7 = lean::box(x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
x_9 = lean::box(0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_mixfix_kind_Parser), 5, 0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::mk_string(":=");
x_15 = l_String_trim(x_14);
lean::dec(x_14);
lean::inc(x_15);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_16, 0, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_17, 0, x_15);
lean::closure_set(x_17, 1, x_4);
lean::closure_set(x_17, 2, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_18, 0, x_4);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_9);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_17);
lean::cnstr_set(x_20, 1, x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser), 5, 0);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_20);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_13);
lean::cnstr_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_TermParserM_Monad;
x_25 = l_Lean_Parser_TermParserM_MonadExcept;
x_26 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_27 = l_Lean_Parser_TermParserM_Alternative;
x_28 = l_Lean_Parser_command_mixfix;
x_29 = l_Lean_Parser_command_mixfix_HasView;
x_30 = l_Lean_Parser_Combinators_node_view___rarg(x_24, x_25, x_26, x_27, x_28, x_23, x_29);
lean::dec(x_23);
return x_30;
}
}
obj* _init_l_Lean_Parser_command_mixfix_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; uint8 x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_1 = lean::mk_string("local ");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = 0;
x_7 = lean::box(x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens___spec__7___boxed), 7, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
x_9 = lean::box(0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_mixfix_kind_Parser), 5, 0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2), 6, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::mk_string(":=");
x_15 = l_String_trim(x_14);
lean::dec(x_14);
lean::inc(x_15);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_16, 0, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_17, 0, x_15);
lean::closure_set(x_17, 1, x_4);
lean::closure_set(x_17, 2, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_18, 0, x_4);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_9);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_17);
lean::cnstr_set(x_20, 1, x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser), 5, 0);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_20);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_13);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
}
obj* l_Lean_Parser_command_mixfix_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_mixfix;
x_7 = l_Lean_Parser_command_mixfix_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_notationLike() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("notationLike");
x_9 = lean_name_mk_string(x_7, x_8);
return x_9;
}
}
obj* l_Lean_Parser_command_notationLike_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::box(0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_4 = l_Lean_Parser_command_notation_HasView;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::apply_1(x_5, x_3);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
x_8 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__1;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_2);
x_11 = l_Lean_Parser_command_notationLike;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
x_14 = l_Lean_Parser_command_mixfix_HasView;
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
x_16 = lean::apply_1(x_15, x_13);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_2);
x_18 = l_Lean_Parser_detailIdentPart_HasView_x27___elambda__1___closed__3;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_2);
x_21 = l_Lean_Parser_command_notationLike;
x_22 = l_Lean_Parser_Syntax_mkNode(x_21, x_20);
return x_22;
}
}
}
obj* _init_l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_command_notation_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("notationLike");
x_9 = lean_name_mk_string(x_7, x_8);
return x_9;
}
}
obj* l_Lean_Parser_command_notationLike_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1;
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__2;
x_8 = lean_name_dec_eq(x_5, x_7);
lean::dec(x_5);
if (x_8 == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1;
return x_9;
}
else
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
x_10 = l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1;
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_6, 0);
lean::inc(x_12);
lean::dec(x_6);
x_13 = l_Lean_Parser_Syntax_asNode___main(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1;
return x_14;
}
else
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
switch (lean::obj_tag(x_16)) {
case 0:
{
obj* x_17; 
lean::dec(x_15);
x_17 = l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1;
return x_17;
}
case 1:
{
obj* x_18; 
lean::dec(x_16);
lean::dec(x_15);
x_18 = l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1;
return x_18;
}
default: 
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; uint8 x_23; 
x_19 = lean::cnstr_get(x_15, 1);
lean::inc(x_19);
lean::dec(x_15);
x_20 = lean::cnstr_get(x_16, 0);
lean::inc(x_20);
x_21 = lean::cnstr_get(x_16, 1);
lean::inc(x_21);
lean::dec(x_16);
x_22 = lean::box(0);
x_23 = lean_name_dec_eq(x_20, x_22);
lean::dec(x_20);
if (x_23 == 0)
{
obj* x_24; 
lean::dec(x_21);
lean::dec(x_19);
x_24 = l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1;
return x_24;
}
else
{
if (lean::obj_tag(x_19) == 0)
{
obj* x_25; 
lean::dec(x_21);
x_25 = l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1;
return x_25;
}
else
{
obj* x_26; 
x_26 = lean::cnstr_get(x_19, 1);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; uint8 x_29; 
x_27 = lean::cnstr_get(x_19, 0);
lean::inc(x_27);
lean::dec(x_19);
x_28 = lean::mk_nat_obj(0u);
x_29 = lean::nat_dec_eq(x_21, x_28);
lean::dec(x_21);
if (x_29 == 0)
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_30 = l_Lean_Parser_command_mixfix_HasView;
x_31 = lean::cnstr_get(x_30, 0);
lean::inc(x_31);
x_32 = lean::apply_1(x_31, x_27);
x_33 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_33, 0, x_32);
return x_33;
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_34 = l_Lean_Parser_command_notation_HasView;
x_35 = lean::cnstr_get(x_34, 0);
lean::inc(x_35);
x_36 = lean::apply_1(x_35, x_27);
x_37 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_37, 0, x_36);
return x_37;
}
}
else
{
obj* x_38; 
lean::dec(x_26);
lean::dec(x_21);
lean::dec(x_19);
x_38 = l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1;
return x_38;
}
}
}
}
}
}
}
else
{
obj* x_39; 
lean::dec(x_11);
lean::dec(x_6);
x_39 = l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1;
return x_39;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_notationLike_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_notationLike_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_notationLike_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_notationLike_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_notationLike_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_notationLike_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasTokens;
x_3 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_1);
x_4 = l_Lean_Parser_command_notation_Parser_Lean_Parser_HasTokens;
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_3);
lean::dec(x_3);
x_6 = l_Lean_Parser_tokens___rarg(x_5);
lean::dec(x_5);
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_6, x_1);
lean::dec(x_6);
x_8 = l_Lean_Parser_tokens___rarg(x_7);
lean::dec(x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_notationLike_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_1 = lean::box(0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_mixfix_Parser), 5, 0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_notation_Parser), 5, 0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_7, 0, x_5);
lean::closure_set(x_7, 1, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_TermParserM_Monad;
x_10 = l_Lean_Parser_TermParserM_MonadExcept;
x_11 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_12 = l_Lean_Parser_TermParserM_Alternative;
x_13 = l_Lean_Parser_command_notationLike;
x_14 = l_Lean_Parser_command_notationLike_HasView;
x_15 = l_Lean_Parser_Combinators_node_view___rarg(x_9, x_10, x_11, x_12, x_13, x_8, x_14);
lean::dec(x_8);
return x_15;
}
}
obj* _init_l_Lean_Parser_command_notationLike_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::box(0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_mixfix_Parser), 5, 0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_notation_Parser), 5, 0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__3), 7, 2);
lean::closure_set(x_7, 0, x_5);
lean::closure_set(x_7, 1, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
return x_8;
}
}
obj* l_Lean_Parser_command_notationLike_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_notationLike;
x_7 = l_Lean_Parser_command_notationLike_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_reserveMixfix() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::mk_string("command");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string("reserveMixfix");
x_9 = lean_name_mk_string(x_7, x_8);
return x_9;
}
}
obj* l_Lean_Parser_command_reserveMixfix_HasView_x27___elambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_1, 2);
lean::inc(x_4);
lean::dec(x_1);
x_5 = l_Lean_Parser_command_mixfix_kind_HasView;
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
x_7 = lean::apply_1(x_6, x_3);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
x_10 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
x_11 = lean::cnstr_get(x_10, 1);
lean::inc(x_11);
x_12 = lean::apply_1(x_11, x_4);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_8);
if (lean::obj_tag(x_2) == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_14 = lean::box(3);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_9);
x_16 = l_Lean_Parser_noKind;
x_17 = l_Lean_Parser_Syntax_mkNode(x_16, x_15);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_13);
x_19 = l_Lean_Parser_command_reserveMixfix;
x_20 = l_Lean_Parser_Syntax_mkNode(x_19, x_18);
return x_20;
}
else
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_21 = lean::cnstr_get(x_2, 0);
lean::inc(x_21);
lean::dec(x_2);
x_22 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_9);
x_24 = l_Lean_Parser_noKind;
x_25 = l_Lean_Parser_Syntax_mkNode(x_24, x_23);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_13);
x_27 = l_Lean_Parser_command_reserveMixfix;
x_28 = l_Lean_Parser_Syntax_mkNode(x_27, x_26);
return x_28;
}
}
}
obj* _init_l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_command_mixfix_kind_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::box(3);
x_4 = lean::apply_1(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_command_mixfix_kind_HasView;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_3, x_4);
x_6 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_8 = lean::apply_1(x_7, x_4);
x_9 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_9, 0, x_1);
lean::cnstr_set(x_9, 1, x_5);
lean::cnstr_set(x_9, 2, x_8);
return x_9;
}
}
obj* _init_l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__2;
return x_1;
}
}
obj* l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_16; obj* x_17; obj* x_30; 
x_30 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_30) == 0)
{
obj* x_31; 
x_31 = l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__3;
return x_31;
}
else
{
obj* x_32; obj* x_33; 
x_32 = lean::cnstr_get(x_30, 0);
lean::inc(x_32);
lean::dec(x_30);
x_33 = lean::cnstr_get(x_32, 1);
lean::inc(x_33);
lean::dec(x_32);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; 
x_34 = lean::box(3);
x_16 = x_33;
x_17 = x_34;
goto block_29;
}
else
{
obj* x_35; obj* x_36; obj* x_37; 
x_35 = lean::cnstr_get(x_33, 0);
lean::inc(x_35);
x_36 = lean::cnstr_get(x_33, 1);
lean::inc(x_36);
lean::dec(x_33);
x_37 = l_Lean_Parser_Syntax_asNode___main(x_35);
if (lean::obj_tag(x_37) == 0)
{
if (lean::obj_tag(x_36) == 0)
{
obj* x_38; 
x_38 = lean::box(3);
x_16 = x_36;
x_17 = x_38;
goto block_29;
}
else
{
obj* x_39; obj* x_40; 
x_39 = lean::cnstr_get(x_36, 0);
lean::inc(x_39);
x_40 = lean::cnstr_get(x_36, 1);
lean::inc(x_40);
lean::dec(x_36);
x_16 = x_40;
x_17 = x_39;
goto block_29;
}
}
else
{
obj* x_41; obj* x_42; obj* x_43; 
x_41 = lean::cnstr_get(x_37, 0);
lean::inc(x_41);
lean::dec(x_37);
x_42 = lean::cnstr_get(x_41, 1);
lean::inc(x_42);
lean::dec(x_41);
x_43 = l_List_append___rarg(x_42, x_36);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; 
x_44 = lean::box(3);
x_16 = x_43;
x_17 = x_44;
goto block_29;
}
else
{
obj* x_45; obj* x_46; 
x_45 = lean::cnstr_get(x_43, 0);
lean::inc(x_45);
x_46 = lean::cnstr_get(x_43, 1);
lean::inc(x_46);
lean::dec(x_43);
x_16 = x_46;
x_17 = x_45;
goto block_29;
}
}
}
}
block_15:
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = l_Lean_Parser_command_mixfix_kind_HasView;
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::apply_1(x_6, x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_8; obj* x_9; 
x_8 = l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__1;
x_9 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_9, 0, x_2);
lean::cnstr_set(x_9, 1, x_7);
lean::cnstr_set(x_9, 2, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_10 = lean::cnstr_get(x_4, 0);
lean::inc(x_10);
lean::dec(x_4);
x_11 = l_Lean_Parser_command_NotationSpec_notationSymbol_HasView;
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_13 = lean::apply_1(x_12, x_10);
x_14 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_14, 0, x_2);
lean::cnstr_set(x_14, 1, x_7);
lean::cnstr_set(x_14, 2, x_13);
return x_14;
}
}
block_29:
{
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_17, 0);
lean::inc(x_18);
lean::dec(x_17);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
if (lean::obj_tag(x_16) == 0)
{
obj* x_20; obj* x_21; obj* x_22; 
x_20 = l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__1;
x_21 = l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__1;
x_22 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_22, 0, x_19);
lean::cnstr_set(x_22, 1, x_20);
lean::cnstr_set(x_22, 2, x_21);
return x_22;
}
else
{
obj* x_23; obj* x_24; 
x_23 = lean::cnstr_get(x_16, 0);
lean::inc(x_23);
x_24 = lean::cnstr_get(x_16, 1);
lean::inc(x_24);
lean::dec(x_16);
x_2 = x_19;
x_3 = x_23;
x_4 = x_24;
goto block_15;
}
}
else
{
lean::dec(x_17);
if (lean::obj_tag(x_16) == 0)
{
obj* x_25; 
x_25 = l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__2;
return x_25;
}
else
{
obj* x_26; obj* x_27; obj* x_28; 
x_26 = lean::cnstr_get(x_16, 0);
lean::inc(x_26);
x_27 = lean::cnstr_get(x_16, 1);
lean::inc(x_27);
lean::dec(x_16);
x_28 = lean::box(0);
x_2 = x_28;
x_3 = x_26;
x_4 = x_27;
goto block_15;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_reserveMixfix_HasView_x27() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_reserveMixfix_HasView_x27___elambda__1), 1, 0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_reserveMixfix_HasView() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_reserveMixfix_HasView_x27;
return x_1;
}
}
obj* _init_l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_1 = lean::mk_string("reserve");
x_2 = lean::mk_nat_obj(0u);
x_3 = l_Lean_Parser_symbol_tokens___rarg(x_1, x_2);
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasTokens;
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_4);
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_3, x_6);
lean::dec(x_6);
lean::dec(x_3);
x_8 = l_Lean_Parser_tokens___rarg(x_7);
lean::dec(x_7);
x_9 = l_Lean_Parser_tokens___rarg(x_8);
lean::dec(x_8);
x_10 = l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasTokens;
x_11 = l_Lean_Parser_List_cons_tokens___rarg(x_10, x_4);
x_12 = l_Lean_Parser_List_cons_tokens___rarg(x_9, x_11);
lean::dec(x_11);
lean::dec(x_9);
x_13 = l_Lean_Parser_tokens___rarg(x_12);
lean::dec(x_12);
return x_13;
}
}
obj* _init_l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_1 = lean::mk_string("reserve");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_mixfix_kind_Parser), 5, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_5);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2), 6, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_notationSymbol_Parser), 5, 0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_6);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_10);
lean::cnstr_set(x_13, 1, x_12);
x_14 = l_Lean_Parser_TermParserM_Monad;
x_15 = l_Lean_Parser_TermParserM_MonadExcept;
x_16 = l_Lean_Parser_TermParserM_Lean_Parser_MonadParsec;
x_17 = l_Lean_Parser_TermParserM_Alternative;
x_18 = l_Lean_Parser_command_reserveMixfix;
x_19 = l_Lean_Parser_command_reserveMixfix_HasView;
x_20 = l_Lean_Parser_Combinators_node_view___rarg(x_14, x_15, x_16, x_17, x_18, x_13, x_19);
lean::dec(x_13);
return x_20;
}
}
obj* _init_l_Lean_Parser_command_reserveMixfix_Parser___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_1 = lean::mk_string("reserve");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
lean::inc(x_2);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___elambda__1___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_mixfix_kind_Parser), 5, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_5);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView___lambda__2), 6, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_NotationSpec_notationSymbol_Parser), 5, 0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_6);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_10);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
obj* l_Lean_Parser_command_reserveMixfix_Parser(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_Parser_command_reserveMixfix;
x_7 = l_Lean_Parser_command_reserveMixfix_Parser___closed__1;
x_8 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
obj* initialize_init_lean_parser_token(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_parser_notation(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_lean_parser_token(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___closed__1 = _init_l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___closed__1);
l_Lean_Parser_Term_Parser_Lean_Parser_HasView___closed__1 = _init_l_Lean_Parser_Term_Parser_Lean_Parser_HasView___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_Parser_Lean_Parser_HasView___closed__1);
l_Lean_Parser_Term_Parser___closed__1 = _init_l_Lean_Parser_Term_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_Parser___closed__1);
l_Lean_Parser_command_NotationSpec_precedenceLit = _init_l_Lean_Parser_command_NotationSpec_precedenceLit();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceLit);
l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceLit_HasView_x27);
l_Lean_Parser_command_NotationSpec_precedenceLit_HasView = _init_l_Lean_Parser_command_NotationSpec_precedenceLit_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceLit_HasView);
l_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_precedenceLit_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_precedenceLit_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceLit_Parser___closed__1);
l_Lean_Parser_command_NotationSpec_precedenceOffsetOp = _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffsetOp);
l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___elambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3 = _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__3);
l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__4 = _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27___lambda__1___closed__4);
l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView_x27);
l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView = _init_l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffsetOp_HasView);
l_Lean_Parser_command_NotationSpec_precedenceOffset = _init_l_Lean_Parser_command_NotationSpec_precedenceOffset();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffset);
l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView_x27);
l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView = _init_l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceOffset_HasView);
l_Lean_Parser_command_NotationSpec_precedenceTerm = _init_l_Lean_Parser_command_NotationSpec_precedenceTerm();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceTerm);
l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView_x27);
l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView = _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceTerm_HasView);
l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedenceTerm_Parser___closed__1);
l_Lean_Parser_command_NotationSpec_precedence = _init_l_Lean_Parser_command_NotationSpec_precedence();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedence);
l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__3 = _init_l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedence_HasView_x27___lambda__1___closed__3);
l_Lean_Parser_command_NotationSpec_precedence_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_precedence_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedence_HasView_x27);
l_Lean_Parser_command_NotationSpec_precedence_HasView = _init_l_Lean_Parser_command_NotationSpec_precedence_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedence_HasView);
l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedence_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_precedence_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_precedence_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_precedence_Parser___closed__1);
l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_quotedSymbol_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_symbolQuote = _init_l_Lean_Parser_command_NotationSpec_symbolQuote();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_symbolQuote);
l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___elambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_symbolQuote_HasView_x27);
l_Lean_Parser_command_NotationSpec_symbolQuote_HasView = _init_l_Lean_Parser_command_NotationSpec_symbolQuote_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_symbolQuote_HasView);
l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_symbolQuote_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_symbolQuote_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_symbolQuote_Parser___closed__1);
l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_unquotedSymbol_Parser___closed__1);
l_Lean_Parser_command_NotationSpec_unquotedSymbol_tokens = _init_l_Lean_Parser_command_NotationSpec_unquotedSymbol_tokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_unquotedSymbol_tokens);
l_Lean_Parser_command_NotationSpec_unquotedSymbol_View = _init_l_Lean_Parser_command_NotationSpec_unquotedSymbol_View();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_unquotedSymbol_View);
l_Lean_Parser_command_NotationSpec_notationSymbol = _init_l_Lean_Parser_command_NotationSpec_notationSymbol();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_notationSymbol);
l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_notationSymbol_HasView_x27);
l_Lean_Parser_command_NotationSpec_notationSymbol_HasView = _init_l_Lean_Parser_command_NotationSpec_notationSymbol_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_notationSymbol_HasView);
l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_notationSymbol_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_notationSymbol_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_notationSymbol_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_notationSymbol_Parser___closed__1);
l_Lean_Parser_command_NotationSpec_mixfixSymbol = _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_mixfixSymbol);
l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___elambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___elambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__3 = _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27___lambda__1___closed__3);
l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView_x27);
l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView = _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_mixfixSymbol_HasView);
l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_mixfixSymbol_Parser___closed__1);
l_Lean_Parser_command_NotationSpec_foldActionFolder = _init_l_Lean_Parser_command_NotationSpec_foldActionFolder();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldActionFolder);
l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView_x27);
l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView = _init_l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldActionFolder_HasView);
l_Lean_Parser_command_NotationSpec_foldAction = _init_l_Lean_Parser_command_NotationSpec_foldAction();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldAction);
l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldAction_HasView_x27);
l_Lean_Parser_command_NotationSpec_foldAction_HasView = _init_l_Lean_Parser_command_NotationSpec_foldAction_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldAction_HasView);
l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1 = _init_l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens___spec__4___rarg___closed__1);
l_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldAction_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_foldAction_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_foldAction_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_foldAction_Parser___closed__1);
l_Lean_Parser_command_NotationSpec_scopedAction = _init_l_Lean_Parser_command_NotationSpec_scopedAction();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_scopedAction);
l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_scopedAction_HasView_x27);
l_Lean_Parser_command_NotationSpec_scopedAction_HasView = _init_l_Lean_Parser_command_NotationSpec_scopedAction_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_scopedAction_HasView);
l_Lean_Parser_command_NotationSpec_actionKind = _init_l_Lean_Parser_command_NotationSpec_actionKind();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_actionKind);
l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_actionKind_HasView_x27);
l_Lean_Parser_command_NotationSpec_actionKind_HasView = _init_l_Lean_Parser_command_NotationSpec_actionKind_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_actionKind_HasView);
l_Lean_Parser_command_NotationSpec_action = _init_l_Lean_Parser_command_NotationSpec_action();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_action);
l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__3 = _init_l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_action_HasView_x27___lambda__1___closed__3);
l_Lean_Parser_command_NotationSpec_action_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_action_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_action_HasView_x27);
l_Lean_Parser_command_NotationSpec_action_HasView = _init_l_Lean_Parser_command_NotationSpec_action_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_action_HasView);
l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_action_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_action_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_action_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_action_Parser___closed__1);
l_Lean_Parser_command_NotationSpec_binder = _init_l_Lean_Parser_command_NotationSpec_binder();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_binder);
l_Lean_Parser_command_NotationSpec_binder_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_binder_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_binder_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_binder_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_binder_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_binder_HasView_x27);
l_Lean_Parser_command_NotationSpec_binder_HasView = _init_l_Lean_Parser_command_NotationSpec_binder_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_binder_HasView);
l_Lean_Parser_command_NotationSpec_binders = _init_l_Lean_Parser_command_NotationSpec_binders();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_binders);
l_Lean_Parser_command_NotationSpec_binders_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_binders_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_binders_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_binders_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_binders_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_binders_HasView_x27);
l_Lean_Parser_command_NotationSpec_binders_HasView = _init_l_Lean_Parser_command_NotationSpec_binders_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_binders_HasView);
l_Lean_Parser_command_NotationSpec_argument = _init_l_Lean_Parser_command_NotationSpec_argument();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_argument);
l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__3 = _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__3);
l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__4 = _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__4);
l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__5 = _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_argument_HasView_x27___lambda__1___closed__5);
l_Lean_Parser_command_NotationSpec_argument_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_argument_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_argument_HasView_x27);
l_Lean_Parser_command_NotationSpec_argument_HasView = _init_l_Lean_Parser_command_NotationSpec_argument_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_argument_HasView);
l_Lean_Parser_command_NotationSpec_transition = _init_l_Lean_Parser_command_NotationSpec_transition();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_transition);
l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_transition_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_transition_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_transition_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_transition_HasView_x27);
l_Lean_Parser_command_NotationSpec_transition_HasView = _init_l_Lean_Parser_command_NotationSpec_transition_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_transition_HasView);
l_Lean_Parser_command_NotationSpec_transition_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_transition_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_transition_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_transition_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_transition_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_transition_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_transition_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_transition_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_transition_Parser___closed__1);
l_Lean_Parser_command_NotationSpec_rule = _init_l_Lean_Parser_command_NotationSpec_rule();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_rule);
l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_rule_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_rule_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_rule_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_rule_HasView_x27);
l_Lean_Parser_command_NotationSpec_rule_HasView = _init_l_Lean_Parser_command_NotationSpec_rule_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_rule_HasView);
l_Lean_Parser_command_NotationSpec_rule_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_rule_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_rule_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_rule_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_rule_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_rule_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_rule_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_rule_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_rule_Parser___closed__1);
l_Lean_Parser_command_NotationSpec = _init_l_Lean_Parser_command_NotationSpec();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec);
l_Lean_Parser_command_NotationSpec_HasView_x27___elambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_HasView_x27___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_HasView_x27___elambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3 = _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__3);
l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__4 = _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__4);
l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__5 = _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__5);
l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__6 = _init_l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_HasView_x27___lambda__1___closed__6);
l_Lean_Parser_command_NotationSpec_HasView_x27 = _init_l_Lean_Parser_command_NotationSpec_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_HasView_x27);
l_Lean_Parser_command_NotationSpec_HasView = _init_l_Lean_Parser_command_NotationSpec_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_HasView);
l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_NotationSpec_Parser___closed__1 = _init_l_Lean_Parser_command_NotationSpec_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_NotationSpec_Parser___closed__1);
l_Lean_Parser_command_notation = _init_l_Lean_Parser_command_notation();
lean::mark_persistent(l_Lean_Parser_command_notation);
l_Lean_Parser_command_notation_HasView_x27___elambda__1___closed__1 = _init_l_Lean_Parser_command_notation_HasView_x27___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_notation_HasView_x27___elambda__1___closed__1);
l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_notation_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_notation_HasView_x27 = _init_l_Lean_Parser_command_notation_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_notation_HasView_x27);
l_Lean_Parser_command_notation_HasView = _init_l_Lean_Parser_command_notation_HasView();
lean::mark_persistent(l_Lean_Parser_command_notation_HasView);
l_Lean_Parser_command_notation_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_notation_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_notation_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_notation_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_notation_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_notation_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_notation_Parser___closed__1 = _init_l_Lean_Parser_command_notation_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_notation_Parser___closed__1);
l_Lean_Parser_command_reserveNotation = _init_l_Lean_Parser_command_reserveNotation();
lean::mark_persistent(l_Lean_Parser_command_reserveNotation);
l_Lean_Parser_command_reserveNotation_HasView_x27___elambda__1___closed__1 = _init_l_Lean_Parser_command_reserveNotation_HasView_x27___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_reserveNotation_HasView_x27___elambda__1___closed__1);
l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_reserveNotation_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_reserveNotation_HasView_x27 = _init_l_Lean_Parser_command_reserveNotation_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_reserveNotation_HasView_x27);
l_Lean_Parser_command_reserveNotation_HasView = _init_l_Lean_Parser_command_reserveNotation_HasView();
lean::mark_persistent(l_Lean_Parser_command_reserveNotation_HasView);
l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_reserveNotation_Parser___closed__1 = _init_l_Lean_Parser_command_reserveNotation_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_reserveNotation_Parser___closed__1);
l_Lean_Parser_command_mixfix_kind = _init_l_Lean_Parser_command_mixfix_kind();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind);
l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__1 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__1);
l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__2 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__2);
l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__3 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__3);
l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__4 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__4);
l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__5 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__5);
l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__6 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___elambda__1___closed__6);
l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__3 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__3);
l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__4 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__4);
l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__5 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__5);
l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__6);
l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__7 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27___lambda__1___closed__7);
l_Lean_Parser_command_mixfix_kind_HasView_x27 = _init_l_Lean_Parser_command_mixfix_kind_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView_x27);
l_Lean_Parser_command_mixfix_kind_HasView = _init_l_Lean_Parser_command_mixfix_kind_HasView();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_HasView);
l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_mixfix_kind_Parser___closed__1 = _init_l_Lean_Parser_command_mixfix_kind_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_mixfix_kind_Parser___closed__1);
l_Lean_Parser_command_mixfix = _init_l_Lean_Parser_command_mixfix();
lean::mark_persistent(l_Lean_Parser_command_mixfix);
l_Lean_Parser_command_mixfix_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_mixfix_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_mixfix_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_mixfix_HasView_x27 = _init_l_Lean_Parser_command_mixfix_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_mixfix_HasView_x27);
l_Lean_Parser_command_mixfix_HasView = _init_l_Lean_Parser_command_mixfix_HasView();
lean::mark_persistent(l_Lean_Parser_command_mixfix_HasView);
l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_mixfix_Parser___closed__1 = _init_l_Lean_Parser_command_mixfix_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_mixfix_Parser___closed__1);
l_Lean_Parser_command_notationLike = _init_l_Lean_Parser_command_notationLike();
lean::mark_persistent(l_Lean_Parser_command_notationLike);
l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_notationLike_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_notationLike_HasView_x27 = _init_l_Lean_Parser_command_notationLike_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_notationLike_HasView_x27);
l_Lean_Parser_command_notationLike_HasView = _init_l_Lean_Parser_command_notationLike_HasView();
lean::mark_persistent(l_Lean_Parser_command_notationLike_HasView);
l_Lean_Parser_command_notationLike_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_notationLike_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_notationLike_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_notationLike_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_notationLike_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_notationLike_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_notationLike_Parser___closed__1 = _init_l_Lean_Parser_command_notationLike_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_notationLike_Parser___closed__1);
l_Lean_Parser_command_reserveMixfix = _init_l_Lean_Parser_command_reserveMixfix();
lean::mark_persistent(l_Lean_Parser_command_reserveMixfix);
l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__1 = _init_l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__1);
l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__2 = _init_l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__2);
l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__3 = _init_l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_reserveMixfix_HasView_x27___lambda__1___closed__3);
l_Lean_Parser_command_reserveMixfix_HasView_x27 = _init_l_Lean_Parser_command_reserveMixfix_HasView_x27();
lean::mark_persistent(l_Lean_Parser_command_reserveMixfix_HasView_x27);
l_Lean_Parser_command_reserveMixfix_HasView = _init_l_Lean_Parser_command_reserveMixfix_HasView();
lean::mark_persistent(l_Lean_Parser_command_reserveMixfix_HasView);
l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasTokens);
l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasView);
l_Lean_Parser_command_reserveMixfix_Parser___closed__1 = _init_l_Lean_Parser_command_reserveMixfix_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_reserveMixfix_Parser___closed__1);
return w;
}
