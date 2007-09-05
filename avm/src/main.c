

#include "an2-ail.h"

int main(int argc, char **argv) {
  ATerm bos;
  AIL_ByteCode bc;
  ATinit(argc, argv, *bos);
  bc = AIL_readFromFile(stderr);
  

  return 0;
}
