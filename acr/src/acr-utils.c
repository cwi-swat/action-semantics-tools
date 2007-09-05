
#include "acr-utils.h"
#include <stdio.h>
#include <string.h>

void ACR_debug(char *s) {
  fprintf(stderr, "debug: %s\n", s);
}

int ACR_NatConToInt(ANK_NatCon natcon) {
  char *s = ATgetName(ATgetAFun(natcon));
  int len = strlen(s);
  char *buf;  int n;
#ifdef DEBUG
  ATwarning("s = %s\n",s);
  ATwarning("len = %d\n",len);
#endif
  buf = alloca(len+1);
  strncpy(buf,s, len);
  n = atoi(buf);
#ifdef DEBUG
  ATwarning("n = %d\n",n);
#endif
  return n;
}

AN2Type ACR_dataSortToAN2Type(ANK_DataSort ds) {
  //if (ANK_isValidDataSort(ds) == ATfalse)
  //  ATabort("Invalid datasort: %t.\n", (ATerm)ds);
  if (ANK_isDataSortSortname(ds) == ATtrue) {
    ANK_SortName sort = ANK_getDataSortSortName(ds);
#ifdef DEBUG
  ATwarning("sort = %t\n",sort);
#endif
    if (ANK_isSortNameData(sort))
      return AN2_DATA_CASTABLE_TYPE;
    if (ANK_isSortNameDatum(sort))
      return AN2_DATUM_CASTABLE_TYPE;
    if (ANK_isSortNameBindable(sort))
      return AN2_DATUM_CASTABLE_TYPE;
    if (ANK_isSortNameBindings(sort))
      return AN2_BINDINGS_TYPE;
    if (ANK_isSortNameAgent(sort))
      return AN2_AGENT_TYPE;
    if (ANK_isSortNameCell(sort))
      return AN2_CELL_TYPE;
    if (ANK_isSortNameStorable(sort))
      return AN2_DATUM_CASTABLE_TYPE;
    if (ANK_isSortNameAction(sort))
      return AN2_ACTION_TYPE;
    if (ANK_isSortNameToken(sort))
      return AN2_TOKEN_TYPE;
    if (ANK_isSortNameString(sort))
      return AN2_STRING_TYPE;
    if (ANK_isSortNameMessage(sort))
      return AN2_DATUM_CASTABLE_TYPE;
    if (ANK_isSortNameMessageTag(sort))
      return AN2_MESSAGETAG_TYPE;
    if (ANK_isSortNameList(sort))
      return AN2_LIST_TYPE;
    if (ANK_isSortNameBool(sort))
      return AN2_BOOL_TYPE;
    if (ANK_isSortNameNat(sort))
      return AN2_INT_TYPE;
    if (ANK_isSortNamePos(sort))
      return AN2_INT_TYPE;
    if (ANK_isSortNameInt(sort))
      return AN2_INT_TYPE;
    ATabort("SortName %t not supported.\n", (ATerm)sort);
  }
  if (ANK_isDataSortOutcome(ds) == ATtrue)
    return AN2_ACTION_TYPE;
  ATabort("Datasort %t not supported.\n", (ATerm)ds);
  return (AN2Type)NULL;
}


AN2Data ACR_dataToAN2Data(ANK_Data data) {
  if (an2_is_valid_data((AN2Data)data))
    return (AN2Data)data;
#ifdef DEBUG
  ATwarning("data: %t\n",data);
#endif
  if (ANK_isDataDatum(data)) {
    ANK_Datum u = ANK_getDataDatum(data);
#ifdef DEBUG
  ATwarning("datum: %t\n",u);
#endif
    if (ANK_isDatumAgent(u)) {
      ATabort("Non-supported datum: %t.\n", (ATerm)u);
    }
    if (ANK_isDatumCell(u)) {
      ATabort("Non-supported datum: %t.\n", (ATerm)u);
    }
    if (ANK_isDatumAction(u)) {
      ANK_Action a = ANK_getDatumAction(u);
      /* We don't want a Blob here. */
      return (AN2Data)an2_set_type(a,AN2_ACTION_TYPE);
    }
    if (ANK_isDatumToken(u)) {
      ANK_Token tk = ANK_getDatumToken(u);
      ANK_String s = ANK_getTokenString(tk);
      AN2Data d; char *str;
#ifdef DEBUG
      ATwarning("token: %t\n",tk);
#endif
      str = ANK_StringToStr(s);
#ifdef DEBUG
      ATwarning("string: %s\n",str);
#endif
      d = an2_make_token(str);
#ifdef DEBUG
      ATwarning("d: %t\n",d);
#endif
      return (AN2Data)d;
    }
    if (ANK_isDatumMessageTag(u)) {
      ANK_MessageTag mt = ANK_getDatumMessageTag(u);
      ANK_Token tk = ANK_getMessageTagToken(mt);
      ANK_String s = ANK_getTokenString(tk);
      return (AN2Data)an2_make_messagetag(an2_make_token(ANK_StringToStr(s)));
    }
    if (ANK_isDatumList(u)) {
      ATabort("Non-supported datum: %t.\n", (ATerm)u);
    }
    if (ANK_isDatumInt(u)) {
      ANK_Int n = ANK_getDatumInt(u);
      if (ANK_hasIntNat(n)) {
	ANK_Nat nat = ANK_getIntNat(n);
	ANK_Numeral num = ANK_getNatNumeral(nat);
	ANK_NatCon natcon = ANK_getNumeralNatCon(num);
	int i = ACR_NatConToInt(natcon);
	if (ANK_isIntUnaryMinus(n))
	  return an2_make_int(-i);
	return an2_make_int(i);
      }
      ATabort("Non-supported Int: %t.\n", (ATerm)n);
    }
  }
  if (ANK_isDataDataconst(data)) {
    ANK_DataConst c = ANK_getDataDataConst(data);
    if (ANK_isDataConstTrue(c))
      return an2_make_bool(1);
    if (ANK_isDataConstFalse(c))
      return an2_make_bool(0);
    if (ANK_isDataConstNoBindings(c))
      return an2_make_no_bindings();
    ATabort("Invalid DataConst: %t.\n", (ATerm)c);
  }
  if (ANK_isDataEmpty(data)) {
    return an2_make_empty();
  }
  if (ANK_isDataTuple(data)) {
    AN2Tuple tuple = an2_empty_tuple();
    ANK_Data head = ANK_getDataHead(data);
    ANK_DataTail tail = ANK_getDataTail(data);
    tuple = an2_insert_in_tuple(tuple, ACR_dataToAN2Data(head));
#ifdef DEBUG
    ATwarning("tuple: %t\n",tuple);
#endif
    head = ANK_getDataTailHead(tail);
    tuple = an2_append_to_tuple(tuple, ACR_dataToAN2Data(head));    
#ifdef DEBUG
    ATwarning("\n\n\n\n\ntuple: %t\n",tuple);
#endif
    tail = ANK_getDataTailTail(tail);
#ifdef DEBUG
    ATwarning("\n\n\n\ntail: %t\n",tail);
#endif
    while (ANK_hasDataTailTail(tail) == ATtrue) {
      head = ANK_getDataTailHead(tail);
      tuple = an2_append_to_tuple(tuple, ACR_dataToAN2Data(head));
      tail = ANK_getDataTailTail(tail);
    }
    return (AN2Data)tuple;
  }
  ATabort("Invalid Data: %t.\n", (ATerm)data);
  return (AN2Data)NULL;
}
