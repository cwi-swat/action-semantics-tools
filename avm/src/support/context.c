
#include "context.h"


void AN_init_context(AN_Context *c) {
  AN_init_stack(&(c->args));
  AN_init_stack(&(c->nresult));
  AN_init_stack(&(c->eresult));
  AN_init_stack(&(c->scope));
  c->handler = NULL;
}

void AN_release_context(AN_Context *c) {
  AN_release_stack(&(c->args));
  AN_release_stack(&(c->nresult));
  AN_release_stack(&(c->eresult));
  AN_release_stack(&(c->scope));
}
