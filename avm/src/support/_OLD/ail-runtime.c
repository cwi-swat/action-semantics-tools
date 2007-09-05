
#include "ail-runtime.h"

AN2Context temp_context; 
AN2ACB temp_acb; 
AN2Frame temp_frame;
AN2Address temp_address;
AN2Data temp_data;
AN2Data temp_data1;
AN2Data temp_data2;
int temp_int;


void ail_init_machine(AILMachine *machine) {
  (*machine) = (AILMachine)malloc(sizeof(struct ailmachine));
  if (!(*machine)) {
    fprintf(stderr, "Error allocating machine.\n");
    exit(1);
  }
  (*machine)->buffer = abf_alloc_buffer();
  abf_init_buffer((*machine)->buffer);
  an2_init_store(&((*machine)->store), 1024,80);
  (*machine)->cell_counter = 0;
  (*machine)->agent_counter = 0;
  ail_init_reflection_cache(&((*machine)->reflection_cache));
  an2_init_data(&temp_data);
  an2_init_data(&temp_data1);
  an2_init_data(&temp_data2);
  an2_init_context(&temp_context);
}

void ail_release_machine(AILMachine *machine) {
  abf_free_buffer((*machine)->buffer);
  an2_release_store(&((*machine)->store));
  an2_release_schedule(&((*machine)->schedule));
  ail_release_reflection_cache(&((*machine)->reflection_cache));
  free((*machine));
  (*machine) = NULL;
}

void ail_load_abf_program(AILMachine machine, ABF prg, int size) {
  ail_load_program(machine, (AN2Address)prg, (AN2Address)(prg+size));
}

void ail_load_program(AILMachine machine, AN2Address start, AN2Address end) {
  AN2ACB acb; AN2Frame f;
  machine->code_start = start;
  machine->code_end = end;
  an2_init_acb(&acb);
  ATprotect((ATerm*)(&(acb->result_stack)));
  acb->pc = start;
  acb->agent = an2_make_agent(acb);
  acb->action = an2_make_action(start, end-start);
  an2_push_scope(acb->scope_stack, an2_make_no_bindings());
  an2_push_args(acb->arg_stack, an2_make_empty());
  an2_init_frame(&f, start, NULL);
  an2_push_frame(acb->frame_stack, f);
  an2_init_schedule(&(machine->schedule), acb);
}
