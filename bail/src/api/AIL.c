#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "AIL.h"

/*{{{  typedefs */

typedef struct ATerm _AIL_Pattern;
typedef struct ATerm _AIL_Signature;
typedef struct ATerm _AIL_Definition;
typedef struct ATerm _AIL_SignatureList;
typedef struct ATerm _AIL_Instruction;
typedef struct ATerm _AIL_Statement;
typedef struct ATerm _AIL_Arg;
typedef struct ATerm _AIL_Program;
typedef struct ATerm _AIL_StatementList;

/*}}}  */

/*{{{  void AIL_initAILApi(void) */

void AIL_initAILApi(void)
{
  init_AIL_dict();
}

/*}}}  */

/*{{{  term conversion functions */

/*{{{  AIL_Pattern AIL_PatternFromTerm(ATerm t) */

AIL_Pattern AIL_PatternFromTerm(ATerm t)
{
  return (AIL_Pattern)t;
}

/*}}}  */
/*{{{  ATerm AIL_PatternToTerm(AIL_Pattern arg) */

ATerm AIL_PatternToTerm(AIL_Pattern arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AIL_Signature AIL_SignatureFromTerm(ATerm t) */

AIL_Signature AIL_SignatureFromTerm(ATerm t)
{
  return (AIL_Signature)t;
}

/*}}}  */
/*{{{  ATerm AIL_SignatureToTerm(AIL_Signature arg) */

ATerm AIL_SignatureToTerm(AIL_Signature arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AIL_Definition AIL_DefinitionFromTerm(ATerm t) */

AIL_Definition AIL_DefinitionFromTerm(ATerm t)
{
  return (AIL_Definition)t;
}

/*}}}  */
/*{{{  ATerm AIL_DefinitionToTerm(AIL_Definition arg) */

ATerm AIL_DefinitionToTerm(AIL_Definition arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  AIL_SignatureList AIL_SignatureListFromTerm(ATerm t) */

AIL_SignatureList AIL_SignatureListFromTerm(ATerm t)
{
  return (AIL_SignatureList)t;
}

/*}}}  */
/*{{{  ATerm AIL_SignatureListToTerm(AIL_SignatureList arg) */

ATerm AIL_SignatureListToTerm(AIL_SignatureList arg)
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

/*{{{  AIL_Pattern AIL_makePatternInt() */

AIL_Pattern AIL_makePatternInt()
{
  return (AIL_Pattern)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun3))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun10)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun3))));
}

/*}}}  */
/*{{{  AIL_Pattern AIL_makePatternAterm() */

AIL_Pattern AIL_makePatternAterm()
{
  return (AIL_Pattern)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun11))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun12)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun11))));
}

/*}}}  */
/*{{{  AIL_Pattern AIL_makePatternLabel() */

AIL_Pattern AIL_makePatternLabel()
{
  return (AIL_Pattern)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun13))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun14)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun13))));
}

/*}}}  */
/*{{{  AIL_Pattern AIL_makePatternCode() */

AIL_Pattern AIL_makePatternCode()
{
  return (AIL_Pattern)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun15))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun16)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun15))));
}

/*}}}  */
/*{{{  AIL_Signature AIL_makeSignatureWithPattern(AIL_Id name, AIL_Layout wsAfterName, AIL_Pattern pattern, AIL_Layout wsAfterPattern) */

AIL_Signature AIL_makeSignatureWithPattern(AIL_Id name, AIL_Layout wsAfterName, AIL_Pattern pattern, AIL_Layout wsAfterPattern)
{
  return (AIL_Signature)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun17))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun6)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun20)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun21))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun22)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun17))), (ATerm)wsAfterPattern), (ATerm)pattern), (ATerm)wsAfterName), (ATerm)name));
}

/*}}}  */
/*{{{  AIL_Signature AIL_makeSignatureWithoutPattern(AIL_Id name, AIL_Layout wsAfterName) */

AIL_Signature AIL_makeSignatureWithoutPattern(AIL_Id name, AIL_Layout wsAfterName)
{
  return (AIL_Signature)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun17))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun20)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun21))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun23)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun17))), (ATerm)wsAfterName), (ATerm)name));
}

/*}}}  */
/*{{{  AIL_Definition AIL_makeDefinitionDefault(AIL_Layout wsAfterDefinition, AIL_Id id, AIL_Layout wsAfterId, AIL_Layout wsAfterBraceOpen, AIL_SignatureList list, AIL_Layout wsAfterList) */

AIL_Definition AIL_makeDefinitionDefault(AIL_Layout wsAfterDefinition, AIL_Id id, AIL_Layout wsAfterId, AIL_Layout wsAfterBraceOpen, AIL_SignatureList list, AIL_Layout wsAfterList)
{
  return (AIL_Definition)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun24))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun25, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun21))))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun26))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun20)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun27))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun28))), (ATerm)ATmakeAppl0(AIL_afun29)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun24))), (ATerm)wsAfterList), (ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl1(AIL_afun30, (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun25, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun21))))), (ATerm)list)), (ATerm)wsAfterBraceOpen), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun26))), (ATerm)wsAfterId), (ATerm)id), (ATerm)wsAfterDefinition), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun27))));
}

/*}}}  */
/*{{{  AIL_SignatureList AIL_makeSignatureListEmpty() */

AIL_SignatureList AIL_makeSignatureListEmpty()
{
  return (AIL_SignatureList)(ATerm)ATempty;
}

/*}}}  */
/*{{{  AIL_SignatureList AIL_makeSignatureListSingle(AIL_Signature head) */

AIL_SignatureList AIL_makeSignatureListSingle(AIL_Signature head)
{
  return (AIL_SignatureList)(ATerm)ATmakeList1((ATerm)head);
}

/*}}}  */
/*{{{  AIL_SignatureList AIL_makeSignatureListMany(AIL_Signature head, AIL_Layout wsAfterFirst, AIL_SignatureList tail) */

