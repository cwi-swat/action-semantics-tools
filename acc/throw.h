
#ifndef __THROW_H 
#define __THROW_H 1

#include <choice.h>
#include <an2.h>
#include <setjmp.h>

#define THROW_NESTING_DEPTH 1024

extern int _jmp_index;
extern jmp_buf _jmp_stack[THROW_NESTING_DEPTH];
  
void ACC_init_throws();
AN2Data ACC_catch_exception();
AN2Data ACC_catch_failure();
void ACC_throw_exception(AN2Data data);
void ACC_throw_failure();

int ACC_unfolding(AN2Data *data, AN2Data *bindings);
AN2Data ACC_unfold(AN2Data data, AN2Data bindings);

AN2Data _ACC_catch_exception();
AN2Data _ACC_catch_failure();
void _ACC_throw_exception(AN2Data data);
void _ACC_throw_failure();

#define _ACC_try() setjmp(_jmp_stack[++_jmp_index])
			  
int ACC_try();
void _ACC_end_try();



AN2Data ACC_get_raised_data();


#endif
