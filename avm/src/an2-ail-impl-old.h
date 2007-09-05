#ifndef __AN2_AIL_IMPL__H
#define __AN2_AIL_IMPL__H 1

/* x is a machine. */

#define AN2_perform_abs(x,code) {\
  AN_machine_put_nreg(x,AN_makeAction(code));\
}

#define AN2_perform_prov(x,term) {\
  AN_machine_put_nreg(x,term);\
}

#define AN2_perform_eprov(x,term) {\
  AN_machine_put_ereg(x,term);\
}

#define AN2_perform_publish(x) {\
  AN_machine_push_args(x, AN_machine_get_nreg(x));\
}

#define AN2_perform_epublish(x) {\
  AN_machine_push_args(x, AN_machine_get_ereg(x));\
}

#define AN2_perform_unpublish(x) {\
  AN_machine_drop_args(x);\
}

#define AN2_perform_enter(x) {\
  AN_machine_push_scope(x, AN_machine_get_nreg(x));\
}

#define AN2_perform_leave(x) {\
  AN_machine_drop_scope(x);\
}

#define AN2_perform_trye(x,label) {\
  AN_init_context(AN_machine_new_saved(x));\
  AN_context_set_kind(AN_current_saved(x),AN_EXCEPTION);\
  AN_context_set_args(AN_current_saved(x),AN_acb_get_args(AN_current_acb(x)));\
  AN_context_set_nresult(AN_current_saved(x),AN_acb_get_nresult(AN_current_acb(x)));\
  AN_context_set_eresult(AN_current_saved(x),AN_acb_get_eresult(AN_current_acb(x)));\
  AN_context_set_scope(AN_current_saved(x),AN_acb_get_scope(current_acb(x)));\
  AN_context_set_frames(AN_current_saved(x),AN_acb_get_frames(AN_current_acb(x)));\
  AN_context_set_continuation(AN_current_saved(x),label);\
}

#define AN2_perform_tryf(x,label) {\
  AN_init_context(AN_machine_new_saved(x));\
  AN_context_set_kind(AN_current_saved(x),AN_FAILURE);\
  AN_context_set_args(AN_current_saved(x),AN_acb_get_args(AN_current_acb(x)));\
  AN_context_set_nresult(AN_current_saved(x),AN_acb_get_nresult(AN_current_acb(x)));\
  AN_context_set_eresult(AN_current_saved(x),AN_acb_get_eresult(AN_current_acb(x)));\
  AN_context_set_scope(AN_current_saved(x),AN_acb_get_scope(current_acb(x)));\
  AN_context_set_frames(AN_current_saved(x),AN_acb_get_frames(AN_current_acb(x)));\
  AN_context_set_continuation(AN_current_saved(x),label);\
}

#define AN2_perform_catch(x,label) {\
  AN_machine_drop_saved(x);\
  if (AN_is_compiled_label(label)) \
    goto *(label);\
  AN_set_pc(x, label);\
}

#define AN2_perform_goto(x,label) {\
  if (AN_is_compiled_label(label)) \
    goto *(label);\
  AN_set_pc(x, label);\
}

#define AN2_perform_return(x) {\
  if (AN_is_compiled_label(AN_machine_top_frame(x))) \
    goto *(AN_machine_pop_frame(x));\
  AN_set_pc(x, AN_machine_pop_frame(x));\
}

#define AN2_perform_lock(x) {\
  AN_machine_lock(x);\
}

#define AN2_perform_unlock(x) {\
  AN_machine_unlock(x);\
}

#define AN2_perform_call(x,label) {\
   
   if (AN_
}

#define AN2_perform_enact(x) {\
}

#define AN2_perform_raise(x) {\
}

#define AN2_perform_throw(x) {\
}

#define AN2_perform_fail(x) {\
}

#define AN2_perform_merge(x) {\
}

#define AN2_perform_emerge(x) {\
}

#define AN2_perform_push(x) {\
}

#define AN2_perform_epush(x) {\
}

#define AN2_perform_copy(x) {\
}

#define AN2_perform_ecopy(x) {\
}

#define AN2_perform_create(x) {\
}

#define AN2_perform_inspect(x) {\
}

#define AN2_perform_destroy(x) {\
}

#define AN2_perform_update(x) {\
}

#define AN2_perform_activate(x) {\
}

#define AN2_perform_deactivate(x) {\
}

#define AN2_perform_send(x) {\
}

#define AN2_perform_receive(x) {\
}

#define AN2_perform_time(x) {\
}

#define AN2_perform_agent(x) {\
}

#define AN2_perform_scope(x) {\
}

#define AN2_perform_random(x) {\
}

#define AN2_perform_add(x) {\
}

#define AN2_perform_sub(x) {\
}

#define AN2_perform_mul(x) {\
}

#define AN2_perform_csub(x) {\
}

#define AN2_perform_bind(x) {\
}

#define AN2_perform_find(x) {\
}

#define AN2_perform_not(x) {\
}

#define AN2_perform_override(x) {\
}

#define AN2_perform_d_union(x) {\
}

#define AN2_perform_then(x) {\
}

#define AN2_perform_and_then(x) {\
}

#define AN2_perform_and(x) {\
}

#define AN2_perform_provide(x) {\
}

#define AN2_perform_exceptionally(x) {\
}

#define AN2_perform_and_exceptionally(x) {\
}

#define AN2_perform_otherwise(x) {\
}

#define AN2_perform_indivisibly(x) {\
}

#define AN2_perform_hence(x) {\
}

#define AN2_perform_cast(x,term) {\
}

#define AN2_perform_component(x,n) {\
}

#define AN2_perform_eq(x) {\
}

#define AN2_perform_lt(x) {\
}

#define AN2_perform_gt(x) {\
}

#define AN2_perform_leq(x) {\
}

#define AN2_perform_geq(x) {\
}

#define AN2_perform_tupleToList(x) {\
}



#endif /* __AN2_AIL_IMPL__H */

