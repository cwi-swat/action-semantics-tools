
#ifndef __AN_BINDINGS_H
#define __AN_BINDINGS_H 1

#include <aterm2.h>
#include "bbtree.h"

#define AN_BINDINGS_PATTERN "bindings(<term>)"
#define AN_BINDING_PATTERN "(<term>,<term>)"


int AN_bindingComparator(ATerm a1, ATerm a2);

/* Binding: tuple of a token and a datum. */
#define AN_make_binding(tk,d) (ATmake(AN_BINDING_PATTERN,tk,d))
#define AN_get_bound_token(b) (ATgetArgument(b,0))
#define AN_get_bound_datum(b) (ATgetArgument(b,1))

/* Constructors. */

#define AN_make_bindings(t) (ATmake(AN_BINDINGS_PATTERN,t))

#define AN_makeNoBindings() (AN_make_bindings((ATemptyBBTree)))

/* Data operations. */

#define AN_giveBinding(tk,d) (AN_make_bindings(ATmakeBBTree(AN_make_binding(tk,d),\
                                               ATemptyBBTree,ATemptyBBTree)))

#define AN_giveBound(bs,tk) (AN_find_bound(bs,tk))

#define AN_giveOverriding(bs1,bs2) (AN_make_bindings(ATbbtreeUnion((ATermBBTree)AN_get_bindings_value(bs1),\
                                                     (ATermBBTree)AN_get_bindings_value(bs2),&AN_bindingComparator)))

/* This should be implemented directly into bbtree. */
#define AN_giveDisjointUnion(bs1,bs2) (AN_make_bindings(ATbbtreeDifference(\
                                       ATbbtreeUnion((ATermBBTree)AN_get_bindings_value(bs1),\
                                       (ATermBBTree)AN_get_bindings_value(bs2),&AN_bindingComparator),\
                                       ATbbtreeIntersection((ATermBBTree)AN_get_bindings_value(bs1),\
                                       (ATermBBTree)AN_get_bindings_value(bs2),&AN_bindingComparator),\
                                       &AN_bindingComparator)))

#define AN_find_bound(bs,tk) ({\
  ATerm __b = ATbbtreeGet((ATermBBTree)AN_get_bindings_value(bs),\
                          AN_make_binding(tk,(ATerm)ATempty),\
                          &AN_bindingComparator);\
  (__b ? AN_get_bound_datum(__b) : NULL);\
})
    

/* Accessors. */
#define AN_get_bindings_value(d) (ATgetArgument((ATermAppl)d,0))



#endif
