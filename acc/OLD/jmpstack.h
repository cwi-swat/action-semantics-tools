

#ifndef __JMPSTACK_H
#define __JMPSTACK_H 1

#include <setjmp.h>
#include <assert.h>

typedef struct _jmpitem  {
	jmp_buf buf;
	struct _jmpitem *next;
} *JmpItem;

typedef struct _jmpbufstack {
	JmpItem top;
} *JmpStack;

/*#define new_jmp_buf (*((jmp_buf*)malloc(sizeof(jmp_buf))))*/

/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
JmpItem new_jmp_item(jmp_buf buf);

/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
JmpStack new_jmp_stack();


/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
JmpStack push_jmp_item(JmpStack s, JmpItem j);


/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
JmpItem pop_jmp_item(JmpStack s);


/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
#define top_jmp_item(s) (s->top)






#endif
