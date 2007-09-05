
#include "acb.h"

#include <assert.h>
#include <stdlib.h>

void AN_release_acb(AN_ACB *acb) {
  AN_release_frames(&((*acb)->frame_stack));
  AN_release_stack(&((*acb)->arg_stack));
  AN_release_stack(&((*acb)->nresult));
  AN_release_stack(&((*acb)->eresult));
  AN_release_stack(&((*acb)->scope_stack));
  AN_release_saved(&((*acb)->saved_stack));
  AN_release_tagged_buffers(&((*acb)->tagged_buffers));
  AN_release_data(&((*acb)->agent));
  AN_release_data(&((*acb)->nreg));
  AN_release_data(&((*acb)->ereg));
  free(*acb);
  *acb = NULL;
}

void AN_alloc_acb(AN_ACB *acb) {
  *acb = (AN_ACB)calloc(1,sizeof(struct _AN_ACB));
  if (!((*acb))) {
    perror("AN_init_acb");
    exit(1);
  }
}  

void AN_init_acb(AN_ACB *acb) {
  assert(*acb);
  AN_alloc_frames(&((*acb)->frame_stack));
  AN_init_frames(&((*acb)->frame_stack));
  AN_init_stack(&((*acb)->arg_stack));
  AN_init_stack(&((*acb)->nresult));
  AN_init_stack(&((*acb)->eresult));
  AN_init_stack(&((*acb)->scope_stack));
  AN_alloc_saved(&((*acb)->saved_stack));
  AN_init_saved(&((*acb)->saved_stack));
  AN_init_tagged_buffers(&((*acb)->tagged_buffers));
  AN_init_data(&((*acb)->agent));
  AN_init_data(&((*acb)->nreg));
  AN_init_data(&((*acb)->ereg));
  (*acb)->lock = 0;
  (*acb)->exit_status = AN_NORMAL;
  (*acb)->prev = NULL;
}

void AN_fprint_acb(FILE *f, AN_ACB acb) {
  fprintf(f, "Action Control Block %u:\n", acb);
  AN_fprintfData(f, "\tnreg = %t\n", acb->nreg);
  AN_fprintfData(f, "\tereg = %t\n", acb->ereg);
  AN_fprintfData(f, "\tnresult = %t\n", acb->nresult);
  AN_fprintfData(f, "\teresult = %t\n", acb->eresult);
  AN_fprintfData(f, "\targs = %t\n", acb->arg_stack);
  AN_fprintfData(f, "\tscope = %t\n", acb->scope_stack);
  fprintf(f, "frames:\n");
  AN_fprint_frame_stack(f,acb->frame_stack);
  fprintf(f, "saved:\n");
  AN_fprint_saved_stack(f,acb->saved_stack);
  fprintf(f, "locked: %s\n\n", acb->lock ? "true" : "false");
}
  
