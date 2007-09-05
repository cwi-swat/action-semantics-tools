
#ifndef __AN2_ACB_H
#define __AN2_ACB_H 1

#include <stdlib.h>

#include <dn2.h>
#include "frames.h"
#include "address.h"
#include "saved.h"
#include "exits.h"

typedef struct _AN_ACB {
  AN_Frames frame_stack;
  AN_Stack arg_stack;
  AN_Stack eresult, nresult;
  AN_Stack scope_stack;
  AN_Saved saved_stack;
  AN_TaggedBuffers tagged_buffers;
  AN_Data agent;
  AN_Address pc;
  AN_Data nreg, ereg;
  AN_ExitStatus exit_status;
  int lock;
  struct _AN_ACB *prev;
} *AN_ACB;


void AN_alloc_acb(AN_ACB *acb);
void AN_init_acb(AN_ACB *acb);
void AN_release_acb(AN_ACB *acb);

void AN_fprint_acb(FILE *f, AN_ACB acb);

#define AN_acb_get_lock(acb) ((acb)->lock)
#define AN_acb_lock(acb) ((acb)->lock++)
#define AN_acb_unlock(acb) ((acb)->lock--)

#define AN_acb_copy(acb,reg) (reg=AN_top(acb->arg_stack))
#define AN_acb_ncopy(acb) (AN_acb_copy(acb,acb->nreg))
#define AN_acb_ecopy(acb) (AN_acb_copy(acb,acb->ereg))

#define AN_acb_merge(stack,reg) ((reg)=AN_concat(AN_top(stack),\
                                 (reg)),AN_drop(stack))
#define AN_acb_nmerge(acb) (AN_acb_merge(acb->nresult,acb->nreg))
#define AN_acb_emerge(acb) (AN_acb_merge(acb->eresult,acb->ereg))

#define AN_acb_push(stack,reg) (AN_push(stack,reg))
#define AN_acb_npush(acb) (AN_acb_push(acb->nresult,acb->nreg))
#define AN_acb_epush(acb) (AN_acb_push(acb->eresult,acb->ereg))

#define AN_acb_drop(stack) (AN_drop(stack))
#define AN_acb_ndrop(acb) (AN_acb_drop(acb->nresult))
#define AN_acb_edrop(acb) (AN_acb_drop(acb->eresult))

#define AN_acb_publish(reg,stack) (AN_push(stack,reg))
#define AN_acb_npublish(acb) (AN_acb_publish(acb->nreg,acb->arg_stack))
#define AN_acb_epublish(acb) (AN_acb_publish(acb->ereg,acb->arg_stack))
#define AN_acb_unpublish(acb) (AN_drop(acb->arg_stack))

#define AN_acb_scope(acb) (acb->nreg=AN_top(acb->scope_stack))
#define AN_acb_enter(acb) (AN_push(acb->scope_stack,acb->nreg))
#define AN_acb_leave(acb) (AN_drop(acb->scope_stack))

#define AN_acb_put(reg,d) ((reg)=d)
#define AN_acb_nput(acb,d) (AN_acb_put(acb->nreg,d))
#define AN_acb_eput(acb,d) (AN_acb_put(acb->ereg,d))

#define AN_acb_get(reg) (reg)
#define AN_acb_nget(acb) (AN_acb_get(acb->nreg))
#define AN_acb_eget(acb) (AN_acb_get(acb->ereg))

#define AN_acb_goto(acb,a) (acb->pc=(a))

#define AN_acb_new_frame(acb,a) (AN_push_frame(acb->frame_stack,a))
#define AN_acb_pop_frame(acb) (AN_pop_frame(acb->frame_stack))
#define AN_acb_top_frame(acb) (AN_top_frame(acb->frame_stack))

#define AN_acb_save(acb,a,kind) {                                         \
  AN_new_saved(acb->saved_stack);                                         \
  AN_context_set_kind(AN_top_saved(acb->saved_stack),kind);               \
  AN_context_set_handler(AN_top_saved(acb->saved_stack),(a));             \
  AN_context_set_args(AN_top_saved(acb->saved_stack),acb->arg_stack);     \
  AN_context_set_nresult(AN_top_saved(acb->saved_stack),acb->nresult);    \
  AN_context_set_eresult(AN_top_saved(acb->saved_stack),acb->eresult);    \
  AN_context_set_scope(AN_top_saved(acb->saved_stack),acb->scope_stack);  \
  AN_context_set_frames(AN_top_saved(acb->saved_stack),acb->frame_stack); \
}

