/*
 * Generated at Sat Jun 22 15:03:58 2002
 */

#include "Tree-API_dict.h"

AFun afun0;
AFun afun1;

ATerm patternTreeTree = NULL;
ATerm patternTreeEmpty = NULL;

/*
 * afun0 = empty
 * afun1 = tree(x,x,x,x)
 *
 * patternTreeTree = tree(<term>,<term>,<term>,<term>)
 * patternTreeEmpty = empty
 *
 */

static ATermList _Tree_API_dict = NULL;

#define _Tree_API_dict_LEN 89

static char _Tree_API_dict_baf[_Tree_API_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x07,0x0D,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x01,0x01,0x03,
0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x06,0x03,0x01,0x04,0x06,0x02,0x01,0x02,
0x02,0x5B,0x5D,0x00,0x00,0x01,0x04,0x74,0x65,0x72,0x6D,0x00,0x00,0x01,0x05,0x65,
0x6D,0x70,0x74,0x79,0x00,0x00,0x01,0x01,0x78,0x00,0x00,0x01,0x04,0x74,0x72,0x65,
0x65,0x04,0x00,0x02,0x02,0x00,0x05,0x02,0x00,0x05,0x02,0x00,0x05,0x02,0x00,0x05,
0x01,0x24,0x04,0xAA,0x82,0x66,0x00,0x15,0x40
};

void init_Tree_API_dict()
{
  ATermList afuns, terms;

  _Tree_API_dict = (ATermList)ATreadFromBinaryString(_Tree_API_dict_baf, _Tree_API_dict_LEN);

  ATprotect((ATerm *)&_Tree_API_dict);

  afuns = (ATermList)ATelementAt(_Tree_API_dict, 0);

  afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt(_Tree_API_dict, 1);

  patternTreeTree = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternTreeEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
}