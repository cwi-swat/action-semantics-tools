#ifndef __AN_FRAMES__H
#define __AN_FRAMES__H 1

#include "address.h"

#define AN_FRAME_STACK_SIZE 4096

typedef AN_Address AN_Frame;

typedef struct _AN_Frames {
  int top;
  AN_Frame *stack;
} AN_Frames;


#define AN_fprint_frame_stack(f,s) {         \
  int __i;                                   \
  for (__i = (s).top; __i >= 0; __i--) {     \
    fprintf((f), "frame %d: return = %x\n",  \
	    __i, (s).stack[__i]);            \
  }                                          \
}

#define AN_init_frame(f,r) (*(f)=(r))
#define AN_release_frame(f) (*(f)=NULL)

void AN_alloc_frames(AN_Frames *fs);
void AN_init_frames(AN_Frames *fs);
void AN_release_frames(AN_Frames *fs);

#define AN_frames_set_top(fs,n) ((fs).top=(n))
#define AN_frames_get_top(fs) ((fs).top)

#define AN_push_frame(a,d) ((a).stack[++((a).top)]=(d))
#define AN_pop_frame(a) ((a).stack[((a).top)--]) 

#define AN_drop_frame(a) ((a).top--)
#define AN_top_frame(a) ((a).stack[(a).top])


#define AN_frame_get_return(a) (a)

#endif
