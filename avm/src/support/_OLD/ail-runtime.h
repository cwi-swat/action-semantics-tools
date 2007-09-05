
#ifndef __AIL_RUNTIME__H
#define __AIL_RUNTIME__H 1

#include <stdlib.h>
#include <time.h>

#include <an2.h>
#include <abf.h>
#include "ail-reflect.h"


/***********************************
 **** MAKE ALL MACROS SAFE !!!!
 ***********************************/

typedef struct ailmachine {
  ABFBuffer *buffer;
  AN2Store store;
  AN2Schedule schedule;
  AN2Address code_start, code_end, code_exit;
  int cell_counter, agent_counter;
  AILReflectionCache reflection_cache;
} *AILMachine;

extern AN2Context temp_context; 
extern AN2ACB temp_acb; 
extern AN2Frame temp_frame;
extern AN2Address temp_address;
extern AN2Data temp_data;
extern AN2Data temp_data1;
extern AN2Data temp_data2;
extern int temp_int;

void ail_init_machine(AILMachine *machine);
void ail_release_machine(AILMachine *machine);

void ail_load_abf_program(AILMachine m, ABF prg, int size);
void ail_load_program(AILMachine m, AN2Address start, AN2Address end);

#define ail_machine_get_schedule(m) ((m)->schedule)
#define ail_machine_get_store(m) ((m)->store)
#define ail_machine_get_code_start(m) ((m)->code_start)
#define ail_machine_get_code_end(m) ((m)->code_end)
#define ail_machine_get_code_exit(m) ((m)->code_exit)
#define ail_machine_get_agent_counter(m) ((m)->cell_counter)
#define ail_machine_get_cell_counter(m) ((m)->agent_counter)

#define ail_machine_set_schedule(m,x) ((m)->schedule=(x))
#define ail_machine_set_store(m,x) ((m)->store=(x))
#define ail_machine_set_code_start(m,x) ((m)->code_start=(x))
#define ail_machine_set_code_end(m,x) ((m)->code_end=(x))
#define ail_machine_set_code_exit(m,x) ((m)->code_exit=(x))
#define ail_machine_set_agent_counter(m,x) ((m)->cell_counter=(x))
#define ail_machine_set_cell_counter(m,x) ((m)->agent_counter=(x))

#define ail_is_static_address(m,adr) (((m)->code_start>=((void*)add))\
                                      &&((void*)adr<=(m)->code_end))



#define ail_current_acb(m) (an2_schedule_get_last(ail_machine_get_schedule(m)))

#ifdef MULTI_THREADING
#define ail_yield(m) {\
    if (an2_is_empty_schedule(ail_machine_get_schedule(m))) \
      goto *(ail_get_machine_code_exit(m));\
    if (!an2_acb_get_lock(ail_current_acb(m)))\
      an2_schedule_rotate(ail_machine_get_schedule(m));\
}
#else
#define ail_yield(m) 
#endif

#define ail_current_ins(m) (abf_get_byte((ABF)(ail_current_acb(m)->pc)))
#define ail_current_adr(m) (ail_current_acb(m)->pc)
#define ail_set_current_adr(m,a) ((ail_current_acb(m)->pc=(a)))
#define ail_next(m) (abf_skip_byte((ABF)(ail_current_acb(m)->pc)))
#define ail_get_int(m) (abf_get_int((ABF)(ail_current_acb(m)->pc)))
#define ail_get_offset(m) (abf_get_int((ABF)(ail_current_acb(m)->pc)))
#define ail_get_address(m) (abf_get_ptr((ABF)(ail_current_acb(m)->pc)))
#define ail_get_data(m) ((AN2Data)abf_get_aterm((ABF)(ail_current_acb(m)->pc)))
#define ail_get_type(m) ((AN2Type)abf_get_aterm((ABF)(ail_current_acb(m)->pc)))
#define ail_skip_int(m) (abf_skip_int((ABF)(ail_current_acb(m)->pc)))
#define ail_skip_offset(m) (abf_skip_int((ABF)(ail_current_acb(m)->pc)))
#define ail_skip_address(m) (abf_skip_ptr((ABF)(ail_current_acb(m)->pc)))
#define ail_skip_data(m) (abf_skip_aterm((ABF)(ail_current_acb(m)->pc)))
#define ail_skip_type(m) (abf_skip_aterm((ABF)(ail_current_acb(m)->pc)))
#define ail_skip_n(m,n) (((ABF)(ail_current_acb(m)->pc))+=n)


/* 
 * Legenda:
 * - m: AILMachine
 * - adr, ret: AN2Address parameter
 * - error,success: a statement expression that exits 
 *   normal controlflow. (e.g. a goto).
 */

#define ail_publish(m) {\
  an2_push_args(ail_current_acb(m)->arg_stack, \
     an2_top_result(ail_current_acb(m)->result_stack));\
  an2_drop_result(ail_current_acb(m)->result_stack);}

#define ail_unpublish(m) {\
  an2_drop_args(ail_current_acb(m)->arg_stack);}

