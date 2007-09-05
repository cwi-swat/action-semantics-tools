
#ifndef __ABFSTACKS_H
#define __ABFSTACKS_H 1

#include "accdata.h"
#include "gstacks.h"
#include "avmexceptions.h"

/* Declare actual stacktypes. */
typedef GSTACK(ACData, avmstack) AVMDataStack;
typedef GSTACK(ACData, avmscopestack) AVMScopeStack;
typedef GSTACK(int, avmreturnstack) AVMReturnStack;
typedef GSTACK(int, avmexceptionstack) AVMExceptionStack;

#define INITIAL_DATA_STACK_SIZE       80
#define INITIAL_SCOPE_STACK_SIZE      40
#define INITIAL_RETURN_STACK_SIZE     80
#define INITIAL_EXCEPTION_STACK_SIZE  20

#define INIT_DATA_STACK(ds) GINIT(ds, INITIAL_DATA_STACK_SIZE, ACData)
#define INIT_SCOPE_STACK(ss) GINIT(ss, INITIAL_SCOPE_STACK_SIZE, ACData)
#define INIT_RETURN_STACK(rs) GINIT(rs, INITIAL_RETURN_STACK_SIZE, int)
#define INIT_EXCEPTION_STACK(es) GINIT(rs, INITIAL_EXCEPTION_STACK_SIZE, int)

#define GROW_DATA_STACK(ds) GGROW(ds, INITIAL_DATA_STACK_SIZE, ACData)
#define GROW_SCOPE_STACK(ss) GGROW(ss, INITIAL_SCOPE_STACK_SIZE, ACData)
#define GROW_RETURN_STACK(rs) GGROW(rs,INITIAL_RETURN_STACK_SIZE,int)
#define GROW_EXCEPTION_STACK(es) GGROW(es,INITIAL_EXCEPTION_STACJ_SIZE,int)


#define PUSH_DATA(ds,d) GPUSH(ds,d, GROW_SCOPE_STACK(ds))
#define POP_DATA(ds) GPOP(ds)
#define TOP_DATA(ds) GTOP(ds)

#define PUSH_SCOPE(ss,d) GPUSH(ss,d, GROW_SCOPE_STACK(ss))
#define POP_SCOPE(ss) GPOP(ss)
#define TOP_SCOPE(ss) GTOP(ss)

#define PUSH_RETURN(rs,l) GPUSH(rs,l,GROW_RETURN_STACK(rs))
#define POP_RETURN(rs) GPOP(rs)
#define TOP_RETURN(rs) GTOP(rs)

#define PUSH_EXC(es,j) GPUSH(es,j,GROW_EXCEPTION_STACK(rs))
#define POP_EXC(es) GPOP(es)
#define TOP_EXC(es) GTOP(es)


#endif
