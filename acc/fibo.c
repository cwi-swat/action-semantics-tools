/* -*- mode: c -*-
 * $Id: fibo.gcc,v 1.3 2001/07/04 03:27:43 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 */

#include <stdio.h>
#include <stdlib.h>

unsigned long
fib(unsigned long n) {
    return( (n < 2) ? 1 : (fib(n-2) + fib(n-1)) );
}

int
main(int argc, char *argv[]) {
    int N = ((argc == 2) ? atoi(argv[1]) : 1);
    int i;
    for (i = 1; i <= N; i++) 
      printf("%ld\n", fib(i));
    return(0);
}
