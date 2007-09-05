#ifndef _AN_K_H
#define _AN_K_H

/*{{{  includes */

#include <aterm1.h>
#include "AN-K_dict.h"

/*}}}  */

/*{{{  prologue */


#include <stdlib.h>
#include <aterm2.h>

typedef ATerm ANK_NatCon;
typedef ATerm ANK_String;
typedef ATerm ANK_Agent;
typedef ATerm ANK_Cell;
typedef ATerm ANK_List;

#define ANK_NatConToInt(n) (atoi(ATwriteToString((ATerm)(n))))
#define ANK_StringToStr(s) (ATgetName(ATgetAFun((ATermAppl)(s))))




/*}}}  */
/*{{{  typedefs */

typedef struct _ANK_DataSort *ANK_DataSort;
typedef struct _ANK_DataSortList *ANK_DataSortList;
typedef struct _ANK_OutcomeOutcomes *ANK_OutcomeOutcomes;
typedef struct _ANK_Outcome *ANK_Outcome;
typedef struct _ANK_SortName *ANK_SortName;
typedef struct _ANK_Data *ANK_Data;
typedef struct _ANK_DataOpPrefix *ANK_DataOpPrefix;
typedef struct _ANK_DataOp *ANK_DataOp;
typedef struct _ANK_DataPred *ANK_DataPred;
typedef struct _ANK_DataConst *ANK_DataConst;
typedef struct _ANK_DataTail *ANK_DataTail;
typedef struct _ANK_BoolConst *ANK_BoolConst;
typedef struct _ANK_Bool *ANK_Bool;
typedef struct _ANK_Datum *ANK_Datum;
typedef struct _ANK_Numeral *ANK_Numeral;
typedef struct _ANK_Nat *ANK_Nat;
typedef struct _ANK_Int *ANK_Int;
typedef struct _ANK_Action *ANK_Action;
typedef struct _ANK_DataOpInfix *ANK_DataOpInfix;
typedef struct _ANK_Token *ANK_Token;
typedef struct _ANK_MessageTag *ANK_MessageTag;
typedef struct _ANK_DataPredInfix *ANK_DataPredInfix;
typedef struct _ANK_DataPredPrefix *ANK_DataPredPrefix;
typedef struct _ANK_ActionConst *ANK_ActionConst;
typedef struct _ANK_ActionInfix *ANK_ActionInfix;
typedef struct _ANK_ActionPrefix *ANK_ActionPrefix;
typedef struct _ANK_Terminated *ANK_Terminated;
typedef struct _ANK_ActionChoices *ANK_ActionChoices;

/*}}}  */

void ANK_initANKApi(void);

/*{{{  term conversion functions */

ANK_DataSort ANK_DataSortFromTerm(ATerm t);
ATerm ANK_DataSortToTerm(ANK_DataSort arg);
ANK_DataSortList ANK_DataSortListFromTerm(ATerm t);
ATerm ANK_DataSortListToTerm(ANK_DataSortList arg);
ANK_OutcomeOutcomes ANK_OutcomeOutcomesFromTerm(ATerm t);
ATerm ANK_OutcomeOutcomesToTerm(ANK_OutcomeOutcomes arg);
ANK_Outcome ANK_OutcomeFromTerm(ATerm t);
ATerm ANK_OutcomeToTerm(ANK_Outcome arg);
ANK_SortName ANK_SortNameFromTerm(ATerm t);
ATerm ANK_SortNameToTerm(ANK_SortName arg);
ANK_Data ANK_DataFromTerm(ATerm t);
ATerm ANK_DataToTerm(ANK_Data arg);
ANK_DataOpPrefix ANK_DataOpPrefixFromTerm(ATerm t);
ATerm ANK_DataOpPrefixToTerm(ANK_DataOpPrefix arg);
ANK_DataOp ANK_DataOpFromTerm(ATerm t);
ATerm ANK_DataOpToTerm(ANK_DataOp arg);
ANK_DataPred ANK_DataPredFromTerm(ATerm t);
ATerm ANK_DataPredToTerm(ANK_DataPred arg);
ANK_DataConst ANK_DataConstFromTerm(ATerm t);
ATerm ANK_DataConstToTerm(ANK_DataConst arg);
ANK_DataTail ANK_DataTailFromTerm(ATerm t);
ATerm ANK_DataTailToTerm(ANK_DataTail arg);
ANK_BoolConst ANK_BoolConstFromTerm(ATerm t);
ATerm ANK_BoolConstToTerm(ANK_BoolConst arg);
ANK_Bool ANK_BoolFromTerm(ATerm t);
ATerm ANK_BoolToTerm(ANK_Bool arg);
ANK_Datum ANK_DatumFromTerm(ATerm t);
ATerm ANK_DatumToTerm(ANK_Datum arg);
ANK_Numeral ANK_NumeralFromTerm(ATerm t);
ATerm ANK_NumeralToTerm(ANK_Numeral arg);
ANK_Nat ANK_NatFromTerm(ATerm t);
ATerm ANK_NatToTerm(ANK_Nat arg);
ANK_Int ANK_IntFromTerm(ATerm t);
ATerm ANK_IntToTerm(ANK_Int arg);
ANK_Action ANK_ActionFromTerm(ATerm t);
ATerm ANK_ActionToTerm(ANK_Action arg);
ANK_DataOpInfix ANK_DataOpInfixFromTerm(ATerm t);
ATerm ANK_DataOpInfixToTerm(ANK_DataOpInfix arg);
ANK_Token ANK_TokenFromTerm(ATerm t);
ATerm ANK_TokenToTerm(ANK_Token arg);
ANK_MessageTag ANK_MessageTagFromTerm(ATerm t);
ATerm ANK_MessageTagToTerm(ANK_MessageTag arg);
ANK_DataPredInfix ANK_DataPredInfixFromTerm(ATerm t);
ATerm ANK_DataPredInfixToTerm(ANK_DataPredInfix arg);
ANK_DataPredPrefix ANK_DataPredPrefixFromTerm(ATerm t);
ATerm ANK_DataPredPrefixToTerm(ANK_DataPredPrefix arg);
ANK_ActionConst ANK_ActionConstFromTerm(ATerm t);
ATerm ANK_ActionConstToTerm(ANK_ActionConst arg);
ANK_ActionInfix ANK_ActionInfixFromTerm(ATerm t);
ATerm ANK_ActionInfixToTerm(ANK_ActionInfix arg);
ANK_ActionPrefix ANK_ActionPrefixFromTerm(ATerm t);
ATerm ANK_ActionPrefixToTerm(ANK_ActionPrefix arg);
ANK_Terminated ANK_TerminatedFromTerm(ATerm t);
ATerm ANK_TerminatedToTerm(ANK_Terminated arg);
ANK_ActionChoices ANK_ActionChoicesFromTerm(ATerm t);
ATerm ANK_ActionChoicesToTerm(ANK_ActionChoices arg);

/*}}}  */
/*{{{  constructors */

