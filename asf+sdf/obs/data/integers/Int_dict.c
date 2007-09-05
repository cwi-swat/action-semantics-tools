/*
 * Generated at Mon May 27 16:57:43 2002
 */

#include "Int_dict.h"

AFun afun0;
AFun afun1;
AFun afun2;
AFun afun3;
AFun afun4;
AFun afun5;
AFun afun6;
AFun afun7;
AFun afun8;
AFun afun9;
AFun afun10;
AFun afun11;
AFun afun12;
AFun afun13;

ATerm patternBoolLe = NULL;
ATerm patternBoolLt = NULL;
ATerm patternBoolGe = NULL;
ATerm patternBoolGt = NULL;
ATerm patternIntDefault = NULL;
ATerm patternIntTimes = NULL;
ATerm patternIntMinus = NULL;
ATerm patternIntPlus = NULL;
ATerm patternIntUnaryMinus = NULL;
ATerm patternIntUnaryPlus = NULL;
ATerm patternIntInt = NULL;
ATerm patternNatDefault = NULL;
ATerm patternNatMonus = NULL;
ATerm patternNatNat = NULL;
ATerm patternNumeralNumeral = NULL;

/*
 * afun0 = Numeral(x)
 * afun1 = Nat(x)
 * afun2 = monus(x,x)
 * afun3 = default(x)
 * afun4 = Int(x)
 * afun5 = unary-plus(x)
 * afun6 = unary-minus(x)
 * afun7 = plus(x,x)
 * afun8 = minus(x,x)
 * afun9 = times(x,x)
 * afun10 = gt(x,x)
 * afun11 = ge(x,x)
 * afun12 = lt(x,x)
 * afun13 = le(x,x)
 *
 * patternBoolLe = le(<term>,<term>)
 * patternBoolLt = lt(<term>,<term>)
 * patternBoolGe = ge(<term>,<term>)
 * patternBoolGt = gt(<term>,<term>)
 * patternIntDefault = default(<term>)
 * patternIntTimes = times(<term>,<term>)
 * patternIntMinus = minus(<term>,<term>)
 * patternIntPlus = plus(<term>,<term>)
 * patternIntUnaryMinus = unary-minus(<term>)
 * patternIntUnaryPlus = unary-plus(<term>)
 * patternIntInt = Int(<term>)
 * patternNatDefault = default(<term>)
 * patternNatMonus = monus(<term>,<term>)
 * patternNatNat = Nat(<term>)
 * patternNumeralNumeral = Numeral(<term>)
 *
 */

static ATermList _Int_dict = NULL;

#define _Int_dict_LEN 315

static char _Int_dict_baf[_Int_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x13,0x3F,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x01,0x01,0x03,
0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x1F,0x0F,0x01,0x05,0x06,0x07,0x08,0x09,
0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x02,0x01,0x02,0x02,0x5B,0x5D,0x00,
0x00,0x01,0x04,0x74,0x65,0x72,0x6D,0x00,0x00,0x01,0x01,0x78,0x00,0x00,0x01,0x07,
0x4E,0x75,0x6D,0x65,0x72,0x61,0x6C,0x01,0x00,0x02,0x02,0x00,0x04,0x03,0x4E,0x61,
0x74,0x01,0x00,0x02,0x02,0x00,0x04,0x05,0x6D,0x6F,0x6E,0x75,0x73,0x02,0x00,0x02,
0x02,0x00,0x04,0x02,0x00,0x04,0x07,0x64,0x65,0x66,0x61,0x75,0x6C,0x74,0x01,0x00,
0x02,0x02,0x00,0x04,0x03,0x49,0x6E,0x74,0x01,0x00,0x02,0x02,0x00,0x04,0x0A,0x75,
0x6E,0x61,0x72,0x79,0x2D,0x70,0x6C,0x75,0x73,0x01,0x00,0x02,0x02,0x00,0x04,0x0B,
0x75,0x6E,0x61,0x72,0x79,0x2D,0x6D,0x69,0x6E,0x75,0x73,0x01,0x00,0x02,0x02,0x00,
0x04,0x04,0x70,0x6C,0x75,0x73,0x02,0x00,0x02,0x02,0x00,0x04,0x02,0x00,0x04,0x05,
0x6D,0x69,0x6E,0x75,0x73,0x02,0x00,0x02,0x02,0x00,0x04,0x02,0x00,0x04,0x05,0x74,
0x69,0x6D,0x65,0x73,0x02,0x00,0x02,0x02,0x00,0x04,0x02,0x00,0x04,0x02,0x67,0x74,
0x02,0x00,0x02,0x02,0x00,0x04,0x02,0x00,0x04,0x02,0x67,0x65,0x02,0x00,0x02,0x02,
0x00,0x04,0x02,0x00,0x04,0x02,0x6C,0x74,0x02,0x00,0x02,0x02,0x00,0x04,0x02,0x00,
0x04,0x02,0x6C,0x65,0x02,0x00,0x02,0x02,0x00,0x04,0x02,0x00,0x04,0x01,0x0B,0x41,
0x06,0x42,0x35,0x85,0x0A,0x22,0x25,0x44,0x09,0x88,0xE7,0x10,0xC1,0x28,0xA4,0x94,
0x11,0x4A,0x31,0xA5,0x08,0x32,0x88,0x59,0x40,0x1C,0xA8,0xB8,0x1D,0xE0,0x37,0x70,
0x0B,0x38,0x09,0xEC,0x00,0xCA,0x0E,0xAC,0x03,0x66,0x02,0xA3,0x00,0x5E,0x83,0x2D,
0x02,0x6A,0x08,0x94,0x07,0x20,0x3C,0x90,0x3A,0x22,0x80
};

void init_Int_dict()
{
  ATermList afuns, terms;

  _Int_dict = (ATermList)ATreadFromBinaryString(_Int_dict_baf, _Int_dict_LEN);

  ATprotect((ATerm *)&_Int_dict);

  afuns = (ATermList)ATelementAt(_Int_dict, 0);

  afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt(_Int_dict, 1);

  patternBoolLe = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternBoolLt = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternBoolGe = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternBoolGt = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternIntDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternIntTimes = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternIntMinus = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternIntPlus = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternIntUnaryMinus = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternIntUnaryPlus = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternIntInt = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNatDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNatMonus = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNatNat = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNumeralNumeral = ATgetFirst(terms);
  terms = ATgetNext(terms);
}