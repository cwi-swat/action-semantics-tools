
#include "jmpstack.h"
#include <stdlib.h>

JmpItem new_jmp_item(jmp_buf buf) {
	JmpItem j = (JmpItem)malloc(sizeof(struct _jmpitem));
	j->buf = buf;
	j->next = NULL;
	return j;
}

JmpStack new_jmp_stack() {
	JmpStack j = (JmpStack)malloc(sizeof(struct _jmpstack));
	j->top = NULL;
}

JmpStack push_jmp_item(JmpStack s, JmpItem j) {
	JmpItem temp = s->top;
	s->top = j;
	j->next = temp;
}

JmpItem pop_jmp_item(JmpStack s) {
	JmpItem temp = s->top;
	assert(s->top);
	s->top = s->top->next;
	return temp;
}


