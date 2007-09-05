


#include <aterm2.h>
#include "an2-action.h"

typedef ATermTable AILReflectionCache;

void ail_init_reflection_cache(AILReflectionCache *rc);
void ail_release_reflection_cache(AILReflectionCache *rc);

#define AIL_NO_ARGUMENT ATempty

#define ail_cache_functor(rc,f,a1,a2,r) (ATtablePut((rc), ail_cache_entry((f),(a1),(a2)), (ATerm)(r)))

#define ail_find_cached_functor(rc,f,a1,a2) (ATtableGet((rc),ail_cache_entry((f),(a1),(a2))))

#define ail_cache_entry(f,a1,a2) ((ATerm)ATmakeList3((ATerm)ATmakeInt((f)),(ATerm)(a1),(ATerm)(a2)))



