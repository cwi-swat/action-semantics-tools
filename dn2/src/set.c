
#include "dn/set.h"


/* This works because equal ATerms have the same address. */

int AN_setElementComparator(ATerm a1, ATerm a2) {
  if (((int)a1) > ((int)a2))
    return 1;
  if (((int)a1) < ((int)a2))
    return -1;
  return 0;
}


