
#ifndef __SCHED_H
#define __SCHED_H 1

#include "acb.h"

typedef struct _schedule {
	ACB first;
	ACB last; 
} Schedule;

#define IS_EMPTY_SCHEDULE(s) (s.first == NULL && s.last == NULL)

/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
void init_schedule(Schedule s, ACB acb);

/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
void rotate_schedule(Schedule s);

/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
void prepend_acb(Schedule s, ACB acb);

/*
 * name:
 * Pre:
 * Post:
 * Action:
 * Usage:
 */
ACB remove_agent(Schedule s, Agent agent);

#endif
