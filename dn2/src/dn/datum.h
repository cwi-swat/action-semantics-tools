
#ifndef __AN_DATUM__H 
#define __AN_DATUM__H 1

#include <aterm2.h>

#define AN_DATUM_PATTERN "<appl>"

/* Checker. */

#define AN_isDatum(d) (ATmatch(d,AN_DATUM_PATTERN))


#endif
