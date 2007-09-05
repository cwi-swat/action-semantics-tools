
#include "dn/bbtree.h"
#include <assert.h>

static int weight = 4;

ATermBBTree ATemptyBBTree = NULL;
static AFun tree_fun;
static AFun empty_fun;

#define elt_compare(a1,a2) (comparator((ATerm)a1,(ATerm)a2))

void ATbbtreeInit() {
  empty_fun = ATmakeAFun("empty", 0, ATfalse);
  ATprotectAFun(empty_fun);
  ATemptyBBTree = ATmakeAppl0(empty_fun);
  ATprotect((ATerm*)&ATemptyBBTree);
  tree_fun = ATmakeAFun("tree", 4, ATfalse);
  ATprotectAFun(tree_fun);
}

/* This is to prevent that annotations make empty tree different. */  
#define is_empty(t) (ATisEqual(ATgetAFun((ATermBBTree)t),empty_fun))


#define make_tree(elt,count,l,r) ((ATermBBTree)ATmakeAppl4(tree_fun,elt,(ATerm)ATmakeInt(count),\
                                              (ATerm)l,(ATerm)r))
#define get_elt(tree) (ATgetArgument(tree, 0))
#define get_count(tree) (is_empty(tree)?0:ATgetInt((ATermInt)ATgetArgument(tree, 1)))
#define get_left(tree) ((ATermBBTree)ATgetArgument(tree, 2))
#define get_right(tree) ((ATermBBTree)ATgetArgument(tree, 3))
#define new_tree(elt,l,r) (make_tree(elt,1+get_count(l)+get_count(r),l,r))

ATbool ATbbtreeMember(ATermBBTree tree, ATerm elt, ATermComparator comparator) {
  assert(comparator);
  if (is_empty(tree))
    return ATfalse;
  if (elt_compare(elt, get_elt(tree)) == 0) 
    return ATtrue;
  if (elt_compare(elt, get_elt(tree)) == -1) 
    return ATbbtreeMember(get_left(tree), elt,comparator);
  if (elt_compare(elt, get_elt(tree)) == 1) 
    return ATbbtreeMember(get_right(tree), elt,comparator);
}

ATerm ATbbtreeGet(ATermBBTree tree, ATerm elt, ATermComparator comparator) {
  assert(comparator);
  if (is_empty(tree))
    return NULL;
  if (elt_compare(elt, get_elt(tree)) == 0) 
    return get_elt(tree);
  if (elt_compare(elt, get_elt(tree)) == -1) 
    return ATbbtreeGet(get_left(tree), elt,comparator);
  if (elt_compare(elt, get_elt(tree)) == 1) 
    return ATbbtreeGet(get_right(tree), elt,comparator);
}
 
static ATerm min(ATermBBTree tree) {
  if (is_empty(tree))
    ATabort("Min not allowed on empty trees.");
  if (is_empty(get_left(tree)))
    return get_elt(tree);
  return min(get_left(tree));
}

static ATermBBTree single_l(ATerm elt, ATermBBTree t1, ATermBBTree t2) {
  return new_tree(get_elt(t2), new_tree(elt, t1, get_left(t2)), get_right(t2));
}

static ATermBBTree double_l(ATerm elt, ATermBBTree t1, ATermBBTree t2) {
  ATermBBTree t = get_left(t2);
  return new_tree(get_elt(t), new_tree(elt, t1, get_left(t)), 
		  new_tree(get_elt(t2), get_right(t), get_right(t2)));
}

static ATermBBTree single_r(ATerm elt, ATermBBTree t1, ATermBBTree t2) {
  return new_tree(get_elt(t1), get_left(t1), new_tree(elt, get_right(t1), t2));
}

static ATermBBTree double_r(ATerm elt, ATermBBTree t1, ATermBBTree t2) {
  ATermBBTree t = get_right(t1);
  return new_tree(get_elt(t), new_tree(get_elt(t1), get_left(t1), get_left(t)),
		  new_tree(elt, get_right(t), t2));
}