ANK_DataSort ANK_makeDataSortSortname(ANK_SortName SortName);
ANK_DataSort ANK_makeDataSortStar(ANK_DataSort sort);
ANK_DataSort ANK_makeDataSortPlus(ANK_DataSort sort);
ANK_DataSort ANK_makeDataSortOpt(ANK_DataSort sort);
ANK_DataSort ANK_makeDataSortTuple(ANK_DataSortList list);
ANK_DataSort ANK_makeDataSortAlt(ANK_DataSortList list);
ANK_DataSort ANK_makeDataSortOutcome(ANK_OutcomeOutcomes outcomes);
ANK_DataSortList ANK_makeDataSortListEmpty();
ANK_DataSortList ANK_makeDataSortListSingle(ANK_DataSort head);
ANK_DataSortList ANK_makeDataSortListMany(ANK_DataSort head, ANK_DataSortList tail);
ANK_OutcomeOutcomes ANK_makeOutcomeOutcomesSingle(ANK_Outcome head);
ANK_OutcomeOutcomes ANK_makeOutcomeOutcomesMany(ANK_Outcome head, ANK_OutcomeOutcomes tail);
ANK_Outcome ANK_makeOutcomeTaking(ANK_DataSort sort);
ANK_Outcome ANK_makeOutcomeGiving(ANK_DataSort sort);
ANK_Outcome ANK_makeOutcomeRaising(ANK_DataSort sort);
ANK_Outcome ANK_makeOutcomeFailing();
ANK_SortName ANK_makeSortNameData();
ANK_SortName ANK_makeSortNameDatum();
ANK_SortName ANK_makeSortNameBindable();
ANK_SortName ANK_makeSortNameBindings();
ANK_SortName ANK_makeSortNameAgent();
ANK_SortName ANK_makeSortNameCell();
ANK_SortName ANK_makeSortNameStorable();
ANK_SortName ANK_makeSortNameAction();
ANK_SortName ANK_makeSortNameToken();
ANK_SortName ANK_makeSortNameString();
ANK_SortName ANK_makeSortNameMessage();
ANK_SortName ANK_makeSortNameMessageTag();
ANK_SortName ANK_makeSortNameList();
ANK_SortName ANK_makeSortNameBool();
ANK_SortName ANK_makeSortNameNat();
ANK_SortName ANK_makeSortNamePos();
ANK_SortName ANK_makeSortNameInt();
ANK_Data ANK_makeDataDatum(ANK_Datum Datum);
ANK_Data ANK_makeDataDataconst(ANK_DataConst DataConst);
ANK_Data ANK_makeDataTuple(ANK_Data head, ANK_DataTail tail);
ANK_Data ANK_makeDataDefault(ANK_Data Data);
ANK_Data ANK_makeDataEmpty();
ANK_DataOpPrefix ANK_makeDataOpPrefixTheSort(ANK_DataSort sort);
ANK_DataOpPrefix ANK_makeDataOpPrefixBinding();
ANK_DataOpPrefix ANK_makeDataOpPrefixOverriding();
ANK_DataOpPrefix ANK_makeDataOpPrefixDisjointUnion();
ANK_DataOpPrefix ANK_makeDataOpPrefixBound();
ANK_DataOpPrefix ANK_makeDataOpPrefixActionPrefix(ANK_ActionPrefix ActionPrefix);
ANK_DataOpPrefix ANK_makeDataOpPrefixProvide();
ANK_DataOpPrefix ANK_makeDataOpPrefixTupleToList();
ANK_DataOpPrefix ANK_makeDataOpPrefixNot();
ANK_DataOpPrefix ANK_makeDataOpPrefixOpComponent(ANK_NatCon natCon);
ANK_DataOp ANK_makeDataOpPrefix(ANK_DataOpPrefix prefix);
ANK_DataOp ANK_makeDataOpInfix(ANK_DataOpInfix infix);
ANK_DataPred ANK_makeDataPredPrefix(ANK_DataPredPrefix prefix);
ANK_DataPred ANK_makeDataPredInfix(ANK_DataPredInfix infix);
ANK_DataConst ANK_makeDataConstTrue();
ANK_DataConst ANK_makeDataConstFalse();
ANK_DataConst ANK_makeDataConstNoBindings();
ANK_DataTail ANK_makeDataTailSingle(ANK_Data head);
ANK_DataTail ANK_makeDataTailMany(ANK_Data head, ANK_DataTail tail);
ANK_BoolConst ANK_makeBoolConstTrue();
ANK_BoolConst ANK_makeBoolConstFalse();
ANK_Bool ANK_makeBoolBoolconst(ANK_BoolConst boolconst);
ANK_Bool ANK_makeBoolNot(ANK_Bool notArg);
ANK_Bool ANK_makeBoolOr(ANK_Bool lhs, ANK_Bool rhs);
ANK_Bool ANK_makeBoolAnd(ANK_Bool lhs, ANK_Bool rhs);
ANK_Bool ANK_makeBoolDefault(ANK_Bool Bool);
ANK_Bool ANK_makeBoolGt(ANK_Bool lhs, ANK_Bool rhs);
ANK_Bool ANK_makeBoolGe(ANK_Bool lhs, ANK_Bool rhs);
ANK_Bool ANK_makeBoolLt(ANK_Bool lhs, ANK_Bool rhs);
ANK_Bool ANK_makeBoolLe(ANK_Bool lhs, ANK_Bool rhs);
ANK_Datum ANK_makeDatumAgent(ANK_Agent Agent);
ANK_Datum ANK_makeDatumCell(ANK_Cell Cell);
ANK_Datum ANK_makeDatumAction(ANK_Action Action);
ANK_Datum ANK_makeDatumToken(ANK_Token Token);
ANK_Datum ANK_makeDatumMessageTag(ANK_MessageTag MessageTag);
ANK_Datum ANK_makeDatumList(ANK_List List);
ANK_Datum ANK_makeDatumDatum(ANK_BoolConst BoolConst);
ANK_Datum ANK_makeDatumInt(ANK_Int Int);
ANK_Numeral ANK_makeNumeralNatCon(ANK_NatCon NatCon);
ANK_Nat ANK_makeNatNumeral(ANK_Numeral Numeral);
ANK_Nat ANK_makeNatMonus(ANK_Nat lhs, ANK_Nat rhs);
ANK_Nat ANK_makeNatDefault(ANK_Nat nat);
ANK_Int ANK_makeIntNat(ANK_Nat Nat);
ANK_Int ANK_makeIntUnaryPlus(ANK_Nat natArg);
ANK_Int ANK_makeIntUnaryMinus(ANK_Nat natArg);
ANK_Int ANK_makeIntPlus(ANK_Int lhs, ANK_Int rhs);
ANK_Int ANK_makeIntMinus(ANK_Int lhs, ANK_Int rhs);
ANK_Int ANK_makeIntTimes(ANK_Int lhs, ANK_Int rhs);
ANK_Int ANK_makeIntDefault(ANK_Int Int);
ANK_Action ANK_makeActionTerminated(ANK_Terminated Terminated);
ANK_Action ANK_makeActionDefault(ANK_Action Action);
ANK_Action ANK_makeActionConst(ANK_ActionConst ActionConst);
ANK_Action ANK_makeActionPrefix(ANK_ActionPrefix prefix, ANK_Action prefixarg);
ANK_Action ANK_makeActionInfix(ANK_Action lhs, ANK_ActionInfix infix, ANK_Action rhs);
ANK_Action ANK_makeActionProvide(ANK_Data data);
ANK_Action ANK_makeActionGive(ANK_DataOp op);
ANK_Action ANK_makeActionCheck(ANK_DataPred pred);
ANK_Action ANK_makeActionSelect(ANK_ActionChoices choices);
ANK_DataOpInfix ANK_makeDataOpInfixActionInfix(ANK_ActionInfix ActionInfix);
ANK_DataOpInfix ANK_makeDataOpInfixPlus();
ANK_DataOpInfix ANK_makeDataOpInfixMonus();
ANK_DataOpInfix ANK_makeDataOpInfixTimes();
ANK_DataOpInfix ANK_makeDataOpInfixMinus();
ANK_Token ANK_makeTokenString(ANK_String String);
ANK_MessageTag ANK_makeMessageTagDefault(ANK_Token token);
ANK_DataPredInfix ANK_makeDataPredInfixGt();
ANK_DataPredInfix ANK_makeDataPredInfixLt();
ANK_DataPredInfix ANK_makeDataPredInfixGe();
ANK_DataPredInfix ANK_makeDataPredInfixLe();
ANK_DataPredInfix ANK_makeDataPredInfixEquals();
ANK_DataPredPrefix ANK_makeDataPredPrefixDef();
ANK_ActionConst ANK_makeActionConstCopy();
ANK_ActionConst ANK_makeActionConstRaise();
ANK_ActionConst ANK_makeActionConstFail();
ANK_ActionConst ANK_makeActionConstChooseNatural();
ANK_ActionConst ANK_makeActionConstGiveCurrentBindings();
ANK_ActionConst ANK_makeActionConstEnact();
ANK_ActionConst ANK_makeActionConstCreate();
ANK_ActionConst ANK_makeActionConstDestroy();
ANK_ActionConst ANK_makeActionConstUpdate();
ANK_ActionConst ANK_makeActionConstInspect();
ANK_ActionConst ANK_makeActionConstActivate();
ANK_ActionConst ANK_makeActionConstDeactivate();
ANK_ActionConst ANK_makeActionConstGiveCurrentAgent();
ANK_ActionConst ANK_makeActionConstSend();
ANK_ActionConst ANK_makeActionConstReceive();
ANK_ActionConst ANK_makeActionConstGiveCurrentTime();
ANK_ActionInfix ANK_makeActionInfixThen();
ANK_ActionInfix ANK_makeActionInfixAndThen();
ANK_ActionInfix ANK_makeActionInfixAnd();
ANK_ActionInfix ANK_makeActionInfixExceptionally();
ANK_ActionInfix ANK_makeActionInfixOtherwise();
ANK_ActionInfix ANK_makeActionInfixAndExceptionally();
ANK_ActionInfix ANK_makeActionInfixHence();
ANK_ActionPrefix ANK_makeActionPrefixIndivisibly();
ANK_Terminated ANK_makeTerminatedNormal(ANK_Data data);
ANK_Terminated ANK_makeTerminatedExceptional(ANK_Data data);
ANK_Terminated ANK_makeTerminatedFailed();
ANK_ActionChoices ANK_makeActionChoicesSingle(ANK_Action head);
ANK_ActionChoices ANK_makeActionChoicesMany(ANK_Action head, ANK_ActionChoices tail);

