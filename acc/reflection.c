
/*
 * if _ASM_SAFETY is defined, a typo in asm-common.h surfaces: uiP(N,I) -> _uiP(N,I).
 */

#define _ASM_SAFETY
#define LIGHTNING_DISASSEMBLE

#include <stdio.h>
#include <lightning.h>

#include "reflection.h"

static jit_insn buffer[8192];

static char *cur_ip;

static AN2Data merge(AN2Data d1, AN2Data d2) {
  return an2_merge_data(d1,d2);
}

/* Memotable to prevent multiple jits of the same function. */
/* And... this should be a hashtable. */

#define THEN                 0
#define AND_THEN             1
#define AND                  2
#define EXCEPTIONALLY        3
#define AND_EXCEPTIONALLY    4
#define OTHERWISE            5
#define PROVIDE              6
#define INDIVISIBLY          7
#define HENCE                8

#define NUM_OF_FUNCTOR_TYPES 9

typedef struct memo_entry {
  void *arg1,*arg2;
  ACCFunctor result;
  struct memo_entry *next;
} *memo_entry;

static memo_entry memo_table[NUM_OF_FUNCTOR_TYPES] = {};

void ACC_init_jitter() {
  int i = 0;
  while (i < NUM_OF_FUNCTOR_TYPES) 
    memo_table[i++] = NULL;
  cur_ip = (char*)buffer;
}

ACCFunctor find_memoized_functor(int type, void *a1, void *a2) {
  memo_entry m = memo_table[type];
  while (m) {
    if (m->arg1 == a1 && m->arg2 == a2)
      return m->result;
    m = m->next;
  }
#ifdef DEBUG
  ATwarning("Returning NULL\n");
#endif
  return NULL;
}

void memoize_functor(int type, void *a1, void *a2, ACCFunctor result) {
  memo_entry m = (memo_entry)malloc(sizeof(struct memo_entry));
  m->arg1 = a1;
  m->arg2 = a2;
  m->result = result;
  if (memo_table[type])
    m->next = memo_table[type];
  else
    m->next = NULL;
  memo_table[type] = m;
}

/***************************************************************
 *
 * THEN
 *
 ***************************************************************/

ACCFunctor ACC_jit_then(ACCFunctor a1, ACCFunctor a2) {
  char *start, *end;
  int data_offset,  bindings_offset;
  ACCFunctor f;
  if (f = find_memoized_functor(THEN, a1, a2))
    return f;
  f = (ACCFunctor)(jit_set_ip(cur_ip).pptr);
  start = jit_get_ip().ptr;
  jit_prolog(2);
  data_offset = jit_arg_p();
  bindings_offset = jit_arg_p();
  jit_getarg_p(JIT_V0, data_offset);      /* v0 = data */
  jit_getarg_p(JIT_V1, bindings_offset);  /* v1 = bindings */
  jit_prepare(2);
  jit_pusharg_p(JIT_V1);
  jit_pusharg_p(JIT_V0);
  jit_finish(a1);                         
  jit_retval(JIT_V2);                     /* v2 = a1(data,bindings) */
  jit_prepare(2);
  jit_pusharg_p(JIT_V1);
  jit_pusharg_p(JIT_V2);
  jit_finish(a2);
  jit_retval(JIT_RET);                    /* ret = a2(v2,bindings) */
  jit_ret();
  cur_ip = jit_get_ip().ptr;
  jit_flush_code(start,cur_ip);
  
#ifdef DEBUG
  disassemble(stderr, (char *)f, jit_get_ip().ptr);
  fprintf(stderr, "cur_ip = %x\n", cur_ip);
#endif
  memoize_functor(THEN, a1, a2, f);
  return f;
}

/***************************************************************
 *
 * AND THEN
 *
 ***************************************************************/