#define ail_epublish(m) {\
  an2_push_args(ail_current_acb(m)->arg_stack,\
		an2_top_result(ail_current_acb(m)->e_result_stack));\
  an2_drop_result(ail_current_acb(m)->e_result_stack);}

#define ail_enter(m,success,error) {\
  temp_data = an2_top_result(ail_current_acb(m)->result_stack);\
  if (an2_has_type(temp_data, AN2_BINDINGS_TYPE)) {\
    an2_push_scope(ail_current_acb(m)->scope_stack, temp_data);\
    an2_drop_result(ail_current_acb(m)->result_stack);\
    success;\
  }\
  error;}

#define ail_leave(m) \
  an2_drop_scope(ail_current_acb(m)->scope_stack);

#define ail_trye(m,adr) {\
  temp_context.kind = AN2_EXCEPTION;\
  temp_context.args = ail_current_acb(m)->arg_stack;\
  temp_context.result = ail_current_acb(m)->result_stack;\
  temp_context.e_result = ail_current_acb(m)->e_result_stack;\
  temp_context.e_merge = ail_current_acb(m)->e_merge;\
  temp_context.scope = ail_current_acb(m)->scope_stack;\
  temp_context.frame_index = an2_frames_get_top(ail_current_acb(m)->frame_stack);\
  temp_context.continuation = adr;\
  an2_push_saved(ail_current_acb(m)->context_stack, temp_context);}

#define ail_tryf(m,adr) {\
  temp_context.kind = AN2_FAILURE;\
  temp_context.args = ail_current_acb(m)->arg_stack;\
  temp_context.result = ail_current_acb(m)->result_stack;\
  temp_context.e_result = ail_current_acb(m)->e_result_stack;\
  temp_context.e_merge = ail_current_acb(m)->e_merge;\
  temp_context.scope = ail_current_acb(m)->scope_stack;\
  temp_context.frame_index = an2_frames_get_top(ail_current_acb(m)->frame_stack);\
  temp_context.continuation = adr;\
  an2_push_saved(ail_current_acb(m)->context_stack, temp_context);}

#define ail_catche(m) {\
  assert(an2_top_saved(ail_current_acb(m)->context_stack).kind == AN2_EXCEPTION);\
  an2_drop_saved(ail_current_acb(m)->context_stack);}

#define ail_catchf(m) {\
  assert(an2_top_saved(ail_current_acb(m)->context_stack).kind == AN2_FAILURE);\
  an2_drop_saved(ail_current_acb(m)->context_stack);}

/* Returning an address, taking a label (possibly NULL). */
#define ail_return(m) ({\
  temp_frame = an2_pop_frame(ail_current_acb(m)->frame_stack);\
  while ((an2_has_more_saved(ail_current_acb(m)->context_stack) &&\
         ((an2_top_saved(ail_current_acb(m)->context_stack).frame_index) >\
         (an2_frames_get_top(ail_current_acb(m)->frame_stack))))) \
    an2_drop_saved(ail_current_acb(m)->context_stack);\
  if (temp_frame.return_address == NULL)\
    an2_schedule_remove_acb(m->schedule, ail_current_acb(m));\
  temp_frame.return_address;\
})
/*     abf_release_stream(temp_frame.start_address);\ */

#define ail_lock(m) an2_acb_lock(ail_current_acb(m))

#define ail_unlock(m) an2_acb_unlock(ail_current_acb(m))

/* Returning an address. Taking a returnaddress. */
/* NB: don't forget to push empty data and scope on stacks and remove on return! */
#define ail_call(m,ret,error) ({\
  temp_address = NULL;\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_ACTION_TYPE)) {\
    temp_frame.start_address = an2_get_action_address(temp_data);\
    temp_frame.return_address = ret;\
    an2_push_frame(ail_current_acb(m)->frame_stack, temp_frame);\
    temp_address = temp_frame.start_address;\
  }\
  if (!temp_address) error;\
  temp_address;\
})

/* Returning an address (possibly NULL) */
#define ail_raise(m) ({\
  if (ail_current_acb(m)->e_merge > 0) {\
    an2_merge_result(ail_current_acb(m)->e_result_stack);\
    an2_acb_dec_e_merge(ail_current_acb(m));\
   }\
  while (an2_top_saved(ail_current_acb(m)->context_stack).kind != AN2_EXCEPTION &&\
	 an2_has_more_saved(ail_current_acb(m)->context_stack))\
    an2_drop_saved(ail_current_acb(m)->context_stack);\
  if (an2_has_more_saved(ail_current_acb(m)->context_stack)) {\
    temp_context = an2_pop_saved(ail_current_acb(m)->context_stack);\
    an2_frames_set_top(ail_current_acb(m)->frame_stack, temp_context.frame_index);\
    ail_current_acb(m)->arg_stack = temp_context.args;\
    ail_current_acb(m)->result_stack = temp_context.result;\
    ail_current_acb(m)->e_result_stack = temp_context.e_result;\
    ail_current_acb(m)->e_merge = temp_context.e_merge;\
    ail_current_acb(m)->scope_stack = temp_context.scope;\
    an2_push_result(ail_current_acb(m)->e_result_stack, \
	 	  an2_get_args(ail_current_acb(m)->arg_stack));\
    temp_address = temp_context.continuation;\
  }\
  else {\
    ail_current_acb(m)->exit_status = AN2_EXCEPTIONAL_EXIT;\
    temp_address = NULL;\
  }\
  temp_address;\
})

