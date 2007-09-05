
#include <stdlib.h>
#include <aterm2.h>

typedef ATerm ANK_NatCon;
typedef ATerm ANK_String;
typedef ATerm ANK_Agent;
typedef ATerm ANK_Cell;
typedef ATerm ANK_List;

#define ANK_NatConToInt(n) (atoi(ATwriteToString((ATerm)(n))))
#define ANK_StringToStr(s) (ATgetName(ATgetAFun((ATermAppl)(s))))



