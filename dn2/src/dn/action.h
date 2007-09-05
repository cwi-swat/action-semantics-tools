
#ifndef __AN_ACTION_H
#define __AN_ACTION_H 1

#include <aterm2.h>

#define AN_ACTION_PATTERN "action(<term>)"


/* This has to coincide with AIL_ByteCode. FIX! */
typedef ATermBlob AN_ActionCode;

#define AN_get_action_code_address(c) (ATgetBlobData(c))

#define AN_makeAction(blob) (ATmake(AN_ACTION_PATTERN,blob))

#define AN_get_action_value(d) (ATgetArgument((ATermAppl)(d),0))

#endif
