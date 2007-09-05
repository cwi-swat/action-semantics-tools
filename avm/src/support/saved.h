#ifndef __AN_SAVED__H
#define __AN_SAVED__H 1

#include "context.h"

#define AN_SAVE_STACK_SIZE 1024

typedef struct _AN_Saved {
  int top;
  AN_Context *stack;
} AN_Saved;

void AN_alloc_saved(AN_Saved *s);
void AN_init_saved(AN_Saved *s);
void AN_free_saved(AN_Saved *s);

#define AN_fprint_saved_stack(f,s) {        \
  int __i;                                  \
  for (__i = (s).top; __i >= 0; __i--) {    \
    AN_fprint_context((f),(s).stack[__i]);  \
  }                                         \
}

#define AN_new_saved(a) ((a).top++)

#define AN_push_saved(a,c) ((a).stack[++((a).top)]=c)

#define AN_pop_saved(a) ((a).stack[((a).top)--])

#define AN_drop_saved(a) (((a).top)--)

#define AN_top_saved(a) ((a).stack[(a).top])

#define AN_has_more_saved(a) ((a).top>=0)

#define AN_has_handler(a) (AN_has_more_saved(a))
#define AN_pop_handler(a) (AN_context_get_handler(AN_pop_saved(a)))

#define AN_drop_saved_until(a,kind) {                \
  while (AN_has_more_saved(a) &&                     \
         AN_context_get_kind(AN_top_saved(a))!=kind) \
    AN_drop_saved(a);                                \
}

#endif
