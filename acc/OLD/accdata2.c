
#include "accdata2.h"
#include <stdio.h>

void print_2composite(char *s, ACData d) {
  printf("%s(",s);
  print_ac_data(get_left_action(d));
  printf(", ");
  print_ac_data(get_right_action(d));
  printf(")");
}
  
void print_bindings(ACData bs) {
  int i;
  printf("[");
  for (i = 1; i <= get_bindings_size(bs); i++) {
    printf("<");
    print_ac_data(get_bindings_token(bs,i));
    printf(",");
    print_ac_data(get_bindings_data(bs,i));
    printf(">");
    if (i < get_bindings_size(bs))
      printf(",");
  }
  printf("]");
}

void print_tuple(ACData t) {
  int i;
  printf("(");
  for (i = 1; i <= get_tuple_size(t); i++) {
    print_ac_data(give_tuple_component(t,i));
    if (i < get_tuple_size(t))
      printf(", ");
  }
  printf(")");
}

void print_ac_data(ACData d) {
  switch(type_of(d)) {
  case PROVIDE_OP: 
    printf("provide("); 
    print_ac_data(get_provide_arg(d));
    printf(")");
    break;
  case INDIVISIBLY_OP: 
    printf("indivisibly(");
    print_ac_data(get_indivisibly_arg(d));
    printf(")");
    break;
  case THEN_OP:
    print_2composite("then",d);
    break;
  case AND_THEN_OP:
    print_2composite("andthen",d);
    break;
  case AND_OP:
    print_2composite("and",d);
    break;
  case EXCEPTIONALLY_OP:
    print_2composite("exceptionally",d);
    break;
  case AND_EXCEPTIONALLY_OP:
    print_2composite("andexceptionally",d);
    break;
  case OTHERWISE_OP:
    print_2composite("otherwise",d);
    break;
  case HENCE_OP:
    print_2composite("hence",d);
    break;
  case UNDEF_TYPE:
    printf("UNDEF");
    break;
  case INT_TYPE:
    printf("%d", get_int_int(d));
    break;
  case BOOL_TYPE:
    printf("%s", get_bool_int(d) ? "true" : "false");
    break;
  case TUPLE_TYPE:
    print_tuple(d);
    break;
  case AGENT_TYPE:
    printf("$%d", get_agent_int(d));
    break;
  case AVM_ACTION_TYPE:
    printf("avm-action(%x)", get_action_address(d));
    break;
  case ACC_ACTION_TYPE:
    printf("acc-action(%x)", get_action_label(d));
    break;
  case BINDINGS_TYPE:
    print_bindings(d);
    break;
  case CELL_TYPE:
    printf("@%d", get_cell_int(d));
    break;
  case MESSAGETAG_TYPE:
    printf("<"); 
    print_ac_data(get_messagetag_data(d));
    printf(">");
    break;
  case TOKEN_TYPE:
    printf("\"%s\"", get_token_string(d));
    break;
  case EXCEPTION:
    printf("EXCEPTION{");
    print_ac_data(get_data(d));
    printf("}");
    break;
  case FAILURE:
    printf("FAILURE");
    break;
  case LIST_TYPE:
    printf("[");
    if (get_first(d) != NULL)
      print_ac_data(get_first(d));
    if (get_next(d) != NULL) {
      printf(",");
      print_ac_data(get_next(d));
    }
    else
      print_ac_data(get_next(d));
    printf("]");
    break;
  case TAGGEDBUFFERS_TYPE:
  default: ;
  }
}

/*
inline ATermInt give_bound(ATermList bs, ATermAppl tk) {
  ATermAppl b; ACData d;
  while (!ATisEmpty(bs)) {
    b = (ATermAppl)ATgetFirst(bs);
    if (ATequal(ATargumentAt(b,0),(ATerm)tk))
      return (ATermInt)ATargumentAt(b,1);
    bs = ATgetNext(bs);
  }
  return ATmakeInt(0);
}

inline ATermList give_disjoint_union(ATermList bs1, ATermList bs2) {
  ATermList new_bs = bs1;
  ATermList temp_bs;
  ATermAppl b1, b2;
  while (!ATisEmpty(bs1)) {
    b1 = (ATermAppl)ATgetFirst(bs1);
    temp_bs = bs2;
    while (!ATisEmpty(temp_bs)) {
      ATermAppl b2 = (ATermAppl)ATgetFirst(temp_bs);
      if (ATequal(ATargumentAt(b1,0),ATargumentAt(b2,0))) {
	new_bs = ATremoveElement(bs1, b1);
      }
      new_bs = ATinsert(bs1, b2);
      temp_bs = ATgetNext(temp_bs);
    }
    bs1 = ATgetNext(bs1);
  }
  return new_bs;
}
	

*/



