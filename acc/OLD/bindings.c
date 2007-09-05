
#include "bindings.h"
#include <stdio.h>

/* Bindings:
 * nobindings
 * bindings([<token>,<data>], <count>, <left>, <right>)
 */

#define token_lt(b1, b2) (ATgetInt((ATermInt)ATgetArgument((ATermAppl)ATgetFirst(b1),0)) <\
                          ATgetInt((ATermInt)ATgetArgument((ATermAppl)ATgetFirst(b1),0)))

#define token_gt(b1, b2) (ATgetInt((ATermInt)ATgetArgument((ATermAppl)ATgetFirst(b1),0)) >\
                          ATgetInt((ATermInt)ATgetArgument((ATermAppl)ATgetFirst(b1),0)))

#define get_binding(bs) ((ATermList)ATgetArgument(bs, 0))
#define get_size(bs) ((ATermInt)ATgetArgument(bs, 1))
#define get_left(bs) ((ACBindings)ATgetArgument(bs, 2))
#define get_right(bs) ((ACBindings)ATgetArgument(bs, 3))
#define get_token(b) ((ACToken)ATgetFirst(b))
#define get_value(b) ((ACData)ATgetFirst(ATgetNext(b)))
#define make_binding(tk,d) (ATmakeList2(tk, d))
#define make_bindings(b,c,l,r) (ATmakeAppl4(BINDINGS_FUNC,b,ATmakeInt(c),l,r))

ACBindings ACoverriding(ACBindings bs1, ACBindings bs2) {
}


ACBindings ACdisjointUnion(ACBindings bs1, ACBindings bs2) {
}


/* #define this. */
inline ACBindings ACbinding(ACToken tk, ACData d) {
  return make_bindings(make_binding(tk,d), 1, ACnoBindings(), ACnoBindings());
}


ACData ACbound(ACBindings bs, ACToken tk) {
  ATermList lst = ATmakeList1(tk);
  ATermList binding;
  ACBindings left, right;
  if (ACisNoBindings(bs)) return NULL;
  binding = get_binding(bs);
  left = get_left(bs);
  right = get_right(bs);
  if (token_lt(lst, binding))
    return ACbound(left, tk);
  if (token_gt(lst, binding))
    return ACbound(right, tk);
  return get_value(binding);
}
  
  