/* Returning an address (possibly NULL) */
#define ail_fail(m) ({\
  while (an2_top_saved(ail_current_acb(m)->context_stack).kind != AN2_FAILURE &&\
	 an2_has_more_saved(ail_current_acb(m)->context_stack))\
    an2_drop_saved(ail_current_acb(m)->context_stack);\
  if (an2_has_more_saved(ail_current_acb(m)->context_stack)) {\
    temp_context = an2_pop_saved(ail_current_acb(m)->context_stack);\
    an2_frames_set_top(ail_current_acb(m)->frame_stack, temp_context.frame_index);\
    ail_current_acb(m)->arg_stack = temp_context.args;\
    ail_current_acb(m)->result_stack = temp_context.result;\
    ail_current_acb(m)->e_result_stack = temp_context.e_result;\
    ail_current_acb(m)->e_merge = temp_context.e_merge;\
    ail_current_acb(m)->scope_stack = temp_context.scope;\
    temp_address = temp_context.continuation;\
  }\
  else {\
    ail_current_acb(m)->exit_status = AN2_FAILED_EXIT;\
    temp_address = NULL;\
  }\
  temp_address;\
})

#define ail_add(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
     temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
     temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_INT_TYPE) && \
	an2_has_type(temp_data2, AN2_INT_TYPE)) {\
      an2_push_result(ail_current_acb(m)->result_stack,\
		      an2_give_plus(temp_data1, temp_data2));\
      success;\
    } error;\
  } error;}


/*   if (an2_get_args_size(ail_current_acb(m)->arg_stack) == 2) {\ */
/*     temp_data1 = an2_get_arg1(ail_current_acb(m)->arg_stack);\ */
/*     temp_data2 = an2_get_arg2(ail_current_acb(m)->arg_stack);\ */
/*     temp_data = an2_ */
/*     if (an2_has_type(temp_data1, AN2_INT_TYPE) && \ */
/* 	an2_has_type(temp_data2, AN2_INT_TYPE)) {\ */
/*       an2_push_result(ail_current_acb(m)->result_stack,\ */
/* 		      an2_give_plus(temp_data1, temp_data2));\ */
/*       success;\ */
/*     } error;\ */
/*   } error; */


#define ail_sub(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
     temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
     temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_INT_TYPE) && \
	an2_has_type(temp_data2, AN2_INT_TYPE)) {\
      an2_push_result(ail_current_acb(m)->result_stack,\
		      an2_give_minus(temp_data1, temp_data2));\
      success;\
    } error;\
  } error;}

/* {\ */
/*   temp_data = an2_do_give_minus(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_data) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, temp_data);\ */
/*     success;\ */
/*   } error;} */


/*   if (an2_get_args_size(ail_current_acb(m)->arg_stack) == 2) {\ */
/*     temp_data1 = an2_get_arg1(ail_current_acb(m)->arg_stack);\ */
/*     temp_data2 = an2_get_arg2(ail_current_acb(m)->arg_stack);\ */
/*     if (an2_has_type(temp_data1, AN2_INT_TYPE) && \ */
/* 	an2_has_type(temp_data2, AN2_INT_TYPE)) {\ */
/*       an2_push_result(ail_current_acb(m)->result_stack,\ */
/* 		      an2_give_minus(temp_data1, temp_data2));\ */
/*       success;\ */
/*     } error;\ */
/*   } error; */


#define ail_mul(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
     temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
     temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_INT_TYPE) && \
	an2_has_type(temp_data2, AN2_INT_TYPE)) {\
      an2_push_result(ail_current_acb(m)->result_stack,\
		      an2_give_times(temp_data1, temp_data2));\
      success;\
    } error;\
  } error;}

/* {\ */
/*   temp_data = an2_do_give_plus(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_data) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, temp_data);\ */
/*     success;\ */
/*   } error;} */


/*   if (an2_get_args_size(ail_current_acb(m)->arg_stack) == 2) {\ */
/*     temp_data1 = an2_get_arg1(ail_current_acb(m)->arg_stack);\ */
/*     temp_data2 = an2_get_arg2(ail_current_acb(m)->arg_stack);\ */
/*     if (an2_has_type(temp_data1, AN2_INT_TYPE) && \ */
/* 	an2_has_type(temp_data2, AN2_INT_TYPE)) {\ */
/*       an2_push_result(ail_current_acb(m)->result_stack, \ */
/* 		      an2_give_times(temp_data1, temp_data2));\ */
/*     } else error;\ */
/*   } else error; */


#define ail_csub(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
     temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
     temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_INT_TYPE) && \
	an2_has_type(temp_data2, AN2_INT_TYPE)) {\
      an2_push_result(ail_current_acb(m)->result_stack,\
		      an2_give_monus(temp_data1, temp_data2));\
      success;\
    } error;\
  } error;}

