#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "ail.h"

/*{{{  typedefs */

typedef struct ATerm _AIL_Instructions;
typedef struct ATerm _AIL_IdList;
typedef struct ATerm _AIL_Instruction;
typedef struct ATerm _AIL_Statement;
typedef struct ATerm _AIL_Arg;
typedef struct ATerm _AIL_Program;
typedef struct ATerm _AIL_StatementList;

/*}}}  */

/*{{{  void AIL_initAilApi(void) */

void AIL_initAilApi(void)
{
  init_ail_dict();
}

/*}}}  */

/*{{{  term conversion functions */

/*{{{  AIL_Instructions AIL_InstructionsFromTerm(ATerm t) */

AIL_Instructions AIL_InstructionsFromTerm(ATerm t)
{
  return (AIL_Instructions)t;
}

/*}}}  */
/*{{{  ATerm AIL_InstructionsToTerm(AIL_Instructions arg) */

ATerm AIL_InstructionsToTerm(AIL_Instructions arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AIL_IdList AIL_IdListFromTerm(ATerm t) */

AIL_IdList AIL_IdListFromTerm(ATerm t)
{
  return (AIL_IdList)t;
}

/*}}}  */
/*{{{  ATerm AIL_IdListToTerm(AIL_IdList arg) */

ATerm AIL_IdListToTerm(AIL_IdList arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AIL_Instruction AIL_InstructionFromTerm(ATerm t) */

AIL_Instruction AIL_InstructionFromTerm(ATerm t)
{
  return (AIL_Instruction)t;
}

/*}}}  */
/*{{{  ATerm AIL_InstructionToTerm(AIL_Instruction arg) */

ATerm AIL_InstructionToTerm(AIL_Instruction arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AIL_Statement AIL_StatementFromTerm(ATerm t) */

AIL_Statement AIL_StatementFromTerm(ATerm t)
{
  return (AIL_Statement)t;
}

/*}}}  */
/*{{{  ATerm AIL_StatementToTerm(AIL_Statement arg) */

ATerm AIL_StatementToTerm(AIL_Statement arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AIL_Arg AIL_ArgFromTerm(ATerm t) */

AIL_Arg AIL_ArgFromTerm(ATerm t)
{
  return (AIL_Arg)t;
}

/*}}}  */
/*{{{  ATerm AIL_ArgToTerm(AIL_Arg arg) */

ATerm AIL_ArgToTerm(AIL_Arg arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AIL_Program AIL_ProgramFromTerm(ATerm t) */

AIL_Program AIL_ProgramFromTerm(ATerm t)
{
  return (AIL_Program)t;
}

/*}}}  */
/*{{{  ATerm AIL_ProgramToTerm(AIL_Program arg) */

ATerm AIL_ProgramToTerm(AIL_Program arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AIL_StatementList AIL_StatementListFromTerm(ATerm t) */

AIL_StatementList AIL_StatementListFromTerm(ATerm t)
{
  return (AIL_StatementList)t;
}

/*}}}  */
/*{{{  ATerm AIL_StatementListToTerm(AIL_StatementList arg) */

ATerm AIL_StatementListToTerm(AIL_StatementList arg)
{
  return (ATerm)arg;
}

/*}}}  */

/*}}}  */
/*{{{  constructors */

/*{{{  AIL_Instructions AIL_makeInstructionsDefault(AIL_Layout wsAfterBracketOpen, AIL_IdList list, AIL_Layout wsAfterList) */

AIL_Instructions AIL_makeInstructionsDefault(AIL_Layout wsAfterBracketOpen, AIL_IdList list, AIL_Layout wsAfterList)
{
  return (AIL_Instructions)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun3))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun9))))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6)))), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun10))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun11))), (ATerm)ATmakeAppl0(AIL_afun12)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun3))), (ATerm)wsAfterList), (ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl1(AIL_afun13, (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun9))))), (ATerm)list)), (ATerm)wsAfterBracketOpen), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun10))));
}

/*}}}  */
/*{{{  AIL_IdList AIL_makeIdListEmpty() */

AIL_IdList AIL_makeIdListEmpty()
{
  return (AIL_IdList)(ATerm)ATempty;
}

/*}}}  */
/*{{{  AIL_IdList AIL_makeIdListSingle(AIL_Id head) */

AIL_IdList AIL_makeIdListSingle(AIL_Id head)
{
  return (AIL_IdList)(ATerm)ATmakeList1((ATerm)head);
}

/*}}}  */
/*{{{  AIL_IdList AIL_makeIdListMany(AIL_Id head, AIL_Layout wsAfterFirst, AIL_IdList tail) */

AIL_IdList AIL_makeIdListMany(AIL_Id head, AIL_Layout wsAfterFirst, AIL_IdList tail)
{
  return (AIL_IdList)(ATerm)ATinsert(ATinsert((ATermList)tail, (ATerm)wsAfterFirst), (ATerm)head);
}

/*}}}  */
/*{{{  AIL_Instruction AIL_makeInstructionNoargIns(AIL_Id id) */

AIL_Instruction AIL_makeInstructionNoargIns(AIL_Id id)
{
  return (AIL_Instruction)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun9)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun14))), (ATerm)ATmakeAppl1(AIL_afun15, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun16, (ATerm)ATmakeAppl1(AIL_afun17, (ATerm)ATmakeAppl0(AIL_afun18)))))), (ATerm)ATmakeList1((ATerm)id));
}

/*}}}  */
/*{{{  AIL_Instruction AIL_makeInstructionArgIns(AIL_Id id, AIL_Layout wsAfterId, AIL_Arg argument) */

AIL_Instruction AIL_makeInstructionArgIns(AIL_Id id, AIL_Layout wsAfterId, AIL_Arg argument)
{
  return (AIL_Instruction)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun9)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun14))), (ATerm)ATmakeAppl1(AIL_afun15, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun16, (ATerm)ATmakeAppl1(AIL_afun17, (ATerm)ATmakeAppl0(AIL_afun20)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)argument), (ATerm)wsAfterId), (ATerm)id));
}