/*}}}  */
/*{{{  equality functions */

ATbool ANK_isEqualDataSort(ANK_DataSort arg0, ANK_DataSort arg1);
ATbool ANK_isEqualDataSortList(ANK_DataSortList arg0, ANK_DataSortList arg1);
ATbool ANK_isEqualOutcomeOutcomes(ANK_OutcomeOutcomes arg0, ANK_OutcomeOutcomes arg1);
ATbool ANK_isEqualOutcome(ANK_Outcome arg0, ANK_Outcome arg1);
ATbool ANK_isEqualSortName(ANK_SortName arg0, ANK_SortName arg1);
ATbool ANK_isEqualData(ANK_Data arg0, ANK_Data arg1);
ATbool ANK_isEqualDataOpPrefix(ANK_DataOpPrefix arg0, ANK_DataOpPrefix arg1);
ATbool ANK_isEqualDataOp(ANK_DataOp arg0, ANK_DataOp arg1);
ATbool ANK_isEqualDataPred(ANK_DataPred arg0, ANK_DataPred arg1);
ATbool ANK_isEqualDataConst(ANK_DataConst arg0, ANK_DataConst arg1);
ATbool ANK_isEqualDataTail(ANK_DataTail arg0, ANK_DataTail arg1);
ATbool ANK_isEqualBoolConst(ANK_BoolConst arg0, ANK_BoolConst arg1);
ATbool ANK_isEqualBool(ANK_Bool arg0, ANK_Bool arg1);
ATbool ANK_isEqualDatum(ANK_Datum arg0, ANK_Datum arg1);
ATbool ANK_isEqualNumeral(ANK_Numeral arg0, ANK_Numeral arg1);
ATbool ANK_isEqualNat(ANK_Nat arg0, ANK_Nat arg1);
ATbool ANK_isEqualInt(ANK_Int arg0, ANK_Int arg1);
ATbool ANK_isEqualAction(ANK_Action arg0, ANK_Action arg1);
ATbool ANK_isEqualDataOpInfix(ANK_DataOpInfix arg0, ANK_DataOpInfix arg1);
ATbool ANK_isEqualToken(ANK_Token arg0, ANK_Token arg1);
ATbool ANK_isEqualMessageTag(ANK_MessageTag arg0, ANK_MessageTag arg1);
ATbool ANK_isEqualDataPredInfix(ANK_DataPredInfix arg0, ANK_DataPredInfix arg1);
ATbool ANK_isEqualDataPredPrefix(ANK_DataPredPrefix arg0, ANK_DataPredPrefix arg1);
ATbool ANK_isEqualActionConst(ANK_ActionConst arg0, ANK_ActionConst arg1);
ATbool ANK_isEqualActionInfix(ANK_ActionInfix arg0, ANK_ActionInfix arg1);
ATbool ANK_isEqualActionPrefix(ANK_ActionPrefix arg0, ANK_ActionPrefix arg1);
ATbool ANK_isEqualTerminated(ANK_Terminated arg0, ANK_Terminated arg1);
ATbool ANK_isEqualActionChoices(ANK_ActionChoices arg0, ANK_ActionChoices arg1);

/*}}}  */
/*{{{  ANK_DataSort accessors */

