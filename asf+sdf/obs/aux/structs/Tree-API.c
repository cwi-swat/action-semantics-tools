#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "Tree-API.h"

/*{{{  typedefs */

typedef struct ATerm _Tree;

/*}}}  */

/*{{{  void initTreeAPIApi(void) */

void initTreeAPIApi(void)
{
  init_Tree_API_dict();
}

/*}}}  */

/*{{{  term conversion functions */

/*{{{  Tree TreeFromTerm(ATerm t) */

Tree TreeFromTerm(ATerm t)
{
  return (Tree)t;
}

/*}}}  */
/*{{{  ATerm TreeToTerm(Tree arg) */

ATerm TreeToTerm(Tree arg)
{
  return (ATerm)arg;
}

/*}}}  */

/*}}}  */
/*{{{  constructors */

/*{{{  Tree makeTreeEmpty() */

Tree makeTreeEmpty()
{
  return (Tree)(ATerm)ATmakeAppl0(afun0);
}

/*}}}  */
/*{{{  Tree makeTreeTree(Elt elt, Int count, Tree lhs, Tree rhs) */

Tree makeTreeTree(Elt elt, Int count, Tree lhs, Tree rhs)
{
  return (Tree)(ATerm)ATmakeAppl4(afun1, (ATerm)elt, (ATerm)count, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */

/*}}}  */
/*{{{  equality functions */

ATbool isEqualTree(Tree arg0, Tree arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/*}}}  */
/*{{{  Tree accessors */

/*{{{  ATbool isValidTree(Tree arg) */

ATbool isValidTree(Tree arg)
{
  if (isTreeEmpty(arg)) {
    return ATtrue;
  }
  else if (isTreeTree(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool isTreeEmpty(Tree arg) */

inline ATbool isTreeEmpty(Tree arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(patternTreeEmpty)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, patternTreeEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool isTreeTree(Tree arg) */

inline ATbool isTreeTree(Tree arg)
{
  if (ATgetAFun((ATermAppl)arg) != ATgetAFun(patternTreeTree)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, patternTreeTree, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool hasTreeElt(Tree arg) */

ATbool hasTreeElt(Tree arg)
{
  if (isTreeTree(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  Elt getTreeElt(Tree arg) */

Elt getTreeElt(Tree arg)
{
  
    return (Elt)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  Tree setTreeElt(Tree arg, Elt elt) */

Tree setTreeElt(Tree arg, Elt elt)
{
  if (isTreeTree(arg)) {
    return (Tree)ATsetArgument((ATermAppl)arg, (ATerm)elt, 0);
  }

  ATabort("Tree has no Elt: %t\n", arg);
  return (Tree)NULL;
}

/*}}}  */
/*{{{  ATbool hasTreeCount(Tree arg) */

ATbool hasTreeCount(Tree arg)
{
  if (isTreeTree(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  Int getTreeCount(Tree arg) */

Int getTreeCount(Tree arg)
{
  
    return (Int)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  Tree setTreeCount(Tree arg, Int count) */

Tree setTreeCount(Tree arg, Int count)
{
  if (isTreeTree(arg)) {
    return (Tree)ATsetArgument((ATermAppl)arg, (ATerm)count, 1);
  }

  ATabort("Tree has no Count: %t\n", arg);
  return (Tree)NULL;
}

/*}}}  */
/*{{{  ATbool hasTreeLhs(Tree arg) */

ATbool hasTreeLhs(Tree arg)
{
  if (isTreeTree(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  Tree getTreeLhs(Tree arg) */

Tree getTreeLhs(Tree arg)
{
  
    return (Tree)ATgetArgument((ATermAppl)arg, 2);
}

/*}}}  */
/*{{{  Tree setTreeLhs(Tree arg, Tree lhs) */

Tree setTreeLhs(Tree arg, Tree lhs)
{
  if (isTreeTree(arg)) {
    return (Tree)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 2);
  }

  ATabort("Tree has no Lhs: %t\n", arg);
  return (Tree)NULL;
}

/*}}}  */
/*{{{  ATbool hasTreeRhs(Tree arg) */

ATbool hasTreeRhs(Tree arg)
{
  if (isTreeTree(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  Tree getTreeRhs(Tree arg) */

Tree getTreeRhs(Tree arg)
{
  
    return (Tree)ATgetArgument((ATermAppl)arg, 3);
}

/*}}}  */
/*{{{  Tree setTreeRhs(Tree arg, Tree rhs) */

Tree setTreeRhs(Tree arg, Tree rhs)
{
  if (isTreeTree(arg)) {
    return (Tree)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 3);
  }

  ATabort("Tree has no Rhs: %t\n", arg);
  return (Tree)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  sort visitors */

/*{{{  Tree visitTree(Tree arg, Elt (*acceptElt)(Elt), Int (*acceptCount)(Int)) */

Tree visitTree(Tree arg, Elt (*acceptElt)(Elt), Int (*acceptCount)(Int))
{
  if (isTreeEmpty(arg)) {
    return makeTreeEmpty();
  }
  if (isTreeTree(arg)) {
    return makeTreeTree(
        acceptElt ? acceptElt(getTreeElt(arg)) : getTreeElt(arg),
        acceptCount ? acceptCount(getTreeCount(arg)) : getTreeCount(arg),
        visitTree(getTreeLhs(arg), acceptElt, acceptCount),
        visitTree(getTreeRhs(arg), acceptElt, acceptCount));
  }
  ATabort("not a Tree: %t\n", arg);
  return (Tree)NULL;
}

/*}}}  */

/*}}}  */
