
#ifndef __AN_MAP_H
#define __AN_MAP_H 1

#include <aterm2.h>

#define AN_MAP_PATTERN "map(<term>)"

/* Constructors. */
#define AN_emptyMap() (AN_make_map(ATdictCreate()))
#define AN_make_map(d) (ATmake(AN_MAP_PATTERN,d))

/* Data operations. */
#define AN_givePut(d1,d2,d3) (AN_make_map(ATdictPut(AN_get_dict(d1),d2,d3)))

#define AN_giveGet(d1,d2) (AN_make_map(ATdictGet(AN_get_dict(d1),d2))

#define AN_giveRemove(d1,d2) (AN_make_map(ATdictRemove(AN_get_dict(d1),d2))

/* Accessors. */

#define AN_get_dict(d) (ATgetArgument((ATermAppl)d,0))


#endif
