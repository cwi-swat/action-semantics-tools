#ifndef __TEST__H
#define __TEST__H 1

#include <aterm2.h>
#include <ail.h>

#define AN2_abs_opcode 0
#define AN2_prov_opcode 1
#define AN2_eprov_opcode 2
#define AN2_publish_opcode 3
#define AN2_epublish_opcode 4
#define AN2_unpublish_opcode 5
#define AN2_enter_opcode 6
#define AN2_leave_opcode 7
#define AN2_trye_opcode 8
#define AN2_tryf_opcode 9
#define AN2_catch_opcode 10
#define AN2_goto_opcode 11
#define AN2_return_opcode 12
#define AN2_lock_opcode 13
#define AN2_unlock_opcode 14
#define AN2_call_opcode 15
#define AN2_enact_opcode 16
#define AN2_raise_opcode 17
#define AN2_throw_opcode 18
#define AN2_fail_opcode 19
#define AN2_merge_opcode 20
#define AN2_emerge_opcode 21
#define AN2_push_opcode 22
#define AN2_epush_opcode 23
#define AN2_copy_opcode 24
#define AN2_ecopy_opcode 25
#define AN2_create_opcode 26
#define AN2_inspect_opcode 27
#define AN2_destroy_opcode 28
#define AN2_update_opcode 29
#define AN2_activate_opcode 30
#define AN2_deactivate_opcode 31
#define AN2_send_opcode 32
#define AN2_receive_opcode 33
#define AN2_time_opcode 34
#define AN2_agent_opcode 35
#define AN2_scope_opcode 36
#define AN2_random_opcode 37
#define AN2_add_opcode 38
#define AN2_sub_opcode 39
#define AN2_mul_opcode 40
#define AN2_csub_opcode 41
#define AN2_bind_opcode 42
#define AN2_find_opcode 43
#define AN2_not_opcode 44
#define AN2_override_opcode 45
#define AN2_d_union_opcode 46
#define AN2_then_opcode 47
#define AN2_and_then_opcode 48
#define AN2_and_opcode 49
#define AN2_provide_opcode 50
#define AN2_exceptionally_opcode 51
#define AN2_and_exceptionally_opcode 52
#define AN2_otherwise_opcode 53
#define AN2_indivisibly_opcode 54
#define AN2_hence_opcode 55
#define AN2_cast_opcode 56
#define AN2_component_opcode 57
#define AN2_eq_opcode 58
#define AN2_lt_opcode 59
#define AN2_gt_opcode 60
#define AN2_leq_opcode 61
#define AN2_geq_opcode 62
#define AN2_tupleToList_opcode 63

#define AN2_num_of_instructions 64
#define AN2_lowest_opcode 0
#define AN2_highest_opcode 63

