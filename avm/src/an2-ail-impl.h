#ifndef __AN2_AIL_IMPL__H
#define __AN2_AIL_IMPL__H 1

#define throw_empty(x) {\
  AN_machine_eput(x, AN_emptyData);\
  AN2_perform_throw(x);\
}

#define AN2_perform_abs(x,code) {\
  AN_machine_nput(x,AN_makeAction(code));\
}

  //ATfprintf(stderr, "***************************** Providing %t\n", term);\

#define AN2_perform_prov(x,term) {\
  AN_machine_nput(x,term);\
}

#define AN2_perform_eprov(x,term) {\
  AN_machine_eput(x,term);\
}

#define AN2_perform_publish(x) {\
  AN_machine_npublish(x);\
}

#define AN2_perform_epublish(x) {\
  AN_machine_epublish(x);\
}

#define AN2_perform_unpublish(x) {\
  AN_machine_unpublish(x);\
}

#define AN2_perform_enter(x) {\
  AN_machine_enter(x);\
}

#define AN2_perform_leave(x) {\
  AN_machine_leave(x);\
}

#define AN2_perform_trye(x,adr) {\
  AN_machine_save(x, adr, AN_EXCEPTION);\
}

#define AN2_perform_tryf(x,adr) {\
  AN_machine_save(x, adr, AN_FAILURE);\
}

#define AN2_perform_catch(x,adr) {\
  AN_machine_drop_saved(x);\
  AN2_perform_goto(x, adr);\
}

#define AN2_perform_goto(x,adr) {\
  AN_machine_goto(x, adr);\
}


#define AN2_perform_return(x) {\
  if (AN_is_main_frame(x, AN_machine_top_frame(x))) {\
    AN_machine_set_exit_status(x,AN_NORMAL);\
    goto *(AN_machine_get_exit_address(x));\
  }\
  AN2_perform_goto(x, AN_machine_pop_frame(x));\
}

#define AN2_perform_lock(x) {\
  AN_machine_lock(x);\
}

#define AN2_perform_unlock(x) {\
  AN_machine_unlock(x);\
}

#define AN2_perform_frame(x,adr) {\
  AN_machine_new_frame(x, adr);\
}

/* Enacts are always preceded by the frame instruction. */
#define AN2_perform_enact(x) {\
  AN_ActionCode code = AN_get_action_value(AN_machine_nget(x));\
  AN2_perform_goto(x,AN_get_action_code_address(code));\
}

#define AN2_perform_raise(x) {\
  AN2_perform_ecopy(x);\
  AN2_perform_throw(x);\
}


/* Hierin gaat iets fout als er geen saved contexts meer zijn... */
#define AN2_perform_throw(x) {\
  AN_machine_restore(x, AN_EXCEPTION);\
  if (!AN_machine_has_handler(x)) {\
    AN_machine_set_exit_status(x,AN_EXCEPTIONAL);\
    goto *(AN_machine_get_exit_address(x));\
  }\
  AN2_perform_goto(x, AN_machine_pop_handler(x));\
}

#define AN2_perform_fail(x) {\
  AN_machine_restore(x, AN_FAILURE);\
  if (!AN_machine_has_handler(x)) {\
    AN_machine_set_exit_status(x,AN_FAILED);\
    goto *(AN_machine_get_exit_address(x));\
  }\
  AN2_perform_goto(x, AN_machine_pop_handler(x));\
}


#define AN2_perform_merge(x) {\
  AN_machine_nmerge(x);\
}

#define AN2_perform_emerge(x) {\
  AN_machine_emerge(x);\
}

#define AN2_perform_push(x) {\
  AN_machine_npush(x);\
}

#define AN2_perform_epush(x) {\
  AN_machine_epush(x);\
}

#define AN2_perform_drop(x) {\
  AN_machine_ndrop(x);\
}

#define AN2_perform_edrop(x) {\
  AN_machine_edrop(x);\
}

#define AN2_perform_copy(x) {\
  AN_machine_ncopy(x);\
}

#define AN2_perform_ecopy(x) {\
  AN_machine_ecopy(x);\
}

#define AN2_perform_create(x) {\
  AN_Data cell = AN_machine_new_cell(x);\
  AN_machine_update_cell(x, cell, AN_machine_nget(x));\
  AN_machine_nput(x,cell);\
}

#define AN2_perform_inspect(x) {\
  if (AN_machine_check_cell(x,AN_machine_nget(x))) \
    AN_machine_nput(x, AN_machine_inspect_cell(x, AN_machine_nget(x)));\
  else throw_empty(x);\
}

#define AN2_perform_destroy(x) {\
  if (AN_machine_check_cell(x,AN_machine_nget(x))) {\
    AN_machine_destroy_cell(x, AN_machine_nget(x));\
    AN_machine_nput(x, AN_emptyData);\
  }\
  else throw_empty(x);\
}

