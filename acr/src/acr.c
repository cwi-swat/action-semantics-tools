
#define DEBUG

#include <an2.h>

#include "api/AN-K.h"
#include "acr-agent.h"
#include "acr-sched.h"
#include "acr-actions.h"

AN2Store store;
ACRSchedule schedule;
int cell_counter = 0;
int agent_counter = 0;

AN2Store ACR_get_store() {
  return store;
}

#define ACR_main_agent() ((ACRAgent)ATmakeAppl0(ATmakeAFun("main",0,ATfalse)))
#define ACR_is_main(ag) (ATisEqual((ag),ACR_main_agent())==ATtrue)

ANK_Action reduce(ANK_Action action, AN2Data data, AN2Bindings bindings) {
  register ACRAgent agent; 
  register ANK_Action reduct;
  ACR_init_schedule(&schedule, ACR_main_agent());
 loop: {
    agent = ACR_schedule_get_current(schedule);
    if (ACR_is_main(agent)) {
      reduct = ACR_handleAction(action,data,bindings);
      action = reduct;
    }
    else {
      reduct = ACR_agent_get_action(agent);
      reduct = ACR_handleAction(reduct,data,bindings);
      ACR_agent_set_action(&agent,reduct);
      ACR_schedule_update_current(&schedule, agent);
    }
    if (ANK_isValidTerminated((ANK_Terminated)reduct))
      ACR_schedule_remove(&schedule,agent);
    if (ACR_schedule_is_empty(schedule))
      return action;
    ACR_schedule_rotate(&schedule);
    goto loop;
  }
}



int main(int argc, char **argv) {
  AN2Data bos; int i;
  ANK_Action action;
  an2_at_init(argc,argv,&bos);
  ANK_initANKApi();
  an2_init_store(&store,100,80);
  action = ANK_ActionFromTerm(ATreadFromNamedFile(argv[1]));
  //for (i = 0; i < 100; i++)
    ATprintf("%t\n", reduce(action, an2_make_empty(), an2_make_no_bindings()));
  an2_fprint_store(stdout, store);
  return 0;
}


