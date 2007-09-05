
#include <aterm1.h>
#include "accutils.h"

void print_data(ACData d) {
  switch (d->type) {
  case UNDEF_TYPE: printf("NULL"); break;
  case INT_TYPE: 
  case CELL_TYPE: 
  case MESSAGETAG_TYPE: printf("%d",(int)d->content); break;
  case BOOL_TYPE: printf("%c", d->content ? 'T' : 'F'); break;
  case ACTION_TYPE: printf("%d",(int)d->content); break;
  default: ATprintf("%t", (ATerm)d->content);
  }
}