#define AN2_perform_update(x) {\
  AN_Data d = AN_machine_nget(x);\
  if (AN_machine_check_cell(x,AN_elt1(d))) {\
    AN_machine_update_cell(x, AN_elt1(d), AN_elt2(d));\
    AN_machine_nput(x, AN_emptyData);\
  }\
  else throw_empty(x);\
}

#define AN2_perform_activate(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_deactivate(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_send(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_receive(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_time(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_agent(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_scope(x) {\
  AN_machine_scope(x);\
}

#define AN2_perform_random(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_add(x) {\
  AN_Data d = AN_machine_nget(x);\
  AN_machine_nput(x, AN_givePlus(AN_elt1(d),AN_elt2(d)));\
}

#define AN2_perform_sub(x) {\
  AN_Data d = AN_machine_nget(x);\
  AN_machine_nput(x, AN_giveMinus(AN_elt1(d),AN_elt2(d)));\
}

#define AN2_perform_mul(x) {\
  AN_Data d = AN_machine_nget(x);\
  AN_machine_nput(x, AN_giveTimes(AN_elt1(d),AN_elt2(d)));\
}

#define AN2_perform_csub(x) {\
  AN_Data d = AN_machine_nget(x);\
  AN_machine_nput(x, AN_giveMonus(AN_elt1(d),AN_elt2(d)));\
}

#define AN2_perform_bind(x) {\
  AN_Data d = AN_machine_nget(x);\
  AN_machine_nput(x, AN_giveBinding(AN_elt1(d),AN_elt2(d)));\
}

#define AN2_perform_find(x) {\
  AN_Data d = AN_machine_nget(x);\
  AN_machine_nput(x, AN_giveBound(AN_elt1(d),AN_elt2(d)));\
}

#define AN2_perform_not(x) {\
  AN_machine_nput(x, AN_giveNot(AN_machine_nget(x)));\
}

#define AN2_perform_override(x) {\
  AN_Data d = AN_machine_nget(x);\
  AN_machine_nput(x, AN_giveOverriding(AN_elt1(d),AN_elt2(d)));\
}

#define AN2_perform_d_union(x) {\
  AN_Data d = AN_machine_nget(x);\
  AN_machine_nput(x, AN_giveDisjointUnion(AN_elt1(d),AN_elt2(d)));\
}

#define AN2_perform_then(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_and_then(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_and(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_provide(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_exceptionally(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_and_exceptionally(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_otherwise(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_indivisibly(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_hence(x) {\
  ATabort("Not yet implemented.\n");\
}

#define AN2_perform_cast(x,term) 

/* {\ */
/*   fprintf(stderr," bool = %d\n", AN_match(AN_machine_nget(x), term));\ */
/*   if (!AN_match(AN_machine_nget(x), term))\ */
/*     throw_empty(x);\ */
/* } */

#define AN2_perform_component(x,n) {\
  AN_Data d = AN_machine_nget(x);\
  if (AN_isTuple(d) && ((n) <= AN_getTupleLength(d))) \
    AN_machine_nput(x, AN_eltAt(d, n));\
  else throw_empty(x);\
}

#define AN2_perform_eq(x) {\
  AN_Data d = AN_machine_nget(x);\
  if (AN_checkEquals(AN_elt1(d), AN_elt2(d))) \
    AN_machine_nput(x,AN_emptyData);\
  else throw_empty(x);\
}

#define AN2_perform_lt(x) {\
  AN_Data d = AN_machine_nget(x);\
  if (AN_checkLt(AN_elt1(d), AN_elt2(d))) \
    AN_machine_nput(x,AN_emptyData);\
  else throw_empty(x);\
}

#define AN2_perform_gt(x) {\
  AN_Data d = AN_machine_nget(x);\
  if (AN_checkGt(AN_elt1(d), AN_elt2(d))) \
    AN_machine_nput(x,AN_emptyData);\
  else throw_empty(x);\
}

#define AN2_perform_leq(x) {\
  AN_Data d = AN_machine_nget(x);\
  if (AN_checkLeq(AN_elt1(d), AN_elt2(d))) \
    AN_machine_nput(x,AN_emptyData);\
  else throw_empty(x);\
}

#define AN2_perform_geq(x) {\
  AN_Data d = AN_machine_nget(x);\
  if (AN_checkGeq(AN_elt1(d), AN_elt2(d))) \
    AN_machine_nput(x,AN_emptyData);\
  else throw_empty(x);\
}

#define AN2_perform_tupleToList(x) {\
  AN_machine_nput(x,AN_giveTupleToList(AN_machine_nget(x)));\
}

#define AN2_perform_debug(x) {\
  AN_fprint_debug_info(stderr,x);\
}

#define AN2_perform_yield(x,adr) {\
  ATabort("Not yet implemented.\n");\
}



#endif /* __AN2_AIL_IMPL__H */

