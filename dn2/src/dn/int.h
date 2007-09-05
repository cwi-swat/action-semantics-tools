
#ifndef __AN_INT_H
#define __AN_INT_H 1

#include <aterm2.h>

/*#include <gmp.h>*/

#define AN_INT_PATTERN "int(<int>)"

#define AN_INT_PATTERN_TERM (ATparse(AN_INT_PATTERN))

#define AN_isInt(d) (ATmatchTerm(d,AN_INT_PATTERN_TERM,NULL))

/* Constructor. */
#define AN_make_int(n) (ATmake(AN_INT_PATTERN,n))

#define AN_givePlus(d1,d2) (AN_make_int(AN_get_int_value(d1)+AN_get_int_value(d2)))
#define AN_giveMinus(d1,d2) (AN_make_int(AN_get_int_value(d1)-AN_get_int_value(d2)))
#define AN_giveTimes(d1,d2) (AN_make_int(AN_get_int_value(d1)*AN_get_int_value(d2)))
#define AN_giveMonus(d1,d2) ({\
 int __n1 = AN_get_int_value(d1);\
  int __n2 = AN_get_int_value(d2);\
  ((__n1 > __n2) ? (__n1-__n2) : 0);\
})

#define AN_checkLt(d1,d2) (AN_get_int_value(d1)<AN_get_int_value(d2))
#define AN_checkGt(d1,d2) (AN_get_int_value(d1)>AN_get_int_value(d2))
#define AN_checkLeq(d1,d2) (AN_get_int_value(d1)<=AN_get_int_value(d2))
#define AN_checkGeq(d1,d2) (AN_get_int_value(d1)>=AN_get_int_value(d2))



/* #define AN_givePlus(d1,d2) ({\ */
/*   mpz_t __i1,__i2; ATerm __d;\ */
/*   mpz_init_set_str(__i1,AN_get_int_value(d1),10);\ */
/*   mpz_init_set_str(__i2,AN_get_int_value(d2),10);\ */
/*   mpz_add(__i1,__i1,__i2); \ */
/*   __d = AN_make_int(mpz_get_str(NULL,10,__i1));\ */
/*   mpz_clear(__i1); mpz_clear(__i2);\ */
/*   __d;\ */
/* }) */

/* #define AN_giveMinus(d1,d2) ({\ */
/*   mpz_t __i1,__i2; ATerm __d;\ */
/*   mpz_init_set_str(__i1,AN_get_int_value(d1),10);\ */
/*   mpz_init_set_str(__i2,AN_get_int_value(d2),10);\ */
/*   mpz_sub(__i1,__i1,__i2); \ */
/*   __d = AN_make_int(mpz_get_str(NULL,10,__i1));\ */
/*   mpz_clear(__i1); mpz_clear(__i2);\ */
/*   __d;\ */
/* }) */


/* #define AN_giveTimes(d1,d2)  ({\ */
/*   mpz_t __i1,__i2; ATerm __d;\ */
/*   mpz_init_set_str(__i1,AN_get_int_value(d1),10);\ */
/*   mpz_init_set_str(__i2,AN_get_int_value(d2),10);\ */
/*   mpz_mul(__i1,__i1,__i2); \ */
/*   __d = AN_make_int(mpz_get_str(NULL,10,__i1));\ */
/*   mpz_clear(__i1); mpz_clear(__i2);\ */
/*   __d;\ */
/* }) */

/* #define AN_giveMonus(d1,d2)  ({\ */
/*   mpz_t __i1,__i2; ATerm __d;\ */
/*   mpz_init_set_str(__i1,AN_get_int_value(d1),10);\ */
/*   mpz_init_set_str(__i2,AN_get_int_value(d2),10);\ */
/*   if (mpz_cmp(__i1,__i2) < 0) \ */
/*      mpz_set_ui(__i1,0);\ */
/*   else \ */
/*      mpz_sub(__i1,__i1,__i2); \ */
/*   __d = AN_make_int(mpz_get_str(NULL,10,__i1));\ */
/*   mpz_clear(__i1); mpz_clear(__i2);\ */
/*   __d;\ */
/* }) */


/* Accessor */
#define AN_get_int_value(d) (ATgetInt((ATermInt)ATgetArgument((ATermAppl)d,0)))

/*#define AN_get_int_value(d) (ATgetName(ATgetAFun((ATermAppl)ATgetArgument((ATermAppl)d,0))))*/





#endif
