
#include <stdio.h>
#include <choice.h>
#include <setjmp.h>

/* Must migrate to using dn2.h */
#include <an2.h>

#include "throw.h"

/* Temporary... */
#define ACC_UNFOLD (AN2_EXCEPTION+AN2_FAILURE+1)

static ATermList data_stack;
static ATermList unfold_stack;
static int thrown;


jmp_buf _jmp_stack[THROW_NESTING_DEPTH];
int _jmp_index = -1;

void ACC_set_raised_data(AN2Data data) {
  data_stack = ATinsert(data_stack, data);
}

AN2Data ACC_get_raised_data() {
  AN2Data d = ATgetFirst(data_stack);
  data_stack = ATgetNext(data_stack);
  return d;
}
  
void ACC_init_throws() {
  data_stack = ATempty;
  unfold_stack = ATempty;
  ATprotect((ATerm*)&data_stack);
  ATprotect((ATerm*)&unfold_stack);
  thrown = -1;
}


void ACC_push_unfold_data(AN2Data data, AN2Data bindings) {
  unfold_stack = ATinsert(unfold_stack, (ATerm)ATmakeList2(data,bindings));
}

void ACC_pop_unfold_data(AN2Data *data, AN2Data *bindings) {
  ATermList l = (ATermList)ATgetFirst(unfold_stack);
  unfold_stack = ATgetNext(unfold_stack);
  *data = ATgetFirst(l);
  *bindings = ATgetFirst(ATgetNext(l));
}

int ACC_unfolding(AN2Data *data, AN2Data *bindings) {
  if (setChoicePoint() == 0)
    return 0;
  if (thrown == ACC_UNFOLD) {
    ACC_pop_unfold_data(data,bindings);
    return 1;
  }
  fail();
  return -1; /* Silence compiler */
}

AN2Data ACC_unfold(AN2Data data, AN2Data bindings) {
  thrown = ACC_UNFOLD;
  ACC_push_unfold_data(data,bindings);
  fail();
  return NULL; /* Silence compiler */
}



int ACC_try() {
#ifdef DEBUG
  ATfprintf(stderr, "Trying.\n");
#endif
  //  return localSetChoicePoint();
  return setChoicePoint();
}
	      

AN2Data ACC_catch_exception() {
#ifdef DEBUG
  ATfprintf(stderr, "Catching exception\n");
#endif
  if (thrown == AN2_EXCEPTION)
    return ACC_get_raised_data();
  //localFail();
  fail();
}  


AN2Data ACC_catch_failure() {
#ifdef DEBUG
  ATfprintf(stderr, "Catching failure\n");
#endif
  if (thrown == AN2_FAILURE)
 /* This is strange: without returning anything I get a segmentation
  * fault in the choice point library (_memcpy_by8). */
    return NULL;
  //localFail();
  fail();
}


void ACC_throw_exception(AN2Data data) {
#ifdef DEBUG
  ATfprintf(stderr, "Throwing exception\n");
#endif
  thrown = AN2_EXCEPTION;
  ACC_set_raised_data(data);
  //  localFail();
  fail();
}


void ACC_throw_failure() {
#ifdef DEBUG
  ATfprintf(stderr, "Throwing failure\n");
#endif
  thrown = AN2_FAILURE;
  //localFail();
  fail();
}


