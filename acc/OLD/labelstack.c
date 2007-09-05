
#include "excstack.h"

LabelStack push_label(LabelStack stack, LabelItem label) {
  LabelItem temp = stack.top;
  assert(label);
  stack.top = label;
  stack.top->next = temp;
}

LabelItem pop_label(LabelStack stack) {
  LabelItem temp = stack.top;
  assert(temp);
  stack.top = temp->next;
  return temp;
}

LabelItem top_label(LabelStack stack) {
  return stack.top;
}
