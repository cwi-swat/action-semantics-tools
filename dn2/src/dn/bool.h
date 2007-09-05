
#ifndef __AN_BOOL_H
#define __AN_BOOL_H 1

#include <aterm2.h>

#define AN_BOOL_PATTERN "bool(<int>)"

/* Constructor. */
#define AN_make_bool(n) (ATmake(AN_BOOL_PATTERN, n))

/* Data operations. */

#define AN_giveNot(d) (AN_make_bool(!AN_get_bool_value(d)))

/* Checker. */

#define AN_isBool(d) (ATmatch(d,AN_BOOL_PATTERN))

/* Accessors. */
#define AN_get_bool_value(d) (ATgetInt((ATermInt)ATgetArgument((ATermAppl)d,0)))

#endif