AIL_SignatureList AIL_makeSignatureListMany(AIL_Signature head, AIL_Layout wsAfterFirst, AIL_SignatureList tail)
{
  return (AIL_SignatureList)(ATerm)ATinsert(ATinsert((ATermList)tail, (ATerm)wsAfterFirst), (ATerm)head);
}

/*}}}  */
/*{{{  AIL_Instruction AIL_makeInstructionWithoutArg(AIL_Id id) */

AIL_Instruction AIL_makeInstructionWithoutArg(AIL_Id id)
{
  return (AIL_Instruction)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun20)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun31))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun32)))))), (ATerm)ATmakeList1((ATerm)id));
}

/*}}}  */
/*{{{  AIL_Instruction AIL_makeInstructionWithArg(AIL_Id id, AIL_Layout wsAfterId, AIL_Arg argument) */

AIL_Instruction AIL_makeInstructionWithArg(AIL_Id id, AIL_Layout wsAfterId, AIL_Arg argument)
{
  return (AIL_Instruction)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun33)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun20)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun31))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun34)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)argument), (ATerm)wsAfterId), (ATerm)id));
}

/*}}}  */
/*{{{  AIL_Statement AIL_makeStatementLabelDef(AIL_Label lab, AIL_Layout wsAfterLab) */

AIL_Statement AIL_makeStatementLabelDef(AIL_Label lab, AIL_Layout wsAfterLab)
{
  return (AIL_Statement)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun35))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun36)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun37))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun38)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun35))), (ATerm)wsAfterLab), (ATerm)lab));
}

/*}}}  */
/*{{{  AIL_Statement AIL_makeStatementInstruction(AIL_Instruction instruction, AIL_Layout wsAfterInstruction) */

AIL_Statement AIL_makeStatementInstruction(AIL_Instruction instruction, AIL_Layout wsAfterInstruction)
{
  return (AIL_Statement)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun17))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun31)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun37))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun39)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun17))), (ATerm)wsAfterInstruction), (ATerm)instruction));
}

/*}}}  */
/*{{{  AIL_Arg AIL_makeArgNumber(AIL_Number number) */

AIL_Arg AIL_makeArgNumber(AIL_Number number)
{
  return (AIL_Arg)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun40)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun33))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl0(AIL_afun41)), (ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun42)))))), (ATerm)ATmakeList1((ATerm)number));
}

/*}}}  */
/*{{{  AIL_Arg AIL_makeArgCode(AIL_Program code) */

AIL_Arg AIL_makeArgCode(AIL_Program code)
{
  return (AIL_Arg)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun43)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun33))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun16)))))), (ATerm)ATmakeList1((ATerm)code));
}

/*}}}  */
/*{{{  AIL_Arg AIL_makeArgAterm(AIL_ATerm term) */

AIL_Arg AIL_makeArgAterm(AIL_ATerm term)
{
  return (AIL_Arg)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun44)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun33))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun12)))))), (ATerm)ATmakeList1((ATerm)term));
}

/*}}}  */
/*{{{  AIL_Arg AIL_makeArgLabel(AIL_Label label) */

AIL_Arg AIL_makeArgLabel(AIL_Label label)
{
  return (AIL_Arg)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun36)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun33))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun14)))))), (ATerm)ATmakeList1((ATerm)label));
}

/*}}}  */
/*{{{  AIL_Program AIL_makeProgramProgram(AIL_Layout wsAfterBraceOpen, AIL_StatementList list, AIL_Layout wsAfterList) */

AIL_Program AIL_makeProgramProgram(AIL_Layout wsAfterBraceOpen, AIL_StatementList list, AIL_Layout wsAfterList)
{
  return (AIL_Program)(ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl3(AIL_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun24))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun25, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun37))))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun18, (ATerm)ATmakeAppl0(AIL_afun19)))), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun26))), (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun43))), (ATerm)ATmakeAppl1(AIL_afun7, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(AIL_afun8, (ATerm)ATmakeAppl1(AIL_afun9, (ATerm)ATmakeAppl0(AIL_afun45)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun24))), (ATerm)wsAfterList), (ATerm)ATmakeAppl2(AIL_afun0, (ATerm)ATmakeAppl1(AIL_afun30, (ATerm)ATmakeAppl1(AIL_afun4, (ATerm)ATmakeAppl1(AIL_afun25, (ATerm)ATmakeAppl1(AIL_afun5, (ATerm)ATmakeAppl0(AIL_afun37))))), (ATerm)list)), (ATerm)wsAfterBraceOpen), (ATerm)ATmakeAppl1(AIL_afun2, (ATerm)ATmakeAppl0(AIL_afun26))));
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

