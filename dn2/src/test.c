

#include <aterm2.h>

int main(int argc, char **argv) {
  ATerm bottomOfStack;
  ATerm t, t1, t2, t3;
  ATinit(argc, argv, &bottomOfStack);
  t = ATmake("int(434)");
  t = ATsetAnnotation(t,ATmake("storable"), ATmake("true"));
  ATfprintf(stderr, "%t\n", t);
  t1 = ATmake("[<list>]", ATmakeList1(ATmakeInt(4)));
  ATfprintf(stderr, "%t\n", t1);
  if (ATmatch(t1, "[<list>]")) {
    fprintf(stderr, "yes");
  }
  return 0;
}
