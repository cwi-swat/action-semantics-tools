
#include <stdio.h>
#include <abf.h>
#include <aterm2.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <MEPT.h>
#include <MEPT-utils.h>

#include "ail2abf.h"
#include "api/AIL.h"
#include <ail.h>

static char *string_for_opcode_id = "getStringForOpcode";
static char *disassemble_id = "disassemble";
static char *compile_id = "compile";
static char *interpreter_id = "interpreter";
static int verbose = 0;


void build_opcode_tbl(AIL_Definition def, ATermTable tbl);
void add_unresolved(AIL_Label lab, ATermTable tbl, int pos);
void resolve_labels(ATermTable labels, ATermTable unresolved, ABF abf);
void fwrite_opcode_api_header(FILE *f, FILE *f_impl, char *name, AIL_Definition def);
void fwrite_opcode_api(FILE *f, char *name, AIL_Definition def);

void ail2abf_set_verbose(int flag) {
  verbose = flag;
}

void save_opcode_api(char *name, AIL_Definition def) {
  char buf[256];
  char command[256];
  FILE *f, *f_impl;
  
  /* H file */
  sprintf(buf, "%s.h", name);
  f = fopen(buf, "r");
  if (f) {
    fclose(f);
    ATwarning("File %s exists, renamed to %s.OLD.\n", buf, buf);
    sprintf(command, "mv %s %s.OLD", buf, buf);
    system(command);
  }
  f = fopen(buf, "w");

  /* Impl h-file. */
  sprintf(buf, "%s-impl.h", name);
  f_impl = fopen(buf, "r");
  if (f_impl) {
    fclose(f_impl);
    ATwarning("File %s exists, renamed to %s.OLD.\n", buf, buf);
    sprintf(command, "mv %s %s.OLD", buf, buf);
    system(command);
  }
  f_impl = fopen(buf, "w");
  fwrite_opcode_api_header(f, f_impl, name, def);
  fclose(f);
  fclose(f_impl);

  /* C file */
  sprintf(buf, "%s.c", name);
  f = fopen(buf, "r");
  if (f) {
    fclose(f);
    ATwarning("File %s exists, renamed to %s.OLD.\n", buf, buf);
    sprintf(command, "mv %s %s.OLD", buf, buf);
    system(command);
  }
  f = fopen(buf, "w");
  fwrite_opcode_api(f, name, def);
  fclose(f);
}

void build_opcode_tbl(AIL_Definition def, ATermTable tbl) {
  AIL_SignatureList sigs = AIL_getDefinitionList(def);
  int count = 0;
  if (verbose) 
    fprintf(stderr, "Building opcode table for language: %s.\n", 
	    PT_yieldTree(AIL_getDefinitionId(def)));
  while (AIL_isSignatureListEmpty(sigs) == ATfalse) {
    AIL_Signature sig = AIL_getSignatureListHead(sigs);
    AIL_Id id = AIL_getSignatureName(sig);
    if (verbose)
      fprintf(stderr, "- instruction %s gets opcode %d\n", PT_yieldTree(id), count);
    ATtablePut(tbl, PT_TreeToTerm(id), (ATerm)ATmakeInt(count++));
    if (AIL_hasSignatureListTail(sigs) == ATtrue)
      sigs = AIL_getSignatureListTail(sigs);
    else break;
  }
}

void strtoupper(const char *src, char *dest) {
  int i;
  for (i = 0; i < strlen(src); i++) {
    if (!isalnum(src[i]))
      dest[i] = '_';
    else
      dest[i] = toupper(src[i]);
  }
  dest[i] = '\0';
}

