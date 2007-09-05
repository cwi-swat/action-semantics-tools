#ifndef _AN_K_API_H
#define _AN_K_API_H

/*{{{  includes */

#include <aterm1.h>
#include "an-k-api_dict.h"

/*}}}  */

/*{{{  typedefs */

typedef struct _AN_K_Terminated *AN_K_Terminated;
typedef struct _AN_K_Action *AN_K_Action;
typedef struct _AN_K_ActionChoices *AN_K_ActionChoices;
typedef struct _AN_K_List *AN_K_List;
typedef struct _AN_K_EltElts *AN_K_EltElts;
typedef struct _AN_K_BoolConst *AN_K_BoolConst;
typedef struct _AN_K_Bool *AN_K_Bool;
typedef struct _AN_K_Datum *AN_K_Datum;
typedef struct _AN_K_Numeral *AN_K_Numeral;
typedef struct _AN_K_Nat *AN_K_Nat;
typedef struct _AN_K_Int *AN_K_Int;

/*}}}  */

void AN_K_initAnKApiApi(void);

/*{{{  term conversion functions */

AN_K_Terminated AN_K_TerminatedFromTerm(ATerm t);
ATerm AN_K_TerminatedToTerm(AN_K_Terminated arg);
AN_K_Action AN_K_ActionFromTerm(ATerm t);
ATerm AN_K_ActionToTerm(AN_K_Action arg);
AN_K_ActionChoices AN_K_ActionChoicesFromTerm(ATerm t);
ATerm AN_K_ActionChoicesToTerm(AN_K_ActionChoices arg);
AN_K_List AN_K_ListFromTerm(ATerm t);
ATerm AN_K_ListToTerm(AN_K_List arg);
AN_K_EltElts AN_K_EltEltsFromTerm(ATerm t);
ATerm AN_K_EltEltsToTerm(AN_K_EltElts arg);
AN_K_BoolConst AN_K_BoolConstFromTerm(ATerm t);
ATerm AN_K_BoolConstToTerm(AN_K_BoolConst arg);
AN_K_Bool AN_K_BoolFromTerm(ATerm t);
ATerm AN_K_BoolToTerm(AN_K_Bool arg);
AN_K_Datum AN_K_DatumFromTerm(ATerm t);
ATerm AN_K_DatumToTerm(AN_K_Datum arg);
AN_K_Numeral AN_K_NumeralFromTerm(ATerm t);
ATerm AN_K_NumeralToTerm(AN_K_Numeral arg);
AN_K_Nat AN_K_NatFromTerm(ATerm t);
ATerm AN_K_NatToTerm(AN_K_Nat arg);
AN_K_Int AN_K_IntFromTerm(ATerm t);
ATerm AN_K_IntToTerm(AN_K_Int arg);

/*}}}  */
/*{{{  constructors */

