#ifndef __AIL__H
#define __AIL__H 1

#define AIL_publish_opcode 0
#define AIL_epublish_opcode 1
#define AIL_unpublish_opcode 2
#define AIL_enter_opcode 3
#define AIL_leave_opcode 4
#define AIL_trye_opcode 5
#define AIL_tryf_opcode 6
#define AIL_catche_opcode 7
#define AIL_catchf_opcode 8
#define AIL_goto_opcode 9
#define AIL_return_opcode 10
#define AIL_lock_opcode 11
#define AIL_unlock_opcode 12
#define AIL_call_opcode 13
#define AIL_raise_opcode 14
#define AIL_fail_opcode 15
#define AIL_gosub_opcode 16
#define AIL_merge_opcode 17
#define AIL_emerge_opcode 18
#define AIL_push_opcode 19
#define AIL_pushr_opcode 20
#define AIL_copy_opcode 21
#define AIL_create_opcode 22
#define AIL_inspect_opcode 23
#define AIL_destroy_opcode 24
#define AIL_update_opcode 25
#define AIL_activate_opcode 26
#define AIL_deactivate_opcode 27
#define AIL_send_opcode 28
#define AIL_receive_opcode 29
#define AIL_time_opcode 30
#define AIL_agent_opcode 31
#define AIL_scope_opcode 32
#define AIL_random_opcode 33
#define AIL_add_opcode 34
#define AIL_sub_opcode 35
#define AIL_mul_opcode 36
#define AIL_csub_opcode 37
#define AIL_bind_opcode 38
#define AIL_find_opcode 39
#define AIL_not_opcode 40
#define AIL_override_opcode 41
#define AIL_d_union_opcode 42
#define AIL_then_opcode 43
#define AIL_and_then_opcode 44
#define AIL_and_opcode 45
#define AIL_provide_opcode 46
#define AIL_exceptionally_opcode 47
#define AIL_and_exceptionally_opcode 48
#define AIL_otherwise_opcode 49
#define AIL_indivisibly_opcode 50
#define AIL_hence_opcode 51
#define AIL_cast_opcode 52
#define AIL_type_opcode 53
#define AIL_component_opcode 54
#define AIL_equals_opcode 55
#define AIL_less_than_opcode 56
#define AIL_greater_than_opcode 57
#define AIL_less_than_or_eq_opcode 58
#define AIL_greater_than_or_eq_opcode 59
#define AIL_array_opcode 60
#define AIL_put_at_opcode 61
#define AIL_index_opcode 62

#define AIL_num_of_instructions 63
#define AIL_highest_opcode 62

#define AIL_DECLARE_AIL_OPCODE_TABLE() \
static void *AIL_opcode_labels[] = {\
	[AIL_publish_opcode] &&do_publish,\
	[AIL_epublish_opcode] &&do_epublish,\
	[AIL_unpublish_opcode] &&do_unpublish,\
	[AIL_enter_opcode] &&do_enter,\
	[AIL_leave_opcode] &&do_leave,\
	[AIL_trye_opcode] &&do_trye,\
	[AIL_tryf_opcode] &&do_tryf,\
	[AIL_catche_opcode] &&do_catche,\
	[AIL_catchf_opcode] &&do_catchf,\
	[AIL_goto_opcode] &&do_goto,\
	[AIL_return_opcode] &&do_return,\
	[AIL_lock_opcode] &&do_lock,\
	[AIL_unlock_opcode] &&do_unlock,\
	[AIL_call_opcode] &&do_call,\
	[AIL_raise_opcode] &&do_raise,\
	[AIL_fail_opcode] &&do_fail,\
	[AIL_gosub_opcode] &&do_gosub,\
	[AIL_merge_opcode] &&do_merge,\
	[AIL_emerge_opcode] &&do_emerge,\
	[AIL_push_opcode] &&do_push,\
	[AIL_pushr_opcode] &&do_pushr,\
	[AIL_copy_opcode] &&do_copy,\
	[AIL_create_opcode] &&do_create,\
	[AIL_inspect_opcode] &&do_inspect,\
	[AIL_destroy_opcode] &&do_destroy,\
	[AIL_update_opcode] &&do_update,\
	[AIL_activate_opcode] &&do_activate,\
	[AIL_deactivate_opcode] &&do_deactivate,\
	[AIL_send_opcode] &&do_send,\
	[AIL_receive_opcode] &&do_receive,\
	[AIL_time_opcode] &&do_time,\
	[AIL_agent_opcode] &&do_agent,\
	[AIL_scope_opcode] &&do_scope,\
	[AIL_random_opcode] &&do_random,\
	[AIL_add_opcode] &&do_add,\
	[AIL_sub_opcode] &&do_sub,\
	[AIL_mul_opcode] &&do_mul,\
	[AIL_csub_opcode] &&do_csub,\
	[AIL_bind_opcode] &&do_bind,\
	[AIL_find_opcode] &&do_find,\
	[AIL_not_opcode] &&do_not,\
	[AIL_override_opcode] &&do_override,\
	[AIL_d_union_opcode] &&do_d_union,\
	[AIL_then_opcode] &&do_then,\
	[AIL_and_then_opcode] &&do_and_then,\
	[AIL_and_opcode] &&do_and,\
	[AIL_provide_opcode] &&do_provide,\
	[AIL_exceptionally_opcode] &&do_exceptionally,\
	[AIL_and_exceptionally_opcode] &&do_and_exceptionally,\
	[AIL_otherwise_opcode] &&do_otherwise,\
	[AIL_indivisibly_opcode] &&do_indivisibly,\
	[AIL_hence_opcode] &&do_hence,\
	[AIL_cast_opcode] &&do_cast,\
	[AIL_type_opcode] &&do_type,\
	[AIL_component_opcode] &&do_component,\
	[AIL_equals_opcode] &&do_equals,\
	[AIL_less_than_opcode] &&do_less_than,\
	[AIL_greater_than_opcode] &&do_greater_than,\
	[AIL_less_than_or_eq_opcode] &&do_less_than_or_eq,\
	[AIL_greater_than_or_eq_opcode] &&do_greater_than_or_eq,\
	[AIL_array_opcode] &&do_array,\
	[AIL_put_at_opcode] &&do_put_at,\
	[AIL_index_opcode] &&do_index\
}

