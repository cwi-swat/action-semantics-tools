
#include "acr-sched.h"



void ACR_init_schedule(ACRSchedule *schedule, ACRAgent agent) {
  ATermList actives = ATmakeList1(agent);
  ATermList defuncts = ATmakeList0();
  *schedule = make_empty();
  *schedule = set_actives(*schedule,actives);
  *schedule = set_defuncts(*schedule,defuncts);
  ATprotect((ATerm*)schedule);
}
void ACR_release_schedule(ACRSchedule *schedule) {
  ATunprotect(schedule);
}

inline void ACR_schedule_rotate(ACRSchedule *schedule) {
  ATermList actives = get_actives(*schedule);
  if (!ATisEmpty(actives)) {
    ATerm head = ATgetFirst(actives);
    actives = ATgetNext(actives);
    actives = ATappend(actives,head);
    *schedule = set_actives(*schedule,actives);
  }
}


void ACR_schedule_remove(ACRSchedule *schedule, ACRAgent agent) {
  ATermList actives = get_actives(*schedule);
  ATermList defuncts = get_defuncts(*schedule);
  defuncts = ATinsert(defuncts, agent);
  actives = ATremoveElement(actives, agent);
  *schedule = set_actives(*schedule,actives);
  *schedule = set_defuncts(*schedule,defuncts);
}
  
  
void ACR_schedule_add(ACRSchedule *schedule, ACRAgent agent) {
  ATermList actives = get_actives(*schedule);
  actives = ATinsert(actives,agent);
  *schedule = set_actives(*schedule,actives);
}  

int ACR_schedule_is_empty(ACRSchedule schedule) {
  return ((ATisEmpty(get_actives(schedule))) == ATtrue);
}

void ACR_schedule_update_current(ACRSchedule *schedule, ACRAgent agent) {
  ATermList actives = get_actives(*schedule);
  actives = ATreplace(actives,agent,0);
  *schedule = set_actives(*schedule, actives);
}
							       