AN_K_Terminated AN_K_makeTerminatedNormal(AN_K_Data data);
AN_K_Terminated AN_K_makeTerminatedExceptional(AN_K_Data data);
AN_K_Terminated AN_K_makeTerminatedFailed();
AN_K_Action AN_K_makeActionProvide(AN_K_Data data);
AN_K_Action AN_K_makeActionGive(AN_K_DataOp op);
AN_K_Action AN_K_makeActionCheck(AN_K_DataPred pred);
AN_K_Action AN_K_makeActionSelect(AN_K_ActionChoices choices);
AN_K_Action AN_K_makeActionTerminatedAction(AN_K_Terminated Terminated);
AN_K_Action AN_K_makeActionBracketAction(AN_K_Action Action);
AN_K_Action AN_K_makeActionConstAction(AN_K_ActionConst ActionConst);
AN_K_Action AN_K_makeActionPrefixAction(AN_K_ActionPrefix prefix, AN_K_Action arg);
AN_K_Action AN_K_makeActionInfixAction(AN_K_Action lhs, AN_K_ActionInfix infix, AN_K_Action rhs);
AN_K_ActionChoices AN_K_makeActionChoicesSingle(AN_K_Action head);
AN_K_ActionChoices AN_K_makeActionChoicesMany(AN_K_Action head, AN_K_ActionChoices tail);
AN_K_List AN_K_makeListDefault(AN_K_EltElts elts);
AN_K_EltElts AN_K_makeEltEltsEmpty();
AN_K_EltElts AN_K_makeEltEltsSingle(AN_K_Elt head);
AN_K_EltElts AN_K_makeEltEltsMany(AN_K_Elt head, AN_K_EltElts tail);
AN_K_BoolConst AN_K_makeBoolConstTrue();
AN_K_BoolConst AN_K_makeBoolConstFalse();
AN_K_Bool AN_K_makeBoolBool(AN_K_BoolConst BoolConst);
AN_K_Bool AN_K_makeBoolNot(AN_K_Bool arg);
AN_K_Bool AN_K_makeBoolOr(AN_K_Bool lhs, AN_K_Bool rhs);
AN_K_Bool AN_K_makeBoolAnd(AN_K_Bool lhs, AN_K_Bool rhs);
AN_K_Bool AN_K_makeBoolBracketBool(AN_K_Bool Bool);
AN_K_Bool AN_K_makeBoolGt(AN_K_Int Int);
AN_K_Bool AN_K_makeBoolGe(AN_K_Int Int);
AN_K_Bool AN_K_makeBoolLt(AN_K_Int Int);
AN_K_Bool AN_K_makeBoolLe(AN_K_Int Int);
AN_K_Bool AN_K_makeBoolDefault(AN_K_Nat Nat);
AN_K_Datum AN_K_makeDatumDatum(AN_K_Int Int);
AN_K_Numeral AN_K_makeNumeralNumeral(AN_K_NatCon NatCon);
AN_K_Nat AN_K_makeNatNat(AN_K_Numeral Numeral);
AN_K_Nat AN_K_makeNatMonus(AN_K_Nat Nat);
AN_K_Nat AN_K_makeNatBracketNat(AN_K_Nat Nat);
AN_K_Nat AN_K_makeNatDefault(AN_K_Nat Nat);
AN_K_Int AN_K_makeIntInt(AN_K_Nat Nat);
AN_K_Int AN_K_makeIntUnaryPlus(AN_K_Nat Nat);
AN_K_Int AN_K_makeIntUnaryMinus(AN_K_Nat Nat);
AN_K_Int AN_K_makeIntPlus(AN_K_Int Int);
AN_K_Int AN_K_makeIntMinus(AN_K_Int Int);
AN_K_Int AN_K_makeIntTimes(AN_K_Int Int);
AN_K_Int AN_K_makeIntBracketInt(AN_K_Int Int);

/*}}}  */
/*{{{  equality functions */

ATbool AN_K_isEqualTerminated(AN_K_Terminated arg0, AN_K_Terminated arg1);
ATbool AN_K_isEqualAction(AN_K_Action arg0, AN_K_Action arg1);
ATbool AN_K_isEqualActionChoices(AN_K_ActionChoices arg0, AN_K_ActionChoices arg1);
ATbool AN_K_isEqualList(AN_K_List arg0, AN_K_List arg1);
ATbool AN_K_isEqualEltElts(AN_K_EltElts arg0, AN_K_EltElts arg1);
ATbool AN_K_isEqualBoolConst(AN_K_BoolConst arg0, AN_K_BoolConst arg1);
ATbool AN_K_isEqualBool(AN_K_Bool arg0, AN_K_Bool arg1);
ATbool AN_K_isEqualDatum(AN_K_Datum arg0, AN_K_Datum arg1);
ATbool AN_K_isEqualNumeral(AN_K_Numeral arg0, AN_K_Numeral arg1);
ATbool AN_K_isEqualNat(AN_K_Nat arg0, AN_K_Nat arg1);
ATbool AN_K_isEqualInt(AN_K_Int arg0, AN_K_Int arg1);

