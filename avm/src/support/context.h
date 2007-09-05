#ifndef __AN_CONTEXT__H
#define __AN_CONTEXT__H 1

#include <dn2.h>
#include "throwable.h"
#include "address.h"
#include "frames.h"

typedef struct _AN_Context {
  AN_Throwable kind;
  AN_Stack args, nresult, eresult, scope;
  AN_Address handler;
  AN_Frames frames;
} AN_Context;


#define AN_fprint_context(f,c) {                                \
  fprintf((f), "kind: %s, handler: %x\n",                       \
	  ((c).kind == AN_EXCEPTION ? "exception" : "failure"), \
	  (c).handler);                                         \
}

/*   AN_fprint_frame_stack((f),(c).frames);                        \ */


void AN_init_context(AN_Context *c);
void AN_release_context(AN_Context *c);

#define AN_context_set_kind(c,k) ((c).kind=(k))
#define AN_context_set_args(c,d) ((c).args=(d))
#define AN_context_set_nresult(c,d) ((c).nresult=(d))
#define AN_context_set_eresult(c,d) ((c).eresult=(d))
#define AN_context_set_scope(c,d) ((c).scope=(d))
#define AN_context_set_handler(c,d) ((c).handler=(d))
#define AN_context_set_frames(c,d) ((c).frames=(d))

#define AN_context_get_kind(c) ((c).kind)
#define AN_context_get_args(c) ((c).args)
#define AN_context_get_nresult(c) ((c).nresult)
#define AN_context_get_eresult(c) ((c).eresult)
#define AN_context_get_scope(c) ((c).scope)
#define AN_context_get_handler(c) ((c).handler)
#define AN_context_get_frames(c) ((c).frames)

#endif