/* {\ */
/*   temp_data = an2_do_give_monus(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_data) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, temp_data);\ */
/*     success;\ */
/*   } error;} */


/*   if (an2_get_args_size(ail_current_acb(m)->arg_stack) == 2) {\ */
/*     temp_data1 = an2_get_arg1(ail_current_acb(m)->arg_stack);\ */
/*     temp_data2 = an2_get_arg2(ail_current_acb(m)->arg_stack);\ */
/*     if (an2_has_type(temp_data1, AN2_INT_TYPE) && \ */
/* 	an2_has_type(temp_data2, AN2_INT_TYPE)) {\ */
/*       an2_push_result(ail_current_acb(m)->result_stack, \ */
/* 		      an2_give_monus(temp_data1, temp_data2));\ */
/*     } else error;\ */
/*   } else error; */



#define ail_bind(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
    temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
    temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_TOKEN_TYPE)) { \
      an2_push_result(ail_current_acb(m)->result_stack, \
		      an2_give_binding(temp_data1, temp_data2));\
      success;\
    } error;\
  } error;}

/*   temp_data = an2_do_give_binding(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_data) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, temp_data);\ */
/*     success;\ */
/*   } error;} */


/*   if (an2_get_args_size(ail_current_acb(m)->arg_stack) == 2) {\ */
/*     temp_data1 = an2_get_arg1(ail_current_acb(m)->arg_stack);\ */
/*     temp_data2 = an2_get_arg2(ail_current_acb(m)->arg_stack);\ */
/*     if (an2_has_type(temp_data1, AN2_TOKEN_TYPE)) { \ */
/*       an2_push_result(ail_current_acb(m)->result_stack, \ */
/* 		      an2_give_binding(temp_data1, temp_data2));\ */
/*     } else error;\ */
/*   } else error; */


#define ail_find(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
    temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
    temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_BINDINGS_TYPE) && \
        an2_has_type(temp_data2, AN2_TOKEN_TYPE)) { \
      an2_push_result(ail_current_acb(m)->result_stack, \
		      an2_give_bound(temp_data1, temp_data2));\
      success;\
    } error;\
  } error;}

/*  {\ */
/*   temp_data = an2_do_give_bound(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_data) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, temp_data);\ */
/*     success;\ */
/*   } error;} */


/*   if (an2_get_args_size(ail_current_acb(m)->arg_stack) == 2) {\ */
/*     temp_data1 = an2_get_arg1(ail_current_acb(m)->arg_stack);\ */
/*     temp_data2 = an2_get_arg2(ail_current_acb(m)->arg_stack);\ */
/*     if (an2_has_type(temp_data1, AN2_BINDINGS_TYPE) &&\ */
/* 	an2_has_type(temp_data2, AN2_TOKEN_TYPE)) {\ */
/*       temp_data = an2_give_bound(temp_data1, temp_data2);\ */
/*       if (temp_data) {\ */
/* 	an2_push_result(ail_current_acb(m)->result_stack, temp_data);\ */
/*       } else error;\ */
/*     } else error;\ */
/*   } else error; */

#define ail_not(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_BOOL_TYPE)) {\
       an2_push_result(ail_current_acb(m)->result_stack, an2_give_not(temp_data));\
       success;\
  } error;}

/*   temp_data = an2_do_give_not(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_data) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, temp_data);\ */
/*     success;\ */
/*   } error;} */

/*   if (an2_get_args_size(ail_current_acb(m)->arg_stack) == 1) {\ */
/*     temp_data = an2_get_arg1(ail_current_acb(m)->arg_stack);\ */
/*     if (an2_has_type(temp_data, AN2_BOOL_TYPE)) {\ */
/*       an2_push_result(ail_current_acb(m)->result_stack,\ */
/* 		      an2_give_not(temp_data));\ */
/*     } else error;\ */
/*   } else error; */

#define ail_d_union(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
     temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
     temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_BINDINGS_TYPE) && \
	an2_has_type(temp_data2, AN2_BINDINGS_TYPE)) {\
      an2_push_result(ail_current_acb(m)->result_stack,\
		      an2_give_disjoint_union(temp_data1, temp_data2));\
      success;\
    } error;\
  } error;}

/* {\ */
/*   temp_data = an2_do_give_disjoint_union(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_data) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, temp_data);\ */
/*     success;\ */
/*   } error;} */

/*   if (an2_get_args_size(ail_current_acb(m)->arg_stack) == 2) {\ */
/*     temp_data1 = an2_get_arg1(ail_current_acb(m)->arg_stack);\ */
/*     temp_data2 = an2_get_arg2(ail_current_acb(m)->arg_stack);\ */
/*     if (an2_has_type(temp_data1, AN2_BINDINGS_TYPE) &&\ */
/* 	an2_has_type(temp_data2, AN2_BINDINGS_TYPE)) {\ */
/*       an2_push_result(ail_current_acb(m)->result_stack, \ */
/* 		      an2_give_disjoint_union(temp_data1, temp_data2));\ */
/*     } else error;\ */
/*   } else error; */

