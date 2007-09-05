
#ifndef __AN_LIST__H 
#define __AN_LIST__H 1

#include <aterm2.h>

#define AN_LIST_PATTERN "list([<list>])"

/* Constructor */

#define AN_makeList(d) AN_make_list(ATmakeList1(d))
#define AN_make_list(l) (ATmake(AN_LIST_PATTERN, l))

/* Data operations. */

#define AN_giveHead(d) (ATgetFirst(AN_get_list(d))) 
#define AN_giveTail(d) (AN_make_list(ATgetNext(AN_get_list(d))))

#define AN_giveAppend(d1,d2) (AN_make_list(ATappend(AN_get_list(d1),d2)))
#define AN_giveInsert(d1,d2) (AN_make_list(ATinsert(AN_get_list(d1),d2)))

/* Accessors. */

#define AN_get_list(d) ((ATermList)ATgetArgument(d,0))

#endif
