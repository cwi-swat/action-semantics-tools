
#include "acr-agent.h"

#include <an2.h>

#define make_agent(n,a,t) ((ACRAgent)ATmakeAppl3(ATmakeAFun("agent",3,ATfalse),\
                           (ATerm)(n),(ATerm)(a),(ATerm)(t)))

#define get_tbs(a) ((ATermBlob)ATgetArgument((ATermAppl)(a),2))
#define get_action(a) ((ANK_Action)ATgetArgument((ATermAppl)(a),1))
#define set_action(ag,ac) ((ACRAgent)ATsetArgument((ATermAppl)(ag),(ATerm)ac,1))


ACRAgent ACR_make_agent(int n, ANK_Action action) {
  AN2TaggedBuffers tbs;
  ATerm ag = (ATerm)ATmakeInt(n);
  an2_init_tagged_buffers(&tbs);
  return an2_set_type(make_agent(ag,action,ATmakeBlob(sizeof(AN2TaggedBuffers),tbs)),AN2_AGENT_TYPE);
}

AN2TaggedBuffers ACR_agent_get_taggedbuffers(ACRAgent agent) {
  return (AN2TaggedBuffers)ATgetBlobData(get_tbs(agent));
}

ANK_Action ACR_agent_get_action(ACRAgent agent) {
  return get_action(agent);
}

void ACR_agent_set_action(ACRAgent *agent, ANK_Action action) {
  set_action(*agent,action);
}



  

