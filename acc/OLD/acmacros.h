
#ifndef __ACMACROS_H
#define __ACMACROS_H

#include <aterm2.h>
#include "acb.h"
#include "sched.h"

#define JMP_EXCEPTIONAL 1
#define JMP_FAILED 2
#define JMP_YIELD 3

#define pop(l) (l = ATremoveElementAt(l,0))
#define top(l) (ATgetFirst(l))
#define push(l,t) (l = ATinsertElementAt(l,t,0))

Schedule the_schedule;
Schedule defunct;
Storage store;

int cell_counter = 0;
int agent_counter = 0;

/* One global temporary variable!!!! */
ATerm temp;

#define NEW_AGENT() (ACmakeAgent(agent_counter++))

#define CURRENT (the_schedule.last)
#define HANDLER (top_jmp_item(CURRENT->exception_stack) != NULL ? \
                (top_jmp_item(CURRENT->exception_stack))->buf : NULL))

#define PUSH_RESULT(d) (push(CURRENT->result, d))
#define POP_RESULT(d) (pop(CURRENT->result))
#define RESULT() (top(CURRENT->result))
#define PUSH_DATA(d) (push(CURRENT->data, d))
#define POP_DATA() (pop(CURRENT->data))
#define DATA() (top(CURRENT->data))
#define PUSH_SCOPE(d) (push(CURRENT->scope, d))
#define POP_SCOPE(d) (pop(CURRENT->scope))
#define SCOPE() (top(CURRENT->scope))
#define MERGE() ()
#define NEW_TUPLE() (ACmakeTuple())
#define JUMP(l) (goto l)
#define NODATA (NULL)
#deinfe NOP() (;)
#define CREATE(d) (temp = ACmakeCell(cell_counter++), \
                   ATtablePut(store, temp, d), temp)
#define DESTROY(c) \
{\
  if(!(ATtableGet(store, c))) RAISE_EXCEPTIONAL(NODATA); \
  ATtableRemove(store, c); \
}
#define UPDATE(c,d) \
{\
  if(!(ATtableGet(store, d))) RAISE_EXCEPTIONAL(NODATA); \
  ATtablePut(store, c, d); \
}
#define INSPECT(c) (\
  (!(ATtableGet(store, c))) ? (RAISE_EXCEPTIONAL(NODATA), NULL) : \
  ATtableGet(store, c))


#define ROTATE() (rotate(the_schedule))


#define SAVE_ENVIRONMENT() \
{\
  push(CURRENT->saved_scope, CURRENT->scope);\
  push(CURRENT->saved_data, CURRENT->data);\
}

#define RESTORE_ENVIRONMENT() \
{\
  CURRENT->scope = top(CURRENT->saved_scope);\
  pop(CURRENT->saved_scope);\
  CURRENT->data = top(CURRENT->saved_data);\
  pop(CURRENT->saved_data);\
}

#define CATCH_EXCEPTIONALLY(label) \
{\
  push(CURRENT->exception_stack, new_jmp_item());\
  switch (setjmp(HANDLER)) {\
  case JMP_EXCEPTIONAL: {\
    RESTORE_ENVIRONMENT();\
    pop_jmp_item(CURRENT->exception_stack);\
    push(CURRENT->data, top(CURRENT->result));\
    pop(CURRENT->result);\
    goto label;\
  }\
  case JMP_FAILED: {\
    pop_jmp_item(CURRENT->exception_stack);\
    longjmp(top_jmp_item(CURRENT->exception_stack));\
  }\
  default: SAVE_ENVIRONMENT();\
  }\
}

#define CATCH_AND_EXCEPTIONALLY(label) \
{\
  push(CURRENT->exception_stack, new_jmp_item());\
  switch (setjmp(HANDLER)) {\
  case JMP_EXCEPTIONAL: {\
    RESTORE_ENVIRONMENT();\
    pop_jmp_item(CURRENT->exception_stack);\
    goto label;\
  }\
  case JMP_FAILED: {\
    pop_jmp_item(CURRENT->exception_stack);\
    longjmp(top_jmp_item(CURRENT->exception_stack));\
  }\
  default: SAVE_ENVIRONMENT();\
  }\
}

#define CATCH_FAILED(label) \
{\
  push(CURRENT->exception_stack, new_jmp_item());\
  switch (setjmp(HANDLER)) {\
  case JMP_FAILED: {\
    RESTORE_ENVIRONMENT();\
    pop_jmp_item(CURRENT->exception_stack);\
    goto label;\
  }\
  case JMP_EXCEPTIONAL: {\
    pop_jmp_item(CURRENT->exception_stack);\
    longjmp(top_jmp_item(CURRENT->exception_stack));\
  }\
  default: SAVE_ENVIRONMENT();\
  }\
}

#define RAISE_EXCEPTIONAL \
{\
  if (HANDLER) (longjmp(HANDLER, JMP_EXCEPTIONAL));\
  CURRENT->exit_status = EXCEPTIONAL_OUTCOME;\
  prepend_acb(defunct, remove_agent(the_schedule, CURRENT->agent));\
}

#define RAISE_FAILED \
{\
  if (HANDLER) (longjmp(HANDLER, JMP_FAILED));\
  CURRENT->exit_status = EXCEPTIONAL_OUTCOME;\
  prepend_acb(defunct, remove_agent(the_schedule, CURRENT->agent));\
}

#define YIELD(label) \
{\
  if (IS_EMPTY_SCHEDULE(the_schedule)) return;
  CURRENT->context = &&label;\
  ROTATE();\
  goto (*(CURRENT->context));\
}


/* Action is a label. */
#define ACTIVATE(action) \
{\
  ACAgent agent = NEW_AGENT();\
  prepend_acb(the_schedule, new_acb(agent, action));\
  push(CURRENT->result, agent); \
  ROTATE();\
  enact(CURRENT->action);\
}

#define DEACTIVATE(agent) \
{\
  prepend_acb(defunct, remove_agent(the_schedule, agent));\
  push(CURRENT->result, NULL);\
}

#endif


