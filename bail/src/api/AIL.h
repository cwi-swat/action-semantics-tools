#ifndef _AIL_H
#define _AIL_H

/*{{{  includes */

#include <aterm1.h>
#include "AIL_dict.h"

/*}}}  */

/*{{{  prologue */

#include <MEPT.h>

typedef PT_Tree AIL_Layout;
typedef PT_Tree AIL_ATerm;
typedef PT_Tree AIL_Id;
typedef PT_Tree AIL_Label;
typedef PT_Tree AIL_Number;

/*}}}  */
/*{{{  typedefs */

typedef struct _AIL_Pattern *AIL_Pattern;
typedef struct _AIL_Signature *AIL_Signature;
typedef struct _AIL_Definition *AIL_Definition;
typedef struct _AIL_SignatureList *AIL_SignatureList;
typedef struct _AIL_Instruction *AIL_Instruction;
typedef struct _AIL_Statement *AIL_Statement;
typedef struct _AIL_Arg *AIL_Arg;
typedef struct _AIL_Program *AIL_Program;
typedef struct _AIL_StatementList *AIL_StatementList;

/*}}}  */

void AIL_initAILApi(void);

/*{{{  term conversion functions */

AIL_Pattern AIL_PatternFromTerm(ATerm t);
ATerm AIL_PatternToTerm(AIL_Pattern arg);
AIL_Signature AIL_SignatureFromTerm(ATerm t);
ATerm AIL_SignatureToTerm(AIL_Signature arg);
AIL_Definition AIL_DefinitionFromTerm(ATerm t);
ATerm AIL_DefinitionToTerm(AIL_Definition arg);
AIL_SignatureList AIL_SignatureListFromTerm(ATerm t);
ATerm AIL_SignatureListToTerm(AIL_SignatureList arg);
AIL_Instruction AIL_InstructionFromTerm(ATerm t);
ATerm AIL_InstructionToTerm(AIL_Instruction arg);
AIL_Statement AIL_StatementFromTerm(ATerm t);
ATerm AIL_StatementToTerm(AIL_Statement arg);
AIL_Arg AIL_ArgFromTerm(ATerm t);
ATerm AIL_ArgToTerm(AIL_Arg arg);
AIL_Program AIL_ProgramFromTerm(ATerm t);
ATerm AIL_ProgramToTerm(AIL_Program arg);
AIL_StatementList AIL_StatementListFromTerm(ATerm t);
ATerm AIL_StatementListToTerm(AIL_StatementList arg);

/*}}}  */
/*{{{  constructors */

AIL_Pattern AIL_makePatternInt();
AIL_Pattern AIL_makePatternAterm();
AIL_Pattern AIL_makePatternLabel();
AIL_Pattern AIL_makePatternCode();
AIL_Signature AIL_makeSignatureWithPattern(AIL_Id name, AIL_Layout wsAfterName, AIL_Pattern pattern, AIL_Layout wsAfterPattern);
AIL_Signature AIL_makeSignatureWithoutPattern(AIL_Id name, AIL_Layout wsAfterName);
AIL_Definition AIL_makeDefinitionDefault(AIL_Layout wsAfterDefinition, AIL_Id id, AIL_Layout wsAfterId, AIL_Layout wsAfterBraceOpen, AIL_SignatureList list, AIL_Layout wsAfterList);
AIL_SignatureList AIL_makeSignatureListEmpty();
AIL_SignatureList AIL_makeSignatureListSingle(AIL_Signature head);
AIL_SignatureList AIL_makeSignatureListMany(AIL_Signature head, AIL_Layout wsAfterFirst, AIL_SignatureList tail);
AIL_Instruction AIL_makeInstructionWithoutArg(AIL_Id id);
AIL_Instruction AIL_makeInstructionWithArg(AIL_Id id, AIL_Layout wsAfterId, AIL_Arg argument);
AIL_Statement AIL_makeStatementLabelDef(AIL_Label lab, AIL_Layout wsAfterLab);
AIL_Statement AIL_makeStatementInstruction(AIL_Instruction instruction, AIL_Layout wsAfterInstruction);
AIL_Arg AIL_makeArgNumber(AIL_Number number);
AIL_Arg AIL_makeArgCode(AIL_Program code);
AIL_Arg AIL_makeArgAterm(AIL_ATerm term);
AIL_Arg AIL_makeArgLabel(AIL_Label label);
AIL_Program AIL_makeProgramProgram(AIL_Layout wsAfterBraceOpen, AIL_StatementList list, AIL_Layout wsAfterList);
AIL_StatementList AIL_makeStatementListEmpty();
AIL_StatementList AIL_makeStatementListSingle(AIL_Statement head);
AIL_StatementList AIL_makeStatementListMany(AIL_Statement head, AIL_Layout wsAfterFirst, AIL_StatementList tail);