/*}}}  */
/*{{{  AIL_Statement AIL_makeStatementLabelStat(AIL_Label label, AIL_Layout wsAfterLabel) */

AIL_Statement AIL_makeStatementLabelStat(AIL_Label label, AIL_Layout wsAfterLabel)
{
  return (AIL_Statement)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun21))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun22)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun23))), (ATerm)ATmakeAppl1(AIL_afun15, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun16, (ATerm)ATmakeAppl1(AIL_afun17, (ATerm)ATmakeAppl0(AIL_afun24)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun21))), (ATerm)wsAfterLabel), (ATerm)label));
}

/*}}}  */
/*{{{  AIL_Statement AIL_makeStatementInsStat(AIL_Instruction ins, AIL_Layout wsAfterIns) */

AIL_Statement AIL_makeStatementInsStat(AIL_Instruction ins, AIL_Layout wsAfterIns)
{
  return (AIL_Statement)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun25))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun14)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun23))), (ATerm)ATmakeAppl1(AIL_afun15, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun16, (ATerm)ATmakeAppl1(AIL_afun17, (ATerm)ATmakeAppl0(AIL_afun26)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun25))), (ATerm)wsAfterIns), (ATerm)ins));
}

/*}}}  */
/*{{{  AIL_Arg AIL_makeArgCode(AIL_Program code) */

AIL_Arg AIL_makeArgCode(AIL_Program code)
{
  return (AIL_Arg)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun27)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun19))), (ATerm)ATmakeAppl1(AIL_afun15, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun16, (ATerm)ATmakeAppl1(AIL_afun17, (ATerm)ATmakeAppl0(AIL_afun28)))))), (ATerm)ATmakeList1((ATerm)code));
}

/*}}}  */
/*{{{  AIL_Arg AIL_makeArgAterm(AIL_ATerm term) */

AIL_Arg AIL_makeArgAterm(AIL_ATerm term)
{
  return (AIL_Arg)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun29)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun19))), (ATerm)ATmakeAppl1(AIL_afun15, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun16, (ATerm)ATmakeAppl1(AIL_afun17, (ATerm)ATmakeAppl0(AIL_afun30)))))), (ATerm)ATmakeList1((ATerm)term));
}

/*}}}  */
/*{{{  AIL_Arg AIL_makeArgNumber(AIL_Number number) */

AIL_Arg AIL_makeArgNumber(AIL_Number number)
{
  return (AIL_Arg)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun31)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun19))), (ATerm)ATmakeAppl1(AIL_afun15, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun16, (ATerm)ATmakeAppl1(AIL_afun17, (ATerm)ATmakeAppl0(AIL_afun32)))))), (ATerm)ATmakeList1((ATerm)number));
}

/*}}}  */
/*{{{  AIL_Arg AIL_makeArgLabel(AIL_Label label) */

AIL_Arg AIL_makeArgLabel(AIL_Label label)
{
  return (AIL_Arg)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun22)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun19))), (ATerm)ATmakeAppl1(AIL_afun15, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun16, (ATerm)ATmakeAppl1(AIL_afun17, (ATerm)ATmakeAppl0(AIL_afun33)))))), (ATerm)ATmakeList1((ATerm)label));
}

/*}}}  */
/*{{{  AIL_Program AIL_makeProgramDefault(AIL_Layout wsAfterBraceOpen, AIL_StatementList list, AIL_Layout wsAfterList, AIL_Layout wsAfterBraceClose, AIL_Ann ann) */

AIL_Program AIL_makeProgramDefault(AIL_Layout wsAfterBraceOpen, AIL_StatementList list, AIL_Layout wsAfterList, AIL_Layout wsAfterBraceClose, AIL_Ann ann)
{
  return (AIL_Program)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun34)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6)))), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun35))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun23))))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6)))), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun36))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun27))), (ATerm)ATmakeAppl0(AIL_afun12)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ann), (ATerm)wsAfterBraceClose), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun35))), (ATerm)wsAfterList), (ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl1(AIL_afun13, (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl0(AIL_afun23))))), (ATerm)list)), (ATerm)wsAfterBraceOpen), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun36))));
}

/*}}}  */
/*{{{  AIL_StatementList AIL_makeStatementListEmpty() */

AIL_StatementList AIL_makeStatementListEmpty()
{
  return (AIL_StatementList)(ATerm)ATempty;
}

/*}}}  */
/*{{{  AIL_StatementList AIL_makeStatementListSingle(AIL_Statement head) */

AIL_StatementList AIL_makeStatementListSingle(AIL_Statement head)
{
  return (AIL_StatementList)(ATerm)ATmakeList1((ATerm)head);
}

/*}}}  */
/*{{{  AIL_StatementList AIL_makeStatementListMany(AIL_Statement head, AIL_Layout wsAfterFirst, AIL_StatementList tail) */

AIL_StatementList AIL_makeStatementListMany(AIL_Statement head, AIL_Layout wsAfterFirst, AIL_StatementList tail)
{
  return (AIL_StatementList)(ATerm)ATinsert(ATinsert((ATermList)tail, (ATerm)wsAfterFirst), (ATerm)head);
}

/*}}}  */

/*}}}  */
/*{{{  equality functions */

