

#include "an2-ail.h"

int main(int argc, char **argv) {
  ATerm bos;
  AIL_ByteCode bc = NULL; FILE *f;
  ABF abf; int n, i;
  ATinit(argc, argv, &bos);
  f = fopen(argv[1], "r");
  bc = AIL_readFromFile(f);
  AN2_compile(stdout, bc);
  return 0;
}