/*}}}  */
/*{{{  equality functions */

ATbool AIL_isEqualPattern(AIL_Pattern arg0, AIL_Pattern arg1);
ATbool AIL_isEqualSignature(AIL_Signature arg0, AIL_Signature arg1);
ATbool AIL_isEqualDefinition(AIL_Definition arg0, AIL_Definition arg1);
ATbool AIL_isEqualSignatureList(AIL_SignatureList arg0, AIL_SignatureList arg1);
ATbool AIL_isEqualInstruction(AIL_Instruction arg0, AIL_Instruction arg1);
ATbool AIL_isEqualStatement(AIL_Statement arg0, AIL_Statement arg1);
ATbool AIL_isEqualArg(AIL_Arg arg0, AIL_Arg arg1);
ATbool AIL_isEqualProgram(AIL_Program arg0, AIL_Program arg1);
ATbool AIL_isEqualStatementList(AIL_StatementList arg0, AIL_StatementList arg1);

/*}}}  */
/*{{{  AIL_Pattern accessors */

ATbool AIL_isValidPattern(AIL_Pattern arg);
inline ATbool AIL_isPatternInt(AIL_Pattern arg);
inline ATbool AIL_isPatternAterm(AIL_Pattern arg);
inline ATbool AIL_isPatternLabel(AIL_Pattern arg);
inline ATbool AIL_isPatternCode(AIL_Pattern arg);

/*}}}  */
/*{{{  AIL_Signature accessors */

ATbool AIL_isValidSignature(AIL_Signature arg);
inline ATbool AIL_isSignatureWithPattern(AIL_Signature arg);
inline ATbool AIL_isSignatureWithoutPattern(AIL_Signature arg);
ATbool AIL_hasSignatureName(AIL_Signature arg);
AIL_Id AIL_getSignatureName(AIL_Signature arg);
AIL_Signature AIL_setSignatureName(AIL_Signature arg, AIL_Id name);
ATbool AIL_hasSignatureWsAfterName(AIL_Signature arg);
AIL_Layout AIL_getSignatureWsAfterName(AIL_Signature arg);
AIL_Signature AIL_setSignatureWsAfterName(AIL_Signature arg, AIL_Layout wsAfterName);
ATbool AIL_hasSignaturePattern(AIL_Signature arg);
AIL_Pattern AIL_getSignaturePattern(AIL_Signature arg);
AIL_Signature AIL_setSignaturePattern(AIL_Signature arg, AIL_Pattern pattern);
ATbool AIL_hasSignatureWsAfterPattern(AIL_Signature arg);
AIL_Layout AIL_getSignatureWsAfterPattern(AIL_Signature arg);
AIL_Signature AIL_setSignatureWsAfterPattern(AIL_Signature arg, AIL_Layout wsAfterPattern);

/*}}}  */
/*{{{  AIL_Definition accessors */