void fwrite_opcode_api_header(FILE *f, FILE *f_impl, char *name, AIL_Definition def) {
  AIL_SignatureList sigs = AIL_getDefinitionList(def);
  AIL_Id id = AIL_getDefinitionId(def);
  int count = 0, i; 
  char *NAME = alloca(strlen(name)+1);
  char *PREFIX = alloca(strlen(PT_yieldTree(id))+1);
  strtoupper(PT_yieldTree(id), PREFIX);
  strtoupper(name,NAME);
  fprintf(f, "#ifndef __%s__H\n", NAME);
  fprintf(f, "#define __%s__H 1\n\n", NAME);
  fprintf(f, "#include <aterm2.h>\n");
  fprintf(f, "#include <ail.h>\n");
  fprintf(f, "#include \"%s-impl.h\"\n\n", name);
  while (AIL_isSignatureListEmpty(sigs) == ATfalse) {
    AIL_Signature sig = AIL_getSignatureListHead(sigs);
    AIL_Id id = AIL_getSignatureName(sig);
    fprintf(f, "#define %s_%s_opcode %d\n", PREFIX, PT_yieldTree(id), count++);
    if (AIL_hasSignatureListTail(sigs) == ATtrue)
      sigs = AIL_getSignatureListTail(sigs);
    else break;
  }  
  fprintf(f, "\n#define %s_num_of_instructions %d\n", PREFIX, count);
  fprintf(f, "#define %s_lowest_opcode %d\n", PREFIX, 0);
  fprintf(f, "#define %s_highest_opcode %d\n\n", PREFIX, count - 1);

  sigs = AIL_getDefinitionList(def);
  fprintf(f, "#define %s_DECLARE_%s_OPCODE_TABLE() \\\n", PREFIX, NAME);
  fprintf(f, "static void *%s_opcode_labels[] = {\\\n", PREFIX);
  while (AIL_isSignatureListEmpty(sigs) == ATfalse) {
    AIL_Signature sig = AIL_getSignatureListHead(sigs);
    AIL_Id id = AIL_getSignatureName(sig);
    fprintf(f, "\t[%s_%s_opcode] &&do_%s", PREFIX, PT_yieldTree(id),PT_yieldTree(id));
    if (AIL_hasSignatureListTail(sigs) == ATtrue) {
      fprintf(f, ",\\\n");
      sigs = AIL_getSignatureListTail(sigs);
    }
    else break;
  }  
  fprintf(f, "\\\n}\n\n");

  fprintf(f, "#define %s_goto_op(op) goto *(%s_opcode_labels[(op)])\n\n", PREFIX, PREFIX);

  /* Print interpreter framework. */
  fprintf(f, "#define %s_%s(x,abf) {\\\n", PREFIX, interpreter_id);
  fprintf(f, "  %s_start: %s_goto_op(*abf);\\\n", PREFIX, PREFIX);
  sigs = AIL_getDefinitionList(def);
  while (AIL_isSignatureListEmpty(sigs) == ATfalse) {
    AIL_Signature sig = AIL_getSignatureListHead(sigs);
    AIL_Id id = AIL_getSignatureName(sig);
    fprintf(f, "  do_%s:\\\n", PT_yieldTree(id));
    fprintf(f, "    abf_skip_byte(abf);\\\n");
    if (AIL_isSignatureWithPattern(sig) == ATtrue) {
      AIL_Pattern pat = AIL_getSignaturePattern(sig);
      fprintf(f, "    {\\\n");
      if (AIL_isPatternInt(pat) == ATtrue) {
	fprintf(f, "      int n = abf_get_int(abf);\\\n");
	fprintf(f, "      abf_skip_int(abf);\\\n");
	fprintf(f, "      %s_perform_%s(x, n);\\\n",PREFIX, PT_yieldTree(id));
      }
      else if (AIL_isPatternAterm(pat) == ATtrue) {
	fprintf(f, "      ATerm d = abf_get_aterm(abf);\\\n");
	fprintf(f, "      abf_skip_aterm(abf);\\\n");
	fprintf(f, "      %s_perform_%s(x, d);\\\n",PREFIX, PT_yieldTree(id));
      }
      else if (AIL_isPatternLabel(pat) == ATtrue) {
	fprintf(f, "      void *label = abf_get_int(abf)+abf;\\\n");
	fprintf(f, "      abf_skip_int(abf);\\\n");
	fprintf(f, "      %s_perform_%s(x, label);\\\n",PREFIX, PT_yieldTree(id));
      }
      else if (AIL_isPatternCode(pat) == ATtrue) {
      /* this should be prepended by a goto together with a new label
	 and the ATmakeBlob should be language dependent (i.e. performed
	 in AN2_perform_abs. See my thesis. Furthermore: instructions
         with the same argument type can be handled in one case using
	 fall through. Line numbers should have a depth for reflective
	 code to work properly (cosmetic). */
  

	fprintf(f, "      AIL_ByteCode bc = AIL_readFromABF(abf);\\\n");
	fprintf(f, "      AIL_skipInABF(abf);\\\n");
	fprintf(f, "      %s_perform_%s(x, bc);\\\n",PREFIX, PT_yieldTree(id));
      }
      else {
	ATwarning("Invalid pattern found in definition of %s: ", PT_yieldTree(id));
	ATabort("%s.\n", PT_yieldAny((ATerm)pat));
      }
      fprintf(f, "    }\\\n");
    }
    else 
      fprintf(f, "    %s_perform_%s(x);\\\n", PREFIX, PT_yieldTree(id));
    fprintf(f, "    %s_goto_op(*abf);\\\n", PREFIX);
    if (AIL_hasSignatureListTail(sigs) == ATtrue) {
      sigs = AIL_getSignatureListTail(sigs);
    }
    else {
      fprintf(f, "  %s_end: ;\\\n", PREFIX);
      fprintf(f, "}\n\n");
      break;
    }
  }

  fprintf(f, "char *%s_%s(int op);\n",PREFIX, string_for_opcode_id);
  fprintf(f, "void %s_%s(FILE *f, AIL_ByteCode bc);\n",PREFIX, disassemble_id);
  fprintf(f, "void %s_%s(FILE *f, AIL_ByteCode bc);\n\n",PREFIX, compile_id);
  fprintf(f, "#endif /* __%s__H */\n", NAME);


  /* Default values for implementing macros goto impl file. */
  fprintf(f_impl, "#ifndef __%s_IMPL__H\n", NAME);
  fprintf(f_impl, "#define __%s_IMPL__H 1\n\n", NAME);
  sigs = AIL_getDefinitionList(def);
  while (AIL_isSignatureListEmpty(sigs) == ATfalse) {
    AIL_Signature sig = AIL_getSignatureListHead(sigs);
    AIL_Id id = AIL_getSignatureName(sig);
    fprintf(f_impl, "#define %s_perform_%s", PREFIX, PT_yieldTree(id));
    if (AIL_isSignatureWithPattern(sig) == ATtrue) {
      AIL_Pattern pat = AIL_getSignaturePattern(sig);
      if (AIL_isPatternInt(pat) == ATtrue)
	fprintf(f_impl, "(x,n) ");
      else if (AIL_isPatternAterm(pat) == ATtrue)
	fprintf(f_impl, "(x,term) ");
      else if (AIL_isPatternLabel(pat) == ATtrue)
	fprintf(f_impl, "(x,label) ");
      else if (AIL_isPatternCode(pat) == ATtrue)
	fprintf(f_impl, "(x,code) ");
      else {
	ATwarning("Invalid pattern found in definition of %s: ", PT_yieldTree(id));
	ATabort("%s.\n", PT_yieldAny((ATerm)pat));
      }
    }
    else
      fprintf(f_impl, "(x) ");
    fprintf(f_impl, "{\\\n}\n\n", PT_yieldTree(id));
    if (AIL_hasSignatureListTail(sigs) == ATtrue)
      sigs = AIL_getSignatureListTail(sigs);
    else break;
  }  
  fprintf(f_impl, "\n\n");
  fprintf(f_impl, "#endif /* __%s_IMPL__H */\n\n", NAME);

}

