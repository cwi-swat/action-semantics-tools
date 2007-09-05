
#ifndef _AN_STACK_H
#define _AN_STACK_H 1

#include <aterm2.h>

typedef ATermList AN_Stack;

#define AN_init_stack(stack) ((*(stack)=ATempty),ATprotect((ATerm*)(stack)))
#define AN_release_stack(stack) (ATunprotect((ATerm*)(stack)))

#define AN_push(s,d) ((s)=(AN_Stack)(ATinsert((ATermList)s,(ATerm)d)))
#define AN_drop(s) ((s)=(AN_Stack)(ATgetNext((ATermList)s)))
#define AN_top(s) ((ATgetFirst((ATermList)s)))

#define AN_copy_stack(s) (s)





#endif