ATbool AIL_isValidDefinition(AIL_Definition arg);
inline ATbool AIL_isDefinitionDefault(AIL_Definition arg);
ATbool AIL_hasDefinitionWsAfterDefinition(AIL_Definition arg);
AIL_Layout AIL_getDefinitionWsAfterDefinition(AIL_Definition arg);
AIL_Definition AIL_setDefinitionWsAfterDefinition(AIL_Definition arg, AIL_Layout wsAfterDefinition);
ATbool AIL_hasDefinitionId(AIL_Definition arg);
AIL_Id AIL_getDefinitionId(AIL_Definition arg);
AIL_Definition AIL_setDefinitionId(AIL_Definition arg, AIL_Id id);
ATbool AIL_hasDefinitionWsAfterId(AIL_Definition arg);
AIL_Layout AIL_getDefinitionWsAfterId(AIL_Definition arg);
AIL_Definition AIL_setDefinitionWsAfterId(AIL_Definition arg, AIL_Layout wsAfterId);
ATbool AIL_hasDefinitionWsAfterBraceOpen(AIL_Definition arg);
AIL_Layout AIL_getDefinitionWsAfterBraceOpen(AIL_Definition arg);
AIL_Definition AIL_setDefinitionWsAfterBraceOpen(AIL_Definition arg, AIL_Layout wsAfterBraceOpen);
ATbool AIL_hasDefinitionList(AIL_Definition arg);
AIL_SignatureList AIL_getDefinitionList(AIL_Definition arg);
AIL_Definition AIL_setDefinitionList(AIL_Definition arg, AIL_SignatureList list);
ATbool AIL_hasDefinitionWsAfterList(AIL_Definition arg);
AIL_Layout AIL_getDefinitionWsAfterList(AIL_Definition arg);
AIL_Definition AIL_setDefinitionWsAfterList(AIL_Definition arg, AIL_Layout wsAfterList);

/*}}}  */
/*{{{  AIL_SignatureList accessors */

ATbool AIL_isValidSignatureList(AIL_SignatureList arg);
inline ATbool AIL_isSignatureListEmpty(AIL_SignatureList arg);
inline ATbool AIL_isSignatureListSingle(AIL_SignatureList arg);
inline ATbool AIL_isSignatureListMany(AIL_SignatureList arg);
ATbool AIL_hasSignatureListHead(AIL_SignatureList arg);
AIL_Signature AIL_getSignatureListHead(AIL_SignatureList arg);
AIL_SignatureList AIL_setSignatureListHead(AIL_SignatureList arg, AIL_Signature head);
ATbool AIL_hasSignatureListWsAfterFirst(AIL_SignatureList arg);
AIL_Layout AIL_getSignatureListWsAfterFirst(AIL_SignatureList arg);
AIL_SignatureList AIL_setSignatureListWsAfterFirst(AIL_SignatureList arg, AIL_Layout wsAfterFirst);
ATbool AIL_hasSignatureListTail(AIL_SignatureList arg);
AIL_SignatureList AIL_getSignatureListTail(AIL_SignatureList arg);
AIL_SignatureList AIL_setSignatureListTail(AIL_SignatureList arg, AIL_SignatureList tail);

/*}}}  */
/*{{{  AIL_Instruction accessors */

ATbool AIL_isValidInstruction(AIL_Instruction arg);
inline ATbool AIL_isInstructionWithoutArg(AIL_Instruction arg);
inline ATbool AIL_isInstructionWithArg(AIL_Instruction arg);
ATbool AIL_hasInstructionId(AIL_Instruction arg);
AIL_Id AIL_getInstructionId(AIL_Instruction arg);
AIL_Instruction AIL_setInstructionId(AIL_Instruction arg, AIL_Id id);
ATbool AIL_hasInstructionWsAfterId(AIL_Instruction arg);
AIL_Layout AIL_getInstructionWsAfterId(AIL_Instruction arg);
AIL_Instruction AIL_setInstructionWsAfterId(AIL_Instruction arg, AIL_Layout wsAfterId);
ATbool AIL_hasInstructionArgument(AIL_Instruction arg);
AIL_Arg AIL_getInstructionArgument(AIL_Instruction arg);
AIL_Instruction AIL_setInstructionArgument(AIL_Instruction arg, AIL_Arg argument);