ATbool ANK_isValidDataSort(ANK_DataSort arg);
inline ATbool ANK_isDataSortSortname(ANK_DataSort arg);
inline ATbool ANK_isDataSortStar(ANK_DataSort arg);
inline ATbool ANK_isDataSortPlus(ANK_DataSort arg);
inline ATbool ANK_isDataSortOpt(ANK_DataSort arg);
inline ATbool ANK_isDataSortTuple(ANK_DataSort arg);
inline ATbool ANK_isDataSortAlt(ANK_DataSort arg);
inline ATbool ANK_isDataSortOutcome(ANK_DataSort arg);
ATbool ANK_hasDataSortSortName(ANK_DataSort arg);
ANK_SortName ANK_getDataSortSortName(ANK_DataSort arg);
ANK_DataSort ANK_setDataSortSortName(ANK_DataSort arg, ANK_SortName SortName);
ATbool ANK_hasDataSortSort(ANK_DataSort arg);
ANK_DataSort ANK_getDataSortSort(ANK_DataSort arg);
ANK_DataSort ANK_setDataSortSort(ANK_DataSort arg, ANK_DataSort sort);
ATbool ANK_hasDataSortList(ANK_DataSort arg);
ANK_DataSortList ANK_getDataSortList(ANK_DataSort arg);
ANK_DataSort ANK_setDataSortList(ANK_DataSort arg, ANK_DataSortList list);
ATbool ANK_hasDataSortOutcomes(ANK_DataSort arg);
ANK_OutcomeOutcomes ANK_getDataSortOutcomes(ANK_DataSort arg);
ANK_DataSort ANK_setDataSortOutcomes(ANK_DataSort arg, ANK_OutcomeOutcomes outcomes);

/*}}}  */
/*{{{  ANK_DataSortList accessors */

ATbool ANK_isValidDataSortList(ANK_DataSortList arg);
inline ATbool ANK_isDataSortListEmpty(ANK_DataSortList arg);
inline ATbool ANK_isDataSortListSingle(ANK_DataSortList arg);
inline ATbool ANK_isDataSortListMany(ANK_DataSortList arg);
ATbool ANK_hasDataSortListHead(ANK_DataSortList arg);
ANK_DataSort ANK_getDataSortListHead(ANK_DataSortList arg);
ANK_DataSortList ANK_setDataSortListHead(ANK_DataSortList arg, ANK_DataSort head);
ATbool ANK_hasDataSortListTail(ANK_DataSortList arg);
ANK_DataSortList ANK_getDataSortListTail(ANK_DataSortList arg);
ANK_DataSortList ANK_setDataSortListTail(ANK_DataSortList arg, ANK_DataSortList tail);

/*}}}  */
/*{{{  ANK_OutcomeOutcomes accessors */

ATbool ANK_isValidOutcomeOutcomes(ANK_OutcomeOutcomes arg);
inline ATbool ANK_isOutcomeOutcomesSingle(ANK_OutcomeOutcomes arg);
inline ATbool ANK_isOutcomeOutcomesMany(ANK_OutcomeOutcomes arg);
ATbool ANK_hasOutcomeOutcomesHead(ANK_OutcomeOutcomes arg);
ANK_Outcome ANK_getOutcomeOutcomesHead(ANK_OutcomeOutcomes arg);
ANK_OutcomeOutcomes ANK_setOutcomeOutcomesHead(ANK_OutcomeOutcomes arg, ANK_Outcome head);
ATbool ANK_hasOutcomeOutcomesTail(ANK_OutcomeOutcomes arg);
ANK_OutcomeOutcomes ANK_getOutcomeOutcomesTail(ANK_OutcomeOutcomes arg);
ANK_OutcomeOutcomes ANK_setOutcomeOutcomesTail(ANK_OutcomeOutcomes arg, ANK_OutcomeOutcomes tail);

/*}}}  */
/*{{{  ANK_Outcome accessors */

ATbool ANK_isValidOutcome(ANK_Outcome arg);
inline ATbool ANK_isOutcomeTaking(ANK_Outcome arg);
inline ATbool ANK_isOutcomeGiving(ANK_Outcome arg);
inline ATbool ANK_isOutcomeRaising(ANK_Outcome arg);
inline ATbool ANK_isOutcomeFailing(ANK_Outcome arg);
ATbool ANK_hasOutcomeSort(ANK_Outcome arg);
ANK_DataSort ANK_getOutcomeSort(ANK_Outcome arg);
ANK_Outcome ANK_setOutcomeSort(ANK_Outcome arg, ANK_DataSort sort);

/*}}}  */
/*{{{  ANK_SortName accessors */

ATbool ANK_isValidSortName(ANK_SortName arg);
inline ATbool ANK_isSortNameData(ANK_SortName arg);
inline ATbool ANK_isSortNameDatum(ANK_SortName arg);
inline ATbool ANK_isSortNameBindable(ANK_SortName arg);
inline ATbool ANK_isSortNameBindings(ANK_SortName arg);
inline ATbool ANK_isSortNameAgent(ANK_SortName arg);
inline ATbool ANK_isSortNameCell(ANK_SortName arg);
inline ATbool ANK_isSortNameStorable(ANK_SortName arg);
inline ATbool ANK_isSortNameAction(ANK_SortName arg);
inline ATbool ANK_isSortNameToken(ANK_SortName arg);
inline ATbool ANK_isSortNameString(ANK_SortName arg);
inline ATbool ANK_isSortNameMessage(ANK_SortName arg);
inline ATbool ANK_isSortNameMessageTag(ANK_SortName arg);
inline ATbool ANK_isSortNameList(ANK_SortName arg);
inline ATbool ANK_isSortNameBool(ANK_SortName arg);
inline ATbool ANK_isSortNameNat(ANK_SortName arg);
inline ATbool ANK_isSortNamePos(ANK_SortName arg);
inline ATbool ANK_isSortNameInt(ANK_SortName arg);

/*}}}  */
/*{{{  ANK_Data accessors */

ATbool ANK_isValidData(ANK_Data arg);
inline ATbool ANK_isDataDatum(ANK_Data arg);
inline ATbool ANK_isDataDataconst(ANK_Data arg);
inline ATbool ANK_isDataTuple(ANK_Data arg);
inline ATbool ANK_isDataDefault(ANK_Data arg);
inline ATbool ANK_isDataEmpty(ANK_Data arg);
ATbool ANK_hasDataDatum(ANK_Data arg);
ANK_Datum ANK_getDataDatum(ANK_Data arg);
ANK_Data ANK_setDataDatum(ANK_Data arg, ANK_Datum Datum);
ATbool ANK_hasDataDataConst(ANK_Data arg);
ANK_DataConst ANK_getDataDataConst(ANK_Data arg);
ANK_Data ANK_setDataDataConst(ANK_Data arg, ANK_DataConst DataConst);
ATbool ANK_hasDataHead(ANK_Data arg);
ANK_Data ANK_getDataHead(ANK_Data arg);
ANK_Data ANK_setDataHead(ANK_Data arg, ANK_Data head);
ATbool ANK_hasDataTail(ANK_Data arg);
ANK_DataTail ANK_getDataTail(ANK_Data arg);
ANK_Data ANK_setDataTail(ANK_Data arg, ANK_DataTail tail);
ATbool ANK_hasDataData(ANK_Data arg);
ANK_Data ANK_getDataData(ANK_Data arg);
ANK_Data ANK_setDataData(ANK_Data arg, ANK_Data Data);

/*}}}  */
/*{{{  ANK_DataOpPrefix accessors */