ATermBBTree ATmakeBBTree(ATerm v, ATermBBTree l, ATermBBTree r) {
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

ATermBBTree ATbbtreeInsert(ATermBBTree tree, ATerm x, ATermComparator comparator) {
  assert(comparator);
  if (is_empty(tree)) 
    return make_tree(x, 1, ATemptyBBTree, ATemptyBBTree);
  if (elt_compare(x, get_elt(tree)) == -1)
    return ATmakeBBTree(get_elt(tree), ATbbtreeInsert(get_left(tree), x,comparator), get_right(tree));
  if (elt_compare(x, get_elt(tree)) == 1)
    return ATmakeBBTree(get_elt(tree), get_left(tree), ATbbtreeInsert(get_right(tree), x,comparator));
  return new_tree(x, get_left(tree), get_right(tree));
}

static ATermBBTree del_min(ATermBBTree t) {
  if (is_empty(t)) 
    ATabort("Del_min doesn't work on empty trees.");
  if (is_empty(get_left(t)))
    return get_right(t);
  return ATmakeBBTree(get_elt(t), del_min(get_left(t)), get_right(t));
}

static ATermBBTree del_aux(ATermBBTree t1, ATermBBTree t2) {
  if (is_empty(t1))
    return t2;
  if (is_empty(t2))
    return t1;
  return ATmakeBBTree(min(t2), t1, del_min(t2));
}

ATermBBTree ATbbtreeDelete(ATermBBTree tree, ATerm x, ATermComparator comparator) {
  assert(comparator);
  if (is_empty(tree)) 
    return ATemptyBBTree;
  if (elt_compare(x, get_elt(tree)) == -1)
    return ATmakeBBTree(get_elt(tree), ATbbtreeDelete(get_left(tree), x,comparator), get_right(tree));
  if (elt_compare(x, get_elt(tree)) == 1)
    return ATmakeBBTree(get_elt(tree), get_left(tree), ATbbtreeDelete(get_right(tree), x,comparator));
  return del_aux(get_left(tree), get_right(tree));
}

static ATermBBTree concat3(ATerm v, ATermBBTree t1, ATermBBTree t2, ATermComparator comparator) {
  if (is_empty(t1))
    return ATbbtreeInsert(t2, v,comparator);
  if (is_empty(t2))
    return ATbbtreeInsert(t1, v,comparator);
  if (weight * get_count(t1) < get_count(t2))
    return ATmakeBBTree(get_elt(t2), concat3(v, t1, get_left(t2),comparator), get_right(t2));
  if (weight * get_count(t2) < get_count(t1))
    return ATmakeBBTree(get_elt(t1), get_left(t1), concat3(v, get_right(t1), t2,comparator));
  return new_tree(v, t1, t2);
}

static ATermBBTree split_lt(ATermBBTree t, ATerm x, ATermComparator comparator) {
  assert(comparator);
  if (is_empty(t))
    return t;
  if (elt_compare(x, get_elt(t)) == -1)
    return split_lt(get_left(t), x, comparator);
  if (elt_compare(x, get_elt(t)) == 1)
    return concat3(get_elt(t), get_left(t), split_lt(get_right(t), x,comparator), comparator);
  return get_left(t);
}

static ATermBBTree split_gt(ATermBBTree t, ATerm x, ATermComparator comparator) {
  assert(comparator);
  if (is_empty(t))
    return t;
  if (elt_compare(x, get_elt(t)) == 1)
    return split_gt(get_right(t), x, comparator);
  if (elt_compare(x, get_elt(t)) == -1)
    return concat3(get_elt(t), split_gt(get_left(t), x,comparator), get_right(t),comparator);
  return get_right(t);
}

ATermBBTree ATbbtreeUnion(ATermBBTree t1, ATermBBTree t2, ATermComparator comparator) {
  if (is_empty(t1))
    return t2;
  if (is_empty(t2))
    return t1;
  return concat3(get_elt(t2), 
		 ATbbtreeUnion(split_lt(t1, get_elt(t2), comparator), 
			       get_left(t2),
			       comparator),
		 ATbbtreeUnion(split_gt(t1, get_elt(t2), comparator), 
			       get_right(t2),
			       comparator),
		 comparator);
}


static ATermBBTree concat(ATermBBTree t1, ATermBBTree t2) {
  if (is_empty(t1))
    return t2;
  if (is_empty(t2))
    return t1;;
  if (weight * get_count(t1) < get_count(t2))
    return ATmakeBBTree(get_elt(t2), concat(t1, get_left(t2)), get_right(t2));
  if (weight * get_count(t2) < get_count(t1))
    return ATmakeBBTree(get_elt(t1), get_left(t1), concat(get_right(t1), t2));
  return ATmakeBBTree(min(t2), t1, del_min(t2));
}

ATermBBTree ATbbtreeDifference(ATermBBTree t1, ATermBBTree t2, ATermComparator comparator) {
  if (is_empty(t1))
    return t1;
  if (is_empty(t2))
    return t1;
  return concat(ATbbtreeDifference(split_lt(t1, get_elt(t2), comparator), get_left(t2),comparator),
		ATbbtreeDifference(split_gt(t1, get_elt(t2), comparator), get_right(t2),comparator));
}

ATermBBTree ATbbtreeIntersection(ATermBBTree t1, ATermBBTree t2, ATermComparator comparator) {
  if (is_empty(t1)) 
    return t1;
  if (is_empty(t2)) 
    return t2;
  if (ATbbtreeMember(t1, get_elt(t2), comparator))
    return concat3(get_elt(t2), 
		   ATbbtreeIntersection(split_lt(t1, get_elt(t2),comparator), get_left(t2),comparator),
		   ATbbtreeIntersection(split_gt(t1, get_elt(t2),comparator), get_right(t2), comparator),comparator);
  return concat(ATbbtreeIntersection(split_lt(t1, get_elt(t2),comparator), get_left(t2),comparator),
		ATbbtreeIntersection(split_gt(t1, get_elt(t2),comparator), get_right(t2),comparator));
}

static ATermBBTree trim(ATerm lo, ATerm hi, ATermBBTree t, ATermComparator comparator) {
  if (is_empty(t))
    return t;
  if (elt_compare(lo, get_elt(t)) == -1) {
    if (elt_compare(get_elt(t), hi) == -1)
      return t;
    else
      return trim(lo, hi, get_left(t),comparator);
  }
  return trim(lo, hi, get_right(t),comparator);
}

static ATermBBTree uni_bd(ATermBBTree s, ATermBBTree t, ATerm lo, ATerm hi, ATermComparator comparator) {
  if (is_empty(t))
    return s;
  if (is_empty(s))
    return concat3(get_elt(t), 
		   split_gt(get_left(t), lo,comparator), 
		   split_lt(get_right(t), hi,comparator),
		   comparator);
  return concat3(get_elt(s),
		 uni_bd(get_left(s), 
			trim(lo, get_elt(s), t,comparator), 
			lo, 
			get_elt(s),
			comparator),
		 uni_bd(get_right(s), 
			trim(get_elt(s), hi, t,comparator), 
			get_elt(s), 
			hi,
			comparator),
		 comparator);
}

static ATermBBTree trim_lo(ATerm lo, ATermBBTree t , ATermComparator comparator) {
  if (is_empty(t))
    return t;
  if (elt_compare(lo, get_elt(t)) == -1)
    return t;
  return trim_lo(lo, get_right(t),comparator);
}

static ATermBBTree trim_hi(ATerm hi, ATermBBTree t, ATermComparator comparator) {
  if (is_empty(t))
    return t;
  if (elt_compare(hi, get_elt(t)) == 1)
    return t;
  return trim_hi(hi, get_left(t),comparator);
}

static ATermBBTree uni_hi(ATermBBTree s, ATermBBTree t, ATerm hi, ATermComparator comparator) {
  if (is_empty(t))
    return s;
  if (is_empty(s))
    return concat3(get_elt(t), 
		   get_left(t), 
		   split_lt(get_right(t), hi,comparator),
		   comparator);
  return concat3(get_elt(s),
		 uni_hi(get_left(s), 
			trim_hi(get_elt(s), t,comparator), 
			get_elt(s),
			comparator),
		 uni_bd(get_right(s), 
			trim(get_elt(s), hi, t,comparator), 
			get_elt(s), 
			hi,
			comparator),
		 comparator);
}

static ATermBBTree uni_lo(ATermBBTree s, ATermBBTree t, ATerm lo, ATermComparator comparator) {
  if (is_empty(t))
    return s;
  if (is_empty(s))
    return concat3(get_elt(t), 
		   split_gt(get_left(t), lo,comparator), 
		   get_right(t), 
		   comparator);
  return concat3(get_elt(s),
		 uni_bd(get_left(s), 
			trim(lo, get_elt(s), t,comparator), 
			lo, 
			get_elt(s),
			comparator),
		 uni_lo(get_right(s), 
			trim_lo(get_elt(s), t,comparator), 
			get_elt(s),
			comparator),
		 comparator);
}

ATermBBTree ATbbtreeHUnion(ATermBBTree t1, ATermBBTree t2, ATermComparator comparator) {
  if (is_empty(t1))
    return t2;
  if (is_empty(t2))
    return t1;
  return concat3(get_elt(t1),
		 uni_hi(get_left(t1), 
			trim_hi(get_elt(t1), t2,comparator), 
			get_elt(t1),
			comparator),
		 uni_lo(get_right(t1), 
			trim_lo(get_elt(t1), t2,comparator), 
			get_elt(t1),
			comparator),
		 comparator);
}

  

static void ftree_to_dot_statements(FILE *f, ATermBBTree t) {
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

void ATftreeToDot(FILE *f, ATermBBTree t) {
  fprintf(f, "digraph ATermBBTree {\n");
  ftree_to_dot_statements(f, t);
  fprintf(f, "}\n");
}

