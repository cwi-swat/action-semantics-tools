
#include "an2-ail.h"
#include "support/machine.h"

int main(int argc, char **argv) {
  AN2_DECLARE_AN2_AIL_OPCODE_TABLE();
  ATerm bos; 
  AIL_ByteCode bc = NULL; FILE *f;
  AN_Machine m;
  ABF abf; int n, i;
  char buf[256];
  AN_init(argc, argv, &bos);
  f = fopen(argv[1], "r");
  bc = AIL_readFromFile(f);
  fclose(f);

  n = atoi(argv[2]);

  AN_alloc_machine(&m);

  AN_init_machine(&m);
  AN_load_ail_program(m,bc, &&THE_END);
  AN_machine_nput(m,AN_make_int(n));
  AN_machine_npublish(m);

  //AN2_disassemble(stderr,bc);

/*   sprintf(buf, "%s.c", argv[1]);  */
/*   f = fopen(buf, "w");  */
/*   AN2_compile(f, bc); */
/*   fclose(f);  */
  
  goto AN2_start;

  AN2_interpreter(m,AN_machine_get_pc(m));

 THE_END:
  //AN_fprint_debug_info(stderr,m);
  AN_fprintfData(stderr, "%t\n", AN_machine_nget(m));
  AN_fprint_store(stderr, AN_machine_get_store(m));

  return 0;
}