#define ail_override(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
     temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
     temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_BINDINGS_TYPE) && \
	an2_has_type(temp_data2, AN2_BINDINGS_TYPE)) {\
      an2_push_result(ail_current_acb(m)->result_stack,\
		      an2_give_overriding(temp_data1, temp_data2));\
      success;\
    } error;\
  } error;}

/* {\ */
/*   temp_data = an2_do_give_overriding(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_data) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, temp_data);\ */
/*     success;\ */
/*   } error;} */

/*   if (an2_get_args_size(ail_current_acb(m)->arg_stack) == 2) {\ */
/*     temp_data1 = an2_get_arg1(ail_current_acb(m)->arg_stack);\ */
/*     temp_data2 = an2_get_arg2(ail_current_acb(m)->arg_stack);\ */
/*     if (an2_has_type(temp_data1, AN2_BINDINGS_TYPE) &&\ */
/* 	an2_has_type(temp_data2, AN2_BINDINGS_TYPE)) {\ */
/*       an2_push_result(ail_current_acb(m)->result_stack, \ */
/* 		      an2_give_overriding(temp_data1, temp_data2));\ */
/*     } else error;\ */
/*   } else error; */

#define ail_then(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data)==2) {\
    temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
    temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_ACTION_TYPE) &&\
	an2_has_type(temp_data2, AN2_ACTION_TYPE)) {\
      if (temp_data = ail_find_cached_functor(m->reflection_cache,\
          AN2_THEN_FUNCTOR,temp_data1,temp_data2))\
        an2_push_result(ail_current_acb(m)->result_stack,temp_data);\
      else {\
        abf_start_stream(m->buffer);\
        abf_add_byte(m->buffer, AIL_gosub_opcode);\
        abf_add_ptr(m->buffer, an2_get_action_address(temp_data1));\
        abf_add_byte(m->buffer, AIL_publish_opcode);\
        abf_add_byte(m->buffer, AIL_gosub_opcode);\
        abf_add_ptr(m->buffer, an2_get_action_address(temp_data2));\
        abf_add_byte(m->buffer, AIL_unpublish_opcode);\
        abf_add_byte(m->buffer, AIL_return_opcode);\
        temp_address = (AN2Address)abf_finish_stream(m->buffer, &temp_int);\
        temp_data = an2_make_action(temp_address,temp_int);\
        an2_push_result(ail_current_acb(m)->result_stack,temp_data);\
        ail_cache_functor(m->reflection_cache,AN2_THEN_FUNCTOR,temp_data1,temp_data2,temp_data);\
      }\
      success;\
    }\
  } error;}

#define ail_and_then(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data)==2) {\
    temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
    temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_ACTION_TYPE) &&\
	an2_has_type(temp_data2, AN2_ACTION_TYPE)) {\
      abf_start_stream(m->buffer);\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data1));\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data2));\
      abf_add_byte(m->buffer, AIL_merge_opcode);\
      abf_add_byte(m->buffer, AIL_return_opcode);\
      temp_address = (AN2Address)abf_finish_stream(m->buffer, &temp_int);\
      an2_push_result(ail_current_acb(m)->result_stack,\
                      an2_make_action(temp_address, temp_int));\
      success;\
    } \
  } error;}

#define ail_and(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data)==2) {\
    temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
    temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_ACTION_TYPE) &&\
	an2_has_type(temp_data2, AN2_ACTION_TYPE)) {\
      abf_start_stream(m->buffer);\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data1));\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data2));\
      abf_add_byte(m->buffer, AIL_merge_opcode);\
      abf_add_byte(m->buffer, AIL_return_opcode);\
      temp_address = (AN2Address)abf_finish_stream(m->buffer, &temp_int);\
      an2_push_result(ail_current_acb(m)->result_stack, an2_make_action(temp_address, temp_int));\
      success;\
    } \
  } error;}

#define ail_provide(m,success,error) {\
  int __i,__j; char *__s; temp_int = 1;\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data,AN2_TUPLE_TYPE)) \
    temp_int = an2_get_tuple_size((AN2Tuple)temp_data);\
  else \
    temp_data = (AN2Data)an2_make_tuple(temp_data);\
  abf_start_stream(m->buffer);\
  for (__i = 1; __i <= temp_int ; __i++) {\
    abf_add_byte(m->buffer, AIL_push_opcode);\
    abf_add_aterm(m->buffer, (AN2Data)an2_get_elt((AN2Tuple)temp_data, __i));\
    if (__i > 1) abf_add_byte(m->buffer, AIL_merge_opcode);\
  }\
  abf_add_byte(m->buffer, AIL_return_opcode);\
  temp_address = abf_finish_stream(m->buffer, &temp_int);\
  an2_push_result(ail_current_acb(m)->result_stack,\
    an2_make_action(temp_address, temp_int));\
  success;}