ACCFunctor ACC_jit_and_then(ACCFunctor a1, ACCFunctor a2) {
  char *start, *end;
  int data_offset,  bindings_offset;
  ACCFunctor f;

  if (f = find_memoized_functor(AND_THEN, a1, a2))
    return f;

  f = (ACCFunctor)(jit_set_ip(cur_ip).pptr);
  start = jit_get_ip().ptr;
  jit_prolog(2);
  data_offset = jit_arg_p();
  bindings_offset = jit_arg_p();

  jit_getarg_p(JIT_V1, data_offset);
  jit_getarg_p(JIT_V2, bindings_offset);

  jit_prepare(2);
  jit_pusharg_p(JIT_V2);
  jit_pusharg_p(JIT_V1);
  jit_finish(a1);
  jit_retval(JIT_V0);

  jit_prepare(2);
  jit_pusharg_p(JIT_V2);
  jit_pusharg_p(JIT_V1);
  jit_finish(a2);
  jit_retval(JIT_V1);
  
  jit_prepare(2);
  jit_pusharg_p(JIT_V1);
  jit_pusharg_p(JIT_V0);
  jit_finish(merge);
  jit_retval(JIT_RET);
  jit_ret();
  cur_ip = jit_get_ip().ptr;
  jit_flush_code(start,cur_ip);

#ifdef DEBUG
  disassemble(stderr, (char *)f, jit_get_ip().ptr);
  fprintf(stderr, "cur_ip = %x\n", cur_ip);
#endif
  memoize_functor(AND_THEN, a1, a2, f);
  return f;
}
  

/***************************************************************
 *
 * EXCEPTIONALLY
 *
 ***************************************************************/

ACCFunctor ACC_jit_exceptionally(ACCFunctor a1, ACCFunctor a2) {
  char *start, *end;
  int data_offset,  bindings_offset;
  jit_insn *handler, *re_fail;
  ACCFunctor f;

  if (f = find_memoized_functor(EXCEPTIONALLY, a1, a2))
    return f;

  /* Start jitting. */
  f = (ACCFunctor)(jit_set_ip(cur_ip).pptr);
  start = jit_get_ip().ptr;

  /* Prologue for a function accepting to arguments. */
  jit_prolog(2);

  /* Get offsets for arguments. */
  data_offset = jit_arg_p();
  bindings_offset = jit_arg_p();

  /* Save arguments. */
  jit_getarg_p(JIT_V1, data_offset);
  jit_getarg_p(JIT_V2, bindings_offset);
  
  /* Set the choice point. */
  //  jit_calli(setChoicePoint);
  jit_calli(ACC_try);
  jit_retval(JIT_R0);
  
  /* Check the result for non-zero. */
  handler = jit_bnei_i(jit_forward(), JIT_R0, 0);

  /* If setChoicePoint returned 0, continue. */

  /* Prepare for functor 1. */
  jit_prepare(2);
  jit_pusharg_p(JIT_V2);
  jit_pusharg_p(JIT_V1);
  
  /* Call functor 1 cleaning the argument stack. */
  jit_finish(a1); 
  jit_retval(JIT_V0);

  //jit_calli(_ACC_end_try);

  /* Return. */
  jit_movr_p(JIT_RET,JIT_V0);
  jit_ret();  

  /* Handle failure or exception. */
  jit_patch(handler); {
    jit_calli(ACC_catch_exception);
    
    /* If we arrive here, we have an exception and can get the data. */
    jit_retval(JIT_V1);

    /* Call second argument. */
    jit_prepare(2);
    jit_pusharg_p(JIT_V2);
    jit_pusharg_p(JIT_V1);
    jit_finish(a2);
    jit_retval(JIT_RET);
    jit_ret();  
  }

  /* Finish code. */
  cur_ip = jit_get_ip().ptr;
  jit_flush_code(start,cur_ip);

#ifdef DEBUG
  disassemble(stderr, (char *)f, jit_get_ip().ptr);
  fprintf(stderr, "cur_ip = %x\n", cur_ip);
#endif
  memoize_functor(EXCEPTIONALLY, a1, a2, f);
  return f;
}  


/***************************************************************
 *
 * AND EXCEPTIONALLY
 *
 ***************************************************************/

