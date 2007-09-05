
#ifndef __AT_BTREE__H
#define __AT_BTREE__H

#include <aterm2.h>

typedef ATermAppl ATermBTree;

#define AT_COMPARE(a1,a2) (a1 == a2 ? 0 :\
			   (a1 > a2 ? 1 : -1 ))

#ifndef AT_COMPARE
#error "Must define total order on aterms."
#endif

extern ATermBTree ATemptyTree;

ATermBTree ATmakeTree(ATerm elt, ATermBTree l, ATermBTree r);
ATbool




