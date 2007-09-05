
#include "acb.h"

ACB new_acb(ACData agent, ACData action) {
	ACCACB acb = (ACCACB)malloc(sizeof(struct accacb));
	INIT_EXCEPTION_STACK(acb->exception_stack);
	INIT_DATA_STACK(acb->result);
	INIT_DATA_STACK(acb->data);
	acb->data = ATmakeList0();
	acb->scope = ATmakeList0();
	acb->saved_data = ATmakeList0();
	acb->saved_scope = ATmakeList0();
	ATprotect(&(acb->result));
	ATprotect(&(acb->data));
	ATprotect(&(acb->scope));
	ATprotect(&(acb->saved_data));
	ATprotect(&(acb->saved_scope));
	acb->tagged_buffer = ATtableCreate(100, 80);
	acb->agent = agent;
	acb->action = action;
	ATprotect(&(acb->agent));
	ATprotect(&(acb->action));
	acb->return_stack.top = NULL;
	acb->exit_status = NORMAL_OUTCOME;
	acb->prev = NULL;
	return acb;
}