ATbool AIL_isEqualPattern(AIL_Pattern arg0, AIL_Pattern arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AIL_isEqualSignature(AIL_Signature arg0, AIL_Signature arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AIL_isEqualDefinition(AIL_Definition arg0, AIL_Definition arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool AIL_isEqualSignatureList(AIL_SignatureList arg0, AIL_SignatureList arg1)
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
/*{{{  AIL_Pattern accessors */

/*{{{  ATbool AIL_isValidPattern(AIL_Pattern arg) */

ATbool AIL_isValidPattern(AIL_Pattern arg)
{
  if (AIL_isPatternInt(arg)) {
    return ATtrue;
  }
  else if (AIL_isPatternAterm(arg)) {
    return ATtrue;
  }
  else if (AIL_isPatternLabel(arg)) {
    return ATtrue;
  }
  else if (AIL_isPatternCode(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isPatternInt(AIL_Pattern arg) */

inline ATbool AIL_isPatternInt(AIL_Pattern arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternPatternInt);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isPatternAterm(AIL_Pattern arg) */

inline ATbool AIL_isPatternAterm(AIL_Pattern arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternPatternAterm);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isPatternLabel(AIL_Pattern arg) */

inline ATbool AIL_isPatternLabel(AIL_Pattern arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternPatternLabel);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isPatternCode(AIL_Pattern arg) */

inline ATbool AIL_isPatternCode(AIL_Pattern arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternPatternCode);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */

/*}}}  */
/*{{{  AIL_Signature accessors */

/*{{{  ATbool AIL_isValidSignature(AIL_Signature arg) */

ATbool AIL_isValidSignature(AIL_Signature arg)
{
  if (AIL_isSignatureWithPattern(arg)) {
    return ATtrue;
  }
  else if (AIL_isSignatureWithoutPattern(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isSignatureWithPattern(AIL_Signature arg) */

inline ATbool AIL_isSignatureWithPattern(AIL_Signature arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternSignatureWithPattern, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isSignatureWithoutPattern(AIL_Signature arg) */

inline ATbool AIL_isSignatureWithoutPattern(AIL_Signature arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternSignatureWithoutPattern, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool AIL_hasSignatureName(AIL_Signature arg) */

ATbool AIL_hasSignatureName(AIL_Signature arg)
{
  if (AIL_isSignatureWithPattern(arg)) {
    return ATtrue;
  }
  else if (AIL_isSignatureWithoutPattern(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Id AIL_getSignatureName(AIL_Signature arg) */

AIL_Id AIL_getSignatureName(AIL_Signature arg)
{
  if (AIL_isSignatureWithPattern(arg)) {
    return (AIL_Id)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
  }
  else 
    return (AIL_Id)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  AIL_Signature AIL_setSignatureName(AIL_Signature arg, AIL_Id name) */

AIL_Signature AIL_setSignatureName(AIL_Signature arg, AIL_Id name)
{
  if (AIL_isSignatureWithPattern(arg)) {
    return (AIL_Signature)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)name, 0), 1);
  }
  else if (AIL_isSignatureWithoutPattern(arg)) {
    return (AIL_Signature)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)name, 0), 1);
  }

  ATabort("Signature has no Name: %t\n", arg);
  return (AIL_Signature)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasSignatureWsAfterName(AIL_Signature arg) */

ATbool AIL_hasSignatureWsAfterName(AIL_Signature arg)
{
  if (AIL_isSignatureWithPattern(arg)) {
    return ATtrue;
  }
  else if (AIL_isSignatureWithoutPattern(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getSignatureWsAfterName(AIL_Signature arg) */

AIL_Layout AIL_getSignatureWsAfterName(AIL_Signature arg)
{
  if (AIL_isSignatureWithPattern(arg)) {
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
  }
  else 
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  AIL_Signature AIL_setSignatureWsAfterName(AIL_Signature arg, AIL_Layout wsAfterName) */

AIL_Signature AIL_setSignatureWsAfterName(AIL_Signature arg, AIL_Layout wsAfterName)
{
  if (AIL_isSignatureWithPattern(arg)) {
    return (AIL_Signature)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterName, 1), 1);
  }
  else if (AIL_isSignatureWithoutPattern(arg)) {
    return (AIL_Signature)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterName, 1), 1);
  }

  ATabort("Signature has no WsAfterName: %t\n", arg);
  return (AIL_Signature)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasSignaturePattern(AIL_Signature arg) */

ATbool AIL_hasSignaturePattern(AIL_Signature arg)
{
  if (AIL_isSignatureWithPattern(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Pattern AIL_getSignaturePattern(AIL_Signature arg) */

AIL_Pattern AIL_getSignaturePattern(AIL_Signature arg)
{
  
    return (AIL_Pattern)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2);
}

/*}}}  */
/*{{{  AIL_Signature AIL_setSignaturePattern(AIL_Signature arg, AIL_Pattern pattern) */

AIL_Signature AIL_setSignaturePattern(AIL_Signature arg, AIL_Pattern pattern)
{
  if (AIL_isSignatureWithPattern(arg)) {
    return (AIL_Signature)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)pattern, 2), 1);
  }

  ATabort("Signature has no Pattern: %t\n", arg);
  return (AIL_Signature)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasSignatureWsAfterPattern(AIL_Signature arg) */

ATbool AIL_hasSignatureWsAfterPattern(AIL_Signature arg)
{
  if (AIL_isSignatureWithPattern(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getSignatureWsAfterPattern(AIL_Signature arg) */

AIL_Layout AIL_getSignatureWsAfterPattern(AIL_Signature arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/*}}}  */
/*{{{  AIL_Signature AIL_setSignatureWsAfterPattern(AIL_Signature arg, AIL_Layout wsAfterPattern) */

AIL_Signature AIL_setSignatureWsAfterPattern(AIL_Signature arg, AIL_Layout wsAfterPattern)
{
  if (AIL_isSignatureWithPattern(arg)) {
    return (AIL_Signature)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterPattern, 3), 1);
  }

  ATabort("Signature has no WsAfterPattern: %t\n", arg);
  return (AIL_Signature)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AIL_Definition accessors */

/*{{{  ATbool AIL_isValidDefinition(AIL_Definition arg) */

ATbool AIL_isValidDefinition(AIL_Definition arg)
{
  if (AIL_isDefinitionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isDefinitionDefault(AIL_Definition arg) */

inline ATbool AIL_isDefinitionDefault(AIL_Definition arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AIL_patternDefinitionDefault, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AIL_hasDefinitionWsAfterDefinition(AIL_Definition arg) */

ATbool AIL_hasDefinitionWsAfterDefinition(AIL_Definition arg)
{
  if (AIL_isDefinitionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getDefinitionWsAfterDefinition(AIL_Definition arg) */

AIL_Layout AIL_getDefinitionWsAfterDefinition(AIL_Definition arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  AIL_Definition AIL_setDefinitionWsAfterDefinition(AIL_Definition arg, AIL_Layout wsAfterDefinition) */

AIL_Definition AIL_setDefinitionWsAfterDefinition(AIL_Definition arg, AIL_Layout wsAfterDefinition)
{
  if (AIL_isDefinitionDefault(arg)) {
    return (AIL_Definition)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterDefinition, 1), 1);
  }

  ATabort("Definition has no WsAfterDefinition: %t\n", arg);
  return (AIL_Definition)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasDefinitionId(AIL_Definition arg) */

ATbool AIL_hasDefinitionId(AIL_Definition arg)
{
  if (AIL_isDefinitionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Id AIL_getDefinitionId(AIL_Definition arg) */

AIL_Id AIL_getDefinitionId(AIL_Definition arg)
{
  
    return (AIL_Id)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2);
}

/*}}}  */
/*{{{  AIL_Definition AIL_setDefinitionId(AIL_Definition arg, AIL_Id id) */

AIL_Definition AIL_setDefinitionId(AIL_Definition arg, AIL_Id id)
{
  if (AIL_isDefinitionDefault(arg)) {
    return (AIL_Definition)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)id, 2), 1);
  }

  ATabort("Definition has no Id: %t\n", arg);
  return (AIL_Definition)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasDefinitionWsAfterId(AIL_Definition arg) */

ATbool AIL_hasDefinitionWsAfterId(AIL_Definition arg)
{
  if (AIL_isDefinitionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getDefinitionWsAfterId(AIL_Definition arg) */

AIL_Layout AIL_getDefinitionWsAfterId(AIL_Definition arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/*}}}  */
/*{{{  AIL_Definition AIL_setDefinitionWsAfterId(AIL_Definition arg, AIL_Layout wsAfterId) */

AIL_Definition AIL_setDefinitionWsAfterId(AIL_Definition arg, AIL_Layout wsAfterId)
{
  if (AIL_isDefinitionDefault(arg)) {
    return (AIL_Definition)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterId, 3), 1);
  }

  ATabort("Definition has no WsAfterId: %t\n", arg);
  return (AIL_Definition)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasDefinitionWsAfterBraceOpen(AIL_Definition arg) */

ATbool AIL_hasDefinitionWsAfterBraceOpen(AIL_Definition arg)
{
  if (AIL_isDefinitionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getDefinitionWsAfterBraceOpen(AIL_Definition arg) */

AIL_Layout AIL_getDefinitionWsAfterBraceOpen(AIL_Definition arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

/*}}}  */
/*{{{  AIL_Definition AIL_setDefinitionWsAfterBraceOpen(AIL_Definition arg, AIL_Layout wsAfterBraceOpen) */

AIL_Definition AIL_setDefinitionWsAfterBraceOpen(AIL_Definition arg, AIL_Layout wsAfterBraceOpen)
{
  if (AIL_isDefinitionDefault(arg)) {
    return (AIL_Definition)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterBraceOpen, 5), 1);
  }

  ATabort("Definition has no WsAfterBraceOpen: %t\n", arg);
  return (AIL_Definition)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasDefinitionList(AIL_Definition arg) */

ATbool AIL_hasDefinitionList(AIL_Definition arg)
{
  if (AIL_isDefinitionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_SignatureList AIL_getDefinitionList(AIL_Definition arg) */

AIL_SignatureList AIL_getDefinitionList(AIL_Definition arg)
{
  
    return (AIL_SignatureList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 6), 1);
}

/*}}}  */
/*{{{  AIL_Definition AIL_setDefinitionList(AIL_Definition arg, AIL_SignatureList list) */

AIL_Definition AIL_setDefinitionList(AIL_Definition arg, AIL_SignatureList list)
{
  if (AIL_isDefinitionDefault(arg)) {
    return (AIL_Definition)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 6), (ATerm)list, 1), 6), 1);
  }

  ATabort("Definition has no List: %t\n", arg);
  return (AIL_Definition)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasDefinitionWsAfterList(AIL_Definition arg) */

ATbool AIL_hasDefinitionWsAfterList(AIL_Definition arg)
{
  if (AIL_isDefinitionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getDefinitionWsAfterList(AIL_Definition arg) */

AIL_Layout AIL_getDefinitionWsAfterList(AIL_Definition arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

/*}}}  */
/*{{{  AIL_Definition AIL_setDefinitionWsAfterList(AIL_Definition arg, AIL_Layout wsAfterList) */

AIL_Definition AIL_setDefinitionWsAfterList(AIL_Definition arg, AIL_Layout wsAfterList)
{
  if (AIL_isDefinitionDefault(arg)) {
    return (AIL_Definition)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterList, 7), 1);
  }

  ATabort("Definition has no WsAfterList: %t\n", arg);
  return (AIL_Definition)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AIL_SignatureList accessors */

/*{{{  ATbool AIL_isValidSignatureList(AIL_SignatureList arg) */

ATbool AIL_isValidSignatureList(AIL_SignatureList arg)
{
  if (AIL_isSignatureListEmpty(arg)) {
    return ATtrue;
  }
  else if (AIL_isSignatureListSingle(arg)) {
    return ATtrue;
  }
  else if (AIL_isSignatureListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isSignatureListEmpty(AIL_SignatureList arg) */

inline ATbool AIL_isSignatureListEmpty(AIL_SignatureList arg)
{
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AIL_patternSignatureListEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool AIL_isSignatureListSingle(AIL_SignatureList arg) */

inline ATbool AIL_isSignatureListSingle(AIL_SignatureList arg)
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
      last_result = ATmatchTerm((ATerm)arg, AIL_patternSignatureListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isSignatureListMany(AIL_SignatureList arg) */

inline ATbool AIL_isSignatureListMany(AIL_SignatureList arg)
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
      last_result = ATmatchTerm((ATerm)arg, AIL_patternSignatureListMany, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool AIL_hasSignatureListHead(AIL_SignatureList arg) */

ATbool AIL_hasSignatureListHead(AIL_SignatureList arg)
{
  if (AIL_isSignatureListSingle(arg)) {
    return ATtrue;
  }
  else if (AIL_isSignatureListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Signature AIL_getSignatureListHead(AIL_SignatureList arg) */

AIL_Signature AIL_getSignatureListHead(AIL_SignatureList arg)
{
  if (AIL_isSignatureListSingle(arg)) {
    return (AIL_Signature)ATgetFirst((ATermList)arg);
  }
  else 
    return (AIL_Signature)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  AIL_SignatureList AIL_setSignatureListHead(AIL_SignatureList arg, AIL_Signature head) */

AIL_SignatureList AIL_setSignatureListHead(AIL_SignatureList arg, AIL_Signature head)
{
  if (AIL_isSignatureListSingle(arg)) {
    return (AIL_SignatureList)ATreplace((ATermList)arg, (ATerm)head, 0);
  }
  else if (AIL_isSignatureListMany(arg)) {
    return (AIL_SignatureList)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("SignatureList has no Head: %t\n", arg);
  return (AIL_SignatureList)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasSignatureListWsAfterFirst(AIL_SignatureList arg) */

ATbool AIL_hasSignatureListWsAfterFirst(AIL_SignatureList arg)
{
  if (AIL_isSignatureListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getSignatureListWsAfterFirst(AIL_SignatureList arg) */

AIL_Layout AIL_getSignatureListWsAfterFirst(AIL_SignatureList arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)arg, 1);
}

/*}}}  */
/*{{{  AIL_SignatureList AIL_setSignatureListWsAfterFirst(AIL_SignatureList arg, AIL_Layout wsAfterFirst) */

AIL_SignatureList AIL_setSignatureListWsAfterFirst(AIL_SignatureList arg, AIL_Layout wsAfterFirst)
{
  if (AIL_isSignatureListMany(arg)) {
    return (AIL_SignatureList)ATreplace((ATermList)arg, (ATerm)wsAfterFirst, 1);
  }

  ATabort("SignatureList has no WsAfterFirst: %t\n", arg);
  return (AIL_SignatureList)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasSignatureListTail(AIL_SignatureList arg) */

ATbool AIL_hasSignatureListTail(AIL_SignatureList arg)
{
  if (AIL_isSignatureListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_SignatureList AIL_getSignatureListTail(AIL_SignatureList arg) */

AIL_SignatureList AIL_getSignatureListTail(AIL_SignatureList arg)
{
  
    return (AIL_SignatureList)ATgetTail((ATermList)arg, 2);
}

/*}}}  */
/*{{{  AIL_SignatureList AIL_setSignatureListTail(AIL_SignatureList arg, AIL_SignatureList tail) */

AIL_SignatureList AIL_setSignatureListTail(AIL_SignatureList arg, AIL_SignatureList tail)
{
  if (AIL_isSignatureListMany(arg)) {
    return (AIL_SignatureList)ATreplaceTail((ATermList)arg, (ATermList)tail, 2);
  }

  ATabort("SignatureList has no Tail: %t\n", arg);
  return (AIL_SignatureList)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AIL_Instruction accessors */

/*{{{  ATbool AIL_isValidInstruction(AIL_Instruction arg) */

ATbool AIL_isValidInstruction(AIL_Instruction arg)
{
  if (AIL_isInstructionWithoutArg(arg)) {
    return ATtrue;
  }
  else if (AIL_isInstructionWithArg(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isInstructionWithoutArg(AIL_Instruction arg) */

inline ATbool AIL_isInstructionWithoutArg(AIL_Instruction arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternInstructionWithoutArg, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isInstructionWithArg(AIL_Instruction arg) */

inline ATbool AIL_isInstructionWithArg(AIL_Instruction arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternInstructionWithArg, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool AIL_hasInstructionId(AIL_Instruction arg) */

ATbool AIL_hasInstructionId(AIL_Instruction arg)
{
  if (AIL_isInstructionWithoutArg(arg)) {
    return ATtrue;
  }
  else if (AIL_isInstructionWithArg(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Id AIL_getInstructionId(AIL_Instruction arg) */

AIL_Id AIL_getInstructionId(AIL_Instruction arg)
{
  if (AIL_isInstructionWithoutArg(arg)) {
    return (AIL_Id)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
  }
  else 
    return (AIL_Id)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  AIL_Instruction AIL_setInstructionId(AIL_Instruction arg, AIL_Id id) */

AIL_Instruction AIL_setInstructionId(AIL_Instruction arg, AIL_Id id)
{
  if (AIL_isInstructionWithoutArg(arg)) {
    return (AIL_Instruction)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)id, 0), 1);
  }
  else if (AIL_isInstructionWithArg(arg)) {
    return (AIL_Instruction)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)id, 0), 1);
  }

  ATabort("Instruction has no Id: %t\n", arg);
  return (AIL_Instruction)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasInstructionWsAfterId(AIL_Instruction arg) */

ATbool AIL_hasInstructionWsAfterId(AIL_Instruction arg)
{
  if (AIL_isInstructionWithArg(arg)) {
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
  if (AIL_isInstructionWithArg(arg)) {
    return (AIL_Instruction)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterId, 1), 1);
  }

  ATabort("Instruction has no WsAfterId: %t\n", arg);
  return (AIL_Instruction)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasInstructionArgument(AIL_Instruction arg) */

ATbool AIL_hasInstructionArgument(AIL_Instruction arg)
{
  if (AIL_isInstructionWithArg(arg)) {
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
  if (AIL_isInstructionWithArg(arg)) {
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
  if (AIL_isStatementLabelDef(arg)) {
    return ATtrue;
  }
  else if (AIL_isStatementInstruction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isStatementLabelDef(AIL_Statement arg) */

inline ATbool AIL_isStatementLabelDef(AIL_Statement arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternStatementLabelDef, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool AIL_isStatementInstruction(AIL_Statement arg) */

inline ATbool AIL_isStatementInstruction(AIL_Statement arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, AIL_patternStatementInstruction, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool AIL_hasStatementLab(AIL_Statement arg) */

ATbool AIL_hasStatementLab(AIL_Statement arg)
{
  if (AIL_isStatementLabelDef(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Label AIL_getStatementLab(AIL_Statement arg) */

AIL_Label AIL_getStatementLab(AIL_Statement arg)
{
  
    return (AIL_Label)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  AIL_Statement AIL_setStatementLab(AIL_Statement arg, AIL_Label lab) */

AIL_Statement AIL_setStatementLab(AIL_Statement arg, AIL_Label lab)
{
  if (AIL_isStatementLabelDef(arg)) {
    return (AIL_Statement)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)lab, 0), 1);
  }

  ATabort("Statement has no Lab: %t\n", arg);
  return (AIL_Statement)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasStatementWsAfterLab(AIL_Statement arg) */

ATbool AIL_hasStatementWsAfterLab(AIL_Statement arg)
{
  if (AIL_isStatementLabelDef(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getStatementWsAfterLab(AIL_Statement arg) */

AIL_Layout AIL_getStatementWsAfterLab(AIL_Statement arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  AIL_Statement AIL_setStatementWsAfterLab(AIL_Statement arg, AIL_Layout wsAfterLab) */

AIL_Statement AIL_setStatementWsAfterLab(AIL_Statement arg, AIL_Layout wsAfterLab)
{
  if (AIL_isStatementLabelDef(arg)) {
    return (AIL_Statement)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterLab, 1), 1);
  }

  ATabort("Statement has no WsAfterLab: %t\n", arg);
  return (AIL_Statement)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasStatementInstruction(AIL_Statement arg) */

ATbool AIL_hasStatementInstruction(AIL_Statement arg)
{
  if (AIL_isStatementInstruction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Instruction AIL_getStatementInstruction(AIL_Statement arg) */

AIL_Instruction AIL_getStatementInstruction(AIL_Statement arg)
{
  
    return (AIL_Instruction)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  AIL_Statement AIL_setStatementInstruction(AIL_Statement arg, AIL_Instruction instruction) */

AIL_Statement AIL_setStatementInstruction(AIL_Statement arg, AIL_Instruction instruction)
{
  if (AIL_isStatementInstruction(arg)) {
    return (AIL_Statement)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)instruction, 0), 1);
  }

  ATabort("Statement has no Instruction: %t\n", arg);
  return (AIL_Statement)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasStatementWsAfterInstruction(AIL_Statement arg) */

ATbool AIL_hasStatementWsAfterInstruction(AIL_Statement arg)
{
  if (AIL_isStatementInstruction(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  AIL_Layout AIL_getStatementWsAfterInstruction(AIL_Statement arg) */

AIL_Layout AIL_getStatementWsAfterInstruction(AIL_Statement arg)
{
  
    return (AIL_Layout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  AIL_Statement AIL_setStatementWsAfterInstruction(AIL_Statement arg, AIL_Layout wsAfterInstruction) */

AIL_Statement AIL_setStatementWsAfterInstruction(AIL_Statement arg, AIL_Layout wsAfterInstruction)
{
  if (AIL_isStatementInstruction(arg)) {
    return (AIL_Statement)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterInstruction, 1), 1);
  }

  ATabort("Statement has no WsAfterInstruction: %t\n", arg);
  return (AIL_Statement)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  AIL_Arg accessors */

/*{{{  ATbool AIL_isValidArg(AIL_Arg arg) */

ATbool AIL_isValidArg(AIL_Arg arg)
{
  if (AIL_isArgNumber(arg)) {
    return ATtrue;
  }
  else if (AIL_isArgCode(arg)) {
    return ATtrue;
  }
  else if (AIL_isArgAterm(arg)) {
    return ATtrue;
  }
  else if (AIL_isArgLabel(arg)) {
    return ATtrue;
  }
  return ATfalse;
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
  if (AIL_isProgramProgram(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool AIL_isProgramProgram(AIL_Program arg) */

inline ATbool AIL_isProgramProgram(AIL_Program arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, AIL_patternProgramProgram, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool AIL_hasProgramWsAfterBraceOpen(AIL_Program arg) */

ATbool AIL_hasProgramWsAfterBraceOpen(AIL_Program arg)
{
  if (AIL_isProgramProgram(arg)) {
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
  if (AIL_isProgramProgram(arg)) {
    return (AIL_Program)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterBraceOpen, 1), 1);
  }

  ATabort("Program has no WsAfterBraceOpen: %t\n", arg);
  return (AIL_Program)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasProgramList(AIL_Program arg) */

ATbool AIL_hasProgramList(AIL_Program arg)
{
  if (AIL_isProgramProgram(arg)) {
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
  if (AIL_isProgramProgram(arg)) {
    return (AIL_Program)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)list, 1), 2), 1);
  }

  ATabort("Program has no List: %t\n", arg);
  return (AIL_Program)NULL;
}

/*}}}  */
/*{{{  ATbool AIL_hasProgramWsAfterList(AIL_Program arg) */

ATbool AIL_hasProgramWsAfterList(AIL_Program arg)
{
  if (AIL_isProgramProgram(arg)) {
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
  if (AIL_isProgramProgram(arg)) {
    return (AIL_Program)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)wsAfterList, 3), 1);
  }

  ATabort("Program has no WsAfterList: %t\n", arg);
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

/*{{{  AIL_Pattern AIL_visitPattern(AIL_Pattern arg) */

AIL_Pattern AIL_visitPattern(AIL_Pattern arg)
{
  if (AIL_isPatternInt(arg)) {
    return AIL_makePatternInt();
  }
  if (AIL_isPatternAterm(arg)) {
    return AIL_makePatternAterm();
  }
  if (AIL_isPatternLabel(arg)) {
    return AIL_makePatternLabel();
  }
  if (AIL_isPatternCode(arg)) {
    return AIL_makePatternCode();
  }
  ATabort("not a Pattern: %t\n", arg);
  return (AIL_Pattern)NULL;
}

/*}}}  */
/*{{{  AIL_Signature AIL_visitSignature(AIL_Signature arg, AIL_Id (*acceptName)(AIL_Id), AIL_Layout (*acceptWsAfterName)(AIL_Layout), AIL_Pattern (*acceptPattern)(AIL_Pattern), AIL_Layout (*acceptWsAfterPattern)(AIL_Layout)) */

AIL_Signature AIL_visitSignature(AIL_Signature arg, AIL_Id (*acceptName)(AIL_Id), AIL_Layout (*acceptWsAfterName)(AIL_Layout), AIL_Pattern (*acceptPattern)(AIL_Pattern), AIL_Layout (*acceptWsAfterPattern)(AIL_Layout))
{
  if (AIL_isSignatureWithPattern(arg)) {
    return AIL_makeSignatureWithPattern(
        acceptName ? acceptName(AIL_getSignatureName(arg)) : AIL_getSignatureName(arg),
        acceptWsAfterName ? acceptWsAfterName(AIL_getSignatureWsAfterName(arg)) : AIL_getSignatureWsAfterName(arg),
        acceptPattern ? acceptPattern(AIL_getSignaturePattern(arg)) : AIL_getSignaturePattern(arg),
        acceptWsAfterPattern ? acceptWsAfterPattern(AIL_getSignatureWsAfterPattern(arg)) : AIL_getSignatureWsAfterPattern(arg));
  }
  if (AIL_isSignatureWithoutPattern(arg)) {
    return AIL_makeSignatureWithoutPattern(
        acceptName ? acceptName(AIL_getSignatureName(arg)) : AIL_getSignatureName(arg),
        acceptWsAfterName ? acceptWsAfterName(AIL_getSignatureWsAfterName(arg)) : AIL_getSignatureWsAfterName(arg));
  }
  ATabort("not a Signature: %t\n", arg);
  return (AIL_Signature)NULL;
}

/*}}}  */
/*{{{  AIL_Definition AIL_visitDefinition(AIL_Definition arg, AIL_Layout (*acceptWsAfterDefinition)(AIL_Layout), AIL_Id (*acceptId)(AIL_Id), AIL_Layout (*acceptWsAfterId)(AIL_Layout), AIL_Layout (*acceptWsAfterBraceOpen)(AIL_Layout), AIL_SignatureList (*acceptList)(AIL_SignatureList), AIL_Layout (*acceptWsAfterList)(AIL_Layout)) */

AIL_Definition AIL_visitDefinition(AIL_Definition arg, AIL_Layout (*acceptWsAfterDefinition)(AIL_Layout), AIL_Id (*acceptId)(AIL_Id), AIL_Layout (*acceptWsAfterId)(AIL_Layout), AIL_Layout (*acceptWsAfterBraceOpen)(AIL_Layout), AIL_SignatureList (*acceptList)(AIL_SignatureList), AIL_Layout (*acceptWsAfterList)(AIL_Layout))
{
  if (AIL_isDefinitionDefault(arg)) {
    return AIL_makeDefinitionDefault(
        acceptWsAfterDefinition ? acceptWsAfterDefinition(AIL_getDefinitionWsAfterDefinition(arg)) : AIL_getDefinitionWsAfterDefinition(arg),
        acceptId ? acceptId(AIL_getDefinitionId(arg)) : AIL_getDefinitionId(arg),
        acceptWsAfterId ? acceptWsAfterId(AIL_getDefinitionWsAfterId(arg)) : AIL_getDefinitionWsAfterId(arg),
        acceptWsAfterBraceOpen ? acceptWsAfterBraceOpen(AIL_getDefinitionWsAfterBraceOpen(arg)) : AIL_getDefinitionWsAfterBraceOpen(arg),
        acceptList ? acceptList(AIL_getDefinitionList(arg)) : AIL_getDefinitionList(arg),
        acceptWsAfterList ? acceptWsAfterList(AIL_getDefinitionWsAfterList(arg)) : AIL_getDefinitionWsAfterList(arg));
  }
  ATabort("not a Definition: %t\n", arg);
  return (AIL_Definition)NULL;
}

/*}}}  */
/*{{{  AIL_SignatureList AIL_visitSignatureList(AIL_SignatureList arg, AIL_Signature (*acceptHead)(AIL_Signature), AIL_Layout (*acceptWsAfterFirst)(AIL_Layout)) */

AIL_SignatureList AIL_visitSignatureList(AIL_SignatureList arg, AIL_Signature (*acceptHead)(AIL_Signature), AIL_Layout (*acceptWsAfterFirst)(AIL_Layout))
{
  if (AIL_isSignatureListEmpty(arg)) {
    return AIL_makeSignatureListEmpty();
  }
  if (AIL_isSignatureListSingle(arg)) {
    return AIL_makeSignatureListSingle(
        acceptHead ? acceptHead(AIL_getSignatureListHead(arg)) : AIL_getSignatureListHead(arg));
  }
  if (AIL_isSignatureListMany(arg)) {
    return AIL_makeSignatureListMany(
        acceptHead ? acceptHead(AIL_getSignatureListHead(arg)) : AIL_getSignatureListHead(arg),
        acceptWsAfterFirst ? acceptWsAfterFirst(AIL_getSignatureListWsAfterFirst(arg)) : AIL_getSignatureListWsAfterFirst(arg),
        AIL_visitSignatureList(AIL_getSignatureListTail(arg), acceptHead, acceptWsAfterFirst));
  }
  ATabort("not a SignatureList: %t\n", arg);
  return (AIL_SignatureList)NULL;
}

/*}}}  */
/*{{{  AIL_Instruction AIL_visitInstruction(AIL_Instruction arg, AIL_Id (*acceptId)(AIL_Id), AIL_Layout (*acceptWsAfterId)(AIL_Layout), AIL_Arg (*acceptArgument)(AIL_Arg)) */

AIL_Instruction AIL_visitInstruction(AIL_Instruction arg, AIL_Id (*acceptId)(AIL_Id), AIL_Layout (*acceptWsAfterId)(AIL_Layout), AIL_Arg (*acceptArgument)(AIL_Arg))
{
  if (AIL_isInstructionWithoutArg(arg)) {
    return AIL_makeInstructionWithoutArg(
        acceptId ? acceptId(AIL_getInstructionId(arg)) : AIL_getInstructionId(arg));
  }
  if (AIL_isInstructionWithArg(arg)) {
    return AIL_makeInstructionWithArg(
        acceptId ? acceptId(AIL_getInstructionId(arg)) : AIL_getInstructionId(arg),
        acceptWsAfterId ? acceptWsAfterId(AIL_getInstructionWsAfterId(arg)) : AIL_getInstructionWsAfterId(arg),
        acceptArgument ? acceptArgument(AIL_getInstructionArgument(arg)) : AIL_getInstructionArgument(arg));
  }
  ATabort("not a Instruction: %t\n", arg);
  return (AIL_Instruction)NULL;
}

/*}}}  */
/*{{{  AIL_Statement AIL_visitStatement(AIL_Statement arg, AIL_Label (*acceptLab)(AIL_Label), AIL_Layout (*acceptWsAfterLab)(AIL_Layout), AIL_Instruction (*acceptInstruction)(AIL_Instruction), AIL_Layout (*acceptWsAfterInstruction)(AIL_Layout)) */

AIL_Statement AIL_visitStatement(AIL_Statement arg, AIL_Label (*acceptLab)(AIL_Label), AIL_Layout (*acceptWsAfterLab)(AIL_Layout), AIL_Instruction (*acceptInstruction)(AIL_Instruction), AIL_Layout (*acceptWsAfterInstruction)(AIL_Layout))
{
  if (AIL_isStatementLabelDef(arg)) {
    return AIL_makeStatementLabelDef(
        acceptLab ? acceptLab(AIL_getStatementLab(arg)) : AIL_getStatementLab(arg),
        acceptWsAfterLab ? acceptWsAfterLab(AIL_getStatementWsAfterLab(arg)) : AIL_getStatementWsAfterLab(arg));
  }
  if (AIL_isStatementInstruction(arg)) {
    return AIL_makeStatementInstruction(
        acceptInstruction ? acceptInstruction(AIL_getStatementInstruction(arg)) : AIL_getStatementInstruction(arg),
        acceptWsAfterInstruction ? acceptWsAfterInstruction(AIL_getStatementWsAfterInstruction(arg)) : AIL_getStatementWsAfterInstruction(arg));
  }
  ATabort("not a Statement: %t\n", arg);
  return (AIL_Statement)NULL;
}

/*}}}  */
/*{{{  AIL_Arg AIL_visitArg(AIL_Arg arg, AIL_Number (*acceptNumber)(AIL_Number), AIL_Program (*acceptCode)(AIL_Program), AIL_ATerm (*acceptTerm)(AIL_ATerm), AIL_Label (*acceptLabel)(AIL_Label)) */

AIL_Arg AIL_visitArg(AIL_Arg arg, AIL_Number (*acceptNumber)(AIL_Number), AIL_Program (*acceptCode)(AIL_Program), AIL_ATerm (*acceptTerm)(AIL_ATerm), AIL_Label (*acceptLabel)(AIL_Label))
{
  if (AIL_isArgNumber(arg)) {
    return AIL_makeArgNumber(
        acceptNumber ? acceptNumber(AIL_getArgNumber(arg)) : AIL_getArgNumber(arg));
  }
  if (AIL_isArgCode(arg)) {
    return AIL_makeArgCode(
        acceptCode ? acceptCode(AIL_getArgCode(arg)) : AIL_getArgCode(arg));
  }
  if (AIL_isArgAterm(arg)) {
    return AIL_makeArgAterm(
        acceptTerm ? acceptTerm(AIL_getArgTerm(arg)) : AIL_getArgTerm(arg));
  }
  if (AIL_isArgLabel(arg)) {
    return AIL_makeArgLabel(
        acceptLabel ? acceptLabel(AIL_getArgLabel(arg)) : AIL_getArgLabel(arg));
  }
  ATabort("not a Arg: %t\n", arg);
  return (AIL_Arg)NULL;
}

/*}}}  */
/*{{{  AIL_Program AIL_visitProgram(AIL_Program arg, AIL_Layout (*acceptWsAfterBraceOpen)(AIL_Layout), AIL_StatementList (*acceptList)(AIL_StatementList), AIL_Layout (*acceptWsAfterList)(AIL_Layout)) */

AIL_Program AIL_visitProgram(AIL_Program arg, AIL_Layout (*acceptWsAfterBraceOpen)(AIL_Layout), AIL_StatementList (*acceptList)(AIL_StatementList), AIL_Layout (*acceptWsAfterList)(AIL_Layout))
{
  if (AIL_isProgramProgram(arg)) {
    return AIL_makeProgramProgram(
        acceptWsAfterBraceOpen ? acceptWsAfterBraceOpen(AIL_getProgramWsAfterBraceOpen(arg)) : AIL_getProgramWsAfterBraceOpen(arg),
        acceptList ? acceptList(AIL_getProgramList(arg)) : AIL_getProgramList(arg),
        acceptWsAfterList ? acceptWsAfterList(AIL_getProgramWsAfterList(arg)) : AIL_getProgramWsAfterList(arg));
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
