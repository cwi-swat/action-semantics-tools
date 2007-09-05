
#ifndef __ACPSTORING_H
#define __ACPSTORING_H 1

#include <aterm2.h>
#include "at-action.h"


#define AT_enact_function() (ATmakeAFun("enact", 0, ATfalse))
#define AT_create_function() (ATmakeAFun("create", 0, ATfalse))
#define AT_destroy_function() (ATmakeAFun("destroy", 0, ATfalse))
#define AT_update_function() (ATmakeAFun("update", 0, ATfalse))
#define AT_inspect_function() (ATmakeAFun("inspect", 0, ATfalse))

#define AT_make_enact_action() (ATmake("enact"))
#define AT_make_create_action() (ATmake("create"))
#define AT_make_destroy_action() (ATmake("destroy"))
#define AT_make_update_action() (ATmake("update"))
#define AT_make_inspect_action() (ATmake("inspect"))






#endif
