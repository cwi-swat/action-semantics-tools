
#ifndef __BINDINGS_H
#define __BINDINGS_H 1

#include "acdata.h"

/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
ACBindings ACoverriding(ACBindings bs1, ACBindings bs2);

/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
ACBindings ACdisjointUnion(ACBindings bs1, ACBindings bs2);

/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
ACBindings ACbinding(ACToken tk, ACData d);

/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
ACData ACbound(ACBindings bs, ACToken tk);



#endif
