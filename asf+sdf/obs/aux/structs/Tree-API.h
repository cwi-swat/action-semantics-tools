#ifndef _TREE_API_H
#define _TREE_API_H

/*{{{  includes */

#include <aterm1.h>
#include "Tree-API_dict.h"

/*}}}  */

/*{{{  typedefs */

typedef struct _Tree *Tree;

/*}}}  */

void initTreeAPIApi(void);

/*{{{  term conversion functions */

Tree TreeFromTerm(ATerm t);
ATerm TreeToTerm(Tree arg);

/*}}}  */
/*{{{  constructors */

Tree makeTreeEmpty();
Tree makeTreeTree(Elt elt, Int count, Tree lhs, Tree rhs);

/*}}}  */
/*{{{  equality functions */

ATbool isEqualTree(Tree arg0, Tree arg1);

/*}}}  */
/*{{{  Tree accessors */

ATbool isValidTree(Tree arg);
inline ATbool isTreeEmpty(Tree arg);
inline ATbool isTreeTree(Tree arg);
ATbool hasTreeElt(Tree arg);
Elt getTreeElt(Tree arg);
Tree setTreeElt(Tree arg, Elt elt);
ATbool hasTreeCount(Tree arg);
Int getTreeCount(Tree arg);
Tree setTreeCount(Tree arg, Int count);
ATbool hasTreeLhs(Tree arg);
Tree getTreeLhs(Tree arg);
Tree setTreeLhs(Tree arg, Tree lhs);
ATbool hasTreeRhs(Tree arg);
Tree getTreeRhs(Tree arg);
Tree setTreeRhs(Tree arg, Tree rhs);

/*}}}  */
/*{{{  sort visitors */

Tree visitTree(Tree arg, Elt (*acceptElt)(Elt), Int (*acceptCount)(Int));

/*}}}  */

#endif /* _TREE_API_H */
