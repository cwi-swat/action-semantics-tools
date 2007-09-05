
#ifndef __AT_BINDINGS_H
#define __AT_BINDINGS_H 1

#include <aterm2.h>


#define AT_give_current_bindings_function() (ATmakeAFun("givecurrentbindings", 0, ATfalse))
#define AT_hence_function() (ATmakeAFun("hence", 2, ATfalse))

#define AT_make_give_current_bindings_action() ((AT_Action)ATmakeAppl0(AT_give_current_bindings_function()))
#define AT_make_hence_action(l, r) ((AT_Action)ATmakeAppl2(AT_hence_function(), l, r))






#endif
