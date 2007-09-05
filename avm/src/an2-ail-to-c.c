

#include <stdio.h>
#include "an2-ail.h"

int main(int argc, char **argv) {
  ATerm bos;
  AIL_ByteCode bc;
  FILE *f;
  ATinit(argc, argv, &bos);
  f = fopen(argv[1], "r");
  bc = AIL_readFromFile(f);
  AN2_compile(stdout, bc);
  fclose(f);
  return 1;
}
