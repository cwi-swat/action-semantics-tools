

#include "acr-cstack.h"
#include <assert.h>


#define CSTACK_SIZE 1024
static ATerm c_stack[CSTACK_SIZE];
static int current = 0;

#define FAILURE_ID "failure"
#define EXCEPTION_ID "exception"

#define ACR_failure_label() (ATmakeAppl0(ATmakeAFun(FAILURE_ID,0,ATfalse)))
#define ACR_exception_label() (ATmakeAppl0(ATmakeAFun(EXCEPTION_ID,0,ATfalse)))
#define ACR_yes() (ATmakeAppl0(ATmakeAFun("yes",0,ATfalse)))

#define ACR_make_failure_continuation(t) (ATsetAnnotation(t,ACR_failure_label(),ACR_yes()))
#define ACR_make_exception_continuation(t) (ATsetAnnotation(t,ACR_exception_label(),ACR_yes()))


void ACR_init_continuation_stack() {
  ATprotectArray(c_stack,CSTACK_SIZE);
}

void ACR_push(ATerm t) {
  assert(current < CSTACK_SIZE);
  c_stack[current++] = t;
}

#define ACR_top() (c_stack[current-1])
#define ACR_pop() (c_stack[--current])
#define ACR_empty() (current==0)

void ACR_push_failure_continuation(ATerm t) {
  ACR_push(ACR_make_failure_continuation(t));
}

void ACR_push_exception_continuation(ATerm t) {
  ACR_push(ACR_make_exception_continuation(t));
}



ATerm ACR_find(ATerm kind) {
  while (!ACR_empty()) {
    if (ATgetAnnotation(ACR_top(),kind)!=NULL)
      return ACR_pop();
    ACR_pop();
  }
  return (ATerm)NULL;
}

ATerm ACR_find_failure_continuation() {
  return ACR_find(ACR_failure_label());
}

ATerm ACR_find_exception_continuation() {
  return ACR_find(ACR_exception_label());
}

