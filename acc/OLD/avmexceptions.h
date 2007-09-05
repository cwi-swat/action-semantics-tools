
#ifndef __AVMEXCEPTIONS_H
#define __AVMEXCEPTIONS_H 1

#include "accdata.h"

typedef struct avmexception {
  int type;
  int address;
} *AVMException;

#define EXCEPTIONAL 0
#define FAILED      1

#define NEW_EXCEPTION() ((AVMException)AC_ALLOC(sizeof(struct avmexception)))
#define MAKE_EXCEPTION(e,t,n) (e->type=t,e->address=n)
#define make_exceptional(e,n) (MAKE_EXCEPTION(e, EXCEPTIONAL, n))
#define make_failed(e,n) (MAKE_EXCEPTION(e, FAILED, n))

#endif
