

#ifndef __AIL__H
#define __AIL__H 1

#include "aterm2.h"

typedef ATermBlob AIL_ByteCode;
typedef char* AIL_ByteArray;

#define AIL_getByteArray(bc) ((AIL_ByteArray)ATgetBlobData(bc))
#define AIL_getByteSize(bc) (ATgetBlobSize())

/* IO functions here. */

#endif