#define AN2_DECLARE_TEST_OPCODE_TABLE() \
static void *AN2_opcode_labels[] = {\
	[AN2_abs_opcode] &&do_abs,\
	[AN2_prov_opcode] &&do_prov,\
	[AN2_eprov_opcode] &&do_eprov,\
	[AN2_publish_opcode] &&do_publish,\
	[AN2_epublish_opcode] &&do_epublish,\
	[AN2_unpublish_opcode] &&do_unpublish,\
	[AN2_enter_opcode] &&do_enter,\
	[AN2_leave_opcode] &&do_leave,\
	[AN2_trye_opcode] &&do_trye,\
	[AN2_tryf_opcode] &&do_tryf,\
	[AN2_catch_opcode] &&do_catch,\
	[AN2_goto_opcode] &&do_goto,\
	[AN2_return_opcode] &&do_return,\
	[AN2_lock_opcode] &&do_lock,\
	[AN2_unlock_opcode] &&do_unlock,\
	[AN2_call_opcode] &&do_call,\
	[AN2_enact_opcode] &&do_enact,\
	[AN2_raise_opcode] &&do_raise,\
	[AN2_throw_opcode] &&do_throw,\
	[AN2_fail_opcode] &&do_fail,\
	[AN2_merge_opcode] &&do_merge,\
	[AN2_emerge_opcode] &&do_emerge,\
	[AN2_push_opcode] &&do_push,\
	[AN2_epush_opcode] &&do_epush,\
	[AN2_copy_opcode] &&do_copy,\
	[AN2_ecopy_opcode] &&do_ecopy,\
	[AN2_create_opcode] &&do_create,\
	[AN2_inspect_opcode] &&do_inspect,\
	[AN2_destroy_opcode] &&do_destroy,\
	[AN2_update_opcode] &&do_update,\
	[AN2_activate_opcode] &&do_activate,\
	[AN2_deactivate_opcode] &&do_deactivate,\
	[AN2_send_opcode] &&do_send,\
	[AN2_receive_opcode] &&do_receive,\
	[AN2_time_opcode] &&do_time,\
	[AN2_agent_opcode] &&do_agent,\
	[AN2_scope_opcode] &&do_scope,\
	[AN2_random_opcode] &&do_random,\
	[AN2_add_opcode] &&do_add,\
	[AN2_sub_opcode] &&do_sub,\
	[AN2_mul_opcode] &&do_mul,\
	[AN2_csub_opcode] &&do_csub,\
	[AN2_bind_opcode] &&do_bind,\
	[AN2_find_opcode] &&do_find,\
	[AN2_not_opcode] &&do_not,\
	[AN2_override_opcode] &&do_override,\
	[AN2_d_union_opcode] &&do_d_union,\
	[AN2_then_opcode] &&do_then,\
	[AN2_and_then_opcode] &&do_and_then,\
	[AN2_and_opcode] &&do_and,\
	[AN2_provide_opcode] &&do_provide,\
	[AN2_exceptionally_opcode] &&do_exceptionally,\
	[AN2_and_exceptionally_opcode] &&do_and_exceptionally,\
	[AN2_otherwise_opcode] &&do_otherwise,\
	[AN2_indivisibly_opcode] &&do_indivisibly,\
	[AN2_hence_opcode] &&do_hence,\
	[AN2_cast_opcode] &&do_cast,\
	[AN2_component_opcode] &&do_component,\
	[AN2_eq_opcode] &&do_eq,\
	[AN2_lt_opcode] &&do_lt,\
	[AN2_gt_opcode] &&do_gt,\
	[AN2_leq_opcode] &&do_leq,\
	[AN2_geq_opcode] &&do_geq,\
	[AN2_tupleToList_opcode] &&do_tupleToList\
}

#define AN2_goto(op) goto *(AN2_opcode_labels[(op)])

