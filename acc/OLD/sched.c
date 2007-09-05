
#include "sched.h"

void init_schedule(Schedule s, ACB acb) {
	s.first = acb;
	s.last = acb; /* prev is NULL due to new_acb */
}

void rotate_schedule(Schedule s) {
	ACB temp;
	if (s.first == s.last) return;
	s.first->prev = s.last->prev;
	temp = s.first;
	s.first = s.last;
	s.last = temp;
	s.first->prev = NULL;
}

void prepend_acb(Schedule s, ACB acb) {
	ACB temp;
	temp = s.first;
	s.first = acb;
	temp->prev = s.first;
}

ACB remove_agent(Schedule s, Agent agent) {
	ACB temp, next = NULL;
	if (s.last) {
		temp = s.last;
		while (temp && temp->agent != agent)
			next = temp;
			temp = temp->prev;
		if (temp) {
			next->prev = temp->prev;
			return temp;
		}
	}
	return next;
}
