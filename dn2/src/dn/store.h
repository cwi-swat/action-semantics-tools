#ifndef __AN_STORE__H
#define __AN_STORE__H 1

#include <aterm2.h>
#include <stdio.h>

#define AN_INITIAL_STORE_SIZE 1024
#define AN_STORE_LOAD_FACTOR  75

typedef ATermTable AN_Store;

void AN_init_store(AN_Store *s);
void AN_release_store(AN_Store *s);


#define AN_check_cell(s,c) (ATtableGet(s,(ATerm)c)!=NULL)
#define AN_update_cell(s,c,d) (ATtablePut(s,(ATerm)c,(ATerm)d))
#define AN_inspect_cell(s,c) (ATtableGet(s,(ATerm)c))
#define AN_destroy_cell(s,c) (ATtableRemove(s,(ATerm)c))


void AN_fprint_store(FILE *f, AN_Store s);


#endif