/*}}}  */
/*{{{  AN_K_Terminated accessors */

ATbool AN_K_isValidTerminated(AN_K_Terminated arg);
inline ATbool AN_K_isTerminatedNormal(AN_K_Terminated arg);
inline ATbool AN_K_isTerminatedExceptional(AN_K_Terminated arg);
inline ATbool AN_K_isTerminatedFailed(AN_K_Terminated arg);
ATbool AN_K_hasTerminatedData(AN_K_Terminated arg);
AN_K_Data AN_K_getTerminatedData(AN_K_Terminated arg);
AN_K_Terminated AN_K_setTerminatedData(AN_K_Terminated arg, AN_K_Data data);

/*}}}  */
/*{{{  AN_K_Action accessors */

ATbool AN_K_isValidAction(AN_K_Action arg);
inline ATbool AN_K_isActionProvide(AN_K_Action arg);
inline ATbool AN_K_isActionGive(AN_K_Action arg);
inline ATbool AN_K_isActionCheck(AN_K_Action arg);
inline ATbool AN_K_isActionSelect(AN_K_Action arg);
inline ATbool AN_K_isActionTerminatedAction(AN_K_Action arg);
inline ATbool AN_K_isActionBracketAction(AN_K_Action arg);
inline ATbool AN_K_isActionConstAction(AN_K_Action arg);
inline ATbool AN_K_isActionPrefixAction(AN_K_Action arg);
inline ATbool AN_K_isActionInfixAction(AN_K_Action arg);
ATbool AN_K_hasActionData(AN_K_Action arg);
AN_K_Data AN_K_getActionData(AN_K_Action arg);
AN_K_Action AN_K_setActionData(AN_K_Action arg, AN_K_Data data);
ATbool AN_K_hasActionOp(AN_K_Action arg);
AN_K_DataOp AN_K_getActionOp(AN_K_Action arg);
AN_K_Action AN_K_setActionOp(AN_K_Action arg, AN_K_DataOp op);
ATbool AN_K_hasActionPred(AN_K_Action arg);
AN_K_DataPred AN_K_getActionPred(AN_K_Action arg);
AN_K_Action AN_K_setActionPred(AN_K_Action arg, AN_K_DataPred pred);
ATbool AN_K_hasActionChoices(AN_K_Action arg);
AN_K_ActionChoices AN_K_getActionChoices(AN_K_Action arg);
AN_K_Action AN_K_setActionChoices(AN_K_Action arg, AN_K_ActionChoices choices);
ATbool AN_K_hasActionTerminated(AN_K_Action arg);
AN_K_Terminated AN_K_getActionTerminated(AN_K_Action arg);
AN_K_Action AN_K_setActionTerminated(AN_K_Action arg, AN_K_Terminated Terminated);
ATbool AN_K_hasActionAction(AN_K_Action arg);
AN_K_Action AN_K_getActionAction(AN_K_Action arg);
AN_K_Action AN_K_setActionAction(AN_K_Action arg, AN_K_Action Action);
ATbool AN_K_hasActionActionConst(AN_K_Action arg);
AN_K_ActionConst AN_K_getActionActionConst(AN_K_Action arg);
AN_K_Action AN_K_setActionActionConst(AN_K_Action arg, AN_K_ActionConst ActionConst);
ATbool AN_K_hasActionPrefix(AN_K_Action arg);
AN_K_ActionPrefix AN_K_getActionPrefix(AN_K_Action arg);
AN_K_Action AN_K_setActionPrefix(AN_K_Action arg, AN_K_ActionPrefix prefix);
ATbool AN_K_hasActionArg(AN_K_Action arg);
AN_K_Action AN_K_getActionArg(AN_K_Action arg);
AN_K_Action AN_K_setActionArg(AN_K_Action arg, AN_K_Action arg);
ATbool AN_K_hasActionLhs(AN_K_Action arg);
AN_K_Action AN_K_getActionLhs(AN_K_Action arg);
AN_K_Action AN_K_setActionLhs(AN_K_Action arg, AN_K_Action lhs);
ATbool AN_K_hasActionInfix(AN_K_Action arg);
AN_K_ActionInfix AN_K_getActionInfix(AN_K_Action arg);
AN_K_Action AN_K_setActionInfix(AN_K_Action arg, AN_K_ActionInfix infix);
ATbool AN_K_hasActionRhs(AN_K_Action arg);
AN_K_Action AN_K_getActionRhs(AN_K_Action arg);
AN_K_Action AN_K_setActionRhs(AN_K_Action arg, AN_K_Action rhs);