ATbool ANK_isValidDataOpPrefix(ANK_DataOpPrefix arg);
inline ATbool ANK_isDataOpPrefixTheSort(ANK_DataOpPrefix arg);
inline ATbool ANK_isDataOpPrefixBinding(ANK_DataOpPrefix arg);
inline ATbool ANK_isDataOpPrefixOverriding(ANK_DataOpPrefix arg);
inline ATbool ANK_isDataOpPrefixDisjointUnion(ANK_DataOpPrefix arg);
inline ATbool ANK_isDataOpPrefixBound(ANK_DataOpPrefix arg);
inline ATbool ANK_isDataOpPrefixActionPrefix(ANK_DataOpPrefix arg);
inline ATbool ANK_isDataOpPrefixProvide(ANK_DataOpPrefix arg);
inline ATbool ANK_isDataOpPrefixTupleToList(ANK_DataOpPrefix arg);
inline ATbool ANK_isDataOpPrefixNot(ANK_DataOpPrefix arg);
inline ATbool ANK_isDataOpPrefixOpComponent(ANK_DataOpPrefix arg);
ATbool ANK_hasDataOpPrefixSort(ANK_DataOpPrefix arg);
ANK_DataSort ANK_getDataOpPrefixSort(ANK_DataOpPrefix arg);
ANK_DataOpPrefix ANK_setDataOpPrefixSort(ANK_DataOpPrefix arg, ANK_DataSort sort);
ATbool ANK_hasDataOpPrefixActionPrefix(ANK_DataOpPrefix arg);
ANK_ActionPrefix ANK_getDataOpPrefixActionPrefix(ANK_DataOpPrefix arg);
ANK_DataOpPrefix ANK_setDataOpPrefixActionPrefix(ANK_DataOpPrefix arg, ANK_ActionPrefix ActionPrefix);
ATbool ANK_hasDataOpPrefixNatCon(ANK_DataOpPrefix arg);
ANK_NatCon ANK_getDataOpPrefixNatCon(ANK_DataOpPrefix arg);
ANK_DataOpPrefix ANK_setDataOpPrefixNatCon(ANK_DataOpPrefix arg, ANK_NatCon natCon);

/*}}}  */
/*{{{  ANK_DataOp accessors */

ATbool ANK_isValidDataOp(ANK_DataOp arg);
inline ATbool ANK_isDataOpPrefix(ANK_DataOp arg);
inline ATbool ANK_isDataOpInfix(ANK_DataOp arg);
ATbool ANK_hasDataOpPrefix(ANK_DataOp arg);
ANK_DataOpPrefix ANK_getDataOpPrefix(ANK_DataOp arg);
ANK_DataOp ANK_setDataOpPrefix(ANK_DataOp arg, ANK_DataOpPrefix prefix);
ATbool ANK_hasDataOpInfix(ANK_DataOp arg);
ANK_DataOpInfix ANK_getDataOpInfix(ANK_DataOp arg);
ANK_DataOp ANK_setDataOpInfix(ANK_DataOp arg, ANK_DataOpInfix infix);

/*}}}  */
/*{{{  ANK_DataPred accessors */

ATbool ANK_isValidDataPred(ANK_DataPred arg);
inline ATbool ANK_isDataPredPrefix(ANK_DataPred arg);
inline ATbool ANK_isDataPredInfix(ANK_DataPred arg);
ATbool ANK_hasDataPredPrefix(ANK_DataPred arg);
ANK_DataPredPrefix ANK_getDataPredPrefix(ANK_DataPred arg);
ANK_DataPred ANK_setDataPredPrefix(ANK_DataPred arg, ANK_DataPredPrefix prefix);
ATbool ANK_hasDataPredInfix(ANK_DataPred arg);
ANK_DataPredInfix ANK_getDataPredInfix(ANK_DataPred arg);
ANK_DataPred ANK_setDataPredInfix(ANK_DataPred arg, ANK_DataPredInfix infix);

/*}}}  */
/*{{{  ANK_DataConst accessors */

ATbool ANK_isValidDataConst(ANK_DataConst arg);
inline ATbool ANK_isDataConstTrue(ANK_DataConst arg);
inline ATbool ANK_isDataConstFalse(ANK_DataConst arg);
inline ATbool ANK_isDataConstNoBindings(ANK_DataConst arg);

/*}}}  */
/*{{{  ANK_DataTail accessors */

ATbool ANK_isValidDataTail(ANK_DataTail arg);
inline ATbool ANK_isDataTailSingle(ANK_DataTail arg);
inline ATbool ANK_isDataTailMany(ANK_DataTail arg);
ATbool ANK_hasDataTailHead(ANK_DataTail arg);
ANK_Data ANK_getDataTailHead(ANK_DataTail arg);
ANK_DataTail ANK_setDataTailHead(ANK_DataTail arg, ANK_Data head);
ATbool ANK_hasDataTailTail(ANK_DataTail arg);
ANK_DataTail ANK_getDataTailTail(ANK_DataTail arg);
ANK_DataTail ANK_setDataTailTail(ANK_DataTail arg, ANK_DataTail tail);

/*}}}  */
/*{{{  ANK_BoolConst accessors */

ATbool ANK_isValidBoolConst(ANK_BoolConst arg);
inline ATbool ANK_isBoolConstTrue(ANK_BoolConst arg);
inline ATbool ANK_isBoolConstFalse(ANK_BoolConst arg);

/*}}}  */
/*{{{  ANK_Bool accessors */

ATbool ANK_isValidBool(ANK_Bool arg);
inline ATbool ANK_isBoolBoolconst(ANK_Bool arg);
inline ATbool ANK_isBoolNot(ANK_Bool arg);
inline ATbool ANK_isBoolOr(ANK_Bool arg);
inline ATbool ANK_isBoolAnd(ANK_Bool arg);
inline ATbool ANK_isBoolDefault(ANK_Bool arg);
inline ATbool ANK_isBoolGt(ANK_Bool arg);
inline ATbool ANK_isBoolGe(ANK_Bool arg);
inline ATbool ANK_isBoolLt(ANK_Bool arg);
inline ATbool ANK_isBoolLe(ANK_Bool arg);
ATbool ANK_hasBoolBoolconst(ANK_Bool arg);
ANK_BoolConst ANK_getBoolBoolconst(ANK_Bool arg);
ANK_Bool ANK_setBoolBoolconst(ANK_Bool arg, ANK_BoolConst boolconst);
ATbool ANK_hasBoolNotArg(ANK_Bool arg);
ANK_Bool ANK_getBoolNotArg(ANK_Bool arg);
ANK_Bool ANK_setBoolNotArg(ANK_Bool arg, ANK_Bool notArg);
ATbool ANK_hasBoolLhs(ANK_Bool arg);
ANK_Bool ANK_getBoolLhs(ANK_Bool arg);
ANK_Bool ANK_setBoolLhs(ANK_Bool arg, ANK_Bool lhs);
ATbool ANK_hasBoolRhs(ANK_Bool arg);
ANK_Bool ANK_getBoolRhs(ANK_Bool arg);
ANK_Bool ANK_setBoolRhs(ANK_Bool arg, ANK_Bool rhs);
ATbool ANK_hasBoolBool(ANK_Bool arg);
ANK_Bool ANK_getBoolBool(ANK_Bool arg);
ANK_Bool ANK_setBoolBool(ANK_Bool arg, ANK_Bool Bool);

/*}}}  */
/*{{{  ANK_Datum accessors */

