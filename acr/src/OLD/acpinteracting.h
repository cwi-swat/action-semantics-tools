
#ifndef __ACPINTERACTING_H
#define __ACPINTERACTING_H 1

#include <aterm2.h>
#include "acenv.h"
#include "acmtenv.h"
#include "acmessages.h"
#include "acagents.h"

void ac_init_interacting();
void ac_finish_interacting();

AC_Action ac_mt_perform_interacting_step(AC_Action action, AC_Environment env, AC_MT_Environment mt_env);

#endif
