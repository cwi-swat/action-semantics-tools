
#ifndef __AT_TREEMAP__H
#define __AT_TREEMAP__H

#include <aterm2.h>

typedef ATermAppl ATermTreeMap;
typedef ATermList ATermMapping;


#define AT_KEY_COMPARE(a1,a2) (a1 == a2 ? 0 :\
			   (a1 > a2 ? 1 : -1 ))

#ifndef AT_KEY_COMPARE
#error "Must define total order on aterms."
#endif

ATermTreeMap ATtreeMapEmpty();
ATermTreeMap ATmakeTreeMap(ATerm key, ATerm value);
ATermTreeMap ATtreeMapPut(ATermTreeMap map, ATerm key, ATerm value);
ATerm ATtreeMapGet(ATermTreeMap map, ATerm key);
ATermTreeMap ATtreeMapRemove(ATermTreeMap map, ATerm key);
ATermTreeMap ATtreeMapUnion(ATermTreeMap map1, ATermTreeMap map2);
ATermTreeMap ATtreeMapDifference(ATermTreeMap map1, ATermTreeMap map2);





