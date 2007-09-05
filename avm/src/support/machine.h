
#ifndef _AN_MACHINE_H
#define _AN_MACHINE_H 1

#include <ail.h>
#include <dn2.h>
#include "schedule.h"
#include "address.h"

#define AN_REFLECTION_CACHE_SIZE 1024

typedef ATermTable AN_ReflectionCache;

void AN_init_reflection_cache(AN_ReflectionCache *rc);
void AN_release_reflection_cache(AN_ReflectionCache *rc);

#define AN_NO_ARGUMENT ATempty

#define AN_cache_functor(rc,f,a1,a2,r) {\
  ATtablePut((rc), AN_cache_entry((f),(a1),(a2)), (ATerm)(r));\
}

#define AN_find_cached_functor(rc,f,a1,a2) (ATtableGet((rc),AN_cache_entry((f),(a1),(a2))))

#define AN_cache_entry(f,a1,a2) ((ATerm)ATmakeList3((ATerm)ATmakeInt((f)),\
                                 (ATerm)(a1),(ATerm)(a2)))


typedef struct _AN_Machine {
  ABFBuffer *buffer;
  AN_Store store;
  AN_Schedule schedule;
  AN_Address code_start, code_end, exit_address;
  /* Maybe move these to store resp. schedule. */
  int cell_counter, agent_counter;
  AN_ReflectionCache reflection_cache;
} *AN_Machine;


void AN_alloc_machine(AN_Machine *machine);
void AN_init_machine(AN_Machine *machine);
void AN_release_machine(AN_Machine *machine);

void AN_load_ail_program(AN_Machine m, AIL_ByteCode prg, AN_Address exit_address);
void AN_load_program(AN_Machine m, AN_Address start, AN_Address end, AN_Address exit_address);

void AN_fprint_debug_info(FILE *f, AN_Machine m);

#define AN_machine_get_schedule(m) ((m)->schedule)
#define AN_machine_get_store(m) ((m)->store)
#define AN_machine_get_code_start(m) ((m)->code_start)
#define AN_machine_get_code_end(m) ((m)->code_end)
#define AN_machine_get_exit_address(m) ((m)->exit_address)
#define AN_machine_get_agent_counter(m) ((m)->cell_counter)
#define AN_machine_get_cell_counter(m) ((m)->agent_counter)

#define AN_machine_set_schedule(m,x) ((m)->schedule=(x))
#define AN_machine_set_store(m,x) ((m)->store=(x))
#define AN_machine_set_code_start(m,x) ((m)->code_start=(x))
#define AN_machine_set_code_end(m,x) ((m)->code_end=(x))
#define AN_machine_set_exit_address(m,x) ((m)->exit_address=(x))
#define AN_machine_set_agent_counter(m,x) ((m)->cell_counter=(x))
#define AN_machine_set_cell_counter(m,x) ((m)->agent_counter=(x))


/* Reimplementation of ACB actions. */

#define _cur(m) (AN_schedule_get_active((m)->schedule))

#define AN_machine_get_pc(m) (AN_acb_get_pc(_cur(m)))

#define AN_machine_get_lock(m) (AN_acb_get_lock(_cur(m)))
#define AN_machine_lock(m) (AN_acb_lock(_cur(m)))
#define AN_machine_unlock(m) (AN_acb_unlock(_cur(m)))

#define AN_machine_ncopy(m) (AN_acb_ncopy(_cur(m)))
#define AN_machine_ecopy(m) (AN_acb_ecopy(_cur(m)))

#define AN_machine_nmerge(m) (AN_acb_nmerge(_cur(m)))
#define AN_machine_emerge(m) (AN_acb_emerge(_cur(m)))

#define AN_machine_npush(m) (AN_acb_npush(_cur(m)))
#define AN_machine_epush(m) (AN_acb_epush(_cur(m)))

#define AN_machine_ndrop(m) (AN_acb_ndrop(_cur(m)))
#define AN_machine_edrop(m) (AN_acb_edrop(_cur(m)))

#define AN_machine_npublish(m) (AN_acb_npublish(_cur(m)))
#define AN_machine_epublish(m) (AN_acb_epublish(_cur(m)))
#define AN_machine_unpublish(m) (AN_acb_unpublish(_cur(m)))

#define AN_machine_scope(m) (AN_acb_scope(_cur(m)))
#define AN_machine_enter(m) (AN_acb_enter(_cur(m)))
#define AN_machine_leave(m) (AN_acb_leave(_cur(m)))

#define AN_machine_nput(m,d) (AN_acb_nput(_cur(m),d))
#define AN_machine_eput(m,d) (AN_acb_eput(_cur(m),d))

#define AN_machine_nget(m) (AN_acb_nget(_cur(m)))
#define AN_machine_eget(m) (AN_acb_eget(_cur(m)))

#define AN_machine_set_exit_status(m,e) (AN_acb_set_exit_status(_cur(m),e))


#ifdef COMPILED_AIL_STREAM
#define AN_machine_goto(m,a) {\
  if (AN_is_compiled_label(m,a)) \
    goto *(a);\
  AN_acb_goto(_cur(m),a);\
}
#else
#define AN_machine_goto(m,a) {\
  AN_acb_goto(_cur(m),a);\
}
#endif

