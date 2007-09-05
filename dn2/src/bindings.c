
#include "dn/bindings.h"
#include "dn/token.h"

int AN_bindingComparator(ATerm a1, ATerm a2) {
#ifdef AN_DATA_CHECKING
  assert(AN_is_binding(a1) && AN_is_binding(a2));
#endif
  {  
    ATerm tk1 = AN_get_bound_token(a1);
    ATerm tk2 = AN_get_bound_token(a2);
    /* Note: this depends on the assumption that all tokens are shared
       in memory according to a never changing order. */
    return (tk1 == tk2 ? 0 : (tk1 > tk2 ? 1 : -1));
  }
}