void fwrite_opcode_api(FILE *f, char *name, AIL_Definition def) {
  AIL_SignatureList sigs = AIL_getDefinitionList(def);
  AIL_Id id = AIL_getDefinitionId(def);
  int count = 0, i; 
  char PREFIX[256];
  char buf[256];
  //strcpy(buf, PT_yieldTree(id));
  strtoupper(PT_yieldTree(id), PREFIX);
  fprintf(f, "#include \"%s.h\"\n", name);
  fprintf(f, "#include <abf.h>\n", name);
  fprintf(f, "#include <string.h>\n\n", name);

  /* Prototypes. */
  fprintf(f, "static void %s_compile_to_c(FILE *f, AIL_ByteCode bc, int *line);\n", PREFIX);

  // Make public
  fprintf(f, "static void %s_print_instruction(FILE *f, ABF *abf);\n", PREFIX);

  fprintf(f, "static void %s_compile_instruction(FILE *f, ABF *abf, int *line);\n\n", PREFIX);


  fprintf(f, "static char *%s_opcode_strings[] = {\n", PREFIX);
  while (AIL_isSignatureListEmpty(sigs) == ATfalse) {
    AIL_Signature sig = AIL_getSignatureListHead(sigs);
    AIL_Id id = AIL_getSignatureName(sig);
    fprintf(f, "\t[%s_%s_opcode] \"%s\"", PREFIX,PT_yieldTree(id),PT_yieldTree(id));
    if (AIL_hasSignatureListTail(sigs) == ATtrue) {
      fprintf(f, ",\n");
      sigs = AIL_getSignatureListTail(sigs);
    }
    else break;
  }  
  fprintf(f,"\n};\n\n");
  
  sigs = AIL_getDefinitionList(def);
  fprintf(f, "static void %s_print_instruction(FILE *f, ABF *abf) {\n", PREFIX);
  fprintf(f, "  char op = abf_get_byte(*abf);\n");
  fprintf(f, "  fprintf(f, \"@%%x: %%s \", *abf, %s_%s(op));\n", PREFIX, string_for_opcode_id);
  fprintf(f, "  abf_skip_byte(*abf);\n");
  fprintf(f, "  switch (op) {\n");
  while (AIL_isSignatureListEmpty(sigs) == ATfalse) {
    AIL_Signature sig = AIL_getSignatureListHead(sigs);
    if (AIL_isSignatureWithPattern(sig) == ATtrue) {
      AIL_Id id = AIL_getSignatureName(sig);
      AIL_Pattern pat = AIL_getSignaturePattern(sig);
      fprintf(f, "    case %s_%s_opcode: {\n", PREFIX,PT_yieldTree(id));
      if (AIL_isPatternInt(pat) == ATtrue) {
	fprintf(f, "      fprintf(f,\"%%d\", abf_get_int(*abf));\n");
	fprintf(f, "      abf_skip_int(*abf);\n");
      }
      else if (AIL_isPatternAterm(pat) == ATtrue) {
	fprintf(f, "      ATfprintf(f,\"%%t\", abf_get_aterm(*abf));\n");
	fprintf(f, "      abf_skip_aterm(*abf);\n");
      }
      else if (AIL_isPatternLabel(pat) == ATtrue) {
	fprintf(f, "      fprintf(f,\"@%%x\", *abf + abf_get_int(*abf));\n");
	fprintf(f, "      abf_skip_int(*abf);\n");
      }
      else if (AIL_isPatternCode(pat) == ATtrue) {
	fprintf(f, "      AIL_ByteCode bc = AIL_readFromABF(*abf);\n");
	fprintf(f, "      %s_%s(f, bc);\n", PREFIX, disassemble_id);
	fprintf(f, "      AIL_skipInABF(*abf);\n");
      }
      else {
	ATwarning("Invalid pattern found in definition of %s: ", PT_yieldTree(id));
	ATabort("%s.\n", PT_yieldAny((ATerm)pat));
      }
      fprintf(f,"      break;\n    }\n");
    }
	
    if (AIL_hasSignatureListTail(sigs) == ATtrue)
      sigs = AIL_getSignatureListTail(sigs);
    else break;
  }

  fprintf(f,"   default: ;\n");
  fprintf(f,"  }\n");
  fprintf(f, "  fprintf(f, \"\\n\");\n");
  fprintf(f,"}\n\n");


  /* Print compiler. */
  sigs = AIL_getDefinitionList(def);
  fprintf(f, "static void %s_compile_instruction(FILE *f, ABF *abf, int *line) {\n", PREFIX);
  fprintf(f, "  char op = abf_get_byte(*abf);\n");
  fprintf(f, "  fprintf(f, \"l%%d: %s_perform_%%s\", *line, %s_%s(op));\n", 
	  PREFIX, PREFIX, string_for_opcode_id);
  fprintf(f, "  *line += abf_byte_offset(*abf);\n");
  fprintf(f, "  abf_skip_byte(*abf);\n");
  fprintf(f, "  switch (op) {\n");
  while (AIL_isSignatureListEmpty(sigs) == ATfalse) {
    AIL_Signature sig = AIL_getSignatureListHead(sigs);
    AIL_Id id = AIL_getSignatureName(sig);
    if (AIL_isSignatureWithPattern(sig) == ATtrue) {
      AIL_Pattern pat = AIL_getSignaturePattern(sig);
      fprintf(f, "    case %s_%s_opcode: {\n", PREFIX,PT_yieldTree(id));
      if (AIL_isPatternInt(pat) == ATtrue) {
	fprintf(f, "      fprintf(f,\"(x, %%d);\\\\\", abf_get_int(*abf));\n");
	fprintf(f, "      *line += abf_int_offset(*abf);\n");
	fprintf(f, "      abf_skip_int(*abf);\n");
      }
      else if (AIL_isPatternAterm(pat) == ATtrue) {
	fprintf(f, "      int len; char *s = ATwriteToSharedString(abf_get_aterm(*abf),&len);\n");
	fprintf(f, "      s = escape_quotes(s);\n");
	fprintf(f, "      fprintf(f,\"(x, ATreadFromSharedString(\\\"%%s\\\",%%d));\\\\\",s,len);\n");
	fprintf(f, "      *line += abf_aterm_offset(*abf);\n");
	fprintf(f, "      abf_skip_aterm(*abf);\n");
      }
      else if (AIL_isPatternLabel(pat) == ATtrue) {
	fprintf(f, "      fprintf(f,\"(x,&&l%%d);\\\\\", *line+abf_get_int(*abf));\n");
	fprintf(f, "      *line += abf_int_offset(*abf);\n");
	fprintf(f, "      abf_skip_int(*abf);\n");
      }
      else if (AIL_isPatternCode(pat) == ATtrue) {
	fprintf(f, "      AIL_ByteCode bc = AIL_readFromABF(*abf);\n");
	fprintf(f, "      fprintf(f,\"(x, ATmakeBlob(&&l%%d));\\\\\", *line);\n");
	fprintf(f, "      %s_compile_to_c(f, bc,line);\n", PREFIX);
	fprintf(f, "      AIL_skipInABF(*abf);\n");
      }
      else {
	ATwarning("Invalid pattern found in definition of %s: ", PT_yieldTree(id));
	ATabort("%s.\n", PT_yieldAny((ATerm)pat));
      }
      fprintf(f,"      break;\n    }\n");
    }
	
    if (AIL_hasSignatureListTail(sigs) == ATtrue)
      sigs = AIL_getSignatureListTail(sigs);
    else break;
  }

  fprintf(f,"   default: fprintf(f,\"(x);\\\\\");\n");
  fprintf(f,"  }\n");
  fprintf(f,"  fprintf(f, \"\\n\");\n");
  fprintf(f,"}\n\n");

  fprintf(f, "static void %s_compile_to_c(FILE *f, AIL_ByteCode bc, int *line) {\n"
	  "  int size = AIL_getABFSize(bc);\n"
	  "  ABF abf = AIL_getABF(bc);\n"
	  "  ABF end = abf + size;\n"
	  "  while (abf < end)\n"
	  "    %s_compile_instruction(f,&abf, line);\n"
	  "}\n\n", PREFIX, PREFIX);

  fprintf(f, "/* Public functions: */\n\n");

  fprintf(f, "char *%s_%s(int op) {\n"
	  "  return %s_opcode_strings[op];\n"
	  "}\n\n",PREFIX, string_for_opcode_id, PREFIX);
  fprintf(f, "void %s_%s(FILE *f, AIL_ByteCode bc) {\n"
	  "  int size = AIL_getABFSize(bc);\n"
	  "  ABF abf = AIL_getABF(bc);\n"
	  "  ABF end = abf + size;\n"
	  "  while (abf < end)\n"
	  "    %s_print_instruction(f,&abf);\n"
	  "}\n\n", PREFIX, disassemble_id, PREFIX);

  strtoupper(name, buf);
  fprintf(f, "void %s_%s(FILE *f, AIL_ByteCode bc) {\n"
	  "  int line = 0;\n"
	  "  fprintf(f, \"#define %s_COMPILED_AIL 1\\n\\n\");\n"
	  "  fprintf(f, \"#define %s_compiled_AIL(x,pc) {\\\\\\n\");\n"
	  "  fprintf(f, \"  %s_DECLARE_%s_OPCODE_TABLE();\\\\\\n\");\n"
	  "  fprintf(f, \"  %s_compiled_code_starts: ;\\\\\\n\");\n"
	  "  %s_compile_to_c(f, bc, &line);\n"
	  "  fprintf(f, \"  %s_compiled_code_ends: ;\\\\\\n\");\n"
	  "  fprintf(f, \"  %s_%s(x,pc);\\\\\\n\");\n"
	  "  fprintf(f, \"}\\n\\n\");\n\n"
	  "}\n\n", PREFIX, compile_id, PREFIX, PREFIX, PREFIX, buf, 
	  PREFIX, PREFIX, PREFIX, PREFIX, interpreter_id);
  

}



  
void add_unresolved(AIL_Label lab, ATermTable tbl, int pos) {
  ATerm term = PT_TreeToTerm(lab);
  ATermList list = (ATermList)ATtableGet(tbl, term);
  if (list) 
    ATtablePut(tbl, term, (ATerm)ATinsert(list, (ATerm)ATmakeInt(pos)));
  else
    ATtablePut(tbl, term, (ATerm)ATmakeList1((ATerm)ATmakeInt(pos)));
}

