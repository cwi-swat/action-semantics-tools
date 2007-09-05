
#ifndef __AIL__H
#define __AIL__H 1

#include <abf.h>
#include <aterm2.h>

/* In the future we want to tag this blob. */
typedef ATermBlob AIL_ByteCode;

#define AIL_readFromABF(abf) ((ATermBlob)abf_get_aterm((abf)))
#define AIL_writeToABF(buf,bc) (abf_add_aterm((buf),(ATerm)(bc)))
#define AIL_skipInABF(abf) (abf_skip_aterm((abf)))
#define AIL_getABF(bc) (ATgetBlobData((ATermBlob)bc))
#define AIL_getABFSize(bc) (ATgetBlobSize((ATermBlob)bc))
#define AIL_makeByteCode(abf,n) (ATmakeBlob(n, abf))

#define AIL_readFromFile(f) ((ATermBlob)ATreadFromBinaryFile(f))
#define AIL_writeToFile(f,bc) (ATwriteToBinaryFile((ATerm)bc,f))

char* escape_quotes(const char *s);




#endif