/*}}}  */
/*{{{  AIL_Statement accessors */

ATbool AIL_isValidStatement(AIL_Statement arg);
inline ATbool AIL_isStatementLabelDef(AIL_Statement arg);
inline ATbool AIL_isStatementInstruction(AIL_Statement arg);
ATbool AIL_hasStatementLab(AIL_Statement arg);
AIL_Label AIL_getStatementLab(AIL_Statement arg);
AIL_Statement AIL_setStatementLab(AIL_Statement arg, AIL_Label lab);
ATbool AIL_hasStatementWsAfterLab(AIL_Statement arg);
AIL_Layout AIL_getStatementWsAfterLab(AIL_Statement arg);
AIL_Statement AIL_setStatementWsAfterLab(AIL_Statement arg, AIL_Layout wsAfterLab);
ATbool AIL_hasStatementInstruction(AIL_Statement arg);
AIL_Instruction AIL_getStatementInstruction(AIL_Statement arg);
AIL_Statement AIL_setStatementInstruction(AIL_Statement arg, AIL_Instruction instruction);
ATbool AIL_hasStatementWsAfterInstruction(AIL_Statement arg);
AIL_Layout AIL_getStatementWsAfterInstruction(AIL_Statement arg);
AIL_Statement AIL_setStatementWsAfterInstruction(AIL_Statement arg, AIL_Layout wsAfterInstruction);

/*}}}  */
/*{{{  AIL_Arg accessors */

ATbool AIL_isValidArg(AIL_Arg arg);
inline ATbool AIL_isArgNumber(AIL_Arg arg);
inline ATbool AIL_isArgCode(AIL_Arg arg);
inline ATbool AIL_isArgAterm(AIL_Arg arg);
inline ATbool AIL_isArgLabel(AIL_Arg arg);
ATbool AIL_hasArgNumber(AIL_Arg arg);
AIL_Number AIL_getArgNumber(AIL_Arg arg);
AIL_Arg AIL_setArgNumber(AIL_Arg arg, AIL_Number number);
ATbool AIL_hasArgCode(AIL_Arg arg);
AIL_Program AIL_getArgCode(AIL_Arg arg);
AIL_Arg AIL_setArgCode(AIL_Arg arg, AIL_Program code);
ATbool AIL_hasArgTerm(AIL_Arg arg);
AIL_ATerm AIL_getArgTerm(AIL_Arg arg);
AIL_Arg AIL_setArgTerm(AIL_Arg arg, AIL_ATerm term);
ATbool AIL_hasArgLabel(AIL_Arg arg);
AIL_Label AIL_getArgLabel(AIL_Arg arg);
AIL_Arg AIL_setArgLabel(AIL_Arg arg, AIL_Label label);

/*}}}  */
/*{{{  AIL_Program accessors */

ATbool AIL_isValidProgram(AIL_Program arg);
inline ATbool AIL_isProgramProgram(AIL_Program arg);
ATbool AIL_hasProgramWsAfterBraceOpen(AIL_Program arg);
AIL_Layout AIL_getProgramWsAfterBraceOpen(AIL_Program arg);
AIL_Program AIL_setProgramWsAfterBraceOpen(AIL_Program arg, AIL_Layout wsAfterBraceOpen);
ATbool AIL_hasProgramList(AIL_Program arg);
AIL_StatementList AIL_getProgramList(AIL_Program arg);
AIL_Program AIL_setProgramList(AIL_Program arg, AIL_StatementList list);
ATbool AIL_hasProgramWsAfterList(AIL_Program arg);
AIL_Layout AIL_getProgramWsAfterList(AIL_Program arg);
AIL_Program AIL_setProgramWsAfterList(AIL_Program arg, AIL_Layout wsAfterList);

