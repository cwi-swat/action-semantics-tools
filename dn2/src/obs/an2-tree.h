
#ifndef __AT_TREE__H
#define __AT_TREE__H 1

#include <stdio.h>
#include <aterm2.h>

/* ATermTrees are implemented in ATermAppls. */
typedef ATermAppl ATermTree;

/* A function-type to compare ATerms */
typedef int (*ATermComparator)(ATerm,ATerm);

/* The empty tree */
extern ATermTree ATemptyTree;

/*
 * name   : ATtreeInit
 * pre    : true
 * action : initialize tree routines
 * post   : the tree routines are ready to use!
 */
void ATtreeInit();

/*
 * name   : ATtreeSetComparator
 * pre    : c must be functionpointer to an atermcomparator (v.s.)
 * action : set the used total order on tree elements
 * post   : the tree functions can be used.
 */
void ATtreeSetComparator(ATermComparator c);

/*
 * name   : ATtreeSize
 * pre    : t must be a valid ATermTree
 * action : compute the size (# of elements) of t
 * post   : the number of elements in t is returned.
 */
int ATtreeSize(ATermTree t);

/*
 * name   : ATtreeMember
 * pre    : t must be a valid ATermTree, elt a random aterm
 * action : check whether elt is in t via the comparator.
 * post   : true is returned when elt is in t.
 */
ATbool ATtreeMember(ATermTree t, ATerm elt);

/*
 * name   : ATtreeGet
 * pre    : tree is a valid ATermTree elt is an element
 * action : find an element in tree that is equal to elt
 *          as defined by ATtreeSetComparator.
 * post   : if an element is found this element is returned
 * note   : ATisEqual(ATtreeGet(t, e), e) need not hold.
 */
ATerm ATtreeGet(ATermTree tree, ATerm elt);

/*
 * name   : ATmakeTree
 * pre    : elt an arbitrary ATerm, l and r valid ATermTrees
 * action : create a balanced tree with l and r as siblings
 * post   : the new balanced tree is returned.
 */
ATermTree ATmakeTree(ATerm elt, ATermTree l, ATermTree r);

/*
 * name   : ATtreeInsert
 * pre    : t a valid ATerm tree, elt an arbitrary ATerm
 * action : insert elt in t
 * post   : the new tree containing elt is returned.
 */
ATermTree ATtreeInsert(ATermTree t, ATerm elt);

/*
 * name   : ATtreeDelete
 * pre    : t a valid ATerm tree, elt an arbitrary ATerm
 * action : delete elt from t if it exists
 * post   : the new tree lacking elt is returned.
 */
ATermTree ATtreeDelete(ATermTree t, ATerm elt);

/*
 * name   : ATtreeUnion
 * pre    : t1, t2 valid ATermTrees
 * action : compute the union of t1 and t2 as sets
 * post   : the union of t1 and t2 is returned.
 */
ATermTree ATtreeUnion(ATermTree t1, ATermTree t2);

/*
 * name   : ATtreeHUnion
 * pre    : t1, t2 valid ATermTrees
 * action : compute the union of t1 and t2 as sets with the hedge algorithm
 * post   : the union of t1 and t2 is returned.
 */
ATermTree ATtreeHUnion(ATermTree t1, ATermTree t2);

/*
 * name   : ATtreeDifference
 * pre    : t1, t2 valid ATermTrees
 * action : compute the asymmetric set-difference of t1 and t2
 * post   : t1 - t2 is returned.
 */
ATermTree ATtreeDifference(ATermTree t1, ATermTree t2);

/*
 * name   : ATtreeIntersection
 * pre    : t1, t2 valid ATermTrees
 * action : compute the intersection of sets t1 and t2
 * post   : the intersection of t1 and t2 is returned
 */
ATermTree ATtreeIntersection(ATermTree t1, ATermTree t2);


/*
 * name   : ATftreeToDot
 * pre    : f and open filehandle, t a valid ATermTree
 * action : print a tree representation of t to f to be processed by dot(1).
 * post   : the dot representation of t is written to f.
 */
void ATftreeToDot(FILE *f, ATermTree t);

#endif