#ifndef AN2_perform_abs
#define AN2_perform_abs(x,arg) ATabort("abs not (yet) supported.\n")
#endif
#ifndef AN2_perform_prov
#define AN2_perform_prov(x,arg) ATabort("prov not (yet) supported.\n")
#endif
#ifndef AN2_perform_eprov
#define AN2_perform_eprov(x,arg) ATabort("eprov not (yet) supported.\n")
#endif
#ifndef AN2_perform_publish
#define AN2_perform_publish(x) ATabort("publish not (yet) supported.\n")
#endif
#ifndef AN2_perform_epublish
#define AN2_perform_epublish(x) ATabort("epublish not (yet) supported.\n")
#endif
#ifndef AN2_perform_unpublish
#define AN2_perform_unpublish(x) ATabort("unpublish not (yet) supported.\n")
#endif
#ifndef AN2_perform_enter
#define AN2_perform_enter(x) ATabort("enter not (yet) supported.\n")
#endif
#ifndef AN2_perform_leave
#define AN2_perform_leave(x) ATabort("leave not (yet) supported.\n")
#endif
#ifndef AN2_perform_trye
#define AN2_perform_trye(x,arg) ATabort("trye not (yet) supported.\n")
#endif
#ifndef AN2_perform_tryf
#define AN2_perform_tryf(x,arg) ATabort("tryf not (yet) supported.\n")
#endif
#ifndef AN2_perform_catch
#define AN2_perform_catch(x,arg) ATabort("catch not (yet) supported.\n")
#endif
#ifndef AN2_perform_goto
#define AN2_perform_goto(x,arg) ATabort("goto not (yet) supported.\n")
#endif
#ifndef AN2_perform_return
#define AN2_perform_return(x) ATabort("return not (yet) supported.\n")
#endif
#ifndef AN2_perform_lock
#define AN2_perform_lock(x) ATabort("lock not (yet) supported.\n")
#endif
#ifndef AN2_perform_unlock
#define AN2_perform_unlock(x) ATabort("unlock not (yet) supported.\n")
#endif
#ifndef AN2_perform_call
#define AN2_perform_call(x,arg) ATabort("call not (yet) supported.\n")
#endif
#ifndef AN2_perform_enact
#define AN2_perform_enact(x) ATabort("enact not (yet) supported.\n")
#endif
#ifndef AN2_perform_raise
#define AN2_perform_raise(x) ATabort("raise not (yet) supported.\n")
#endif
#ifndef AN2_perform_throw
#define AN2_perform_throw(x) ATabort("throw not (yet) supported.\n")
#endif
#ifndef AN2_perform_fail
#define AN2_perform_fail(x) ATabort("fail not (yet) supported.\n")
#endif
#ifndef AN2_perform_merge
#define AN2_perform_merge(x) ATabort("merge not (yet) supported.\n")
#endif
#ifndef AN2_perform_emerge
#define AN2_perform_emerge(x) ATabort("emerge not (yet) supported.\n")
#endif
#ifndef AN2_perform_push
#define AN2_perform_push(x) ATabort("push not (yet) supported.\n")
#endif
#ifndef AN2_perform_epush
#define AN2_perform_epush(x) ATabort("epush not (yet) supported.\n")
#endif
#ifndef AN2_perform_copy
#define AN2_perform_copy(x) ATabort("copy not (yet) supported.\n")
#endif
#ifndef AN2_perform_ecopy
#define AN2_perform_ecopy(x) ATabort("ecopy not (yet) supported.\n")
#endif
#ifndef AN2_perform_create
#define AN2_perform_create(x) ATabort("create not (yet) supported.\n")
#endif
#ifndef AN2_perform_inspect
#define AN2_perform_inspect(x) ATabort("inspect not (yet) supported.\n")
#endif
#ifndef AN2_perform_destroy
#define AN2_perform_destroy(x) ATabort("destroy not (yet) supported.\n")
#endif
#ifndef AN2_perform_update
#define AN2_perform_update(x) ATabort("update not (yet) supported.\n")
#endif
#ifndef AN2_perform_activate
#define AN2_perform_activate(x) ATabort("activate not (yet) supported.\n")
#endif
#ifndef AN2_perform_deactivate
#define AN2_perform_deactivate(x) ATabort("deactivate not (yet) supported.\n")
#endif
#ifndef AN2_perform_send
#define AN2_perform_send(x) ATabort("send not (yet) supported.\n")
#endif
#ifndef AN2_perform_receive
#define AN2_perform_receive(x) ATabort("receive not (yet) supported.\n")
#endif
#ifndef AN2_perform_time
#define AN2_perform_time(x) ATabort("time not (yet) supported.\n")
#endif
#ifndef AN2_perform_agent
#define AN2_perform_agent(x) ATabort("agent not (yet) supported.\n")
#endif
#ifndef AN2_perform_scope
#define AN2_perform_scope(x) ATabort("scope not (yet) supported.\n")
#endif
#ifndef AN2_perform_random
#define AN2_perform_random(x) ATabort("random not (yet) supported.\n")
#endif
#ifndef AN2_perform_add
#define AN2_perform_add(x) ATabort("add not (yet) supported.\n")
#endif
#ifndef AN2_perform_sub
#define AN2_perform_sub(x) ATabort("sub not (yet) supported.\n")
#endif
#ifndef AN2_perform_mul
#define AN2_perform_mul(x) ATabort("mul not (yet) supported.\n")
#endif
#ifndef AN2_perform_csub
#define AN2_perform_csub(x) ATabort("csub not (yet) supported.\n")
#endif
#ifndef AN2_perform_bind
#define AN2_perform_bind(x) ATabort("bind not (yet) supported.\n")
#endif
#ifndef AN2_perform_find
#define AN2_perform_find(x) ATabort("find not (yet) supported.\n")
#endif
#ifndef AN2_perform_not
#define AN2_perform_not(x) ATabort("not not (yet) supported.\n")
#endif
#ifndef AN2_perform_override
#define AN2_perform_override(x) ATabort("override not (yet) supported.\n")
#endif
#ifndef AN2_perform_d_union
#define AN2_perform_d_union(x) ATabort("d_union not (yet) supported.\n")
#endif
#ifndef AN2_perform_then
#define AN2_perform_then(x) ATabort("then not (yet) supported.\n")
#endif
#ifndef AN2_perform_and_then
#define AN2_perform_and_then(x) ATabort("and_then not (yet) supported.\n")
#endif
#ifndef AN2_perform_and
#define AN2_perform_and(x) ATabort("and not (yet) supported.\n")
#endif
#ifndef AN2_perform_provide
#define AN2_perform_provide(x) ATabort("provide not (yet) supported.\n")
#endif
#ifndef AN2_perform_exceptionally
#define AN2_perform_exceptionally(x) ATabort("exceptionally not (yet) supported.\n")
#endif
#ifndef AN2_perform_and_exceptionally
#define AN2_perform_and_exceptionally(x) ATabort("and_exceptionally not (yet) supported.\n")
#endif
#ifndef AN2_perform_otherwise
#define AN2_perform_otherwise(x) ATabort("otherwise not (yet) supported.\n")
#endif
#ifndef AN2_perform_indivisibly
#define AN2_perform_indivisibly(x) ATabort("indivisibly not (yet) supported.\n")
#endif
#ifndef AN2_perform_hence
#define AN2_perform_hence(x) ATabort("hence not (yet) supported.\n")
#endif
#ifndef AN2_perform_cast
#define AN2_perform_cast(x,arg) ATabort("cast not (yet) supported.\n")
#endif
#ifndef AN2_perform_component
#define AN2_perform_component(x,arg) ATabort("component not (yet) supported.\n")
#endif
#ifndef AN2_perform_eq
#define AN2_perform_eq(x) ATabort("eq not (yet) supported.\n")
#endif
#ifndef AN2_perform_lt
#define AN2_perform_lt(x) ATabort("lt not (yet) supported.\n")
#endif
#ifndef AN2_perform_gt
#define AN2_perform_gt(x) ATabort("gt not (yet) supported.\n")
#endif
#ifndef AN2_perform_leq
#define AN2_perform_leq(x) ATabort("leq not (yet) supported.\n")
#endif
#ifndef AN2_perform_geq
#define AN2_perform_geq(x) ATabort("geq not (yet) supported.\n")
#endif
#ifndef AN2_perform_tupleToList
#define AN2_perform_tupleToList(x) ATabort("tupleToList not (yet) supported.\n")
#endif