/*}}}  */
/*{{{  AIL_StatementList accessors */

ATbool AIL_isValidStatementList(AIL_StatementList arg);
inline ATbool AIL_isStatementListEmpty(AIL_StatementList arg);
inline ATbool AIL_isStatementListSingle(AIL_StatementList arg);
inline ATbool AIL_isStatementListMany(AIL_StatementList arg);
ATbool AIL_hasStatementListHead(AIL_StatementList arg);
AIL_Statement AIL_getStatementListHead(AIL_StatementList arg);
AIL_StatementList AIL_setStatementListHead(AIL_StatementList arg, AIL_Statement head);
ATbool AIL_hasStatementListWsAfterFirst(AIL_StatementList arg);
AIL_Layout AIL_getStatementListWsAfterFirst(AIL_StatementList arg);
AIL_StatementList AIL_setStatementListWsAfterFirst(AIL_StatementList arg, AIL_Layout wsAfterFirst);
ATbool AIL_hasStatementListTail(AIL_StatementList arg);
AIL_StatementList AIL_getStatementListTail(AIL_StatementList arg);
AIL_StatementList AIL_setStatementListTail(AIL_StatementList arg, AIL_StatementList tail);

/*}}}  */
/*{{{  sort visitors */

AIL_Pattern AIL_visitPattern(AIL_Pattern arg);
AIL_Signature AIL_visitSignature(AIL_Signature arg, AIL_Id (*acceptName)(AIL_Id), AIL_Layout (*acceptWsAfterName)(AIL_Layout), AIL_Pattern (*acceptPattern)(AIL_Pattern), AIL_Layout (*acceptWsAfterPattern)(AIL_Layout));
AIL_Definition AIL_visitDefinition(AIL_Definition arg, AIL_Layout (*acceptWsAfterDefinition)(AIL_Layout), AIL_Id (*acceptId)(AIL_Id), AIL_Layout (*acceptWsAfterId)(AIL_Layout), AIL_Layout (*acceptWsAfterBraceOpen)(AIL_Layout), AIL_SignatureList (*acceptList)(AIL_SignatureList), AIL_Layout (*acceptWsAfterList)(AIL_Layout));
AIL_SignatureList AIL_visitSignatureList(AIL_SignatureList arg, AIL_Signature (*acceptHead)(AIL_Signature), AIL_Layout (*acceptWsAfterFirst)(AIL_Layout));
AIL_Instruction AIL_visitInstruction(AIL_Instruction arg, AIL_Id (*acceptId)(AIL_Id), AIL_Layout (*acceptWsAfterId)(AIL_Layout), AIL_Arg (*acceptArgument)(AIL_Arg));
AIL_Statement AIL_visitStatement(AIL_Statement arg, AIL_Label (*acceptLab)(AIL_Label), AIL_Layout (*acceptWsAfterLab)(AIL_Layout), AIL_Instruction (*acceptInstruction)(AIL_Instruction), AIL_Layout (*acceptWsAfterInstruction)(AIL_Layout));
AIL_Arg AIL_visitArg(AIL_Arg arg, AIL_Number (*acceptNumber)(AIL_Number), AIL_Program (*acceptCode)(AIL_Program), AIL_ATerm (*acceptTerm)(AIL_ATerm), AIL_Label (*acceptLabel)(AIL_Label));
AIL_Program AIL_visitProgram(AIL_Program arg, AIL_Layout (*acceptWsAfterBraceOpen)(AIL_Layout), AIL_StatementList (*acceptList)(AIL_StatementList), AIL_Layout (*acceptWsAfterList)(AIL_Layout));
AIL_StatementList AIL_visitStatementList(AIL_StatementList arg, AIL_Statement (*acceptHead)(AIL_Statement), AIL_Layout (*acceptWsAfterFirst)(AIL_Layout));

/*}}}  */

#endif /* _AIL_H */
