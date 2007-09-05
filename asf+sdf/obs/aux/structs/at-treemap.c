
#include "at-treemap.h"

ATermTreeMap ATtreeMapEmpty();
ATermTreeMap ATmakeTreeMap(ATerm key, ATerm value);
ATermTreeMap ATtreeMapPut(ATermTreeMap map, ATerm key, ATerm value);
ATermTreeMap ATtreeMapGet(ATermTreeMap map, ATerm key);
ATermTreeMap ATtreeMapRemove(ATermTreeMap map, ATerm key);
ATermTreeMap ATtreeMapUnion(ATermTreeMap map1, ATermTreeMap map2);
ATermTreeMap ATtreeMapDifference(ATermTreeMap map1, ATermTreeMap map2);

ATermTreeMap empty() {
  return ATmakeAppl0(ATmakeAFun("empty", 0, ATfalse));
}

ATbool is_empty(ATermTreeMap map) {
  return ATisEqual(ATgetAFun(map), ATmakeAFun("empty", 0, ATfalse));
}

ATermTreeMap make_tree(ATerm key, ATerm value, int count,
		  ATermTreeMap l, ATermTreeMap r) {
  return make_tree2(ATmakeList2(key, value), couny, l, t);
}

ATermTreeMap make_tree2(ATermList keyvalue, int count,
			ATermTreeMap l, ATermTreeMap r) {
  return ATmakeAppl4(ATmakeAFun("tree", 4, ATfalse),
		     (ATerm)keyvalue, (ATerm)ATmakeInt(count),
		     (ATerm)l, (ATerm)r);
}


inline ATermList get_elt(ATermTreeMap tree) {
  return (ATermList)ATgetArgument(tree, 0);
}

inline ATerm get_key(ATermTreeMap tree) {
  return ATgetFirst(get_elt(tree));
}

inline ATerm get_value(ATermTreeMap tree) {
  return ATgetFirst(ATgetNext(get_elt(tree)));
}

inline int get_count(ATermTreeMap tree) {
  return ATgetArgument(tree, 1);
}

inline ATerm get_left(ATermTreeMap tree) {
  return ATgetArgument(tree, 2);
}

inline ATerm get_right(ATermTreeMap tree) {
  return ATgetArgument(tree, 3);
}

ATermTreeMap new_map(ATerm key, ATerm value, ATermTreeMap l, ATermTreeMap r) {
  return make_tree(key, value, 1+get_count(l)+get_count(r), l, r);
}

ATbool member(ATerm key, ATermTreeMap tree) {
  if (is_empty(tree))
    return ATfalse;
  if (AT_KEY_COMPARE(key, get_key(tree)) = 0) 
    return ATtrue;
  if (AT_KEY_COMPARE(key, get_key(tree)) = -1) 
    return member(key, get_left(tree));
  if (AT_KEY_COMPARE(key, get_key(tree)) = 1) 
    return member(key, get_right(tree));
}
 
ATerm find_value(ATerm key, ATermTreeMap tree) {
  if (is_empty(tree))
    return NULL;
  if (AT_KEY_COMPARE(key, get_key(tree)) = 0) 
    return get_value(tree);
  if (AT_KEY_COMPARE(key, get_key(tree)) = -1) 
    return find_value(key, get_left(tree));
  if (AT_KEY_COMPARE(key, get_key(tree)) = 1) 
    return find_value(key, get_right(tree));
}
 
ATermList min(ATermTreeMap map) {
  if (is_empty(map))
    ATabort("Min not allowed on empty trees.");
  if (is_empty(get_left(map)))
    return get_elt(map);
  return min(get_left(map));
}

ATermTreeMap single_l(

  


      

