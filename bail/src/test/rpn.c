#include "rpn.h"
#include <abf.h>
#include <string.h>

static void RPN_compile_to_c(FILE *f, AIL_ByteCode bc, int *line);
static void RPN_print_instruction(FILE *f, ABF *abf);
static void RPN_compile_instruction(FILE *f, ABF *abf, int *line);

static char *RPN_opcode_strings[] = {
	[RPN_push_opcode] "push",
	[RPN_add_opcode] "add",
	[RPN_sub_opcode] "sub",
	[RPN_mul_opcode] "mul",
	[RPN_div_opcode] "div",
	[RPN_output_opcode] "output"
};

static void RPN_print_instruction(FILE *f, ABF *abf) {
  char op = abf_get_byte(*abf);
  fprintf(f, "@%x: %s ", *abf, RPN_getStringForOpcode(op));
  abf_skip_byte(*abf);
  switch (op) {
    case RPN_push_opcode: {
      ATfprintf(f,"%t", abf_get_aterm(*abf));
      abf_skip_aterm(*abf);
      break;
    }
   default: ;
  }
  fprintf(f, "\n");
}

static void RPN_compile_instruction(FILE *f, ABF *abf, int *line) {
  char op = abf_get_byte(*abf);
  fprintf(f, "l%d: RPN_perform_%s", *line, RPN_getStringForOpcode(op));
  *line += abf_byte_offset(*abf);
  abf_skip_byte(*abf);
  switch (op) {
    case RPN_push_opcode: {
      int len; char *s = ATwriteToSharedString(abf_get_aterm(*abf),&len);
      s = escape_quotes(s);
      fprintf(f,"(x, ATreadFromSharedString(\"%s\",%d));\\",s,len);
      *line += abf_aterm_offset(*abf);
      abf_skip_aterm(*abf);
      break;
    }
   default: fprintf(f,"(x);\\");
  }
  fprintf(f, "\n");
}

static void RPN_compile_to_c(FILE *f, AIL_ByteCode bc, int *line) {
  int size = AIL_getABFSize(bc);
  ABF abf = AIL_getABF(bc);
  ABF end = abf + size;
  while (abf < end)
    RPN_compile_instruction(f,&abf, line);
}

/* Public functions: */

char *RPN_getStringForOpcode(int op) {
  return RPN_opcode_strings[op];
}

void RPN_disassemble(FILE *f, AIL_ByteCode bc) {
  int size = AIL_getABFSize(bc);
  ABF abf = AIL_getABF(bc);
  ABF end = abf + size;
  while (abf < end)
    RPN_print_instruction(f,&abf);
}

void RPN_compile(FILE *f, AIL_ByteCode bc) {
  int line = 0;
  fprintf(f, "#define RPN_COMPILED_AIL 1\n\n");
  fprintf(f, "#define RPN_compiled_AIL(x,pc) {\\\n");
  fprintf(f, "  RPN_DECLARE_RPN_OPCODE_TABLE();\\\n");
  fprintf(f, "  RPN_compiled_code_starts: ;\\\n");
  RPN_compile_to_c(f, bc, &line);
  fprintf(f, "  RPN_compiled_code_ends: ;\\\n");
  fprintf(f, "  RPN_interpreter(x,pc);\\\n");
  fprintf(f, "}\n\n");

}

