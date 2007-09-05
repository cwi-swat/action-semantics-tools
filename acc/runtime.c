

#include <stdlib.h>
#include <time.h>
#include "reflection.h"
#include "throw.h"


/*
 * lcc fac2.c reflection.o throw.o -I../an2-lib/src -L/usr/local/lib
 *  -lchoice -lATerm-gcc -L../an2-lib/src/ -lAN2 -L. -ldisass -b -g -n -P
 */

#define ACC_make_action(f,n) (an2_set_type(ATmakeInt((int)(f)),AN2_ACTION_TYPE))
#define ACC_get_action_address(d) ((ACCFunctor)(ATgetInt((ATermInt)(d))))

static AN2Store store;
static int cell_counter;

/* Used to ensure that ATerms given to jit_provide don't get garbage collected. */
static ATermIndexedSet protected;

void ACC_init_runtime(int argc, char **argv, AN2Data *bos, long *bp) {
  an2_at_init(argc,argv,bos);
  CPL_init_malloc_protect(malloc);
  CPL_init_malloc(malloc);
  CPL_init_realloc_protect(realloc);
  CPL_init_realloc(realloc);
  choice_init(bp);
  ACC_init_throws();
  ACC_init_jitter();
  an2_init_store(&store, 1024, 80);
  cell_counter = 0;
  protected = ATindexedSetCreate(1024,80);
  srand(time(NULL));  
}

#ifdef DEBUG
#define debug(s) {\
  ATwarning("DEBUG: ************************** %s ************************* \n" , s);\
  ATwarning("\tdata = %t\n", data);\
  ATwarning("\tbindings = %t\n", bindings);\
  an2_fprint_store(stderr,store);\
}
  
#else
#define debug(s) 
#endif

AN2Data ACC_merge(AN2Data d1, AN2Data d2) {
  AN2Data __r;
  if (an2_has_type((d1),AN2_EMPTY_TYPE)) 
    __r = (AN2Data)(d2);
  else if (an2_has_type((d2),AN2_EMPTY_TYPE)) 
    __r = (AN2Data)(d1);
  else if (an2_has_type((d1),AN2_TUPLE_TYPE) && an2_has_type((d2),AN2_TUPLE_TYPE)) 
    __r = (AN2Data)an2_concat_tuples((d1),(d2));
  else if (an2_has_type(d1,AN2_TUPLE_TYPE)) 
    __r = (AN2Data)an2_append_to_tuple((d1),(d2));
  else if (an2_has_type(d2,AN2_TUPLE_TYPE)) 
    __r = (AN2Data)an2_insert_in_tuple((d2),(d1));
  else
     __r = (AN2Data)an2_make_2tuple((d1),(d2));
#ifdef DEBUG
  ATwarning("merged data = %t\n", __r);
#endif
  return __r;
}


