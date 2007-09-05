#ifndef _AIL_H
#define _AIL_H

/*{{{  includes */

#include <aterm1.h>
#include "ail_dict.h"

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

typedef struct _AIL_Instructions *AIL_Instructions;
typedef struct _AIL_IdList *AIL_IdList;
typedef struct _AIL_Instruction *AIL_Instruction;
typedef struct _AIL_Statement *AIL_Statement;
typedef struct _AIL_Arg *AIL_Arg;
typedef struct _AIL_Program *AIL_Program;
typedef struct _AIL_StatementList *AIL_StatementList;

/*}}}  */

void AIL_initAilApi(void);

/*{{{  term conversion functions */

AIL_Instructions AIL_InstructionsFromTerm(ATerm t);
ATerm AIL_InstructionsToTerm(AIL_Instructions arg);
AIL_IdList AIL_IdListFromTerm(ATerm t);
ATerm AIL_IdListToTerm(AIL_IdList arg);
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

AIL_Instructions AIL_makeInstructionsDefault(AIL_Layout wsAfterBracketOpen, AIL_IdList list, AIL_Layout wsAfterList);
AIL_IdList AIL_makeIdListEmpty();
AIL_IdList AIL_makeIdListSingle(AIL_Id head);
AIL_IdList AIL_makeIdListMany(AIL_Id head, AIL_Layout wsAfterFirst, AIL_IdList tail);
AIL_Instruction AIL_makeInstructionNoargIns(AIL_Id id);
AIL_Instruction AIL_makeInstructionArgIns(AIL_Id id, AIL_Layout wsAfterId, AIL_Arg argument);
AIL_Statement AIL_makeStatementLabelStat(AIL_Label label, AIL_Layout wsAfterLabel);
AIL_Statement AIL_makeStatementInsStat(AIL_Instruction ins, AIL_Layout wsAfterIns);
AIL_Arg AIL_makeArgCode(AIL_Program code);
AIL_Arg AIL_makeArgAterm(AIL_ATerm term);
AIL_Arg AIL_makeArgNumber(AIL_Number number);
AIL_Arg AIL_makeArgLabel(AIL_Label label);
AIL_Program AIL_makeProgramDefault(AIL_Layout wsAfterBraceOpen, AIL_StatementList list, AIL_Layout wsAfterList, AIL_Layout wsAfterBraceClose, AIL_Ann ann);
AIL_StatementList AIL_makeStatementListEmpty();
AIL_StatementList AIL_makeStatementListSingle(AIL_Statement head);
AIL_StatementList AIL_makeStatementListMany(AIL_Statement head, AIL_Layout wsAfterFirst, AIL_StatementList tail);

/*}}}  */
/*{{{  equality functions */

ATbool AIL_isEqualInstructions(AIL_Instructions arg0, AIL_Instructions arg1);
ATbool AIL_isEqualIdList(AIL_IdList arg0, AIL_IdList arg1);
ATbool AIL_isEqualInstruction(AIL_Instruction arg0, AIL_Instruction arg1);
ATbool AIL_isEqualStatement(AIL_Statement arg0, AIL_Statement arg1);
ATbool AIL_isEqualArg(AIL_Arg arg0, AIL_Arg arg1);
ATbool AIL_isEqualProgram(AIL_Program arg0, AIL_Program arg1);
ATbool AIL_isEqualStatementList(AIL_StatementList arg0, AIL_StatementList arg1);

/*}}}  */
/*{{{  AIL_Instructions accessors */

ATbool AIL_isValidInstructions(AIL_Instructions arg);
inline ATbool AIL_isInstructionsDefault(AIL_Instructions arg);
ATbool AIL_hasInstructionsWsAfterBracketOpen(AIL_Instructions arg);
AIL_Layout AIL_getInstructionsWsAfterBracketOpen(AIL_Instructions arg);
AIL_Instructions AIL_setInstructionsWsAfterBracketOpen(AIL_Instructions arg, AIL_Layout wsAfterBracketOpen);
ATbool AIL_hasInstructionsList(AIL_Instructions arg);
AIL_IdList AIL_getInstructionsList(AIL_Instructions arg);
AIL_Instructions AIL_setInstructionsList(AIL_Instructions arg, AIL_IdList list);
ATbool AIL_hasInstructionsWsAfterList(AIL_Instructions arg);
AIL_Layout AIL_getInstructionsWsAfterList(AIL_Instructions arg);
AIL_Instructions AIL_setInstructionsWsAfterList(AIL_Instructions arg, AIL_Layout wsAfterList);

