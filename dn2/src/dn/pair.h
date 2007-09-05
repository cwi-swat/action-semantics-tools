
#ifndef __AN_PAIR_H
#define __AN_PAIR_H 1

#include <aterm2.h>

#define AN_PAIR_PATTERN "pair(<term>,<term>)"

#define AN_givePair(d1,d2) (ATmake(AN_PAIR_PATTERN,d1,d2))

#define AN_giveFirst(d) (ATgetArgument((ATermAppl)d,0))
#define AN_giveSecond(d) (ATgetArgument((ATermAppl)d,1))

#define AN_isPair(d) (ATmatch(d,AN_PAIR_PATTERN))

#endif
