


#include <aterm2.h>

void ACR_init_continuation_stack();

void ACR_push_failure_continuation();
void ACR_push_exception_continuation();

ATerm ACR_find_failure_continuation();
ATerm ACR_find_exception_continuation();