ACCFunctor ACC_jit_and_exceptionally(ACCFunctor a1, ACCFunctor a2) {
  char *start, *end;
  int data_offset,  bindings_offset;
  jit_insn *handler, *re_handler, *re_fail, *re_re_fail;
  ACCFunctor f;

  if (f = find_memoized_functor(EXCEPTIONALLY, a1, a2))
    return f;

  /* Start jitting. */
  f = (ACCFunctor)(jit_set_ip(cur_ip).pptr);
  start = jit_get_ip().ptr;

  /* Prologue for a function accepting to arguments. */
  jit_prolog(2);

  /* Get offsets for arguments. */
  data_offset = jit_arg_p();
  bindings_offset = jit_arg_p();

  /* Save arguments. */
  jit_getarg_p(JIT_V1, data_offset);
  jit_getarg_p(JIT_V2, bindings_offset);
  
  /* Set the choice point. */
  //jit_calli(setChoicePoint);
  jit_calli(ACC_try);
  jit_retval(JIT_R0);
  
  /* Check the result for non-zero. */
  handler = jit_bnei_i(jit_forward(), JIT_R0, 0);

  /* If setChoicePoint returned 0, continue. */

  /* Prepare for functor 1. */
  jit_prepare(2);
  jit_pusharg_p(JIT_V2);
  jit_pusharg_p(JIT_V1);
  
  /* Call functor 1 cleaning the argument stack. */
  jit_finish(a1); 
  jit_retval(JIT_V0);

  //jit_calli(_ACC_end_try);

  /* Return. */
  jit_movr_p(JIT_RET,JIT_V0);
  jit_ret();  

  /* Handle failure or exception. */
  jit_patch(handler); {

    jit_calli(ACC_catch_exception);

    /* Save in V register which is saved during functioncalls. */
    jit_retval(JIT_V0);

    /* Set the choice point a second time. */
    //    jit_calli(setChoicePoint);
    jit_calli(ACC_try);
    jit_retval(JIT_R2);
  
    /* Check the result for non-zero. */
    re_handler = jit_bnei_i(jit_forward(), JIT_R2, 0);

    /* If setChoicePoint returned 0, continue. */
    /* Call second argument. */
    jit_prepare(2);
    jit_pusharg_p(JIT_V2);
    jit_pusharg_p(JIT_V1);
    jit_finish(a2);
    jit_retval(JIT_V0);

    //jit_calli(_ACC_end_try);

    /* Return. */
    jit_movr_p(JIT_RET,JIT_V0);
    jit_ret();  

    jit_patch(re_handler); {

      /* Catch exception */
      jit_calli(ACC_catch_exception);
      jit_retval(JIT_R1);

      /* Merge two exception-datums. */
      jit_pusharg_p(JIT_R1);
      jit_pusharg_p(JIT_V0);
      jit_finish(merge);
      jit_retval(JIT_R2);
      jit_prepare(1);
      jit_pusharg_p(JIT_R2);
      jit_finish(ACC_throw_exception);
    } /* end of second handler. */
  } /* end of first handler. */
  /* Finish code. */
  cur_ip = jit_get_ip().ptr;
  jit_flush_code(start,cur_ip);

#ifdef DEBUG
  disassemble(stderr, (char *)f, jit_get_ip().ptr);
  fprintf(stderr, "cur_ip = %x\n", cur_ip);
#endif
  memoize_functor(AND_EXCEPTIONALLY, a1, a2, f);
  return f;
}  

/***************************************************************
 *
 * OTHERWISE
 *
 ***************************************************************/

ACCFunctor ACC_jit_otherwise(ACCFunctor a1, ACCFunctor a2) {
  char *start, *end;
  int data_offset,  bindings_offset;
  jit_insn *handler, *re_fail;
  ACCFunctor f;

  if (f = find_memoized_functor(OTHERWISE, a1, a2))
    return f;

  /* Start jitting. */
  //  f = (ACCFunctor)(jit_set_ip(buffer).pptr);
  f = (ACCFunctor)(jit_set_ip(cur_ip).pptr);
  start = jit_get_ip().ptr;

  /* Prologue for a function accepting two arguments. */
  jit_prolog(2);

  /* Get offsets for arguments. */
  data_offset = jit_arg_p();
  bindings_offset = jit_arg_p();

  /* Save arguments. */
  jit_getarg_p(JIT_V1, data_offset);
  jit_getarg_p(JIT_V2, bindings_offset);

  /* Set the choice point. */
  //  jit_calli(setChoicePoint); 
  jit_calli(ACC_try);
  jit_retval(JIT_R0); 

  /* Check the result for non-zero. */
  handler = jit_bnei_i(jit_forward(), JIT_R0, 0);

  /* If setChoicePoint returned 0, continue. */

  /* Prepare for functor 1. */
  jit_prepare(2);
  jit_pusharg_p(JIT_V2);
  jit_pusharg_p(JIT_V1);
  
  /* Call functor 1 cleaning the argument stack. */
  jit_finish(a1); 
  jit_retval(JIT_V0);

  //jit_calli(_ACC_end_try);

  /* Return. */
  jit_movr_p(JIT_RET,JIT_V0);
  jit_ret();

  /* Handle failure or exception. */
  jit_patch(handler); {

    /* Catch only failure. */
    jit_calli(ACC_catch_failure);
    jit_retval(JIT_R0);
    
    /* Call second argument. */
    jit_prepare(2);
    jit_pusharg_p(JIT_V2);
    jit_pusharg_p(JIT_V1);
    jit_finish(a2);
    jit_retval(JIT_RET);
    jit_ret();  
  }
  /* Finish code. */
  cur_ip = jit_get_ip().ptr;
  jit_flush_code(start,cur_ip);

  memoize_functor(OTHERWISE, a1, a2, f);
#ifdef DEBUG
  disassemble(stderr, (char *)f, jit_get_ip().ptr);
  fprintf(stderr, "cur_ip = %x\n", cur_ip);
#endif
  return f;
}  
  
  

