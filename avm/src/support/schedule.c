
#include "schedule.h"

#include <assert.h>
#include <stdlib.h>

void AN_alloc_schedule(AN_Schedule *s) {
  *s = (AN_Schedule)malloc(sizeof(struct _AN_Schedule));
  if (!(*s)) {
    perror("AN_init_schedule");
    exit(1);
  }
}

void AN_init_schedule(AN_Schedule *s, AN_ACB acb) {
  assert(*s);
  (*s)->first=acb;
  (*s)->last=acb;
  (*s)->defuncts=NULL;
}

void AN_release_schedule(AN_Schedule *s) {
  AN_ACB temp;
  while ((*s)->last) {
    temp = (*s)->last->prev;
    AN_release_acb(&((*s)->last));
    (*s)->last = temp;
  }
  (*s)->first = NULL;
  (*s)->last = NULL;
  free(*s);
  *s = NULL;
}


void AN_schedule_prepend_acb(AN_Schedule schedule, AN_ACB acb) {
  AN_ACB temp;
  temp = schedule->first;
  schedule->first = acb;
  temp->prev = schedule->first;
}

/* Refactor this. */
void AN_schedule_remove_acb(AN_Schedule schedule, AN_ACB acb) {
  AN_ACB temp = schedule->last;
  AN_ACB next = NULL;
  if (schedule->last == acb)
    schedule->last = schedule->last->prev;
  else { 
    while (temp && temp != acb) {
      temp = temp->prev;
      next = temp;
    }
    if (temp)  /* Meaning acb has been found. */
      next->prev = temp->prev;
  }
  if (temp && schedule->defuncts != NULL)
    temp->prev = schedule->defuncts;
  schedule->defuncts = temp;
}



