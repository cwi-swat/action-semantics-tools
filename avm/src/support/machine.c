

#include "machine.h"

#include <dn2.h>

void AN_init_reflection_cache(AN_ReflectionCache *rc) {
  *rc = ATtableCreate(AN_REFLECTION_CACHE_SIZE,80);
}

void AN_release_reflection_cache(AN_ReflectionCache *rc) {
  ATtableDestroy(*rc);
  *rc = NULL;
}


void AN_alloc_machine(AN_Machine *machine) {
  (*machine) = (AN_Machine)malloc(sizeof(struct _AN_Machine));
  if (!(*machine)) {
    perror("AN_init_machine");
    exit(1);
  }
}

void AN_init_machine(AN_Machine *machine) {
  (*machine)->buffer = abf_alloc_buffer();
  abf_init_buffer((*machine)->buffer);
  AN_init_store(&((*machine)->store));
  (*machine)->cell_counter = 0;
  (*machine)->agent_counter = 0;
  AN_init_reflection_cache(&((*machine)->reflection_cache));
}

void AN_release_machine(AN_Machine *machine) {
  abf_free_buffer((*machine)->buffer);
  AN_release_store(&((*machine)->store));
  AN_release_schedule(&((*machine)->schedule));
  AN_release_reflection_cache(&((*machine)->reflection_cache));
  free((*machine));
  (*machine) = NULL;
}

void load(AN_Machine machine, AN_Address a, AN_Address exit_address) {
  AN_ACB acb; 
  AN_alloc_acb(&acb);
  AN_init_acb(&acb);
  AN_acb_set_pc(acb,a);
  AN_acb_set_agent(acb, AN_make_agent(acb));
  AN_push(AN_acb_get_scope_stack(acb), AN_makeNoBindings());
  AN_push(AN_acb_get_arg_stack(acb), AN_emptyData);
  AN_acb_new_frame(acb, exit_address);
  AN_alloc_schedule(&(machine->schedule));
  AN_init_schedule(&(machine->schedule), acb);
  machine->exit_address = exit_address;
  ATwarning("program loaded\n");
}

void AN_load_ail_program(AN_Machine machine, AIL_ByteCode prg, AN_Address exit_address) {
  machine->code_start = NULL;
  machine->code_end = NULL;
  load(machine,(AN_Address)AIL_getABF(prg), exit_address);
}

void AN_load_program(AN_Machine machine, AN_Address start, 
		     AN_Address end, AN_Address exit_address) {
  machine->code_start = start;
  machine->code_end = end;
  load(machine,start,exit_address);
}

void AN_fprint_debug_info(FILE *f, AN_Machine m) {
  fprintf(f, "MACHINE INFO (cur addresss = %x)\n", 
	  AN_acb_get_pc(AN_schedule_get_active(m->schedule)));
  AN_fprint_acb(f, AN_schedule_get_active(m->schedule));
  AN_fprint_store(f, m->store);
  fflush(f);
}

