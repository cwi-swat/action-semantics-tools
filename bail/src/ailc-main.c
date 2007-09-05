
#include "ail2abf.h"

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <abf.h>
#include <aterm2.h>
#include <MEPT.h>
#include <MEPT-utils.h>
#include "api/AIL.h"
#include "opt/ailc-opt.h"
#include <ail.h>


/* This should depend on configure.... */
//static char *default_ail_def = "$prefix/share/action-def.baf";
static char *default_ail_def = "/usr/local/share/action-def.baf";

static FILE *ailc_input;
static FILE *ailc_output;
static char *ailc_name;
static char *ailc_def;
static int ailc_generate_api = 0;

FILE *open_file(char * name, char *mode) {
  FILE *f;
  if (strcmp(name, "-") == 0 && strcmp(mode, "w") == 0)
    return stdout;
   if (strcmp(name, "-") == 0 && strcmp(mode, "r") == 0)
     return stdin;
  f = fopen(name, mode);
  if (!f) {
    fprintf(stderr, "Could not open %s with mode %s.\n", name, mode);
    exit(1);
  }
  return f;
}

int main(int argc, char **argv) {
  ATerm bos, term;
  ATermTable opcodes;
  AIL_Definition def;
  AIL_Program prg;
  ABFBuffer buffer;
  ABF abf;
  PT_Tree tree;
  int size;

  /* Option processing */
  int arg_ct = optionProcess(&ailcOptions, argc, argv);
  argc -= arg_ct;
  argv += arg_ct;
  if (HAVE_OPT(INPUT))
    ailc_input = open_file(OPT_ARG(INPUT), "r");
  else 
    ailc_input = stdin;
  if (HAVE_OPT(OUTPUT)) 
    ailc_output = open_file(OPT_ARG(OUTPUT), "w");
  else 
    ailc_output = stdout;
  if (HAVE_OPT(GENERATE_API)) {
    ailc_generate_api = 1;
    ailc_name = OPT_ARG(NAME);
/*     if (HAVE_OPT(PREFIX)) */
/*       ailc_prefix = OPT_ARG(PREFIX); */
/*     else */
/*       ailc_prefix = default_ail_prefix; */
  }
  if (HAVE_OPT(AIL_LIST)) 
    ailc_def = OPT_ARG(AIL_LIST);
  else
    ailc_def = default_ail_def;
  if (HAVE_OPT(VERBOSE))
    ail2abf_set_verbose(1);

  /* end option processing. */

  ATinit(argc, argv, &bos);
  AIL_initAILApi();
  PT_initMEPTApi();
  abf_init_buffer(&buffer);

  /* Read definition. */
  term = ATreadFromNamedFile(ailc_def);
  tree = PT_getParseTreeTree(PT_ParseTreeFromTerm(term));
  def = AIL_DefinitionFromTerm(PT_TreeToTerm(tree));

  /* Save api if needed. */
  if (ailc_generate_api)
    save_opcode_api(ailc_name, def);
  else {
    AIL_ByteCode bc;
    term = ATreadFromBinaryFile(ailc_input);
    tree = PT_getParseTreeTree(PT_ParseTreeFromTerm(term));
    prg = AIL_ProgramFromTerm(PT_TreeToTerm(tree));
    bc = compile_ail(&buffer, def, prg);
    AIL_writeToFile(ailc_output, bc);
  }
  return 0;
}
