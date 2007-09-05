
#include "acr-acb.h"

ACRACB ACR_make_acb(int n, ANK_Action action) {
  AN2Data ag = an2_make_agent_from_int(n);
  AN2TaggedBuffers tbs;
  an2_init_taggedbuffers(&tbs);
  ATmakeList2((ATerm)ag,(ATerm)action,(ATerm)ATmakeBlob(tbs,sizeof(tbs)));
}

AN2TaggedBuffers ACR_acb_get_taggedbuffers(ACRACB acb) {
  return (AN2TaggedBuffers)ATgetBlobData((ATermBlob)(
	  ATgetFirst(ATgetNext(ATgetNext((ACRACB)acb)))));
}

AN2Agent ACR_acb_get_action(ACRACB acb) {
  return (AN2Agent)ATgetFirst(ATgetNext((ACRACB)acb));
}



  

