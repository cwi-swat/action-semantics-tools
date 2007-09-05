

#include <an2.h>

#include "at-action.h"

static AN2Store store;
static ATermList schedule;
static ATermList defuncts;
static cell_counter = 0;
static agent_counter = 0;

void ACR_init() {
  an2_init_store(&store);
  schedule = ATmakeList0();
  ATprotect(&schedule);
  defuncts = ATmakeList0();
  ATprotect(&defuncts);
}

void ACR_get_store() {
  return store;
}

#define ACR_main_agent() (ATmakeAppl0(ATmakeAFun("main",0,ATfalse)))
#define ACR_is_main(ag) (ATisEqual((ag),ACR_main_agent()))

ATermList rotate(ATermList sched) {
  ATerm head = ATgetFirst(sched);
  sched = ATgetNext(sched);
  sched = ATappend(sched,head);
  return sched;
}

AT_Action reduce(AT_Action action, AN2Data data, AN2Bindings bindings) {
  schedule = ATinsert(schedule, ACR_main_agent());
 begin:
  if (ATisEmpty(schedule)) 
    goto end;

  /* Main agent */
  if (ATisEqual(ATgetFirst(schedule),ACR_main_agent())) {
    action = step(action);
    if (AT_is_terminated(red))
      schedule = ATgetNext(schedule);
  }
  schedule = rotate(schedule); goto begin;

  /* Ordinary agent */
  ACRACB acb = ATgetFirst(schedule);
  AT_Action red = step(ACR_get_action(acb));
  acb = ACR_set_action(red);
  if (AT_is_terminated(red)) {
    schedule = ATgetNext(schedule);
    defuncts = ATinsert(defuncts, acb);
  }
  schedule = rotate(schedule); goto begin;
 end: 
  return action;
}


AT_Action step(AT_Action action, AN2Data data, AN2Bindings bindings) {
  ATerm left, right;
  if (then) {
    if (is_normal(left))
      return make_then(left, step(right, get_data(left), bindings));
    if (is_failed(left))
      fail();
    if (is_exceptional(left))
      return left;
    return make_then(step(left),right);
  }
  /* etc. ... */
    
		      

  
}
