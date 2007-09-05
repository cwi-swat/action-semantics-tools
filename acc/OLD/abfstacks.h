
#ifndef __ABFSTACKS_H
#define __ABFSTACKS_H 1

#include "accdata.h"
#include "gstacks.h"

/* Declare actual stacktypes. */
typedef GSTACK(ACData, acstack) AVMDataStack;
typedef GSTACK(void*, acreturnstack) AVMReturnStack;
typedef GSTACK(jmpbuf, acexceptionstack) AVMExceptionStack;


#endif
