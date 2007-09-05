
#ifndef __ACDATA_H
#define __ACDATA_H 1

#include <aterm2.h>


typedef ATermAppl ACTuple;
typedef ATermAppl ACToken;
typedef ATermAppl ACAction;
typedef ATermAppl ACEnact;
typedef ATermAppl ACMessageTag;
typedef ATermAppl ACBindings;
typedef ATermAppl ACAgent;
typedef ATermAppl ACCell;
typedef ATermAppl ACThen;
typedef ATermAppl ACAndThen;
typedef ATermAppl ACExceptionally;
typedef ATermAppl ACAndExceptionally;
typedef ATermAppl ACOtherwise;
typedef ATermAppl ACHence;
typedef ATermAppl ACProvide;
typedef ATermInt ACInteger;
typedef ATerm ACData;
typedef ATerm ACDatum;

#define TUPLE_FUNC (ATmakeAFun("tuple", 1, ATfalse))
#define TOKEN_FUNC (ATmakeAFun("token", 1, ATfalse))
#define ACTION_FUNC (ATmakeAFun("action", 1, ATfalse))
#define ENACT_FUNC (ATmakeAFun("enact", 1, ATfalse))
#define MESSAGETAG_FUNC (ATmakeAFun("message-tag", 1, ATfalse))
#define BINDINGS_FUNC (ATmakeAFun("bindings", 1, ATfalse))
#define NOBINDINGS_FUNC (ATmakeAFun("nobindings", 0, ATfalse))
#define AGENT_FUNC (ATmakeAFun("agent", 1, ATfalse))
#define CELL_FUNC (ATmakeAFun("cell", 1, ATfalse))
#define THEN_FUNC (ATmakeAFun("then", 2, ATfalse))
#define ANDTHEN_FUNC (ATmakeAFun("andthen", 2, ATfalse))
#define EXCEPTIONALLY_FUNC (ATmakeAFun("exceptionally", 2, ATfalse))
#define ANDEXCEPTIONALLY_FUNC (ATmakeAFun("andexceptionally", 2, ATfalse))
#define OTHERWISE_FUNC (ATmakeAFun("otherwise", 2, ATfalse))
#define HENCE_FUNC (ATmakeAFun("hence", 2, ATfalse))
#define PROVIDE_FUNC (ATmakeAFun("provide", 1, ATfalse))

#define ACisTuple(t) (ATgetAfun(t) == TUPLE_FUNC)
#define ACisToken(t) (ATgetAfun(t) == TOKEN_FUNC)
#define ACisAction(t) (ATgetAfun(t) == ACTION_FUNC)
#define ACisEnact(t) (ATgetAfun(t) == ENACT_FUNC)
#define ACisMessageTag(t) (ATgetAfun(t) == MESSAGETAG_FUNC)
#define ACisBindings(t) (ATgetAFun(t) == BINDINGS_FUNC)
#define ACisNoBindings(bs) (ATgetAFun(bs) == NOBINDINGS_FUNC)
#define ACisAgent(t) (ATgetAfun(t) == AGENT_FUNC)
#define ACisCell(t) (ATgetAfun(t) == CELL_FUNC)
#define ACisThen(t) (ATgetAfun(t) == THEN_FUNC)
#define ACisAndThen(t) (ATgetAfun(t) == ANDTHEN_FUNC)
#define ACisExceptionally(t) (ATgetAfun(t) == EXCEPTIONALLY_FUNC)
#define ACisAndExceptionally(t) (ATgetAfun(t) == ANDEXCEPTIONALLY_FUNC)
#define ACisOtherwise(t) (ATgetAfun(t) == OTHERWISE_FUNC)
#define ACisHence(t) (ATgetAfun(t) == HENCE_FUNC)
#define ACisProvide(t) (ATgetAfun(t) == PROVIDE_FUNC)



#define ACnoBindings() (ATmakeAppl0(NOBINDINGS_FUNC))