ATbool ANK_isValidDatum(ANK_Datum arg);
inline ATbool ANK_isDatumAgent(ANK_Datum arg);
inline ATbool ANK_isDatumCell(ANK_Datum arg);
inline ATbool ANK_isDatumAction(ANK_Datum arg);
inline ATbool ANK_isDatumToken(ANK_Datum arg);
inline ATbool ANK_isDatumMessageTag(ANK_Datum arg);
inline ATbool ANK_isDatumList(ANK_Datum arg);
inline ATbool ANK_isDatumDatum(ANK_Datum arg);
inline ATbool ANK_isDatumInt(ANK_Datum arg);
ATbool ANK_hasDatumAgent(ANK_Datum arg);
ANK_Agent ANK_getDatumAgent(ANK_Datum arg);
ANK_Datum ANK_setDatumAgent(ANK_Datum arg, ANK_Agent Agent);
ATbool ANK_hasDatumCell(ANK_Datum arg);
ANK_Cell ANK_getDatumCell(ANK_Datum arg);
ANK_Datum ANK_setDatumCell(ANK_Datum arg, ANK_Cell Cell);
ATbool ANK_hasDatumAction(ANK_Datum arg);
ANK_Action ANK_getDatumAction(ANK_Datum arg);
ANK_Datum ANK_setDatumAction(ANK_Datum arg, ANK_Action Action);
ATbool ANK_hasDatumToken(ANK_Datum arg);
ANK_Token ANK_getDatumToken(ANK_Datum arg);
ANK_Datum ANK_setDatumToken(ANK_Datum arg, ANK_Token Token);
ATbool ANK_hasDatumMessageTag(ANK_Datum arg);
ANK_MessageTag ANK_getDatumMessageTag(ANK_Datum arg);
ANK_Datum ANK_setDatumMessageTag(ANK_Datum arg, ANK_MessageTag MessageTag);
ATbool ANK_hasDatumList(ANK_Datum arg);
ANK_List ANK_getDatumList(ANK_Datum arg);
ANK_Datum ANK_setDatumList(ANK_Datum arg, ANK_List List);
ATbool ANK_hasDatumBoolConst(ANK_Datum arg);
ANK_BoolConst ANK_getDatumBoolConst(ANK_Datum arg);
ANK_Datum ANK_setDatumBoolConst(ANK_Datum arg, ANK_BoolConst BoolConst);
ATbool ANK_hasDatumInt(ANK_Datum arg);
ANK_Int ANK_getDatumInt(ANK_Datum arg);
ANK_Datum ANK_setDatumInt(ANK_Datum arg, ANK_Int Int);

/*}}}  */
/*{{{  ANK_Numeral accessors */

ATbool ANK_isValidNumeral(ANK_Numeral arg);
inline ATbool ANK_isNumeralNatCon(ANK_Numeral arg);
ATbool ANK_hasNumeralNatCon(ANK_Numeral arg);
ANK_NatCon ANK_getNumeralNatCon(ANK_Numeral arg);
ANK_Numeral ANK_setNumeralNatCon(ANK_Numeral arg, ANK_NatCon NatCon);

/*}}}  */
/*{{{  ANK_Nat accessors */

ATbool ANK_isValidNat(ANK_Nat arg);
inline ATbool ANK_isNatNumeral(ANK_Nat arg);
inline ATbool ANK_isNatMonus(ANK_Nat arg);
inline ATbool ANK_isNatDefault(ANK_Nat arg);
ATbool ANK_hasNatNumeral(ANK_Nat arg);
ANK_Numeral ANK_getNatNumeral(ANK_Nat arg);
ANK_Nat ANK_setNatNumeral(ANK_Nat arg, ANK_Numeral Numeral);
ATbool ANK_hasNatLhs(ANK_Nat arg);
ANK_Nat ANK_getNatLhs(ANK_Nat arg);
ANK_Nat ANK_setNatLhs(ANK_Nat arg, ANK_Nat lhs);
ATbool ANK_hasNatRhs(ANK_Nat arg);
ANK_Nat ANK_getNatRhs(ANK_Nat arg);
ANK_Nat ANK_setNatRhs(ANK_Nat arg, ANK_Nat rhs);
ATbool ANK_hasNatNat(ANK_Nat arg);
ANK_Nat ANK_getNatNat(ANK_Nat arg);
ANK_Nat ANK_setNatNat(ANK_Nat arg, ANK_Nat nat);

/*}}}  */
/*{{{  ANK_Int accessors */

ATbool ANK_isValidInt(ANK_Int arg);
inline ATbool ANK_isIntNat(ANK_Int arg);
inline ATbool ANK_isIntUnaryPlus(ANK_Int arg);
inline ATbool ANK_isIntUnaryMinus(ANK_Int arg);
inline ATbool ANK_isIntPlus(ANK_Int arg);
inline ATbool ANK_isIntMinus(ANK_Int arg);
inline ATbool ANK_isIntTimes(ANK_Int arg);
inline ATbool ANK_isIntDefault(ANK_Int arg);
ATbool ANK_hasIntNat(ANK_Int arg);
ANK_Nat ANK_getIntNat(ANK_Int arg);
ANK_Int ANK_setIntNat(ANK_Int arg, ANK_Nat Nat);
ATbool ANK_hasIntNatArg(ANK_Int arg);
ANK_Nat ANK_getIntNatArg(ANK_Int arg);
ANK_Int ANK_setIntNatArg(ANK_Int arg, ANK_Nat natArg);
ATbool ANK_hasIntLhs(ANK_Int arg);
ANK_Int ANK_getIntLhs(ANK_Int arg);
ANK_Int ANK_setIntLhs(ANK_Int arg, ANK_Int lhs);
ATbool ANK_hasIntRhs(ANK_Int arg);
ANK_Int ANK_getIntRhs(ANK_Int arg);
ANK_Int ANK_setIntRhs(ANK_Int arg, ANK_Int rhs);
ATbool ANK_hasIntInt(ANK_Int arg);
ANK_Int ANK_getIntInt(ANK_Int arg);
ANK_Int ANK_setIntInt(ANK_Int arg, ANK_Int Int);

/*}}}  */
/*{{{  ANK_Action accessors */

