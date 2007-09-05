
#include "dn/store.h"

void AN_init_store(AN_Store *s) {
  *s = ATtableCreate(AN_INITIAL_STORE_SIZE, AN_STORE_LOAD_FACTOR);
}

void AN_release_store(AN_Store *s) {
  ATtableDestroy(*s);
  *s = NULL;
}

void AN_fprint_store(FILE *f, AN_Store s) {
  ATermList keys = ATtableKeys(s);
  while (!ATisEmpty(keys)) {
    ATerm k = ATgetFirst(keys);
    ATfprintf(f,"<%t, %t>\n", k, ATtableGet(s,k));
    keys = ATgetNext(keys);
  }
}

