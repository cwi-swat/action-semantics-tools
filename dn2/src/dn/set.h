
#ifndef __AN_SET_H
#define __AN_SET_H 1

#include <aterm2.h>
#include "bbtree.h"
#include "bool.h"
#include "int.h"

#define AN_SET_PATTERN "set(<term>)"

int AN_setElementComparator(ATerm a1, ATerm a2);

#define AN_make_set(t) (ATmake(AN_SET_PATTERN, t))

/* Data operations. */

#define AN_giveSet(d) (AN_make_set(ATmakeBBTree(d,ATemptyBBTree,ATemptyBBTree)))
#define AN_giveUnion(d1,d2) (AN_make_set(ATbbtreeUnion(AN_get_set(d1),AN_get_set(d2),\
                             &AN_setElementComparator)))
#define AN_giveIntersection(d1,d2) (AN_make_set(ATbbtreeIntersection(AN_get_set(d1),\
                                    AN_get_set(d2),&AN_setElementComparator)))
#define AN_giveDifference(d1,d2) (AN_make_set(ATbbtreeDifference(AN_get_set(d1),\
                                  AN_get_set(d2),&AN_setElementComparator)))
#define AN_giveMember(d1,d2) (AN_make_bool(ATbbtreeMember(AN_get_set(d1),d2,\
                              &AN_setElementComparator)))
#define AN_giveSize(d) (AN_make_int(ATbbtreeSize(AN_get_set(d))))

/* Checker. */

#define AN_isSet(d) (ATmatch(AN_SET_PATTERN, d))

/* Accessors. */
#define AN_get_set(d) (ATgetArgument((ATermAppl)d,0))

#endif
