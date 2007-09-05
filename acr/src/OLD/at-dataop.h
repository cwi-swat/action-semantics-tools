
#ifndef __ATDATAOP_H
#define __ATDATAOP_H 1

#include <aterm2.h>
#include "ATdata.h"
#include "ATbindings.h"


typedef ATerm AT_Dataop;
typedef ATerm AT_PrefixDataop;
typedef ATerm AT_InfixDataop;

#define AT_is_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("op",1,ATfalse))
#define AT_is_prefix_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("prefix",1,ATfalse))
#define AT_is_infix_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("infix",1,ATfalse))
#define AT_is_component_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("component",1,ATfalse))
#define AT_is_datasort_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("the",1,ATfalse))
#define AT_is_nobindings_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("nobindings",0,ATfalse))
#define AT_is_tupletolist_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("tupleToList",0,ATfalse))
#define AT_is_binding_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("binding",0,ATfalse))
#define AT_is_bound_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("bound",0,ATfalse))
#define AT_is_disjoint_union_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("disjointunion",0,ATfalse))
#define AT_is_overriding_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("overriding",0,ATfalse))
#define AT_is_not_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("not",0,ATfalse))
#define AT_is_plus_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("plus",0,ATfalse))
#define AT_is_minus_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("minus",0,ATfalse))
#define AT_is_monus_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("monus",0,ATfalse))
#define AT_is_times_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("times",0,ATfalse))
#define AT_is_indivisibly_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("indivisibly",0,ATfalse))
#define AT_is_provide_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("provide",0,ATfalse))
#define AT_is_then_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("then",0,ATfalse))
#define AT_is_and_then_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("andthen",0,ATfalse))
#define AT_is_and_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("and",0,ATfalse))
#define AT_is_exceptionally_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("exceptionally",0,ATfalse))
#define AT_is_and_exceptionally_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("andexceptionally",0,ATfalse))
#define AT_is_hence_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("hence",0,ATfalse))
#define AT_is_otherwise_dataop(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("otherwise",0,ATfalse))

#define AT_get_component_dataop_index(d) (ATgetInt((ATermInt)AT_get_arg(d)))
#define AT_get_datasort_dataop_sort(d) (ATgetArgument((ATermAppl)d,0))



#endif