/*}}}  */
/*{{{  AN_K_ActionChoices accessors */

ATbool AN_K_isValidActionChoices(AN_K_ActionChoices arg);
inline ATbool AN_K_isActionChoicesSingle(AN_K_ActionChoices arg);
inline ATbool AN_K_isActionChoicesMany(AN_K_ActionChoices arg);
ATbool AN_K_hasActionChoicesHead(AN_K_ActionChoices arg);
AN_K_Action AN_K_getActionChoicesHead(AN_K_ActionChoices arg);
AN_K_ActionChoices AN_K_setActionChoicesHead(AN_K_ActionChoices arg, AN_K_Action head);
ATbool AN_K_hasActionChoicesTail(AN_K_ActionChoices arg);
AN_K_ActionChoices AN_K_getActionChoicesTail(AN_K_ActionChoices arg);
AN_K_ActionChoices AN_K_setActionChoicesTail(AN_K_ActionChoices arg, AN_K_ActionChoices tail);

/*}}}  */
/*{{{  AN_K_List accessors */

ATbool AN_K_isValidList(AN_K_List arg);
inline ATbool AN_K_isListDefault(AN_K_List arg);
ATbool AN_K_hasListElts(AN_K_List arg);
AN_K_EltElts AN_K_getListElts(AN_K_List arg);
AN_K_List AN_K_setListElts(AN_K_List arg, AN_K_EltElts elts);

/*}}}  */
/*{{{  AN_K_EltElts accessors */

ATbool AN_K_isValidEltElts(AN_K_EltElts arg);
inline ATbool AN_K_isEltEltsEmpty(AN_K_EltElts arg);
inline ATbool AN_K_isEltEltsSingle(AN_K_EltElts arg);
inline ATbool AN_K_isEltEltsMany(AN_K_EltElts arg);
ATbool AN_K_hasEltEltsHead(AN_K_EltElts arg);
AN_K_Elt AN_K_getEltEltsHead(AN_K_EltElts arg);
AN_K_EltElts AN_K_setEltEltsHead(AN_K_EltElts arg, AN_K_Elt head);
ATbool AN_K_hasEltEltsTail(AN_K_EltElts arg);
AN_K_EltElts AN_K_getEltEltsTail(AN_K_EltElts arg);
AN_K_EltElts AN_K_setEltEltsTail(AN_K_EltElts arg, AN_K_EltElts tail);

/*}}}  */
/*{{{  AN_K_BoolConst accessors */

ATbool AN_K_isValidBoolConst(AN_K_BoolConst arg);
inline ATbool AN_K_isBoolConstTrue(AN_K_BoolConst arg);
inline ATbool AN_K_isBoolConstFalse(AN_K_BoolConst arg);

/*}}}  */
/*{{{  AN_K_Bool accessors */

