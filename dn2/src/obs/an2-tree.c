
#include "an2-tree.h"
#include <assert.h>

static int weight = 4;

ATermTree ATemptyTree = NULL;
static AFun tree_fun;
static AFun empty_fun;
static ATermComparator comparator = NULL;


#define elt_compare(a1,a2) (comparator((ATerm)a1,(ATerm)a2))


void ATtreeInit() {
  empty_fun = ATmakeAFun("empty", 0, ATfalse);
  ATprotectAFun(empty_fun);
  ATemptyTree = ATmakeAppl0(empty_fun);
  ATprotect((ATerm*)&ATemptyTree);
  tree_fun = ATmakeAFun("tree", 4, ATfalse);
  ATprotectAFun(tree_fun);
}

void ATtreeSetComparator(ATermComparator c) {
  comparator = c;
}


/* This is to prevent that annotations make empty tree different. */  
#define is_empty(t) (ATisEqual(ATgetAFun((ATermTree)t),empty_fun))


#define make_tree(elt,count,l,r) ((ATermTree)ATmakeAppl4(tree_fun,elt,(ATerm)ATmakeInt(count),\
                                              (ATerm)l,(ATerm)r))
#define get_elt(tree) (ATgetArgument(tree, 0))
#define get_count(tree) (is_empty(tree)?0:ATgetInt((ATermInt)ATgetArgument(tree, 1)))
#define get_left(tree) ((ATermTree)ATgetArgument(tree, 2))
#define get_right(tree) ((ATermTree)ATgetArgument(tree, 3))
#define new_tree(elt,l,r) (make_tree(elt,1+get_count(l)+get_count(r),l,r))

ATbool ATtreeMember(ATermTree tree, ATerm elt) {
  assert(comparator);
  if (is_empty(tree))
    return ATfalse;
  if (elt_compare(elt, get_elt(tree)) == 0) 
    return ATtrue;
  if (elt_compare(elt, get_elt(tree)) == -1) 
    return ATtreeMember(get_left(tree), elt);
  if (elt_compare(elt, get_elt(tree)) == 1) 
    return ATtreeMember(get_right(tree), elt);
}

ATerm ATtreeGet(ATermTree tree, ATerm elt) {
  assert(comparator);
  if (is_empty(tree))
    return NULL;
  if (elt_compare(elt, get_elt(tree)) == 0) 
    return get_elt(tree);
  if (elt_compare(elt, get_elt(tree)) == -1) 
    return ATtreeGet(get_left(tree), elt);
  if (elt_compare(elt, get_elt(tree)) == 1) 
    return ATtreeGet(get_right(tree), elt);
}
 
ATerm min(ATermTree tree) {
  if (is_empty(tree))
    ATabort("Min not allowed on empty trees.");
  if (is_empty(get_left(tree)))
    return get_elt(tree);
  return min(get_left(tree));
}

inline ATermTree single_l(ATerm elt, ATermTree t1, ATermTree t2) {
  return new_tree(get_elt(t2), new_tree(elt, t1, get_left(t2)), get_right(t2));
}

inline ATermTree double_l(ATerm elt, ATermTree t1, ATermTree t2) {
  ATermTree t = get_left(t2);
  return new_tree(get_elt(t), new_tree(elt, t1, get_left(t)), 
		  new_tree(get_elt(t2), get_right(t), get_right(t2)));
}

inline ATermTree single_r(ATerm elt, ATermTree t1, ATermTree t2) {
  return new_tree(get_elt(t1), get_left(t1), new_tree(elt, get_right(t1), t2));
}

inline ATermTree double_r(ATerm elt, ATermTree t1, ATermTree t2) {
  ATermTree t = get_right(t1);
  return new_tree(get_elt(t), new_tree(get_elt(t1), get_left(t1), get_left(t)),
		  new_tree(elt, get_right(t), t2));
}

inline ATermTree ATmakeTree(ATerm v, ATermTree l, ATermTree r) {
  int ln = get_count(l);
  int rn = get_count(r);
  if (ln + rn < 2)
    return new_tree(v, l, r);
  if (rn > weight * ln) {
    int rln = get_count(get_left(r));
    int rrn = get_count(get_right(r));
    if (rln < rrn)
      return single_l(v, l, r);
    return double_l(v, l, r);
  }
  if (ln > weight * rn) {
    int lln = get_count(get_left(l));
    int lrn = get_count(get_right(l));
    if (lrn < lln)
      return single_r(v, l, r);
    return double_r(v, l, r);
  }
  return new_tree(v, l, r);
}

