

#include "reflection.h"


AN2Data do_copy(AN2Data data, AN2Data bindings) {
  return data;
}

AN2Data do_fail(AN2Data data, AN2Data bindings) {
  ACC_throw_failure();
}

AN2Data do_raise(AN2Data data, AN2Data bindings) {
  ACC_throw_exception(an2_make_int(3));
}

AN2Data f1(AN2Data data, AN2Data bindings) {
  ACC_throw_exception(an2_make_bool(1));
  //ACC_fail();
}

AN2Data print(AN2Data data, AN2Data bindings) {
  ATprintf("data = %t\n", data);
  ATprintf("bindings = %t\n", bindings);
  return an2_make_empty();
}

AN2Data give_bindings(AN2Data data, AN2Data bindings) {
  return an2_make_no_bindings();
}



AN2Data f2(AN2Data data, AN2Data bindings) {
  //AN2_raise(an2_make_int(2));
  //return an2_make_int(4);
  return an2_give_not(data);
}

void p(char * s) {
  fprintf(stderr, "debug: %s\n", s);
  fflush(stderr);
}

int main(int argc, char **argv) {
  ATerm bos;
  long bp;
  ACCFunctor f3, f4, f5, f6, f7, f8, f9, f10;
  an2_at_init(argc,argv,&bos);
  
  CPL_init_malloc_protect(malloc);
  CPL_init_malloc(malloc);
  CPL_init_realloc_protect(realloc);
  CPL_init_realloc(realloc);
  choice_init(&bp);

  ACC_init_throws();
  ACC_init_jitter();

  p("hoi");
  //f3 = ACC_jit_otherwise(f1,f2);
  //f3 = ACC_jit_and_exceptionally(f1,f2);
  //f4 = ACC_jit_exceptionally(f3,copy);
  //f3 = ACC_jit_exceptionally(do_raise, do_copy);
  //f3 = ACC_jit_exceptionally(f1, f2);
  //f4 = ACC_jit_otherwise(do_fail,do_copy);
  f3 = ACC_jit_and_exceptionally(do_raise, f1);
  f4 = ACC_jit_exceptionally(f3, do_copy);
  p("hoi");
  /* Output should be: [3{[type,int]},1{[type,bool]}]{[type,tuple]} */
  ATprintf("f4: %t\n", f4(an2_make_empty(), an2_make_empty()));


  f5 = ACC_jit_hence(do_copy, print);
  f6 = ACC_jit_exceptionally(f5, do_copy);
  ATprintf("f6: %t\n", f6(an2_make_int(5), an2_make_empty()));


  f7 = ACC_jit_and(do_copy, do_copy);
  ATprintf("f7: %t\n", f7(an2_make_int(5), an2_make_empty()));
  
  {
    ATerm t = an2_make_int(1209);
    f8 = ACC_jit_provide(t);
    ATprintf("f8: %t\n", f8(an2_make_int(5), an2_make_empty()));
  }

  return 0;

}

