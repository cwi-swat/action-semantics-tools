
#ifndef __ACR_SCHED__H
#define __ACR_SCHED__H 1

#include <aterm2.h>
#include "acr-agent.h"


typedef ATerm ACRSchedule;


#define get_actives(s) ((ATermList)ATgetArgument((ATermAppl)(s),0))
#define get_defuncts(s) ((ATermList)ATgetArgument((ATermAppl)(s),1))
#define set_actives(s,a) ((ACRSchedule)ATsetArgument((ATermAppl)(s),(ATerm)a,0))
#define set_defuncts(s,d) ((ACRSchedule)ATsetArgument((ATermAppl)(s),(ATerm)d,1))
#define make_empty() ((ACRSchedule)ATmakeAppl2(ATmakeAFun("sched",2,ATfalse),\
                      (ATerm)ATempty,(ATerm)ATempty))


void ACR_init_schedule(ACRSchedule *schedule, ACRAgent agent);

void ACR_release_schedule(ACRSchedule *schedule);

void ACR_schedule_rotate(ACRSchedule *schedule);

#define ACR_schedule_get_current(s) ((ACRAgent)ATgetFirst(get_actives(s)))

int ACR_schedule_is_empty(ACRSchedule schedule);

void ACR_schedule_remove(ACRSchedule *schedule, ACRAgent agent);

void ACR_schedule_add(ACRSchedule *schedule, ACRAgent agent);

void ACR_schedule_update_current(ACRSchedule *schedule, ACRAgent agent);

#endif
