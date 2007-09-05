#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "an-k-api.h"

/*{{{  typedefs */

typedef struct ATerm _AN_K_Terminated;
typedef struct ATerm _AN_K_Action;
typedef struct ATerm _AN_K_ActionChoices;
typedef struct ATerm _AN_K_List;
typedef struct ATerm _AN_K_EltElts;
typedef struct ATerm _AN_K_BoolConst;
typedef struct ATerm _AN_K_Bool;
typedef struct ATerm _AN_K_Datum;
typedef struct ATerm _AN_K_Numeral;
typedef struct ATerm _AN_K_Nat;
typedef struct ATerm _AN_K_Int;

/*}}}  */

/*{{{  void AN_K_initAnKApiApi(void) */

void AN_K_initAnKApiApi(void)
{
  init_an_k_api_dict();
}

/*}}}  */

/*{{{  term conversion functions */

/*{{{  AN_K_Terminated AN_K_TerminatedFromTerm(ATerm t) */

AN_K_Terminated AN_K_TerminatedFromTerm(ATerm t)
{
  return (AN_K_Terminated)t;
}

/*}}}  */
/*{{{  ATerm AN_K_TerminatedToTerm(AN_K_Terminated arg) */

ATerm AN_K_TerminatedToTerm(AN_K_Terminated arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AN_K_Action AN_K_ActionFromTerm(ATerm t) */

AN_K_Action AN_K_ActionFromTerm(ATerm t)
{
  return (AN_K_Action)t;
}

/*}}}  */
/*{{{  ATerm AN_K_ActionToTerm(AN_K_Action arg) */

ATerm AN_K_ActionToTerm(AN_K_Action arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AN_K_ActionChoices AN_K_ActionChoicesFromTerm(ATerm t) */

AN_K_ActionChoices AN_K_ActionChoicesFromTerm(ATerm t)
{
  return (AN_K_ActionChoices)t;
}

/*}}}  */
/*{{{  ATerm AN_K_ActionChoicesToTerm(AN_K_ActionChoices arg) */

ATerm AN_K_ActionChoicesToTerm(AN_K_ActionChoices arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AN_K_List AN_K_ListFromTerm(ATerm t) */

AN_K_List AN_K_ListFromTerm(ATerm t)
{
  return (AN_K_List)t;
}

/*}}}  */
/*{{{  ATerm AN_K_ListToTerm(AN_K_List arg) */

ATerm AN_K_ListToTerm(AN_K_List arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AN_K_EltElts AN_K_EltEltsFromTerm(ATerm t) */

AN_K_EltElts AN_K_EltEltsFromTerm(ATerm t)
{
  return (AN_K_EltElts)t;
}

/*}}}  */
/*{{{  ATerm AN_K_EltEltsToTerm(AN_K_EltElts arg) */

ATerm AN_K_EltEltsToTerm(AN_K_EltElts arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AN_K_BoolConst AN_K_BoolConstFromTerm(ATerm t) */

AN_K_BoolConst AN_K_BoolConstFromTerm(ATerm t)
{
  return (AN_K_BoolConst)t;
}

/*}}}  */
/*{{{  ATerm AN_K_BoolConstToTerm(AN_K_BoolConst arg) */

ATerm AN_K_BoolConstToTerm(AN_K_BoolConst arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_BoolFromTerm(ATerm t) */

AN_K_Bool AN_K_BoolFromTerm(ATerm t)
{
  return (AN_K_Bool)t;
}

/*}}}  */
/*{{{  ATerm AN_K_BoolToTerm(AN_K_Bool arg) */

ATerm AN_K_BoolToTerm(AN_K_Bool arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AN_K_Datum AN_K_DatumFromTerm(ATerm t) */

AN_K_Datum AN_K_DatumFromTerm(ATerm t)
{
  return (AN_K_Datum)t;
}

/*}}}  */
/*{{{  ATerm AN_K_DatumToTerm(AN_K_Datum arg) */

ATerm AN_K_DatumToTerm(AN_K_Datum arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AN_K_Numeral AN_K_NumeralFromTerm(ATerm t) */

AN_K_Numeral AN_K_NumeralFromTerm(ATerm t)
{
  return (AN_K_Numeral)t;
}

/*}}}  */
/*{{{  ATerm AN_K_NumeralToTerm(AN_K_Numeral arg) */

ATerm AN_K_NumeralToTerm(AN_K_Numeral arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AN_K_Nat AN_K_NatFromTerm(ATerm t) */

AN_K_Nat AN_K_NatFromTerm(ATerm t)
{
  return (AN_K_Nat)t;
}

/*}}}  */
/*{{{  ATerm AN_K_NatToTerm(AN_K_Nat arg) */

ATerm AN_K_NatToTerm(AN_K_Nat arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AN_K_Int AN_K_IntFromTerm(ATerm t) */

AN_K_Int AN_K_IntFromTerm(ATerm t)
{
  return (AN_K_Int)t;
}

/*}}}  */
/*{{{  ATerm AN_K_IntToTerm(AN_K_Int arg) */

ATerm AN_K_IntToTerm(AN_K_Int arg)
{
  return (ATerm)arg;
}

/*}}}  */

/*}}}  */
/*{{{  constructors */

/*{{{  AN_K_Terminated AN_K_makeTerminatedNormal(AN_K_Data data) */

AN_K_Terminated AN_K_makeTerminatedNormal(AN_K_Data data)
{
  return (AN_K_Terminated)(ATerm)ATmakeAppl1(AN_K_afun0, (ATerm)data);
}

/*}}}  */
/*{{{  AN_K_Terminated AN_K_makeTerminatedExceptional(AN_K_Data data) */

AN_K_Terminated AN_K_makeTerminatedExceptional(AN_K_Data data)
{
  return (AN_K_Terminated)(ATerm)ATmakeAppl1(AN_K_afun1, (ATerm)data);
}

/*}}}  */
/*{{{  AN_K_Terminated AN_K_makeTerminatedFailed() */

AN_K_Terminated AN_K_makeTerminatedFailed()
{
  return (AN_K_Terminated)(ATerm)ATmakeAppl0(AN_K_afun2);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_makeActionProvide(AN_K_Data data) */

AN_K_Action AN_K_makeActionProvide(AN_K_Data data)
{
  return (AN_K_Action)(ATerm)ATmakeAppl1(AN_K_afun3, (ATerm)data);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_makeActionGive(AN_K_DataOp op) */

AN_K_Action AN_K_makeActionGive(AN_K_DataOp op)
{
  return (AN_K_Action)(ATerm)ATmakeAppl1(AN_K_afun4, (ATerm)op);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_makeActionCheck(AN_K_DataPred pred) */

AN_K_Action AN_K_makeActionCheck(AN_K_DataPred pred)
{
  return (AN_K_Action)(ATerm)ATmakeAppl1(AN_K_afun5, (ATerm)pred);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_makeActionSelect(AN_K_ActionChoices choices) */

AN_K_Action AN_K_makeActionSelect(AN_K_ActionChoices choices)
{
  return (AN_K_Action)(ATerm)ATmakeAppl1(AN_K_afun6, (ATerm)choices);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_makeActionTerminatedAction(AN_K_Terminated Terminated) */

AN_K_Action AN_K_makeActionTerminatedAction(AN_K_Terminated Terminated)
{
  return (AN_K_Action)(ATerm)ATmakeAppl1(AN_K_afun7, (ATerm)Terminated);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_makeActionBracketAction(AN_K_Action Action) */

AN_K_Action AN_K_makeActionBracketAction(AN_K_Action Action)
{
  return (AN_K_Action)(ATerm)ATmakeAppl1(AN_K_afun8, (ATerm)Action);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_makeActionConstAction(AN_K_ActionConst ActionConst) */

AN_K_Action AN_K_makeActionConstAction(AN_K_ActionConst ActionConst)
{
  return (AN_K_Action)(ATerm)ATmakeAppl1(AN_K_afun9, (ATerm)ActionConst);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_makeActionPrefixAction(AN_K_ActionPrefix prefix, AN_K_Action arg) */

AN_K_Action AN_K_makeActionPrefixAction(AN_K_ActionPrefix prefix, AN_K_Action arg)
{
  return (AN_K_Action)(ATerm)ATmakeAppl2(AN_K_afun10, (ATerm)prefix, (ATerm)arg);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_makeActionInfixAction(AN_K_Action lhs, AN_K_ActionInfix infix, AN_K_Action rhs) */

AN_K_Action AN_K_makeActionInfixAction(AN_K_Action lhs, AN_K_ActionInfix infix, AN_K_Action rhs)
{
  return (AN_K_Action)(ATerm)ATmakeAppl3(AN_K_afun11, (ATerm)lhs, (ATerm)infix, (ATerm)rhs);
}

/*}}}  */
/*{{{  AN_K_ActionChoices AN_K_makeActionChoicesSingle(AN_K_Action head) */

AN_K_ActionChoices AN_K_makeActionChoicesSingle(AN_K_Action head)
{
  return (AN_K_ActionChoices)(ATerm)ATmakeList1((ATerm)head);
}

/*}}}  */
/*{{{  AN_K_ActionChoices AN_K_makeActionChoicesMany(AN_K_Action head, AN_K_ActionChoices tail) */

AN_K_ActionChoices AN_K_makeActionChoicesMany(AN_K_Action head, AN_K_ActionChoices tail)
{
  return (AN_K_ActionChoices)(ATerm)ATinsert((ATermList)tail, (ATerm)head);
}

/*}}}  */
/*{{{  AN_K_List AN_K_makeListDefault(AN_K_EltElts elts) */

AN_K_List AN_K_makeListDefault(AN_K_EltElts elts)
{
  return (AN_K_List)(ATerm)ATmakeAppl1(AN_K_afun12, (ATerm)elts);
}

/*}}}  */
/*{{{  AN_K_EltElts AN_K_makeEltEltsEmpty() */

AN_K_EltElts AN_K_makeEltEltsEmpty()
{
  return (AN_K_EltElts)(ATerm)ATempty;
}

/*}}}  */
/*{{{  AN_K_EltElts AN_K_makeEltEltsSingle(AN_K_Elt head) */

AN_K_EltElts AN_K_makeEltEltsSingle(AN_K_Elt head)
{
  return (AN_K_EltElts)(ATerm)ATmakeList1((ATerm)head);
}

/*}}}  */
/*{{{  AN_K_EltElts AN_K_makeEltEltsMany(AN_K_Elt head, AN_K_EltElts tail) */

AN_K_EltElts AN_K_makeEltEltsMany(AN_K_Elt head, AN_K_EltElts tail)
{
  return (AN_K_EltElts)(ATerm)ATinsert((ATermList)tail, (ATerm)head);
}

/*}}}  */
/*{{{  AN_K_BoolConst AN_K_makeBoolConstTrue() */

AN_K_BoolConst AN_K_makeBoolConstTrue()
{
  return (AN_K_BoolConst)(ATerm)ATmakeAppl0(AN_K_afun13);
}

/*}}}  */
/*{{{  AN_K_BoolConst AN_K_makeBoolConstFalse() */

AN_K_BoolConst AN_K_makeBoolConstFalse()
{
  return (AN_K_BoolConst)(ATerm)ATmakeAppl0(AN_K_afun14);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_makeBoolBool(AN_K_BoolConst BoolConst) */

AN_K_Bool AN_K_makeBoolBool(AN_K_BoolConst BoolConst)
{
  return (AN_K_Bool)(ATerm)ATmakeAppl1(AN_K_afun15, (ATerm)BoolConst);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_makeBoolNot(AN_K_Bool arg) */

AN_K_Bool AN_K_makeBoolNot(AN_K_Bool arg)
{
  return (AN_K_Bool)(ATerm)ATmakeAppl1(AN_K_afun16, (ATerm)arg);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_makeBoolOr(AN_K_Bool lhs, AN_K_Bool rhs) */

AN_K_Bool AN_K_makeBoolOr(AN_K_Bool lhs, AN_K_Bool rhs)
{
  return (AN_K_Bool)(ATerm)ATmakeAppl2(AN_K_afun17, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_makeBoolAnd(AN_K_Bool lhs, AN_K_Bool rhs) */

AN_K_Bool AN_K_makeBoolAnd(AN_K_Bool lhs, AN_K_Bool rhs)
{
  return (AN_K_Bool)(ATerm)ATmakeAppl2(AN_K_afun18, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_makeBoolBracketBool(AN_K_Bool Bool) */

AN_K_Bool AN_K_makeBoolBracketBool(AN_K_Bool Bool)
{
  return (AN_K_Bool)(ATerm)ATmakeAppl1(AN_K_afun19, (ATerm)Bool);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_makeBoolGt(AN_K_Int Int) */

AN_K_Bool AN_K_makeBoolGt(AN_K_Int Int)
{
  return (AN_K_Bool)(ATerm)ATmakeAppl2(AN_K_afun20, (ATerm)Int, (ATerm)Int);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_makeBoolGe(AN_K_Int Int) */

AN_K_Bool AN_K_makeBoolGe(AN_K_Int Int)
{
  return (AN_K_Bool)(ATerm)ATmakeAppl2(AN_K_afun21, (ATerm)Int, (ATerm)Int);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_makeBoolLt(AN_K_Int Int) */

AN_K_Bool AN_K_makeBoolLt(AN_K_Int Int)
{
  return (AN_K_Bool)(ATerm)ATmakeAppl2(AN_K_afun22, (ATerm)Int, (ATerm)Int);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_makeBoolLe(AN_K_Int Int) */

AN_K_Bool AN_K_makeBoolLe(AN_K_Int Int)
{
  return (AN_K_Bool)(ATerm)ATmakeAppl2(AN_K_afun23, (ATerm)Int, (ATerm)Int);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_makeBoolDefault(AN_K_Nat Nat) */

AN_K_Bool AN_K_makeBoolDefault(AN_K_Nat Nat)
{
  return (AN_K_Bool)(ATerm)ATmakeAppl2(AN_K_afun24, (ATerm)Nat, (ATerm)Nat);
}

/*}}}  */
/*{{{  AN_K_Datum AN_K_makeDatumDatum(AN_K_Int Int) */

AN_K_Datum AN_K_makeDatumDatum(AN_K_Int Int)
{
  return (AN_K_Datum)(ATerm)ATmakeAppl1(AN_K_afun25, (ATerm)Int);
}

/*}}}  */
/*{{{  AN_K_Numeral AN_K_makeNumeralNumeral(AN_K_NatCon NatCon) */

AN_K_Numeral AN_K_makeNumeralNumeral(AN_K_NatCon NatCon)
{
  return (AN_K_Numeral)(ATerm)ATmakeAppl1(AN_K_afun26, (ATerm)NatCon);
}

/*}}}  */
/*{{{  AN_K_Nat AN_K_makeNatNat(AN_K_Numeral Numeral) */

AN_K_Nat AN_K_makeNatNat(AN_K_Numeral Numeral)
{
  return (AN_K_Nat)(ATerm)ATmakeAppl1(AN_K_afun27, (ATerm)Numeral);
}

/*}}}  */
/*{{{  AN_K_Nat AN_K_makeNatMonus(AN_K_Nat Nat) */

AN_K_Nat AN_K_makeNatMonus(AN_K_Nat Nat)
{
  return (AN_K_Nat)(ATerm)ATmakeAppl2(AN_K_afun28, (ATerm)Nat, (ATerm)Nat);
}

/*}}}  */
/*{{{  AN_K_Nat AN_K_makeNatBracketNat(AN_K_Nat Nat) */

AN_K_Nat AN_K_makeNatBracketNat(AN_K_Nat Nat)
{
  return (AN_K_Nat)(ATerm)ATmakeAppl1(AN_K_afun29, (ATerm)Nat);
}

/*}}}  */
/*{{{  AN_K_Nat AN_K_makeNatDefault(AN_K_Nat Nat) */

AN_K_Nat AN_K_makeNatDefault(AN_K_Nat Nat)
{
  return (AN_K_Nat)(ATerm)ATmakeAppl2(AN_K_afun24, (ATerm)Nat, (ATerm)Nat);
}

/*}}}  */
/*{{{  AN_K_Int AN_K_makeIntInt(AN_K_Nat Nat) */

AN_K_Int AN_K_makeIntInt(AN_K_Nat Nat)
{
  return (AN_K_Int)(ATerm)ATmakeAppl1(AN_K_afun30, (ATerm)Nat);
}

/*}}}  */
/*{{{  AN_K_Int AN_K_makeIntUnaryPlus(AN_K_Nat Nat) */

AN_K_Int AN_K_makeIntUnaryPlus(AN_K_Nat Nat)
{
  return (AN_K_Int)(ATerm)ATmakeAppl1(AN_K_afun31, (ATerm)Nat);
}

/*}}}  */
/*{{{  AN_K_Int AN_K_makeIntUnaryMinus(AN_K_Nat Nat) */

AN_K_Int AN_K_makeIntUnaryMinus(AN_K_Nat Nat)
{
  return (AN_K_Int)(ATerm)ATmakeAppl1(AN_K_afun32, (ATerm)Nat);
}

/*}}}  */
/*{{{  AN_K_Int AN_K_makeIntPlus(AN_K_Int Int) */

AN_K_Int AN_K_makeIntPlus(AN_K_Int Int)
{
  return (AN_K_Int)(ATerm)ATmakeAppl2(AN_K_afun33, (ATerm)Int, (ATerm)Int);
}

/*}}}  */
/*{{{  AN_K_Int AN_K_makeIntMinus(AN_K_Int Int) */

AN_K_Int AN_K_makeIntMinus(AN_K_Int Int)
{
  return (AN_K_Int)(ATerm)ATmakeAppl2(AN_K_afun34, (ATerm)Int, (ATerm)Int);
}

/*}}}  */
/*{{{  AN_K_Int AN_K_makeIntTimes(AN_K_Int Int) */

AN_K_Int AN_K_makeIntTimes(AN_K_Int Int)
{
  return (AN_K_Int)(ATerm)ATmakeAppl2(AN_K_afun35, (ATerm)Int, (ATerm)Int);
}

/*}}}  */
/*{{{  AN_K_Int AN_K_makeIntBracketInt(AN_K_Int Int) */

AN_K_Int AN_K_makeIntBracketInt(AN_K_Int Int)
{
  return (AN_K_Int)(ATerm)ATmakeAppl1(AN_K_afun36, (ATerm)Int);
}

/*}}}  */

/*}}}  */
/*{{{  equality functions */

ATbool AN_K_isEqualTerminated(AN_K_Terminated arg0, AN_K_Terminated arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AN_K_isEqualAction(AN_K_Action arg0, AN_K_Action arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AN_K_isEqualActionChoices(AN_K_ActionChoices arg0, AN_K_ActionChoices arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AN_K_isEqualList(AN_K_List arg0, AN_K_List arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AN_K_isEqualEltElts(AN_K_EltElts arg0, AN_K_EltElts arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AN_K_isEqualBoolConst(AN_K_BoolConst arg0, AN_K_BoolConst arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AN_K_isEqualBool(AN_K_Bool arg0, AN_K_Bool arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AN_K_isEqualDatum(AN_K_Datum arg0, AN_K_Datum arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AN_K_isEqualNumeral(AN_K_Numeral arg0, AN_K_Numeral arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AN_K_isEqualNat(AN_K_Nat arg0, AN_K_Nat arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AN_K_isEqualInt(AN_K_Int arg0, AN_K_Int arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/*}}}  */
/*{{{  AN_K_Terminated accessors */

/*{{{  ATbool AN_K_isValidTerminated(AN_K_Terminated arg) */

ATbool AN_K_isValidTerminated(AN_K_Terminated arg)
{
  if (AN_K_isTerminatedNormal(arg)) {
    return ATtrue;
  }
  else if (AN_K_isTerminatedExceptional(arg)) {
    return ATtrue;
  }
  else if (AN_K_isTerminatedFailed(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isTerminatedNormal(AN_K_Terminated arg) */

inline ATbool AN_K_isTerminatedNormal(AN_K_Terminated arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternTerminatedNormal)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternTerminatedNormal, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isTerminatedExceptional(AN_K_Terminated arg) */

inline ATbool AN_K_isTerminatedExceptional(AN_K_Terminated arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternTerminatedExceptional)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternTerminatedExceptional, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isTerminatedFailed(AN_K_Terminated arg) */

inline ATbool AN_K_isTerminatedFailed(AN_K_Terminated arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternTerminatedFailed)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternTerminatedFailed));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AN_K_hasTerminatedData(AN_K_Terminated arg) */

ATbool AN_K_hasTerminatedData(AN_K_Terminated arg)
{
  if (AN_K_isTerminatedNormal(arg)) {
    return ATtrue;
  }
  else if (AN_K_isTerminatedExceptional(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Data AN_K_getTerminatedData(AN_K_Terminated arg) */

AN_K_Data AN_K_getTerminatedData(AN_K_Terminated arg)
{
  if (AN_K_isTerminatedNormal(arg)) {
    return (AN_K_Data)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (AN_K_Data)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Terminated AN_K_setTerminatedData(AN_K_Terminated arg, AN_K_Data data) */

AN_K_Terminated AN_K_setTerminatedData(AN_K_Terminated arg, AN_K_Data data)
{
  if (AN_K_isTerminatedNormal(arg)) {
    return (AN_K_Terminated)ATsetArgument((ATermAppl)arg, (ATerm)data, 0);
  }
  else if (AN_K_isTerminatedExceptional(arg)) {
    return (AN_K_Terminated)ATsetArgument((ATermAppl)arg, (ATerm)data, 0);
  }

  ATabort("Terminated has no Data: %t\n", arg);
  return (AN_K_Terminated)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AN_K_Action accessors */

/*{{{  ATbool AN_K_isValidAction(AN_K_Action arg) */

ATbool AN_K_isValidAction(AN_K_Action arg)
{
  if (AN_K_isActionProvide(arg)) {
    return ATtrue;
  }
  else if (AN_K_isActionGive(arg)) {
    return ATtrue;
  }
  else if (AN_K_isActionCheck(arg)) {
    return ATtrue;
  }
  else if (AN_K_isActionSelect(arg)) {
    return ATtrue;
  }
  else if (AN_K_isActionTerminatedAction(arg)) {
    return ATtrue;
  }
  else if (AN_K_isActionBracketAction(arg)) {
    return ATtrue;
  }
  else if (AN_K_isActionConstAction(arg)) {
    return ATtrue;
  }
  else if (AN_K_isActionPrefixAction(arg)) {
    return ATtrue;
  }
  else if (AN_K_isActionInfixAction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isActionProvide(AN_K_Action arg) */

inline ATbool AN_K_isActionProvide(AN_K_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternActionProvide)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternActionProvide, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isActionGive(AN_K_Action arg) */

inline ATbool AN_K_isActionGive(AN_K_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternActionGive)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternActionGive, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isActionCheck(AN_K_Action arg) */

inline ATbool AN_K_isActionCheck(AN_K_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternActionCheck)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternActionCheck, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isActionSelect(AN_K_Action arg) */

inline ATbool AN_K_isActionSelect(AN_K_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternActionSelect)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternActionSelect, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isActionTerminatedAction(AN_K_Action arg) */

inline ATbool AN_K_isActionTerminatedAction(AN_K_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternActionTerminatedAction)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternActionTerminatedAction, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isActionBracketAction(AN_K_Action arg) */

inline ATbool AN_K_isActionBracketAction(AN_K_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternActionBracketAction)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternActionBracketAction, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isActionConstAction(AN_K_Action arg) */

inline ATbool AN_K_isActionConstAction(AN_K_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternActionConstAction)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternActionConstAction, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isActionPrefixAction(AN_K_Action arg) */

inline ATbool AN_K_isActionPrefixAction(AN_K_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternActionPrefixAction)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternActionPrefixAction, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isActionInfixAction(AN_K_Action arg) */

inline ATbool AN_K_isActionInfixAction(AN_K_Action arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternActionInfixAction)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternActionInfixAction, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionData(AN_K_Action arg) */

ATbool AN_K_hasActionData(AN_K_Action arg)
{
  if (AN_K_isActionProvide(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Data AN_K_getActionData(AN_K_Action arg) */

AN_K_Data AN_K_getActionData(AN_K_Action arg)
{
  
    return (AN_K_Data)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionData(AN_K_Action arg, AN_K_Data data) */

AN_K_Action AN_K_setActionData(AN_K_Action arg, AN_K_Data data)
{
  if (AN_K_isActionProvide(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)data, 0);
  }

  ATabort("Action has no Data: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionOp(AN_K_Action arg) */

ATbool AN_K_hasActionOp(AN_K_Action arg)
{
  if (AN_K_isActionGive(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_DataOp AN_K_getActionOp(AN_K_Action arg) */

AN_K_DataOp AN_K_getActionOp(AN_K_Action arg)
{
  
    return (AN_K_DataOp)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionOp(AN_K_Action arg, AN_K_DataOp op) */

AN_K_Action AN_K_setActionOp(AN_K_Action arg, AN_K_DataOp op)
{
  if (AN_K_isActionGive(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)op, 0);
  }

  ATabort("Action has no Op: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionPred(AN_K_Action arg) */

ATbool AN_K_hasActionPred(AN_K_Action arg)
{
  if (AN_K_isActionCheck(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_DataPred AN_K_getActionPred(AN_K_Action arg) */

AN_K_DataPred AN_K_getActionPred(AN_K_Action arg)
{
  
    return (AN_K_DataPred)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionPred(AN_K_Action arg, AN_K_DataPred pred) */

AN_K_Action AN_K_setActionPred(AN_K_Action arg, AN_K_DataPred pred)
{
  if (AN_K_isActionCheck(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)pred, 0);
  }

  ATabort("Action has no Pred: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionChoices(AN_K_Action arg) */

ATbool AN_K_hasActionChoices(AN_K_Action arg)
{
  if (AN_K_isActionSelect(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_ActionChoices AN_K_getActionChoices(AN_K_Action arg) */

AN_K_ActionChoices AN_K_getActionChoices(AN_K_Action arg)
{
  
    return (AN_K_ActionChoices)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionChoices(AN_K_Action arg, AN_K_ActionChoices choices) */

AN_K_Action AN_K_setActionChoices(AN_K_Action arg, AN_K_ActionChoices choices)
{
  if (AN_K_isActionSelect(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)choices, 0);
  }

  ATabort("Action has no Choices: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionTerminated(AN_K_Action arg) */

ATbool AN_K_hasActionTerminated(AN_K_Action arg)
{
  if (AN_K_isActionTerminatedAction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Terminated AN_K_getActionTerminated(AN_K_Action arg) */

AN_K_Terminated AN_K_getActionTerminated(AN_K_Action arg)
{
  
    return (AN_K_Terminated)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionTerminated(AN_K_Action arg, AN_K_Terminated Terminated) */

AN_K_Action AN_K_setActionTerminated(AN_K_Action arg, AN_K_Terminated Terminated)
{
  if (AN_K_isActionTerminatedAction(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)Terminated, 0);
  }

  ATabort("Action has no Terminated: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionAction(AN_K_Action arg) */

ATbool AN_K_hasActionAction(AN_K_Action arg)
{
  if (AN_K_isActionBracketAction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Action AN_K_getActionAction(AN_K_Action arg) */

AN_K_Action AN_K_getActionAction(AN_K_Action arg)
{
  
    return (AN_K_Action)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionAction(AN_K_Action arg, AN_K_Action Action) */

AN_K_Action AN_K_setActionAction(AN_K_Action arg, AN_K_Action Action)
{
  if (AN_K_isActionBracketAction(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)Action, 0);
  }

  ATabort("Action has no Action: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionActionConst(AN_K_Action arg) */

ATbool AN_K_hasActionActionConst(AN_K_Action arg)
{
  if (AN_K_isActionConstAction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_ActionConst AN_K_getActionActionConst(AN_K_Action arg) */

AN_K_ActionConst AN_K_getActionActionConst(AN_K_Action arg)
{
  
    return (AN_K_ActionConst)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionActionConst(AN_K_Action arg, AN_K_ActionConst ActionConst) */

AN_K_Action AN_K_setActionActionConst(AN_K_Action arg, AN_K_ActionConst ActionConst)
{
  if (AN_K_isActionConstAction(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)ActionConst, 0);
  }

  ATabort("Action has no ActionConst: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionPrefix(AN_K_Action arg) */

ATbool AN_K_hasActionPrefix(AN_K_Action arg)
{
  if (AN_K_isActionPrefixAction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_ActionPrefix AN_K_getActionPrefix(AN_K_Action arg) */

AN_K_ActionPrefix AN_K_getActionPrefix(AN_K_Action arg)
{
  
    return (AN_K_ActionPrefix)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionPrefix(AN_K_Action arg, AN_K_ActionPrefix prefix) */

AN_K_Action AN_K_setActionPrefix(AN_K_Action arg, AN_K_ActionPrefix prefix)
{
  if (AN_K_isActionPrefixAction(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)prefix, 0);
  }

  ATabort("Action has no Prefix: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionArg(AN_K_Action arg) */

ATbool AN_K_hasActionArg(AN_K_Action arg)
{
  if (AN_K_isActionPrefixAction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Action AN_K_getActionArg(AN_K_Action arg) */

AN_K_Action AN_K_getActionArg(AN_K_Action arg)
{
  
    return (AN_K_Action)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionArg(AN_K_Action arg, AN_K_Action arg) */

AN_K_Action AN_K_setActionArg(AN_K_Action arg, AN_K_Action arg)
{
  if (AN_K_isActionPrefixAction(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)arg, 1);
  }

  ATabort("Action has no Arg: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionLhs(AN_K_Action arg) */

ATbool AN_K_hasActionLhs(AN_K_Action arg)
{
  if (AN_K_isActionInfixAction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Action AN_K_getActionLhs(AN_K_Action arg) */

AN_K_Action AN_K_getActionLhs(AN_K_Action arg)
{
  
    return (AN_K_Action)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionLhs(AN_K_Action arg, AN_K_Action lhs) */

AN_K_Action AN_K_setActionLhs(AN_K_Action arg, AN_K_Action lhs)
{
  if (AN_K_isActionInfixAction(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }

  ATabort("Action has no Lhs: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionInfix(AN_K_Action arg) */

ATbool AN_K_hasActionInfix(AN_K_Action arg)
{
  if (AN_K_isActionInfixAction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_ActionInfix AN_K_getActionInfix(AN_K_Action arg) */

AN_K_ActionInfix AN_K_getActionInfix(AN_K_Action arg)
{
  
    return (AN_K_ActionInfix)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionInfix(AN_K_Action arg, AN_K_ActionInfix infix) */

AN_K_Action AN_K_setActionInfix(AN_K_Action arg, AN_K_ActionInfix infix)
{
  if (AN_K_isActionInfixAction(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)infix, 1);
  }

  ATabort("Action has no Infix: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionRhs(AN_K_Action arg) */

ATbool AN_K_hasActionRhs(AN_K_Action arg)
{
  if (AN_K_isActionInfixAction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Action AN_K_getActionRhs(AN_K_Action arg) */

AN_K_Action AN_K_getActionRhs(AN_K_Action arg)
{
  
    return (AN_K_Action)ATgetArgument((ATermAppl)arg, 2);
}

/*}}}  */
/*{{{  AN_K_Action AN_K_setActionRhs(AN_K_Action arg, AN_K_Action rhs) */

AN_K_Action AN_K_setActionRhs(AN_K_Action arg, AN_K_Action rhs)
{
  if (AN_K_isActionInfixAction(arg)) {
    return (AN_K_Action)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 2);
  }

  ATabort("Action has no Rhs: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AN_K_ActionChoices accessors */

/*{{{  ATbool AN_K_isValidActionChoices(AN_K_ActionChoices arg) */

ATbool AN_K_isValidActionChoices(AN_K_ActionChoices arg)
{
  if (AN_K_isActionChoicesSingle(arg)) {
    return ATtrue;
  }
  else if (AN_K_isActionChoicesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isActionChoicesSingle(AN_K_ActionChoices arg) */

inline ATbool AN_K_isActionChoicesSingle(AN_K_ActionChoices arg)
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
      last_result = ATmatchTerm((ATerm)arg, AN_K_patternActionChoicesSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AN_K_isActionChoicesMany(AN_K_ActionChoices arg) */

inline ATbool AN_K_isActionChoicesMany(AN_K_ActionChoices arg)
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
      last_result = ATmatchTerm((ATerm)arg, AN_K_patternActionChoicesMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionChoicesHead(AN_K_ActionChoices arg) */

ATbool AN_K_hasActionChoicesHead(AN_K_ActionChoices arg)
{
  if (AN_K_isActionChoicesSingle(arg)) {
    return ATtrue;
  }
  else if (AN_K_isActionChoicesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Action AN_K_getActionChoicesHead(AN_K_ActionChoices arg) */

AN_K_Action AN_K_getActionChoicesHead(AN_K_ActionChoices arg)
{
  if (AN_K_isActionChoicesSingle(arg)) {
    return (AN_K_Action)ATgetFirst((ATermList)arg);
  }
  else 
    return (AN_K_Action)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  AN_K_ActionChoices AN_K_setActionChoicesHead(AN_K_ActionChoices arg, AN_K_Action head) */

AN_K_ActionChoices AN_K_setActionChoicesHead(AN_K_ActionChoices arg, AN_K_Action head)
{
  if (AN_K_isActionChoicesSingle(arg)) {
    return (AN_K_ActionChoices)ATreplace((ATermList)arg, (ATerm)head, 0);
  }
  else if (AN_K_isActionChoicesMany(arg)) {
    return (AN_K_ActionChoices)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("ActionChoices has no Head: %t\n", arg);
  return (AN_K_ActionChoices)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasActionChoicesTail(AN_K_ActionChoices arg) */

ATbool AN_K_hasActionChoicesTail(AN_K_ActionChoices arg)
{
  if (AN_K_isActionChoicesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_ActionChoices AN_K_getActionChoicesTail(AN_K_ActionChoices arg) */

AN_K_ActionChoices AN_K_getActionChoicesTail(AN_K_ActionChoices arg)
{
  
    return (AN_K_ActionChoices)ATgetNext((ATermList)arg);
}

/*}}}  */
/*{{{  AN_K_ActionChoices AN_K_setActionChoicesTail(AN_K_ActionChoices arg, AN_K_ActionChoices tail) */

AN_K_ActionChoices AN_K_setActionChoicesTail(AN_K_ActionChoices arg, AN_K_ActionChoices tail)
{
  if (AN_K_isActionChoicesMany(arg)) {
    return (AN_K_ActionChoices)ATreplaceTail((ATermList)arg, (ATermList)tail, 1);
  }

  ATabort("ActionChoices has no Tail: %t\n", arg);
  return (AN_K_ActionChoices)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AN_K_List accessors */

/*{{{  ATbool AN_K_isValidList(AN_K_List arg) */

ATbool AN_K_isValidList(AN_K_List arg)
{
  if (AN_K_isListDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isListDefault(AN_K_List arg) */

inline ATbool AN_K_isListDefault(AN_K_List arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternListDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AN_K_hasListElts(AN_K_List arg) */

ATbool AN_K_hasListElts(AN_K_List arg)
{
  if (AN_K_isListDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_EltElts AN_K_getListElts(AN_K_List arg) */

AN_K_EltElts AN_K_getListElts(AN_K_List arg)
{
  
    return (AN_K_EltElts)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_List AN_K_setListElts(AN_K_List arg, AN_K_EltElts elts) */

AN_K_List AN_K_setListElts(AN_K_List arg, AN_K_EltElts elts)
{
  if (AN_K_isListDefault(arg)) {
    return (AN_K_List)ATsetArgument((ATermAppl)arg, (ATerm)elts, 0);
  }

  ATabort("List has no Elts: %t\n", arg);
  return (AN_K_List)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AN_K_EltElts accessors */

/*{{{  ATbool AN_K_isValidEltElts(AN_K_EltElts arg) */

ATbool AN_K_isValidEltElts(AN_K_EltElts arg)
{
  if (AN_K_isEltEltsEmpty(arg)) {
    return ATtrue;
  }
  else if (AN_K_isEltEltsSingle(arg)) {
    return ATtrue;
  }
  else if (AN_K_isEltEltsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isEltEltsEmpty(AN_K_EltElts arg) */

inline ATbool AN_K_isEltEltsEmpty(AN_K_EltElts arg)
{
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternEltEltsEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isEltEltsSingle(AN_K_EltElts arg) */

inline ATbool AN_K_isEltEltsSingle(AN_K_EltElts arg)
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
      last_result = ATmatchTerm((ATerm)arg, AN_K_patternEltEltsSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AN_K_isEltEltsMany(AN_K_EltElts arg) */

inline ATbool AN_K_isEltEltsMany(AN_K_EltElts arg)
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
      last_result = ATmatchTerm((ATerm)arg, AN_K_patternEltEltsMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool AN_K_hasEltEltsHead(AN_K_EltElts arg) */

ATbool AN_K_hasEltEltsHead(AN_K_EltElts arg)
{
  if (AN_K_isEltEltsSingle(arg)) {
    return ATtrue;
  }
  else if (AN_K_isEltEltsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Elt AN_K_getEltEltsHead(AN_K_EltElts arg) */

AN_K_Elt AN_K_getEltEltsHead(AN_K_EltElts arg)
{
  if (AN_K_isEltEltsSingle(arg)) {
    return (AN_K_Elt)ATgetFirst((ATermList)arg);
  }
  else 
    return (AN_K_Elt)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  AN_K_EltElts AN_K_setEltEltsHead(AN_K_EltElts arg, AN_K_Elt head) */

AN_K_EltElts AN_K_setEltEltsHead(AN_K_EltElts arg, AN_K_Elt head)
{
  if (AN_K_isEltEltsSingle(arg)) {
    return (AN_K_EltElts)ATreplace((ATermList)arg, (ATerm)head, 0);
  }
  else if (AN_K_isEltEltsMany(arg)) {
    return (AN_K_EltElts)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("EltElts has no Head: %t\n", arg);
  return (AN_K_EltElts)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasEltEltsTail(AN_K_EltElts arg) */

ATbool AN_K_hasEltEltsTail(AN_K_EltElts arg)
{
  if (AN_K_isEltEltsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_EltElts AN_K_getEltEltsTail(AN_K_EltElts arg) */

AN_K_EltElts AN_K_getEltEltsTail(AN_K_EltElts arg)
{
  
    return (AN_K_EltElts)ATgetNext((ATermList)arg);
}

/*}}}  */
/*{{{  AN_K_EltElts AN_K_setEltEltsTail(AN_K_EltElts arg, AN_K_EltElts tail) */

AN_K_EltElts AN_K_setEltEltsTail(AN_K_EltElts arg, AN_K_EltElts tail)
{
  if (AN_K_isEltEltsMany(arg)) {
    return (AN_K_EltElts)ATreplaceTail((ATermList)arg, (ATermList)tail, 1);
  }

  ATabort("EltElts has no Tail: %t\n", arg);
  return (AN_K_EltElts)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AN_K_BoolConst accessors */

/*{{{  ATbool AN_K_isValidBoolConst(AN_K_BoolConst arg) */

ATbool AN_K_isValidBoolConst(AN_K_BoolConst arg)
{
  if (AN_K_isBoolConstTrue(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolConstFalse(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolConstTrue(AN_K_BoolConst arg) */

inline ATbool AN_K_isBoolConstTrue(AN_K_BoolConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolConstTrue)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolConstTrue));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolConstFalse(AN_K_BoolConst arg) */

inline ATbool AN_K_isBoolConstFalse(AN_K_BoolConst arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolConstFalse)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolConstFalse));
#endif
  return ATtrue;
}

/*}}}  */

/*}}}  */
/*{{{  AN_K_Bool accessors */

/*{{{  ATbool AN_K_isValidBool(AN_K_Bool arg) */

ATbool AN_K_isValidBool(AN_K_Bool arg)
{
  if (AN_K_isBoolBool(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolNot(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolOr(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolAnd(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolBracketBool(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolGt(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolGe(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolLt(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolLe(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolBool(AN_K_Bool arg) */

inline ATbool AN_K_isBoolBool(AN_K_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolBool)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolBool, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolNot(AN_K_Bool arg) */

inline ATbool AN_K_isBoolNot(AN_K_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolNot)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolNot, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolOr(AN_K_Bool arg) */

inline ATbool AN_K_isBoolOr(AN_K_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolOr)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolOr, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolAnd(AN_K_Bool arg) */

inline ATbool AN_K_isBoolAnd(AN_K_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolAnd)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolAnd, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolBracketBool(AN_K_Bool arg) */

inline ATbool AN_K_isBoolBracketBool(AN_K_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolBracketBool)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolBracketBool, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolGt(AN_K_Bool arg) */

inline ATbool AN_K_isBoolGt(AN_K_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolGt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolGt, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolGe(AN_K_Bool arg) */

inline ATbool AN_K_isBoolGe(AN_K_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolGe)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolGe, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolLt(AN_K_Bool arg) */

inline ATbool AN_K_isBoolLt(AN_K_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolLt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolLt, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolLe(AN_K_Bool arg) */

inline ATbool AN_K_isBoolLe(AN_K_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolLe)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolLe, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isBoolDefault(AN_K_Bool arg) */

inline ATbool AN_K_isBoolDefault(AN_K_Bool arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternBoolDefault)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternBoolDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AN_K_hasBoolBoolConst(AN_K_Bool arg) */

ATbool AN_K_hasBoolBoolConst(AN_K_Bool arg)
{
  if (AN_K_isBoolBool(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_BoolConst AN_K_getBoolBoolConst(AN_K_Bool arg) */

AN_K_BoolConst AN_K_getBoolBoolConst(AN_K_Bool arg)
{
  
    return (AN_K_BoolConst)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_setBoolBoolConst(AN_K_Bool arg, AN_K_BoolConst BoolConst) */

AN_K_Bool AN_K_setBoolBoolConst(AN_K_Bool arg, AN_K_BoolConst BoolConst)
{
  if (AN_K_isBoolBool(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)BoolConst, 0);
  }

  ATabort("Bool has no BoolConst: %t\n", arg);
  return (AN_K_Bool)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasBoolArg(AN_K_Bool arg) */

ATbool AN_K_hasBoolArg(AN_K_Bool arg)
{
  if (AN_K_isBoolNot(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_getBoolArg(AN_K_Bool arg) */

AN_K_Bool AN_K_getBoolArg(AN_K_Bool arg)
{
  
    return (AN_K_Bool)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_setBoolArg(AN_K_Bool arg, AN_K_Bool arg) */

AN_K_Bool AN_K_setBoolArg(AN_K_Bool arg, AN_K_Bool arg)
{
  if (AN_K_isBoolNot(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)arg, 0);
  }

  ATabort("Bool has no Arg: %t\n", arg);
  return (AN_K_Bool)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasBoolLhs(AN_K_Bool arg) */

ATbool AN_K_hasBoolLhs(AN_K_Bool arg)
{
  if (AN_K_isBoolOr(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolAnd(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_getBoolLhs(AN_K_Bool arg) */

AN_K_Bool AN_K_getBoolLhs(AN_K_Bool arg)
{
  if (AN_K_isBoolOr(arg)) {
    return (AN_K_Bool)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (AN_K_Bool)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_setBoolLhs(AN_K_Bool arg, AN_K_Bool lhs) */

AN_K_Bool AN_K_setBoolLhs(AN_K_Bool arg, AN_K_Bool lhs)
{
  if (AN_K_isBoolOr(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }
  else if (AN_K_isBoolAnd(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }

  ATabort("Bool has no Lhs: %t\n", arg);
  return (AN_K_Bool)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasBoolRhs(AN_K_Bool arg) */

ATbool AN_K_hasBoolRhs(AN_K_Bool arg)
{
  if (AN_K_isBoolOr(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolAnd(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_getBoolRhs(AN_K_Bool arg) */

AN_K_Bool AN_K_getBoolRhs(AN_K_Bool arg)
{
  if (AN_K_isBoolOr(arg)) {
    return (AN_K_Bool)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (AN_K_Bool)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_setBoolRhs(AN_K_Bool arg, AN_K_Bool rhs) */

AN_K_Bool AN_K_setBoolRhs(AN_K_Bool arg, AN_K_Bool rhs)
{
  if (AN_K_isBoolOr(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }
  else if (AN_K_isBoolAnd(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }

  ATabort("Bool has no Rhs: %t\n", arg);
  return (AN_K_Bool)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasBoolBool(AN_K_Bool arg) */

ATbool AN_K_hasBoolBool(AN_K_Bool arg)
{
  if (AN_K_isBoolBracketBool(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_getBoolBool(AN_K_Bool arg) */

AN_K_Bool AN_K_getBoolBool(AN_K_Bool arg)
{
  
    return (AN_K_Bool)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_setBoolBool(AN_K_Bool arg, AN_K_Bool Bool) */

AN_K_Bool AN_K_setBoolBool(AN_K_Bool arg, AN_K_Bool Bool)
{
  if (AN_K_isBoolBracketBool(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Bool, 0);
  }

  ATabort("Bool has no Bool: %t\n", arg);
  return (AN_K_Bool)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasBoolInt(AN_K_Bool arg) */

ATbool AN_K_hasBoolInt(AN_K_Bool arg)
{
  if (AN_K_isBoolGt(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolGt(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolGe(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolGe(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolLt(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolLt(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolLe(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolLe(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Int AN_K_getBoolInt(AN_K_Bool arg) */

AN_K_Int AN_K_getBoolInt(AN_K_Bool arg)
{
  if (AN_K_isBoolGt(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (AN_K_isBoolGt(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (AN_K_isBoolGe(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (AN_K_isBoolGe(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (AN_K_isBoolLt(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (AN_K_isBoolLt(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (AN_K_isBoolLe(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_setBoolInt(AN_K_Bool arg, AN_K_Int Int) */

AN_K_Bool AN_K_setBoolInt(AN_K_Bool arg, AN_K_Int Int)
{
  if (AN_K_isBoolGt(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Int, 0);
  }
  else if (AN_K_isBoolGt(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Int, 1);
  }
  else if (AN_K_isBoolGe(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Int, 0);
  }
  else if (AN_K_isBoolGe(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Int, 1);
  }
  else if (AN_K_isBoolLt(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Int, 0);
  }
  else if (AN_K_isBoolLt(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Int, 1);
  }
  else if (AN_K_isBoolLe(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Int, 0);
  }
  else if (AN_K_isBoolLe(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Int, 1);
  }

  ATabort("Bool has no Int: %t\n", arg);
  return (AN_K_Bool)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasBoolNat(AN_K_Bool arg) */

ATbool AN_K_hasBoolNat(AN_K_Bool arg)
{
  if (AN_K_isBoolDefault(arg)) {
    return ATtrue;
  }
  else if (AN_K_isBoolDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Nat AN_K_getBoolNat(AN_K_Bool arg) */

AN_K_Nat AN_K_getBoolNat(AN_K_Bool arg)
{
  if (AN_K_isBoolDefault(arg)) {
    return (AN_K_Nat)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (AN_K_Nat)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_setBoolNat(AN_K_Bool arg, AN_K_Nat Nat) */

AN_K_Bool AN_K_setBoolNat(AN_K_Bool arg, AN_K_Nat Nat)
{
  if (AN_K_isBoolDefault(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Nat, 0);
  }
  else if (AN_K_isBoolDefault(arg)) {
    return (AN_K_Bool)ATsetArgument((ATermAppl)arg, (ATerm)Nat, 1);
  }

  ATabort("Bool has no Nat: %t\n", arg);
  return (AN_K_Bool)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AN_K_Datum accessors */

/*{{{  ATbool AN_K_isValidDatum(AN_K_Datum arg) */

ATbool AN_K_isValidDatum(AN_K_Datum arg)
{
  if (AN_K_isDatumDatum(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isDatumDatum(AN_K_Datum arg) */

inline ATbool AN_K_isDatumDatum(AN_K_Datum arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternDatumDatum, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AN_K_hasDatumInt(AN_K_Datum arg) */

ATbool AN_K_hasDatumInt(AN_K_Datum arg)
{
  if (AN_K_isDatumDatum(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Int AN_K_getDatumInt(AN_K_Datum arg) */

AN_K_Int AN_K_getDatumInt(AN_K_Datum arg)
{
  
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Datum AN_K_setDatumInt(AN_K_Datum arg, AN_K_Int Int) */

AN_K_Datum AN_K_setDatumInt(AN_K_Datum arg, AN_K_Int Int)
{
  if (AN_K_isDatumDatum(arg)) {
    return (AN_K_Datum)ATsetArgument((ATermAppl)arg, (ATerm)Int, 0);
  }

  ATabort("Datum has no Int: %t\n", arg);
  return (AN_K_Datum)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AN_K_Numeral accessors */

/*{{{  ATbool AN_K_isValidNumeral(AN_K_Numeral arg) */

ATbool AN_K_isValidNumeral(AN_K_Numeral arg)
{
  if (AN_K_isNumeralNumeral(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isNumeralNumeral(AN_K_Numeral arg) */

inline ATbool AN_K_isNumeralNumeral(AN_K_Numeral arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternNumeralNumeral, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AN_K_hasNumeralNatCon(AN_K_Numeral arg) */

ATbool AN_K_hasNumeralNatCon(AN_K_Numeral arg)
{
  if (AN_K_isNumeralNumeral(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_NatCon AN_K_getNumeralNatCon(AN_K_Numeral arg) */

AN_K_NatCon AN_K_getNumeralNatCon(AN_K_Numeral arg)
{
  
    return (AN_K_NatCon)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Numeral AN_K_setNumeralNatCon(AN_K_Numeral arg, AN_K_NatCon NatCon) */

AN_K_Numeral AN_K_setNumeralNatCon(AN_K_Numeral arg, AN_K_NatCon NatCon)
{
  if (AN_K_isNumeralNumeral(arg)) {
    return (AN_K_Numeral)ATsetArgument((ATermAppl)arg, (ATerm)NatCon, 0);
  }

  ATabort("Numeral has no NatCon: %t\n", arg);
  return (AN_K_Numeral)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AN_K_Nat accessors */

/*{{{  ATbool AN_K_isValidNat(AN_K_Nat arg) */

ATbool AN_K_isValidNat(AN_K_Nat arg)
{
  if (AN_K_isNatNat(arg)) {
    return ATtrue;
  }
  else if (AN_K_isNatMonus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isNatBracketNat(arg)) {
    return ATtrue;
  }
  else if (AN_K_isNatDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isNatNat(AN_K_Nat arg) */

inline ATbool AN_K_isNatNat(AN_K_Nat arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternNatNat)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternNatNat, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isNatMonus(AN_K_Nat arg) */

inline ATbool AN_K_isNatMonus(AN_K_Nat arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternNatMonus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternNatMonus, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isNatBracketNat(AN_K_Nat arg) */

inline ATbool AN_K_isNatBracketNat(AN_K_Nat arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternNatBracketNat)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternNatBracketNat, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isNatDefault(AN_K_Nat arg) */

inline ATbool AN_K_isNatDefault(AN_K_Nat arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternNatDefault)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternNatDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AN_K_hasNatNumeral(AN_K_Nat arg) */

ATbool AN_K_hasNatNumeral(AN_K_Nat arg)
{
  if (AN_K_isNatNat(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Numeral AN_K_getNatNumeral(AN_K_Nat arg) */

AN_K_Numeral AN_K_getNatNumeral(AN_K_Nat arg)
{
  
    return (AN_K_Numeral)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Nat AN_K_setNatNumeral(AN_K_Nat arg, AN_K_Numeral Numeral) */

AN_K_Nat AN_K_setNatNumeral(AN_K_Nat arg, AN_K_Numeral Numeral)
{
  if (AN_K_isNatNat(arg)) {
    return (AN_K_Nat)ATsetArgument((ATermAppl)arg, (ATerm)Numeral, 0);
  }

  ATabort("Nat has no Numeral: %t\n", arg);
  return (AN_K_Nat)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasNatNat(AN_K_Nat arg) */

ATbool AN_K_hasNatNat(AN_K_Nat arg)
{
  if (AN_K_isNatMonus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isNatMonus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isNatBracketNat(arg)) {
    return ATtrue;
  }
  else if (AN_K_isNatDefault(arg)) {
    return ATtrue;
  }
  else if (AN_K_isNatDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Nat AN_K_getNatNat(AN_K_Nat arg) */

AN_K_Nat AN_K_getNatNat(AN_K_Nat arg)
{
  if (AN_K_isNatMonus(arg)) {
    return (AN_K_Nat)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (AN_K_isNatMonus(arg)) {
    return (AN_K_Nat)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (AN_K_isNatBracketNat(arg)) {
    return (AN_K_Nat)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (AN_K_isNatDefault(arg)) {
    return (AN_K_Nat)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (AN_K_Nat)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  AN_K_Nat AN_K_setNatNat(AN_K_Nat arg, AN_K_Nat Nat) */

AN_K_Nat AN_K_setNatNat(AN_K_Nat arg, AN_K_Nat Nat)
{
  if (AN_K_isNatMonus(arg)) {
    return (AN_K_Nat)ATsetArgument((ATermAppl)arg, (ATerm)Nat, 0);
  }
  else if (AN_K_isNatMonus(arg)) {
    return (AN_K_Nat)ATsetArgument((ATermAppl)arg, (ATerm)Nat, 1);
  }
  else if (AN_K_isNatBracketNat(arg)) {
    return (AN_K_Nat)ATsetArgument((ATermAppl)arg, (ATerm)Nat, 0);
  }
  else if (AN_K_isNatDefault(arg)) {
    return (AN_K_Nat)ATsetArgument((ATermAppl)arg, (ATerm)Nat, 0);
  }
  else if (AN_K_isNatDefault(arg)) {
    return (AN_K_Nat)ATsetArgument((ATermAppl)arg, (ATerm)Nat, 1);
  }

  ATabort("Nat has no Nat: %t\n", arg);
  return (AN_K_Nat)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AN_K_Int accessors */

/*{{{  ATbool AN_K_isValidInt(AN_K_Int arg) */

ATbool AN_K_isValidInt(AN_K_Int arg)
{
  if (AN_K_isIntInt(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntUnaryPlus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntUnaryMinus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntPlus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntMinus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntTimes(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntBracketInt(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isIntInt(AN_K_Int arg) */

inline ATbool AN_K_isIntInt(AN_K_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternIntInt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternIntInt, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isIntUnaryPlus(AN_K_Int arg) */

inline ATbool AN_K_isIntUnaryPlus(AN_K_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternIntUnaryPlus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternIntUnaryPlus, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isIntUnaryMinus(AN_K_Int arg) */

inline ATbool AN_K_isIntUnaryMinus(AN_K_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternIntUnaryMinus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternIntUnaryMinus, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isIntPlus(AN_K_Int arg) */

inline ATbool AN_K_isIntPlus(AN_K_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternIntPlus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternIntPlus, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isIntMinus(AN_K_Int arg) */

inline ATbool AN_K_isIntMinus(AN_K_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternIntMinus)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternIntMinus, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isIntTimes(AN_K_Int arg) */

inline ATbool AN_K_isIntTimes(AN_K_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternIntTimes)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternIntTimes, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AN_K_isIntBracketInt(AN_K_Int arg) */

inline ATbool AN_K_isIntBracketInt(AN_K_Int arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(AN_K_patternIntBracketInt)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AN_K_patternIntBracketInt, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AN_K_hasIntNat(AN_K_Int arg) */

ATbool AN_K_hasIntNat(AN_K_Int arg)
{
  if (AN_K_isIntInt(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntUnaryPlus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntUnaryMinus(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Nat AN_K_getIntNat(AN_K_Int arg) */

AN_K_Nat AN_K_getIntNat(AN_K_Int arg)
{
  if (AN_K_isIntInt(arg)) {
    return (AN_K_Nat)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (AN_K_isIntUnaryPlus(arg)) {
    return (AN_K_Nat)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (AN_K_Nat)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Int AN_K_setIntNat(AN_K_Int arg, AN_K_Nat Nat) */

AN_K_Int AN_K_setIntNat(AN_K_Int arg, AN_K_Nat Nat)
{
  if (AN_K_isIntInt(arg)) {
    return (AN_K_Int)ATsetArgument((ATermAppl)arg, (ATerm)Nat, 0);
  }
  else if (AN_K_isIntUnaryPlus(arg)) {
    return (AN_K_Int)ATsetArgument((ATermAppl)arg, (ATerm)Nat, 0);
  }
  else if (AN_K_isIntUnaryMinus(arg)) {
    return (AN_K_Int)ATsetArgument((ATermAppl)arg, (ATerm)Nat, 0);
  }

  ATabort("Int has no Nat: %t\n", arg);
  return (AN_K_Int)NULL;
}

/*}}}  */
/*{{{  ATbool AN_K_hasIntInt(AN_K_Int arg) */

ATbool AN_K_hasIntInt(AN_K_Int arg)
{
  if (AN_K_isIntPlus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntPlus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntMinus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntMinus(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntTimes(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntTimes(arg)) {
    return ATtrue;
  }
  else if (AN_K_isIntBracketInt(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AN_K_Int AN_K_getIntInt(AN_K_Int arg) */

AN_K_Int AN_K_getIntInt(AN_K_Int arg)
{
  if (AN_K_isIntPlus(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (AN_K_isIntPlus(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (AN_K_isIntMinus(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (AN_K_isIntMinus(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (AN_K_isIntTimes(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (AN_K_isIntTimes(arg)) {
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (AN_K_Int)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  AN_K_Int AN_K_setIntInt(AN_K_Int arg, AN_K_Int Int) */

AN_K_Int AN_K_setIntInt(AN_K_Int arg, AN_K_Int Int)
{
  if (AN_K_isIntPlus(arg)) {
    return (AN_K_Int)ATsetArgument((ATermAppl)arg, (ATerm)Int, 0);
  }
  else if (AN_K_isIntPlus(arg)) {
    return (AN_K_Int)ATsetArgument((ATermAppl)arg, (ATerm)Int, 1);
  }
  else if (AN_K_isIntMinus(arg)) {
    return (AN_K_Int)ATsetArgument((ATermAppl)arg, (ATerm)Int, 0);
  }
  else if (AN_K_isIntMinus(arg)) {
    return (AN_K_Int)ATsetArgument((ATermAppl)arg, (ATerm)Int, 1);
  }
  else if (AN_K_isIntTimes(arg)) {
    return (AN_K_Int)ATsetArgument((ATermAppl)arg, (ATerm)Int, 0);
  }
  else if (AN_K_isIntTimes(arg)) {
    return (AN_K_Int)ATsetArgument((ATermAppl)arg, (ATerm)Int, 1);
  }
  else if (AN_K_isIntBracketInt(arg)) {
    return (AN_K_Int)ATsetArgument((ATermAppl)arg, (ATerm)Int, 0);
  }

  ATabort("Int has no Int: %t\n", arg);
  return (AN_K_Int)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  sort visitors */

/*{{{  AN_K_Terminated AN_K_visitTerminated(AN_K_Terminated arg, AN_K_Data (*acceptData)(AN_K_Data)) */

AN_K_Terminated AN_K_visitTerminated(AN_K_Terminated arg, AN_K_Data (*acceptData)(AN_K_Data))
{
  if (AN_K_isTerminatedNormal(arg)) {
    return AN_K_makeTerminatedNormal(
        acceptData ? acceptData(AN_K_getTerminatedData(arg)) : AN_K_getTerminatedData(arg));
  }
  if (AN_K_isTerminatedExceptional(arg)) {
    return AN_K_makeTerminatedExceptional(
        acceptData ? acceptData(AN_K_getTerminatedData(arg)) : AN_K_getTerminatedData(arg));
  }
  if (AN_K_isTerminatedFailed(arg)) {
    return AN_K_makeTerminatedFailed();
  }
  ATabort("not a Terminated: %t\n", arg);
  return (AN_K_Terminated)NULL;
}

/*}}}  */
/*{{{  AN_K_Action AN_K_visitAction(AN_K_Action arg, AN_K_Data (*acceptData)(AN_K_Data), AN_K_DataOp (*acceptOp)(AN_K_DataOp), AN_K_DataPred (*acceptPred)(AN_K_DataPred), AN_K_ActionChoices (*acceptChoices)(AN_K_ActionChoices), AN_K_Terminated (*acceptTerminated)(AN_K_Terminated), AN_K_ActionConst (*acceptActionConst)(AN_K_ActionConst), AN_K_ActionPrefix (*acceptPrefix)(AN_K_ActionPrefix), AN_K_ActionInfix (*acceptInfix)(AN_K_ActionInfix)) */

AN_K_Action AN_K_visitAction(AN_K_Action arg, AN_K_Data (*acceptData)(AN_K_Data), AN_K_DataOp (*acceptOp)(AN_K_DataOp), AN_K_DataPred (*acceptPred)(AN_K_DataPred), AN_K_ActionChoices (*acceptChoices)(AN_K_ActionChoices), AN_K_Terminated (*acceptTerminated)(AN_K_Terminated), AN_K_ActionConst (*acceptActionConst)(AN_K_ActionConst), AN_K_ActionPrefix (*acceptPrefix)(AN_K_ActionPrefix), AN_K_ActionInfix (*acceptInfix)(AN_K_ActionInfix))
{
  if (AN_K_isActionProvide(arg)) {
    return AN_K_makeActionProvide(
        acceptData ? acceptData(AN_K_getActionData(arg)) : AN_K_getActionData(arg));
  }
  if (AN_K_isActionGive(arg)) {
    return AN_K_makeActionGive(
        acceptOp ? acceptOp(AN_K_getActionOp(arg)) : AN_K_getActionOp(arg));
  }
  if (AN_K_isActionCheck(arg)) {
    return AN_K_makeActionCheck(
        acceptPred ? acceptPred(AN_K_getActionPred(arg)) : AN_K_getActionPred(arg));
  }
  if (AN_K_isActionSelect(arg)) {
    return AN_K_makeActionSelect(
        acceptChoices ? acceptChoices(AN_K_getActionChoices(arg)) : AN_K_getActionChoices(arg));
  }
  if (AN_K_isActionTerminatedAction(arg)) {
    return AN_K_makeActionTerminatedAction(
        acceptTerminated ? acceptTerminated(AN_K_getActionTerminated(arg)) : AN_K_getActionTerminated(arg));
  }
  if (AN_K_isActionBracketAction(arg)) {
    return AN_K_makeActionBracketAction(
        AN_K_visitAction(AN_K_getActionAction(arg), acceptData, acceptOp, acceptPred, acceptChoices, acceptTerminated, acceptActionConst, acceptPrefix, acceptInfix));
  }
  if (AN_K_isActionConstAction(arg)) {
    return AN_K_makeActionConstAction(
        acceptActionConst ? acceptActionConst(AN_K_getActionActionConst(arg)) : AN_K_getActionActionConst(arg));
  }
  if (AN_K_isActionPrefixAction(arg)) {
    return AN_K_makeActionPrefixAction(
        acceptPrefix ? acceptPrefix(AN_K_getActionPrefix(arg)) : AN_K_getActionPrefix(arg),
        AN_K_visitAction(AN_K_getActionArg(arg), acceptData, acceptOp, acceptPred, acceptChoices, acceptTerminated, acceptActionConst, acceptPrefix, acceptInfix));
  }
  if (AN_K_isActionInfixAction(arg)) {
    return AN_K_makeActionInfixAction(
        AN_K_visitAction(AN_K_getActionLhs(arg), acceptData, acceptOp, acceptPred, acceptChoices, acceptTerminated, acceptActionConst, acceptPrefix, acceptInfix),
        acceptInfix ? acceptInfix(AN_K_getActionInfix(arg)) : AN_K_getActionInfix(arg),
        AN_K_visitAction(AN_K_getActionRhs(arg), acceptData, acceptOp, acceptPred, acceptChoices, acceptTerminated, acceptActionConst, acceptPrefix, acceptInfix));
  }
  ATabort("not a Action: %t\n", arg);
  return (AN_K_Action)NULL;
}

/*}}}  */
/*{{{  AN_K_ActionChoices AN_K_visitActionChoices(AN_K_ActionChoices arg, AN_K_Action (*acceptHead)(AN_K_Action)) */

AN_K_ActionChoices AN_K_visitActionChoices(AN_K_ActionChoices arg, AN_K_Action (*acceptHead)(AN_K_Action))
{
  if (AN_K_isActionChoicesSingle(arg)) {
    return AN_K_makeActionChoicesSingle(
        acceptHead ? acceptHead(AN_K_getActionChoicesHead(arg)) : AN_K_getActionChoicesHead(arg));
  }
  if (AN_K_isActionChoicesMany(arg)) {
    return AN_K_makeActionChoicesMany(
        acceptHead ? acceptHead(AN_K_getActionChoicesHead(arg)) : AN_K_getActionChoicesHead(arg),
        AN_K_visitActionChoices(AN_K_getActionChoicesTail(arg), acceptHead));
  }
  ATabort("not a ActionChoices: %t\n", arg);
  return (AN_K_ActionChoices)NULL;
}

/*}}}  */
/*{{{  AN_K_List AN_K_visitList(AN_K_List arg, AN_K_EltElts (*acceptElts)(AN_K_EltElts)) */

AN_K_List AN_K_visitList(AN_K_List arg, AN_K_EltElts (*acceptElts)(AN_K_EltElts))
{
  if (AN_K_isListDefault(arg)) {
    return AN_K_makeListDefault(
        acceptElts ? acceptElts(AN_K_getListElts(arg)) : AN_K_getListElts(arg));
  }
  ATabort("not a List: %t\n", arg);
  return (AN_K_List)NULL;
}

/*}}}  */
/*{{{  AN_K_EltElts AN_K_visitEltElts(AN_K_EltElts arg, AN_K_Elt (*acceptHead)(AN_K_Elt)) */

AN_K_EltElts AN_K_visitEltElts(AN_K_EltElts arg, AN_K_Elt (*acceptHead)(AN_K_Elt))
{
  if (AN_K_isEltEltsEmpty(arg)) {
    return AN_K_makeEltEltsEmpty();
  }
  if (AN_K_isEltEltsSingle(arg)) {
    return AN_K_makeEltEltsSingle(
        acceptHead ? acceptHead(AN_K_getEltEltsHead(arg)) : AN_K_getEltEltsHead(arg));
  }
  if (AN_K_isEltEltsMany(arg)) {
    return AN_K_makeEltEltsMany(
        acceptHead ? acceptHead(AN_K_getEltEltsHead(arg)) : AN_K_getEltEltsHead(arg),
        AN_K_visitEltElts(AN_K_getEltEltsTail(arg), acceptHead));
  }
  ATabort("not a EltElts: %t\n", arg);
  return (AN_K_EltElts)NULL;
}

/*}}}  */
/*{{{  AN_K_BoolConst AN_K_visitBoolConst(AN_K_BoolConst arg) */

AN_K_BoolConst AN_K_visitBoolConst(AN_K_BoolConst arg)
{
  if (AN_K_isBoolConstTrue(arg)) {
    return AN_K_makeBoolConstTrue();
  }
  if (AN_K_isBoolConstFalse(arg)) {
    return AN_K_makeBoolConstFalse();
  }
  ATabort("not a BoolConst: %t\n", arg);
  return (AN_K_BoolConst)NULL;
}

/*}}}  */
/*{{{  AN_K_Bool AN_K_visitBool(AN_K_Bool arg, AN_K_BoolConst (*acceptBoolConst)(AN_K_BoolConst), AN_K_Int (*acceptInt)(AN_K_Int), AN_K_Nat (*acceptNat)(AN_K_Nat)) */

AN_K_Bool AN_K_visitBool(AN_K_Bool arg, AN_K_BoolConst (*acceptBoolConst)(AN_K_BoolConst), AN_K_Int (*acceptInt)(AN_K_Int), AN_K_Nat (*acceptNat)(AN_K_Nat))
{
  if (AN_K_isBoolBool(arg)) {
    return AN_K_makeBoolBool(
        acceptBoolConst ? acceptBoolConst(AN_K_getBoolBoolConst(arg)) : AN_K_getBoolBoolConst(arg));
  }
  if (AN_K_isBoolNot(arg)) {
    return AN_K_makeBoolNot(
        AN_K_visitBool(AN_K_getBoolArg(arg), acceptBoolConst, acceptInt, acceptNat));
  }
  if (AN_K_isBoolOr(arg)) {
    return AN_K_makeBoolOr(
        AN_K_visitBool(AN_K_getBoolLhs(arg), acceptBoolConst, acceptInt, acceptNat),
        AN_K_visitBool(AN_K_getBoolRhs(arg), acceptBoolConst, acceptInt, acceptNat));
  }
  if (AN_K_isBoolAnd(arg)) {
    return AN_K_makeBoolAnd(
        AN_K_visitBool(AN_K_getBoolLhs(arg), acceptBoolConst, acceptInt, acceptNat),
        AN_K_visitBool(AN_K_getBoolRhs(arg), acceptBoolConst, acceptInt, acceptNat));
  }
  if (AN_K_isBoolBracketBool(arg)) {
    return AN_K_makeBoolBracketBool(
        AN_K_visitBool(AN_K_getBoolBool(arg), acceptBoolConst, acceptInt, acceptNat));
  }
  if (AN_K_isBoolGt(arg)) {
    return AN_K_makeBoolGt(
        acceptInt ? acceptInt(AN_K_getBoolInt(arg)) : AN_K_getBoolInt(arg));
  }
  if (AN_K_isBoolGe(arg)) {
    return AN_K_makeBoolGe(
        acceptInt ? acceptInt(AN_K_getBoolInt(arg)) : AN_K_getBoolInt(arg));
  }
  if (AN_K_isBoolLt(arg)) {
    return AN_K_makeBoolLt(
        acceptInt ? acceptInt(AN_K_getBoolInt(arg)) : AN_K_getBoolInt(arg));
  }
  if (AN_K_isBoolLe(arg)) {
    return AN_K_makeBoolLe(
        acceptInt ? acceptInt(AN_K_getBoolInt(arg)) : AN_K_getBoolInt(arg));
  }
  if (AN_K_isBoolDefault(arg)) {
    return AN_K_makeBoolDefault(
        acceptNat ? acceptNat(AN_K_getBoolNat(arg)) : AN_K_getBoolNat(arg));
  }
  ATabort("not a Bool: %t\n", arg);
  return (AN_K_Bool)NULL;
}

/*}}}  */
/*{{{  AN_K_Datum AN_K_visitDatum(AN_K_Datum arg, AN_K_Int (*acceptInt)(AN_K_Int)) */

AN_K_Datum AN_K_visitDatum(AN_K_Datum arg, AN_K_Int (*acceptInt)(AN_K_Int))
{
  if (AN_K_isDatumDatum(arg)) {
    return AN_K_makeDatumDatum(
        acceptInt ? acceptInt(AN_K_getDatumInt(arg)) : AN_K_getDatumInt(arg));
  }
  ATabort("not a Datum: %t\n", arg);
  return (AN_K_Datum)NULL;
}

/*}}}  */
/*{{{  AN_K_Numeral AN_K_visitNumeral(AN_K_Numeral arg, AN_K_NatCon (*acceptNatCon)(AN_K_NatCon)) */

AN_K_Numeral AN_K_visitNumeral(AN_K_Numeral arg, AN_K_NatCon (*acceptNatCon)(AN_K_NatCon))
{
  if (AN_K_isNumeralNumeral(arg)) {
    return AN_K_makeNumeralNumeral(
        acceptNatCon ? acceptNatCon(AN_K_getNumeralNatCon(arg)) : AN_K_getNumeralNatCon(arg));
  }
  ATabort("not a Numeral: %t\n", arg);
  return (AN_K_Numeral)NULL;
}

/*}}}  */
/*{{{  AN_K_Nat AN_K_visitNat(AN_K_Nat arg, AN_K_Numeral (*acceptNumeral)(AN_K_Numeral)) */

AN_K_Nat AN_K_visitNat(AN_K_Nat arg, AN_K_Numeral (*acceptNumeral)(AN_K_Numeral))
{
  if (AN_K_isNatNat(arg)) {
    return AN_K_makeNatNat(
        acceptNumeral ? acceptNumeral(AN_K_getNatNumeral(arg)) : AN_K_getNatNumeral(arg));
  }
  if (AN_K_isNatMonus(arg)) {
    return AN_K_makeNatMonus(
        AN_K_visitNat(AN_K_getNatNat(arg), acceptNumeral));
  }
  if (AN_K_isNatBracketNat(arg)) {
    return AN_K_makeNatBracketNat(
        AN_K_visitNat(AN_K_getNatNat(arg), acceptNumeral));
  }
  if (AN_K_isNatDefault(arg)) {
    return AN_K_makeNatDefault(
        AN_K_visitNat(AN_K_getNatNat(arg), acceptNumeral));
  }
  ATabort("not a Nat: %t\n", arg);
  return (AN_K_Nat)NULL;
}

/*}}}  */
/*{{{  AN_K_Int AN_K_visitInt(AN_K_Int arg, AN_K_Nat (*acceptNat)(AN_K_Nat)) */

AN_K_Int AN_K_visitInt(AN_K_Int arg, AN_K_Nat (*acceptNat)(AN_K_Nat))
{
  if (AN_K_isIntInt(arg)) {
    return AN_K_makeIntInt(
        acceptNat ? acceptNat(AN_K_getIntNat(arg)) : AN_K_getIntNat(arg));
  }
  if (AN_K_isIntUnaryPlus(arg)) {
    return AN_K_makeIntUnaryPlus(
        acceptNat ? acceptNat(AN_K_getIntNat(arg)) : AN_K_getIntNat(arg));
  }
  if (AN_K_isIntUnaryMinus(arg)) {
    return AN_K_makeIntUnaryMinus(
        acceptNat ? acceptNat(AN_K_getIntNat(arg)) : AN_K_getIntNat(arg));
  }
  if (AN_K_isIntPlus(arg)) {
    return AN_K_makeIntPlus(
        AN_K_visitInt(AN_K_getIntInt(arg), acceptNat));
  }
  if (AN_K_isIntMinus(arg)) {
    return AN_K_makeIntMinus(
        AN_K_visitInt(AN_K_getIntInt(arg), acceptNat));
  }
  if (AN_K_isIntTimes(arg)) {
    return AN_K_makeIntTimes(
        AN_K_visitInt(AN_K_getIntInt(arg), acceptNat));
  }
  if (AN_K_isIntBracketInt(arg)) {
    return AN_K_makeIntBracketInt(
        AN_K_visitInt(AN_K_getIntInt(arg), acceptNat));
  }
  ATabort("not a Int: %t\n", arg);
  return (AN_K_Int)NULL;
}

/*}}}  */

/*}}}  */
