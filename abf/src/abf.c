
#include <stdlib.h>
#include <string.h>

#include "abf.h"

#define obstack_chunk_alloc malloc
#define obstack_chunk_free free

void on_abf_buffer_alloc_failure(void) {
  ATabort("ABFBuffer could not allocate memory.\n");
}

void abf_init_buffer(ABFBuffer *buffer) {
  obstack_alloc_failed_handler = &on_abf_buffer_alloc_failure;
  obstack_init(buffer);
}

void abf_start_stream(ABFBuffer *buffer) {
  obstack_blank(buffer, 0);
}

int abf_add_byte(ABFBuffer *buffer, char c) {
  obstack_1grow(buffer,c);
  return sizeof(char);
}

int abf_add_int(ABFBuffer *buffer, int n) {
  obstack_int_grow(buffer, n);
  return sizeof(int);
}

int abf_add_aterm_ptr(ABFBuffer *buffer, ATerm *t) {
  ATprotect(t);
  abf_add_ptr(buffer,t);
  return sizeof(ATerm*);
}

int abf_add_aterm(ABFBuffer *buffer, ATerm t) {
  int len, size_len;
  char *baf = ATwriteToBinaryString(t,&len);
  size_len = abf_add_int(buffer, len);
  obstack_grow(buffer, baf, len);
  return size_len + len;
}
  
int abf_add_ptr(ABFBuffer *buffer, void *ptr) {
  obstack_ptr_grow(buffer, ptr);
  return sizeof(void*);
}

int abf_add_string(ABFBuffer *buffer, char *s) {
  return abf_add_byte_array(buffer, s, strlen(s)+1);
}

int abf_add_byte_array(ABFBuffer *buffer, char *s, int len) {
  obstack_grow(buffer, s, len);
  return len;
}
  

ABF abf_finish_stream(ABFBuffer *buffer, int *size) {
  *size = obstack_object_size(buffer);
  return (ABF)obstack_finish(buffer);
}

void abf_release_stream(ABFBuffer *buffer, ABF *abf) {
  obstack_free(buffer, *abf);
  *abf = NULL;
}

void abf_fwrite(FILE *f, ABF abf, int size) {
  fwrite(abf, size, 1, f);
}

ABF abf_fread(ABFBuffer *buffer, FILE *f, int size) {
  ABF abf;
  obstack_blank(buffer, size);
  abf = obstack_finish(buffer);
  fread(abf, size, 1, f);
  return abf;
}