ATbool AN_K_isValidBool(AN_K_Bool arg);
inline ATbool AN_K_isBoolBool(AN_K_Bool arg);
inline ATbool AN_K_isBoolNot(AN_K_Bool arg);
inline ATbool AN_K_isBoolOr(AN_K_Bool arg);
inline ATbool AN_K_isBoolAnd(AN_K_Bool arg);
inline ATbool AN_K_isBoolBracketBool(AN_K_Bool arg);
inline ATbool AN_K_isBoolGt(AN_K_Bool arg);
inline ATbool AN_K_isBoolGe(AN_K_Bool arg);
inline ATbool AN_K_isBoolLt(AN_K_Bool arg);
inline ATbool AN_K_isBoolLe(AN_K_Bool arg);
inline ATbool AN_K_isBoolDefault(AN_K_Bool arg);
ATbool AN_K_hasBoolBoolConst(AN_K_Bool arg);
AN_K_BoolConst AN_K_getBoolBoolConst(AN_K_Bool arg);
AN_K_Bool AN_K_setBoolBoolConst(AN_K_Bool arg, AN_K_BoolConst BoolConst);
ATbool AN_K_hasBoolArg(AN_K_Bool arg);
AN_K_Bool AN_K_getBoolArg(AN_K_Bool arg);
AN_K_Bool AN_K_setBoolArg(AN_K_Bool arg, AN_K_Bool arg);
ATbool AN_K_hasBoolLhs(AN_K_Bool arg);
AN_K_Bool AN_K_getBoolLhs(AN_K_Bool arg);
AN_K_Bool AN_K_setBoolLhs(AN_K_Bool arg, AN_K_Bool lhs);
ATbool AN_K_hasBoolRhs(AN_K_Bool arg);
AN_K_Bool AN_K_getBoolRhs(AN_K_Bool arg);
AN_K_Bool AN_K_setBoolRhs(AN_K_Bool arg, AN_K_Bool rhs);
ATbool AN_K_hasBoolBool(AN_K_Bool arg);
AN_K_Bool AN_K_getBoolBool(AN_K_Bool arg);
AN_K_Bool AN_K_setBoolBool(AN_K_Bool arg, AN_K_Bool Bool);
ATbool AN_K_hasBoolInt(AN_K_Bool arg);
AN_K_Int AN_K_getBoolInt(AN_K_Bool arg);
AN_K_Bool AN_K_setBoolInt(AN_K_Bool arg, AN_K_Int Int);
ATbool AN_K_hasBoolNat(AN_K_Bool arg);
AN_K_Nat AN_K_getBoolNat(AN_K_Bool arg);
AN_K_Bool AN_K_setBoolNat(AN_K_Bool arg, AN_K_Nat Nat);

/*}}}  */
/*{{{  AN_K_Datum accessors */

ATbool AN_K_isValidDatum(AN_K_Datum arg);
inline ATbool AN_K_isDatumDatum(AN_K_Datum arg);
ATbool AN_K_hasDatumInt(AN_K_Datum arg);
AN_K_Int AN_K_getDatumInt(AN_K_Datum arg);
AN_K_Datum AN_K_setDatumInt(AN_K_Datum arg, AN_K_Int Int);

/*}}}  */
/*{{{  AN_K_Numeral accessors */

ATbool AN_K_isValidNumeral(AN_K_Numeral arg);
inline ATbool AN_K_isNumeralNumeral(AN_K_Numeral arg);
ATbool AN_K_hasNumeralNatCon(AN_K_Numeral arg);
AN_K_NatCon AN_K_getNumeralNatCon(AN_K_Numeral arg);
AN_K_Numeral AN_K_setNumeralNatCon(AN_K_Numeral arg, AN_K_NatCon NatCon);

/*}}}  */
/*{{{  AN_K_Nat accessors */

ATbool AN_K_isValidNat(AN_K_Nat arg);
inline ATbool AN_K_isNatNat(AN_K_Nat arg);
inline ATbool AN_K_isNatMonus(AN_K_Nat arg);
inline ATbool AN_K_isNatBracketNat(AN_K_Nat arg);
inline ATbool AN_K_isNatDefault(AN_K_Nat arg);
ATbool AN_K_hasNatNumeral(AN_K_Nat arg);
AN_K_Numeral AN_K_getNatNumeral(AN_K_Nat arg);
AN_K_Nat AN_K_setNatNumeral(AN_K_Nat arg, AN_K_Numeral Numeral);
ATbool AN_K_hasNatNat(AN_K_Nat arg);
AN_K_Nat AN_K_getNatNat(AN_K_Nat arg);
AN_K_Nat AN_K_setNatNat(AN_K_Nat arg, AN_K_Nat Nat);