/* Since labels are offsets we have to skip gosub, address, catche and address. */
#define ail_exceptionally(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data)==2) {\
    temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
    temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_ACTION_TYPE) &&\
	an2_has_type(temp_data2, AN2_ACTION_TYPE)) {\
      abf_start_stream(m->buffer);\
      abf_add_byte(m->buffer, AIL_trye_opcode);\
      abf_add_int(m->buffer, 2 + 2*sizeof(AN2Address));\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data1));\
      abf_add_byte(m->buffer, AIL_catche_opcode);\
      abf_add_int(m->buffer, 3 + sizeof(AN2Address));\
      abf_add_byte(m->buffer, AIL_epublish_opcode);\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data2));\
      abf_add_byte(m->buffer, AIL_unpublish_opcode);\
      abf_add_byte(m->buffer, AIL_return_opcode);\
      temp_address = (AN2Address)abf_finish_stream(m->buffer, &temp_int);\
      an2_push_result(ail_current_acb(m)->result_stack, an2_make_action(temp_address, temp_int));\
      success;\
    } \
  } error;}

#define ail_and_exceptionally(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data)==2) {\
    temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
    temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_ACTION_TYPE) &&\
	an2_has_type(temp_data2, AN2_ACTION_TYPE)) {\
      abf_start_stream(m->buffer);\
      abf_add_byte(m->buffer, AIL_trye_opcode);\
      abf_add_int(m->buffer, 2 + 2*sizeof(AN2Address));\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data1));\
      abf_add_byte(m->buffer, AIL_catche_opcode);\
      abf_add_int(m->buffer, 2 + sizeof(AN2Address));\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data2));\
      abf_add_byte(m->buffer, AIL_emerge_opcode);\
      abf_add_byte(m->buffer, AIL_return_opcode);\
      temp_address = (AN2Address)abf_finish_stream(m->buffer, &temp_int);\
      an2_push_result(ail_current_acb(m)->result_stack, an2_make_action(temp_address, temp_int));\
      success;\
    } \
  } error;}

#define ail_otherwise(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data)==2) {\
    temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
    temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_ACTION_TYPE) &&\
	an2_has_type(temp_data2, AN2_ACTION_TYPE)) {\
      abf_start_stream(m->buffer);\
      abf_add_byte(m->buffer, AIL_tryf_opcode);\
      abf_add_int(m->buffer, 2 + 2*sizeof(AN2Address));\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data1));\
      abf_add_byte(m->buffer, AIL_catchf_opcode);\
      abf_add_int(m->buffer, 1 + sizeof(AN2Address));\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data2));\
      abf_add_byte(m->buffer, AIL_return_opcode);\
      temp_address = (AN2Address)abf_finish_stream(m->buffer, &temp_int);\
      an2_push_result(ail_current_acb(m)->result_stack, an2_make_action(temp_address, temp_int));\
      success;\
    } \
  } error;}

#define ail_indivisibly(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
    if (an2_has_type(temp_data, AN2_ACTION_TYPE)) {\
      abf_start_stream(m->buffer);\
      abf_add_byte(m->buffer, AIL_lock_opcode);\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data));\
      abf_add_byte(m->buffer, AIL_unlock_opcode);\
      abf_add_byte(m->buffer, AIL_return_opcode);\
      temp_address = (AN2Address)abf_finish_stream(m->buffer, &temp_int);\
      an2_push_result(ail_current_acb(m)->result_stack,\
                      an2_make_action(temp_address, temp_int));\
    }  error;}

#define ail_hence(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data)==2) {\
    temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
    temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_ACTION_TYPE) &&\
	an2_has_type(temp_data2, AN2_ACTION_TYPE)) {\
      abf_start_stream(m->buffer);\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data1));\
      abf_add_byte(m->buffer, AIL_enter_opcode);\
      abf_add_byte(m->buffer, AIL_gosub_opcode);\
      abf_add_ptr(m->buffer, an2_get_action_address(temp_data2));\
      abf_add_byte(m->buffer, AIL_leave_opcode);\
      abf_add_byte(m->buffer, AIL_return_opcode);\
      temp_address = (AN2Address)abf_finish_stream(m->buffer, &temp_int);\
      an2_push_result(ail_current_acb(m)->result_stack,\
                      an2_make_action(temp_address, temp_int));\
      success;\
    } \
  } error;}

#define ail_cast(m,type,success,error) {\
  AN2Type __type = type;\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_type_equal(__type,AN2_DATA_CASTABLE_TYPE)) {\
    an2_push_result(ail_current_acb(m)->result_stack,temp_data);\
    success;\
  } \
  if (an2_type_equal(__type, AN2_DATUM_CASTABLE_TYPE) &&\
      (!an2_has_type(temp_data,AN2_TUPLE_TYPE))) {\
    an2_push_result(ail_current_acb(m)->result_stack,temp_data);\
    success;\
  } \
  if (an2_has_type(temp_data, __type)) {\
    an2_push_result(ail_current_acb(m)->result_stack, temp_data);\
    success;\
  } error;}

#define ail_component(m,n,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE)) {\
    temp_int = an2_get_tuple_size(temp_data);\
    if (temp_int > 1 && temp_int >= (n)) {\
      an2_push_result(ail_current_acb(m)->result_stack, \
  		      an2_get_elt((AN2Tuple)temp_data,(n)));\
      success;\
    }\
  } error;}

