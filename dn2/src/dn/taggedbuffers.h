
#ifndef __AN_TAGGEDBUFFERS__H
#define __AN_TAGGEDBUFFERS__H

#define AN_TAGGED_BUFFERS_INITIAL_SIZE 20
#define AN_TAGGED_BUFFERS_LOAD_FACTOR  80

#include <aterm2.h>

typedef ATermTable AN_TaggedBuffers;


void AN_init_tagged_buffers(AN_TaggedBuffers *t);
void AN_release_tagged_buffers(AN_TaggedBuffers *t);

#define AN_queue_message(tb, tag, message) (\
  ATtableGet(tb, (ATerm)tag) != NULL ? \
  ATtablePut(tb, (ATerm)tag, (ATerm)ATappend((ATermList)ATtableGet(tb,tag),\
                                             (ATerm)message)) :\
  ATtablePut(tb, (ATerm)tag, (ATerm)ATmakeList1(message)))

#define AN_dequeue_message(tb, tag) ({\
  ATerm __m = NULL;\
  if (ATtableGet(tb, (ATerm)tag) != NULL) {\
    ATermList __l = (ATermList)ATtableGet(tb, tag);\
    __m = ATgetFirst(__l);\
    ATtablePut(tb, (ATerm)tag, (ATerm)ATgetNext(__l));\
  }\
  __m;\
})
    

#endif
