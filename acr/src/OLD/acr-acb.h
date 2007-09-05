

#ifndef __ACR_AGENT__H
#define __ACR_AGENT__H 1

#include <aterm2.h>
#include <an2.h>

typedef ATerm ACRAgent;

ACRACB ACR_make_acb(int n, ANK_Action action);
AN2TaggedBuffers ACR_acb_get_taggedbuffers(ACRACB acb);
AN2Agent ACR_acb_get_action(ACRACB acb);}


  


#endif
