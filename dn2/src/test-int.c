
#include "dn/int.h"
#include "dn/token.h"
#include "dn/bindings.h"

int main(int argc, char **argv) {
  ATerm bottomOfStack;
  ATerm a, b, c, d, e;
  int n;
  ATinit(argc, argv, &bottomOfStack);
  ATbbtreeInit();
  a = AN_make_int(2398);
  b = AN_make_int(6348764);
  fprintf(stderr, "%d\n", AN_get_int_value(a));
  c = AN_givePlus(a,b);
  ATwarning("a   = %t\n", a);
  ATwarning("b   = %t\n", b);
  ATwarning("a+b = %t\n", c);
  d = ATparse("<appl(<term>)>");
  ATwarning("d   = %t\n", d);
  fprintf(stderr, "tostring: %s\n", ATwriteToString(d));

  if (ATmatchTerm(b,d, NULL, NULL)) {
    fprintf(stderr, "yes\n");
    fflush(stderr);
  }
  
  {
    ATerm a, b, c, d, e;
    a = AN_make_int(123);
    ATwarning("%t\n", a);
    b = AN_make_token("barf");
    ATwarning("%t\n", b);
    c = AN_giveBinding(b, a);
    //c = AN_make_binding(b, a);
    ATwarning("%t\n", c);
    d = AN_make_int(321);
    e = AN_giveBinding(b, d);
    c = AN_giveOverriding(c, e);
    ATwarning("%t\n", c);
    a = AN_giveBound(c, b);
    ATwarning("%t\n", a);

  }

  return 0;
}