/***************************************************************
 *
 * PROVIDE
 *
 ***************************************************************/

ACCFunctor ACC_jit_provide(AN2Data d) {
  char *start, *end;
  int data_offset,  bindings_offset;
  ACCFunctor f;
  if (f = find_memoized_functor(PROVIDE, d, NULL))
    return f;

  f = (ACCFunctor)(jit_set_ip(cur_ip).pptr);
  start = jit_get_ip().ptr;
  jit_leaf(2);

  /* Protection of d has to be taken care of elsewhere. */
  jit_movi_p(JIT_RET, d);
  jit_ret();
  cur_ip = jit_get_ip().ptr;
  jit_flush_code(start,cur_ip);

  memoize_functor(PROVIDE, d, NULL, f);
#ifdef DEBUG
  disassemble(stderr, (char *)f, jit_get_ip().ptr);
  fprintf(stderr, "cur_ip = %x\n", cur_ip);
#endif
  return f;
}

  


/***************************************************************
 *
 * HENCE
 *
 ***************************************************************/

ACCFunctor ACC_jit_hence(ACCFunctor a1, ACCFunctor a2) {
  char *start, *end;
  int data_offset,  bindings_offset;
  jit_insn *error;
  ACCFunctor f;
  if (f = find_memoized_functor(HENCE, a1, a2))
    return f;
  f = (ACCFunctor)(jit_set_ip(cur_ip).pptr);
  start = jit_get_ip().ptr;
  jit_prolog(2);
  data_offset = jit_arg_p();
  bindings_offset = jit_arg_p();
  jit_getarg_p(JIT_V0, data_offset);      /* v0 = data */
  jit_getarg_p(JIT_V1, bindings_offset);  /* v1 = bindings */
  jit_prepare(2);
  jit_pusharg_p(JIT_V1);
  jit_pusharg_p(JIT_V0);
  jit_finish(a1);
  jit_retval(JIT_V2);                     /* v2 = a1(v0,v1) */

  /* Test for bindings type. */
  jit_movi_p(JIT_V1, an2_type_label);     /* v1 = "type" */
  jit_prepare(2);
  jit_pusharg_p(JIT_V1);
  jit_pusharg_p(JIT_V2);
  jit_finish(ATgetAnnotation);
  jit_retval(JIT_V1);                    /* v1 = ATgetAnnotation(v2,v1) */
  error = jit_bnei_p(jit_forward(), JIT_V1, AN2_BINDINGS_TYPE);

  /* If the type is correct, continue */
  jit_prepare(2);
  jit_pusharg_p(JIT_V2);
  jit_pusharg_p(JIT_V0);
  jit_finish(a2);
  jit_retval(JIT_RET);                  /* ret = a2(v0,v2) */
  jit_ret();

  jit_patch(error); 
  jit_movi_p(JIT_V0, an2_make_empty()); /* v0 = () */
  jit_prepare(1);
  jit_pusharg_p(JIT_V0);

  /* This must be finish, segmentation fault when using calli. */
  jit_finish(ACC_throw_exception);      /* throw(v0) */

  cur_ip = jit_get_ip().ptr;
  jit_flush_code(start,cur_ip);
#ifdef DEBUG
  disassemble(stderr, (char *)f, jit_get_ip().ptr);
  fprintf(stderr, "cur_ip = %x\n", cur_ip);
#endif
  memoize_functor(HENCE, a1, a2, f);
  return f;
}