#define ail_equals(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) {\
    temp_int = an2_check_equals(an2_get_elt1((AN2Tuple)temp_data),an2_get_elt2((AN2Tuple)temp_data));\
    if (temp_int) {\
      an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\
      success;\
    }\
  } error;}

#define ail_less_than(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
     temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
     temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
     if (an2_has_type(temp_data1, AN2_INT_TYPE) && an2_has_type(temp_data2, AN2_INT_TYPE)) {\
       temp_int = an2_check_less_than(temp_data1,temp_data2);\
       if (temp_int) {\
         an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\
         success;\
       }\
     }\
  } error;}

/* {\ */
/*   temp_int = an2_do_check_less_than(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_int) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\ */
/*     success;\ */
/*   }\ */
/*   error;} */

#define ail_greater_than(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
     temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
     temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
     if (an2_has_type(temp_data1, AN2_INT_TYPE) && an2_has_type(temp_data2, AN2_INT_TYPE)) {\
       temp_int = an2_check_greater_than(temp_data1,temp_data2);\
       if (temp_int) {\
         an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\
         success;\
       }\
     }\
  } error;}

/* {\ */
/*   temp_int = an2_do_check_greater_than(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_int) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\ */
/*     success;\ */
/*   }\ */
/*   error;} */

#define ail_less_than_or_eq(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
     temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
     temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
     if (an2_has_type(temp_data1, AN2_INT_TYPE) && an2_has_type(temp_data2, AN2_INT_TYPE)) {\
       temp_int = an2_check_less_than_or_eq(temp_data1,temp_data2);\
       if (temp_int) {\
         an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\
         success;\
       }\
     }\
  } error;}

/* {\ */
/*   temp_int = an2_do_check_less_than_or_eq(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_int) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\ */
/*     success;\ */
/*   }\ */
/*   error;} */


#define ail_greater_than_or_eq(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 2) { \
     temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
     temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
     if (an2_has_type(temp_data1, AN2_INT_TYPE) && an2_has_type(temp_data2, AN2_INT_TYPE)) {\
       temp_int = an2_check_greater_than_or_eq(temp_data1,temp_data2);\
       if (temp_int) {\
         an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\
         success;\
       }\
     }\
  } error;}

/* {\ */
/*   temp_int = an2_do_check_greater_than_or_eq(an2_top_args(ail_current_acb(m)->arg_stack));\ */
/*   if (temp_int) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\ */
/*     success;\ */
/*   }\ */
/*   error;} */


#define ail_push(m,d) (an2_push_result(ail_current_acb(m)->result_stack, d))

/*   if (type == AN2_EMPTY_TYPE) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\ */
/*   }\ */
/*   else if (type == AN2_BINDINGS_TYPE) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, an2_make_no_bindings());\ */
/*   }\ */
/*   else if (type == AN2_TOKEN_TYPE) {\ */
/*     temp_data = an2_make_token(abf_get_token_table(the_program)+n);\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, temp_data);\ */
/*   }\ */
/*   else if (type == AN2_STATIC_ACTION_TYPE) {\ */
/*     temp_address = (AN2Address)malloc(6);\ */
/*     temp_address[0] = AIL_gosub;\ */
/*     *((AN2Address*)(temp_address+1)) = an2_top_frame(ail_current_acb(m)->frame_stack).stail_address \ */
/*       + n;\ */
/*     temp_address[5] = AIL_return;\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, an2_make_action(temp_address, 6));\ */
/*   }\ */
/*   else if (type == AN2_INT_TYPE) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, an2_make_int(n));\ */
/*   }\ */
/*   else if (type == AN2_BOOL_TYPE) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, an2_make_bool(n));\ */
/*   }\ */
/*   else if (type == AN2_MESSAGETAG_TYPE) {\ */
/*     an2_push_result(ail_current_acb(m)->result_stack, an2_make_messagetag(n));\ */
/*   }\ */
/*   else error; */

#define ail_create(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (!an2_has_type(temp_data,AN2_TUPLE_TYPE)) {\
    temp_data1 = an2_make_cell(m->cell_counter++);\
    an2_update_cell(m->store, temp_data1, temp_data);\
    an2_push_result(ail_current_acb(m)->result_stack, temp_data1);\
    success;\
  } error;}

#define ail_inspect(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_CELL_TYPE)) {\
    temp_data = an2_inspect_cell(m->store, temp_data);\
    if (temp_data != NULL) {\
      an2_push_result(ail_current_acb(m)->result_stack, temp_data);\
      success;\
    } \
 } error;}

#define ail_destroy(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_CELL_TYPE)) {\
    if (an2_check_cell(m->store, temp_data)) {\
      an2_destroy_cell(m->store, temp_data);\
      an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\
      success;\
    } \
 } error;}

/* {\ */
/*   if (an2_get_args_size(ail_current_acb(m)->arg_stack) == 1) {\ */
/*     temp_data = an2_get_arg1(ail_current_acb(m)->arg_stack);\ */
/*     if (an2_has_type(temp_data, AN2_CELL_TYPE)) {\ */
/*       if (an2_check_cell(m->store, temp_data)) {\ */
/* 	an2_destroy_cell(m->store, temp_data);\ */
/* 	an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\ */
/*         success;\ */
/*       } \ */
/*     } \ */
/*   } error;} */

