
#ifndef __ACCDATA2__H
#define __ACCDATA2__H 1

#include "accdata.h"


#define type_of(d) (GET_TYPE(d))
#define get_type(d) (GET_TYPE(d))
#define get_data(d) (GET_DATA(d))
#define make_empty() (MAKE_NODATA(__data__))

#define make_int(n) MAKE_INT(__data__,n)
#define get_int_int(d) (GET_INT(d))
#define is_int(d) (get_type(d)==INT_TYPE)
#define check_int_arith(d) (is_2tuple(d)&&is_int(gtc(t,1))&&is_int(gtc(t,2)))
#define check_give_plus(d) (check_int_arith(d))
#define check_give_minus(d) (check_int_arith(d))
#define check_give_monus(d) (check_int_arith(d))
#define check_give_times(d) (check_int_arith(d))
#define give_plus(d) GIVE_PLUS(__data__,gtc(d,1),gtc(d,2))
#define give_minus(d) GIVE_MINUS(__data__,gtc(d,1),gtc(d,2))
#define give_monus(d) GIVE_MONUS(__data__,gtc(d,1),gtc(d,2))
#define give_times(d) GIVE_TIMES(__data__,gtc(d,1),gtc(d,2))

#define make_bool(b) MAKE_BOOL(__data__,b)
#define is_bool(d) (get_type(d)==BOOL_TYPE)
#define get_bool_int(d) (GET_INT(d))
#define check_give_not(d) is_bool(d)
#define give_not(b) GIVE_NOT(__data__,b)

#define make_cell(c,d) MAKE_CELL(__data__,c,d)
#define is_cell(d) (get_type(d)==CELL_TYPE)
#define destroy_cell(c) (GET_ARG1(c)=NULL)
#define inspect_cell(c) (GET_ARG1(c))
#define get_cell_int(c) ((int)(GET_ARG0(c)))

#define make_agent(a) MAKE_AGENT(__data__,a)
#define is_agent(d) (get_type(d)==AGENT_TYPE)
#define get_agent_int(a) (GET_INT(a))

#define make_acc_action(l) MAKE_ACC_ACTION(__data__,l)
#define is_acc_action(d) (get_type(d)==ACC_ACTION_TYPE)
#define get_action_label(a) (GET_LABEL(a))

#define make_avm_action(a) MAKE_AVM_ACTION(__data__,a)
#define is_avm_action(d) (get_type(d)==AVM_ACTION_TYPE)
#define get_action_address(a) (GET_ADDRESS(a))

#define is_composite(a) ((type_of(a)>=PROVIDE_OP)&&(type_of(a)<UNDEF_TYPE))
#define is_2composite(a) (is_composite(a)&&(type_of(a)>=THEN_OP))
#define is_1composite(a) (is_composite(a)&&!is_2composite(a))

#define is_action(d) (is_acc_action(d)||is_avm_action(d)||is_composite(d))

#define check_give_provide(d) (1)
#define give_provide(d) GIVE_PROVIDE(__data__,d)
#define get_provide_arg(d) GET_1COMPOSITE_ARG(a)
#define check_give_indivisibly(d) (is_action(d))
#define give_indivisibly(a) GIVE_INDIVISIBLY(__data__,a)
#define get_indivisibly_arg(d) GET_1COMPOSITE_ARG(a)

#define check_give_2comb(d) (is_2tuple(d)&&is_action(gtc(d,1))&&is_action(gtc(d,2)))
#define give_then(d) GIVE_THEN(__data__,gtc(d,1),gtc(d,2))
#define check_give_then(d) check_give_2comb(d)

#define give_and_then(d) GIVE_AND_THEN(__data__,gtc(d,1),gtc(d,2))
#define check_give_and_then(d) check_give_2comb(d)

#define give_and(d) GIVE_AND(__data__,gtc(d,1),gtc(d,2))
#define check_give_and(d) check_give_2comb(d)

#define give_exceptionally(d) GIVE_EXCEPTIONALLY(__data__,gtc(d,1),gtc(d,2))
#define check_give_exceptionally(d) check_give_2comb(d)