ATermTree ATtreeInsert(ATermTree tree, ATerm x) {
  assert(comparator);
  if (is_empty(tree)) 
    return make_tree(x, 1, ATemptyTree, ATemptyTree);
  if (elt_compare(x, get_elt(tree)) == -1)
    return ATmakeTree(get_elt(tree), ATtreeInsert(get_left(tree), x), get_right(tree));
  if (elt_compare(x, get_elt(tree)) == 1)
    return ATmakeTree(get_elt(tree), get_left(tree), ATtreeInsert(get_right(tree), x));
  return new_tree(x, get_left(tree), get_right(tree));
}

ATermTree del_min(ATermTree t) {
  if (is_empty(t)) 
    ATabort("Del_min doesn't work on empty trees.");
  if (is_empty(get_left(t)))
    return get_right(t);
  return ATmakeTree(get_elt(t), del_min(get_left(t)), get_right(t));
}

inline ATermTree del_aux(ATermTree t1, ATermTree t2) {
  if (is_empty(t1))
    return t2;
  if (is_empty(t2))
    return t1;
  return ATmakeTree(min(t2), t1, del_min(t2));
}

ATermTree ATtreeDelete(ATermTree tree, ATerm x) {
  assert(comparator);
  if (is_empty(tree)) 
    return ATemptyTree;
  if (elt_compare(x, get_elt(tree)) == -1)
    return ATmakeTree(get_elt(tree), ATtreeDelete(get_left(tree), x), get_right(tree));
  if (elt_compare(x, get_elt(tree)) == 1)
    return ATmakeTree(get_elt(tree), get_left(tree), ATtreeDelete(get_right(tree), x));
  return del_aux(get_left(tree), get_right(tree));
}

ATermTree concat3(ATerm v, ATermTree t1, ATermTree t2) {
  if (is_empty(t1))
    return ATtreeInsert(t2, v);
  if (is_empty(t2))
    return ATtreeInsert(t1, v);
  if (weight * get_count(t1) < get_count(t2))
    return ATmakeTree(get_elt(t2), concat3(v, t1, get_left(t2)), get_right(t2));
  if (weight * get_count(t2) < get_count(t1))
    return ATmakeTree(get_elt(t1), get_left(t1), concat3(v, get_right(t1), t2));
  return new_tree(v, t1, t2);
}

ATermTree split_lt(ATermTree t, ATerm x) {
  assert(comparator);
  if (is_empty(t))
    return t;
  if (elt_compare(x, get_elt(t)) == -1)
    return split_lt(get_left(t), x);
  if (elt_compare(x, get_elt(t)) == 1)
    return concat3(get_elt(t), get_left(t), split_lt(get_right(t), x));
  return get_left(t);
}

ATermTree split_gt(ATermTree t, ATerm x) {
  assert(comparator);
  if (is_empty(t))
    return t;
  if (elt_compare(x, get_elt(t)) == 1)
    return split_gt(get_right(t), x);
  if (elt_compare(x, get_elt(t)) == -1)
    return concat3(get_elt(t), split_gt(get_left(t), x), get_right(t));
  return get_right(t);
}

ATermTree ATtreeUnion(ATermTree t1, ATermTree t2) {
  if (is_empty(t1))
    return t2;
  if (is_empty(t2))
    return t1;
  return concat3(get_elt(t2), 
		 ATtreeUnion(split_lt(t1, get_elt(t2)), get_left(t2)),
		 ATtreeUnion(split_gt(t1, get_elt(t2)), get_right(t2)));
}


ATermTree concat(ATermTree t1, ATermTree t2) {
  if (is_empty(t1))
    return t2;
  if (is_empty(t2))
    return t1;;
  if (weight * get_count(t1) < get_count(t2))
    return ATmakeTree(get_elt(t2), concat(t1, get_left(t2)), get_right(t2));
  if (weight * get_count(t2) < get_count(t1))
    return ATmakeTree(get_elt(t1), get_left(t1), concat(get_right(t1), t2));
  return ATmakeTree(min(t2), t1, del_min(t2));
}

ATermTree ATtreeDifference(ATermTree t1, ATermTree t2) {
  if (is_empty(t1))
    return t1;
  if (is_empty(t2))
    return t1;
  return concat(ATtreeDifference(split_lt(t1, get_elt(t2)), get_left(t2)),
		ATtreeDifference(split_gt(t1, get_elt(t2)), get_right(t2)));
}