#define AN2_interpreter(x,abf) {\
  do_abs:\
    abf_skip_byte(abf);\
    {\
      AIL_ByteCode bc = AIL_readFromABF(abf);\
      AIL_skipInABF(abf);\
      AN2_perform_abs(x, bc);\
    }\
    AN2_goto(abf);\
  do_prov:\
    abf_skip_byte(abf);\
    {\
      ATerm d = abf_get_aterm(abf);\
      abf_skip_aterm(abf);\
      AN2_perform_prov(x, d);\
    }\
    AN2_goto(abf);\
  do_eprov:\
    abf_skip_byte(abf);\
    {\
      ATerm d = abf_get_aterm(abf);\
      abf_skip_aterm(abf);\
      AN2_perform_eprov(x, d);\
    }\
    AN2_goto(abf);\
  do_publish:\
    abf_skip_byte(abf);\
    AN2_perform_publish(x);\
    AN2_goto(abf);\
  do_epublish:\
    abf_skip_byte(abf);\
    AN2_perform_epublish(x);\
    AN2_goto(abf);\
  do_unpublish:\
    abf_skip_byte(abf);\
    AN2_perform_unpublish(x);\
    AN2_goto(abf);\
  do_enter:\
    abf_skip_byte(abf);\
    AN2_perform_enter(x);\
    AN2_goto(abf);\
  do_leave:\
    abf_skip_byte(abf);\
    AN2_perform_leave(x);\
    AN2_goto(abf);\
  do_trye:\
    abf_skip_byte(abf);\
    {\
      void *label = abf_get_int(abf)+abf;\
      abf_skip_int(abf);\
      AN2_perform_trye(x, label);\
    }\
    AN2_goto(abf);\
  do_tryf:\
    abf_skip_byte(abf);\
    {\
      void *label = abf_get_int(abf)+abf;\
      abf_skip_int(abf);\
      AN2_perform_tryf(x, label);\
    }\
    AN2_goto(abf);\
  do_catch:\
    abf_skip_byte(abf);\
    {\
      void *label = abf_get_int(abf)+abf;\
      abf_skip_int(abf);\
      AN2_perform_catch(x, label);\
    }\
    AN2_goto(abf);\
  do_goto:\
    abf_skip_byte(abf);\
    {\
      void *label = abf_get_int(abf)+abf;\
      abf_skip_int(abf);\
      AN2_perform_goto(x, label);\
    }\
    AN2_goto(abf);\
  do_return:\
    abf_skip_byte(abf);\
    AN2_perform_return(x);\
    AN2_goto(abf);\
  do_lock:\
    abf_skip_byte(abf);\
    AN2_perform_lock(x);\
    AN2_goto(abf);\
  do_unlock:\
    abf_skip_byte(abf);\
    AN2_perform_unlock(x);\
    AN2_goto(abf);\
  do_call:\
    abf_skip_byte(abf);\
    {\
      void *label = abf_get_int(abf)+abf;\
      abf_skip_int(abf);\
      AN2_perform_call(x, label);\
    }\
    AN2_goto(abf);\
  do_enact:\
    abf_skip_byte(abf);\
    AN2_perform_enact(x);\
    AN2_goto(abf);\
  do_raise:\
    abf_skip_byte(abf);\
    AN2_perform_raise(x);\
    AN2_goto(abf);\
  do_throw:\
    abf_skip_byte(abf);\
    AN2_perform_throw(x);\
    AN2_goto(abf);\
  do_fail:\
    abf_skip_byte(abf);\
    AN2_perform_fail(x);\
    AN2_goto(abf);\
  do_merge:\
    abf_skip_byte(abf);\
    AN2_perform_merge(x);\
    AN2_goto(abf);\
  do_emerge:\
    abf_skip_byte(abf);\
    AN2_perform_emerge(x);\
    AN2_goto(abf);\
  do_push:\
    abf_skip_byte(abf);\
    AN2_perform_push(x);\
    AN2_goto(abf);\
  do_epush:\
    abf_skip_byte(abf);\
    AN2_perform_epush(x);\
    AN2_goto(abf);\
  do_copy:\
    abf_skip_byte(abf);\
    AN2_perform_copy(x);\
    AN2_goto(abf);\
  do_ecopy:\
    abf_skip_byte(abf);\
    AN2_perform_ecopy(x);\
    AN2_goto(abf);\
  do_create:\
    abf_skip_byte(abf);\
    AN2_perform_create(x);\
    AN2_goto(abf);\
  do_inspect:\
    abf_skip_byte(abf);\
    AN2_perform_inspect(x);\
    AN2_goto(abf);\
  do_destroy:\
    abf_skip_byte(abf);\
    AN2_perform_destroy(x);\
    AN2_goto(abf);\
  do_update:\
    abf_skip_byte(abf);\
    AN2_perform_update(x);\
    AN2_goto(abf);\
  do_activate:\
    abf_skip_byte(abf);\
    AN2_perform_activate(x);\
    AN2_goto(abf);\
  do_deactivate:\
    abf_skip_byte(abf);\
    AN2_perform_deactivate(x);\
    AN2_goto(abf);\
  do_send:\
    abf_skip_byte(abf);\
    AN2_perform_send(x);\
    AN2_goto(abf);\
  do_receive:\
    abf_skip_byte(abf);\
    AN2_perform_receive(x);\
    AN2_goto(abf);\
  do_time:\
    abf_skip_byte(abf);\
    AN2_perform_time(x);\
    AN2_goto(abf);\
  do_agent:\
    abf_skip_byte(abf);\
    AN2_perform_agent(x);\
    AN2_goto(abf);\
  do_scope:\
    abf_skip_byte(abf);\
    AN2_perform_scope(x);\
    AN2_goto(abf);\
  do_random:\
    abf_skip_byte(abf);\
    AN2_perform_random(x);\
    AN2_goto(abf);\
  do_add:\
    abf_skip_byte(abf);\
    AN2_perform_add(x);\
    AN2_goto(abf);\
  do_sub:\
    abf_skip_byte(abf);\
    AN2_perform_sub(x);\
    AN2_goto(abf);\
  do_mul:\
    abf_skip_byte(abf);\
    AN2_perform_mul(x);\
    AN2_goto(abf);\
  do_csub:\
    abf_skip_byte(abf);\
    AN2_perform_csub(x);\
    AN2_goto(abf);\
  do_bind:\
    abf_skip_byte(abf);\
    AN2_perform_bind(x);\
    AN2_goto(abf);\
  do_find:\
    abf_skip_byte(abf);\
    AN2_perform_find(x);\
    AN2_goto(abf);\
  do_not:\
    abf_skip_byte(abf);\
    AN2_perform_not(x);\
    AN2_goto(abf);\
  do_override:\
    abf_skip_byte(abf);\
    AN2_perform_override(x);\
    AN2_goto(abf);\
  do_d_union:\
    abf_skip_byte(abf);\
    AN2_perform_d_union(x);\
    AN2_goto(abf);\
  do_then:\
    abf_skip_byte(abf);\
    AN2_perform_then(x);\
    AN2_goto(abf);\
  do_and_then:\
    abf_skip_byte(abf);\
    AN2_perform_and_then(x);\
    AN2_goto(abf);\
  do_and:\
    abf_skip_byte(abf);\
    AN2_perform_and(x);\
    AN2_goto(abf);\
  do_provide:\
    abf_skip_byte(abf);\
    AN2_perform_provide(x);\
    AN2_goto(abf);\
  do_exceptionally:\
    abf_skip_byte(abf);\
    AN2_perform_exceptionally(x);\
    AN2_goto(abf);\
  do_and_exceptionally:\
    abf_skip_byte(abf);\
    AN2_perform_and_exceptionally(x);\
    AN2_goto(abf);\
  do_otherwise:\
    abf_skip_byte(abf);\
    AN2_perform_otherwise(x);\
    AN2_goto(abf);\
  do_indivisibly:\
    abf_skip_byte(abf);\
    AN2_perform_indivisibly(x);\
    AN2_goto(abf);\
  do_hence:\
    abf_skip_byte(abf);\
    AN2_perform_hence(x);\
    AN2_goto(abf);\
  do_cast:\
    abf_skip_byte(abf);\
    {\
      ATerm d = abf_get_aterm(abf);\
      abf_skip_aterm(abf);\
      AN2_perform_cast(x, d);\
    }\
    AN2_goto(abf);\
  do_component:\
    abf_skip_byte(abf);\
    {\
      int n = abf_get_int(abf);\
      abf_skip_int(abf);\
      AN2_perform_component(x, n);\
    }\
    AN2_goto(abf);\
  do_eq:\
    abf_skip_byte(abf);\
    AN2_perform_eq(x);\
    AN2_goto(abf);\
  do_lt:\
    abf_skip_byte(abf);\
    AN2_perform_lt(x);\
    AN2_goto(abf);\
  do_gt:\
    abf_skip_byte(abf);\
    AN2_perform_gt(x);\
    AN2_goto(abf);\
  do_leq:\
    abf_skip_byte(abf);\
    AN2_perform_leq(x);\
    AN2_goto(abf);\
  do_geq:\
    abf_skip_byte(abf);\
    AN2_perform_geq(x);\
    AN2_goto(abf);\
  do_tupleToList:\
    abf_skip_byte(abf);\
    AN2_perform_tupleToList(x);\
    AN2_goto(abf);  }


char *AN2_getStringForOpcode(int op);

void AN2_disassemble(FILE *f, AIL_ByteCode bc);

#endif /* __TEST__H */
