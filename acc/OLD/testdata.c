
#include <stdio.h>
#include "accdata.h"
#include "accutils.h"

#define nl() printf("\n")
#define p(s,d) printf("%s: ",s);print_data(d);nl()

int main(void) {
  ACData d, d1, d2;
  if (sizeof(void*) != sizeof(int)) {
    printf("error"); return 1;}
  d = MAKE_INT(d, 12);
  p("12",d);
  d1 = MAKE_INT(d1, 13);
  p("13",d1);
  d2 = GIVE_PLUS(d2,d,d1);
  p("12 + 13", d2);
  d2 = GIVE_MINUS(d2,d,d1);
  p("12-13", d2);
  d2 = GIVE_MONUS(d2,d,d1);
  p("12-?13", d2);
  d2 = GIVE_TIMES(d2,d,d1);
  p("12*13", d2);
  d1 = MAKE_BOOL(d1,1);
l:  p("true",d1);
  d2 = GIVE_NOT(d2,d1);
  p("not true",d2);
  d1 = MAKE_ACTION(d1,l);
  p("l",d1);
  d2 = GIVE_PROVIDE(d2,d1);
  //p("provide",d2);
  return 0;
}
