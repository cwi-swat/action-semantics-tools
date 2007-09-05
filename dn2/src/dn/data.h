
#ifndef __AN_DATA_H
#define __AN_DATA_H 1

#include <aterm2.h>

#include "list.h"

#define AN_TUPLE_PATTERN "[<list>]"

/* All aterms belong to the sort of Data */
#define AN_DATA_PATTERN "<term>"

/* Constructor. */

#define AN_emptyData ((ATerm)ATempty)

/* Operations. */

#define AN_giveRest(d) (ATgetNext(d))
#define AN_giveTupleToList(d) (AN_make_list(d))

#define AN_getDatumAt(d,n) (ATelementAt((ATermList)d,n-1))

#define AN_getDatum1(d) (ATgetFirst((ATermList)d))
#define AN_getDatum2(d) (ATgetFirst(ATgetNext((ATermList)d)))
#define AN_getDatum3(d) (ATgetFirst(ATgetNext(ATgetNext((ATermList)d))))

#define AN_eltAt(d,n) (ATelementAt((ATermList)d,n-1))

#define AN_elt1(d) (ATgetFirst((ATermList)d))
#define AN_elt2(d) (ATgetFirst(ATgetNext((ATermList)d)))
#define AN_elt3(d) (ATgetFirst(ATgetNext(ATgetNext((ATermList)d))))

#define AN_checkEquals(d1,d2) (ATisEqual(d1,d2))

/* Pat is assumed to be an ATerm (not a string). */
#define AN_giveThe(d,pat) (AN_match(d,pat))

#define AN_match(d,pat) (ATmatchTerm(d,pat,NULL)==ATtrue)

/* d1 and d2 must be at least datums. */
#define AN_concat(d1,d2) ({\
  ATerm __d1 = d1, __d2 = d2;\
  ATerm __m;\
  if (AN_isTuple(__d1) && AN_isTuple(__d2)) {\
    __m = ATconcat((ATermList)__d1,(ATermList)__d2);}\
  else if (AN_isTuple(__d1)) {\
    __m = ATappend((ATermList)__d1,__d2);}\
  else if (AN_isTuple(__d2)) {\
    __m = ATinsert((ATermList)__d2,__d1);}\
  else {\
    __m = (ATerm)ATmakeList2(__d1,__d2);}\
  __m;\
})

/* Checkers. */

#define AN_isData(d) (ATtrue)
#define AN_isTuple(d) (ATgetType(d)==AT_LIST)

/* Accessors. */

#define AN_getTupleLength(d) AN_get_tuple_length(d)
#define AN_get_tuple_length(d) (ATgetLength(d))


/* Utils */

/* This will become a real function... */

#define AN_fprintfData(f,form,args...) ATfprintf(f,form,## args)

#endif
