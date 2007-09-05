#include "TEST.h"
#include <abf.h>

static char *AN2_opcode_strings[] = {
	[AN2_abs_opcode] "abs",
	[AN2_prov_opcode] "prov",
	[AN2_eprov_opcode] "eprov",
	[AN2_publish_opcode] "publish",
	[AN2_epublish_opcode] "epublish",
	[AN2_unpublish_opcode] "unpublish",
	[AN2_enter_opcode] "enter",
	[AN2_leave_opcode] "leave",
	[AN2_trye_opcode] "trye",
	[AN2_tryf_opcode] "tryf",
	[AN2_catch_opcode] "catch",
	[AN2_goto_opcode] "goto",
	[AN2_return_opcode] "return",
	[AN2_lock_opcode] "lock",
	[AN2_unlock_opcode] "unlock",
	[AN2_call_opcode] "call",
	[AN2_enact_opcode] "enact",
	[AN2_raise_opcode] "raise",
	[AN2_throw_opcode] "throw",
	[AN2_fail_opcode] "fail",
	[AN2_merge_opcode] "merge",
	[AN2_emerge_opcode] "emerge",
	[AN2_push_opcode] "push",
	[AN2_epush_opcode] "epush",
	[AN2_copy_opcode] "copy",
	[AN2_ecopy_opcode] "ecopy",
	[AN2_create_opcode] "create",
	[AN2_inspect_opcode] "inspect",
	[AN2_destroy_opcode] "destroy",
	[AN2_update_opcode] "update",
	[AN2_activate_opcode] "activate",
	[AN2_deactivate_opcode] "deactivate",
	[AN2_send_opcode] "send",
	[AN2_receive_opcode] "receive",
	[AN2_time_opcode] "time",
	[AN2_agent_opcode] "agent",
	[AN2_scope_opcode] "scope",
	[AN2_random_opcode] "random",
	[AN2_add_opcode] "add",
	[AN2_sub_opcode] "sub",
	[AN2_mul_opcode] "mul",
	[AN2_csub_opcode] "csub",
	[AN2_bind_opcode] "bind",
	[AN2_find_opcode] "find",
	[AN2_not_opcode] "not",
	[AN2_override_opcode] "override",
	[AN2_d_union_opcode] "d_union",
	[AN2_then_opcode] "then",
	[AN2_and_then_opcode] "and_then",
	[AN2_and_opcode] "and",
	[AN2_provide_opcode] "provide",
	[AN2_exceptionally_opcode] "exceptionally",
	[AN2_and_exceptionally_opcode] "and_exceptionally",
	[AN2_otherwise_opcode] "otherwise",
	[AN2_indivisibly_opcode] "indivisibly",
	[AN2_hence_opcode] "hence",
	[AN2_cast_opcode] "cast",
	[AN2_component_opcode] "component",
	[AN2_eq_opcode] "eq",
	[AN2_lt_opcode] "lt",
	[AN2_gt_opcode] "gt",
	[AN2_leq_opcode] "leq",
	[AN2_geq_opcode] "geq",
	[AN2_tupleToList_opcode] "tupleToList"
}

AN2_print_instruction(FILE *f, ABF *abf) {
  char op = abf_get_byte(*abf);
  fprintf(f, "%u: %s ", *abf, AN2_getStringForOpcode(op));
  abf_skip_byte(*abf);
  switch (op) {
    case AN2_abs_opcode: {
      AN2_disassemble(f, &(AIL_readFromABF(*abf)));
      AIL_skipInABF(*abf);
      break;
    }
    case AN2_prov_opcode: {
      ATfprintf(f,"%t\n", abf_get_aterm(*abf));
      abf_skip_aterm(*abf);
      break;
    }
    case AN2_eprov_opcode: {
      ATfprintf(f,"%t\n", abf_get_aterm(*abf));
      abf_skip_aterm(*abf);
      break;
    }
    case AN2_trye_opcode: {
      fprintf(f,"@%u\n", *abf + abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
    case AN2_tryf_opcode: {
      fprintf(f,"@%u\n", *abf + abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
    case AN2_catch_opcode: {
      fprintf(f,"@%u\n", *abf + abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
    case AN2_goto_opcode: {
      fprintf(f,"@%u\n", *abf + abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
    case AN2_call_opcode: {
      fprintf(f,"@%u\n", *abf + abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
    case AN2_cast_opcode: {
      ATfprintf(f,"%t\n", abf_get_aterm(*abf));
      abf_skip_aterm(*abf);
      break;
    }
    case AN2_component_opcode: {
      fprintf(f,"%d\n", abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
   default: ;
  }
  fprintf(f, "\n");
}


char *AN2_getStringForOpcode(int op) {
  return AN2_opcode_strings[op];
}

void AN2_disassemble(FILE *f, AIL_ByteCode bc) {
  int size = AIL_getABFSize(bc);
  int ABF abf = AIL_getABF(bc);
  while (abf < abf+size)
    AN2_print_instruction(f,&abf);
}
