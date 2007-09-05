
#include "abfapi.h"
#include <an2-types.h>

#define an2_get_string_for_type(t) (an2_type_strings[(int)(t)])

char *an2_type_strings[] = {
  [AN2_EMPTY_TYPE] "empty",
  [AN2_INT_TYPE] "int",
  [AN2_BOOL_TYPE] "bool",
  [AN2_AGENT_TYPE] "agent",
  [AN2_ACTION_TYPE] "action",
  [AN2_BINDINGS_TYPE] "bindings",
  [AN2_CELL_TYPE] "cell",
  [AN2_MESSAGETAG_TYPE] "messagetag",
  [AN2_TOKEN_TYPE] "token",
  [AN2_LIST_TYPE] "list",
  [AN2_STATIC_ACTION_TYPE] "static_action",
  [AN2_PROVIDE_OP] "provide",
  [AN2_INDIVISIBLY_OP] "indivisibly",
  [AN2_THEN_OP] "then",
  [AN2_AND_THEN_OP] "and then",
  [AN2_AND_OP] "and",
  [AN2_EXCEPTIONALLY_OP] "exceptionally",
  [AN2_AND_EXCEPTIONALLY_OP] "and exceptionally",
  [AN2_OTHERWISE_OP] "otherwise",
  [AN2_HENCE_OP] "hence",
  [AN2_DATUM_CASTABLE_TYPE] "datum",
  [AN2_DATA_CASTABLE_TYPE] "data"
};



static char *avm_instruction_strings[] = {
	[avm_publish]            "publish",
	[avm_epublish]           "epublish",
	[avm_unpublish]          "unpublish",
	[avm_enter]              "enter",
	[avm_leave]              "leave",
	[avm_trye]               "trye",
	[avm_tryf]               "tryf",
	[avm_catche]             "catche",
	[avm_catchf]             "catchf",
	[avm_ende]               "ende",
	[avm_endf]               "endf",
	[avm_goto]               "goto",
	[avm_return]             "return",
	[avm_lock]               "lock",
	[avm_unlock]             "unlock",
	[avm_call]               "call",
	[avm_raise]              "raise",
	[avm_fail]               "fail",
	[avm_add]                "add",
	[avm_sub]                "sub",
	[avm_mul]                "mul",
	[avm_csub]               "csub",
	[avm_bind]               "bind",
	[avm_find]               "find",
	[avm_not]                "not",
	[avm_override]           "override",
	[avm_d_union]            "d_union",
	[avm_then]               "then",
	[avm_and_then]           "and_then",
	[avm_provide]            "provide",
	[avm_exceptionally]      "exceptionally",
	[avm_and_exceptionally]  "and_exceptionally",
	[avm_otherwise]          "otherwise",
	[avm_indivisibly]        "indivisibly",
	[avm_hence]              "hence",
	[avm_cast]               "cast",
	[avm_component]          "component",
	[avm_equals]             "equals",
	[avm_less_than]          "less_than",
	[avm_greater_than]       "greater_than",
	[avm_less_than_or_eq]    "less_than_or_eq",
	[avm_greater_than_or_eq] "greater_than_or_eq",
	[avm_push]               "push",
	[avm_copy]               "copy",
	[avm_create]             "create",
	[avm_inspect]            "inspect",
	[avm_destroy]            "destroy",
	[avm_update]             "update",
	[avm_activate]           "activate",
	[avm_deactivate]         "deactivate",
	[avm_send]               "send",
	[avm_receive]            "receive",
	[avm_time]               "time",
	[avm_agent]              "agent",
	[avm_scope]              "scope",
	[avm_random]             "random",
	[avm_const]              "const",
	[avm_merge]              "merge",
	[avm_emerge]             "emerge",
	[avm_pushref]            "pushref",
	[avm_gosub]              "gosub"
};

char *abf_get_string_for_instruction(int i) {
  return avm_instruction_strings[i];
}

ABF fread_abf(FILE *f, int byte_size) {
  ABF abf = (ABF)malloc(byte_size);
  int i;
  read_int(f, &(abf->magic)); 
  byte_size -= ABF_INT_SIZE;
  read_int(f, &(abf->token_table_size)); 
  byte_size -= ABF_INT_SIZE;
  abf->token_table = abf_alloc_token_table(abf->token_table_size);
  /* This can be one fread... */
  for (i = 0; i < abf->token_table_size; i++)
    read_byte(f, abf->token_table+i);
  byte_size -= abf->token_table_size;
  abf->instruction_table_size = byte_size;
  abf->instruction_table = abf_alloc_instruction_table(abf->instruction_table_size);
  fread(abf->instruction_table, ABF_BYTE_SIZE, abf->instruction_table_size,f);
  return abf;
}


void fprint_abf(FILE *f, ABF abf) {
  int i = 0; int val;
  ABFStream ins = abf_get_instruction_table(abf);
  while (i < abf_get_instruction_table_size(abf)) {
    fprintf(f, "%d: %s ", i, abf_get_string_for_instruction(ins[i]));
    switch (ins[i]) {
    case avm_goto:    fprintf(f, "#%d", abf_get_int(ins,++i)); i+=3; break;
    case avm_gosub:   fprintf(f, "#%d", abf_get_int(ins,++i)); i+=3; break;
    case avm_pushref: fprintf(f, "@%d", abf_get_int(ins,++i)); i+=3; break;
    case avm_push:    memcpy(&val, ins+i+2, ABF_INT_SIZE);
		      fprintf(f, "<%s,%d>", an2_get_string_for_type(ins[++i]), val);
		      i+=3; break;
    case avm_const:   memcpy(&val, ins+i+2, ABF_INT_SIZE);
                      fprintf(f, "<%d,%d>", an2_get_string_for_type(ins[++i]), val);
		      i+=3; break;
    case avm_trye:    fprintf(f, "#%d", abf_get_int(ins,++i)); i+=3; break;
    case avm_tryf:    fprintf(f, "#%d", abf_get_int(ins,++i)); i+=3; break;
    case avm_catche:  fprintf(f, "#%d", abf_get_int(ins,++i)); i+=3; break;
    case avm_catchf:  fprintf(f, "#%d", abf_get_int(ins,++i)); i+=3; break;
    case avm_cast:    fprintf(f, "%s", an2_get_string_for_type(ins[++i]));break;
    case avm_component: fprintf(f, "%d", abf_get_int(ins,++i)); i+=3; break;
    default: ;
    }
    fprintf(f, "\n");
    i++;
  }
}

      

  