#define ail_update(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data, AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data)==2) {\
    temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
    temp_data2 = an2_get_elt2((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_CELL_TYPE)) {\
      if (an2_check_cell(m->store, temp_data1)) {\
	an2_update_cell(m->store, temp_data1, temp_data2);\
	an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\
        success;\
      }\
    }\
  } error;}

#ifdef MULTI_THREADING

#define ail_activate(m,success,error) {\
    temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
    if (an2_has_type(temp_data, AN2_ACTION_TYPE)) {\
      an2_init_acb(&temp_acb);\
      temp_data2 = an2_make_agent(temp_acb);\
      temp_address = an2_get_action_address(temp_data);\
      an2_init_frame(&temp_frame, temp_address, NULL);\
      an2_push_frame(temp_acb->frame_stack, temp_frame);\
      temp_acb->action = temp_data;\
      temp_acb->agent = temp_data2;\
      temp_acb->pc = temp_address;\
      an2_schedule_prepend_acb(m->schedule, temp_acb);\
      an2_push_result(ail_current_acb(m)->result_stack, temp_data2);\
      success;\
    } error;}

#define ail_deactivate(m,success,error) {\
    temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
    if (an2_has_type(temp_data, AN2_AGENT_TYPE)) {\
      assert(!an2_is_empty_schedule(m->schedule));\
      an2_schedule_remove_acb(m->schedule, an2_get_agent_acb(temp_data));\
      an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\
      success;\
    } error;}

#define ail_send(m,success,error) {\
  temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
  if (an2_has_type(temp_data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)temp_data) == 3) {\
    temp_data1 = an2_get_elt1((AN2Tuple)temp_data);\
    temp_data = an2_get_elt2((AN2Tuple)temp_data);\
    temp_data2 = an2_get_elt3((AN2Tuple)temp_data);\
    if (an2_has_type(temp_data1, AN2_AGENT_TYPE) &&\
	an2_has_type(temp_data2, AN2_MESSAGETAG_TYPE)) {\
      temp_acb = an2_get_agent_acb(temp_data1);\
      an2_queue_message(temp_acb->tagged_buffers, temp_data2, temp_data);\
      an2_push_result(ail_current_acb(m)->result_stack, an2_make_empty());\
      success;\
    } \
  } error;}

#define ail_receive(m,success,error) {\
    temp_data = an2_get_args(ail_current_acb(m)->arg_stack);\
    if (an2_has_type(temp_data, AN2_MESSAGETAG_TYPE)) {\
      temp_data = an2_dequeue_message(ail_current_acb(m)->tagged_buffers, temp_data);\
      if (temp_data != NULL) {\
        an2_push_result(ail_current_acb(m)->result_stack, temp_data);\
        success;\
      }\
    } error;}

#define ail_time(m,success,error) {\
  an2_push_result(ail_current_acb(m)->result_stack,\
    an2_make_int(time(NULL))); success;}

#define ail_agent(m,success,error) {\
  an2_push_result(ail_current_acb(m)->result_stack,\
    ail_current_acb(m)->agent); success;}

#else

#define mt_error() an2_error("Multithreading not enabled.")

#define ail_activate(m,success,error) mt_error()
#define ail_deactivate(m,success,error) mt_error()
#define ail_send(m,success,error) mt_error()
#define ail_receive(m,success,error) mt_error()
#define ail_time(m,success,error) mt_error()
#define ail_agent(m,success,error) mt_error()

#endif /* MULTI_THREADING */

#define ail_scope(m,success,error) {\
  an2_push_result(ail_current_acb(m)->result_stack,\
    an2_top_scope(ail_current_acb(m)->scope_stack)); success;}

#define ail_random(m,success,error) {\
  an2_push_result(ail_current_acb(m)->result_stack,\
    an2_make_int(rand())); success;}


#define ail_pushr(m,ptr,size,success,error) {\
  an2_push_result(ail_current_acb(m)->result_stack, an2_make_action(ptr,size));\
  success;}
  

#define ail_gosub(m,adr,ret) ({\
      temp_frame.start_address = adr;\
      temp_frame.return_address = ret;\
      an2_push_frame(ail_current_acb(m)->frame_stack, temp_frame);\
      adr;})

#define ail_merge(m,success,error) {\
  an2_merge_result(ail_current_acb(m)->result_stack); success;}

#define ail_emerge(m,success,error) {\
  ail_current_acb(m)->e_merge++; success;}

#define ail_copy(m,success,error) {\
    an2_push_result(ail_current_acb(m)->result_stack,\
     an2_get_args(ail_current_acb(m)->arg_stack)); success;}

#define ail_tupleToList(m,success,error) {\
    an2_push_result(ail_current_acb(m)->result_stack,\
      an2_give_tupleToList(an2_get_args(ail_current_acb(m)->arg_stack))); success;}



#endif