/* This macro finds the first handler of kind kind and
 * restores the values contained therein if found.
 * If not found, then nothing is done, save the dropping
 * of context of kind other than kind. */
#define AN_acb_restore(acb,kind) {                                            \
  AN_drop_saved_until(acb->saved_stack,kind);                                 \
  if (AN_has_more_saved(acb->saved_stack)) {                                  \
    acb->pc = AN_context_get_handler(AN_top_saved(acb->saved_stack));         \
    acb->arg_stack = AN_context_get_args(AN_top_saved(acb->saved_stack));     \
    acb->nresult = AN_context_get_nresult(AN_top_saved(acb->saved_stack));    \
    acb->eresult = AN_context_get_eresult(AN_top_saved(acb->saved_stack));    \
    acb->scope_stack = AN_context_get_scope(AN_top_saved(acb->saved_stack));  \
    acb->frame_stack = AN_context_get_frames(AN_top_saved(acb->saved_stack)); \
  }                                                                           \
}

#define AN_acb_drop_saved(acb) AN_drop_saved(acb->saved_stack)
#define AN_acb_has_handler(acb) AN_has_handler(acb->saved_stack)
#define AN_acb_pop_handler(acb) AN_pop_handler(acb->saved_stack)


#define AN_acb_send(acb,mt,m) 
#define AN_acb_receive(acb,mt) 


#define AN_acb_get_frame_stack(acb) ((acb)->frame_stack)
#define AN_acb_get_arg_stack(acb) ((acb)->arg_stack)
#define AN_acb_get_nresult(acb) ((acb)->nresult_stack)
#define AN_acb_get_eresult(acb) ((acb)->eresult_stack)
#define AN_acb_get_nreg(acb) ((acb)->nreg)
#define AN_acb_get_ereg(acb) ((acb)->ereg)
#define AN_acb_get_scope_stack(acb) ((acb)->scope_stack)
#define AN_acb_get_saved_stack(acb) ((acb)->saved_stack)
#define AN_acb_get_tagged_buffers(acb) ((acb)->tagged_buffers)
#define AN_acb_get_agent(acb) ((acb)->agent)
#define AN_acb_get_pc(acb) ((acb)->pc)
#define AN_acb_get_exit_status(acb) ((acb)->exit_status)
#define AN_acb_get_lock(acb) ((acb)->lock)
#define AN_acb_get_prev(acb) ((acb)->prev)

#define AN_acb_set_frame_stack(acb,x) ((acb)->frame_stack=x)
#define AN_acb_set_arg_stack(acb,x) ((acb)->arg_stack=x)
#define AN_acb_set_nresult(acb,x) ((acb)->nresult_stack=x)
#define AN_acb_set_eresult(acb,x) ((acb)->eresult_stack=x)
#define AN_acb_set_nreg(acb,x) ((acb)->nreg=(x))
#define AN_acb_set_ereg(acb,x) ((acb)->ereg=(x))
#define AN_acb_set_scope_stack(acb,x) ((acb)->scope_stack=x)
#define AN_acb_set_saved_stack(acb,x) ((acb)->saved_stack=x)
#define AN_acb_set_tagged_buffers(acb,x) ((acb)->tagged_buffers=x)
#define AN_acb_set_agent(acb,x) ((acb)->agent=x)
#define AN_acb_set_pc(acb,x) ((acb)->pc=x)
#define AN_acb_set_exit_status(acb,x) ((acb)->exit_status=x)
#define AN_acb_set_lock(acb,x) ((acb)->lock=x)
#define AN_acb_set_e_merge(acb,x) ((acb)->e_merge=x)
#define AN_acb_set_prev(acb,x) ((acb)->prev=x)


#define AN_acb_inc_pc(acb) ((acb)->pc++)
#define AN_acb_ninc_pc(acb,n) ((acb)->pc+=(n))



#endif
