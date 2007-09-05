
#ifndef __EXCSTACK_H
#define __EXCSTACK_H 1

#include <assert.h>

/* Check for GCC usage etc. */

typedef void* LabelAddress;

typedef struct _labelitem {
  LabelAddress label;
  struct _labelitem *next;
} *LabelItem;

typedef struct _labelstack {
  LabelItem top;
} LabelStack;


#define NEW_LABEL_ITEM() ((LabelItem)malloc(sizeof(struct _labelitem)))

/*
#define NEW_LABEL_STACk() ((LabelStack)malloc(sizeof(struct _labelstack)))
*/

LabelStack push_label(LabelStack stack, LabelItem label);

LabelItem pop_label(LabelStack stack);

LabelItem top_label(LabelStack stack)
