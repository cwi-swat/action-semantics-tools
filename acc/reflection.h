
#ifndef __REFLECTION_H 
#define __REFLECTION_H 1

#include <an2.h>
#include "throw.h"

typedef AN2Data (*ACCFunctor)(AN2Data,AN2Data);

void ACC_init_jitter();

ACCFunctor ACC_jit_then(ACCFunctor a1, ACCFunctor a2);
ACCFunctor ACC_jit_and_then(ACCFunctor a1, ACCFunctor a2);

#define ACC_jit_and(a1,a2) ACC_jit_and_then(a1,a2)
#define ACC_jit_indivisibly(a) (a)

ACCFunctor ACC_jit_exceptionally(ACCFunctor a1, ACCFunctor a2);
ACCFunctor ACC_jit_and_exceptionally(ACCFunctor a1, ACCFunctor a2);
ACCFunctor ACC_jit_otherwise(ACCFunctor a1, ACCFunctor a2);
ACCFunctor ACC_jit_hence(ACCFunctor a1, ACCFunctor a2);

ACCFunctor ACC_jit_provide(AN2Data d);
  
  


#endif
