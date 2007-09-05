
#ifndef __AT_INTERACTING_H
#define __AT_INTERACTING_H 1

#include <aterm1.h>

#define AT_activate_function() (ATmakeAFun("activate", 0, ATfalse))
#define AT_deactivate_function() (ATmakeAFun("deactivate", 0, ATfalse))
#define AT_send_function() (ATmakeAFun("send", 0, ATfalse))
#define AT_receive_function() (ATmakeAFun("receive", 0, ATfalse))
#define AT_give_current_agent_function() (ATmakeAFun("givecurrentagent", 0, ATfalse))
#define AT_give_current_time_function() (ATmakeAFun("givecurrenttime", 0, ATfalse))

#endif 