/*}}}  */
/*{{{  AIL_IdList accessors */

ATbool AIL_isValidIdList(AIL_IdList arg);
inline ATbool AIL_isIdListEmpty(AIL_IdList arg);
inline ATbool AIL_isIdListSingle(AIL_IdList arg);
inline ATbool AIL_isIdListMany(AIL_IdList arg);
ATbool AIL_hasIdListHead(AIL_IdList arg);
AIL_Id AIL_getIdListHead(AIL_IdList arg);
AIL_IdList AIL_setIdListHead(AIL_IdList arg, AIL_Id head);
ATbool AIL_hasIdListWsAfterFirst(AIL_IdList arg);
AIL_Layout AIL_getIdListWsAfterFirst(AIL_IdList arg);
AIL_IdList AIL_setIdListWsAfterFirst(AIL_IdList arg, AIL_Layout wsAfterFirst);
ATbool AIL_hasIdListTail(AIL_IdList arg);
AIL_IdList AIL_getIdListTail(AIL_IdList arg);
AIL_IdList AIL_setIdListTail(AIL_IdList arg, AIL_IdList tail);

/*}}}  */
/*{{{  AIL_Instruction accessors */

ATbool AIL_isValidInstruction(AIL_Instruction arg);
inline ATbool AIL_isInstructionNoargIns(AIL_Instruction arg);
inline ATbool AIL_isInstructionArgIns(AIL_Instruction arg);
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
inline ATbool AIL_isStatementLabelStat(AIL_Statement arg);
inline ATbool AIL_isStatementInsStat(AIL_Statement arg);
ATbool AIL_hasStatementLabel(AIL_Statement arg);
AIL_Label AIL_getStatementLabel(AIL_Statement arg);
AIL_Statement AIL_setStatementLabel(AIL_Statement arg, AIL_Label label);
ATbool AIL_hasStatementWsAfterLabel(AIL_Statement arg);
AIL_Layout AIL_getStatementWsAfterLabel(AIL_Statement arg);
AIL_Statement AIL_setStatementWsAfterLabel(AIL_Statement arg, AIL_Layout wsAfterLabel);
ATbool AIL_hasStatementIns(AIL_Statement arg);
AIL_Instruction AIL_getStatementIns(AIL_Statement arg);
AIL_Statement AIL_setStatementIns(AIL_Statement arg, AIL_Instruction ins);
ATbool AIL_hasStatementWsAfterIns(AIL_Statement arg);
AIL_Layout AIL_getStatementWsAfterIns(AIL_Statement arg);
AIL_Statement AIL_setStatementWsAfterIns(AIL_Statement arg, AIL_Layout wsAfterIns);

/*}}}  */
/*{{{  AIL_Arg accessors */

ATbool AIL_isValidArg(AIL_Arg arg);
inline ATbool AIL_isArgCode(AIL_Arg arg);
inline ATbool AIL_isArgAterm(AIL_Arg arg);
inline ATbool AIL_isArgNumber(AIL_Arg arg);
inline ATbool AIL_isArgLabel(AIL_Arg arg);
ATbool AIL_hasArgCode(AIL_Arg arg);
AIL_Program AIL_getArgCode(AIL_Arg arg);
AIL_Arg AIL_setArgCode(AIL_Arg arg, AIL_Program code);
ATbool AIL_hasArgTerm(AIL_Arg arg);
AIL_ATerm AIL_getArgTerm(AIL_Arg arg);
AIL_Arg AIL_setArgTerm(AIL_Arg arg, AIL_ATerm term);
ATbool AIL_hasArgNumber(AIL_Arg arg);
AIL_Number AIL_getArgNumber(AIL_Arg arg);
AIL_Arg AIL_setArgNumber(AIL_Arg arg, AIL_Number number);
ATbool AIL_hasArgLabel(AIL_Arg arg);
AIL_Label AIL_getArgLabel(AIL_Arg arg);
AIL_Arg AIL_setArgLabel(AIL_Arg arg, AIL_Label label);