#define AN_machine_new_frame(m,a) (AN_acb_new_frame(_cur(m),a))
#define AN_machine_top_frame(m) (AN_acb_top_frame(_cur(m)))
#define AN_machine_pop_frame(m) (AN_acb_pop_frame(_cur(m)))

#define AN_machine_save(m,a,kind)  (AN_acb_save(_cur(m),a,kind))
#define AN_machine_restore(m,kind) (AN_acb_restore(_cur(m),kind))
#define AN_machine_drop_saved(m) (AN_acb_drop_saved(_cur(m)))
#define AN_machine_has_handler(acb) (AN_acb_has_handler(_cur(m)))
#define AN_machine_pop_handler(acb) (AN_acb_pop_handler(_cur(m)))


#define AN_machine_send(m,mt,ms) (AN_acb_send(_cur(m),mt,ms))
#define AN_machine_receive(m,mt) (AN_acb_receive(_cur(m),mt))

/* Reimplementation of store actions. */

#define AN_machine_check_cell(m,c) (AN_check_cell(m->store,c))
#define AN_machine_update_cell(m,c,d) (AN_update_cell(m->store,c,d))
#define AN_machine_inspect_cell(m,c) (AN_inspect_cell(m->store,c))
#define AN_machine_destroy_cell(m,c) (AN_destroy_cell(m->store,c))

#define AN_machine_new_cell(m) (AN_make_cell(m->cell_counter++))


/* Reimplementation of schedule actions. */

#define AN_machine_activate(m,a) (AN_schedule_activate(m->schedule,a))
#define AN_machine_deactivate(m,acb) (AN_schedule_deactivate(m->schedule,acb))
#define AN_machine_get_active(m) (AN_schedule_get_activate(m->schedule))
#define AN_machine_yield(m,a) {\
  AN_schedule_yield(m->schedule,a);\
  AN_machine_goto(AN_acb_get_pc(AN_machine_get_active(m)));\
}
  

/* Code start and code end are NULL if in interpreter mode. */
#define AN_is_static_address(m,adr) (((m)->code_start<=((char*)adr))\
                                      &&(((char*)adr)<=(m)->code_end))

#define AN_is_compiled_label(m,adr) (AN_is_static_address(m,adr))

#define AN_is_main_frame(m,f) (AN_frame_get_return(f)==(m)->exit_address)



/* #define AN_new_saved(m) (AN_new_context_ref(AN_get_save_stack(AN_current_acb(m)))) */

/* #define AN_current_saved(m) (AN_top_saved(AN_get_save_stack(AN_current_acb(m)))) */

/* #define AN_current_acb(m) (AN_schedule_get_last((m)->schedule)) */

/* #define AN_machine_yield(m) (AN_schedule_rotate((m)->schedule)) */

/* #define AN_machine_get_pc(m) (AN_acb_get_pc(AN_current_acb(m))) */

/* #define AN_machine_set_pc(m,a) (AN_acb_set_pc(AN_current_acb(m),a)) */

/* #define AN_machine_set_nreg(m,d) (AN_acb_set_nreg(AN_current_acb(m),d)) */

/* #define AN_machine_set_ereg(m,d) (AN_acb_set_ereg(AN_current_acb(m),d)) */

/* #define AN_machine_get_nreg(m) (AN_acb_get_nreg(AN_current_acb(m))) */

/* #define AN_machine_get_ereg(m) (AN_acb_get_ereg(AN_current_acb(m))) */

/* #define AN_machine_push_eresult(m,d) \ */
/*         (AN_push(AN_acb_get_eresult(AN_current_acb(m)),d)) */

/* #define AN_machine_push_nresult(m,d) \ */
/*         (AN_push(AN_acb_get_nresult(AN_current_acb(m)),d)) */

/* #define AN_machine_drop_eresult(m) \ */
/*         (AN_drop(AN_acb_get_eresult(AN_current_acb(m)))) */

/* #define AN_machine_drop_nresult(m) \ */
/*         (AN_drop(AN_acb_get_nresult(AN_current_acb(m)))) */

/* #define AN_machine_top_eresult(m) \ */
/*         (AN_top(AN_acb_get_eresult(AN_current_acb(m)))) */

/* #define AN_machine_top_nresult(m) \ */
/*         (AN_top(AN_acb_get_nresult(AN_current_acb(m)))) */


/*   AN_context_set_kind(AN_current_saved(x),AN_EXCEPTION);\ */
/*   AN_context_set_args(AN_current_saved(x),AN_acb_get_args(AN_current_acb(x)));\ */
/*   AN_context_set_nresult(AN_current_saved(x),AN_acb_get_nresult(AN_current_acb(x)));\ */
/*   AN_context_set_eresult(AN_current_saved(x),AN_acb_get_eresult(AN_current_acb(x)));\ */
/*   AN_context_set_scope(AN_current_saved(x),AN_acb_get_scope(current_acb(x)));\ */
/*   AN_context_set_frames(AN_current_saved(x),AN_acb_get_frames(AN_current_acb(x)));\ */


#endif
