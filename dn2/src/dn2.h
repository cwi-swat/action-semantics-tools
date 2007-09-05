
#ifndef __DN2__H
#define __DN2__H 1

#include <aterm1.h>
#include "dn/data.h"
#include "dn/datum.h"
#include "dn/int.h"
#include "dn/bool.h"
#include "dn/cell.h"
#include "dn/list.h"
#include "dn/agent.h"
#include "dn/action.h"
#include "dn/bindings.h"
#include "dn/map.h"
#include "dn/pair.h"
#include "dn/set.h"
#include "dn/token.h"
#include "dn/stack.h"
#include "dn/store.h"
#include "dn/taggedbuffers.h"

typedef struct _ATerm *AN_Data;

#define AN_init(argc,argv,bos) (ATinit(argc,argv,bos),ATbbtreeInit()) 

#define AN_init_data(d) (((*d)=(ATerm)ATempty),ATprotect((ATerm*)(d)))
#define AN_release_data(d) (ATunprotect((ATerm*)(d)))


#endif
