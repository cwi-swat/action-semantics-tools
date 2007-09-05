
#ifndef __ACCSTORE_H 
#define __ACCSTORE_H 1

#include "accdata.h"

/* Storage: hashtable with buckets. */
#define STORE_SIZE 200

typedef struct cellstruct {
  int cell;
  ACData data;
  struct cellstruct *next;
} *ACCellEntry;


typedef ACCellEntry *ACStore;

/*
 * Name :
 * Input:
 * Ouput:
 */
#define INIT_STORE(s) (s=(ACStore)calloc(STORE_SIZE*sizeof(ACCellEntry)))

/*
 * Name :
 * Input:
 * Ouput:
 */
#define NEW_CELL_ENTRY() ((ACCellEntry)malloc(sizeof(struct cellstruct)))

/*
 * Name :
 * Input:
 * Ouput:
 */
#define STORE_INDEX(c) (c % STORE_SIZE)

/*
 * Name :
 * Input:
 * Ouput:
 */
#define STORE(s,c,d) store_put(s, STORE_INDEX(c), c, d)

/*
 * Name :
 * Input:
 * Ouput:
 */
#define RETRIEVE(s,c) store_get(s, STORE_INDEX(c), c)

/*
 * Name :
 * Input:
 * Ouput:
 */
inline void store_put(ACStore s, int i, int c, ACData d) {
  ACCellEntry e = s[i];
  while (e != NULL) e = e->next;
  e = NEW_CELL_ENTRY();
  e->cell = c;
  e->data = d;
  e->next = NULL;
}

/*
 * Name :
 * Input:
 * Ouput:
 */
inline ACData store_get(ACStore s, int i, int c) {
  ACCellEntry e = s[i];
  while ((e != NULL) && (e->cell != c)) e = e->next;
  return e ? e->data : e;
}
