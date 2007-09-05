
#ifndef __AT_DATAPRED_H
#define __AT_DATAPRED_H 1

#include <aterm2.h>

typedef ATerm AT_Datapred;
typedef ATerm AT_PrefixDatapred;
typedef ATerm AT_InfixDatapred;

#define AT_is_datapred(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("pred", 1, ATfalse))
#define AT_is_prefix_datapred(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("prefix", 1, ATfalse))
#define AT_is_infix_datapred(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("infix", 1, ATfalse))
#define AT_is_equals_datapred(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("equals", 0, ATfalse))
#define AT_is_def_datapred(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("def", 0, ATfalse))
#define AT_is_gt_datapred(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("gt", 0, ATfalse))
#define AT_is_ge_datapred(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("ge", 0, ATfalse))
#define AT_is_lt_datapred(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("lt", 0, ATfalse))
#define AT_is_le_datapred(d) (ATgetAFun((ATermAppl)d)==ATmakeAFun("le", 0, ATfalse))



#endif
