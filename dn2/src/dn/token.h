
#ifndef __AN_TOKEN_H
#define __AN_TOKEN_H 1

#include "aterm2.h"

#define AN_TOKEN_PATTERN "token(<str>)"

#define AN_make_token(s) (ATmake(AN_TOKEN_PATTERN, s))

#define AN_isToken(d) (ATmatch(AN_TOKEN_PATTERN,s))

#define AN_get_token_value(d) (ATgetName(ATgetAFun((ATermAppl)ATgetArgument((ATermAppl)d,0))))

#endif
