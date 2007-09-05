

#include <stdlib.h>
#include <stdio.h>

#include <alloca.h>

static void *all = malloc;

static int barf[20] = {10,};

int main(void) {
  int i;
  for (i = 0; i < 20; i++)
    printf("%d\n", barf[i]);
  return 0;
}

