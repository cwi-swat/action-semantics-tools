
#ifndef __AT_DATACONTROL_H
#define __AT_DATACONTROL_H 1

#include <aterm2.h>

#include "at-action.h"

typedef ATerm AT_Choice;
typedef ATermList AT_Choices;

#define AT_then_function() (ATmakeAFun("then", 2, ATfalse)) 
#define AT_and_then_function() (ATmakeAFun("andthen", 2 , ATfalse)) 
#define AT_and_function() (ATmakeAFun("and", 2, ATfalse)) 
#define AT_exceptionally_function() (ATmakeAFun("exceptionally", 2, ATfalse)) 
#define AT_and_exceptionally_function() (ATmakeAFun("andexceptionally", 2, ATfalse)) 
#define AT_provide_function() (ATmakeAFun("provide", 1, ATfalse)) 
#define AT_give_function() (ATmakeAFun("give", 1, ATfalse)) 
#define AT_copy_function() (ATmakeAFun("copy", 0, ATfalse)) 
#define AT_fail_function() (ATmakeAFun("fail", 0, ATfalse)) 
#define AT_raise_function() (ATmakeAFun("raise", 0, ATfalse)) 
#define AT_check_function() (ATmakeAFun("check", 1, ATfalse)) 
#define AT_indivisibly_function() (ATmakeAFun("indivisibly", 1, ATfalse)) 
#define AT_choose_natural_function() (ATmakeAFun("choosenatural", 0, ATfalse)) 
#define AT_otherwise_function() (ATmakeAFun("otherwise", 2, ATfalse)) 
#define AT_select_function() (ATmakeAFun("select", 1, ATfalse)) 

#define AT_make_then_action(l, r) ((AT_Action)ATmakeAppl2(AT_then_function(), l, r))
#define AT_make_and_then_action(l, r) ((AT_Action)ATmakeAppl2(AT_and_then_function(), l, r))
#define AT_make_and_action(l, r) ((AT_Action)ATmakeAppl2(AT_and_function(), l, r))
#define AT_make_exceptionally_action(l, r) ((AT_Action)ATmakeAppl2(AT_exceptionally_function(), l, r))
#define AT_make_and_exceptionally_action(l, r) ((AT_Action)ATmakeAppl2(AT_and_exceptionally_function(), l, r))
#define AT_make_otherwise_action(l, r) ((AT_Action)ATmakeAppl2(AT_otherwise_function(), l, r))
#define AT_make_provide_action(d) ((AT_Action)ATmakeAppl1(AT_provide_function(), d))
#define AT_make_give_action(op) ((AT_Action)ATmakeAppl1(AT_give_function(), op))
#define AT_make_check_action(pred) ((AT_Action)ATmakeAppl1(AT_check_function(), pred))
#define AT_make_select_action(choices) ((AT_Action)ATmakeAppl1(AT_select_function(), (ATerm)choices))
#define AT_make_copy_action() ((AT_Action)ATmakeAppl0(AT_copy_function()))
#define AT_make_raise_action() ((AT_Action)ATmakeAppl0(AT_raise_function()))
#define AT_make_indivisibly_action(a) ((AT_Action)ATmakeAppl1(AT_indivisibly_function(), a))
#define AT_make_fail_action() ((AT_Action)ATmakeAppl0(AT_fail_function()))
#define AT_make_choose_natural_action() ((AT_Action)ATmakeAppl0(AT_choose_natural_function()))

#define AT_get_select_choices(a) ((AT_Choices)AT_get_arg(a))
#define AT_get_head_of_choices(c) ((AT_Choice)ATgetFirst(c))
#define AT_get_tail_of_choices(c) ((AT_Choices)ATgetNext(c))

#endif
