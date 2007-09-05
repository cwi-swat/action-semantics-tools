
#include <aterm2.h>
#include <obstack.h>

#define obstack_chunk_alloc malloc
#define obstack_chunk_free free

void on_obstack_alloc_failure(void) {
  ATabort("Obstack could not allocate memory.\n");
}

int main(int argc, char **argv) {
  ATerm bos;
  struct obs;
  ATinit(argc, argv, &bos);
  obstack_alloc_failed_handler = &on_obstack_alloc_failure;
  obstack_init(&obs);
  
  