/*}}}  */
/*{{{  AIL_Program accessors */

ATbool AIL_isValidProgram(AIL_Program arg);
inline ATbool AIL_isProgramDefault(AIL_Program arg);
ATbool AIL_hasProgramWsAfterBraceOpen(AIL_Program arg);
AIL_Layout AIL_getProgramWsAfterBraceOpen(AIL_Program arg);
AIL_Program AIL_setProgramWsAfterBraceOpen(AIL_Program arg, AIL_Layout wsAfterBraceOpen);
ATbool AIL_hasProgramList(AIL_Program arg);
AIL_StatementList AIL_getProgramList(AIL_Program arg);
AIL_Program AIL_setProgramList(AIL_Program arg, AIL_StatementList list);
ATbool AIL_hasProgramWsAfterList(AIL_Program arg);
AIL_Layout AIL_getProgramWsAfterList(AIL_Program arg);
AIL_Program AIL_setProgramWsAfterList(AIL_Program arg, AIL_Layout wsAfterList);
ATbool AIL_hasProgramWsAfterBraceClose(AIL_Program arg);
AIL_Layout AIL_getProgramWsAfterBraceClose(AIL_Program arg);
AIL_Program AIL_setProgramWsAfterBraceClose(AIL_Program arg, AIL_Layout wsAfterBraceClose);
ATbool AIL_hasProgramAnn(AIL_Program arg);
AIL_Ann AIL_getProgramAnn(AIL_Program arg);
AIL_Program AIL_setProgramAnn(AIL_Program arg, AIL_Ann ann);

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

AIL_Instructions AIL_visitInstructions(AIL_Instructions arg, AIL_Layout (*acceptWsAfterBracketOpen)(AIL_Layout), AIL_IdList (*acceptList)(AIL_IdList), AIL_Layout (*acceptWsAfterList)(AIL_Layout));
AIL_IdList AIL_visitIdList(AIL_IdList arg, AIL_Id (*acceptHead)(AIL_Id), AIL_Layout (*acceptWsAfterFirst)(AIL_Layout));
AIL_Instruction AIL_visitInstruction(AIL_Instruction arg, AIL_Id (*acceptId)(AIL_Id), AIL_Layout (*acceptWsAfterId)(AIL_Layout), AIL_Arg (*acceptArgument)(AIL_Arg));
AIL_Statement AIL_visitStatement(AIL_Statement arg, AIL_Label (*acceptLabel)(AIL_Label), AIL_Layout (*acceptWsAfterLabel)(AIL_Layout), AIL_Instruction (*acceptIns)(AIL_Instruction), AIL_Layout (*acceptWsAfterIns)(AIL_Layout));
AIL_Arg AIL_visitArg(AIL_Arg arg, AIL_Program (*acceptCode)(AIL_Program), AIL_ATerm (*acceptTerm)(AIL_ATerm), AIL_Number (*acceptNumber)(AIL_Number), AIL_Label (*acceptLabel)(AIL_Label));
AIL_Program AIL_visitProgram(AIL_Program arg, AIL_Layout (*acceptWsAfterBraceOpen)(AIL_Layout), AIL_StatementList (*acceptList)(AIL_StatementList), AIL_Layout (*acceptWsAfterList)(AIL_Layout), AIL_Layout (*acceptWsAfterBraceClose)(AIL_Layout), AIL_Ann (*acceptAnn)(AIL_Ann));
AIL_StatementList AIL_visitStatementList(AIL_StatementList arg, AIL_Statement (*acceptHead)(AIL_Statement), AIL_Layout (*acceptWsAfterFirst)(AIL_Layout));

/*}}}  */

#endif /* _AIL_H */