#define PUBLISH(x) do_publish:{x}
#define EPUBLISH(x) do_epublish:{x}
#define UNPUBLISH(x) do_unpublish:{x}
#define ENTER(x) do_enter:{x}
#define LEAVE(x) do_leave:{x}
#define TRYE(x) do_trye:{x}
#define TRYF(x) do_tryf:{x}
#define CATCHE(x) do_catche:{x}
#define CATCHF(x) do_catchf:{x}
#define GOTO(x) do_goto:{x}
#define RETURN(x) do_return:{x}
#define LOCK(x) do_lock:{x}
#define UNLOCK(x) do_unlock:{x}
#define CALL(x) do_call:{x}
#define RAISE(x) do_raise:{x}
#define FAIL(x) do_fail:{x}
#define GOSUB(x) do_gosub:{x}
#define MERGE(x) do_merge:{x}
#define EMERGE(x) do_emerge:{x}
#define PUSH(x) do_push:{x}
#define PUSHR(x) do_pushr:{x}
#define COPY(x) do_copy:{x}
#define CREATE(x) do_create:{x}
#define INSPECT(x) do_inspect:{x}
#define DESTROY(x) do_destroy:{x}
#define UPDATE(x) do_update:{x}
#define ACTIVATE(x) do_activate:{x}
#define DEACTIVATE(x) do_deactivate:{x}
#define SEND(x) do_send:{x}
#define RECEIVE(x) do_receive:{x}
#define TIME(x) do_time:{x}
#define AGENT(x) do_agent:{x}
#define SCOPE(x) do_scope:{x}
#define RANDOM(x) do_random:{x}
#define ADD(x) do_add:{x}
#define SUB(x) do_sub:{x}
#define MUL(x) do_mul:{x}
#define CSUB(x) do_csub:{x}
#define BIND(x) do_bind:{x}
#define FIND(x) do_find:{x}
#define NOT(x) do_not:{x}
#define OVERRIDE(x) do_override:{x}
#define D_UNION(x) do_d_union:{x}
#define THEN(x) do_then:{x}
#define AND_THEN(x) do_and_then:{x}
#define AND(x) do_and:{x}
#define PROVIDE(x) do_provide:{x}
#define EXCEPTIONALLY(x) do_exceptionally:{x}
#define AND_EXCEPTIONALLY(x) do_and_exceptionally:{x}
#define OTHERWISE(x) do_otherwise:{x}
#define INDIVISIBLY(x) do_indivisibly:{x}
#define HENCE(x) do_hence:{x}
#define CAST(x) do_cast:{x}
#define TYPE(x) do_type:{x}
#define COMPONENT(x) do_component:{x}
#define EQUALS(x) do_equals:{x}
#define LESS_THAN(x) do_less_than:{x}
#define GREATER_THAN(x) do_greater_than:{x}
#define LESS_THAN_OR_EQ(x) do_less_than_or_eq:{x}
#define GREATER_THAN_OR_EQ(x) do_greater_than_or_eq:{x}
#define ARRAY(x) do_array:{x}
#define PUT_AT(x) do_put_at:{x}
#define INDEX(x) do_index:{x}

char *AIL_get_string_for_opcode(int op);

#endif /* __AIL__H */