ATbool ANK_isValidAction(ANK_Action arg);
inline ATbool ANK_isActionTerminated(ANK_Action arg);
inline ATbool ANK_isActionDefault(ANK_Action arg);
inline ATbool ANK_isActionConst(ANK_Action arg);
inline ATbool ANK_isActionPrefix(ANK_Action arg);
inline ATbool ANK_isActionInfix(ANK_Action arg);
inline ATbool ANK_isActionProvide(ANK_Action arg);
inline ATbool ANK_isActionGive(ANK_Action arg);
inline ATbool ANK_isActionCheck(ANK_Action arg);
inline ATbool ANK_isActionSelect(ANK_Action arg);
ATbool ANK_hasActionTerminated(ANK_Action arg);
ANK_Terminated ANK_getActionTerminated(ANK_Action arg);
ANK_Action ANK_setActionTerminated(ANK_Action arg, ANK_Terminated Terminated);
ATbool ANK_hasActionAction(ANK_Action arg);
ANK_Action ANK_getActionAction(ANK_Action arg);
ANK_Action ANK_setActionAction(ANK_Action arg, ANK_Action Action);
ATbool ANK_hasActionActionConst(ANK_Action arg);
ANK_ActionConst ANK_getActionActionConst(ANK_Action arg);
ANK_Action ANK_setActionActionConst(ANK_Action arg, ANK_ActionConst ActionConst);
ATbool ANK_hasActionPrefix(ANK_Action arg);
ANK_ActionPrefix ANK_getActionPrefix(ANK_Action arg);
ANK_Action ANK_setActionPrefix(ANK_Action arg, ANK_ActionPrefix prefix);
ATbool ANK_hasActionPrefixarg(ANK_Action arg);
ANK_Action ANK_getActionPrefixarg(ANK_Action arg);
ANK_Action ANK_setActionPrefixarg(ANK_Action arg, ANK_Action prefixarg);
ATbool ANK_hasActionLhs(ANK_Action arg);
ANK_Action ANK_getActionLhs(ANK_Action arg);
ANK_Action ANK_setActionLhs(ANK_Action arg, ANK_Action lhs);
ATbool ANK_hasActionInfix(ANK_Action arg);
ANK_ActionInfix ANK_getActionInfix(ANK_Action arg);
ANK_Action ANK_setActionInfix(ANK_Action arg, ANK_ActionInfix infix);
ATbool ANK_hasActionRhs(ANK_Action arg);
ANK_Action ANK_getActionRhs(ANK_Action arg);
ANK_Action ANK_setActionRhs(ANK_Action arg, ANK_Action rhs);
ATbool ANK_hasActionData(ANK_Action arg);
ANK_Data ANK_getActionData(ANK_Action arg);
ANK_Action ANK_setActionData(ANK_Action arg, ANK_Data data);
ATbool ANK_hasActionOp(ANK_Action arg);
ANK_DataOp ANK_getActionOp(ANK_Action arg);
ANK_Action ANK_setActionOp(ANK_Action arg, ANK_DataOp op);
ATbool ANK_hasActionPred(ANK_Action arg);
ANK_DataPred ANK_getActionPred(ANK_Action arg);
ANK_Action ANK_setActionPred(ANK_Action arg, ANK_DataPred pred);
ATbool ANK_hasActionChoices(ANK_Action arg);
ANK_ActionChoices ANK_getActionChoices(ANK_Action arg);
ANK_Action ANK_setActionChoices(ANK_Action arg, ANK_ActionChoices choices);

/*}}}  */
/*{{{  ANK_DataOpInfix accessors */

ATbool ANK_isValidDataOpInfix(ANK_DataOpInfix arg);
inline ATbool ANK_isDataOpInfixActionInfix(ANK_DataOpInfix arg);
inline ATbool ANK_isDataOpInfixPlus(ANK_DataOpInfix arg);
inline ATbool ANK_isDataOpInfixMonus(ANK_DataOpInfix arg);
inline ATbool ANK_isDataOpInfixTimes(ANK_DataOpInfix arg);
inline ATbool ANK_isDataOpInfixMinus(ANK_DataOpInfix arg);
ATbool ANK_hasDataOpInfixActionInfix(ANK_DataOpInfix arg);
ANK_ActionInfix ANK_getDataOpInfixActionInfix(ANK_DataOpInfix arg);
ANK_DataOpInfix ANK_setDataOpInfixActionInfix(ANK_DataOpInfix arg, ANK_ActionInfix ActionInfix);

/*}}}  */
/*{{{  ANK_Token accessors */

ATbool ANK_isValidToken(ANK_Token arg);
inline ATbool ANK_isTokenString(ANK_Token arg);
ATbool ANK_hasTokenString(ANK_Token arg);
ANK_String ANK_getTokenString(ANK_Token arg);
ANK_Token ANK_setTokenString(ANK_Token arg, ANK_String String);

/*}}}  */
/*{{{  ANK_MessageTag accessors */

ATbool ANK_isValidMessageTag(ANK_MessageTag arg);
inline ATbool ANK_isMessageTagDefault(ANK_MessageTag arg);
ATbool ANK_hasMessageTagToken(ANK_MessageTag arg);
ANK_Token ANK_getMessageTagToken(ANK_MessageTag arg);
ANK_MessageTag ANK_setMessageTagToken(ANK_MessageTag arg, ANK_Token token);

/*}}}  */
/*{{{  ANK_DataPredInfix accessors */

ATbool ANK_isValidDataPredInfix(ANK_DataPredInfix arg);
inline ATbool ANK_isDataPredInfixGt(ANK_DataPredInfix arg);
inline ATbool ANK_isDataPredInfixLt(ANK_DataPredInfix arg);
inline ATbool ANK_isDataPredInfixGe(ANK_DataPredInfix arg);
inline ATbool ANK_isDataPredInfixLe(ANK_DataPredInfix arg);
inline ATbool ANK_isDataPredInfixEquals(ANK_DataPredInfix arg);

/*}}}  */
/*{{{  ANK_DataPredPrefix accessors */

ATbool ANK_isValidDataPredPrefix(ANK_DataPredPrefix arg);
inline ATbool ANK_isDataPredPrefixDef(ANK_DataPredPrefix arg);

/*}}}  */
/*{{{  ANK_ActionConst accessors */

ATbool ANK_isValidActionConst(ANK_ActionConst arg);
inline ATbool ANK_isActionConstCopy(ANK_ActionConst arg);
inline ATbool ANK_isActionConstRaise(ANK_ActionConst arg);
inline ATbool ANK_isActionConstFail(ANK_ActionConst arg);
inline ATbool ANK_isActionConstChooseNatural(ANK_ActionConst arg);
inline ATbool ANK_isActionConstGiveCurrentBindings(ANK_ActionConst arg);
inline ATbool ANK_isActionConstEnact(ANK_ActionConst arg);
inline ATbool ANK_isActionConstCreate(ANK_ActionConst arg);
inline ATbool ANK_isActionConstDestroy(ANK_ActionConst arg);
inline ATbool ANK_isActionConstUpdate(ANK_ActionConst arg);
inline ATbool ANK_isActionConstInspect(ANK_ActionConst arg);
inline ATbool ANK_isActionConstActivate(ANK_ActionConst arg);
inline ATbool ANK_isActionConstDeactivate(ANK_ActionConst arg);
inline ATbool ANK_isActionConstGiveCurrentAgent(ANK_ActionConst arg);
inline ATbool ANK_isActionConstSend(ANK_ActionConst arg);
inline ATbool ANK_isActionConstReceive(ANK_ActionConst arg);
inline ATbool ANK_isActionConstGiveCurrentTime(ANK_ActionConst arg);

/*}}}  */
/*{{{  ANK_ActionInfix accessors */

ATbool ANK_isValidActionInfix(ANK_ActionInfix arg);
inline ATbool ANK_isActionInfixThen(ANK_ActionInfix arg);
inline ATbool ANK_isActionInfixAndThen(ANK_ActionInfix arg);
inline ATbool ANK_isActionInfixAnd(ANK_ActionInfix arg);
inline ATbool ANK_isActionInfixExceptionally(ANK_ActionInfix arg);
inline ATbool ANK_isActionInfixOtherwise(ANK_ActionInfix arg);
inline ATbool ANK_isActionInfixAndExceptionally(ANK_ActionInfix arg);
inline ATbool ANK_isActionInfixHence(ANK_ActionInfix arg);