void resolve_labels(ATermTable labels, ATermTable unresolved, ABF abf) {
  ATermList keys = ATtableKeys(unresolved);
  if (verbose)
    fprintf(stderr, "Resolving unknown labels:\n");
  while (ATisEmpty(keys) == ATfalse) {
    ATerm label = ATgetFirst(keys);
    ATermInt target = (ATermInt)ATtableGet(labels, label);
    if (target) {
      ATermList positions = (ATermList)ATtableGet(unresolved, label);
      while (ATisEmpty(positions) == ATfalse) {
	ATermInt position = (ATermInt)ATgetFirst(positions);
	if (verbose)
	  fprintf(stderr, "@%d: <unknown> -> %d\n", ATgetInt(position),
		  ATgetInt(target) - ATgetInt(position));
	abf_put_int_at(abf,  ATgetInt(target) - ATgetInt(position), ATgetInt(position));
	positions = ATgetNext(positions);
      }
    }
    else ATabort("Label %s is undefined.\n", PT_yieldAny(label));
    keys = ATgetNext(keys);
  }
}




AIL_ByteCode compile_ail(ABFBuffer *buffer, AIL_Definition def, AIL_Program prg) {
  ATermTable label_tbl = ATtableCreate(100,80);
  ATermTable unresolved_tbl = ATtableCreate(100,80);
  ATermTable opcode_tbl = ATtableCreate(100,80);
  int position = 0; 
  ABF abf;
  int size;
  AIL_StatementList stats = AIL_getProgramList(prg);
  
  abf_start_stream(buffer);
  build_opcode_tbl(def, opcode_tbl);
  if (verbose)
    fprintf(stderr, "Converting AIL to ABF:\n");
  while (AIL_isStatementListEmpty(stats) == ATfalse) {
    AIL_Statement stat = AIL_getStatementListHead(stats);
    if (AIL_isStatementLabelDef(stat) == ATtrue) {
      AIL_Label lab = AIL_getStatementLab(stat);
      if (verbose)
	ATfprintf(stderr, "Label %s: ", PT_yieldTree(lab));
      if (ATtableGet(label_tbl, PT_TreeToTerm(lab)) != NULL)
	ATabort("Duplicate label %t at line %d.\n", PT_TreeToTerm(lab), position);
      ATtablePut(label_tbl, PT_TreeToTerm(lab), (ATerm)ATmakeInt(position));
    } 
    else if (AIL_isStatementInstruction(stat) == ATtrue) {
      AIL_Instruction ins = AIL_getStatementInstruction(stat);
      AIL_Id id = AIL_getInstructionId(ins);
      ATermInt opcode = (ATermInt)ATtableGet(opcode_tbl, PT_TreeToTerm(id));
      if (!opcode)
	ATabort("No opcode for instruction %s.\n", PT_yieldTree(id));
      if (verbose)
	fprintf(stderr,"@%d: %s -> %d\n", position, PT_yieldTree(id), (char)ATgetInt(opcode));
      position += abf_add_byte(buffer, (char)ATgetInt(opcode));
      if (AIL_hasInstructionArgument(ins) == ATtrue) {
	AIL_Arg arg = AIL_getInstructionArgument(ins);
	if (AIL_isArgAterm(arg) == ATtrue) {
	  ATerm aterm = ATreadFromString(PT_yieldTree(AIL_getArgTerm(arg)));
	  if (verbose) {
	    fprintf(stderr,"@%d: ", position);
	    ATfprintf(stderr, "%t -> ", aterm);
	    ATwriteToBinaryFile(aterm, stderr);
	    fprintf(stderr, "\n");
	  }
	  position += abf_add_aterm(buffer, aterm);
	}
 	else if (AIL_isArgNumber(arg) == ATtrue) { 
 	  int n = atoi(PT_yieldTree(AIL_getArgNumber(arg))); 
 	  if (verbose) 
 	    fprintf(stderr,"@%d:  %d\n", position, n); 
 	  position += abf_add_int(buffer, n); 
 	} 
	else if  (AIL_isArgLabel(arg) == ATtrue) {
	  AIL_Label lab = AIL_getArgLabel(arg);
	  ATermInt target = (ATermInt)ATtableGet(label_tbl, PT_TreeToTerm(lab));
	  if (target) {
	    if (verbose)
	      fprintf(stderr,"@%d: %s -> %d\n", position, PT_yieldTree(lab), 
		      ATgetInt(target) - position);
	    /* In order to keep abf compositional we save offsets. */
	    position += abf_add_int(buffer, ATgetInt(target) - position);
	  }
	  else {
	    if (verbose)
	      fprintf(stderr,"@%d: %s -> <unknown>\n", position, PT_yieldTree(lab));
	    add_unresolved(lab, unresolved_tbl, position);
	    position += abf_add_int(buffer, 0);
	  }
	}
	else if (AIL_isArgCode(arg) == ATtrue) {
	  ABFBuffer sub_buffer; 
	  AIL_ByteCode bc;
	  AIL_Program sub_prg = AIL_getArgCode(arg);
	  abf_init_buffer(&sub_buffer);
	  bc = compile_ail(&sub_buffer, def, sub_prg);
	  position += AIL_writeToABF(buffer, bc);
	}
	else {
	  fprintf(stderr,"Invalid argument to instruction %s: ",  PT_yieldTree(id));
	  ATabort("%s.\n", PT_yieldAny(AIL_ArgToTerm(arg)));
	}
      }
    }
    else ATabort("Invalid statement in AIL program: %t.\n", stat);
    if (AIL_hasStatementListTail(stats) == ATtrue)
      stats = AIL_getStatementListTail(stats);
    else break;
  }
  abf = abf_finish_stream(buffer, &size);
  resolve_labels(label_tbl, unresolved_tbl, abf);
  ATtableDestroy(label_tbl);
  ATtableDestroy(unresolved_tbl);
  ATtableDestroy(opcode_tbl);
  return AIL_makeByteCode(abf,size);
}

