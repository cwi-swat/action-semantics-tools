
#ifndef __AIL2ABF__H
#define __AIL2ABF__H 1

#include <stdio.h>
#include <abf.h>
#include "api/AIL.h"
#include <ail.h>

void ail2abf_set_verbose(int flag);

void save_opcode_api(char *name, AIL_Definition def);
AIL_ByteCode compile_ail(ABFBuffer *buffer, AIL_Definition def, AIL_Program prg);





#endif
