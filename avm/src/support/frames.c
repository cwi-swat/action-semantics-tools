
#include "frames.h"

#include <stdlib.h>

void AN_alloc_frames(AN_Frames *fs) {
  fs->stack=(AN_Frame*)calloc(AN_FRAME_STACK_SIZE,sizeof(AN_Frame));
  if (!fs->stack) {
    perror("AN_init_frames");
    exit(1);
  }
}

void AN_init_frames(AN_Frames *fs) {
  fs->top = -1;
}

void AN_release_frames(AN_Frames *fs) {
  free(fs->stack);
  fs->stack=NULL;
  fs->top = -2;
}



