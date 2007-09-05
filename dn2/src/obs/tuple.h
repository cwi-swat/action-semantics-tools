
#ifndef __AN_TUPLE_H
#define __AN_TUPLE_H 1

#include <aterm2.h>

#include "list.h"
#include "datum.h"

#define AN_TUPLE_PATTERN "[<list>]"

/* Constructor */
#define AN_makeTuple(d) (ATmake(AN_TUPLE_PATTERN, (ATerm)ATmakeList1(d)))

/* Operations. */

#define AN_giveRest(d) (ATgetNext(d))
#define AN_merge(d1,d2) (ATconcat(d1,d2))
#define AN_tupleToList(d) (AN_make_list(d))


/* Checkers. */

#define AN_isTuple(d) (ATmatch(d, AN_TUPLE_PATTERN))


/* Accessors. */

#define AN_getElement(d,n) (ATelementAt(d,n-1))

#define AN_getElement1(d) (ATgetFirst(d))
#define AN_getElement2(d) (ATgetFirst(ATgetNext(d)))
#define AN_getElement3(d) (ATgetFirst(ATgetNext(ATgetNext(d))))

#define AN_getTupleSize(d) (ATgetLength(d))

#endif
