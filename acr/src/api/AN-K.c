#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "AN-K.h"

/*{{{  typedefs */

typedef struct ATerm _ANK_DataSort;
typedef struct ATerm _ANK_DataSortList;
typedef struct ATerm _ANK_OutcomeOutcomes;
typedef struct ATerm _ANK_Outcome;
typedef struct ATerm _ANK_SortName;
typedef struct ATerm _ANK_Data;
typedef struct ATerm _ANK_DataOpPrefix;
typedef struct ATerm _ANK_DataOp;
typedef struct ATerm _ANK_DataPred;
typedef struct ATerm _ANK_DataConst;
typedef struct ATerm _ANK_DataTail;
typedef struct ATerm _ANK_BoolConst;
typedef struct ATerm _ANK_Bool;
typedef struct ATerm _ANK_Datum;
typedef struct ATerm _ANK_Numeral;
typedef struct ATerm _ANK_Nat;
typedef struct ATerm _ANK_Int;
typedef struct ATerm _ANK_Action;
typedef struct ATerm _ANK_DataOpInfix;
typedef struct ATerm _ANK_Token;
typedef struct ATerm _ANK_MessageTag;
typedef struct ATerm _ANK_DataPredInfix;
typedef struct ATerm _ANK_DataPredPrefix;
typedef struct ATerm _ANK_ActionConst;
typedef struct ATerm _ANK_ActionInfix;
typedef struct ATerm _ANK_ActionPrefix;
typedef struct ATerm _ANK_Terminated;
typedef struct ATerm _ANK_ActionChoices;

/*}}}  */

/*{{{  void ANK_initANKApi(void) */

void ANK_initANKApi(void)
{
  init_AN_K_dict();
}

/*}}}  */

/*{{{  term conversion functions */

/*{{{  ANK_DataSort ANK_DataSortFromTerm(ATerm t) */

ANK_DataSort ANK_DataSortFromTerm(ATerm t)
{
  return (ANK_DataSort)t;
}

/*}}}  */
/*{{{  ATerm ANK_DataSortToTerm(ANK_DataSort arg) */