ATbool AIL_isEqualInstructions(AIL_Instructions arg0, AIL_Instructions arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AIL_isEqualIdList(AIL_IdList arg0, AIL_IdList arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AIL_isEqualInstruction(AIL_Instruction arg0, AIL_Instruction arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AIL_isEqualStatement(AIL_Statement arg0, AIL_Statement arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AIL_isEqualArg(AIL_Arg arg0, AIL_Arg arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AIL_isEqualProgram(AIL_Program arg0, AIL_Program arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AIL_isEqualStatementList(AIL_StatementList arg0, AIL_StatementList arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/*}}}  */
/*{{{  AIL_Instructions accessors */

/*{{{  ATbool AIL_isValidInstructions(AIL_Instructions arg) */

ATbool AIL_isValidInstructions(AIL_Instructions arg)
{
  if (AIL_isInstructionsDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isInstructionsDefault(AIL_Instructions arg) */

inline ATbool AIL_isInstructionsDefault(AIL_Instructions arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AIL_patternInstructionsDefault, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AIL_hasInstructionsWsAfterBracketOpen(AIL_Instructions arg) */

ATbool AIL_hasInstructionsWsAfterBracketOpen(AIL_Instructions arg)
{
  if (AIL_isInstructionsDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getInstructionsWsAfterBracketOpen(AIL_Instructions arg) */

AIL_Layout AIL_getInstructionsWsAfterBracketOpen(AIL_Instructions arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  AIL_Instructions AIL_setInstructionsWsAfterBracketOpen(AIL_Instructions arg, AIL_Layout wsAfterBracketOpen) */

AIL_Instructions AIL_setInstructionsWsAfterBracketOpen(AIL_Instructions arg, AIL_Layout wsAfterBracketOpen)
{
  if (AIL_isInstructionsDefault(arg)) {
    return (AIL_Instructions)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterBracketOpen, 1), 1);
  }

  ATabort("Instructions has no WsAfterBracketOpen: %t\n", arg);
  return (AIL_Instructions)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasInstructionsList(AIL_Instructions arg) */

ATbool AIL_hasInstructionsList(AIL_Instructions arg)
{
  if (AIL_isInstructionsDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_IdList AIL_getInstructionsList(AIL_Instructions arg) */

AIL_IdList AIL_getInstructionsList(AIL_Instructions arg)
{
  
    return (AIL_IdList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
}

/*}}}  */
/*{{{  AIL_Instructions AIL_setInstructionsList(AIL_Instructions arg, AIL_IdList list) */

AIL_Instructions AIL_setInstructionsList(AIL_Instructions arg, AIL_IdList list)
{
  if (AIL_isInstructionsDefault(arg)) {
    return (AIL_Instructions)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)list, 1), 2), 1);
  }

  ATabort("Instructions has no List: %t\n", arg);
  return (AIL_Instructions)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasInstructionsWsAfterList(AIL_Instructions arg) */

ATbool AIL_hasInstructionsWsAfterList(AIL_Instructions arg)
{
  if (AIL_isInstructionsDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getInstructionsWsAfterList(AIL_Instructions arg) */

AIL_Layout AIL_getInstructionsWsAfterList(AIL_Instructions arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/*}}}  */
/*{{{  AIL_Instructions AIL_setInstructionsWsAfterList(AIL_Instructions arg, AIL_Layout wsAfterList) */

AIL_Instructions AIL_setInstructionsWsAfterList(AIL_Instructions arg, AIL_Layout wsAfterList)
{
  if (AIL_isInstructionsDefault(arg)) {
    return (AIL_Instructions)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterList, 3), 1);
  }

  ATabort("Instructions has no WsAfterList: %t\n", arg);
  return (AIL_Instructions)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AIL_IdList accessors */

/*{{{  ATbool AIL_isValidIdList(AIL_IdList arg) */

ATbool AIL_isValidIdList(AIL_IdList arg)
{
  if (AIL_isIdListEmpty(arg)) {
    return ATtrue;
  }
  else if (AIL_isIdListSingle(arg)) {
    return ATtrue;
  }
  else if (AIL_isIdListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isIdListEmpty(AIL_IdList arg) */

inline ATbool AIL_isIdListEmpty(AIL_IdList arg)
{
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AIL_patternIdListEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AIL_isIdListSingle(AIL_IdList arg) */

inline ATbool AIL_isIdListSingle(AIL_IdList arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternIdListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isIdListMany(AIL_IdList arg) */

inline ATbool AIL_isIdListMany(AIL_IdList arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternIdListMany, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool AIL_hasIdListHead(AIL_IdList arg) */

ATbool AIL_hasIdListHead(AIL_IdList arg)
{
  if (AIL_isIdListSingle(arg)) {
    return ATtrue;
  }
  else if (AIL_isIdListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Id AIL_getIdListHead(AIL_IdList arg) */

AIL_Id AIL_getIdListHead(AIL_IdList arg)
{
  if (AIL_isIdListSingle(arg)) {
    return (AIL_Id)ATgetFirst((ATermList)arg);
  }
  else 
    return (AIL_Id)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  AIL_IdList AIL_setIdListHead(AIL_IdList arg, AIL_Id head) */

AIL_IdList AIL_setIdListHead(AIL_IdList arg, AIL_Id head)
{
  if (AIL_isIdListSingle(arg)) {
    return (AIL_IdList)ATreplace((ATermList)arg, (ATerm)head, 0);
  }
  else if (AIL_isIdListMany(arg)) {
    return (AIL_IdList)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("IdList has no Head: %t\n", arg);
  return (AIL_IdList)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasIdListWsAfterFirst(AIL_IdList arg) */

ATbool AIL_hasIdListWsAfterFirst(AIL_IdList arg)
{
  if (AIL_isIdListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getIdListWsAfterFirst(AIL_IdList arg) */

AIL_Layout AIL_getIdListWsAfterFirst(AIL_IdList arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)arg, 1);
}

/*}}}  */
/*{{{  AIL_IdList AIL_setIdListWsAfterFirst(AIL_IdList arg, AIL_Layout wsAfterFirst) */

AIL_IdList AIL_setIdListWsAfterFirst(AIL_IdList arg, AIL_Layout wsAfterFirst)
{
  if (AIL_isIdListMany(arg)) {
    return (AIL_IdList)ATreplace((ATermList)arg, (ATerm)wsAfterFirst, 1);
  }

  ATabort("IdList has no WsAfterFirst: %t\n", arg);
  return (AIL_IdList)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasIdListTail(AIL_IdList arg) */

ATbool AIL_hasIdListTail(AIL_IdList arg)
{
  if (AIL_isIdListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_IdList AIL_getIdListTail(AIL_IdList arg) */

AIL_IdList AIL_getIdListTail(AIL_IdList arg)
{
  
    return (AIL_IdList)ATgetTail((ATermList)arg, 2);
}

/*}}}  */
/*{{{  AIL_IdList AIL_setIdListTail(AIL_IdList arg, AIL_IdList tail) */

AIL_IdList AIL_setIdListTail(AIL_IdList arg, AIL_IdList tail)
{
  if (AIL_isIdListMany(arg)) {
    return (AIL_IdList)ATreplaceTail((ATermList)arg, (ATermList)tail, 2);
  }

  ATabort("IdList has no Tail: %t\n", arg);
  return (AIL_IdList)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AIL_Instruction accessors */

/*{{{  ATbool AIL_isValidInstruction(AIL_Instruction arg) */

ATbool AIL_isValidInstruction(AIL_Instruction arg)
{
  if (AIL_isInstructionNoargIns(arg)) {
    return ATtrue;
  }
  else if (AIL_isInstructionArgIns(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isInstructionNoargIns(AIL_Instruction arg) */

inline ATbool AIL_isInstructionNoargIns(AIL_Instruction arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternInstructionNoargIns, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isInstructionArgIns(AIL_Instruction arg) */

inline ATbool AIL_isInstructionArgIns(AIL_Instruction arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternInstructionArgIns, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool AIL_hasInstructionId(AIL_Instruction arg) */

ATbool AIL_hasInstructionId(AIL_Instruction arg)
{
  if (AIL_isInstructionNoargIns(arg)) {
    return ATtrue;
  }
  else if (AIL_isInstructionArgIns(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Id AIL_getInstructionId(AIL_Instruction arg) */

AIL_Id AIL_getInstructionId(AIL_Instruction arg)
{
  if (AIL_isInstructionNoargIns(arg)) {
    return (AIL_Id)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
  }
  else 
    return (AIL_Id)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  AIL_Instruction AIL_setInstructionId(AIL_Instruction arg, AIL_Id id) */

AIL_Instruction AIL_setInstructionId(AIL_Instruction arg, AIL_Id id)
{
  if (AIL_isInstructionNoargIns(arg)) {
    return (AIL_Instruction)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)id, 0), 1);
  }
  else if (AIL_isInstructionArgIns(arg)) {
    return (AIL_Instruction)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)id, 0), 1);
  }

  ATabort("Instruction has no Id: %t\n", arg);
  return (AIL_Instruction)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasInstructionWsAfterId(AIL_Instruction arg) */

ATbool AIL_hasInstructionWsAfterId(AIL_Instruction arg)
{
  if (AIL_isInstructionArgIns(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getInstructionWsAfterId(AIL_Instruction arg) */

AIL_Layout AIL_getInstructionWsAfterId(AIL_Instruction arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  AIL_Instruction AIL_setInstructionWsAfterId(AIL_Instruction arg, AIL_Layout wsAfterId) */

AIL_Instruction AIL_setInstructionWsAfterId(AIL_Instruction arg, AIL_Layout wsAfterId)
{
  if (AIL_isInstructionArgIns(arg)) {
    return (AIL_Instruction)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterId, 1), 1);
  }

  ATabort("Instruction has no WsAfterId: %t\n", arg);
  return (AIL_Instruction)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasInstructionArgument(AIL_Instruction arg) */

ATbool AIL_hasInstructionArgument(AIL_Instruction arg)
{
  if (AIL_isInstructionArgIns(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Arg AIL_getInstructionArgument(AIL_Instruction arg) */

AIL_Arg AIL_getInstructionArgument(AIL_Instruction arg)
{
  
    return (AIL_Arg)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2);
}

/*}}}  */
/*{{{  AIL_Instruction AIL_setInstructionArgument(AIL_Instruction arg, AIL_Arg argument) */

AIL_Instruction AIL_setInstructionArgument(AIL_Instruction arg, AIL_Arg argument)
{
  if (AIL_isInstructionArgIns(arg)) {
    return (AIL_Instruction)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)argument, 2), 1);
  }

  ATabort("Instruction has no Argument: %t\n", arg);
  return (AIL_Instruction)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AIL_Statement accessors */

/*{{{  ATbool AIL_isValidStatement(AIL_Statement arg) */

ATbool AIL_isValidStatement(AIL_Statement arg)
{
  if (AIL_isStatementLabelStat(arg)) {
    return ATtrue;
  }
  else if (AIL_isStatementInsStat(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isStatementLabelStat(AIL_Statement arg) */

inline ATbool AIL_isStatementLabelStat(AIL_Statement arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternStatementLabelStat, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isStatementInsStat(AIL_Statement arg) */

inline ATbool AIL_isStatementInsStat(AIL_Statement arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternStatementInsStat, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool AIL_hasStatementLabel(AIL_Statement arg) */

ATbool AIL_hasStatementLabel(AIL_Statement arg)
{
  if (AIL_isStatementLabelStat(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Label AIL_getStatementLabel(AIL_Statement arg) */

AIL_Label AIL_getStatementLabel(AIL_Statement arg)
{
  
    return (AIL_Label)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  AIL_Statement AIL_setStatementLabel(AIL_Statement arg, AIL_Label label) */

AIL_Statement AIL_setStatementLabel(AIL_Statement arg, AIL_Label label)
{
  if (AIL_isStatementLabelStat(arg)) {
    return (AIL_Statement)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)label, 0), 1);
  }

  ATabort("Statement has no Label: %t\n", arg);
  return (AIL_Statement)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasStatementWsAfterLabel(AIL_Statement arg) */

ATbool AIL_hasStatementWsAfterLabel(AIL_Statement arg)
{
  if (AIL_isStatementLabelStat(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getStatementWsAfterLabel(AIL_Statement arg) */

AIL_Layout AIL_getStatementWsAfterLabel(AIL_Statement arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  AIL_Statement AIL_setStatementWsAfterLabel(AIL_Statement arg, AIL_Layout wsAfterLabel) */

AIL_Statement AIL_setStatementWsAfterLabel(AIL_Statement arg, AIL_Layout wsAfterLabel)
{
  if (AIL_isStatementLabelStat(arg)) {
    return (AIL_Statement)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterLabel, 1), 1);
  }

  ATabort("Statement has no WsAfterLabel: %t\n", arg);
  return (AIL_Statement)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasStatementIns(AIL_Statement arg) */

ATbool AIL_hasStatementIns(AIL_Statement arg)
{
  if (AIL_isStatementInsStat(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Instruction AIL_getStatementIns(AIL_Statement arg) */

AIL_Instruction AIL_getStatementIns(AIL_Statement arg)
{
  
    return (AIL_Instruction)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  AIL_Statement AIL_setStatementIns(AIL_Statement arg, AIL_Instruction ins) */

AIL_Statement AIL_setStatementIns(AIL_Statement arg, AIL_Instruction ins)
{
  if (AIL_isStatementInsStat(arg)) {
    return (AIL_Statement)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ins, 0), 1);
  }

  ATabort("Statement has no Ins: %t\n", arg);
  return (AIL_Statement)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasStatementWsAfterIns(AIL_Statement arg) */

ATbool AIL_hasStatementWsAfterIns(AIL_Statement arg)
{
  if (AIL_isStatementInsStat(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getStatementWsAfterIns(AIL_Statement arg) */

AIL_Layout AIL_getStatementWsAfterIns(AIL_Statement arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  AIL_Statement AIL_setStatementWsAfterIns(AIL_Statement arg, AIL_Layout wsAfterIns) */

AIL_Statement AIL_setStatementWsAfterIns(AIL_Statement arg, AIL_Layout wsAfterIns)
{
  if (AIL_isStatementInsStat(arg)) {
    return (AIL_Statement)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterIns, 1), 1);
  }

  ATabort("Statement has no WsAfterIns: %t\n", arg);
  return (AIL_Statement)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AIL_Arg accessors */

/*{{{  ATbool AIL_isValidArg(AIL_Arg arg) */

ATbool AIL_isValidArg(AIL_Arg arg)
{
  if (AIL_isArgCode(arg)) {
    return ATtrue;
  }
  else if (AIL_isArgAterm(arg)) {
    return ATtrue;
  }
  else if (AIL_isArgNumber(arg)) {
    return ATtrue;
  }
  else if (AIL_isArgLabel(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isArgCode(AIL_Arg arg) */

inline ATbool AIL_isArgCode(AIL_Arg arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternArgCode, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isArgAterm(AIL_Arg arg) */

inline ATbool AIL_isArgAterm(AIL_Arg arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternArgAterm, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isArgNumber(AIL_Arg arg) */

inline ATbool AIL_isArgNumber(AIL_Arg arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternArgNumber, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isArgLabel(AIL_Arg arg) */

inline ATbool AIL_isArgLabel(AIL_Arg arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternArgLabel, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool AIL_hasArgCode(AIL_Arg arg) */

ATbool AIL_hasArgCode(AIL_Arg arg)
{
  if (AIL_isArgCode(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Program AIL_getArgCode(AIL_Arg arg) */

AIL_Program AIL_getArgCode(AIL_Arg arg)
{
  
    return (AIL_Program)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  AIL_Arg AIL_setArgCode(AIL_Arg arg, AIL_Program code) */

AIL_Arg AIL_setArgCode(AIL_Arg arg, AIL_Program code)
{
  if (AIL_isArgCode(arg)) {
    return (AIL_Arg)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)code, 0), 1);
  }

  ATabort("Arg has no Code: %t\n", arg);
  return (AIL_Arg)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasArgTerm(AIL_Arg arg) */

ATbool AIL_hasArgTerm(AIL_Arg arg)
{
  if (AIL_isArgAterm(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_ATerm AIL_getArgTerm(AIL_Arg arg) */

AIL_ATerm AIL_getArgTerm(AIL_Arg arg)
{
  
    return (AIL_ATerm)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  AIL_Arg AIL_setArgTerm(AIL_Arg arg, AIL_ATerm term) */

AIL_Arg AIL_setArgTerm(AIL_Arg arg, AIL_ATerm term)
{
  if (AIL_isArgAterm(arg)) {
    return (AIL_Arg)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)term, 0), 1);
  }

  ATabort("Arg has no Term: %t\n", arg);
  return (AIL_Arg)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasArgNumber(AIL_Arg arg) */

ATbool AIL_hasArgNumber(AIL_Arg arg)
{
  if (AIL_isArgNumber(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Number AIL_getArgNumber(AIL_Arg arg) */

AIL_Number AIL_getArgNumber(AIL_Arg arg)
{
  
    return (AIL_Number)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  AIL_Arg AIL_setArgNumber(AIL_Arg arg, AIL_Number number) */

AIL_Arg AIL_setArgNumber(AIL_Arg arg, AIL_Number number)
{
  if (AIL_isArgNumber(arg)) {
    return (AIL_Arg)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)number, 0), 1);
  }

  ATabort("Arg has no Number: %t\n", arg);
  return (AIL_Arg)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasArgLabel(AIL_Arg arg) */

ATbool AIL_hasArgLabel(AIL_Arg arg)
{
  if (AIL_isArgLabel(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Label AIL_getArgLabel(AIL_Arg arg) */

AIL_Label AIL_getArgLabel(AIL_Arg arg)
{
  
    return (AIL_Label)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  AIL_Arg AIL_setArgLabel(AIL_Arg arg, AIL_Label label) */

AIL_Arg AIL_setArgLabel(AIL_Arg arg, AIL_Label label)
{
  if (AIL_isArgLabel(arg)) {
    return (AIL_Arg)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)label, 0), 1);
  }

  ATabort("Arg has no Label: %t\n", arg);
  return (AIL_Arg)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AIL_Program accessors */

/*{{{  ATbool AIL_isValidProgram(AIL_Program arg) */

ATbool AIL_isValidProgram(AIL_Program arg)
{
  if (AIL_isProgramDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isProgramDefault(AIL_Program arg) */

inline ATbool AIL_isProgramDefault(AIL_Program arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AIL_patternProgramDefault, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AIL_hasProgramWsAfterBraceOpen(AIL_Program arg) */

ATbool AIL_hasProgramWsAfterBraceOpen(AIL_Program arg)
{
  if (AIL_isProgramDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getProgramWsAfterBraceOpen(AIL_Program arg) */

AIL_Layout AIL_getProgramWsAfterBraceOpen(AIL_Program arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  AIL_Program AIL_setProgramWsAfterBraceOpen(AIL_Program arg, AIL_Layout wsAfterBraceOpen) */

AIL_Program AIL_setProgramWsAfterBraceOpen(AIL_Program arg, AIL_Layout wsAfterBraceOpen)
{
  if (AIL_isProgramDefault(arg)) {
    return (AIL_Program)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterBraceOpen, 1), 1);
  }

  ATabort("Program has no WsAfterBraceOpen: %t\n", arg);
  return (AIL_Program)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasProgramList(AIL_Program arg) */

ATbool AIL_hasProgramList(AIL_Program arg)
{
  if (AIL_isProgramDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_StatementList AIL_getProgramList(AIL_Program arg) */

AIL_StatementList AIL_getProgramList(AIL_Program arg)
{
  
    return (AIL_StatementList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
}

/*}}}  */
/*{{{  AIL_Program AIL_setProgramList(AIL_Program arg, AIL_StatementList list) */

AIL_Program AIL_setProgramList(AIL_Program arg, AIL_StatementList list)
{
  if (AIL_isProgramDefault(arg)) {
    return (AIL_Program)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)list, 1), 2), 1);
  }

  ATabort("Program has no List: %t\n", arg);
  return (AIL_Program)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasProgramWsAfterList(AIL_Program arg) */

ATbool AIL_hasProgramWsAfterList(AIL_Program arg)
{
  if (AIL_isProgramDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getProgramWsAfterList(AIL_Program arg) */

AIL_Layout AIL_getProgramWsAfterList(AIL_Program arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/*}}}  */
/*{{{  AIL_Program AIL_setProgramWsAfterList(AIL_Program arg, AIL_Layout wsAfterList) */

AIL_Program AIL_setProgramWsAfterList(AIL_Program arg, AIL_Layout wsAfterList)
{
  if (AIL_isProgramDefault(arg)) {
    return (AIL_Program)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterList, 3), 1);
  }

  ATabort("Program has no WsAfterList: %t\n", arg);
  return (AIL_Program)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasProgramWsAfterBraceClose(AIL_Program arg) */

ATbool AIL_hasProgramWsAfterBraceClose(AIL_Program arg)
{
  if (AIL_isProgramDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getProgramWsAfterBraceClose(AIL_Program arg) */

AIL_Layout AIL_getProgramWsAfterBraceClose(AIL_Program arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

/*}}}  */
/*{{{  AIL_Program AIL_setProgramWsAfterBraceClose(AIL_Program arg, AIL_Layout wsAfterBraceClose) */

AIL_Program AIL_setProgramWsAfterBraceClose(AIL_Program arg, AIL_Layout wsAfterBraceClose)
{
  if (AIL_isProgramDefault(arg)) {
    return (AIL_Program)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterBraceClose, 5), 1);
  }

  ATabort("Program has no WsAfterBraceClose: %t\n", arg);
  return (AIL_Program)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasProgramAnn(AIL_Program arg) */

ATbool AIL_hasProgramAnn(AIL_Program arg)
{
  if (AIL_isProgramDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Ann AIL_getProgramAnn(AIL_Program arg) */

AIL_Ann AIL_getProgramAnn(AIL_Program arg)
{
  
    return (AIL_Ann)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 6);
}

/*}}}  */
/*{{{  AIL_Program AIL_setProgramAnn(AIL_Program arg, AIL_Ann ann) */

AIL_Program AIL_setProgramAnn(AIL_Program arg, AIL_Ann ann)
{
  if (AIL_isProgramDefault(arg)) {
    return (AIL_Program)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ann, 6), 1);
  }

  ATabort("Program has no Ann: %t\n", arg);
  return (AIL_Program)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AIL_StatementList accessors */

/*{{{  ATbool AIL_isValidStatementList(AIL_StatementList arg) */

ATbool AIL_isValidStatementList(AIL_StatementList arg)
{
  if (AIL_isStatementListEmpty(arg)) {
    return ATtrue;
  }
  else if (AIL_isStatementListSingle(arg)) {
    return ATtrue;
  }
  else if (AIL_isStatementListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isStatementListEmpty(AIL_StatementList arg) */

inline ATbool AIL_isStatementListEmpty(AIL_StatementList arg)
{
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AIL_patternStatementListEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AIL_isStatementListSingle(AIL_StatementList arg) */

inline ATbool AIL_isStatementListSingle(AIL_StatementList arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternStatementListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isStatementListMany(AIL_StatementList arg) */

inline ATbool AIL_isStatementListMany(AIL_StatementList arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternStatementListMany, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool AIL_hasStatementListHead(AIL_StatementList arg) */

ATbool AIL_hasStatementListHead(AIL_StatementList arg)
{
  if (AIL_isStatementListSingle(arg)) {
    return ATtrue;
  }
  else if (AIL_isStatementListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Statement AIL_getStatementListHead(AIL_StatementList arg) */

AIL_Statement AIL_getStatementListHead(AIL_StatementList arg)
{
  if (AIL_isStatementListSingle(arg)) {
    return (AIL_Statement)ATgetFirst((ATermList)arg);
  }
  else 
    return (AIL_Statement)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  AIL_StatementList AIL_setStatementListHead(AIL_StatementList arg, AIL_Statement head) */

AIL_StatementList AIL_setStatementListHead(AIL_StatementList arg, AIL_Statement head)
{
  if (AIL_isStatementListSingle(arg)) {
    return (AIL_StatementList)ATreplace((ATermList)arg, (ATerm)head, 0);
  }
  else if (AIL_isStatementListMany(arg)) {
    return (AIL_StatementList)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("StatementList has no Head: %t\n", arg);
  return (AIL_StatementList)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasStatementListWsAfterFirst(AIL_StatementList arg) */

ATbool AIL_hasStatementListWsAfterFirst(AIL_StatementList arg)
{
  if (AIL_isStatementListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getStatementListWsAfterFirst(AIL_StatementList arg) */

AIL_Layout AIL_getStatementListWsAfterFirst(AIL_StatementList arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)arg, 1);
}

/*}}}  */
/*{{{  AIL_StatementList AIL_setStatementListWsAfterFirst(AIL_StatementList arg, AIL_Layout wsAfterFirst) */

AIL_StatementList AIL_setStatementListWsAfterFirst(AIL_StatementList arg, AIL_Layout wsAfterFirst)
{
  if (AIL_isStatementListMany(arg)) {
    return (AIL_StatementList)ATreplace((ATermList)arg, (ATerm)wsAfterFirst, 1);
  }

  ATabort("StatementList has no WsAfterFirst: %t\n", arg);
  return (AIL_StatementList)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasStatementListTail(AIL_StatementList arg) */

ATbool AIL_hasStatementListTail(AIL_StatementList arg)
{
  if (AIL_isStatementListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_StatementList AIL_getStatementListTail(AIL_StatementList arg) */

AIL_StatementList AIL_getStatementListTail(AIL_StatementList arg)
{
  
    return (AIL_StatementList)ATgetTail((ATermList)arg, 2);
}

/*}}}  */
/*{{{  AIL_StatementList AIL_setStatementListTail(AIL_StatementList arg, AIL_StatementList tail) */

AIL_StatementList AIL_setStatementListTail(AIL_StatementList arg, AIL_StatementList tail)
{
  if (AIL_isStatementListMany(arg)) {
    return (AIL_StatementList)ATreplaceTail((ATermList)arg, (ATermList)tail, 2);
  }

  ATabort("StatementList has no Tail: %t\n", arg);
  return (AIL_StatementList)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  sort visitors */

/*{{{  AIL_Instructions AIL_visitInstructions(AIL_Instructions arg, AIL_Layout (*acceptWsAfterBracketOpen)(AIL_Layout), AIL_IdList (*acceptList)(AIL_IdList), AIL_Layout (*acceptWsAfterList)(AIL_Layout)) */

AIL_Instructions AIL_visitInstructions(AIL_Instructions arg, AIL_Layout (*acceptWsAfterBracketOpen)(AIL_Layout), AIL_IdList (*acceptList)(AIL_IdList), AIL_Layout (*acceptWsAfterList)(AIL_Layout))
{
  if (AIL_isInstructionsDefault(arg)) {
    return AIL_makeInstructionsDefault(
        acceptWsAfterBracketOpen ? acceptWsAfterBracketOpen(AIL_getInstructionsWsAfterBracketOpen(arg)) : AIL_getInstructionsWsAfterBracketOpen(arg),
        acceptList ? acceptList(AIL_getInstructionsList(arg)) : AIL_getInstructionsList(arg),
        acceptWsAfterList ? acceptWsAfterList(AIL_getInstructionsWsAfterList(arg)) : AIL_getInstructionsWsAfterList(arg));
  }
  ATabort("not a Instructions: %t\n", arg);
  return (AIL_Instructions)NULL;
}

/*}}}  */
/*{{{  AIL_IdList AIL_visitIdList(AIL_IdList arg, AIL_Id (*acceptHead)(AIL_Id), AIL_Layout (*acceptWsAfterFirst)(AIL_Layout)) */

AIL_IdList AIL_visitIdList(AIL_IdList arg, AIL_Id (*acceptHead)(AIL_Id), AIL_Layout (*acceptWsAfterFirst)(AIL_Layout))
{
  if (AIL_isIdListEmpty(arg)) {
    return AIL_makeIdListEmpty();
  }
  if (AIL_isIdListSingle(arg)) {
    return AIL_makeIdListSingle(
        acceptHead ? acceptHead(AIL_getIdListHead(arg)) : AIL_getIdListHead(arg));
  }
  if (AIL_isIdListMany(arg)) {
    return AIL_makeIdListMany(
        acceptHead ? acceptHead(AIL_getIdListHead(arg)) : AIL_getIdListHead(arg),
        acceptWsAfterFirst ? acceptWsAfterFirst(AIL_getIdListWsAfterFirst(arg)) : AIL_getIdListWsAfterFirst(arg),
        AIL_visitIdList(AIL_getIdListTail(arg), acceptHead, acceptWsAfterFirst));
  }
  ATabort("not a IdList: %t\n", arg);
  return (AIL_IdList)NULL;
}

/*}}}  */
/*{{{  AIL_Instruction AIL_visitInstruction(AIL_Instruction arg, AIL_Id (*acceptId)(AIL_Id), AIL_Layout (*acceptWsAfterId)(AIL_Layout), AIL_Arg (*acceptArgument)(AIL_Arg)) */

AIL_Instruction AIL_visitInstruction(AIL_Instruction arg, AIL_Id (*acceptId)(AIL_Id), AIL_Layout (*acceptWsAfterId)(AIL_Layout), AIL_Arg (*acceptArgument)(AIL_Arg))
{
  if (AIL_isInstructionNoargIns(arg)) {
    return AIL_makeInstructionNoargIns(
        acceptId ? acceptId(AIL_getInstructionId(arg)) : AIL_getInstructionId(arg));
  }
  if (AIL_isInstructionArgIns(arg)) {
    return AIL_makeInstructionArgIns(
        acceptId ? acceptId(AIL_getInstructionId(arg)) : AIL_getInstructionId(arg),
        acceptWsAfterId ? acceptWsAfterId(AIL_getInstructionWsAfterId(arg)) : AIL_getInstructionWsAfterId(arg),
        acceptArgument ? acceptArgument(AIL_getInstructionArgument(arg)) : AIL_getInstructionArgument(arg));
  }
  ATabort("not a Instruction: %t\n", arg);
  return (AIL_Instruction)NULL;
}

/*}}}  */
/*{{{  AIL_Statement AIL_visitStatement(AIL_Statement arg, AIL_Label (*acceptLabel)(AIL_Label), AIL_Layout (*acceptWsAfterLabel)(AIL_Layout), AIL_Instruction (*acceptIns)(AIL_Instruction), AIL_Layout (*acceptWsAfterIns)(AIL_Layout)) */

AIL_Statement AIL_visitStatement(AIL_Statement arg, AIL_Label (*acceptLabel)(AIL_Label), AIL_Layout (*acceptWsAfterLabel)(AIL_Layout), AIL_Instruction (*acceptIns)(AIL_Instruction), AIL_Layout (*acceptWsAfterIns)(AIL_Layout))
{
  if (AIL_isStatementLabelStat(arg)) {
    return AIL_makeStatementLabelStat(
        acceptLabel ? acceptLabel(AIL_getStatementLabel(arg)) : AIL_getStatementLabel(arg),
        acceptWsAfterLabel ? acceptWsAfterLabel(AIL_getStatementWsAfterLabel(arg)) : AIL_getStatementWsAfterLabel(arg));
  }
  if (AIL_isStatementInsStat(arg)) {
    return AIL_makeStatementInsStat(
        acceptIns ? acceptIns(AIL_getStatementIns(arg)) : AIL_getStatementIns(arg),
        acceptWsAfterIns ? acceptWsAfterIns(AIL_getStatementWsAfterIns(arg)) : AIL_getStatementWsAfterIns(arg));
  }
  ATabort("not a Statement: %t\n", arg);
  return (AIL_Statement)NULL;
}

/*}}}  */
/*{{{  AIL_Arg AIL_visitArg(AIL_Arg arg, AIL_Program (*acceptCode)(AIL_Program), AIL_ATerm (*acceptTerm)(AIL_ATerm), AIL_Number (*acceptNumber)(AIL_Number), AIL_Label (*acceptLabel)(AIL_Label)) */

AIL_Arg AIL_visitArg(AIL_Arg arg, AIL_Program (*acceptCode)(AIL_Program), AIL_ATerm (*acceptTerm)(AIL_ATerm), AIL_Number (*acceptNumber)(AIL_Number), AIL_Label (*acceptLabel)(AIL_Label))
{
  if (AIL_isArgCode(arg)) {
    return AIL_makeArgCode(
        acceptCode ? acceptCode(AIL_getArgCode(arg)) : AIL_getArgCode(arg));
  }
  if (AIL_isArgAterm(arg)) {
    return AIL_makeArgAterm(
        acceptTerm ? acceptTerm(AIL_getArgTerm(arg)) : AIL_getArgTerm(arg));
  }
  if (AIL_isArgNumber(arg)) {
    return AIL_makeArgNumber(
        acceptNumber ? acceptNumber(AIL_getArgNumber(arg)) : AIL_getArgNumber(arg));
  }
  if (AIL_isArgLabel(arg)) {
    return AIL_makeArgLabel(
        acceptLabel ? acceptLabel(AIL_getArgLabel(arg)) : AIL_getArgLabel(arg));
  }
  ATabort("not a Arg: %t\n", arg);
  return (AIL_Arg)NULL;
}

/*}}}  */
/*{{{  AIL_Program AIL_visitProgram(AIL_Program arg, AIL_Layout (*acceptWsAfterBraceOpen)(AIL_Layout), AIL_StatementList (*acceptList)(AIL_StatementList), AIL_Layout (*acceptWsAfterList)(AIL_Layout), AIL_Layout (*acceptWsAfterBraceClose)(AIL_Layout), AIL_Ann (*acceptAnn)(AIL_Ann)) */

AIL_Program AIL_visitProgram(AIL_Program arg, AIL_Layout (*acceptWsAfterBraceOpen)(AIL_Layout), AIL_StatementList (*acceptList)(AIL_StatementList), AIL_Layout (*acceptWsAfterList)(AIL_Layout), AIL_Layout (*acceptWsAfterBraceClose)(AIL_Layout), AIL_Ann (*acceptAnn)(AIL_Ann))
{
  if (AIL_isProgramDefault(arg)) {
    return AIL_makeProgramDefault(
        acceptWsAfterBraceOpen ? acceptWsAfterBraceOpen(AIL_getProgramWsAfterBraceOpen(arg)) : AIL_getProgramWsAfterBraceOpen(arg),
        acceptList ? acceptList(AIL_getProgramList(arg)) : AIL_getProgramList(arg),
        acceptWsAfterList ? acceptWsAfterList(AIL_getProgramWsAfterList(arg)) : AIL_getProgramWsAfterList(arg),
        acceptWsAfterBraceClose ? acceptWsAfterBraceClose(AIL_getProgramWsAfterBraceClose(arg)) : AIL_getProgramWsAfterBraceClose(arg),
        acceptAnn ? acceptAnn(AIL_getProgramAnn(arg)) : AIL_getProgramAnn(arg));
  }
  ATabort("not a Program: %t\n", arg);
  return (AIL_Program)NULL;
}

/*}}}  */
/*{{{  AIL_StatementList AIL_visitStatementList(AIL_StatementList arg, AIL_Statement (*acceptHead)(AIL_Statement), AIL_Layout (*acceptWsAfterFirst)(AIL_Layout)) */

AIL_StatementList AIL_visitStatementList(AIL_StatementList arg, AIL_Statement (*acceptHead)(AIL_Statement), AIL_Layout (*acceptWsAfterFirst)(AIL_Layout))
{
  if (AIL_isStatementListEmpty(arg)) {
    return AIL_makeStatementListEmpty();
  }
  if (AIL_isStatementListSingle(arg)) {
    return AIL_makeStatementListSingle(
        acceptHead ? acceptHead(AIL_getStatementListHead(arg)) : AIL_getStatementListHead(arg));
  }
  if (AIL_isStatementListMany(arg)) {
    return AIL_makeStatementListMany(
        acceptHead ? acceptHead(AIL_getStatementListHead(arg)) : AIL_getStatementListHead(arg),
        acceptWsAfterFirst ? acceptWsAfterFirst(AIL_getStatementListWsAfterFirst(arg)) : AIL_getStatementListWsAfterFirst(arg),
        AIL_visitStatementList(AIL_getStatementListTail(arg), acceptHead, acceptWsAfterFirst));
  }
  ATabort("not a StatementList: %t\n", arg);
  return (AIL_StatementList)NULL;
}

/*}}}  */

/*}}}  */