AN2Data ACC_give_plus(AN2Data data, AN2Data bindings) {
  AN2Data d = an2_do_give_plus(data);
  debug("plus");
  if (d)
    return d;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_minus(AN2Data data, AN2Data bindings) {
  AN2Data d = an2_do_give_minus(data);
  debug("minus");
  if (d)
    return d;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_monus(AN2Data data, AN2Data bindings) {
  AN2Data d = an2_do_give_monus(data);
  debug("monus");
  if (d)
    return d;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_times(AN2Data data, AN2Data bindings) {
  AN2Data d = an2_do_give_times(data);
  debug("times");
  if (d)
    return d;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_bound(AN2Data data, AN2Data bindings) {
  AN2Data d = an2_do_give_bound(data);
  debug("bound");
  if (d)
    return d;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_binding(AN2Data data, AN2Data bindings) {
  AN2Data d = an2_do_give_binding(data);
  debug("binding");
  if (d)
    return d;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_overriding(AN2Data data, AN2Data bindings) {
  AN2Data d = an2_do_give_overriding(data);
  debug("overriding");
  if (d)
    return d;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_disjoint_union(AN2Data data, AN2Data bindings) {
  AN2Data d = an2_do_give_disjoint_union(data);
  debug("disjoint union");
  if (d)
    return d;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_tupleToList(AN2Data data, AN2Data bindings) {
  AN2Data d = an2_do_give_tupleToList(data);
  debug("tupleToList");
  if (d)
    return d;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_not(AN2Data data, AN2Data bindings) {
  AN2Data d = an2_do_give_not(data);
  debug("not");
  if (d)
    return d;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_then(AN2Data data, AN2Data bindings) {
  debug("then");
  if (an2_has_type(data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)data) == 2) {
    AN2Data d1 = an2_get_elt1((AN2Tuple)data);
    AN2Data d2 = an2_get_elt2((AN2Tuple)data);
    if (an2_has_type(d1,AN2_ACTION_TYPE) && an2_has_type(d2,AN2_ACTION_TYPE)) {
      ACCFunctor f1 = (ACCFunctor)an2_get_action_address(d1);
      ACCFunctor f2 = (ACCFunctor)an2_get_action_address(d2);
#ifdef DEBUG
      ATwarning("f1 = %x, f2 = %x\n", f1,f2);
#endif
      return ACC_make_action(ACC_jit_then(f1,f2),sizeof(ACCFunctor));
    }
  }
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_and_then(AN2Data data, AN2Data bindings) {
  debug("and_then");
  if (an2_has_type(data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)data) == 2) {
    AN2Data d1 = an2_get_elt1((AN2Tuple)data);
    AN2Data d2 = an2_get_elt2((AN2Tuple)data);
    if (an2_has_type(d1,AN2_ACTION_TYPE) && an2_has_type(d2,AN2_ACTION_TYPE)) {
      ACCFunctor f1 = (ACCFunctor)an2_get_action_address(d1);
      ACCFunctor f2 = (ACCFunctor)an2_get_action_address(d2);
      return ACC_make_action(ACC_jit_and_then(f1,f2),sizeof(ACCFunctor));
    }
  }
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

#define ACC_give_and(d,b) ACC_give_and_then(d,b)

AN2Data ACC_give_exceptionally(AN2Data data, AN2Data bindings) {
  debug("exceptionally");
  if (an2_has_type(data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)data) == 2) {
    AN2Data d1 = an2_get_elt1((AN2Tuple)data);
    AN2Data d2 = an2_get_elt2((AN2Tuple)data);
    if (an2_has_type(d1,AN2_ACTION_TYPE) && an2_has_type(d2,AN2_ACTION_TYPE)) {
      ACCFunctor f1 = (ACCFunctor)an2_get_action_address(d1);
      ACCFunctor f2 = (ACCFunctor)an2_get_action_address(d2);
      return ACC_make_action(ACC_jit_exceptionally(f1,f2),sizeof(ACCFunctor));
    }
  }
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_and_exceptionally(AN2Data data, AN2Data bindings) {
  debug("and_exceptionally");
  if (an2_has_type(data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)data) == 2) {
    AN2Data d1 = an2_get_elt1((AN2Tuple)data);
    AN2Data d2 = an2_get_elt2((AN2Tuple)data);
    if (an2_has_type(d1,AN2_ACTION_TYPE) && an2_has_type(d2,AN2_ACTION_TYPE)) {
      ACCFunctor f1 = (ACCFunctor)an2_get_action_address(d1);
      ACCFunctor f2 = (ACCFunctor)an2_get_action_address(d2);
      return ACC_make_action(ACC_jit_and_exceptionally(f1,f2),sizeof(ACCFunctor));
    }
  }
  ACC_throw_exception(an2_make_empty());
  return NULL;
}


AN2Data ACC_give_otherwise(AN2Data data, AN2Data bindings) {
  debug("otherwise");
  if (an2_has_type(data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)data) == 2) {
    AN2Data d1 = an2_get_elt1((AN2Tuple)data);
    AN2Data d2 = an2_get_elt2((AN2Tuple)data);
    if (an2_has_type(d1,AN2_ACTION_TYPE) && an2_has_type(d2,AN2_ACTION_TYPE)) {
      ACCFunctor f1 = (ACCFunctor)an2_get_action_address(d1);
      ACCFunctor f2 = (ACCFunctor)an2_get_action_address(d2);
      return ACC_make_action(ACC_jit_otherwise(f1,f2),sizeof(ACCFunctor));
    }
  }
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_hence(AN2Data data, AN2Data bindings) {
  debug("hence");
  if (an2_has_type(data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)data) == 2) {
    AN2Data d1 = an2_get_elt1((AN2Tuple)data);
    AN2Data d2 = an2_get_elt2((AN2Tuple)data);
    if (an2_has_type(d1,AN2_ACTION_TYPE) && an2_has_type(d2,AN2_ACTION_TYPE)) {
      ACCFunctor f1 = (ACCFunctor)an2_get_action_address(d1);
      ACCFunctor f2 = (ACCFunctor)an2_get_action_address(d2);
      debug("testing jitted hence.");
      fflush(stderr);
#ifdef DEBUG
      ATwarning("f1 = %x, f2 = %x\n", f1,f2);
#endif
      return ACC_make_action(ACC_jit_hence(f1,f2),sizeof(ACCFunctor));
    }
  }
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_indivisibly(AN2Data data, AN2Data bindings) {
  debug("indivisibly");
  if (an2_has_type(data,AN2_ACTION_TYPE)) 
    return data;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_give_provide(AN2Data data, AN2Data bindings) {
  ATbool new;
  AN2Data d,r;
  ACCFunctor f;
  debug("provide");
  ATindexedSetPut(protected,data, &new);
  d = ACC_make_action(ACC_jit_provide(data),sizeof(ACCFunctor));
#ifdef DEBUG
  ATwarning("action = %t\n", d);
  ATwarning("testing jitted provide.\n");
  ATwarning("provided data: %t\n", data);
#endif
  f = (ACCFunctor)an2_get_action_address(d);
  r = f(an2_make_empty(), an2_make_no_bindings());
#ifdef DEBUG
  ATwarning("result = %t\n", r);
#endif
  return d;
}



AN2Data ACC_GEN_give_component(int n, AN2Data data, AN2Data bindings) {
  debug("component");
  if (an2_has_type(data, AN2_TUPLE_TYPE)) {
    int temp_int = an2_get_tuple_size((AN2Tuple)data);
    if (temp_int > 1 && temp_int >= n)
      return an2_get_elt((AN2Tuple)data,n);
  }
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_GEN_give_the_datasort(AN2Type type, AN2Data data, AN2Data bindings) {
  debug("the datasort");
  if (an2_type_equal(type,AN2_DATA_CASTABLE_TYPE))
    return data;
  if (an2_type_equal(type, AN2_DATUM_CASTABLE_TYPE) &&
      !an2_has_type(data,AN2_TUPLE_TYPE))
    return data;
  if (an2_has_type(data, type))
    return data;
  ACC_throw_exception(an2_make_empty());
  return NULL;
}


AN2Data ACC_check_greater_than(AN2Data data, AN2Data bindings) {
  debug("gt");
  if (an2_do_check_greater_than(data))
    return an2_make_empty();
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_check_less_than(AN2Data data, AN2Data bindings) {
  debug("lt");
  if (an2_do_check_less_than(data))
    return an2_make_empty();
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_check_greater_than_or_eq(AN2Data data, AN2Data bindings) {
  debug("geq");
  if (an2_do_check_greater_than_or_eq(data))
    return an2_make_empty();
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_check_less_than_or_eq(AN2Data data, AN2Data bindings) {
  debug("leq");
  if (an2_do_check_less_than_or_eq(data))
    return an2_make_empty();
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_check_equals(AN2Data data, AN2Data bindings) {
  ATbool bool;
  debug("equals");
  bool =  an2_do_check_equals(data);
  //  bool = ATisEqual(an2_get_elt1((AN2Tuple)data),an2_get_elt2((AN2Tuple)data));
#ifdef DEBUG
  fprintf(stderr, "bool = %d\n", bool);
#endif
  if (bool)
    return an2_make_empty();
  debug("after equals (d1 != d2)");
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_create(AN2Data data, AN2Data bindings) {
  debug("create");
  if (!an2_has_type(data,AN2_TUPLE_TYPE)) {
    AN2Data c = an2_make_cell(cell_counter++);
    an2_update_cell(store, c, data);
    return c;
  }
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_update(AN2Data data, AN2Data bindings) {
  debug("update");
  if (an2_has_type(data,AN2_TUPLE_TYPE))
    if (an2_has_type(an2_get_elt1((AN2Tuple)data),AN2_CELL_TYPE))
      if (an2_check_cell(store,an2_get_elt1((AN2Tuple)data))) {
	an2_update_cell(store, an2_get_elt1((AN2Tuple)data),
			an2_get_elt2((AN2Tuple)data));
	return an2_make_empty();
      }
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_inspect(AN2Data data, AN2Data bindings) {
  debug("inspect");
  if (an2_has_type(data,AN2_CELL_TYPE))
    if (an2_check_cell(store, data))
      return an2_inspect_cell(store,data);
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_destroy(AN2Data data, AN2Data bindings) {
  debug("destroy");
  if (an2_has_type(data,AN2_CELL_TYPE))
    if (an2_check_cell(store, data)) {
      an2_destroy_cell(store, data);
      return an2_make_empty();
    }
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_copy(AN2Data data, AN2Data bindings) {
  debug("copy");
  return data;
}

AN2Data ACC_give_current_bindings(AN2Data data, AN2Data bindings) {
  debug("give current bindings");
  return bindings;
}

AN2Data ACC_raise(AN2Data data, AN2Data bindings) {
  debug("raise");
  ACC_throw_exception(data);
  return NULL;
}

AN2Data ACC_fail(AN2Data data, AN2Data bindings) {
  debug("fail");
  ACC_throw_failure();
  return NULL;
}

AN2Data ACC_choose_natural(AN2Data data, AN2Data bindings) {
  debug("choose natural");
  return an2_make_int(rand());
}

AN2Data ACC_enact(AN2Data data, AN2Data bindings) {
  debug("enact");
  if (an2_has_type(data,AN2_ACTION_TYPE)) {
    ACCFunctor f; AN2Data d; ATbool new;
    ATindexedSetPut(protected,data, &new);
#ifdef DEBUG
    ATwarning("Yes we have an action datatype.\n");
#endif
    f = (ACCFunctor)ACC_get_action_address(data);    
#ifdef DEBUG
    ATwarning("Before calling f\n");
#endif
    d = f(an2_make_empty(),an2_make_no_bindings());
#ifdef DEBUG
    ATfprintf(stderr, "in enact, f returned: %t\n", d);
#endif
    return d;
  }
  ACC_throw_exception(an2_make_empty());
  return NULL;
}

AN2Data ACC_GEN_provide(AN2Data d,AN2Data data, AN2Data bindings) {
  return d;
}

/* AN2Data ACC_(AN2Data data, AN2Data bindings) { */
/*   return an2_make_empty(); */
/* } */