ATerm ANK_DataSortToTerm(ANK_DataSort arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_DataSortList ANK_DataSortListFromTerm(ATerm t) */

ANK_DataSortList ANK_DataSortListFromTerm(ATerm t)
{
  return (ANK_DataSortList)t;
}

/*}}}  */
/*{{{  ATerm ANK_DataSortListToTerm(ANK_DataSortList arg) */

ATerm ANK_DataSortListToTerm(ANK_DataSortList arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_OutcomeOutcomes ANK_OutcomeOutcomesFromTerm(ATerm t) */

ANK_OutcomeOutcomes ANK_OutcomeOutcomesFromTerm(ATerm t)
{
  return (ANK_OutcomeOutcomes)t;
}

/*}}}  */
/*{{{  ATerm ANK_OutcomeOutcomesToTerm(ANK_OutcomeOutcomes arg) */

ATerm ANK_OutcomeOutcomesToTerm(ANK_OutcomeOutcomes arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_Outcome ANK_OutcomeFromTerm(ATerm t) */

ANK_Outcome ANK_OutcomeFromTerm(ATerm t)
{
  return (ANK_Outcome)t;
}

/*}}}  */
/*{{{  ATerm ANK_OutcomeToTerm(ANK_Outcome arg) */

ATerm ANK_OutcomeToTerm(ANK_Outcome arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_SortName ANK_SortNameFromTerm(ATerm t) */

ANK_SortName ANK_SortNameFromTerm(ATerm t)
{
  return (ANK_SortName)t;
}

/*}}}  */
/*{{{  ATerm ANK_SortNameToTerm(ANK_SortName arg) */

ATerm ANK_SortNameToTerm(ANK_SortName arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_Data ANK_DataFromTerm(ATerm t) */

ANK_Data ANK_DataFromTerm(ATerm t)
{
  return (ANK_Data)t;
}

/*}}}  */
/*{{{  ATerm ANK_DataToTerm(ANK_Data arg) */

ATerm ANK_DataToTerm(ANK_Data arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_DataOpPrefixFromTerm(ATerm t) */

ANK_DataOpPrefix ANK_DataOpPrefixFromTerm(ATerm t)
{
  return (ANK_DataOpPrefix)t;
}

/*}}}  */
/*{{{  ATerm ANK_DataOpPrefixToTerm(ANK_DataOpPrefix arg) */

ATerm ANK_DataOpPrefixToTerm(ANK_DataOpPrefix arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_DataOp ANK_DataOpFromTerm(ATerm t) */

ANK_DataOp ANK_DataOpFromTerm(ATerm t)
{
  return (ANK_DataOp)t;
}

/*}}}  */
/*{{{  ATerm ANK_DataOpToTerm(ANK_DataOp arg) */

ATerm ANK_DataOpToTerm(ANK_DataOp arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_DataPred ANK_DataPredFromTerm(ATerm t) */

ANK_DataPred ANK_DataPredFromTerm(ATerm t)
{
  return (ANK_DataPred)t;
}

/*}}}  */
/*{{{  ATerm ANK_DataPredToTerm(ANK_DataPred arg) */

ATerm ANK_DataPredToTerm(ANK_DataPred arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_DataConst ANK_DataConstFromTerm(ATerm t) */

ANK_DataConst ANK_DataConstFromTerm(ATerm t)
{
  return (ANK_DataConst)t;
}

/*}}}  */
/*{{{  ATerm ANK_DataConstToTerm(ANK_DataConst arg) */

ATerm ANK_DataConstToTerm(ANK_DataConst arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_DataTail ANK_DataTailFromTerm(ATerm t) */

ANK_DataTail ANK_DataTailFromTerm(ATerm t)
{
  return (ANK_DataTail)t;
}

/*}}}  */
/*{{{  ATerm ANK_DataTailToTerm(ANK_DataTail arg) */

ATerm ANK_DataTailToTerm(ANK_DataTail arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_BoolConst ANK_BoolConstFromTerm(ATerm t) */

ANK_BoolConst ANK_BoolConstFromTerm(ATerm t)
{
  return (ANK_BoolConst)t;
}

/*}}}  */
/*{{{  ATerm ANK_BoolConstToTerm(ANK_BoolConst arg) */

ATerm ANK_BoolConstToTerm(ANK_BoolConst arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_Bool ANK_BoolFromTerm(ATerm t) */

ANK_Bool ANK_BoolFromTerm(ATerm t)
{
  return (ANK_Bool)t;
}

/*}}}  */
/*{{{  ATerm ANK_BoolToTerm(ANK_Bool arg) */

ATerm ANK_BoolToTerm(ANK_Bool arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_Datum ANK_DatumFromTerm(ATerm t) */

ANK_Datum ANK_DatumFromTerm(ATerm t)
{
  return (ANK_Datum)t;
}

/*}}}  */
/*{{{  ATerm ANK_DatumToTerm(ANK_Datum arg) */

ATerm ANK_DatumToTerm(ANK_Datum arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_Numeral ANK_NumeralFromTerm(ATerm t) */

ANK_Numeral ANK_NumeralFromTerm(ATerm t)
{
  return (ANK_Numeral)t;
}

/*}}}  */
/*{{{  ATerm ANK_NumeralToTerm(ANK_Numeral arg) */

ATerm ANK_NumeralToTerm(ANK_Numeral arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_Nat ANK_NatFromTerm(ATerm t) */

ANK_Nat ANK_NatFromTerm(ATerm t)
{
  return (ANK_Nat)t;
}

/*}}}  */
/*{{{  ATerm ANK_NatToTerm(ANK_Nat arg) */

ATerm ANK_NatToTerm(ANK_Nat arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_Int ANK_IntFromTerm(ATerm t) */

ANK_Int ANK_IntFromTerm(ATerm t)
{
  return (ANK_Int)t;
}

/*}}}  */
/*{{{  ATerm ANK_IntToTerm(ANK_Int arg) */

ATerm ANK_IntToTerm(ANK_Int arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_Action ANK_ActionFromTerm(ATerm t) */

ANK_Action ANK_ActionFromTerm(ATerm t)
{
  return (ANK_Action)t;
}

/*}}}  */
/*{{{  ATerm ANK_ActionToTerm(ANK_Action arg) */

ATerm ANK_ActionToTerm(ANK_Action arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_DataOpInfix ANK_DataOpInfixFromTerm(ATerm t) */

ANK_DataOpInfix ANK_DataOpInfixFromTerm(ATerm t)
{
  return (ANK_DataOpInfix)t;
}

/*}}}  */
/*{{{  ATerm ANK_DataOpInfixToTerm(ANK_DataOpInfix arg) */

ATerm ANK_DataOpInfixToTerm(ANK_DataOpInfix arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_Token ANK_TokenFromTerm(ATerm t) */

ANK_Token ANK_TokenFromTerm(ATerm t)
{
  return (ANK_Token)t;
}

/*}}}  */
/*{{{  ATerm ANK_TokenToTerm(ANK_Token arg) */

ATerm ANK_TokenToTerm(ANK_Token arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_MessageTag ANK_MessageTagFromTerm(ATerm t) */

ANK_MessageTag ANK_MessageTagFromTerm(ATerm t)
{
  return (ANK_MessageTag)t;
}

/*}}}  */
/*{{{  ATerm ANK_MessageTagToTerm(ANK_MessageTag arg) */

ATerm ANK_MessageTagToTerm(ANK_MessageTag arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_DataPredInfix ANK_DataPredInfixFromTerm(ATerm t) */

ANK_DataPredInfix ANK_DataPredInfixFromTerm(ATerm t)
{
  return (ANK_DataPredInfix)t;
}

/*}}}  */
/*{{{  ATerm ANK_DataPredInfixToTerm(ANK_DataPredInfix arg) */

ATerm ANK_DataPredInfixToTerm(ANK_DataPredInfix arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_DataPredPrefix ANK_DataPredPrefixFromTerm(ATerm t) */

ANK_DataPredPrefix ANK_DataPredPrefixFromTerm(ATerm t)
{
  return (ANK_DataPredPrefix)t;
}

/*}}}  */
/*{{{  ATerm ANK_DataPredPrefixToTerm(ANK_DataPredPrefix arg) */

ATerm ANK_DataPredPrefixToTerm(ANK_DataPredPrefix arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_ActionConstFromTerm(ATerm t) */

ANK_ActionConst ANK_ActionConstFromTerm(ATerm t)
{
  return (ANK_ActionConst)t;
}

/*}}}  */
/*{{{  ATerm ANK_ActionConstToTerm(ANK_ActionConst arg) */

ATerm ANK_ActionConstToTerm(ANK_ActionConst arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_ActionInfix ANK_ActionInfixFromTerm(ATerm t) */

ANK_ActionInfix ANK_ActionInfixFromTerm(ATerm t)
{
  return (ANK_ActionInfix)t;
}

/*}}}  */
/*{{{  ATerm ANK_ActionInfixToTerm(ANK_ActionInfix arg) */

ATerm ANK_ActionInfixToTerm(ANK_ActionInfix arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_ActionPrefix ANK_ActionPrefixFromTerm(ATerm t) */

ANK_ActionPrefix ANK_ActionPrefixFromTerm(ATerm t)
{
  return (ANK_ActionPrefix)t;
}

/*}}}  */
/*{{{  ATerm ANK_ActionPrefixToTerm(ANK_ActionPrefix arg) */

ATerm ANK_ActionPrefixToTerm(ANK_ActionPrefix arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_Terminated ANK_TerminatedFromTerm(ATerm t) */

ANK_Terminated ANK_TerminatedFromTerm(ATerm t)
{
  return (ANK_Terminated)t;
}

/*}}}  */
/*{{{  ATerm ANK_TerminatedToTerm(ANK_Terminated arg) */

ATerm ANK_TerminatedToTerm(ANK_Terminated arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  ANK_ActionChoices ANK_ActionChoicesFromTerm(ATerm t) */

ANK_ActionChoices ANK_ActionChoicesFromTerm(ATerm t)
{
  return (ANK_ActionChoices)t;
}

/*}}}  */
/*{{{  ATerm ANK_ActionChoicesToTerm(ANK_ActionChoices arg) */

ATerm ANK_ActionChoicesToTerm(ANK_ActionChoices arg)
{
  return (ATerm)arg;
}

/*}}}  */

/*}}}  */
/*{{{  constructors */

/*{{{  ANK_DataSort ANK_makeDataSortSortname(ANK_SortName SortName) */

ANK_DataSort ANK_makeDataSortSortname(ANK_SortName SortName)
{
  return (ANK_DataSort)(ATerm)ATmakeAppl1(ANK_afun0, (ATerm)SortName);
}

/*}}}  */
/*{{{  ANK_DataSort ANK_makeDataSortStar(ANK_DataSort sort) */

ANK_DataSort ANK_makeDataSortStar(ANK_DataSort sort)
{
  return (ANK_DataSort)(ATerm)ATmakeAppl1(ANK_afun1, (ATerm)sort);
}

/*}}}  */
/*{{{  ANK_DataSort ANK_makeDataSortPlus(ANK_DataSort sort) */

ANK_DataSort ANK_makeDataSortPlus(ANK_DataSort sort)
{
  return (ANK_DataSort)(ATerm)ATmakeAppl1(ANK_afun2, (ATerm)sort);
}

/*}}}  */
/*{{{  ANK_DataSort ANK_makeDataSortOpt(ANK_DataSort sort) */

ANK_DataSort ANK_makeDataSortOpt(ANK_DataSort sort)
{
  return (ANK_DataSort)(ATerm)ATmakeAppl1(ANK_afun3, (ATerm)sort);
}

/*}}}  */
/*{{{  ANK_DataSort ANK_makeDataSortTuple(ANK_DataSortList list) */

ANK_DataSort ANK_makeDataSortTuple(ANK_DataSortList list)
{
  return (ANK_DataSort)(ATerm)ATmakeAppl1(ANK_afun4, (ATerm)list);
}

/*}}}  */
/*{{{  ANK_DataSort ANK_makeDataSortAlt(ANK_DataSortList list) */

ANK_DataSort ANK_makeDataSortAlt(ANK_DataSortList list)
{
  return (ANK_DataSort)(ATerm)ATmakeAppl1(ANK_afun5, (ATerm)list);
}

/*}}}  */
/*{{{  ANK_DataSort ANK_makeDataSortOutcome(ANK_OutcomeOutcomes outcomes) */

ANK_DataSort ANK_makeDataSortOutcome(ANK_OutcomeOutcomes outcomes)
{
  return (ANK_DataSort)(ATerm)ATmakeAppl1(ANK_afun6, (ATerm)outcomes);
}

/*}}}  */
/*{{{  ANK_DataSortList ANK_makeDataSortListEmpty() */

ANK_DataSortList ANK_makeDataSortListEmpty()
{
  return (ANK_DataSortList)(ATerm)ATempty;
}

/*}}}  */
/*{{{  ANK_DataSortList ANK_makeDataSortListSingle(ANK_DataSort head) */

ANK_DataSortList ANK_makeDataSortListSingle(ANK_DataSort head)
{
  return (ANK_DataSortList)(ATerm)ATmakeList1((ATerm)head);
}

/*}}}  */
/*{{{  ANK_DataSortList ANK_makeDataSortListMany(ANK_DataSort head, ANK_DataSortList tail) */

ANK_DataSortList ANK_makeDataSortListMany(ANK_DataSort head, ANK_DataSortList tail)
{
  return (ANK_DataSortList)(ATerm)ATinsert((ATermList)tail, (ATerm)head);
}

/*}}}  */
/*{{{  ANK_OutcomeOutcomes ANK_makeOutcomeOutcomesSingle(ANK_Outcome head) */

ANK_OutcomeOutcomes ANK_makeOutcomeOutcomesSingle(ANK_Outcome head)
{
  return (ANK_OutcomeOutcomes)(ATerm)ATmakeList1((ATerm)head);
}

/*}}}  */
/*{{{  ANK_OutcomeOutcomes ANK_makeOutcomeOutcomesMany(ANK_Outcome head, ANK_OutcomeOutcomes tail) */

ANK_OutcomeOutcomes ANK_makeOutcomeOutcomesMany(ANK_Outcome head, ANK_OutcomeOutcomes tail)
{
  return (ANK_OutcomeOutcomes)(ATerm)ATinsert((ATermList)tail, (ATerm)head);
}

/*}}}  */
/*{{{  ANK_Outcome ANK_makeOutcomeTaking(ANK_DataSort sort) */

ANK_Outcome ANK_makeOutcomeTaking(ANK_DataSort sort)
{
  return (ANK_Outcome)(ATerm)ATmakeAppl1(ANK_afun7, (ATerm)sort);
}

/*}}}  */
/*{{{  ANK_Outcome ANK_makeOutcomeGiving(ANK_DataSort sort) */

ANK_Outcome ANK_makeOutcomeGiving(ANK_DataSort sort)
{
  return (ANK_Outcome)(ATerm)ATmakeAppl1(ANK_afun8, (ATerm)sort);
}

/*}}}  */
/*{{{  ANK_Outcome ANK_makeOutcomeRaising(ANK_DataSort sort) */

ANK_Outcome ANK_makeOutcomeRaising(ANK_DataSort sort)
{
  return (ANK_Outcome)(ATerm)ATmakeAppl1(ANK_afun9, (ATerm)sort);
}

/*}}}  */
/*{{{  ANK_Outcome ANK_makeOutcomeFailing() */

ANK_Outcome ANK_makeOutcomeFailing()
{
  return (ANK_Outcome)(ATerm)ATmakeAppl0(ANK_afun10);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameData() */

ANK_SortName ANK_makeSortNameData()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun11);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameDatum() */

ANK_SortName ANK_makeSortNameDatum()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun12);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameBindable() */

ANK_SortName ANK_makeSortNameBindable()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun13);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameBindings() */

ANK_SortName ANK_makeSortNameBindings()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun14);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameAgent() */

ANK_SortName ANK_makeSortNameAgent()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun15);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameCell() */

ANK_SortName ANK_makeSortNameCell()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun16);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameStorable() */

ANK_SortName ANK_makeSortNameStorable()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun17);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameAction() */

ANK_SortName ANK_makeSortNameAction()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun18);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameToken() */

ANK_SortName ANK_makeSortNameToken()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun19);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameString() */

ANK_SortName ANK_makeSortNameString()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun20);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameMessage() */

ANK_SortName ANK_makeSortNameMessage()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun21);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameMessageTag() */

ANK_SortName ANK_makeSortNameMessageTag()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun22);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameList() */

ANK_SortName ANK_makeSortNameList()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun23);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameBool() */

ANK_SortName ANK_makeSortNameBool()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun24);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameNat() */

ANK_SortName ANK_makeSortNameNat()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun25);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNamePos() */

ANK_SortName ANK_makeSortNamePos()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun26);
}

/*}}}  */
/*{{{  ANK_SortName ANK_makeSortNameInt() */

ANK_SortName ANK_makeSortNameInt()
{
  return (ANK_SortName)(ATerm)ATmakeAppl0(ANK_afun27);
}

/*}}}  */
/*{{{  ANK_Data ANK_makeDataDatum(ANK_Datum Datum) */

ANK_Data ANK_makeDataDatum(ANK_Datum Datum)
{
  return (ANK_Data)(ATerm)ATmakeAppl1(ANK_afun28, (ATerm)Datum);
}

/*}}}  */
/*{{{  ANK_Data ANK_makeDataDataconst(ANK_DataConst DataConst) */

ANK_Data ANK_makeDataDataconst(ANK_DataConst DataConst)
{
  return (ANK_Data)(ATerm)ATmakeAppl1(ANK_afun29, (ATerm)DataConst);
}

/*}}}  */
/*{{{  ANK_Data ANK_makeDataTuple(ANK_Data head, ANK_DataTail tail) */

ANK_Data ANK_makeDataTuple(ANK_Data head, ANK_DataTail tail)
{
  return (ANK_Data)(ATerm)ATmakeAppl2(ANK_afun30, (ATerm)head, (ATerm)tail);
}

/*}}}  */
/*{{{  ANK_Data ANK_makeDataDefault(ANK_Data Data) */

ANK_Data ANK_makeDataDefault(ANK_Data Data)
{
  return (ANK_Data)(ATerm)ATmakeAppl1(ANK_afun31, (ATerm)Data);
}

/*}}}  */
/*{{{  ANK_Data ANK_makeDataEmpty() */

ANK_Data ANK_makeDataEmpty()
{
  return (ANK_Data)(ATerm)ATmakeAppl0(ANK_afun32);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_makeDataOpPrefixTheSort(ANK_DataSort sort) */

ANK_DataOpPrefix ANK_makeDataOpPrefixTheSort(ANK_DataSort sort)
{
  return (ANK_DataOpPrefix)(ATerm)ATmakeAppl1(ANK_afun33, (ATerm)sort);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_makeDataOpPrefixBinding() */

ANK_DataOpPrefix ANK_makeDataOpPrefixBinding()
{
  return (ANK_DataOpPrefix)(ATerm)ATmakeAppl0(ANK_afun34);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_makeDataOpPrefixOverriding() */

ANK_DataOpPrefix ANK_makeDataOpPrefixOverriding()
{
  return (ANK_DataOpPrefix)(ATerm)ATmakeAppl0(ANK_afun35);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_makeDataOpPrefixDisjointUnion() */

ANK_DataOpPrefix ANK_makeDataOpPrefixDisjointUnion()
{
  return (ANK_DataOpPrefix)(ATerm)ATmakeAppl0(ANK_afun36);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_makeDataOpPrefixBound() */

ANK_DataOpPrefix ANK_makeDataOpPrefixBound()
{
  return (ANK_DataOpPrefix)(ATerm)ATmakeAppl0(ANK_afun37);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_makeDataOpPrefixActionPrefix(ANK_ActionPrefix ActionPrefix) */

ANK_DataOpPrefix ANK_makeDataOpPrefixActionPrefix(ANK_ActionPrefix ActionPrefix)
{
  return (ANK_DataOpPrefix)(ATerm)ATmakeAppl1(ANK_afun38, (ATerm)ActionPrefix);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_makeDataOpPrefixProvide() */

ANK_DataOpPrefix ANK_makeDataOpPrefixProvide()
{
  return (ANK_DataOpPrefix)(ATerm)ATmakeAppl0(ANK_afun39);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_makeDataOpPrefixTupleToList() */

ANK_DataOpPrefix ANK_makeDataOpPrefixTupleToList()
{
  return (ANK_DataOpPrefix)(ATerm)ATmakeAppl0(ANK_afun40);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_makeDataOpPrefixNot() */

ANK_DataOpPrefix ANK_makeDataOpPrefixNot()
{
  return (ANK_DataOpPrefix)(ATerm)ATmakeAppl0(ANK_afun41);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_makeDataOpPrefixOpComponent(ANK_NatCon natCon) */

ANK_DataOpPrefix ANK_makeDataOpPrefixOpComponent(ANK_NatCon natCon)
{
  return (ANK_DataOpPrefix)(ATerm)ATmakeAppl1(ANK_afun42, (ATerm)natCon);
}

/*}}}  */
/*{{{  ANK_DataOp ANK_makeDataOpPrefix(ANK_DataOpPrefix prefix) */

ANK_DataOp ANK_makeDataOpPrefix(ANK_DataOpPrefix prefix)
{
  return (ANK_DataOp)(ATerm)ATmakeAppl1(ANK_afun43, (ATerm)prefix);
}

/*}}}  */
/*{{{  ANK_DataOp ANK_makeDataOpInfix(ANK_DataOpInfix infix) */

ANK_DataOp ANK_makeDataOpInfix(ANK_DataOpInfix infix)
{
  return (ANK_DataOp)(ATerm)ATmakeAppl1(ANK_afun44, (ATerm)infix);
}

/*}}}  */
/*{{{  ANK_DataPred ANK_makeDataPredPrefix(ANK_DataPredPrefix prefix) */

ANK_DataPred ANK_makeDataPredPrefix(ANK_DataPredPrefix prefix)
{
  return (ANK_DataPred)(ATerm)ATmakeAppl1(ANK_afun43, (ATerm)prefix);
}

/*}}}  */
/*{{{  ANK_DataPred ANK_makeDataPredInfix(ANK_DataPredInfix infix) */

ANK_DataPred ANK_makeDataPredInfix(ANK_DataPredInfix infix)
{
  return (ANK_DataPred)(ATerm)ATmakeAppl1(ANK_afun44, (ATerm)infix);
}

/*}}}  */
/*{{{  ANK_DataConst ANK_makeDataConstTrue() */

ANK_DataConst ANK_makeDataConstTrue()
{
  return (ANK_DataConst)(ATerm)ATmakeAppl0(ANK_afun45);
}

/*}}}  */
/*{{{  ANK_DataConst ANK_makeDataConstFalse() */

ANK_DataConst ANK_makeDataConstFalse()
{
  return (ANK_DataConst)(ATerm)ATmakeAppl0(ANK_afun46);
}

/*}}}  */
/*{{{  ANK_DataConst ANK_makeDataConstNoBindings() */

ANK_DataConst ANK_makeDataConstNoBindings()
{
  return (ANK_DataConst)(ATerm)ATmakeAppl0(ANK_afun47);
}

/*}}}  */
/*{{{  ANK_DataTail ANK_makeDataTailSingle(ANK_Data head) */

ANK_DataTail ANK_makeDataTailSingle(ANK_Data head)
{
  return (ANK_DataTail)(ATerm)ATmakeList1((ATerm)head);
}

/*}}}  */
/*{{{  ANK_DataTail ANK_makeDataTailMany(ANK_Data head, ANK_DataTail tail) */

ANK_DataTail ANK_makeDataTailMany(ANK_Data head, ANK_DataTail tail)
{
  return (ANK_DataTail)(ATerm)ATinsert((ATermList)tail, (ATerm)head);
}

/*}}}  */
/*{{{  ANK_BoolConst ANK_makeBoolConstTrue() */

ANK_BoolConst ANK_makeBoolConstTrue()
{
  return (ANK_BoolConst)(ATerm)ATmakeAppl0(ANK_afun45);
}

/*}}}  */
/*{{{  ANK_BoolConst ANK_makeBoolConstFalse() */

ANK_BoolConst ANK_makeBoolConstFalse()
{
  return (ANK_BoolConst)(ATerm)ATmakeAppl0(ANK_afun46);
}

/*}}}  */
/*{{{  ANK_Bool ANK_makeBoolBoolconst(ANK_BoolConst boolconst) */

ANK_Bool ANK_makeBoolBoolconst(ANK_BoolConst boolconst)
{
  return (ANK_Bool)(ATerm)ATmakeAppl1(ANK_afun48, (ATerm)boolconst);
}

/*}}}  */
/*{{{  ANK_Bool ANK_makeBoolNot(ANK_Bool notArg) */

ANK_Bool ANK_makeBoolNot(ANK_Bool notArg)
{
  return (ANK_Bool)(ATerm)ATmakeAppl1(ANK_afun49, (ATerm)notArg);
}

/*}}}  */
/*{{{  ANK_Bool ANK_makeBoolOr(ANK_Bool lhs, ANK_Bool rhs) */

ANK_Bool ANK_makeBoolOr(ANK_Bool lhs, ANK_Bool rhs)
{
  return (ANK_Bool)(ATerm)ATmakeAppl2(ANK_afun50, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  ANK_Bool ANK_makeBoolAnd(ANK_Bool lhs, ANK_Bool rhs) */

ANK_Bool ANK_makeBoolAnd(ANK_Bool lhs, ANK_Bool rhs)
{
  return (ANK_Bool)(ATerm)ATmakeAppl2(ANK_afun51, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  ANK_Bool ANK_makeBoolDefault(ANK_Bool Bool) */

ANK_Bool ANK_makeBoolDefault(ANK_Bool Bool)
{
  return (ANK_Bool)(ATerm)ATmakeAppl1(ANK_afun31, (ATerm)Bool);
}

/*}}}  */
/*{{{  ANK_Bool ANK_makeBoolGt(ANK_Bool lhs, ANK_Bool rhs) */

ANK_Bool ANK_makeBoolGt(ANK_Bool lhs, ANK_Bool rhs)
{
  return (ANK_Bool)(ATerm)ATmakeAppl2(ANK_afun52, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  ANK_Bool ANK_makeBoolGe(ANK_Bool lhs, ANK_Bool rhs) */

ANK_Bool ANK_makeBoolGe(ANK_Bool lhs, ANK_Bool rhs)
{
  return (ANK_Bool)(ATerm)ATmakeAppl2(ANK_afun53, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  ANK_Bool ANK_makeBoolLt(ANK_Bool lhs, ANK_Bool rhs) */

ANK_Bool ANK_makeBoolLt(ANK_Bool lhs, ANK_Bool rhs)
{
  return (ANK_Bool)(ATerm)ATmakeAppl2(ANK_afun54, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  ANK_Bool ANK_makeBoolLe(ANK_Bool lhs, ANK_Bool rhs) */

ANK_Bool ANK_makeBoolLe(ANK_Bool lhs, ANK_Bool rhs)
{
  return (ANK_Bool)(ATerm)ATmakeAppl2(ANK_afun55, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  ANK_Datum ANK_makeDatumAgent(ANK_Agent Agent) */

ANK_Datum ANK_makeDatumAgent(ANK_Agent Agent)
{
  return (ANK_Datum)(ATerm)ATmakeAppl1(ANK_afun56, (ATerm)Agent);
}

/*}}}  */
/*{{{  ANK_Datum ANK_makeDatumCell(ANK_Cell Cell) */

ANK_Datum ANK_makeDatumCell(ANK_Cell Cell)
{
  return (ANK_Datum)(ATerm)ATmakeAppl1(ANK_afun57, (ATerm)Cell);
}

/*}}}  */
/*{{{  ANK_Datum ANK_makeDatumAction(ANK_Action Action) */

ANK_Datum ANK_makeDatumAction(ANK_Action Action)
{
  return (ANK_Datum)(ATerm)ATmakeAppl1(ANK_afun58, (ATerm)Action);
}

/*}}}  */
/*{{{  ANK_Datum ANK_makeDatumToken(ANK_Token Token) */

ANK_Datum ANK_makeDatumToken(ANK_Token Token)
{
  return (ANK_Datum)(ATerm)ATmakeAppl1(ANK_afun59, (ATerm)Token);
}

/*}}}  */
/*{{{  ANK_Datum ANK_makeDatumMessageTag(ANK_MessageTag MessageTag) */

ANK_Datum ANK_makeDatumMessageTag(ANK_MessageTag MessageTag)
{
  return (ANK_Datum)(ATerm)ATmakeAppl1(ANK_afun60, (ATerm)MessageTag);
}

/*}}}  */
/*{{{  ANK_Datum ANK_makeDatumList(ANK_List List) */

ANK_Datum ANK_makeDatumList(ANK_List List)
{
  return (ANK_Datum)(ATerm)ATmakeAppl1(ANK_afun61, (ATerm)List);
}

/*}}}  */
/*{{{  ANK_Datum ANK_makeDatumDatum(ANK_BoolConst BoolConst) */

ANK_Datum ANK_makeDatumDatum(ANK_BoolConst BoolConst)
{
  return (ANK_Datum)(ATerm)ATmakeAppl1(ANK_afun28, (ATerm)BoolConst);
}

/*}}}  */
/*{{{  ANK_Datum ANK_makeDatumInt(ANK_Int Int) */

ANK_Datum ANK_makeDatumInt(ANK_Int Int)
{
  return (ANK_Datum)(ATerm)ATmakeAppl1(ANK_afun62, (ATerm)Int);
}

/*}}}  */
/*{{{  ANK_Numeral ANK_makeNumeralNatCon(ANK_NatCon NatCon) */

ANK_Numeral ANK_makeNumeralNatCon(ANK_NatCon NatCon)
{
  return (ANK_Numeral)(ATerm)ATmakeAppl1(ANK_afun63, (ATerm)NatCon);
}

/*}}}  */
/*{{{  ANK_Nat ANK_makeNatNumeral(ANK_Numeral Numeral) */

ANK_Nat ANK_makeNatNumeral(ANK_Numeral Numeral)
{
  return (ANK_Nat)(ATerm)ATmakeAppl1(ANK_afun64, (ATerm)Numeral);
}

/*}}}  */
/*{{{  ANK_Nat ANK_makeNatMonus(ANK_Nat lhs, ANK_Nat rhs) */

ANK_Nat ANK_makeNatMonus(ANK_Nat lhs, ANK_Nat rhs)
{
  return (ANK_Nat)(ATerm)ATmakeAppl2(ANK_afun65, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  ANK_Nat ANK_makeNatDefault(ANK_Nat nat) */

ANK_Nat ANK_makeNatDefault(ANK_Nat nat)
{
  return (ANK_Nat)(ATerm)ATmakeAppl1(ANK_afun31, (ATerm)nat);
}

/*}}}  */
/*{{{  ANK_Int ANK_makeIntNat(ANK_Nat Nat) */

ANK_Int ANK_makeIntNat(ANK_Nat Nat)
{
  return (ANK_Int)(ATerm)ATmakeAppl1(ANK_afun66, (ATerm)Nat);
}

/*}}}  */
/*{{{  ANK_Int ANK_makeIntUnaryPlus(ANK_Nat natArg) */

ANK_Int ANK_makeIntUnaryPlus(ANK_Nat natArg)
{
  return (ANK_Int)(ATerm)ATmakeAppl1(ANK_afun67, (ATerm)natArg);
}

/*}}}  */
/*{{{  ANK_Int ANK_makeIntUnaryMinus(ANK_Nat natArg) */

ANK_Int ANK_makeIntUnaryMinus(ANK_Nat natArg)
{
  return (ANK_Int)(ATerm)ATmakeAppl1(ANK_afun68, (ATerm)natArg);
}

/*}}}  */
/*{{{  ANK_Int ANK_makeIntPlus(ANK_Int lhs, ANK_Int rhs) */

ANK_Int ANK_makeIntPlus(ANK_Int lhs, ANK_Int rhs)
{
  return (ANK_Int)(ATerm)ATmakeAppl2(ANK_afun69, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  ANK_Int ANK_makeIntMinus(ANK_Int lhs, ANK_Int rhs) */

ANK_Int ANK_makeIntMinus(ANK_Int lhs, ANK_Int rhs)
{
  return (ANK_Int)(ATerm)ATmakeAppl2(ANK_afun70, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  ANK_Int ANK_makeIntTimes(ANK_Int lhs, ANK_Int rhs) */

ANK_Int ANK_makeIntTimes(ANK_Int lhs, ANK_Int rhs)
{
  return (ANK_Int)(ATerm)ATmakeAppl2(ANK_afun71, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  ANK_Int ANK_makeIntDefault(ANK_Int Int) */

ANK_Int ANK_makeIntDefault(ANK_Int Int)
{
  return (ANK_Int)(ATerm)ATmakeAppl1(ANK_afun31, (ATerm)Int);
}

/*}}}  */
/*{{{  ANK_Action ANK_makeActionTerminated(ANK_Terminated Terminated) */

ANK_Action ANK_makeActionTerminated(ANK_Terminated Terminated)
{
  return (ANK_Action)(ATerm)ATmakeAppl1(ANK_afun72, (ATerm)Terminated);
}

/*}}}  */
/*{{{  ANK_Action ANK_makeActionDefault(ANK_Action Action) */

ANK_Action ANK_makeActionDefault(ANK_Action Action)
{
  return (ANK_Action)(ATerm)ATmakeAppl1(ANK_afun31, (ATerm)Action);
}

/*}}}  */
/*{{{  ANK_Action ANK_makeActionConst(ANK_ActionConst ActionConst) */

ANK_Action ANK_makeActionConst(ANK_ActionConst ActionConst)
{
  return (ANK_Action)(ATerm)ATmakeAppl1(ANK_afun73, (ATerm)ActionConst);
}

/*}}}  */
/*{{{  ANK_Action ANK_makeActionPrefix(ANK_ActionPrefix prefix, ANK_Action prefixarg) */

ANK_Action ANK_makeActionPrefix(ANK_ActionPrefix prefix, ANK_Action prefixarg)
{
  return (ANK_Action)(ATerm)ATmakeAppl2(ANK_afun74, (ATerm)prefix, (ATerm)prefixarg);
}

/*}}}  */
/*{{{  ANK_Action ANK_makeActionInfix(ANK_Action lhs, ANK_ActionInfix infix, ANK_Action rhs) */

ANK_Action ANK_makeActionInfix(ANK_Action lhs, ANK_ActionInfix infix, ANK_Action rhs)
{
  return (ANK_Action)(ATerm)ATmakeAppl3(ANK_afun75, (ATerm)lhs, (ATerm)infix, (ATerm)rhs);
}

/*}}}  */
/*{{{  ANK_Action ANK_makeActionProvide(ANK_Data data) */

ANK_Action ANK_makeActionProvide(ANK_Data data)
{
  return (ANK_Action)(ATerm)ATmakeAppl1(ANK_afun76, (ATerm)data);
}

/*}}}  */
/*{{{  ANK_Action ANK_makeActionGive(ANK_DataOp op) */

ANK_Action ANK_makeActionGive(ANK_DataOp op)
{
  return (ANK_Action)(ATerm)ATmakeAppl1(ANK_afun77, (ATerm)op);
}

/*}}}  */
/*{{{  ANK_Action ANK_makeActionCheck(ANK_DataPred pred) */

ANK_Action ANK_makeActionCheck(ANK_DataPred pred)
{
  return (ANK_Action)(ATerm)ATmakeAppl1(ANK_afun78, (ATerm)pred);
}

/*}}}  */
/*{{{  ANK_Action ANK_makeActionSelect(ANK_ActionChoices choices) */

ANK_Action ANK_makeActionSelect(ANK_ActionChoices choices)
{
  return (ANK_Action)(ATerm)ATmakeAppl1(ANK_afun79, (ATerm)choices);
}

/*}}}  */
/*{{{  ANK_DataOpInfix ANK_makeDataOpInfixActionInfix(ANK_ActionInfix ActionInfix) */

ANK_DataOpInfix ANK_makeDataOpInfixActionInfix(ANK_ActionInfix ActionInfix)
{
  return (ANK_DataOpInfix)(ATerm)ATmakeAppl1(ANK_afun80, (ATerm)ActionInfix);
}

/*}}}  */
/*{{{  ANK_DataOpInfix ANK_makeDataOpInfixPlus() */

ANK_DataOpInfix ANK_makeDataOpInfixPlus()
{
  return (ANK_DataOpInfix)(ATerm)ATmakeAppl0(ANK_afun81);
}

/*}}}  */
/*{{{  ANK_DataOpInfix ANK_makeDataOpInfixMonus() */

ANK_DataOpInfix ANK_makeDataOpInfixMonus()
{
  return (ANK_DataOpInfix)(ATerm)ATmakeAppl0(ANK_afun82);
}

/*}}}  */
/*{{{  ANK_DataOpInfix ANK_makeDataOpInfixTimes() */

ANK_DataOpInfix ANK_makeDataOpInfixTimes()
{
  return (ANK_DataOpInfix)(ATerm)ATmakeAppl0(ANK_afun83);
}

/*}}}  */
/*{{{  ANK_DataOpInfix ANK_makeDataOpInfixMinus() */

ANK_DataOpInfix ANK_makeDataOpInfixMinus()
{
  return (ANK_DataOpInfix)(ATerm)ATmakeAppl0(ANK_afun84);
}

/*}}}  */
/*{{{  ANK_Token ANK_makeTokenString(ANK_String String) */

ANK_Token ANK_makeTokenString(ANK_String String)
{
  return (ANK_Token)(ATerm)ATmakeAppl1(ANK_afun85, (ATerm)String);
}

/*}}}  */
/*{{{  ANK_MessageTag ANK_makeMessageTagDefault(ANK_Token token) */

ANK_MessageTag ANK_makeMessageTagDefault(ANK_Token token)
{
  return (ANK_MessageTag)(ATerm)ATmakeAppl1(ANK_afun31, (ATerm)token);
}

/*}}}  */
/*{{{  ANK_DataPredInfix ANK_makeDataPredInfixGt() */

ANK_DataPredInfix ANK_makeDataPredInfixGt()
{
  return (ANK_DataPredInfix)(ATerm)ATmakeAppl0(ANK_afun86);
}

/*}}}  */
/*{{{  ANK_DataPredInfix ANK_makeDataPredInfixLt() */

ANK_DataPredInfix ANK_makeDataPredInfixLt()
{
  return (ANK_DataPredInfix)(ATerm)ATmakeAppl0(ANK_afun87);
}

/*}}}  */
/*{{{  ANK_DataPredInfix ANK_makeDataPredInfixGe() */

ANK_DataPredInfix ANK_makeDataPredInfixGe()
{
  return (ANK_DataPredInfix)(ATerm)ATmakeAppl0(ANK_afun88);
}

/*}}}  */
/*{{{  ANK_DataPredInfix ANK_makeDataPredInfixLe() */

ANK_DataPredInfix ANK_makeDataPredInfixLe()
{
  return (ANK_DataPredInfix)(ATerm)ATmakeAppl0(ANK_afun89);
}

/*}}}  */
/*{{{  ANK_DataPredInfix ANK_makeDataPredInfixEquals() */

ANK_DataPredInfix ANK_makeDataPredInfixEquals()
{
  return (ANK_DataPredInfix)(ATerm)ATmakeAppl0(ANK_afun90);
}

/*}}}  */
/*{{{  ANK_DataPredPrefix ANK_makeDataPredPrefixDef() */

ANK_DataPredPrefix ANK_makeDataPredPrefixDef()
{
  return (ANK_DataPredPrefix)(ATerm)ATmakeAppl0(ANK_afun91);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstCopy() */

ANK_ActionConst ANK_makeActionConstCopy()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun92);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstRaise() */

ANK_ActionConst ANK_makeActionConstRaise()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun93);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstFail() */

ANK_ActionConst ANK_makeActionConstFail()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun94);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstChooseNatural() */

ANK_ActionConst ANK_makeActionConstChooseNatural()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun95);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstGiveCurrentBindings() */

ANK_ActionConst ANK_makeActionConstGiveCurrentBindings()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun96);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstEnact() */

ANK_ActionConst ANK_makeActionConstEnact()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun97);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstCreate() */

ANK_ActionConst ANK_makeActionConstCreate()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun98);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstDestroy() */

ANK_ActionConst ANK_makeActionConstDestroy()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun99);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstUpdate() */

ANK_ActionConst ANK_makeActionConstUpdate()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun100);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstInspect() */

ANK_ActionConst ANK_makeActionConstInspect()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun101);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstActivate() */

ANK_ActionConst ANK_makeActionConstActivate()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun102);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstDeactivate() */

ANK_ActionConst ANK_makeActionConstDeactivate()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun103);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstGiveCurrentAgent() */

ANK_ActionConst ANK_makeActionConstGiveCurrentAgent()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun104);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstSend() */

ANK_ActionConst ANK_makeActionConstSend()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun105);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstReceive() */

ANK_ActionConst ANK_makeActionConstReceive()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun106);
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_makeActionConstGiveCurrentTime() */

ANK_ActionConst ANK_makeActionConstGiveCurrentTime()
{
  return (ANK_ActionConst)(ATerm)ATmakeAppl0(ANK_afun107);
}

/*}}}  */
/*{{{  ANK_ActionInfix ANK_makeActionInfixThen() */

ANK_ActionInfix ANK_makeActionInfixThen()
{
  return (ANK_ActionInfix)(ATerm)ATmakeAppl0(ANK_afun108);
}

/*}}}  */
/*{{{  ANK_ActionInfix ANK_makeActionInfixAndThen() */

ANK_ActionInfix ANK_makeActionInfixAndThen()
{
  return (ANK_ActionInfix)(ATerm)ATmakeAppl0(ANK_afun109);
}

/*}}}  */
/*{{{  ANK_ActionInfix ANK_makeActionInfixAnd() */

ANK_ActionInfix ANK_makeActionInfixAnd()
{
  return (ANK_ActionInfix)(ATerm)ATmakeAppl0(ANK_afun110);
}

/*}}}  */
/*{{{  ANK_ActionInfix ANK_makeActionInfixExceptionally() */

ANK_ActionInfix ANK_makeActionInfixExceptionally()
{
  return (ANK_ActionInfix)(ATerm)ATmakeAppl0(ANK_afun111);
}

/*}}}  */
/*{{{  ANK_ActionInfix ANK_makeActionInfixOtherwise() */

ANK_ActionInfix ANK_makeActionInfixOtherwise()
{
  return (ANK_ActionInfix)(ATerm)ATmakeAppl0(ANK_afun112);
}

/*}}}  */
/*{{{  ANK_ActionInfix ANK_makeActionInfixAndExceptionally() */

ANK_ActionInfix ANK_makeActionInfixAndExceptionally()
{
  return (ANK_ActionInfix)(ATerm)ATmakeAppl0(ANK_afun113);
}

/*}}}  */
/*{{{  ANK_ActionInfix ANK_makeActionInfixHence() */

ANK_ActionInfix ANK_makeActionInfixHence()
{
  return (ANK_ActionInfix)(ATerm)ATmakeAppl0(ANK_afun114);
}

/*}}}  */
/*{{{  ANK_ActionPrefix ANK_makeActionPrefixIndivisibly() */

ANK_ActionPrefix ANK_makeActionPrefixIndivisibly()
{
  return (ANK_ActionPrefix)(ATerm)ATmakeAppl0(ANK_afun115);
}

/*}}}  */
/*{{{  ANK_Terminated ANK_makeTerminatedNormal(ANK_Data data) */

ANK_Terminated ANK_makeTerminatedNormal(ANK_Data data)
{
  return (ANK_Terminated)(ATerm)ATmakeAppl1(ANK_afun116, (ATerm)data);
}

/*}}}  */
/*{{{  ANK_Terminated ANK_makeTerminatedExceptional(ANK_Data data) */

ANK_Terminated ANK_makeTerminatedExceptional(ANK_Data data)
{
  return (ANK_Terminated)(ATerm)ATmakeAppl1(ANK_afun117, (ATerm)data);
}

/*}}}  */
/*{{{  ANK_Terminated ANK_makeTerminatedFailed() */

ANK_Terminated ANK_makeTerminatedFailed()
{
  return (ANK_Terminated)(ATerm)ATmakeAppl0(ANK_afun118);
}

/*}}}  */
/*{{{  ANK_ActionChoices ANK_makeActionChoicesSingle(ANK_Action head) */

ANK_ActionChoices ANK_makeActionChoicesSingle(ANK_Action head)
{
  return (ANK_ActionChoices)(ATerm)ATmakeList1((ATerm)head);
}

/*}}}  */
/*{{{  ANK_ActionChoices ANK_makeActionChoicesMany(ANK_Action head, ANK_ActionChoices tail) */

ANK_ActionChoices ANK_makeActionChoicesMany(ANK_Action head, ANK_ActionChoices tail)
{
  return (ANK_ActionChoices)(ATerm)ATinsert((ATermList)tail, (ATerm)head);
}

/*}}}  */

/*}}}  */
/*{{{  equality functions */

ATbool ANK_isEqualDataSort(ANK_DataSort arg0, ANK_DataSort arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualDataSortList(ANK_DataSortList arg0, ANK_DataSortList arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualOutcomeOutcomes(ANK_OutcomeOutcomes arg0, ANK_OutcomeOutcomes arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualOutcome(ANK_Outcome arg0, ANK_Outcome arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualSortName(ANK_SortName arg0, ANK_SortName arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualData(ANK_Data arg0, ANK_Data arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualDataOpPrefix(ANK_DataOpPrefix arg0, ANK_DataOpPrefix arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualDataOp(ANK_DataOp arg0, ANK_DataOp arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualDataPred(ANK_DataPred arg0, ANK_DataPred arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualDataConst(ANK_DataConst arg0, ANK_DataConst arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualDataTail(ANK_DataTail arg0, ANK_DataTail arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualBoolConst(ANK_BoolConst arg0, ANK_BoolConst arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualBool(ANK_Bool arg0, ANK_Bool arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualDatum(ANK_Datum arg0, ANK_Datum arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualNumeral(ANK_Numeral arg0, ANK_Numeral arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualNat(ANK_Nat arg0, ANK_Nat arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualInt(ANK_Int arg0, ANK_Int arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualAction(ANK_Action arg0, ANK_Action arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualDataOpInfix(ANK_DataOpInfix arg0, ANK_DataOpInfix arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualToken(ANK_Token arg0, ANK_Token arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualMessageTag(ANK_MessageTag arg0, ANK_MessageTag arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualDataPredInfix(ANK_DataPredInfix arg0, ANK_DataPredInfix arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualDataPredPrefix(ANK_DataPredPrefix arg0, ANK_DataPredPrefix arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualActionConst(ANK_ActionConst arg0, ANK_ActionConst arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualActionInfix(ANK_ActionInfix arg0, ANK_ActionInfix arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualActionPrefix(ANK_ActionPrefix arg0, ANK_ActionPrefix arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualTerminated(ANK_Terminated arg0, ANK_Terminated arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ANK_isEqualActionChoices(ANK_ActionChoices arg0, ANK_ActionChoices arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/*}}}  */
/*{{{  ANK_DataSort accessors */

/*{{{  ATbool ANK_isValidDataSort(ANK_DataSort arg) */

ATbool ANK_isValidDataSort(ANK_DataSort arg)
{
  if (ANK_isDataSortSortname(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortStar(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortPlus(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortOpt(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortTuple(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortAlt(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortOutcome(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataSortSortname(ANK_DataSort arg) */

inline ATbool ANK_isDataSortSortname(ANK_DataSort arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataSortSortname)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataSortSortname, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataSortStar(ANK_DataSort arg) */

inline ATbool ANK_isDataSortStar(ANK_DataSort arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataSortStar)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataSortStar, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataSortPlus(ANK_DataSort arg) */

inline ATbool ANK_isDataSortPlus(ANK_DataSort arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataSortPlus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataSortPlus, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataSortOpt(ANK_DataSort arg) */

inline ATbool ANK_isDataSortOpt(ANK_DataSort arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataSortOpt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataSortOpt, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataSortTuple(ANK_DataSort arg) */

inline ATbool ANK_isDataSortTuple(ANK_DataSort arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataSortTuple)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataSortTuple, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataSortAlt(ANK_DataSort arg) */

inline ATbool ANK_isDataSortAlt(ANK_DataSort arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataSortAlt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataSortAlt, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataSortOutcome(ANK_DataSort arg) */

inline ATbool ANK_isDataSortOutcome(ANK_DataSort arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataSortOutcome)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataSortOutcome, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataSortSortName(ANK_DataSort arg) */

ATbool ANK_hasDataSortSortName(ANK_DataSort arg)
{
  if (ANK_isDataSortSortname(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_SortName ANK_getDataSortSortName(ANK_DataSort arg) */

ANK_SortName ANK_getDataSortSortName(ANK_DataSort arg)
{
  
    return (ANK_SortName)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataSort ANK_setDataSortSortName(ANK_DataSort arg, ANK_SortName SortName) */

ANK_DataSort ANK_setDataSortSortName(ANK_DataSort arg, ANK_SortName SortName)
{
  if (ANK_isDataSortSortname(arg)) {
    return (ANK_DataSort)ATsetArgument((ATermAppl)arg, (ATerm)SortName, 0);
  }

  ATabort("DataSort has no SortName: %t\n", arg);
  return (ANK_DataSort)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataSortSort(ANK_DataSort arg) */

ATbool ANK_hasDataSortSort(ANK_DataSort arg)
{
  if (ANK_isDataSortStar(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortPlus(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortOpt(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataSort ANK_getDataSortSort(ANK_DataSort arg) */

ANK_DataSort ANK_getDataSortSort(ANK_DataSort arg)
{
  if (ANK_isDataSortStar(arg)) {
    return (ANK_DataSort)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (ANK_isDataSortPlus(arg)) {
    return (ANK_DataSort)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (ANK_DataSort)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataSort ANK_setDataSortSort(ANK_DataSort arg, ANK_DataSort sort) */

ANK_DataSort ANK_setDataSortSort(ANK_DataSort arg, ANK_DataSort sort)
{
  if (ANK_isDataSortStar(arg)) {
    return (ANK_DataSort)ATsetArgument((ATermAppl)arg, (ATerm)sort, 0);
  }
  else if (ANK_isDataSortPlus(arg)) {
    return (ANK_DataSort)ATsetArgument((ATermAppl)arg, (ATerm)sort, 0);
  }
  else if (ANK_isDataSortOpt(arg)) {
    return (ANK_DataSort)ATsetArgument((ATermAppl)arg, (ATerm)sort, 0);
  }

  ATabort("DataSort has no Sort: %t\n", arg);
  return (ANK_DataSort)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataSortList(ANK_DataSort arg) */

ATbool ANK_hasDataSortList(ANK_DataSort arg)
{
  if (ANK_isDataSortTuple(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortAlt(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataSortList ANK_getDataSortList(ANK_DataSort arg) */

ANK_DataSortList ANK_getDataSortList(ANK_DataSort arg)
{
  if (ANK_isDataSortTuple(arg)) {
    return (ANK_DataSortList)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (ANK_DataSortList)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataSort ANK_setDataSortList(ANK_DataSort arg, ANK_DataSortList list) */

ANK_DataSort ANK_setDataSortList(ANK_DataSort arg, ANK_DataSortList list)
{
  if (ANK_isDataSortTuple(arg)) {
    return (ANK_DataSort)ATsetArgument((ATermAppl)arg, (ATerm)list, 0);
  }
  else if (ANK_isDataSortAlt(arg)) {
    return (ANK_DataSort)ATsetArgument((ATermAppl)arg, (ATerm)list, 0);
  }

  ATabort("DataSort has no List: %t\n", arg);
  return (ANK_DataSort)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataSortOutcomes(ANK_DataSort arg) */

ATbool ANK_hasDataSortOutcomes(ANK_DataSort arg)
{
  if (ANK_isDataSortOutcome(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_OutcomeOutcomes ANK_getDataSortOutcomes(ANK_DataSort arg) */

ANK_OutcomeOutcomes ANK_getDataSortOutcomes(ANK_DataSort arg)
{
  
    return (ANK_OutcomeOutcomes)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataSort ANK_setDataSortOutcomes(ANK_DataSort arg, ANK_OutcomeOutcomes outcomes) */

ANK_DataSort ANK_setDataSortOutcomes(ANK_DataSort arg, ANK_OutcomeOutcomes outcomes)
{
  if (ANK_isDataSortOutcome(arg)) {
    return (ANK_DataSort)ATsetArgument((ATermAppl)arg, (ATerm)outcomes, 0);
  }

  ATabort("DataSort has no Outcomes: %t\n", arg);
  return (ANK_DataSort)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_DataSortList accessors */

/*{{{  ATbool ANK_isValidDataSortList(ANK_DataSortList arg) */

ATbool ANK_isValidDataSortList(ANK_DataSortList arg)
{
  if (ANK_isDataSortListEmpty(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortListSingle(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataSortListEmpty(ANK_DataSortList arg) */

inline ATbool ANK_isDataSortListEmpty(ANK_DataSortList arg)
{
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataSortListEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataSortListSingle(ANK_DataSortList arg) */

inline ATbool ANK_isDataSortListSingle(ANK_DataSortList arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ANK_patternDataSortListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataSortListMany(ANK_DataSortList arg) */

inline ATbool ANK_isDataSortListMany(ANK_DataSortList arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ANK_patternDataSortListMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool ANK_hasDataSortListHead(ANK_DataSortList arg) */

ATbool ANK_hasDataSortListHead(ANK_DataSortList arg)
{
  if (ANK_isDataSortListSingle(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataSortListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataSort ANK_getDataSortListHead(ANK_DataSortList arg) */

ANK_DataSort ANK_getDataSortListHead(ANK_DataSortList arg)
{
  if (ANK_isDataSortListSingle(arg)) {
    return (ANK_DataSort)ATgetFirst((ATermList)arg);
  }
  else 
    return (ANK_DataSort)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  ANK_DataSortList ANK_setDataSortListHead(ANK_DataSortList arg, ANK_DataSort head) */

ANK_DataSortList ANK_setDataSortListHead(ANK_DataSortList arg, ANK_DataSort head)
{
  if (ANK_isDataSortListSingle(arg)) {
    return (ANK_DataSortList)ATreplace((ATermList)arg, (ATerm)head, 0);
  }
  else if (ANK_isDataSortListMany(arg)) {
    return (ANK_DataSortList)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("DataSortList has no Head: %t\n", arg);
  return (ANK_DataSortList)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataSortListTail(ANK_DataSortList arg) */

ATbool ANK_hasDataSortListTail(ANK_DataSortList arg)
{
  if (ANK_isDataSortListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataSortList ANK_getDataSortListTail(ANK_DataSortList arg) */

ANK_DataSortList ANK_getDataSortListTail(ANK_DataSortList arg)
{
  
    return (ANK_DataSortList)ATgetNext((ATermList)arg);
}

/*}}}  */
/*{{{  ANK_DataSortList ANK_setDataSortListTail(ANK_DataSortList arg, ANK_DataSortList tail) */

ANK_DataSortList ANK_setDataSortListTail(ANK_DataSortList arg, ANK_DataSortList tail)
{
  if (ANK_isDataSortListMany(arg)) {
    return (ANK_DataSortList)ATreplaceTail((ATermList)arg, (ATermList)tail, 1);
  }

  ATabort("DataSortList has no Tail: %t\n", arg);
  return (ANK_DataSortList)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_OutcomeOutcomes accessors */

/*{{{  ATbool ANK_isValidOutcomeOutcomes(ANK_OutcomeOutcomes arg) */

ATbool ANK_isValidOutcomeOutcomes(ANK_OutcomeOutcomes arg)
{
  if (ANK_isOutcomeOutcomesSingle(arg)) {
    return ATtrue;
  }
  else if (ANK_isOutcomeOutcomesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isOutcomeOutcomesSingle(ANK_OutcomeOutcomes arg) */

inline ATbool ANK_isOutcomeOutcomesSingle(ANK_OutcomeOutcomes arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ANK_patternOutcomeOutcomesSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool ANK_isOutcomeOutcomesMany(ANK_OutcomeOutcomes arg) */

inline ATbool ANK_isOutcomeOutcomesMany(ANK_OutcomeOutcomes arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ANK_patternOutcomeOutcomesMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool ANK_hasOutcomeOutcomesHead(ANK_OutcomeOutcomes arg) */

ATbool ANK_hasOutcomeOutcomesHead(ANK_OutcomeOutcomes arg)
{
  if (ANK_isOutcomeOutcomesSingle(arg)) {
    return ATtrue;
  }
  else if (ANK_isOutcomeOutcomesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Outcome ANK_getOutcomeOutcomesHead(ANK_OutcomeOutcomes arg) */

ANK_Outcome ANK_getOutcomeOutcomesHead(ANK_OutcomeOutcomes arg)
{
  if (ANK_isOutcomeOutcomesSingle(arg)) {
    return (ANK_Outcome)ATgetFirst((ATermList)arg);
  }
  else 
    return (ANK_Outcome)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  ANK_OutcomeOutcomes ANK_setOutcomeOutcomesHead(ANK_OutcomeOutcomes arg, ANK_Outcome head) */

ANK_OutcomeOutcomes ANK_setOutcomeOutcomesHead(ANK_OutcomeOutcomes arg, ANK_Outcome head)
{
  if (ANK_isOutcomeOutcomesSingle(arg)) {
    return (ANK_OutcomeOutcomes)ATreplace((ATermList)arg, (ATerm)head, 0);
  }
  else if (ANK_isOutcomeOutcomesMany(arg)) {
    return (ANK_OutcomeOutcomes)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("OutcomeOutcomes has no Head: %t\n", arg);
  return (ANK_OutcomeOutcomes)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasOutcomeOutcomesTail(ANK_OutcomeOutcomes arg) */

ATbool ANK_hasOutcomeOutcomesTail(ANK_OutcomeOutcomes arg)
{
  if (ANK_isOutcomeOutcomesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_OutcomeOutcomes ANK_getOutcomeOutcomesTail(ANK_OutcomeOutcomes arg) */

ANK_OutcomeOutcomes ANK_getOutcomeOutcomesTail(ANK_OutcomeOutcomes arg)
{
  
    return (ANK_OutcomeOutcomes)ATgetNext((ATermList)arg);
}

/*}}}  */
/*{{{  ANK_OutcomeOutcomes ANK_setOutcomeOutcomesTail(ANK_OutcomeOutcomes arg, ANK_OutcomeOutcomes tail) */

ANK_OutcomeOutcomes ANK_setOutcomeOutcomesTail(ANK_OutcomeOutcomes arg, ANK_OutcomeOutcomes tail)
{
  if (ANK_isOutcomeOutcomesMany(arg)) {
    return (ANK_OutcomeOutcomes)ATreplaceTail((ATermList)arg, (ATermList)tail, 1);
  }

  ATabort("OutcomeOutcomes has no Tail: %t\n", arg);
  return (ANK_OutcomeOutcomes)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_Outcome accessors */

/*{{{  ATbool ANK_isValidOutcome(ANK_Outcome arg) */

ATbool ANK_isValidOutcome(ANK_Outcome arg)
{
  if (ANK_isOutcomeTaking(arg)) {
    return ATtrue;
  }
  else if (ANK_isOutcomeGiving(arg)) {
    return ATtrue;
  }
  else if (ANK_isOutcomeRaising(arg)) {
    return ATtrue;
  }
  else if (ANK_isOutcomeFailing(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isOutcomeTaking(ANK_Outcome arg) */

inline ATbool ANK_isOutcomeTaking(ANK_Outcome arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternOutcomeTaking)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternOutcomeTaking, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isOutcomeGiving(ANK_Outcome arg) */

inline ATbool ANK_isOutcomeGiving(ANK_Outcome arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternOutcomeGiving)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternOutcomeGiving, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isOutcomeRaising(ANK_Outcome arg) */

inline ATbool ANK_isOutcomeRaising(ANK_Outcome arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternOutcomeRaising)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternOutcomeRaising, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isOutcomeFailing(ANK_Outcome arg) */

inline ATbool ANK_isOutcomeFailing(ANK_Outcome arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternOutcomeFailing)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternOutcomeFailing));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasOutcomeSort(ANK_Outcome arg) */

ATbool ANK_hasOutcomeSort(ANK_Outcome arg)
{
  if (ANK_isOutcomeTaking(arg)) {
    return ATtrue;
  }
  else if (ANK_isOutcomeGiving(arg)) {
    return ATtrue;
  }
  else if (ANK_isOutcomeRaising(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataSort ANK_getOutcomeSort(ANK_Outcome arg) */

ANK_DataSort ANK_getOutcomeSort(ANK_Outcome arg)
{
  if (ANK_isOutcomeTaking(arg)) {
    return (ANK_DataSort)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (ANK_isOutcomeGiving(arg)) {
    return (ANK_DataSort)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (ANK_DataSort)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Outcome ANK_setOutcomeSort(ANK_Outcome arg, ANK_DataSort sort) */

ANK_Outcome ANK_setOutcomeSort(ANK_Outcome arg, ANK_DataSort sort)
{
  if (ANK_isOutcomeTaking(arg)) {
    return (ANK_Outcome)ATsetArgument((ATermAppl)arg, (ATerm)sort, 0);
  }
  else if (ANK_isOutcomeGiving(arg)) {
    return (ANK_Outcome)ATsetArgument((ATermAppl)arg, (ATerm)sort, 0);
  }
  else if (ANK_isOutcomeRaising(arg)) {
    return (ANK_Outcome)ATsetArgument((ATermAppl)arg, (ATerm)sort, 0);
  }

  ATabort("Outcome has no Sort: %t\n", arg);
  return (ANK_Outcome)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_SortName accessors */

/*{{{  ATbool ANK_isValidSortName(ANK_SortName arg) */

ATbool ANK_isValidSortName(ANK_SortName arg)
{
  if (ANK_isSortNameData(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameDatum(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameBindable(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameBindings(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameAgent(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameCell(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameStorable(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameAction(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameToken(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameString(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameMessage(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameMessageTag(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameList(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameBool(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameNat(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNamePos(arg)) {
    return ATtrue;
  }
  else if (ANK_isSortNameInt(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameData(ANK_SortName arg) */

inline ATbool ANK_isSortNameData(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameData)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameData));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameDatum(ANK_SortName arg) */

inline ATbool ANK_isSortNameDatum(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameDatum)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameDatum));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameBindable(ANK_SortName arg) */

inline ATbool ANK_isSortNameBindable(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameBindable)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameBindable));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameBindings(ANK_SortName arg) */

inline ATbool ANK_isSortNameBindings(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameBindings)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameBindings));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameAgent(ANK_SortName arg) */

inline ATbool ANK_isSortNameAgent(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameAgent)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameAgent));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameCell(ANK_SortName arg) */

inline ATbool ANK_isSortNameCell(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameCell)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameCell));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameStorable(ANK_SortName arg) */

inline ATbool ANK_isSortNameStorable(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameStorable)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameStorable));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameAction(ANK_SortName arg) */

inline ATbool ANK_isSortNameAction(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameAction)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameAction));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameToken(ANK_SortName arg) */

inline ATbool ANK_isSortNameToken(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameToken)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameToken));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameString(ANK_SortName arg) */

inline ATbool ANK_isSortNameString(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameString)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameString));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameMessage(ANK_SortName arg) */

inline ATbool ANK_isSortNameMessage(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameMessage)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameMessage));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameMessageTag(ANK_SortName arg) */

inline ATbool ANK_isSortNameMessageTag(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameMessageTag)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameMessageTag));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameList(ANK_SortName arg) */

inline ATbool ANK_isSortNameList(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameList)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameList));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameBool(ANK_SortName arg) */

inline ATbool ANK_isSortNameBool(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameBool)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameBool));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameNat(ANK_SortName arg) */

inline ATbool ANK_isSortNameNat(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameNat)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameNat));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNamePos(ANK_SortName arg) */

inline ATbool ANK_isSortNamePos(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNamePos)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNamePos));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isSortNameInt(ANK_SortName arg) */

inline ATbool ANK_isSortNameInt(ANK_SortName arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternSortNameInt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternSortNameInt));
#endif
  return ATtrue;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_Data accessors */

/*{{{  ATbool ANK_isValidData(ANK_Data arg) */

ATbool ANK_isValidData(ANK_Data arg)
{
  if (ANK_isDataDatum(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataDataconst(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataTuple(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataDefault(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataEmpty(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataDatum(ANK_Data arg) */

inline ATbool ANK_isDataDatum(ANK_Data arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataDatum)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataDatum, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataDataconst(ANK_Data arg) */

inline ATbool ANK_isDataDataconst(ANK_Data arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataDataconst)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataDataconst, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataTuple(ANK_Data arg) */

inline ATbool ANK_isDataTuple(ANK_Data arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataTuple)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataTuple, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataDefault(ANK_Data arg) */

inline ATbool ANK_isDataDefault(ANK_Data arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataDefault)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataEmpty(ANK_Data arg) */

inline ATbool ANK_isDataEmpty(ANK_Data arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataEmpty)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataDatum(ANK_Data arg) */

ATbool ANK_hasDataDatum(ANK_Data arg)
{
  if (ANK_isDataDatum(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Datum ANK_getDataDatum(ANK_Data arg) */

ANK_Datum ANK_getDataDatum(ANK_Data arg)
{
  
    return (ANK_Datum)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Data ANK_setDataDatum(ANK_Data arg, ANK_Datum Datum) */

ANK_Data ANK_setDataDatum(ANK_Data arg, ANK_Datum Datum)
{
  if (ANK_isDataDatum(arg)) {
    return (ANK_Data)ATsetArgument((ATermAppl)arg, (ATerm)Datum, 0);
  }

  ATabort("Data has no Datum: %t\n", arg);
  return (ANK_Data)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataDataConst(ANK_Data arg) */

ATbool ANK_hasDataDataConst(ANK_Data arg)
{
  if (ANK_isDataDataconst(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataConst ANK_getDataDataConst(ANK_Data arg) */

ANK_DataConst ANK_getDataDataConst(ANK_Data arg)
{
  
    return (ANK_DataConst)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Data ANK_setDataDataConst(ANK_Data arg, ANK_DataConst DataConst) */

ANK_Data ANK_setDataDataConst(ANK_Data arg, ANK_DataConst DataConst)
{
  if (ANK_isDataDataconst(arg)) {
    return (ANK_Data)ATsetArgument((ATermAppl)arg, (ATerm)DataConst, 0);
  }

  ATabort("Data has no DataConst: %t\n", arg);
  return (ANK_Data)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataHead(ANK_Data arg) */

ATbool ANK_hasDataHead(ANK_Data arg)
{
  if (ANK_isDataTuple(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Data ANK_getDataHead(ANK_Data arg) */

ANK_Data ANK_getDataHead(ANK_Data arg)
{
  
    return (ANK_Data)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Data ANK_setDataHead(ANK_Data arg, ANK_Data head) */

ANK_Data ANK_setDataHead(ANK_Data arg, ANK_Data head)
{
  if (ANK_isDataTuple(arg)) {
    return (ANK_Data)ATsetArgument((ATermAppl)arg, (ATerm)head, 0);
  }

  ATabort("Data has no Head: %t\n", arg);
  return (ANK_Data)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataTail(ANK_Data arg) */

ATbool ANK_hasDataTail(ANK_Data arg)
{
  if (ANK_isDataTuple(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataTail ANK_getDataTail(ANK_Data arg) */

ANK_DataTail ANK_getDataTail(ANK_Data arg)
{
  
    return (ANK_DataTail)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  ANK_Data ANK_setDataTail(ANK_Data arg, ANK_DataTail tail) */

ANK_Data ANK_setDataTail(ANK_Data arg, ANK_DataTail tail)
{
  if (ANK_isDataTuple(arg)) {
    return (ANK_Data)ATsetArgument((ATermAppl)arg, (ATerm)tail, 1);
  }

  ATabort("Data has no Tail: %t\n", arg);
  return (ANK_Data)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataData(ANK_Data arg) */

ATbool ANK_hasDataData(ANK_Data arg)
{
  if (ANK_isDataDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Data ANK_getDataData(ANK_Data arg) */

ANK_Data ANK_getDataData(ANK_Data arg)
{
  
    return (ANK_Data)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Data ANK_setDataData(ANK_Data arg, ANK_Data Data) */

ANK_Data ANK_setDataData(ANK_Data arg, ANK_Data Data)
{
  if (ANK_isDataDefault(arg)) {
    return (ANK_Data)ATsetArgument((ATermAppl)arg, (ATerm)Data, 0);
  }

  ATabort("Data has no Data: %t\n", arg);
  return (ANK_Data)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_DataOpPrefix accessors */

/*{{{  ATbool ANK_isValidDataOpPrefix(ANK_DataOpPrefix arg) */

ATbool ANK_isValidDataOpPrefix(ANK_DataOpPrefix arg)
{
  if (ANK_isDataOpPrefixTheSort(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpPrefixBinding(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpPrefixOverriding(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpPrefixDisjointUnion(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpPrefixBound(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpPrefixActionPrefix(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpPrefixProvide(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpPrefixTupleToList(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpPrefixNot(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpPrefixOpComponent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpPrefixTheSort(ANK_DataOpPrefix arg) */

inline ATbool ANK_isDataOpPrefixTheSort(ANK_DataOpPrefix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpPrefixTheSort)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpPrefixTheSort, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpPrefixBinding(ANK_DataOpPrefix arg) */

inline ATbool ANK_isDataOpPrefixBinding(ANK_DataOpPrefix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpPrefixBinding)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpPrefixBinding));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpPrefixOverriding(ANK_DataOpPrefix arg) */

inline ATbool ANK_isDataOpPrefixOverriding(ANK_DataOpPrefix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpPrefixOverriding)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpPrefixOverriding));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpPrefixDisjointUnion(ANK_DataOpPrefix arg) */

inline ATbool ANK_isDataOpPrefixDisjointUnion(ANK_DataOpPrefix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpPrefixDisjointUnion)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpPrefixDisjointUnion));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpPrefixBound(ANK_DataOpPrefix arg) */

inline ATbool ANK_isDataOpPrefixBound(ANK_DataOpPrefix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpPrefixBound)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpPrefixBound));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpPrefixActionPrefix(ANK_DataOpPrefix arg) */

inline ATbool ANK_isDataOpPrefixActionPrefix(ANK_DataOpPrefix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpPrefixActionPrefix)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpPrefixActionPrefix, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpPrefixProvide(ANK_DataOpPrefix arg) */

inline ATbool ANK_isDataOpPrefixProvide(ANK_DataOpPrefix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpPrefixProvide)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpPrefixProvide));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpPrefixTupleToList(ANK_DataOpPrefix arg) */

inline ATbool ANK_isDataOpPrefixTupleToList(ANK_DataOpPrefix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpPrefixTupleToList)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpPrefixTupleToList));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpPrefixNot(ANK_DataOpPrefix arg) */

inline ATbool ANK_isDataOpPrefixNot(ANK_DataOpPrefix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpPrefixNot)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpPrefixNot));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpPrefixOpComponent(ANK_DataOpPrefix arg) */

inline ATbool ANK_isDataOpPrefixOpComponent(ANK_DataOpPrefix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpPrefixOpComponent)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpPrefixOpComponent, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataOpPrefixSort(ANK_DataOpPrefix arg) */

ATbool ANK_hasDataOpPrefixSort(ANK_DataOpPrefix arg)
{
  if (ANK_isDataOpPrefixTheSort(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataSort ANK_getDataOpPrefixSort(ANK_DataOpPrefix arg) */

ANK_DataSort ANK_getDataOpPrefixSort(ANK_DataOpPrefix arg)
{
  
    return (ANK_DataSort)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_setDataOpPrefixSort(ANK_DataOpPrefix arg, ANK_DataSort sort) */

ANK_DataOpPrefix ANK_setDataOpPrefixSort(ANK_DataOpPrefix arg, ANK_DataSort sort)
{
  if (ANK_isDataOpPrefixTheSort(arg)) {
    return (ANK_DataOpPrefix)ATsetArgument((ATermAppl)arg, (ATerm)sort, 0);
  }

  ATabort("DataOpPrefix has no Sort: %t\n", arg);
  return (ANK_DataOpPrefix)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataOpPrefixActionPrefix(ANK_DataOpPrefix arg) */

ATbool ANK_hasDataOpPrefixActionPrefix(ANK_DataOpPrefix arg)
{
  if (ANK_isDataOpPrefixActionPrefix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_ActionPrefix ANK_getDataOpPrefixActionPrefix(ANK_DataOpPrefix arg) */

ANK_ActionPrefix ANK_getDataOpPrefixActionPrefix(ANK_DataOpPrefix arg)
{
  
    return (ANK_ActionPrefix)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_setDataOpPrefixActionPrefix(ANK_DataOpPrefix arg, ANK_ActionPrefix ActionPrefix) */

ANK_DataOpPrefix ANK_setDataOpPrefixActionPrefix(ANK_DataOpPrefix arg, ANK_ActionPrefix ActionPrefix)
{
  if (ANK_isDataOpPrefixActionPrefix(arg)) {
    return (ANK_DataOpPrefix)ATsetArgument((ATermAppl)arg, (ATerm)ActionPrefix, 0);
  }

  ATabort("DataOpPrefix has no ActionPrefix: %t\n", arg);
  return (ANK_DataOpPrefix)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataOpPrefixNatCon(ANK_DataOpPrefix arg) */

ATbool ANK_hasDataOpPrefixNatCon(ANK_DataOpPrefix arg)
{
  if (ANK_isDataOpPrefixOpComponent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_NatCon ANK_getDataOpPrefixNatCon(ANK_DataOpPrefix arg) */

ANK_NatCon ANK_getDataOpPrefixNatCon(ANK_DataOpPrefix arg)
{
  
    return (ANK_NatCon)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_setDataOpPrefixNatCon(ANK_DataOpPrefix arg, ANK_NatCon natCon) */

ANK_DataOpPrefix ANK_setDataOpPrefixNatCon(ANK_DataOpPrefix arg, ANK_NatCon natCon)
{
  if (ANK_isDataOpPrefixOpComponent(arg)) {
    return (ANK_DataOpPrefix)ATsetArgument((ATermAppl)arg, (ATerm)natCon, 0);
  }

  ATabort("DataOpPrefix has no NatCon: %t\n", arg);
  return (ANK_DataOpPrefix)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_DataOp accessors */

/*{{{  ATbool ANK_isValidDataOp(ANK_DataOp arg) */

ATbool ANK_isValidDataOp(ANK_DataOp arg)
{
  if (ANK_isDataOpPrefix(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpInfix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpPrefix(ANK_DataOp arg) */

inline ATbool ANK_isDataOpPrefix(ANK_DataOp arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpPrefix)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpPrefix, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpInfix(ANK_DataOp arg) */

inline ATbool ANK_isDataOpInfix(ANK_DataOp arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpInfix)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpInfix, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataOpPrefix(ANK_DataOp arg) */

ATbool ANK_hasDataOpPrefix(ANK_DataOp arg)
{
  if (ANK_isDataOpPrefix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_getDataOpPrefix(ANK_DataOp arg) */

ANK_DataOpPrefix ANK_getDataOpPrefix(ANK_DataOp arg)
{
  
    return (ANK_DataOpPrefix)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataOp ANK_setDataOpPrefix(ANK_DataOp arg, ANK_DataOpPrefix prefix) */

ANK_DataOp ANK_setDataOpPrefix(ANK_DataOp arg, ANK_DataOpPrefix prefix)
{
  if (ANK_isDataOpPrefix(arg)) {
    return (ANK_DataOp)ATsetArgument((ATermAppl)arg, (ATerm)prefix, 0);
  }

  ATabort("DataOp has no Prefix: %t\n", arg);
  return (ANK_DataOp)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataOpInfix(ANK_DataOp arg) */

ATbool ANK_hasDataOpInfix(ANK_DataOp arg)
{
  if (ANK_isDataOpInfix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataOpInfix ANK_getDataOpInfix(ANK_DataOp arg) */

ANK_DataOpInfix ANK_getDataOpInfix(ANK_DataOp arg)
{
  
    return (ANK_DataOpInfix)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataOp ANK_setDataOpInfix(ANK_DataOp arg, ANK_DataOpInfix infix) */

ANK_DataOp ANK_setDataOpInfix(ANK_DataOp arg, ANK_DataOpInfix infix)
{
  if (ANK_isDataOpInfix(arg)) {
    return (ANK_DataOp)ATsetArgument((ATermAppl)arg, (ATerm)infix, 0);
  }

  ATabort("DataOp has no Infix: %t\n", arg);
  return (ANK_DataOp)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_DataPred accessors */

/*{{{  ATbool ANK_isValidDataPred(ANK_DataPred arg) */

ATbool ANK_isValidDataPred(ANK_DataPred arg)
{
  if (ANK_isDataPredPrefix(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataPredInfix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataPredPrefix(ANK_DataPred arg) */

inline ATbool ANK_isDataPredPrefix(ANK_DataPred arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataPredPrefix)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataPredPrefix, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataPredInfix(ANK_DataPred arg) */

inline ATbool ANK_isDataPredInfix(ANK_DataPred arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataPredInfix)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataPredInfix, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataPredPrefix(ANK_DataPred arg) */

ATbool ANK_hasDataPredPrefix(ANK_DataPred arg)
{
  if (ANK_isDataPredPrefix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataPredPrefix ANK_getDataPredPrefix(ANK_DataPred arg) */

ANK_DataPredPrefix ANK_getDataPredPrefix(ANK_DataPred arg)
{
  
    return (ANK_DataPredPrefix)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataPred ANK_setDataPredPrefix(ANK_DataPred arg, ANK_DataPredPrefix prefix) */

ANK_DataPred ANK_setDataPredPrefix(ANK_DataPred arg, ANK_DataPredPrefix prefix)
{
  if (ANK_isDataPredPrefix(arg)) {
    return (ANK_DataPred)ATsetArgument((ATermAppl)arg, (ATerm)prefix, 0);
  }

  ATabort("DataPred has no Prefix: %t\n", arg);
  return (ANK_DataPred)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataPredInfix(ANK_DataPred arg) */

ATbool ANK_hasDataPredInfix(ANK_DataPred arg)
{
  if (ANK_isDataPredInfix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataPredInfix ANK_getDataPredInfix(ANK_DataPred arg) */

ANK_DataPredInfix ANK_getDataPredInfix(ANK_DataPred arg)
{
  
    return (ANK_DataPredInfix)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataPred ANK_setDataPredInfix(ANK_DataPred arg, ANK_DataPredInfix infix) */

ANK_DataPred ANK_setDataPredInfix(ANK_DataPred arg, ANK_DataPredInfix infix)
{
  if (ANK_isDataPredInfix(arg)) {
    return (ANK_DataPred)ATsetArgument((ATermAppl)arg, (ATerm)infix, 0);
  }

  ATabort("DataPred has no Infix: %t\n", arg);
  return (ANK_DataPred)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_DataConst accessors */

/*{{{  ATbool ANK_isValidDataConst(ANK_DataConst arg) */

ATbool ANK_isValidDataConst(ANK_DataConst arg)
{
  if (ANK_isDataConstTrue(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataConstFalse(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataConstNoBindings(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataConstTrue(ANK_DataConst arg) */

inline ATbool ANK_isDataConstTrue(ANK_DataConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataConstTrue)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataConstTrue));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataConstFalse(ANK_DataConst arg) */

inline ATbool ANK_isDataConstFalse(ANK_DataConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataConstFalse)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataConstFalse));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataConstNoBindings(ANK_DataConst arg) */

inline ATbool ANK_isDataConstNoBindings(ANK_DataConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataConstNoBindings)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataConstNoBindings));
#endif
  return ATtrue;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_DataTail accessors */

/*{{{  ATbool ANK_isValidDataTail(ANK_DataTail arg) */

ATbool ANK_isValidDataTail(ANK_DataTail arg)
{
  if (ANK_isDataTailSingle(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataTailMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataTailSingle(ANK_DataTail arg) */

inline ATbool ANK_isDataTailSingle(ANK_DataTail arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ANK_patternDataTailSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataTailMany(ANK_DataTail arg) */

inline ATbool ANK_isDataTailMany(ANK_DataTail arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ANK_patternDataTailMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool ANK_hasDataTailHead(ANK_DataTail arg) */

ATbool ANK_hasDataTailHead(ANK_DataTail arg)
{
  if (ANK_isDataTailSingle(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataTailMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Data ANK_getDataTailHead(ANK_DataTail arg) */

ANK_Data ANK_getDataTailHead(ANK_DataTail arg)
{
  if (ANK_isDataTailSingle(arg)) {
    return (ANK_Data)ATgetFirst((ATermList)arg);
  }
  else 
    return (ANK_Data)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  ANK_DataTail ANK_setDataTailHead(ANK_DataTail arg, ANK_Data head) */

ANK_DataTail ANK_setDataTailHead(ANK_DataTail arg, ANK_Data head)
{
  if (ANK_isDataTailSingle(arg)) {
    return (ANK_DataTail)ATreplace((ATermList)arg, (ATerm)head, 0);
  }
  else if (ANK_isDataTailMany(arg)) {
    return (ANK_DataTail)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("DataTail has no Head: %t\n", arg);
  return (ANK_DataTail)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataTailTail(ANK_DataTail arg) */

ATbool ANK_hasDataTailTail(ANK_DataTail arg)
{
  if (ANK_isDataTailMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataTail ANK_getDataTailTail(ANK_DataTail arg) */

ANK_DataTail ANK_getDataTailTail(ANK_DataTail arg)
{
  
    return (ANK_DataTail)ATgetNext((ATermList)arg);
}

/*}}}  */
/*{{{  ANK_DataTail ANK_setDataTailTail(ANK_DataTail arg, ANK_DataTail tail) */

ANK_DataTail ANK_setDataTailTail(ANK_DataTail arg, ANK_DataTail tail)
{
  if (ANK_isDataTailMany(arg)) {
    return (ANK_DataTail)ATreplaceTail((ATermList)arg, (ATermList)tail, 1);
  }

  ATabort("DataTail has no Tail: %t\n", arg);
  return (ANK_DataTail)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_BoolConst accessors */

/*{{{  ATbool ANK_isValidBoolConst(ANK_BoolConst arg) */

ATbool ANK_isValidBoolConst(ANK_BoolConst arg)
{
  if (ANK_isBoolConstTrue(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolConstFalse(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isBoolConstTrue(ANK_BoolConst arg) */

inline ATbool ANK_isBoolConstTrue(ANK_BoolConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternBoolConstTrue)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternBoolConstTrue));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isBoolConstFalse(ANK_BoolConst arg) */

inline ATbool ANK_isBoolConstFalse(ANK_BoolConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternBoolConstFalse)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternBoolConstFalse));
#endif
  return ATtrue;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_Bool accessors */

/*{{{  ATbool ANK_isValidBool(ANK_Bool arg) */

ATbool ANK_isValidBool(ANK_Bool arg)
{
  if (ANK_isBoolBoolconst(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolNot(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolOr(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolAnd(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolDefault(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolGt(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolGe(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolLt(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolLe(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isBoolBoolconst(ANK_Bool arg) */

inline ATbool ANK_isBoolBoolconst(ANK_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternBoolBoolconst)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternBoolBoolconst, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isBoolNot(ANK_Bool arg) */

inline ATbool ANK_isBoolNot(ANK_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternBoolNot)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternBoolNot, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isBoolOr(ANK_Bool arg) */

inline ATbool ANK_isBoolOr(ANK_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternBoolOr)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternBoolOr, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isBoolAnd(ANK_Bool arg) */

inline ATbool ANK_isBoolAnd(ANK_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternBoolAnd)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternBoolAnd, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isBoolDefault(ANK_Bool arg) */

inline ATbool ANK_isBoolDefault(ANK_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternBoolDefault)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternBoolDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isBoolGt(ANK_Bool arg) */

inline ATbool ANK_isBoolGt(ANK_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternBoolGt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternBoolGt, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isBoolGe(ANK_Bool arg) */

inline ATbool ANK_isBoolGe(ANK_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternBoolGe)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternBoolGe, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isBoolLt(ANK_Bool arg) */

inline ATbool ANK_isBoolLt(ANK_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternBoolLt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternBoolLt, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isBoolLe(ANK_Bool arg) */

inline ATbool ANK_isBoolLe(ANK_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternBoolLe)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternBoolLe, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasBoolBoolconst(ANK_Bool arg) */

ATbool ANK_hasBoolBoolconst(ANK_Bool arg)
{
  if (ANK_isBoolBoolconst(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_BoolConst ANK_getBoolBoolconst(ANK_Bool arg) */

ANK_BoolConst ANK_getBoolBoolconst(ANK_Bool arg)
{
  
    return (ANK_BoolConst)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Bool ANK_setBoolBoolconst(ANK_Bool arg, ANK_BoolConst boolconst) */

ANK_Bool ANK_setBoolBoolconst(ANK_Bool arg, ANK_BoolConst boolconst)
{
  if (ANK_isBoolBoolconst(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)boolconst, 0);
  }

  ATabort("Bool has no Boolconst: %t\n", arg);
  return (ANK_Bool)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasBoolNotArg(ANK_Bool arg) */

ATbool ANK_hasBoolNotArg(ANK_Bool arg)
{
  if (ANK_isBoolNot(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Bool ANK_getBoolNotArg(ANK_Bool arg) */

ANK_Bool ANK_getBoolNotArg(ANK_Bool arg)
{
  
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Bool ANK_setBoolNotArg(ANK_Bool arg, ANK_Bool notArg) */

ANK_Bool ANK_setBoolNotArg(ANK_Bool arg, ANK_Bool notArg)
{
  if (ANK_isBoolNot(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)notArg, 0);
  }

  ATabort("Bool has no NotArg: %t\n", arg);
  return (ANK_Bool)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasBoolLhs(ANK_Bool arg) */

ATbool ANK_hasBoolLhs(ANK_Bool arg)
{
  if (ANK_isBoolOr(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolAnd(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolGt(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolGe(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolLt(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolLe(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Bool ANK_getBoolLhs(ANK_Bool arg) */

ANK_Bool ANK_getBoolLhs(ANK_Bool arg)
{
  if (ANK_isBoolOr(arg)) {
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (ANK_isBoolAnd(arg)) {
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (ANK_isBoolGt(arg)) {
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (ANK_isBoolGe(arg)) {
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (ANK_isBoolLt(arg)) {
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Bool ANK_setBoolLhs(ANK_Bool arg, ANK_Bool lhs) */

ANK_Bool ANK_setBoolLhs(ANK_Bool arg, ANK_Bool lhs)
{
  if (ANK_isBoolOr(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }
  else if (ANK_isBoolAnd(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }
  else if (ANK_isBoolGt(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }
  else if (ANK_isBoolGe(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }
  else if (ANK_isBoolLt(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }
  else if (ANK_isBoolLe(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }

  ATabort("Bool has no Lhs: %t\n", arg);
  return (ANK_Bool)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasBoolRhs(ANK_Bool arg) */

ATbool ANK_hasBoolRhs(ANK_Bool arg)
{
  if (ANK_isBoolOr(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolAnd(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolGt(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolGe(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolLt(arg)) {
    return ATtrue;
  }
  else if (ANK_isBoolLe(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Bool ANK_getBoolRhs(ANK_Bool arg) */

ANK_Bool ANK_getBoolRhs(ANK_Bool arg)
{
  if (ANK_isBoolOr(arg)) {
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (ANK_isBoolAnd(arg)) {
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (ANK_isBoolGt(arg)) {
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (ANK_isBoolGe(arg)) {
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (ANK_isBoolLt(arg)) {
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  ANK_Bool ANK_setBoolRhs(ANK_Bool arg, ANK_Bool rhs) */

ANK_Bool ANK_setBoolRhs(ANK_Bool arg, ANK_Bool rhs)
{
  if (ANK_isBoolOr(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }
  else if (ANK_isBoolAnd(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }
  else if (ANK_isBoolGt(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }
  else if (ANK_isBoolGe(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }
  else if (ANK_isBoolLt(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }
  else if (ANK_isBoolLe(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }

  ATabort("Bool has no Rhs: %t\n", arg);
  return (ANK_Bool)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasBoolBool(ANK_Bool arg) */

ATbool ANK_hasBoolBool(ANK_Bool arg)
{
  if (ANK_isBoolDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Bool ANK_getBoolBool(ANK_Bool arg) */

ANK_Bool ANK_getBoolBool(ANK_Bool arg)
{
  
    return (ANK_Bool)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Bool ANK_setBoolBool(ANK_Bool arg, ANK_Bool Bool) */

ANK_Bool ANK_setBoolBool(ANK_Bool arg, ANK_Bool Bool)
{
  if (ANK_isBoolDefault(arg)) {
    return (ANK_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Bool, 0);
  }

  ATabort("Bool has no Bool: %t\n", arg);
  return (ANK_Bool)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_Datum accessors */

/*{{{  ATbool ANK_isValidDatum(ANK_Datum arg) */

ATbool ANK_isValidDatum(ANK_Datum arg)
{
  if (ANK_isDatumAgent(arg)) {
    return ATtrue;
  }
  else if (ANK_isDatumCell(arg)) {
    return ATtrue;
  }
  else if (ANK_isDatumAction(arg)) {
    return ATtrue;
  }
  else if (ANK_isDatumToken(arg)) {
    return ATtrue;
  }
  else if (ANK_isDatumMessageTag(arg)) {
    return ATtrue;
  }
  else if (ANK_isDatumList(arg)) {
    return ATtrue;
  }
  else if (ANK_isDatumDatum(arg)) {
    return ATtrue;
  }
  else if (ANK_isDatumInt(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDatumAgent(ANK_Datum arg) */

inline ATbool ANK_isDatumAgent(ANK_Datum arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDatumAgent)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDatumAgent, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDatumCell(ANK_Datum arg) */

inline ATbool ANK_isDatumCell(ANK_Datum arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDatumCell)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDatumCell, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDatumAction(ANK_Datum arg) */

inline ATbool ANK_isDatumAction(ANK_Datum arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDatumAction)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDatumAction, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDatumToken(ANK_Datum arg) */

inline ATbool ANK_isDatumToken(ANK_Datum arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDatumToken)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDatumToken, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDatumMessageTag(ANK_Datum arg) */

inline ATbool ANK_isDatumMessageTag(ANK_Datum arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDatumMessageTag)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDatumMessageTag, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDatumList(ANK_Datum arg) */

inline ATbool ANK_isDatumList(ANK_Datum arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDatumList)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDatumList, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDatumDatum(ANK_Datum arg) */

inline ATbool ANK_isDatumDatum(ANK_Datum arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDatumDatum)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDatumDatum, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDatumInt(ANK_Datum arg) */

inline ATbool ANK_isDatumInt(ANK_Datum arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDatumInt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDatumInt, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasDatumAgent(ANK_Datum arg) */

ATbool ANK_hasDatumAgent(ANK_Datum arg)
{
  if (ANK_isDatumAgent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Agent ANK_getDatumAgent(ANK_Datum arg) */

ANK_Agent ANK_getDatumAgent(ANK_Datum arg)
{
  
    return (ANK_Agent)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Datum ANK_setDatumAgent(ANK_Datum arg, ANK_Agent Agent) */

ANK_Datum ANK_setDatumAgent(ANK_Datum arg, ANK_Agent Agent)
{
  if (ANK_isDatumAgent(arg)) {
    return (ANK_Datum)ATsetArgument((ATermAppl)arg, (ATerm)Agent, 0);
  }

  ATabort("Datum has no Agent: %t\n", arg);
  return (ANK_Datum)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDatumCell(ANK_Datum arg) */

ATbool ANK_hasDatumCell(ANK_Datum arg)
{
  if (ANK_isDatumCell(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Cell ANK_getDatumCell(ANK_Datum arg) */

ANK_Cell ANK_getDatumCell(ANK_Datum arg)
{
  
    return (ANK_Cell)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Datum ANK_setDatumCell(ANK_Datum arg, ANK_Cell Cell) */

ANK_Datum ANK_setDatumCell(ANK_Datum arg, ANK_Cell Cell)
{
  if (ANK_isDatumCell(arg)) {
    return (ANK_Datum)ATsetArgument((ATermAppl)arg, (ATerm)Cell, 0);
  }

  ATabort("Datum has no Cell: %t\n", arg);
  return (ANK_Datum)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDatumAction(ANK_Datum arg) */

ATbool ANK_hasDatumAction(ANK_Datum arg)
{
  if (ANK_isDatumAction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Action ANK_getDatumAction(ANK_Datum arg) */

ANK_Action ANK_getDatumAction(ANK_Datum arg)
{
  
    return (ANK_Action)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Datum ANK_setDatumAction(ANK_Datum arg, ANK_Action Action) */

ANK_Datum ANK_setDatumAction(ANK_Datum arg, ANK_Action Action)
{
  if (ANK_isDatumAction(arg)) {
    return (ANK_Datum)ATsetArgument((ATermAppl)arg, (ATerm)Action, 0);
  }

  ATabort("Datum has no Action: %t\n", arg);
  return (ANK_Datum)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDatumToken(ANK_Datum arg) */

ATbool ANK_hasDatumToken(ANK_Datum arg)
{
  if (ANK_isDatumToken(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Token ANK_getDatumToken(ANK_Datum arg) */

ANK_Token ANK_getDatumToken(ANK_Datum arg)
{
  
    return (ANK_Token)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Datum ANK_setDatumToken(ANK_Datum arg, ANK_Token Token) */

ANK_Datum ANK_setDatumToken(ANK_Datum arg, ANK_Token Token)
{
  if (ANK_isDatumToken(arg)) {
    return (ANK_Datum)ATsetArgument((ATermAppl)arg, (ATerm)Token, 0);
  }

  ATabort("Datum has no Token: %t\n", arg);
  return (ANK_Datum)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDatumMessageTag(ANK_Datum arg) */

ATbool ANK_hasDatumMessageTag(ANK_Datum arg)
{
  if (ANK_isDatumMessageTag(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_MessageTag ANK_getDatumMessageTag(ANK_Datum arg) */

ANK_MessageTag ANK_getDatumMessageTag(ANK_Datum arg)
{
  
    return (ANK_MessageTag)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Datum ANK_setDatumMessageTag(ANK_Datum arg, ANK_MessageTag MessageTag) */

ANK_Datum ANK_setDatumMessageTag(ANK_Datum arg, ANK_MessageTag MessageTag)
{
  if (ANK_isDatumMessageTag(arg)) {
    return (ANK_Datum)ATsetArgument((ATermAppl)arg, (ATerm)MessageTag, 0);
  }

  ATabort("Datum has no MessageTag: %t\n", arg);
  return (ANK_Datum)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDatumList(ANK_Datum arg) */

ATbool ANK_hasDatumList(ANK_Datum arg)
{
  if (ANK_isDatumList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_List ANK_getDatumList(ANK_Datum arg) */

ANK_List ANK_getDatumList(ANK_Datum arg)
{
  
    return (ANK_List)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Datum ANK_setDatumList(ANK_Datum arg, ANK_List List) */

ANK_Datum ANK_setDatumList(ANK_Datum arg, ANK_List List)
{
  if (ANK_isDatumList(arg)) {
    return (ANK_Datum)ATsetArgument((ATermAppl)arg, (ATerm)List, 0);
  }

  ATabort("Datum has no List: %t\n", arg);
  return (ANK_Datum)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDatumBoolConst(ANK_Datum arg) */

ATbool ANK_hasDatumBoolConst(ANK_Datum arg)
{
  if (ANK_isDatumDatum(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_BoolConst ANK_getDatumBoolConst(ANK_Datum arg) */

ANK_BoolConst ANK_getDatumBoolConst(ANK_Datum arg)
{
  
    return (ANK_BoolConst)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Datum ANK_setDatumBoolConst(ANK_Datum arg, ANK_BoolConst BoolConst) */

ANK_Datum ANK_setDatumBoolConst(ANK_Datum arg, ANK_BoolConst BoolConst)
{
  if (ANK_isDatumDatum(arg)) {
    return (ANK_Datum)ATsetArgument((ATermAppl)arg, (ATerm)BoolConst, 0);
  }

  ATabort("Datum has no BoolConst: %t\n", arg);
  return (ANK_Datum)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasDatumInt(ANK_Datum arg) */

ATbool ANK_hasDatumInt(ANK_Datum arg)
{
  if (ANK_isDatumInt(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Int ANK_getDatumInt(ANK_Datum arg) */

ANK_Int ANK_getDatumInt(ANK_Datum arg)
{
  
    return (ANK_Int)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Datum ANK_setDatumInt(ANK_Datum arg, ANK_Int Int) */

ANK_Datum ANK_setDatumInt(ANK_Datum arg, ANK_Int Int)
{
  if (ANK_isDatumInt(arg)) {
    return (ANK_Datum)ATsetArgument((ATermAppl)arg, (ATerm)Int, 0);
  }

  ATabort("Datum has no Int: %t\n", arg);
  return (ANK_Datum)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_Numeral accessors */

/*{{{  ATbool ANK_isValidNumeral(ANK_Numeral arg) */

ATbool ANK_isValidNumeral(ANK_Numeral arg)
{
  if (ANK_isNumeralNatCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isNumeralNatCon(ANK_Numeral arg) */

inline ATbool ANK_isNumeralNatCon(ANK_Numeral arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternNumeralNatCon, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasNumeralNatCon(ANK_Numeral arg) */

ATbool ANK_hasNumeralNatCon(ANK_Numeral arg)
{
  if (ANK_isNumeralNatCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_NatCon ANK_getNumeralNatCon(ANK_Numeral arg) */

ANK_NatCon ANK_getNumeralNatCon(ANK_Numeral arg)
{
  
    return (ANK_NatCon)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Numeral ANK_setNumeralNatCon(ANK_Numeral arg, ANK_NatCon NatCon) */

ANK_Numeral ANK_setNumeralNatCon(ANK_Numeral arg, ANK_NatCon NatCon)
{
  if (ANK_isNumeralNatCon(arg)) {
    return (ANK_Numeral)ATsetArgument((ATermAppl)arg, (ATerm)NatCon, 0);
  }

  ATabort("Numeral has no NatCon: %t\n", arg);
  return (ANK_Numeral)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_Nat accessors */

/*{{{  ATbool ANK_isValidNat(ANK_Nat arg) */

ATbool ANK_isValidNat(ANK_Nat arg)
{
  if (ANK_isNatNumeral(arg)) {
    return ATtrue;
  }
  else if (ANK_isNatMonus(arg)) {
    return ATtrue;
  }
  else if (ANK_isNatDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isNatNumeral(ANK_Nat arg) */

inline ATbool ANK_isNatNumeral(ANK_Nat arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternNatNumeral)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternNatNumeral, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isNatMonus(ANK_Nat arg) */

inline ATbool ANK_isNatMonus(ANK_Nat arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternNatMonus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternNatMonus, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isNatDefault(ANK_Nat arg) */

inline ATbool ANK_isNatDefault(ANK_Nat arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternNatDefault)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternNatDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasNatNumeral(ANK_Nat arg) */

ATbool ANK_hasNatNumeral(ANK_Nat arg)
{
  if (ANK_isNatNumeral(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Numeral ANK_getNatNumeral(ANK_Nat arg) */

ANK_Numeral ANK_getNatNumeral(ANK_Nat arg)
{
  
    return (ANK_Numeral)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Nat ANK_setNatNumeral(ANK_Nat arg, ANK_Numeral Numeral) */

ANK_Nat ANK_setNatNumeral(ANK_Nat arg, ANK_Numeral Numeral)
{
  if (ANK_isNatNumeral(arg)) {
    return (ANK_Nat)ATsetArgument((ATermAppl)arg, (ATerm)Numeral, 0);
  }

  ATabort("Nat has no Numeral: %t\n", arg);
  return (ANK_Nat)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasNatLhs(ANK_Nat arg) */

ATbool ANK_hasNatLhs(ANK_Nat arg)
{
  if (ANK_isNatMonus(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Nat ANK_getNatLhs(ANK_Nat arg) */

ANK_Nat ANK_getNatLhs(ANK_Nat arg)
{
  
    return (ANK_Nat)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Nat ANK_setNatLhs(ANK_Nat arg, ANK_Nat lhs) */

ANK_Nat ANK_setNatLhs(ANK_Nat arg, ANK_Nat lhs)
{
  if (ANK_isNatMonus(arg)) {
    return (ANK_Nat)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }

  ATabort("Nat has no Lhs: %t\n", arg);
  return (ANK_Nat)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasNatRhs(ANK_Nat arg) */

ATbool ANK_hasNatRhs(ANK_Nat arg)
{
  if (ANK_isNatMonus(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Nat ANK_getNatRhs(ANK_Nat arg) */

ANK_Nat ANK_getNatRhs(ANK_Nat arg)
{
  
    return (ANK_Nat)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  ANK_Nat ANK_setNatRhs(ANK_Nat arg, ANK_Nat rhs) */

ANK_Nat ANK_setNatRhs(ANK_Nat arg, ANK_Nat rhs)
{
  if (ANK_isNatMonus(arg)) {
    return (ANK_Nat)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }

  ATabort("Nat has no Rhs: %t\n", arg);
  return (ANK_Nat)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasNatNat(ANK_Nat arg) */

ATbool ANK_hasNatNat(ANK_Nat arg)
{
  if (ANK_isNatDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Nat ANK_getNatNat(ANK_Nat arg) */

ANK_Nat ANK_getNatNat(ANK_Nat arg)
{
  
    return (ANK_Nat)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Nat ANK_setNatNat(ANK_Nat arg, ANK_Nat nat) */

ANK_Nat ANK_setNatNat(ANK_Nat arg, ANK_Nat nat)
{
  if (ANK_isNatDefault(arg)) {
    return (ANK_Nat)ATsetArgument((ATermAppl)arg, (ATerm)nat, 0);
  }

  ATabort("Nat has no Nat: %t\n", arg);
  return (ANK_Nat)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_Int accessors */

/*{{{  ATbool ANK_isValidInt(ANK_Int arg) */

ATbool ANK_isValidInt(ANK_Int arg)
{
  if (ANK_isIntNat(arg)) {
    return ATtrue;
  }
  else if (ANK_isIntUnaryPlus(arg)) {
    return ATtrue;
  }
  else if (ANK_isIntUnaryMinus(arg)) {
    return ATtrue;
  }
  else if (ANK_isIntPlus(arg)) {
    return ATtrue;
  }
  else if (ANK_isIntMinus(arg)) {
    return ATtrue;
  }
  else if (ANK_isIntTimes(arg)) {
    return ATtrue;
  }
  else if (ANK_isIntDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isIntNat(ANK_Int arg) */

inline ATbool ANK_isIntNat(ANK_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternIntNat)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternIntNat, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isIntUnaryPlus(ANK_Int arg) */

inline ATbool ANK_isIntUnaryPlus(ANK_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternIntUnaryPlus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternIntUnaryPlus, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isIntUnaryMinus(ANK_Int arg) */

inline ATbool ANK_isIntUnaryMinus(ANK_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternIntUnaryMinus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternIntUnaryMinus, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isIntPlus(ANK_Int arg) */

inline ATbool ANK_isIntPlus(ANK_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternIntPlus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternIntPlus, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isIntMinus(ANK_Int arg) */

inline ATbool ANK_isIntMinus(ANK_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternIntMinus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternIntMinus, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isIntTimes(ANK_Int arg) */

inline ATbool ANK_isIntTimes(ANK_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternIntTimes)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternIntTimes, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isIntDefault(ANK_Int arg) */

inline ATbool ANK_isIntDefault(ANK_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternIntDefault)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternIntDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasIntNat(ANK_Int arg) */

ATbool ANK_hasIntNat(ANK_Int arg)
{
  if (ANK_isIntNat(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Nat ANK_getIntNat(ANK_Int arg) */

ANK_Nat ANK_getIntNat(ANK_Int arg)
{
  
    return (ANK_Nat)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Int ANK_setIntNat(ANK_Int arg, ANK_Nat Nat) */

ANK_Int ANK_setIntNat(ANK_Int arg, ANK_Nat Nat)
{
  if (ANK_isIntNat(arg)) {
    return (ANK_Int)ATsetArgument((ATermAppl)arg, (ATerm)Nat, 0);
  }

  ATabort("Int has no Nat: %t\n", arg);
  return (ANK_Int)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasIntNatArg(ANK_Int arg) */

ATbool ANK_hasIntNatArg(ANK_Int arg)
{
  if (ANK_isIntUnaryPlus(arg)) {
    return ATtrue;
  }
  else if (ANK_isIntUnaryMinus(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Nat ANK_getIntNatArg(ANK_Int arg) */

ANK_Nat ANK_getIntNatArg(ANK_Int arg)
{
  if (ANK_isIntUnaryPlus(arg)) {
    return (ANK_Nat)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (ANK_Nat)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Int ANK_setIntNatArg(ANK_Int arg, ANK_Nat natArg) */

ANK_Int ANK_setIntNatArg(ANK_Int arg, ANK_Nat natArg)
{
  if (ANK_isIntUnaryPlus(arg)) {
    return (ANK_Int)ATsetArgument((ATermAppl)arg, (ATerm)natArg, 0);
  }
  else if (ANK_isIntUnaryMinus(arg)) {
    return (ANK_Int)ATsetArgument((ATermAppl)arg, (ATerm)natArg, 0);
  }

  ATabort("Int has no NatArg: %t\n", arg);
  return (ANK_Int)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasIntLhs(ANK_Int arg) */

ATbool ANK_hasIntLhs(ANK_Int arg)
{
  if (ANK_isIntPlus(arg)) {
    return ATtrue;
  }
  else if (ANK_isIntMinus(arg)) {
    return ATtrue;
  }
  else if (ANK_isIntTimes(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Int ANK_getIntLhs(ANK_Int arg) */

ANK_Int ANK_getIntLhs(ANK_Int arg)
{
  if (ANK_isIntPlus(arg)) {
    return (ANK_Int)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (ANK_isIntMinus(arg)) {
    return (ANK_Int)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (ANK_Int)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Int ANK_setIntLhs(ANK_Int arg, ANK_Int lhs) */

ANK_Int ANK_setIntLhs(ANK_Int arg, ANK_Int lhs)
{
  if (ANK_isIntPlus(arg)) {
    return (ANK_Int)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }
  else if (ANK_isIntMinus(arg)) {
    return (ANK_Int)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }
  else if (ANK_isIntTimes(arg)) {
    return (ANK_Int)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }

  ATabort("Int has no Lhs: %t\n", arg);
  return (ANK_Int)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasIntRhs(ANK_Int arg) */

ATbool ANK_hasIntRhs(ANK_Int arg)
{
  if (ANK_isIntPlus(arg)) {
    return ATtrue;
  }
  else if (ANK_isIntMinus(arg)) {
    return ATtrue;
  }
  else if (ANK_isIntTimes(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Int ANK_getIntRhs(ANK_Int arg) */

ANK_Int ANK_getIntRhs(ANK_Int arg)
{
  if (ANK_isIntPlus(arg)) {
    return (ANK_Int)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (ANK_isIntMinus(arg)) {
    return (ANK_Int)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (ANK_Int)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  ANK_Int ANK_setIntRhs(ANK_Int arg, ANK_Int rhs) */

ANK_Int ANK_setIntRhs(ANK_Int arg, ANK_Int rhs)
{
  if (ANK_isIntPlus(arg)) {
    return (ANK_Int)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }
  else if (ANK_isIntMinus(arg)) {
    return (ANK_Int)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }
  else if (ANK_isIntTimes(arg)) {
    return (ANK_Int)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }

  ATabort("Int has no Rhs: %t\n", arg);
  return (ANK_Int)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasIntInt(ANK_Int arg) */

ATbool ANK_hasIntInt(ANK_Int arg)
{
  if (ANK_isIntDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Int ANK_getIntInt(ANK_Int arg) */

ANK_Int ANK_getIntInt(ANK_Int arg)
{
  
    return (ANK_Int)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Int ANK_setIntInt(ANK_Int arg, ANK_Int Int) */

ANK_Int ANK_setIntInt(ANK_Int arg, ANK_Int Int)
{
  if (ANK_isIntDefault(arg)) {
    return (ANK_Int)ATsetArgument((ATermAppl)arg, (ATerm)Int, 0);
  }

  ATabort("Int has no Int: %t\n", arg);
  return (ANK_Int)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_Action accessors */

/*{{{  ATbool ANK_isValidAction(ANK_Action arg) */

ATbool ANK_isValidAction(ANK_Action arg)
{
  if (ANK_isActionTerminated(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionDefault(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConst(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionPrefix(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionInfix(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionProvide(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionGive(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionCheck(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionSelect(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionTerminated(ANK_Action arg) */

inline ATbool ANK_isActionTerminated(ANK_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionTerminated)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionTerminated, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionDefault(ANK_Action arg) */

inline ATbool ANK_isActionDefault(ANK_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionDefault)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConst(ANK_Action arg) */

inline ATbool ANK_isActionConst(ANK_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConst)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConst, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionPrefix(ANK_Action arg) */

inline ATbool ANK_isActionPrefix(ANK_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionPrefix)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionPrefix, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionInfix(ANK_Action arg) */

inline ATbool ANK_isActionInfix(ANK_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionInfix)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionInfix, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionProvide(ANK_Action arg) */

inline ATbool ANK_isActionProvide(ANK_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionProvide)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionProvide, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionGive(ANK_Action arg) */

inline ATbool ANK_isActionGive(ANK_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionGive)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionGive, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionCheck(ANK_Action arg) */

inline ATbool ANK_isActionCheck(ANK_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionCheck)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionCheck, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionSelect(ANK_Action arg) */

inline ATbool ANK_isActionSelect(ANK_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionSelect)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionSelect, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionTerminated(ANK_Action arg) */

ATbool ANK_hasActionTerminated(ANK_Action arg)
{
  if (ANK_isActionTerminated(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Terminated ANK_getActionTerminated(ANK_Action arg) */

ANK_Terminated ANK_getActionTerminated(ANK_Action arg)
{
  
    return (ANK_Terminated)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionTerminated(ANK_Action arg, ANK_Terminated Terminated) */

ANK_Action ANK_setActionTerminated(ANK_Action arg, ANK_Terminated Terminated)
{
  if (ANK_isActionTerminated(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)Terminated, 0);
  }

  ATabort("Action has no Terminated: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionAction(ANK_Action arg) */

ATbool ANK_hasActionAction(ANK_Action arg)
{
  if (ANK_isActionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Action ANK_getActionAction(ANK_Action arg) */

ANK_Action ANK_getActionAction(ANK_Action arg)
{
  
    return (ANK_Action)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionAction(ANK_Action arg, ANK_Action Action) */

ANK_Action ANK_setActionAction(ANK_Action arg, ANK_Action Action)
{
  if (ANK_isActionDefault(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)Action, 0);
  }

  ATabort("Action has no Action: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionActionConst(ANK_Action arg) */

ATbool ANK_hasActionActionConst(ANK_Action arg)
{
  if (ANK_isActionConst(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_getActionActionConst(ANK_Action arg) */

ANK_ActionConst ANK_getActionActionConst(ANK_Action arg)
{
  
    return (ANK_ActionConst)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionActionConst(ANK_Action arg, ANK_ActionConst ActionConst) */

ANK_Action ANK_setActionActionConst(ANK_Action arg, ANK_ActionConst ActionConst)
{
  if (ANK_isActionConst(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)ActionConst, 0);
  }

  ATabort("Action has no ActionConst: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionPrefix(ANK_Action arg) */

ATbool ANK_hasActionPrefix(ANK_Action arg)
{
  if (ANK_isActionPrefix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_ActionPrefix ANK_getActionPrefix(ANK_Action arg) */

ANK_ActionPrefix ANK_getActionPrefix(ANK_Action arg)
{
  
    return (ANK_ActionPrefix)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionPrefix(ANK_Action arg, ANK_ActionPrefix prefix) */

ANK_Action ANK_setActionPrefix(ANK_Action arg, ANK_ActionPrefix prefix)
{
  if (ANK_isActionPrefix(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)prefix, 0);
  }

  ATabort("Action has no Prefix: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionPrefixarg(ANK_Action arg) */

ATbool ANK_hasActionPrefixarg(ANK_Action arg)
{
  if (ANK_isActionPrefix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Action ANK_getActionPrefixarg(ANK_Action arg) */

ANK_Action ANK_getActionPrefixarg(ANK_Action arg)
{
  
    return (ANK_Action)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionPrefixarg(ANK_Action arg, ANK_Action prefixarg) */

ANK_Action ANK_setActionPrefixarg(ANK_Action arg, ANK_Action prefixarg)
{
  if (ANK_isActionPrefix(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)prefixarg, 1);
  }

  ATabort("Action has no Prefixarg: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionLhs(ANK_Action arg) */

ATbool ANK_hasActionLhs(ANK_Action arg)
{
  if (ANK_isActionInfix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Action ANK_getActionLhs(ANK_Action arg) */

ANK_Action ANK_getActionLhs(ANK_Action arg)
{
  
    return (ANK_Action)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionLhs(ANK_Action arg, ANK_Action lhs) */

ANK_Action ANK_setActionLhs(ANK_Action arg, ANK_Action lhs)
{
  if (ANK_isActionInfix(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }

  ATabort("Action has no Lhs: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionInfix(ANK_Action arg) */

ATbool ANK_hasActionInfix(ANK_Action arg)
{
  if (ANK_isActionInfix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_ActionInfix ANK_getActionInfix(ANK_Action arg) */

ANK_ActionInfix ANK_getActionInfix(ANK_Action arg)
{
  
    return (ANK_ActionInfix)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionInfix(ANK_Action arg, ANK_ActionInfix infix) */

ANK_Action ANK_setActionInfix(ANK_Action arg, ANK_ActionInfix infix)
{
  if (ANK_isActionInfix(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)infix, 1);
  }

  ATabort("Action has no Infix: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionRhs(ANK_Action arg) */

ATbool ANK_hasActionRhs(ANK_Action arg)
{
  if (ANK_isActionInfix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Action ANK_getActionRhs(ANK_Action arg) */

ANK_Action ANK_getActionRhs(ANK_Action arg)
{
  
    return (ANK_Action)ATgetArgument((ATermAppl)arg, 2);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionRhs(ANK_Action arg, ANK_Action rhs) */

ANK_Action ANK_setActionRhs(ANK_Action arg, ANK_Action rhs)
{
  if (ANK_isActionInfix(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 2);
  }

  ATabort("Action has no Rhs: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionData(ANK_Action arg) */

ATbool ANK_hasActionData(ANK_Action arg)
{
  if (ANK_isActionProvide(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Data ANK_getActionData(ANK_Action arg) */

ANK_Data ANK_getActionData(ANK_Action arg)
{
  
    return (ANK_Data)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionData(ANK_Action arg, ANK_Data data) */

ANK_Action ANK_setActionData(ANK_Action arg, ANK_Data data)
{
  if (ANK_isActionProvide(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)data, 0);
  }

  ATabort("Action has no Data: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionOp(ANK_Action arg) */

ATbool ANK_hasActionOp(ANK_Action arg)
{
  if (ANK_isActionGive(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataOp ANK_getActionOp(ANK_Action arg) */

ANK_DataOp ANK_getActionOp(ANK_Action arg)
{
  
    return (ANK_DataOp)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionOp(ANK_Action arg, ANK_DataOp op) */

ANK_Action ANK_setActionOp(ANK_Action arg, ANK_DataOp op)
{
  if (ANK_isActionGive(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)op, 0);
  }

  ATabort("Action has no Op: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionPred(ANK_Action arg) */

ATbool ANK_hasActionPred(ANK_Action arg)
{
  if (ANK_isActionCheck(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_DataPred ANK_getActionPred(ANK_Action arg) */

ANK_DataPred ANK_getActionPred(ANK_Action arg)
{
  
    return (ANK_DataPred)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionPred(ANK_Action arg, ANK_DataPred pred) */

ANK_Action ANK_setActionPred(ANK_Action arg, ANK_DataPred pred)
{
  if (ANK_isActionCheck(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)pred, 0);
  }

  ATabort("Action has no Pred: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionChoices(ANK_Action arg) */

ATbool ANK_hasActionChoices(ANK_Action arg)
{
  if (ANK_isActionSelect(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_ActionChoices ANK_getActionChoices(ANK_Action arg) */

ANK_ActionChoices ANK_getActionChoices(ANK_Action arg)
{
  
    return (ANK_ActionChoices)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Action ANK_setActionChoices(ANK_Action arg, ANK_ActionChoices choices) */

ANK_Action ANK_setActionChoices(ANK_Action arg, ANK_ActionChoices choices)
{
  if (ANK_isActionSelect(arg)) {
    return (ANK_Action)ATsetArgument((ATermAppl)arg, (ATerm)choices, 0);
  }

  ATabort("Action has no Choices: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_DataOpInfix accessors */

/*{{{  ATbool ANK_isValidDataOpInfix(ANK_DataOpInfix arg) */

ATbool ANK_isValidDataOpInfix(ANK_DataOpInfix arg)
{
  if (ANK_isDataOpInfixActionInfix(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpInfixPlus(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpInfixMonus(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpInfixTimes(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataOpInfixMinus(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpInfixActionInfix(ANK_DataOpInfix arg) */

inline ATbool ANK_isDataOpInfixActionInfix(ANK_DataOpInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpInfixActionInfix)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpInfixActionInfix, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpInfixPlus(ANK_DataOpInfix arg) */

inline ATbool ANK_isDataOpInfixPlus(ANK_DataOpInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpInfixPlus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpInfixPlus));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpInfixMonus(ANK_DataOpInfix arg) */

inline ATbool ANK_isDataOpInfixMonus(ANK_DataOpInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpInfixMonus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpInfixMonus));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpInfixTimes(ANK_DataOpInfix arg) */

inline ATbool ANK_isDataOpInfixTimes(ANK_DataOpInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpInfixTimes)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpInfixTimes));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataOpInfixMinus(ANK_DataOpInfix arg) */

inline ATbool ANK_isDataOpInfixMinus(ANK_DataOpInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataOpInfixMinus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataOpInfixMinus));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasDataOpInfixActionInfix(ANK_DataOpInfix arg) */

ATbool ANK_hasDataOpInfixActionInfix(ANK_DataOpInfix arg)
{
  if (ANK_isDataOpInfixActionInfix(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_ActionInfix ANK_getDataOpInfixActionInfix(ANK_DataOpInfix arg) */

ANK_ActionInfix ANK_getDataOpInfixActionInfix(ANK_DataOpInfix arg)
{
  
    return (ANK_ActionInfix)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_DataOpInfix ANK_setDataOpInfixActionInfix(ANK_DataOpInfix arg, ANK_ActionInfix ActionInfix) */

ANK_DataOpInfix ANK_setDataOpInfixActionInfix(ANK_DataOpInfix arg, ANK_ActionInfix ActionInfix)
{
  if (ANK_isDataOpInfixActionInfix(arg)) {
    return (ANK_DataOpInfix)ATsetArgument((ATermAppl)arg, (ATerm)ActionInfix, 0);
  }

  ATabort("DataOpInfix has no ActionInfix: %t\n", arg);
  return (ANK_DataOpInfix)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_Token accessors */

/*{{{  ATbool ANK_isValidToken(ANK_Token arg) */

ATbool ANK_isValidToken(ANK_Token arg)
{
  if (ANK_isTokenString(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isTokenString(ANK_Token arg) */

inline ATbool ANK_isTokenString(ANK_Token arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternTokenString, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasTokenString(ANK_Token arg) */

ATbool ANK_hasTokenString(ANK_Token arg)
{
  if (ANK_isTokenString(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_String ANK_getTokenString(ANK_Token arg) */

ANK_String ANK_getTokenString(ANK_Token arg)
{
  
    return (ANK_String)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Token ANK_setTokenString(ANK_Token arg, ANK_String String) */

ANK_Token ANK_setTokenString(ANK_Token arg, ANK_String String)
{
  if (ANK_isTokenString(arg)) {
    return (ANK_Token)ATsetArgument((ATermAppl)arg, (ATerm)String, 0);
  }

  ATabort("Token has no String: %t\n", arg);
  return (ANK_Token)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_MessageTag accessors */

/*{{{  ATbool ANK_isValidMessageTag(ANK_MessageTag arg) */

ATbool ANK_isValidMessageTag(ANK_MessageTag arg)
{
  if (ANK_isMessageTagDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isMessageTagDefault(ANK_MessageTag arg) */

inline ATbool ANK_isMessageTagDefault(ANK_MessageTag arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternMessageTagDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasMessageTagToken(ANK_MessageTag arg) */

ATbool ANK_hasMessageTagToken(ANK_MessageTag arg)
{
  if (ANK_isMessageTagDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Token ANK_getMessageTagToken(ANK_MessageTag arg) */

ANK_Token ANK_getMessageTagToken(ANK_MessageTag arg)
{
  
    return (ANK_Token)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_MessageTag ANK_setMessageTagToken(ANK_MessageTag arg, ANK_Token token) */

ANK_MessageTag ANK_setMessageTagToken(ANK_MessageTag arg, ANK_Token token)
{
  if (ANK_isMessageTagDefault(arg)) {
    return (ANK_MessageTag)ATsetArgument((ATermAppl)arg, (ATerm)token, 0);
  }

  ATabort("MessageTag has no Token: %t\n", arg);
  return (ANK_MessageTag)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_DataPredInfix accessors */

/*{{{  ATbool ANK_isValidDataPredInfix(ANK_DataPredInfix arg) */

ATbool ANK_isValidDataPredInfix(ANK_DataPredInfix arg)
{
  if (ANK_isDataPredInfixGt(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataPredInfixLt(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataPredInfixGe(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataPredInfixLe(arg)) {
    return ATtrue;
  }
  else if (ANK_isDataPredInfixEquals(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataPredInfixGt(ANK_DataPredInfix arg) */

inline ATbool ANK_isDataPredInfixGt(ANK_DataPredInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataPredInfixGt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataPredInfixGt));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataPredInfixLt(ANK_DataPredInfix arg) */

inline ATbool ANK_isDataPredInfixLt(ANK_DataPredInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataPredInfixLt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataPredInfixLt));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataPredInfixGe(ANK_DataPredInfix arg) */

inline ATbool ANK_isDataPredInfixGe(ANK_DataPredInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataPredInfixGe)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataPredInfixGe));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataPredInfixLe(ANK_DataPredInfix arg) */

inline ATbool ANK_isDataPredInfixLe(ANK_DataPredInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataPredInfixLe)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataPredInfixLe));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataPredInfixEquals(ANK_DataPredInfix arg) */

inline ATbool ANK_isDataPredInfixEquals(ANK_DataPredInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternDataPredInfixEquals)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataPredInfixEquals));
#endif
  return ATtrue;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_DataPredPrefix accessors */

/*{{{  ATbool ANK_isValidDataPredPrefix(ANK_DataPredPrefix arg) */

ATbool ANK_isValidDataPredPrefix(ANK_DataPredPrefix arg)
{
  if (ANK_isDataPredPrefixDef(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isDataPredPrefixDef(ANK_DataPredPrefix arg) */

inline ATbool ANK_isDataPredPrefixDef(ANK_DataPredPrefix arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternDataPredPrefixDef));
#endif
  return ATtrue;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_ActionConst accessors */

/*{{{  ATbool ANK_isValidActionConst(ANK_ActionConst arg) */

ATbool ANK_isValidActionConst(ANK_ActionConst arg)
{
  if (ANK_isActionConstCopy(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstRaise(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstFail(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstChooseNatural(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstGiveCurrentBindings(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstEnact(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstCreate(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstDestroy(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstUpdate(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstInspect(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstActivate(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstDeactivate(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstGiveCurrentAgent(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstSend(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstReceive(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionConstGiveCurrentTime(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstCopy(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstCopy(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstCopy)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstCopy));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstRaise(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstRaise(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstRaise)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstRaise));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstFail(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstFail(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstFail)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstFail));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstChooseNatural(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstChooseNatural(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstChooseNatural)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstChooseNatural));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstGiveCurrentBindings(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstGiveCurrentBindings(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstGiveCurrentBindings)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstGiveCurrentBindings));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstEnact(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstEnact(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstEnact)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstEnact));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstCreate(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstCreate(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstCreate)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstCreate));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstDestroy(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstDestroy(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstDestroy)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstDestroy));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstUpdate(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstUpdate(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstUpdate)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstUpdate));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstInspect(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstInspect(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstInspect)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstInspect));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstActivate(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstActivate(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstActivate)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstActivate));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstDeactivate(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstDeactivate(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstDeactivate)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstDeactivate));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstGiveCurrentAgent(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstGiveCurrentAgent(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstGiveCurrentAgent)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstGiveCurrentAgent));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstSend(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstSend(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstSend)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstSend));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstReceive(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstReceive(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstReceive)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstReceive));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionConstGiveCurrentTime(ANK_ActionConst arg) */

inline ATbool ANK_isActionConstGiveCurrentTime(ANK_ActionConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionConstGiveCurrentTime)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionConstGiveCurrentTime));
#endif
  return ATtrue;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_ActionInfix accessors */

/*{{{  ATbool ANK_isValidActionInfix(ANK_ActionInfix arg) */

ATbool ANK_isValidActionInfix(ANK_ActionInfix arg)
{
  if (ANK_isActionInfixThen(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionInfixAndThen(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionInfixAnd(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionInfixExceptionally(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionInfixOtherwise(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionInfixAndExceptionally(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionInfixHence(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionInfixThen(ANK_ActionInfix arg) */

inline ATbool ANK_isActionInfixThen(ANK_ActionInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionInfixThen)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionInfixThen));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionInfixAndThen(ANK_ActionInfix arg) */

inline ATbool ANK_isActionInfixAndThen(ANK_ActionInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionInfixAndThen)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionInfixAndThen));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionInfixAnd(ANK_ActionInfix arg) */

inline ATbool ANK_isActionInfixAnd(ANK_ActionInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionInfixAnd)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionInfixAnd));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionInfixExceptionally(ANK_ActionInfix arg) */

inline ATbool ANK_isActionInfixExceptionally(ANK_ActionInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionInfixExceptionally)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionInfixExceptionally));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionInfixOtherwise(ANK_ActionInfix arg) */

inline ATbool ANK_isActionInfixOtherwise(ANK_ActionInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionInfixOtherwise)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionInfixOtherwise));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionInfixAndExceptionally(ANK_ActionInfix arg) */

inline ATbool ANK_isActionInfixAndExceptionally(ANK_ActionInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionInfixAndExceptionally)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionInfixAndExceptionally));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionInfixHence(ANK_ActionInfix arg) */

inline ATbool ANK_isActionInfixHence(ANK_ActionInfix arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternActionInfixHence)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionInfixHence));
#endif
  return ATtrue;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_ActionPrefix accessors */

/*{{{  ATbool ANK_isValidActionPrefix(ANK_ActionPrefix arg) */

ATbool ANK_isValidActionPrefix(ANK_ActionPrefix arg)
{
  if (ANK_isActionPrefixIndivisibly(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionPrefixIndivisibly(ANK_ActionPrefix arg) */

inline ATbool ANK_isActionPrefixIndivisibly(ANK_ActionPrefix arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternActionPrefixIndivisibly));
#endif
  return ATtrue;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_Terminated accessors */

/*{{{  ATbool ANK_isValidTerminated(ANK_Terminated arg) */

ATbool ANK_isValidTerminated(ANK_Terminated arg)
{
  if (ANK_isTerminatedNormal(arg)) {
    return ATtrue;
  }
  else if (ANK_isTerminatedExceptional(arg)) {
    return ATtrue;
  }
  else if (ANK_isTerminatedFailed(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isTerminatedNormal(ANK_Terminated arg) */

inline ATbool ANK_isTerminatedNormal(ANK_Terminated arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternTerminatedNormal)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternTerminatedNormal, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isTerminatedExceptional(ANK_Terminated arg) */

inline ATbool ANK_isTerminatedExceptional(ANK_Terminated arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternTerminatedExceptional)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternTerminatedExceptional, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool ANK_isTerminatedFailed(ANK_Terminated arg) */

inline ATbool ANK_isTerminatedFailed(ANK_Terminated arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(ANK_patternTerminatedFailed)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ANK_patternTerminatedFailed));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool ANK_hasTerminatedData(ANK_Terminated arg) */

ATbool ANK_hasTerminatedData(ANK_Terminated arg)
{
  if (ANK_isTerminatedNormal(arg)) {
    return ATtrue;
  }
  else if (ANK_isTerminatedExceptional(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Data ANK_getTerminatedData(ANK_Terminated arg) */

ANK_Data ANK_getTerminatedData(ANK_Terminated arg)
{
  if (ANK_isTerminatedNormal(arg)) {
    return (ANK_Data)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (ANK_Data)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  ANK_Terminated ANK_setTerminatedData(ANK_Terminated arg, ANK_Data data) */

ANK_Terminated ANK_setTerminatedData(ANK_Terminated arg, ANK_Data data)
{
  if (ANK_isTerminatedNormal(arg)) {
    return (ANK_Terminated)ATsetArgument((ATermAppl)arg, (ATerm)data, 0);
  }
  else if (ANK_isTerminatedExceptional(arg)) {
    return (ANK_Terminated)ATsetArgument((ATermAppl)arg, (ATerm)data, 0);
  }

  ATabort("Terminated has no Data: %t\n", arg);
  return (ANK_Terminated)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  ANK_ActionChoices accessors */

/*{{{  ATbool ANK_isValidActionChoices(ANK_ActionChoices arg) */

ATbool ANK_isValidActionChoices(ANK_ActionChoices arg)
{
  if (ANK_isActionChoicesSingle(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionChoicesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionChoicesSingle(ANK_ActionChoices arg) */

inline ATbool ANK_isActionChoicesSingle(ANK_ActionChoices arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ANK_patternActionChoicesSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool ANK_isActionChoicesMany(ANK_ActionChoices arg) */

inline ATbool ANK_isActionChoicesMany(ANK_ActionChoices arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ANK_patternActionChoicesMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool ANK_hasActionChoicesHead(ANK_ActionChoices arg) */

ATbool ANK_hasActionChoicesHead(ANK_ActionChoices arg)
{
  if (ANK_isActionChoicesSingle(arg)) {
    return ATtrue;
  }
  else if (ANK_isActionChoicesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_Action ANK_getActionChoicesHead(ANK_ActionChoices arg) */

ANK_Action ANK_getActionChoicesHead(ANK_ActionChoices arg)
{
  if (ANK_isActionChoicesSingle(arg)) {
    return (ANK_Action)ATgetFirst((ATermList)arg);
  }
  else 
    return (ANK_Action)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  ANK_ActionChoices ANK_setActionChoicesHead(ANK_ActionChoices arg, ANK_Action head) */

ANK_ActionChoices ANK_setActionChoicesHead(ANK_ActionChoices arg, ANK_Action head)
{
  if (ANK_isActionChoicesSingle(arg)) {
    return (ANK_ActionChoices)ATreplace((ATermList)arg, (ATerm)head, 0);
  }
  else if (ANK_isActionChoicesMany(arg)) {
    return (ANK_ActionChoices)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("ActionChoices has no Head: %t\n", arg);
  return (ANK_ActionChoices)NULL;
}

/*}}}  */
/*{{{  ATbool ANK_hasActionChoicesTail(ANK_ActionChoices arg) */

ATbool ANK_hasActionChoicesTail(ANK_ActionChoices arg)
{
  if (ANK_isActionChoicesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ANK_ActionChoices ANK_getActionChoicesTail(ANK_ActionChoices arg) */

ANK_ActionChoices ANK_getActionChoicesTail(ANK_ActionChoices arg)
{
  
    return (ANK_ActionChoices)ATgetNext((ATermList)arg);
}

/*}}}  */
/*{{{  ANK_ActionChoices ANK_setActionChoicesTail(ANK_ActionChoices arg, ANK_ActionChoices tail) */

ANK_ActionChoices ANK_setActionChoicesTail(ANK_ActionChoices arg, ANK_ActionChoices tail)
{
  if (ANK_isActionChoicesMany(arg)) {
    return (ANK_ActionChoices)ATreplaceTail((ATermList)arg, (ATermList)tail, 1);
  }

  ATabort("ActionChoices has no Tail: %t\n", arg);
  return (ANK_ActionChoices)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  sort visitors */

/*{{{  ANK_DataSort ANK_visitDataSort(ANK_DataSort arg, ANK_SortName (*acceptSortName)(ANK_SortName), ANK_DataSortList (*acceptList)(ANK_DataSortList), ANK_OutcomeOutcomes (*acceptOutcomes)(ANK_OutcomeOutcomes)) */

ANK_DataSort ANK_visitDataSort(ANK_DataSort arg, ANK_SortName (*acceptSortName)(ANK_SortName), ANK_DataSortList (*acceptList)(ANK_DataSortList), ANK_OutcomeOutcomes (*acceptOutcomes)(ANK_OutcomeOutcomes))
{
  if (ANK_isDataSortSortname(arg)) {
    return ANK_makeDataSortSortname(
        acceptSortName ? acceptSortName(ANK_getDataSortSortName(arg)) : ANK_getDataSortSortName(arg));
  }
  if (ANK_isDataSortStar(arg)) {
    return ANK_makeDataSortStar(
        ANK_visitDataSort(ANK_getDataSortSort(arg), acceptSortName, acceptList, acceptOutcomes));
  }
  if (ANK_isDataSortPlus(arg)) {
    return ANK_makeDataSortPlus(
        ANK_visitDataSort(ANK_getDataSortSort(arg), acceptSortName, acceptList, acceptOutcomes));
  }
  if (ANK_isDataSortOpt(arg)) {
    return ANK_makeDataSortOpt(
        ANK_visitDataSort(ANK_getDataSortSort(arg), acceptSortName, acceptList, acceptOutcomes));
  }
  if (ANK_isDataSortTuple(arg)) {
    return ANK_makeDataSortTuple(
        acceptList ? acceptList(ANK_getDataSortList(arg)) : ANK_getDataSortList(arg));
  }
  if (ANK_isDataSortAlt(arg)) {
    return ANK_makeDataSortAlt(
        acceptList ? acceptList(ANK_getDataSortList(arg)) : ANK_getDataSortList(arg));
  }
  if (ANK_isDataSortOutcome(arg)) {
    return ANK_makeDataSortOutcome(
        acceptOutcomes ? acceptOutcomes(ANK_getDataSortOutcomes(arg)) : ANK_getDataSortOutcomes(arg));
  }
  ATabort("not a DataSort: %t\n", arg);
  return (ANK_DataSort)NULL;
}

/*}}}  */
/*{{{  ANK_DataSortList ANK_visitDataSortList(ANK_DataSortList arg, ANK_DataSort (*acceptHead)(ANK_DataSort)) */

ANK_DataSortList ANK_visitDataSortList(ANK_DataSortList arg, ANK_DataSort (*acceptHead)(ANK_DataSort))
{
  if (ANK_isDataSortListEmpty(arg)) {
    return ANK_makeDataSortListEmpty();
  }
  if (ANK_isDataSortListSingle(arg)) {
    return ANK_makeDataSortListSingle(
        acceptHead ? acceptHead(ANK_getDataSortListHead(arg)) : ANK_getDataSortListHead(arg));
  }
  if (ANK_isDataSortListMany(arg)) {
    return ANK_makeDataSortListMany(
        acceptHead ? acceptHead(ANK_getDataSortListHead(arg)) : ANK_getDataSortListHead(arg),
        ANK_visitDataSortList(ANK_getDataSortListTail(arg), acceptHead));
  }
  ATabort("not a DataSortList: %t\n", arg);
  return (ANK_DataSortList)NULL;
}

/*}}}  */
/*{{{  ANK_OutcomeOutcomes ANK_visitOutcomeOutcomes(ANK_OutcomeOutcomes arg, ANK_Outcome (*acceptHead)(ANK_Outcome)) */

ANK_OutcomeOutcomes ANK_visitOutcomeOutcomes(ANK_OutcomeOutcomes arg, ANK_Outcome (*acceptHead)(ANK_Outcome))
{
  if (ANK_isOutcomeOutcomesSingle(arg)) {
    return ANK_makeOutcomeOutcomesSingle(
        acceptHead ? acceptHead(ANK_getOutcomeOutcomesHead(arg)) : ANK_getOutcomeOutcomesHead(arg));
  }
  if (ANK_isOutcomeOutcomesMany(arg)) {
    return ANK_makeOutcomeOutcomesMany(
        acceptHead ? acceptHead(ANK_getOutcomeOutcomesHead(arg)) : ANK_getOutcomeOutcomesHead(arg),
        ANK_visitOutcomeOutcomes(ANK_getOutcomeOutcomesTail(arg), acceptHead));
  }
  ATabort("not a OutcomeOutcomes: %t\n", arg);
  return (ANK_OutcomeOutcomes)NULL;
}

/*}}}  */
/*{{{  ANK_Outcome ANK_visitOutcome(ANK_Outcome arg, ANK_DataSort (*acceptSort)(ANK_DataSort)) */

ANK_Outcome ANK_visitOutcome(ANK_Outcome arg, ANK_DataSort (*acceptSort)(ANK_DataSort))
{
  if (ANK_isOutcomeTaking(arg)) {
    return ANK_makeOutcomeTaking(
        acceptSort ? acceptSort(ANK_getOutcomeSort(arg)) : ANK_getOutcomeSort(arg));
  }
  if (ANK_isOutcomeGiving(arg)) {
    return ANK_makeOutcomeGiving(
        acceptSort ? acceptSort(ANK_getOutcomeSort(arg)) : ANK_getOutcomeSort(arg));
  }
  if (ANK_isOutcomeRaising(arg)) {
    return ANK_makeOutcomeRaising(
        acceptSort ? acceptSort(ANK_getOutcomeSort(arg)) : ANK_getOutcomeSort(arg));
  }
  if (ANK_isOutcomeFailing(arg)) {
    return ANK_makeOutcomeFailing();
  }
  ATabort("not a Outcome: %t\n", arg);
  return (ANK_Outcome)NULL;
}

/*}}}  */
/*{{{  ANK_SortName ANK_visitSortName(ANK_SortName arg) */

ANK_SortName ANK_visitSortName(ANK_SortName arg)
{
  if (ANK_isSortNameData(arg)) {
    return ANK_makeSortNameData();
  }
  if (ANK_isSortNameDatum(arg)) {
    return ANK_makeSortNameDatum();
  }
  if (ANK_isSortNameBindable(arg)) {
    return ANK_makeSortNameBindable();
  }
  if (ANK_isSortNameBindings(arg)) {
    return ANK_makeSortNameBindings();
  }
  if (ANK_isSortNameAgent(arg)) {
    return ANK_makeSortNameAgent();
  }
  if (ANK_isSortNameCell(arg)) {
    return ANK_makeSortNameCell();
  }
  if (ANK_isSortNameStorable(arg)) {
    return ANK_makeSortNameStorable();
  }
  if (ANK_isSortNameAction(arg)) {
    return ANK_makeSortNameAction();
  }
  if (ANK_isSortNameToken(arg)) {
    return ANK_makeSortNameToken();
  }
  if (ANK_isSortNameString(arg)) {
    return ANK_makeSortNameString();
  }
  if (ANK_isSortNameMessage(arg)) {
    return ANK_makeSortNameMessage();
  }
  if (ANK_isSortNameMessageTag(arg)) {
    return ANK_makeSortNameMessageTag();
  }
  if (ANK_isSortNameList(arg)) {
    return ANK_makeSortNameList();
  }
  if (ANK_isSortNameBool(arg)) {
    return ANK_makeSortNameBool();
  }
  if (ANK_isSortNameNat(arg)) {
    return ANK_makeSortNameNat();
  }
  if (ANK_isSortNamePos(arg)) {
    return ANK_makeSortNamePos();
  }
  if (ANK_isSortNameInt(arg)) {
    return ANK_makeSortNameInt();
  }
  ATabort("not a SortName: %t\n", arg);
  return (ANK_SortName)NULL;
}

/*}}}  */
/*{{{  ANK_Data ANK_visitData(ANK_Data arg, ANK_Datum (*acceptDatum)(ANK_Datum), ANK_DataConst (*acceptDataConst)(ANK_DataConst), ANK_DataTail (*acceptTail)(ANK_DataTail)) */

ANK_Data ANK_visitData(ANK_Data arg, ANK_Datum (*acceptDatum)(ANK_Datum), ANK_DataConst (*acceptDataConst)(ANK_DataConst), ANK_DataTail (*acceptTail)(ANK_DataTail))
{
  if (ANK_isDataDatum(arg)) {
    return ANK_makeDataDatum(
        acceptDatum ? acceptDatum(ANK_getDataDatum(arg)) : ANK_getDataDatum(arg));
  }
  if (ANK_isDataDataconst(arg)) {
    return ANK_makeDataDataconst(
        acceptDataConst ? acceptDataConst(ANK_getDataDataConst(arg)) : ANK_getDataDataConst(arg));
  }
  if (ANK_isDataTuple(arg)) {
    return ANK_makeDataTuple(
        ANK_visitData(ANK_getDataHead(arg), acceptDatum, acceptDataConst, acceptTail),
        acceptTail ? acceptTail(ANK_getDataTail(arg)) : ANK_getDataTail(arg));
  }
  if (ANK_isDataDefault(arg)) {
    return ANK_makeDataDefault(
        ANK_visitData(ANK_getDataData(arg), acceptDatum, acceptDataConst, acceptTail));
  }
  if (ANK_isDataEmpty(arg)) {
    return ANK_makeDataEmpty();
  }
  ATabort("not a Data: %t\n", arg);
  return (ANK_Data)NULL;
}

/*}}}  */
/*{{{  ANK_DataOpPrefix ANK_visitDataOpPrefix(ANK_DataOpPrefix arg, ANK_DataSort (*acceptSort)(ANK_DataSort), ANK_ActionPrefix (*acceptActionPrefix)(ANK_ActionPrefix), ANK_NatCon (*acceptNatCon)(ANK_NatCon)) */

ANK_DataOpPrefix ANK_visitDataOpPrefix(ANK_DataOpPrefix arg, ANK_DataSort (*acceptSort)(ANK_DataSort), ANK_ActionPrefix (*acceptActionPrefix)(ANK_ActionPrefix), ANK_NatCon (*acceptNatCon)(ANK_NatCon))
{
  if (ANK_isDataOpPrefixTheSort(arg)) {
    return ANK_makeDataOpPrefixTheSort(
        acceptSort ? acceptSort(ANK_getDataOpPrefixSort(arg)) : ANK_getDataOpPrefixSort(arg));
  }
  if (ANK_isDataOpPrefixBinding(arg)) {
    return ANK_makeDataOpPrefixBinding();
  }
  if (ANK_isDataOpPrefixOverriding(arg)) {
    return ANK_makeDataOpPrefixOverriding();
  }
  if (ANK_isDataOpPrefixDisjointUnion(arg)) {
    return ANK_makeDataOpPrefixDisjointUnion();
  }
  if (ANK_isDataOpPrefixBound(arg)) {
    return ANK_makeDataOpPrefixBound();
  }
  if (ANK_isDataOpPrefixActionPrefix(arg)) {
    return ANK_makeDataOpPrefixActionPrefix(
        acceptActionPrefix ? acceptActionPrefix(ANK_getDataOpPrefixActionPrefix(arg)) : ANK_getDataOpPrefixActionPrefix(arg));
  }
  if (ANK_isDataOpPrefixProvide(arg)) {
    return ANK_makeDataOpPrefixProvide();
  }
  if (ANK_isDataOpPrefixTupleToList(arg)) {
    return ANK_makeDataOpPrefixTupleToList();
  }
  if (ANK_isDataOpPrefixNot(arg)) {
    return ANK_makeDataOpPrefixNot();
  }
  if (ANK_isDataOpPrefixOpComponent(arg)) {
    return ANK_makeDataOpPrefixOpComponent(
        acceptNatCon ? acceptNatCon(ANK_getDataOpPrefixNatCon(arg)) : ANK_getDataOpPrefixNatCon(arg));
  }
  ATabort("not a DataOpPrefix: %t\n", arg);
  return (ANK_DataOpPrefix)NULL;
}

/*}}}  */
/*{{{  ANK_DataOp ANK_visitDataOp(ANK_DataOp arg, ANK_DataOpPrefix (*acceptPrefix)(ANK_DataOpPrefix), ANK_DataOpInfix (*acceptInfix)(ANK_DataOpInfix)) */

ANK_DataOp ANK_visitDataOp(ANK_DataOp arg, ANK_DataOpPrefix (*acceptPrefix)(ANK_DataOpPrefix), ANK_DataOpInfix (*acceptInfix)(ANK_DataOpInfix))
{
  if (ANK_isDataOpPrefix(arg)) {
    return ANK_makeDataOpPrefix(
        acceptPrefix ? acceptPrefix(ANK_getDataOpPrefix(arg)) : ANK_getDataOpPrefix(arg));
  }
  if (ANK_isDataOpInfix(arg)) {
    return ANK_makeDataOpInfix(
        acceptInfix ? acceptInfix(ANK_getDataOpInfix(arg)) : ANK_getDataOpInfix(arg));
  }
  ATabort("not a DataOp: %t\n", arg);
  return (ANK_DataOp)NULL;
}

/*}}}  */
/*{{{  ANK_DataPred ANK_visitDataPred(ANK_DataPred arg, ANK_DataPredPrefix (*acceptPrefix)(ANK_DataPredPrefix), ANK_DataPredInfix (*acceptInfix)(ANK_DataPredInfix)) */

ANK_DataPred ANK_visitDataPred(ANK_DataPred arg, ANK_DataPredPrefix (*acceptPrefix)(ANK_DataPredPrefix), ANK_DataPredInfix (*acceptInfix)(ANK_DataPredInfix))
{
  if (ANK_isDataPredPrefix(arg)) {
    return ANK_makeDataPredPrefix(
        acceptPrefix ? acceptPrefix(ANK_getDataPredPrefix(arg)) : ANK_getDataPredPrefix(arg));
  }
  if (ANK_isDataPredInfix(arg)) {
    return ANK_makeDataPredInfix(
        acceptInfix ? acceptInfix(ANK_getDataPredInfix(arg)) : ANK_getDataPredInfix(arg));
  }
  ATabort("not a DataPred: %t\n", arg);
  return (ANK_DataPred)NULL;
}

/*}}}  */
/*{{{  ANK_DataConst ANK_visitDataConst(ANK_DataConst arg) */

ANK_DataConst ANK_visitDataConst(ANK_DataConst arg)
{
  if (ANK_isDataConstTrue(arg)) {
    return ANK_makeDataConstTrue();
  }
  if (ANK_isDataConstFalse(arg)) {
    return ANK_makeDataConstFalse();
  }
  if (ANK_isDataConstNoBindings(arg)) {
    return ANK_makeDataConstNoBindings();
  }
  ATabort("not a DataConst: %t\n", arg);
  return (ANK_DataConst)NULL;
}

/*}}}  */
/*{{{  ANK_DataTail ANK_visitDataTail(ANK_DataTail arg, ANK_Data (*acceptHead)(ANK_Data)) */

ANK_DataTail ANK_visitDataTail(ANK_DataTail arg, ANK_Data (*acceptHead)(ANK_Data))
{
  if (ANK_isDataTailSingle(arg)) {
    return ANK_makeDataTailSingle(
        acceptHead ? acceptHead(ANK_getDataTailHead(arg)) : ANK_getDataTailHead(arg));
  }
  if (ANK_isDataTailMany(arg)) {
    return ANK_makeDataTailMany(
        acceptHead ? acceptHead(ANK_getDataTailHead(arg)) : ANK_getDataTailHead(arg),
        ANK_visitDataTail(ANK_getDataTailTail(arg), acceptHead));
  }
  ATabort("not a DataTail: %t\n", arg);
  return (ANK_DataTail)NULL;
}

/*}}}  */
/*{{{  ANK_BoolConst ANK_visitBoolConst(ANK_BoolConst arg) */

ANK_BoolConst ANK_visitBoolConst(ANK_BoolConst arg)
{
  if (ANK_isBoolConstTrue(arg)) {
    return ANK_makeBoolConstTrue();
  }
  if (ANK_isBoolConstFalse(arg)) {
    return ANK_makeBoolConstFalse();
  }
  ATabort("not a BoolConst: %t\n", arg);
  return (ANK_BoolConst)NULL;
}

/*}}}  */
/*{{{  ANK_Bool ANK_visitBool(ANK_Bool arg, ANK_BoolConst (*acceptBoolconst)(ANK_BoolConst)) */

ANK_Bool ANK_visitBool(ANK_Bool arg, ANK_BoolConst (*acceptBoolconst)(ANK_BoolConst))
{
  if (ANK_isBoolBoolconst(arg)) {
    return ANK_makeBoolBoolconst(
        acceptBoolconst ? acceptBoolconst(ANK_getBoolBoolconst(arg)) : ANK_getBoolBoolconst(arg));
  }
  if (ANK_isBoolNot(arg)) {
    return ANK_makeBoolNot(
        ANK_visitBool(ANK_getBoolNotArg(arg), acceptBoolconst));
  }
  if (ANK_isBoolOr(arg)) {
    return ANK_makeBoolOr(
        ANK_visitBool(ANK_getBoolLhs(arg), acceptBoolconst),
        ANK_visitBool(ANK_getBoolRhs(arg), acceptBoolconst));
  }
  if (ANK_isBoolAnd(arg)) {
    return ANK_makeBoolAnd(
        ANK_visitBool(ANK_getBoolLhs(arg), acceptBoolconst),
        ANK_visitBool(ANK_getBoolRhs(arg), acceptBoolconst));
  }
  if (ANK_isBoolDefault(arg)) {
    return ANK_makeBoolDefault(
        ANK_visitBool(ANK_getBoolBool(arg), acceptBoolconst));
  }
  if (ANK_isBoolGt(arg)) {
    return ANK_makeBoolGt(
        ANK_visitBool(ANK_getBoolLhs(arg), acceptBoolconst),
        ANK_visitBool(ANK_getBoolRhs(arg), acceptBoolconst));
  }
  if (ANK_isBoolGe(arg)) {
    return ANK_makeBoolGe(
        ANK_visitBool(ANK_getBoolLhs(arg), acceptBoolconst),
        ANK_visitBool(ANK_getBoolRhs(arg), acceptBoolconst));
  }
  if (ANK_isBoolLt(arg)) {
    return ANK_makeBoolLt(
        ANK_visitBool(ANK_getBoolLhs(arg), acceptBoolconst),
        ANK_visitBool(ANK_getBoolRhs(arg), acceptBoolconst));
  }
  if (ANK_isBoolLe(arg)) {
    return ANK_makeBoolLe(
        ANK_visitBool(ANK_getBoolLhs(arg), acceptBoolconst),
        ANK_visitBool(ANK_getBoolRhs(arg), acceptBoolconst));
  }
  ATabort("not a Bool: %t\n", arg);
  return (ANK_Bool)NULL;
}

/*}}}  */
/*{{{  ANK_Datum ANK_visitDatum(ANK_Datum arg, ANK_Agent (*acceptAgent)(ANK_Agent), ANK_Cell (*acceptCell)(ANK_Cell), ANK_Action (*acceptAction)(ANK_Action), ANK_Token (*acceptToken)(ANK_Token), ANK_MessageTag (*acceptMessageTag)(ANK_MessageTag), ANK_List (*acceptList)(ANK_List), ANK_BoolConst (*acceptBoolConst)(ANK_BoolConst), ANK_Int (*acceptInt)(ANK_Int)) */

ANK_Datum ANK_visitDatum(ANK_Datum arg, ANK_Agent (*acceptAgent)(ANK_Agent), ANK_Cell (*acceptCell)(ANK_Cell), ANK_Action (*acceptAction)(ANK_Action), ANK_Token (*acceptToken)(ANK_Token), ANK_MessageTag (*acceptMessageTag)(ANK_MessageTag), ANK_List (*acceptList)(ANK_List), ANK_BoolConst (*acceptBoolConst)(ANK_BoolConst), ANK_Int (*acceptInt)(ANK_Int))
{
  if (ANK_isDatumAgent(arg)) {
    return ANK_makeDatumAgent(
        acceptAgent ? acceptAgent(ANK_getDatumAgent(arg)) : ANK_getDatumAgent(arg));
  }
  if (ANK_isDatumCell(arg)) {
    return ANK_makeDatumCell(
        acceptCell ? acceptCell(ANK_getDatumCell(arg)) : ANK_getDatumCell(arg));
  }
  if (ANK_isDatumAction(arg)) {
    return ANK_makeDatumAction(
        acceptAction ? acceptAction(ANK_getDatumAction(arg)) : ANK_getDatumAction(arg));
  }
  if (ANK_isDatumToken(arg)) {
    return ANK_makeDatumToken(
        acceptToken ? acceptToken(ANK_getDatumToken(arg)) : ANK_getDatumToken(arg));
  }
  if (ANK_isDatumMessageTag(arg)) {
    return ANK_makeDatumMessageTag(
        acceptMessageTag ? acceptMessageTag(ANK_getDatumMessageTag(arg)) : ANK_getDatumMessageTag(arg));
  }
  if (ANK_isDatumList(arg)) {
    return ANK_makeDatumList(
        acceptList ? acceptList(ANK_getDatumList(arg)) : ANK_getDatumList(arg));
  }
  if (ANK_isDatumDatum(arg)) {
    return ANK_makeDatumDatum(
        acceptBoolConst ? acceptBoolConst(ANK_getDatumBoolConst(arg)) : ANK_getDatumBoolConst(arg));
  }
  if (ANK_isDatumInt(arg)) {
    return ANK_makeDatumInt(
        acceptInt ? acceptInt(ANK_getDatumInt(arg)) : ANK_getDatumInt(arg));
  }
  ATabort("not a Datum: %t\n", arg);
  return (ANK_Datum)NULL;
}

/*}}}  */
/*{{{  ANK_Numeral ANK_visitNumeral(ANK_Numeral arg, ANK_NatCon (*acceptNatCon)(ANK_NatCon)) */

ANK_Numeral ANK_visitNumeral(ANK_Numeral arg, ANK_NatCon (*acceptNatCon)(ANK_NatCon))
{
  if (ANK_isNumeralNatCon(arg)) {
    return ANK_makeNumeralNatCon(
        acceptNatCon ? acceptNatCon(ANK_getNumeralNatCon(arg)) : ANK_getNumeralNatCon(arg));
  }
  ATabort("not a Numeral: %t\n", arg);
  return (ANK_Numeral)NULL;
}

/*}}}  */
/*{{{  ANK_Nat ANK_visitNat(ANK_Nat arg, ANK_Numeral (*acceptNumeral)(ANK_Numeral)) */

ANK_Nat ANK_visitNat(ANK_Nat arg, ANK_Numeral (*acceptNumeral)(ANK_Numeral))
{
  if (ANK_isNatNumeral(arg)) {
    return ANK_makeNatNumeral(
        acceptNumeral ? acceptNumeral(ANK_getNatNumeral(arg)) : ANK_getNatNumeral(arg));
  }
  if (ANK_isNatMonus(arg)) {
    return ANK_makeNatMonus(
        ANK_visitNat(ANK_getNatLhs(arg), acceptNumeral),
        ANK_visitNat(ANK_getNatRhs(arg), acceptNumeral));
  }
  if (ANK_isNatDefault(arg)) {
    return ANK_makeNatDefault(
        ANK_visitNat(ANK_getNatNat(arg), acceptNumeral));
  }
  ATabort("not a Nat: %t\n", arg);
  return (ANK_Nat)NULL;
}

/*}}}  */
/*{{{  ANK_Int ANK_visitInt(ANK_Int arg, ANK_Nat (*acceptNat)(ANK_Nat), ANK_Nat (*acceptNatArg)(ANK_Nat)) */

ANK_Int ANK_visitInt(ANK_Int arg, ANK_Nat (*acceptNat)(ANK_Nat), ANK_Nat (*acceptNatArg)(ANK_Nat))
{
  if (ANK_isIntNat(arg)) {
    return ANK_makeIntNat(
        acceptNat ? acceptNat(ANK_getIntNat(arg)) : ANK_getIntNat(arg));
  }
  if (ANK_isIntUnaryPlus(arg)) {
    return ANK_makeIntUnaryPlus(
        acceptNatArg ? acceptNatArg(ANK_getIntNatArg(arg)) : ANK_getIntNatArg(arg));
  }
  if (ANK_isIntUnaryMinus(arg)) {
    return ANK_makeIntUnaryMinus(
        acceptNatArg ? acceptNatArg(ANK_getIntNatArg(arg)) : ANK_getIntNatArg(arg));
  }
  if (ANK_isIntPlus(arg)) {
    return ANK_makeIntPlus(
        ANK_visitInt(ANK_getIntLhs(arg), acceptNat, acceptNatArg),
        ANK_visitInt(ANK_getIntRhs(arg), acceptNat, acceptNatArg));
  }
  if (ANK_isIntMinus(arg)) {
    return ANK_makeIntMinus(
        ANK_visitInt(ANK_getIntLhs(arg), acceptNat, acceptNatArg),
        ANK_visitInt(ANK_getIntRhs(arg), acceptNat, acceptNatArg));
  }
  if (ANK_isIntTimes(arg)) {
    return ANK_makeIntTimes(
        ANK_visitInt(ANK_getIntLhs(arg), acceptNat, acceptNatArg),
        ANK_visitInt(ANK_getIntRhs(arg), acceptNat, acceptNatArg));
  }
  if (ANK_isIntDefault(arg)) {
    return ANK_makeIntDefault(
        ANK_visitInt(ANK_getIntInt(arg), acceptNat, acceptNatArg));
  }
  ATabort("not a Int: %t\n", arg);
  return (ANK_Int)NULL;
}

/*}}}  */
/*{{{  ANK_Action ANK_visitAction(ANK_Action arg, ANK_Terminated (*acceptTerminated)(ANK_Terminated), ANK_ActionConst (*acceptActionConst)(ANK_ActionConst), ANK_ActionPrefix (*acceptPrefix)(ANK_ActionPrefix), ANK_ActionInfix (*acceptInfix)(ANK_ActionInfix), ANK_Data (*acceptData)(ANK_Data), ANK_DataOp (*acceptOp)(ANK_DataOp), ANK_DataPred (*acceptPred)(ANK_DataPred), ANK_ActionChoices (*acceptChoices)(ANK_ActionChoices)) */

ANK_Action ANK_visitAction(ANK_Action arg, ANK_Terminated (*acceptTerminated)(ANK_Terminated), ANK_ActionConst (*acceptActionConst)(ANK_ActionConst), ANK_ActionPrefix (*acceptPrefix)(ANK_ActionPrefix), ANK_ActionInfix (*acceptInfix)(ANK_ActionInfix), ANK_Data (*acceptData)(ANK_Data), ANK_DataOp (*acceptOp)(ANK_DataOp), ANK_DataPred (*acceptPred)(ANK_DataPred), ANK_ActionChoices (*acceptChoices)(ANK_ActionChoices))
{
  if (ANK_isActionTerminated(arg)) {
    return ANK_makeActionTerminated(
        acceptTerminated ? acceptTerminated(ANK_getActionTerminated(arg)) : ANK_getActionTerminated(arg));
  }
  if (ANK_isActionDefault(arg)) {
    return ANK_makeActionDefault(
        ANK_visitAction(ANK_getActionAction(arg), acceptTerminated, acceptActionConst, acceptPrefix, acceptInfix, acceptData, acceptOp, acceptPred, acceptChoices));
  }
  if (ANK_isActionConst(arg)) {
    return ANK_makeActionConst(
        acceptActionConst ? acceptActionConst(ANK_getActionActionConst(arg)) : ANK_getActionActionConst(arg));
  }
  if (ANK_isActionPrefix(arg)) {
    return ANK_makeActionPrefix(
        acceptPrefix ? acceptPrefix(ANK_getActionPrefix(arg)) : ANK_getActionPrefix(arg),
        ANK_visitAction(ANK_getActionPrefixarg(arg), acceptTerminated, acceptActionConst, acceptPrefix, acceptInfix, acceptData, acceptOp, acceptPred, acceptChoices));
  }
  if (ANK_isActionInfix(arg)) {
    return ANK_makeActionInfix(
        ANK_visitAction(ANK_getActionLhs(arg), acceptTerminated, acceptActionConst, acceptPrefix, acceptInfix, acceptData, acceptOp, acceptPred, acceptChoices),
        acceptInfix ? acceptInfix(ANK_getActionInfix(arg)) : ANK_getActionInfix(arg),
        ANK_visitAction(ANK_getActionRhs(arg), acceptTerminated, acceptActionConst, acceptPrefix, acceptInfix, acceptData, acceptOp, acceptPred, acceptChoices));
  }
  if (ANK_isActionProvide(arg)) {
    return ANK_makeActionProvide(
        acceptData ? acceptData(ANK_getActionData(arg)) : ANK_getActionData(arg));
  }
  if (ANK_isActionGive(arg)) {
    return ANK_makeActionGive(
        acceptOp ? acceptOp(ANK_getActionOp(arg)) : ANK_getActionOp(arg));
  }
  if (ANK_isActionCheck(arg)) {
    return ANK_makeActionCheck(
        acceptPred ? acceptPred(ANK_getActionPred(arg)) : ANK_getActionPred(arg));
  }
  if (ANK_isActionSelect(arg)) {
    return ANK_makeActionSelect(
        acceptChoices ? acceptChoices(ANK_getActionChoices(arg)) : ANK_getActionChoices(arg));
  }
  ATabort("not a Action: %t\n", arg);
  return (ANK_Action)NULL;
}

/*}}}  */
/*{{{  ANK_DataOpInfix ANK_visitDataOpInfix(ANK_DataOpInfix arg, ANK_ActionInfix (*acceptActionInfix)(ANK_ActionInfix)) */

ANK_DataOpInfix ANK_visitDataOpInfix(ANK_DataOpInfix arg, ANK_ActionInfix (*acceptActionInfix)(ANK_ActionInfix))
{
  if (ANK_isDataOpInfixActionInfix(arg)) {
    return ANK_makeDataOpInfixActionInfix(
        acceptActionInfix ? acceptActionInfix(ANK_getDataOpInfixActionInfix(arg)) : ANK_getDataOpInfixActionInfix(arg));
  }
  if (ANK_isDataOpInfixPlus(arg)) {
    return ANK_makeDataOpInfixPlus();
  }
  if (ANK_isDataOpInfixMonus(arg)) {
    return ANK_makeDataOpInfixMonus();
  }
  if (ANK_isDataOpInfixTimes(arg)) {
    return ANK_makeDataOpInfixTimes();
  }
  if (ANK_isDataOpInfixMinus(arg)) {
    return ANK_makeDataOpInfixMinus();
  }
  ATabort("not a DataOpInfix: %t\n", arg);
  return (ANK_DataOpInfix)NULL;
}

/*}}}  */
/*{{{  ANK_Token ANK_visitToken(ANK_Token arg, ANK_String (*acceptString)(ANK_String)) */

ANK_Token ANK_visitToken(ANK_Token arg, ANK_String (*acceptString)(ANK_String))
{
  if (ANK_isTokenString(arg)) {
    return ANK_makeTokenString(
        acceptString ? acceptString(ANK_getTokenString(arg)) : ANK_getTokenString(arg));
  }
  ATabort("not a Token: %t\n", arg);
  return (ANK_Token)NULL;
}

/*}}}  */
/*{{{  ANK_MessageTag ANK_visitMessageTag(ANK_MessageTag arg, ANK_Token (*acceptToken)(ANK_Token)) */

ANK_MessageTag ANK_visitMessageTag(ANK_MessageTag arg, ANK_Token (*acceptToken)(ANK_Token))
{
  if (ANK_isMessageTagDefault(arg)) {
    return ANK_makeMessageTagDefault(
        acceptToken ? acceptToken(ANK_getMessageTagToken(arg)) : ANK_getMessageTagToken(arg));
  }
  ATabort("not a MessageTag: %t\n", arg);
  return (ANK_MessageTag)NULL;
}

/*}}}  */
/*{{{  ANK_DataPredInfix ANK_visitDataPredInfix(ANK_DataPredInfix arg) */

ANK_DataPredInfix ANK_visitDataPredInfix(ANK_DataPredInfix arg)
{
  if (ANK_isDataPredInfixGt(arg)) {
    return ANK_makeDataPredInfixGt();
  }
  if (ANK_isDataPredInfixLt(arg)) {
    return ANK_makeDataPredInfixLt();
  }
  if (ANK_isDataPredInfixGe(arg)) {
    return ANK_makeDataPredInfixGe();
  }
  if (ANK_isDataPredInfixLe(arg)) {
    return ANK_makeDataPredInfixLe();
  }
  if (ANK_isDataPredInfixEquals(arg)) {
    return ANK_makeDataPredInfixEquals();
  }
  ATabort("not a DataPredInfix: %t\n", arg);
  return (ANK_DataPredInfix)NULL;
}

/*}}}  */
/*{{{  ANK_DataPredPrefix ANK_visitDataPredPrefix(ANK_DataPredPrefix arg) */

ANK_DataPredPrefix ANK_visitDataPredPrefix(ANK_DataPredPrefix arg)
{
  if (ANK_isDataPredPrefixDef(arg)) {
    return ANK_makeDataPredPrefixDef();
  }
  ATabort("not a DataPredPrefix: %t\n", arg);
  return (ANK_DataPredPrefix)NULL;
}

/*}}}  */
/*{{{  ANK_ActionConst ANK_visitActionConst(ANK_ActionConst arg) */

ANK_ActionConst ANK_visitActionConst(ANK_ActionConst arg)
{
  if (ANK_isActionConstCopy(arg)) {
    return ANK_makeActionConstCopy();
  }
  if (ANK_isActionConstRaise(arg)) {
    return ANK_makeActionConstRaise();
  }
  if (ANK_isActionConstFail(arg)) {
    return ANK_makeActionConstFail();
  }
  if (ANK_isActionConstChooseNatural(arg)) {
    return ANK_makeActionConstChooseNatural();
  }
  if (ANK_isActionConstGiveCurrentBindings(arg)) {
    return ANK_makeActionConstGiveCurrentBindings();
  }
  if (ANK_isActionConstEnact(arg)) {
    return ANK_makeActionConstEnact();
  }
  if (ANK_isActionConstCreate(arg)) {
    return ANK_makeActionConstCreate();
  }
  if (ANK_isActionConstDestroy(arg)) {
    return ANK_makeActionConstDestroy();
  }
  if (ANK_isActionConstUpdate(arg)) {
    return ANK_makeActionConstUpdate();
  }
  if (ANK_isActionConstInspect(arg)) {
    return ANK_makeActionConstInspect();
  }
  if (ANK_isActionConstActivate(arg)) {
    return ANK_makeActionConstActivate();
  }
  if (ANK_isActionConstDeactivate(arg)) {
    return ANK_makeActionConstDeactivate();
  }
  if (ANK_isActionConstGiveCurrentAgent(arg)) {
    return ANK_makeActionConstGiveCurrentAgent();
  }
  if (ANK_isActionConstSend(arg)) {
    return ANK_makeActionConstSend();
  }
  if (ANK_isActionConstReceive(arg)) {
    return ANK_makeActionConstReceive();
  }
  if (ANK_isActionConstGiveCurrentTime(arg)) {
    return ANK_makeActionConstGiveCurrentTime();
  }
  ATabort("not a ActionConst: %t\n", arg);
  return (ANK_ActionConst)NULL;
}

/*}}}  */
/*{{{  ANK_ActionInfix ANK_visitActionInfix(ANK_ActionInfix arg) */

ANK_ActionInfix ANK_visitActionInfix(ANK_ActionInfix arg)
{
  if (ANK_isActionInfixThen(arg)) {
    return ANK_makeActionInfixThen();
  }
  if (ANK_isActionInfixAndThen(arg)) {
    return ANK_makeActionInfixAndThen();
  }
  if (ANK_isActionInfixAnd(arg)) {
    return ANK_makeActionInfixAnd();
  }
  if (ANK_isActionInfixExceptionally(arg)) {
    return ANK_makeActionInfixExceptionally();
  }
  if (ANK_isActionInfixOtherwise(arg)) {
    return ANK_makeActionInfixOtherwise();
  }
  if (ANK_isActionInfixAndExceptionally(arg)) {
    return ANK_makeActionInfixAndExceptionally();
  }
  if (ANK_isActionInfixHence(arg)) {
    return ANK_makeActionInfixHence();
  }
  ATabort("not a ActionInfix: %t\n", arg);
  return (ANK_ActionInfix)NULL;
}

/*}}}  */
/*{{{  ANK_ActionPrefix ANK_visitActionPrefix(ANK_ActionPrefix arg) */

ANK_ActionPrefix ANK_visitActionPrefix(ANK_ActionPrefix arg)
{
  if (ANK_isActionPrefixIndivisibly(arg)) {
    return ANK_makeActionPrefixIndivisibly();
  }
  ATabort("not a ActionPrefix: %t\n", arg);
  return (ANK_ActionPrefix)NULL;
}

/*}}}  */
/*{{{  ANK_Terminated ANK_visitTerminated(ANK_Terminated arg, ANK_Data (*acceptData)(ANK_Data)) */

ANK_Terminated ANK_visitTerminated(ANK_Terminated arg, ANK_Data (*acceptData)(ANK_Data))
{
  if (ANK_isTerminatedNormal(arg)) {
    return ANK_makeTerminatedNormal(
        acceptData ? acceptData(ANK_getTerminatedData(arg)) : ANK_getTerminatedData(arg));
  }
  if (ANK_isTerminatedExceptional(arg)) {
    return ANK_makeTerminatedExceptional(
        acceptData ? acceptData(ANK_getTerminatedData(arg)) : ANK_getTerminatedData(arg));
  }
  if (ANK_isTerminatedFailed(arg)) {
    return ANK_makeTerminatedFailed();
  }
  ATabort("not a Terminated: %t\n", arg);
  return (ANK_Terminated)NULL;
}

/*}}}  */
/*{{{  ANK_ActionChoices ANK_visitActionChoices(ANK_ActionChoices arg, ANK_Action (*acceptHead)(ANK_Action)) */

ANK_ActionChoices ANK_visitActionChoices(ANK_ActionChoices arg, ANK_Action (*acceptHead)(ANK_Action))
{
  if (ANK_isActionChoicesSingle(arg)) {
    return ANK_makeActionChoicesSingle(
        acceptHead ? acceptHead(ANK_getActionChoicesHead(arg)) : ANK_getActionChoicesHead(arg));
  }
  if (ANK_isActionChoicesMany(arg)) {
    return ANK_makeActionChoicesMany(
        acceptHead ? acceptHead(ANK_getActionChoicesHead(arg)) : ANK_getActionChoicesHead(arg),
        ANK_visitActionChoices(ANK_getActionChoicesTail(arg), acceptHead));
  }
  ATabort("not a ActionChoices: %t\n", arg);
  return (ANK_ActionChoices)NULL;
}

/*}}}  */

/*}}}  */
