
#include "saved.h"

#include <assert.h>
#include <stdlib.h>


void AN_alloc_saved(AN_Saved *s) {
  s->stack = (AN_Context*)calloc(AN_SAVE_STACK_SIZE,sizeof(AN_Context));
  if (!s->stack) {
    perror("AN_init_saved");
    exit(1);
  }
}

void AN_init_saved(AN_Saved *s) {
  int n = AN_SAVE_STACK_SIZE;
  assert(s->stack);
  s->top=-1;
  while (--n >= 0) 
    AN_init_context(&(s->stack[n]));
}

void AN_release_saved(AN_Saved *s) {
  free(s->stack);
  s->stack=NULL;
  s->top=-2;
}