/*}}}  */
/*{{{  ANK_ActionPrefix accessors */

ATbool ANK_isValidActionPrefix(ANK_ActionPrefix arg);
inline ATbool ANK_isActionPrefixIndivisibly(ANK_ActionPrefix arg);

/*}}}  */
/*{{{  ANK_Terminated accessors */

ATbool ANK_isValidTerminated(ANK_Terminated arg);
inline ATbool ANK_isTerminatedNormal(ANK_Terminated arg);
inline ATbool ANK_isTerminatedExceptional(ANK_Terminated arg);
inline ATbool ANK_isTerminatedFailed(ANK_Terminated arg);
ATbool ANK_hasTerminatedData(ANK_Terminated arg);
ANK_Data ANK_getTerminatedData(ANK_Terminated arg);
ANK_Terminated ANK_setTerminatedData(ANK_Terminated arg, ANK_Data data);

/*}}}  */
/*{{{  ANK_ActionChoices accessors */

ATbool ANK_isValidActionChoices(ANK_ActionChoices arg);
inline ATbool ANK_isActionChoicesSingle(ANK_ActionChoices arg);
inline ATbool ANK_isActionChoicesMany(ANK_ActionChoices arg);
ATbool ANK_hasActionChoicesHead(ANK_ActionChoices arg);
ANK_Action ANK_getActionChoicesHead(ANK_ActionChoices arg);
ANK_ActionChoices ANK_setActionChoicesHead(ANK_ActionChoices arg, ANK_Action head);
ATbool ANK_hasActionChoicesTail(ANK_ActionChoices arg);
ANK_ActionChoices ANK_getActionChoicesTail(ANK_ActionChoices arg);
ANK_ActionChoices ANK_setActionChoicesTail(ANK_ActionChoices arg, ANK_ActionChoices tail);

/*}}}  */
/*{{{  sort visitors */

ANK_DataSort ANK_visitDataSort(ANK_DataSort arg, ANK_SortName (*acceptSortName)(ANK_SortName), ANK_DataSortList (*acceptList)(ANK_DataSortList), ANK_OutcomeOutcomes (*acceptOutcomes)(ANK_OutcomeOutcomes));
ANK_DataSortList ANK_visitDataSortList(ANK_DataSortList arg, ANK_DataSort (*acceptHead)(ANK_DataSort));
ANK_OutcomeOutcomes ANK_visitOutcomeOutcomes(ANK_OutcomeOutcomes arg, ANK_Outcome (*acceptHead)(ANK_Outcome));
ANK_Outcome ANK_visitOutcome(ANK_Outcome arg, ANK_DataSort (*acceptSort)(ANK_DataSort));
ANK_SortName ANK_visitSortName(ANK_SortName arg);
ANK_Data ANK_visitData(ANK_Data arg, ANK_Datum (*acceptDatum)(ANK_Datum), ANK_DataConst (*acceptDataConst)(ANK_DataConst), ANK_DataTail (*acceptTail)(ANK_DataTail));
ANK_DataOpPrefix ANK_visitDataOpPrefix(ANK_DataOpPrefix arg, ANK_DataSort (*acceptSort)(ANK_DataSort), ANK_ActionPrefix (*acceptActionPrefix)(ANK_ActionPrefix), ANK_NatCon (*acceptNatCon)(ANK_NatCon));
ANK_DataOp ANK_visitDataOp(ANK_DataOp arg, ANK_DataOpPrefix (*acceptPrefix)(ANK_DataOpPrefix), ANK_DataOpInfix (*acceptInfix)(ANK_DataOpInfix));
ANK_DataPred ANK_visitDataPred(ANK_DataPred arg, ANK_DataPredPrefix (*acceptPrefix)(ANK_DataPredPrefix), ANK_DataPredInfix (*acceptInfix)(ANK_DataPredInfix));
ANK_DataConst ANK_visitDataConst(ANK_DataConst arg);
ANK_DataTail ANK_visitDataTail(ANK_DataTail arg, ANK_Data (*acceptHead)(ANK_Data));
ANK_BoolConst ANK_visitBoolConst(ANK_BoolConst arg);
ANK_Bool ANK_visitBool(ANK_Bool arg, ANK_BoolConst (*acceptBoolconst)(ANK_BoolConst));
ANK_Datum ANK_visitDatum(ANK_Datum arg, ANK_Agent (*acceptAgent)(ANK_Agent), ANK_Cell (*acceptCell)(ANK_Cell), ANK_Action (*acceptAction)(ANK_Action), ANK_Token (*acceptToken)(ANK_Token), ANK_MessageTag (*acceptMessageTag)(ANK_MessageTag), ANK_List (*acceptList)(ANK_List), ANK_BoolConst (*acceptBoolConst)(ANK_BoolConst), ANK_Int (*acceptInt)(ANK_Int));
ANK_Numeral ANK_visitNumeral(ANK_Numeral arg, ANK_NatCon (*acceptNatCon)(ANK_NatCon));
ANK_Nat ANK_visitNat(ANK_Nat arg, ANK_Numeral (*acceptNumeral)(ANK_Numeral));
ANK_Int ANK_visitInt(ANK_Int arg, ANK_Nat (*acceptNat)(ANK_Nat), ANK_Nat (*acceptNatArg)(ANK_Nat));
ANK_Action ANK_visitAction(ANK_Action arg, ANK_Terminated (*acceptTerminated)(ANK_Terminated), ANK_ActionConst (*acceptActionConst)(ANK_ActionConst), ANK_ActionPrefix (*acceptPrefix)(ANK_ActionPrefix), ANK_ActionInfix (*acceptInfix)(ANK_ActionInfix), ANK_Data (*acceptData)(ANK_Data), ANK_DataOp (*acceptOp)(ANK_DataOp), ANK_DataPred (*acceptPred)(ANK_DataPred), ANK_ActionChoices (*acceptChoices)(ANK_ActionChoices));
ANK_DataOpInfix ANK_visitDataOpInfix(ANK_DataOpInfix arg, ANK_ActionInfix (*acceptActionInfix)(ANK_ActionInfix));
ANK_Token ANK_visitToken(ANK_Token arg, ANK_String (*acceptString)(ANK_String));
ANK_MessageTag ANK_visitMessageTag(ANK_MessageTag arg, ANK_Token (*acceptToken)(ANK_Token));
ANK_DataPredInfix ANK_visitDataPredInfix(ANK_DataPredInfix arg);
ANK_DataPredPrefix ANK_visitDataPredPrefix(ANK_DataPredPrefix arg);
ANK_ActionConst ANK_visitActionConst(ANK_ActionConst arg);
ANK_ActionInfix ANK_visitActionInfix(ANK_ActionInfix arg);
ANK_ActionPrefix ANK_visitActionPrefix(ANK_ActionPrefix arg);
ANK_Terminated ANK_visitTerminated(ANK_Terminated arg, ANK_Data (*acceptData)(ANK_Data));
ANK_ActionChoices ANK_visitActionChoices(ANK_ActionChoices arg, ANK_Action (*acceptHead)(ANK_Action));

/*}}}  */

#endif /* _AN_K_H */
