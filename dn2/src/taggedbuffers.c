
#include "dn/taggedbuffers.h"

void AN_init_tagged_buffers(AN_TaggedBuffers *t) {
  *t = ATtableCreate(AN_TAGGED_BUFFERS_INITIAL_SIZE,
		     AN_TAGGED_BUFFERS_LOAD_FACTOR);
}

void AN_release_tagged_buffers(AN_TaggedBuffers *t) {
  ATtableDestroy(*t);
  *t = NULL;
}

