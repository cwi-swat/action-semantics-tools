#include "test.h"
#include <abf.h>

static void AN2_compile_to_c(FILE *f, AIL_ByteCode bc, int *line);
static void AN2_print_instruction(FILE *f, ABF *abf);
static void AN2_compile_instruction(FILE *f, ABF *abf, int *line);

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
	[AN2_frame_opcode] "frame",
	[AN2_enact_opcode] "enact",
	[AN2_raise_opcode] "raise",
	[AN2_throw_opcode] "throw",
	[AN2_fail_opcode] "fail",
	[AN2_merge_opcode] "merge",
	[AN2_emerge_opcode] "emerge",
	[AN2_push_opcode] "push",
	[AN2_epush_opcode] "epush",
	[AN2_drop_opcode] "drop",
	[AN2_edrop_opcode] "edrop",
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
	[AN2_tupleToList_opcode] "tupleToList",
	[AN2_debug_opcode] "debug",
	[AN2_yield_opcode] "yield"
};

static void AN2_print_instruction(FILE *f, ABF *abf) {
  char op = abf_get_byte(*abf);
  fprintf(f, "@%x: %s ", *abf, AN2_getStringForOpcode(op));
  abf_skip_byte(*abf);
  switch (op) {
    case AN2_abs_opcode: {
      AIL_ByteCode bc = AIL_readFromABF(*abf);
      AN2_disassemble(f, bc);
      AIL_skipInABF(*abf);
      break;
    }
    case AN2_prov_opcode: {
      ATfprintf(f,"%t", abf_get_aterm(*abf));
      abf_skip_aterm(*abf);
      break;
    }
    case AN2_eprov_opcode: {
      ATfprintf(f,"%t", abf_get_aterm(*abf));
      abf_skip_aterm(*abf);
      break;
    }
    case AN2_trye_opcode: {
      fprintf(f,"@%x", *abf + abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
    case AN2_tryf_opcode: {
      fprintf(f,"@%x", *abf + abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
    case AN2_catch_opcode: {
      fprintf(f,"@%x", *abf + abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
    case AN2_goto_opcode: {
      fprintf(f,"@%x", *abf + abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
    case AN2_frame_opcode: {
      fprintf(f,"@%x", *abf + abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
    case AN2_cast_opcode: {
      ATfprintf(f,"%t", abf_get_aterm(*abf));
      abf_skip_aterm(*abf);
      break;
    }
    case AN2_component_opcode: {
      fprintf(f,"%d", abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
    case AN2_yield_opcode: {
      fprintf(f,"@%x", *abf + abf_get_int(*abf));
      abf_skip_int(*abf);
      break;
    }
   default: ;
  }
  fprintf(f, "\n");
}

static void AN2_compile_instruction(FILE *f, ABF *abf, int *line) {
  char op = abf_get_byte(*abf);
  fprintf(f, "l%d: AN2_perform_%s", *line, AN2_getStringForOpcode(op));
  *line += abf_byte_offset(*abf);
  abf_skip_byte(*abf);
  switch (op) {
    case AN2_abs_opcode: {
      AIL_ByteCode bc = AIL_readFromABF(*abf);
      fprintf(f,"(x, ATmakeBlob(&&l%d));\\", *line);
      AN2_compile_to_c(f, bc,line);
      AIL_skipInABF(*abf);
      break;
    }
    case AN2_prov_opcode: {
      ATfprintf(f,"(x, %s);\\", ATwriteToString(abf_get_aterm(*abf)));
      *line += abf_aterm_offset(*abf);
      abf_skip_aterm(*abf);
      break;
    }
    case AN2_eprov_opcode: {
      ATfprintf(f,"(x, %s);\\", ATwriteToString(abf_get_aterm(*abf)));
      *line += abf_aterm_offset(*abf);
      abf_skip_aterm(*abf);
      break;
    }
    case AN2_trye_opcode: {
      fprintf(f,"(x,&&l%d);\\", *line+abf_get_int(*abf));
      *line += abf_int_offset(*abf);
      abf_skip_int(*abf);
      break;
    }
    case AN2_tryf_opcode: {
      fprintf(f,"(x,&&l%d);\\", *line+abf_get_int(*abf));
      *line += abf_int_offset(*abf);
      abf_skip_int(*abf);
      break;
    }
    case AN2_catch_opcode: {
      fprintf(f,"(x,&&l%d);\\", *line+abf_get_int(*abf));
      *line += abf_int_offset(*abf);
      abf_skip_int(*abf);
      break;
    }
    case AN2_goto_opcode: {
      fprintf(f,"(x,&&l%d);\\", *line+abf_get_int(*abf));
      *line += abf_int_offset(*abf);
      abf_skip_int(*abf);
      break;
    }
    case AN2_frame_opcode: {
      fprintf(f,"(x,&&l%d);\\", *line+abf_get_int(*abf));
      *line += abf_int_offset(*abf);
      abf_skip_int(*abf);
      break;
    }
    case AN2_cast_opcode: {
      ATfprintf(f,"(x, %s);\\", ATwriteToString(abf_get_aterm(*abf)));
      *line += abf_aterm_offset(*abf);
      abf_skip_aterm(*abf);
      break;
    }
    case AN2_component_opcode: {
      fprintf(f,"(x, %d);\\", abf_get_int(*abf));
      *line += abf_int_offset(*abf);
      abf_skip_int(*abf);
      break;
    }
    case AN2_yield_opcode: {
      fprintf(f,"(x,&&l%d);\\", *line+abf_get_int(*abf));
      *line += abf_int_offset(*abf);
      abf_skip_int(*abf);
      break;
    }
   default: fprintf(f,"(x);\\");
  }
  fprintf(f, "\n");
}

static void AN2_compile_to_c(FILE *f, AIL_ByteCode bc, int *line) {
  int size = AIL_getABFSize(bc);
  ABF abf = AIL_getABF(bc);
  ABF end = abf + size;
  while (abf < end)
    AN2_compile_instruction(f,&abf, line);
}

/* Public functions: */

char *AN2_getStringForOpcode(int op) {
  return AN2_opcode_strings[op];
}

void AN2_disassemble(FILE *f, AIL_ByteCode bc) {
  int size = AIL_getABFSize(bc);
  ABF abf = AIL_getABF(bc);
  ABF end = abf + size;
  while (abf < end)
    AN2_print_instruction(f,&abf);
}

void AN2_compile(FILE *f, AIL_ByteCode bc) {
  int line = 0;
  fprintf(f, "#define AN2_COMPILED_AIL 1\n\n");
  fprintf(f, "#define AN2_compiled_AIL(x,pc) {\\\n");
  fprintf(f, "  AN2_DECLARE_TEST_OPCODE_TABLE();\\\n");
  fprintf(f, "  AN2_compiled_code_starts: ;\\\n");
  AN2_compile_to_c(f, bc, &line);
  fprintf(f, "  AN2_compiled_code_ends: ;\\\n");
  fprintf(f, "  AN2_interpreter(x,pc);\\\n");
  fprintf(f, "}\n\n");

}