ATermTree ATtreeIntersection(ATermTree t1, ATermTree t2) {
  if (is_empty(t1)) 
    return t1;
  if (is_empty(t2)) 
    return t2;
  if (ATtreeMember(t1, get_elt(t2)))
    return concat3(get_elt(t2), 
		   ATtreeIntersection(split_lt(t1, get_elt(t2)), get_left(t2)),
		   ATtreeIntersection(split_gt(t1, get_elt(t2)), get_right(t2)));
  return concat(ATtreeIntersection(split_lt(t1, get_elt(t2)), get_left(t2)),
		ATtreeIntersection(split_gt(t1, get_elt(t2)), get_right(t2)));
}

ATermTree trim(ATerm lo, ATerm hi, ATermTree t) {
  if (is_empty(t))
    return t;
  if (elt_compare(lo, get_elt(t)) == -1) {
    if (elt_compare(get_elt(t), hi) == -1)
      return t;
    else
      return trim(lo, hi, get_left(t));
  }
  return trim(lo, hi, get_right(t));
}

ATermTree uni_bd(ATermTree s, ATermTree t, ATerm lo, ATerm hi) {
  if (is_empty(t))
    return s;
  if (is_empty(s))
    return concat3(get_elt(t), split_gt(get_left(t), lo), split_lt(get_right(t), hi));
  return concat3(get_elt(s),
		 uni_bd(get_left(s), trim(lo, get_elt(s), t), lo, get_elt(s)),
		 uni_bd(get_right(s), trim(get_elt(s), hi, t), get_elt(s), hi));
}

ATermTree trim_lo(ATerm lo, ATermTree t) {
  if (is_empty(t))
    return t;
  if (elt_compare(lo, get_elt(t)) == -1)
    return t;
  return trim_lo(lo, get_right(t));
}

ATermTree trim_hi(ATerm hi, ATermTree t) {
  if (is_empty(t))
    return t;
  if (elt_compare(hi, get_elt(t)) == 1)
    return t;
  return trim_hi(hi, get_left(t));
}

ATermTree uni_hi(ATermTree s, ATermTree t, ATerm hi) {
  if (is_empty(t))
    return s;
  if (is_empty(s))
    return concat3(get_elt(t), get_left(t), split_lt(get_right(t), hi));
  return concat3(get_elt(s),
		 uni_hi(get_left(s), trim_hi(get_elt(s), t), get_elt(s)),
		 uni_bd(get_right(s), trim(get_elt(s), hi, t), get_elt(s), hi));
}

ATermTree uni_lo(ATermTree s, ATermTree t, ATerm lo) {
  if (is_empty(t))
    return s;
  if (is_empty(s))
    return concat3(get_elt(t), split_gt(get_left(t), lo), get_right(t));
  return concat3(get_elt(s),
		 uni_bd(get_left(s), trim(lo, get_elt(s), t), lo, get_elt(s)),
		 uni_lo(get_right(s), trim_lo(get_elt(s), t), get_elt(s)));
}

ATermTree ATtreeHUnion(ATermTree t1, ATermTree t2) {
  if (is_empty(t1))
    return t2;
  if (is_empty(t2))
    return t1;
  return concat3(get_elt(t1),
		 uni_hi(get_left(t1), trim_hi(get_elt(t1), t2), get_elt(t1)),
		 uni_lo(get_right(t1), trim_lo(get_elt(t1), t2), get_elt(t1)));
}

  

void ftree_to_dot_statements(FILE *f, ATermTree t) {
  if (is_empty(t))
    return;
  ATfprintf(f, "\"%t\";\n", get_elt(t));
  if (!is_empty(get_left(t))) {
    ftree_to_dot_statements(f, get_left(t));
    ATfprintf(f, "\"%t\" -> \"%t\";\n", get_elt(t), get_elt(get_left(t)));
  }
  if (!is_empty(get_right(t))) {
    ftree_to_dot_statements(f, get_right(t));
    ATfprintf(f, "\"%t\" -> \"%t\";\n", get_elt(t), get_elt(get_right(t)));
  }
}

void ATftreeToDot(FILE *f, ATermTree t) {
  fprintf(f, "digraph ATermTree {\n");
  ftree_to_dot_statements(f, t);
  fprintf(f, "}\n");
}

