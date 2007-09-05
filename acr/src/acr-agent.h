
#ifndef __ACR_AGENT__H
#define __ACR_AGENT__H 1

#include <aterm2.h>
#include <an2-taggedbuffers.h>
#include "api/AN-K.h"

typedef ATerm ACRAgent;

ACRAgent ACR_make_agent(int n, ANK_Action action);
AN2TaggedBuffers ACR_agent_get_taggedbuffers(ACRAgent agent);
ANK_Action ACR_agent_get_action(ACRAgent agent);
void ACR_agent_set_action(ACRAgent *agent, ANK_Action action);



  


#endif
