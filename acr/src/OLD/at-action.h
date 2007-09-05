
#ifndef __AT_ACTION_H
#define __AT_ACTION_H 1

#include <aterm2.h>

typedef ATerm AT_Action;

#define AT_is_terminated(a) (AT_is_normal_outcome(a) || \
			    AT_is_failed_outcome(a) || \
			    AT_is_exceptional_outcome(a))

#define AT_normal_function() (ATmakeAFun("normal", 1, ATfalse))
#define AT_exceptional_function() (ATmakeAFun("exceptional", 1, ATfalse))
#define AT_failed_function() (ATmakeAFun("failed", 0, ATfalse))

#define AT_is_normal_outcome(out) (ATgetAFun((ATermAppl)out)==AT_normal_function())
#define AT_is_exceptional_outcome(out) (ATgetAFun((ATermAppl)out)==AT_exceptional_function())
#define AT_is_failed_outcome(out) (ATgetAFun((ATermAppl)out)==AT_failed_function())

#define AT_make_normal_outcome(d) (ATmake("normal(<term>)",d))
/*((AT_Action)ATmakeAppl1(AT_normal_function(), d))*/
#define AT_make_exceptional_outcome(d) ((AT_Action)ATmakeAppl1(AT_exceptional_function(), d))
#define AT_make_failed_outcome() ((AT_Action)ATmakeAppl0(AT_failed_function()))

#define AT_get_outcome_data(out) (AT_get_first(out))




#endif
