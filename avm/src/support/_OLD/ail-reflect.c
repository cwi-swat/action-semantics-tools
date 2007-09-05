

#include "ail-reflect.h"

void ail_init_reflection_cache(AILReflectionCache *rc) {
  *rc = ATtableCreate(1024,80);
}

void ail_release_reflection_cache(AILReflectionCache *rc) {
  ATtableDestroy(*rc);
  *rc = NULL;
}
