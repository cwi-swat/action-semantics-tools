
#ifndef __ABF__H 
#define __ABF__H 1

#include <obstack.h>
#include <stdlib.h>
#include <aterm1.h>
#include <stdio.h>

typedef char *ABF;

typedef struct obstack ABFBuffer;

#define abf_alloc_buffer() ((ABFBuffer*)malloc(sizeof(struct obstack)))
#define abf_free_buffer(b) (free(b))

void abf_init_buffer(ABFBuffer *buffer);

void abf_start_stream(ABFBuffer *buffer);

int abf_add_byte(ABFBuffer *buffer, char c);

int abf_add_int(ABFBuffer *buffer, int n);

int abf_add_aterm(ABFBuffer *buffer, ATerm t);

int abf_add_aterm_ptr(ABFBuffer *buffer, ATerm *t);

int abf_add_ptr(ABFBuffer *buffer, void *ptr);

int abf_add_string(ABFBuffer *buffer, char *s);

int abf_add_byte_array(ABFBuffer *buffer, char *s, int len);

ABF abf_finish_stream(ABFBuffer *buffer, int *size);

void abf_release_stream(ABFBuffer *buffer, ABF *abf);

void abf_fwrite(FILE *f, ABF abf, int size);
ABF abf_fread(ABFBuffer *buffer, FILE *f, int size);

#define abf_skip_byte(abf) (++(abf))
#define abf_skip_int(abf) ((abf)+=abf_int_offset(abf))
#define abf_skip_ptr(abf) ((abf)+=abf_ptr_offset(abf))
#define abf_skip_aterm(abf) ((abf)+=abf_aterm_offset(abf))

#define abf_byte_offset(abf) (1)
#define abf_int_offset(abf) (sizeof(int))
#define abf_ptr_offset(abf) (sizeof(void*))
#define abf_aterm_offset(abf) (sizeof(int)+abf_get_int(abf))


#define abf_get_byte(abf) (*(abf))
#define abf_get_int(abf) (*((int*)(abf)))
#define abf_get_ptr(abf) ((void*)abf_get_int((abf)))
#define abf_get_aterm(abf) (ATreadFromBinaryString(\
                           (abf)+sizeof(int),abf_get_int((abf))))


#define abf_put_int_at(abf,n,p) (*((int*)((abf)+(p)))=(n))

#endif

