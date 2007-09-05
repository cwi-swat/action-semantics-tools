
#include "an2-ail.h"
#include "support/machine.h"

#include "fib-iter.action.c"

int main(int argc, char **argv) {
  AN2_DECLARE_AN2_AIL_OPCODE_TABLE();
  ATerm bos; 
  AIL_ByteCode bc = NULL; FILE *f;
  AN_Machine m;
  ABF abf; int n, i;
  char buf[256];
  AN_init(argc, argv, &bos);

  n = atoi(argv[1]);

  AN_alloc_machine(&m);

  AN_init_machine(&m);
  AN_load_program(m,bc, &&AN2_compiled_code_starts,
		  &&AN2_compiled_code_ends,&&THE_END);
  AN_machine_nput(m,AN_make_int(n));
  AN_machine_npublish(m);

  AN2_compiled_AIL(m,AN_machine_get_pc(m));

 THE_END:
  AN_fprint_debug_info(stderr,m);


  return 0;
}
