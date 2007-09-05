
#ifndef __AN_SCHEDULE__H
#define __AN_SCHEDULE__H 1

#include "acb.h"

typedef struct _AN_Schedule {
        AN_ACB defuncts;
	AN_ACB first;
	AN_ACB last; 
} *AN_Schedule;

void AN_alloc_schedule(AN_Schedule *s);
void AN_init_schedule(AN_Schedule *s, AN_ACB acb);
void AN_release_schedule(AN_Schedule *s);

#define AN_is_empty_schedule(s) (((s)->last==NULL))

#define AN_schedule_activate(s,adr) {  \
  AN_ACB _acb;                         \
  AN_alloc_acb(&acb);                  \
  AN_init_acb(&acb);                   \
  AN_acb_set_pc(adr);                  \
  AN_schedule_prepend_acb(s,acb);      \
}

#define AN_schedule_deactivate(s,acb) (AN_schedule_remove_acb(s,acb))


#define AN_schedule_get_active(s) (AN_schedule_get_last(s))

#define AN_schedule_get_first(s) ((s)->first)
#define AN_schedule_get_last(s) ((s)->last)

#define AN_schedule_yield(s,a) {\
  AN_acb_set_pc((s)->last,a);\
  AN_schedule_rotate(s);\
}

/* This can be faster... */
#define AN_schedule_rotate(schedule) {                 \
  AN_ACB __temp;                                       \
  if ((schedule)->first != (schedule)->last) {         \
    (schedule)->first->prev = (schedule)->last->prev;  \
    __temp = (schedule)->first;                        \
    (schedule)->first = (schedule)->last;              \
    (schedule)->last = __temp;                         \
    (schedule)->first->prev = NULL;                    \
  }                                                    \
}

void AN_schedule_prepend_acb(AN_Schedule schedule, AN_ACB acb);
void AN_schedule_remove_acb(AN_Schedule schedule, AN_ACB acb);

#endif