/*}}}  */
/*{{{  AN_K_Int accessors */

ATbool AN_K_isValidInt(AN_K_Int arg);
inline ATbool AN_K_isIntInt(AN_K_Int arg);
inline ATbool AN_K_isIntUnaryPlus(AN_K_Int arg);
inline ATbool AN_K_isIntUnaryMinus(AN_K_Int arg);
inline ATbool AN_K_isIntPlus(AN_K_Int arg);
inline ATbool AN_K_isIntMinus(AN_K_Int arg);
inline ATbool AN_K_isIntTimes(AN_K_Int arg);
inline ATbool AN_K_isIntBracketInt(AN_K_Int arg);
ATbool AN_K_hasIntNat(AN_K_Int arg);
AN_K_Nat AN_K_getIntNat(AN_K_Int arg);
AN_K_Int AN_K_setIntNat(AN_K_Int arg, AN_K_Nat Nat);
ATbool AN_K_hasIntInt(AN_K_Int arg);
AN_K_Int AN_K_getIntInt(AN_K_Int arg);
AN_K_Int AN_K_setIntInt(AN_K_Int arg, AN_K_Int Int);

/*}}}  */
/*{{{  sort visitors */

AN_K_Terminated AN_K_visitTerminated(AN_K_Terminated arg, AN_K_Data (*acceptData)(AN_K_Data));
AN_K_Action AN_K_visitAction(AN_K_Action arg, AN_K_Data (*acceptData)(AN_K_Data), AN_K_DataOp (*acceptOp)(AN_K_DataOp), AN_K_DataPred (*acceptPred)(AN_K_DataPred), AN_K_ActionChoices (*acceptChoices)(AN_K_ActionChoices), AN_K_Terminated (*acceptTerminated)(AN_K_Terminated), AN_K_ActionConst (*acceptActionConst)(AN_K_ActionConst), AN_K_ActionPrefix (*acceptPrefix)(AN_K_ActionPrefix), AN_K_ActionInfix (*acceptInfix)(AN_K_ActionInfix));
AN_K_ActionChoices AN_K_visitActionChoices(AN_K_ActionChoices arg, AN_K_Action (*acceptHead)(AN_K_Action));
AN_K_List AN_K_visitList(AN_K_List arg, AN_K_EltElts (*acceptElts)(AN_K_EltElts));
AN_K_EltElts AN_K_visitEltElts(AN_K_EltElts arg, AN_K_Elt (*acceptHead)(AN_K_Elt));
AN_K_BoolConst AN_K_visitBoolConst(AN_K_BoolConst arg);
AN_K_Bool AN_K_visitBool(AN_K_Bool arg, AN_K_BoolConst (*acceptBoolConst)(AN_K_BoolConst), AN_K_Int (*acceptInt)(AN_K_Int), AN_K_Nat (*acceptNat)(AN_K_Nat));
AN_K_Datum AN_K_visitDatum(AN_K_Datum arg, AN_K_Int (*acceptInt)(AN_K_Int));
AN_K_Numeral AN_K_visitNumeral(AN_K_Numeral arg, AN_K_NatCon (*acceptNatCon)(AN_K_NatCon));
AN_K_Nat AN_K_visitNat(AN_K_Nat arg, AN_K_Numeral (*acceptNumeral)(AN_K_Numeral));
AN_K_Int AN_K_visitInt(AN_K_Int arg, AN_K_Nat (*acceptNat)(AN_K_Nat));

/*}}}  */

#endif /* _AN_K_API_H */
