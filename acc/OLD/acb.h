
#ifndef __ACB_H
#define __ACB_H 1

#include <aterm2.h>
#include "acdata.h"
#include "jmpstack.h"
#include "labelstack.h"

#define NORMAL_OUTCOME = 0;
#define EXCEPTIONAL_OUTCOME = 1;
#define FAILED_OUTCOME = 2;

typedef ATermList ACStack;
typedef ATermTable ACTaggedBuffers;

/* Action Control Block */

typedef struct _acb {
  JmpStack exception_stack;
  ACStack result, data, scope;
  ACStack saved_data, saved_scope;
  ACTaggedBuffers tagged_buffers;
  ACAGent agent;
  ACAction action;
  LabelAddres context; 
  LabelStack return_stack;
  int exit_status;
  struct _acb *prev;
} *ACB;

/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
ACB new_acb(ACAgent agent, ACAction action);


#endif