#define give_and_exceptionally(d) GIVE_AND_EXCEPTIONALLY(__data__,gtc(d,1),gtc(d,2))
#define check_give_and_exceptionally(d) check_give_2comb(d)

#define give_otherwise(d) GIVE_OTHERWISE(__data__,gtc(d,1),gtc(d,2))
#define check_give_otherwise(d) check_give_2comb(d)

#define give_hence(d) GIVE_HENCE(__data__,gtc(d,1),gtc(d,2))
#define check_give_hence(d) check_give_2comb(d)

#define get_left_action(a) GET_2COMPOSITE_LEFT_ARG(a)
#define get_right_action(a) GET_2COMPOSITE_RIGHT_ARG(a)

#define make_messagetag(m) MAKE_MESSAGETAG(__data__,m)
#define is_messagetag(d) (get_type(d)==MESSAGETAG_TYPE)
#define get_messagetag_data(m) (GET_DATA(m))

#define make_token(s) MAKE_TOKEN(__data__,s)
#define is_token(d) (get_type(d)==TOKEN_TYPE)
#define get_token_string(t) (GET_STRING(t))

#define make_tuple(d1,d2) MAKE_TUPLE(__data__,d1,d2)
#define get_tuple_size(d) GET_TUPLE_SIZE(d)
#define add_to_tuple(t,d) ADD_TO_TUPLE(t,d)
#define merge_tuples(t1,t2) MERGE_TUPLES(__data__,t1,t2)
#define is_tuple(t) (get_type(t)==TUPLE_TYPE)
#define is_ntuple(t,n) (is_tuple(t)&&get_tuple_size(t)==n)
#define is_2tuple(t) (is_ntuple(t,2))
#define is_3tuple(t) (is_ntuple(t,3))
#define check_give_component(d,n) (is_tuple(d)&&get_tuple_size(t)>=n)
#define give_component(t,n) GIVE_TUPLE_COMPONENT(t,n)
#define gtc(t,n) give_component(t,n)

#define give_binding(tk,d) GIVE_BINDING(__data__,tk,d)
#define is_bindings(d) (get_type(d)==BINDINGS_TYPE)
#define check_give_binding(d) (is_2tuple(d)&&is_token(gtc(t,1)))
#define get_bindings_array(d) GET_MAP_ARRAY(d)
#define get_bindings_size(d) GET_MAP_SIZE(d)
#define get_bindings_token(d,n) GET_MAP_SRC(d,n) /* Counting bindings from 1. */
#define get_bindings_data(d,n) GET_MAP_TRG(d,n)
#define check_give_overriding(d) (is_2tuple(d)&&is_bindings(gtc(d,1))&&is_bindings(gtc(d,2)))
#define give_overriding(bs1,bs2) GIVE_OVERRIDING(__data__,bs1,bs2)
#define check_give_disjoint_union(d) (is_2tuple(d)&&is_bindings(gtc(d,1))&&is_bindings(gtc(d,2)))
#define give_disjoint_union(bs1,bs2) GIVE_DISJOINT_UNION(__data__,bs1,bs2)
#define check_give_bound(d) (is_2tuple(d)&&is_token(gtc(d,1))&&is_bindings(gtc(d,2)))
#define give_bound(bs,tk) GIVE_BOUND(bs,tk)


#define make_list(f,n) MAKE_LIST(__data__,f,n)
#define make_list1(d) make_list(d,NULL)
#define make_empty_list() make_list1(NULL)
#define get_first(list) GET_FIRST(d)
#define get_next(list) GET_NEXT(d)
#define lpush(list,elt) GIVE_PREPEND(__data__,list,elt)
#define lpop(list) GIVE_POP(list)
#define ltop(list) GIVE_TOP(list)
#define is_empty(list) IS_EMPTY_LIST(list)
#define make_exception(d) MAKE_EXCEPTION(__data__,d)
#define make_failure() MAKE_FAILURE(__data__)


#endif
