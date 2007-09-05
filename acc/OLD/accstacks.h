#ifndef __ACCSTACKS_H
#define __ACCSTACKS_H 1

#include <setjmp.h>
#include "accdata.h"
#include "gstacks.h"

/* Declare actual stacktypes. */
typedef GSTACK(ACData, accstack) ACCDataStack;
typedef GSTACK(ACData, accscopestack) ACCScopeStack;
typedef GSTACK(int, accsavestack) ACCSaveStack;
typedef GSTACK(void*, accreturnstack) ACCReturnStack;
typedef GSTACK(jmpbuf, accexceptionstack) ACExceptionStack;

#define INITIAL_DATA_STACK_SIZE 40
#define INITIAL_SCOPE_STACK_SIZE 40
#define INITIAL_SAVE_STACK_SIZE 40
#define INITIAL_RETURN_STACK_SIZE 80
#define INITIAL_EXCEPTION_STACK_SIZE 10

#define INIT_DATA_STACK(ds) GINIT(ds, INITIAL_DATA_STACK_SIZE, ACData)
#define INIT_SCOPE_STACK(ss) GINIT(ss, INITIAL_SCOPE_STACK_SIZE, ACData)
#define INIT_SAVE_STACK(ss) GINIT(ss, INITIAL_SAVE_STACK_SIZE, int)
#define INIT_RETURN_STACK(rs) GINIT(rs, INITIAL_RETURN_STACK_SIZE, void*)
#define INIT_EXCEPTION_STACK(es) GINIT(rs, INITIAL_EXCEPTION_STACK_SIZE, jmpbuf)

#define GROW_DATA_STACK(ds) GGROW(ds, INITIAL_DATA_STACK_SIZE, ACData)
#define GROW_SCOPE_STACK(ss) GGROW(ss, INITIAL_SCOPE_STACK_SIZE, ACData)
#define GROW_SAVE_STACK(ss) GGROW(ss, INITIAL_SAVE_STACK_SIZE, int)
#define GROW_RETURN_STACK(rs) GGROW(rs,INITIAL_RETURN_STACK_SIZE,void*)
#define GROW_EXCEPTION_STACK(es) GGROW(es,INITIAL_EXCEPTION_STACK_SIZE,jmpbuf)

#define PUSH_DATA(ds,d) GPUSH(ds,d, GROW_DATA_STACK(ds))
#define POP_DATA(ds) GPOP(ds)
#define TOP_DATA(ds) GTOP(ds)

#define PUSH_SCOPE(ss,d) GPUSH(ss,d, GROW_SCOPE_STACK(ss))
#define POP_SCOPE(ss) GPOP(ss)
#define TOP_SCOPE(ss) GTOP(ss)

#define PUSH_SAVE(ss,d) GPUSH(ss,d, GROW_SAVE_STACK(ss))
#define POP_SAVE(ss) GPOP(ss)
#define TOP_SAVE(ss) GTOP(ss)

#define PUSH_LABEL(rs,l) GPUSH(rs,l,GROW_RETURN_STACK(rs))
#define POP_LABEL(rs) GPOP(rs)
#define TOP_LABEL(rs) GTOP(rs)

#define PUSH_LJMP(es,j) GPUSH(es,j,GROW_EXCEPTION_STACK(rs))
#define POP_LJMP(es) GPOP(es)
#define TOP_LJMP(es) GTOP(es)

#endif
