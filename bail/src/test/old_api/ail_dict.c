/*
 * Generated at Wed Aug 14 21:29:25 2002
 */

#include "ail_dict.h"

AFun AIL_afun0;
AFun AIL_afun1;
AFun AIL_afun2;
AFun AIL_afun3;
AFun AIL_afun4;
AFun AIL_afun5;
AFun AIL_afun6;
AFun AIL_afun7;
AFun AIL_afun8;
AFun AIL_afun9;
AFun AIL_afun10;
AFun AIL_afun11;
AFun AIL_afun12;
AFun AIL_afun13;
AFun AIL_afun14;
AFun AIL_afun15;
AFun AIL_afun16;
AFun AIL_afun17;
AFun AIL_afun18;
AFun AIL_afun19;
AFun AIL_afun20;
AFun AIL_afun21;
AFun AIL_afun22;
AFun AIL_afun23;
AFun AIL_afun24;
AFun AIL_afun25;
AFun AIL_afun26;
AFun AIL_afun27;
AFun AIL_afun28;
AFun AIL_afun29;
AFun AIL_afun30;
AFun AIL_afun31;
AFun AIL_afun32;
AFun AIL_afun33;
AFun AIL_afun34;
AFun AIL_afun35;
AFun AIL_afun36;

ATerm AIL_patternStatementListMany = NULL;
ATerm AIL_patternStatementListSingle = NULL;
ATerm AIL_patternStatementListEmpty = NULL;
ATerm AIL_patternProgramDefault = NULL;
ATerm AIL_patternArgLabel = NULL;
ATerm AIL_patternArgNumber = NULL;
ATerm AIL_patternArgAterm = NULL;
ATerm AIL_patternArgCode = NULL;
ATerm AIL_patternStatementInsStat = NULL;
ATerm AIL_patternStatementLabelStat = NULL;
ATerm AIL_patternInstructionArgIns = NULL;
ATerm AIL_patternInstructionNoargIns = NULL;
ATerm AIL_patternIdListMany = NULL;
ATerm AIL_patternIdListSingle = NULL;
ATerm AIL_patternIdListEmpty = NULL;
ATerm AIL_patternInstructionsDefault = NULL;

/*
 * AIL_afun0 = appl(x,x)
 * AIL_afun1 = prod(x,x,x)
 * AIL_afun2 = lit(x)
 * AIL_afun3 = "]"
 * AIL_afun4 = cf(x)
 * AIL_afun5 = opt(x)
 * AIL_afun6 = layout
 * AIL_afun7 = iter-star(x)
 * AIL_afun8 = sort(x)
 * AIL_afun9 = "Id"
 * AIL_afun10 = "["
 * AIL_afun11 = "Instructions"
 * AIL_afun12 = no-attrs
 * AIL_afun13 = list(x)
 * AIL_afun14 = "Instruction"
 * AIL_afun15 = attrs(x)
 * AIL_afun16 = term(x)
 * AIL_afun17 = cons(x)
 * AIL_afun18 = "noarg-ins"
 * AIL_afun19 = "Arg"
 * AIL_afun20 = "arg-ins"
 * AIL_afun21 = ":"
 * AIL_afun22 = "Label"
 * AIL_afun23 = "Statement"
 * AIL_afun24 = "label-stat"
 * AIL_afun25 = ";"
 * AIL_afun26 = "ins-stat"
 * AIL_afun27 = "Program"
 * AIL_afun28 = "code"
 * AIL_afun29 = "ATerm"
 * AIL_afun30 = "aterm"
 * AIL_afun31 = "Number"
 * AIL_afun32 = "number"
 * AIL_afun33 = "label"
 * AIL_afun34 = "Ann"
 * AIL_afun35 = "}"
 * AIL_afun36 = "{"
 *
 * AIL_patternStatementListMany = [<term>,<term>,<list>]
 * AIL_patternStatementListSingle = [<term>]
 * AIL_patternStatementListEmpty = []
 * AIL_patternProgramDefault = appl(prod([lit("{"),cf(opt(layout)),cf(iter-star(sort("Statement"))),cf(opt(layout)),lit("}"),cf(opt(layout)),cf(sort("Ann"))],cf(sort("Program")),no-attrs),[lit("{"),<term>,appl(list(cf(iter-star(sort("Statement")))),<term>),<term>,lit("}"),<term>,<term>])
 * AIL_patternArgLabel = appl(prod([cf(sort("Label"))],cf(sort("Arg")),attrs([term(cons("label"))])),[<term>])
 * AIL_patternArgNumber = appl(prod([cf(sort("Number"))],cf(sort("Arg")),attrs([term(cons("number"))])),[<term>])
 * AIL_patternArgAterm = appl(prod([cf(sort("ATerm"))],cf(sort("Arg")),attrs([term(cons("aterm"))])),[<term>])
 * AIL_patternArgCode = appl(prod([cf(sort("Program"))],cf(sort("Arg")),attrs([term(cons("code"))])),[<term>])
 * AIL_patternStatementInsStat = appl(prod([cf(sort("Instruction")),cf(opt(layout)),lit(";")],cf(sort("Statement")),attrs([term(cons("ins-stat"))])),[<term>,<term>,lit(";")])
 * AIL_patternStatementLabelStat = appl(prod([cf(sort("Label")),cf(opt(layout)),lit(":")],cf(sort("Statement")),attrs([term(cons("label-stat"))])),[<term>,<term>,lit(":")])
 * AIL_patternInstructionArgIns = appl(prod([cf(sort("Id")),cf(opt(layout)),cf(sort("Arg"))],cf(sort("Instruction")),attrs([term(cons("arg-ins"))])),[<term>,<term>,<term>])
 * AIL_patternInstructionNoargIns = appl(prod([cf(sort("Id"))],cf(sort("Instruction")),attrs([term(cons("noarg-ins"))])),[<term>])
 * AIL_patternIdListMany = [<term>,<term>,<list>]
 * AIL_patternIdListSingle = [<term>]
 * AIL_patternIdListEmpty = []
 * AIL_patternInstructionsDefault = appl(prod([lit("["),cf(opt(layout)),cf(iter-star(sort("Id"))),cf(opt(layout)),lit("]")],cf(sort("Instructions")),no-attrs),[lit("["),<term>,appl(list(cf(iter-star(sort("Id")))),<term>),<term>,lit("]")])
 *
 */

static ATermList _ail_dict = NULL;

#define _ail_dict_LEN 808

static char _ail_dict_baf[_ail_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x2B,0x80,0xE7,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x02,0x02,
0x03,0x04,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x6C,0x28,0x01,0x02,0x00,0x06,
0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,
0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,
0x27,0x28,0x29,0x2A,0x02,0x01,0x02,0x02,0x5B,0x5D,0x00,0x00,0x01,0x04,0x6C,0x69,
0x73,0x74,0x00,0x00,0x01,0x04,0x74,0x65,0x72,0x6D,0x00,0x00,0x01,0x01,0x78,0x00,
0x00,0x01,0x04,0x61,0x70,0x70,0x6C,0x02,0x00,0x0D,0x03,0x07,0x13,0x05,0x03,0x01,
0x00,0x05,0x04,0x70,0x72,0x6F,0x64,0x03,0x00,0x0B,0x02,0x01,0x05,0x02,0x0A,0x05,
0x03,0x15,0x12,0x05,0x03,0x6C,0x69,0x74,0x01,0x00,0x07,0x07,0x09,0x10,0x1B,0x1F,
0x29,0x2A,0x05,0x01,0x5D,0x00,0x01,0x01,0x02,0x63,0x66,0x01,0x00,0x0E,0x04,0x0E,
0x0D,0x0B,0x05,0x03,0x6F,0x70,0x74,0x01,0x00,0x02,0x02,0x0C,0x05,0x06,0x6C,0x61,
0x79,0x6F,0x75,0x74,0x00,0x00,0x01,0x09,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,
0x72,0x01,0x00,0x03,0x02,0x0E,0x05,0x04,0x73,0x6F,0x72,0x74,0x01,0x00,0x0B,0x0B,
0x11,0x0F,0x14,0x23,0x25,0x19,0x1C,0x21,0x28,0x1D,0x05,0x02,0x49,0x64,0x00,0x01,
0x01,0x01,0x5B,0x00,0x01,0x01,0x0C,0x49,0x6E,0x73,0x74,0x72,0x75,0x63,0x74,0x69,
0x6F,0x6E,0x73,0x00,0x01,0x01,0x08,0x6E,0x6F,0x2D,0x61,0x74,0x74,0x72,0x73,0x00,
0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x01,0x00,0x03,0x02,0x0A,0x05,0x0B,0x49,0x6E,
0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6F,0x6E,0x00,0x01,0x01,0x05,0x61,0x74,0x74,
0x72,0x73,0x01,0x00,0x09,0x02,0x01,0x05,0x04,0x74,0x65,0x72,0x6D,0x01,0x00,0x09,
0x02,0x17,0x05,0x04,0x63,0x6F,0x6E,0x73,0x01,0x00,0x09,0x09,0x18,0x1A,0x1E,0x20,
0x22,0x24,0x26,0x27,0x05,0x09,0x6E,0x6F,0x61,0x72,0x67,0x2D,0x69,0x6E,0x73,0x00,
0x01,0x01,0x03,0x41,0x72,0x67,0x00,0x01,0x01,0x07,0x61,0x72,0x67,0x2D,0x69,0x6E,
0x73,0x00,0x01,0x01,0x01,0x3A,0x00,0x01,0x01,0x05,0x4C,0x61,0x62,0x65,0x6C,0x00,
0x01,0x01,0x09,0x53,0x74,0x61,0x74,0x65,0x6D,0x65,0x6E,0x74,0x00,0x01,0x01,0x0A,
0x6C,0x61,0x62,0x65,0x6C,0x2D,0x73,0x74,0x61,0x74,0x00,0x01,0x01,0x01,0x3B,0x00,
0x01,0x01,0x08,0x69,0x6E,0x73,0x2D,0x73,0x74,0x61,0x74,0x00,0x01,0x01,0x07,0x50,
0x72,0x6F,0x67,0x72,0x61,0x6D,0x00,0x01,0x01,0x04,0x63,0x6F,0x64,0x65,0x00,0x01,
0x01,0x05,0x41,0x54,0x65,0x72,0x6D,0x00,0x01,0x01,0x05,0x61,0x74,0x65,0x72,0x6D,
0x00,0x01,0x01,0x06,0x4E,0x75,0x6D,0x62,0x65,0x72,0x00,0x01,0x01,0x06,0x6E,0x75,
0x6D,0x62,0x65,0x72,0x00,0x01,0x01,0x05,0x6C,0x61,0x62,0x65,0x6C,0x00,0x01,0x01,
0x03,0x41,0x6E,0x6E,0x00,0x01,0x01,0x01,0x7D,0x00,0x01,0x01,0x01,0x7B,0x00,0x01,
0x01,0x01,0x00,0x96,0x00,0xA6,0x22,0x02,0x91,0x15,0x01,0x90,0x98,0x01,0x70,0x18,
0xF8,0x21,0x0F,0x24,0x2E,0x28,0x41,0xCD,0x01,0x4D,0x86,0x0B,0x2C,0x26,0x38,0x0C,
0xF0,0xE8,0x11,0x0D,0x22,0x2A,0x24,0x10,0x53,0x20,0x8C,0x85,0x00,0x89,0x2A,0x22,
0x34,0x04,0xE8,0xF0,0x30,0xE2,0x62,0xC2,0xC1,0x8D,0x8D,0x07,0x0A,0x2E,0x24,0x3C,
0x08,0xF8,0xE0,0x08,0xC2,0x12,0x82,0x21,0x0C,0x4C,0x04,0x88,0x29,0x20,0x32,0x00,
0xE6,0x15,0x81,0x2C,0x0E,0x48,0x10,0xC9,0x00,0xA4,0x84,0x40,0xB0,0x05,0x20,0x47,
0x38,0x06,0x78,0x21,0x07,0xAA,0x25,0x1D,0x71,0x0A,0x0B,0x5C,0x24,0x88,0x90,0xD7,
0x10,0x6A,0xA1,0x11,0x57,0x10,0x4A,0xE3,0x02,0x0C,0x10,0xCE,0x8A,0xD4,0x40,0xB2,
0x01,0x9B,0x08,0xA1,0x20,0x4C,0x80,0x46,0xA1,0x01,0x90,0x01,0x45,0x3C,0x30,0x41,
0xB7,0x14,0x09,0xA1,0x85,0x51,0x07,0x6C,0xA0,0x8E,0x81,0x41,0x3C,0x08,0xC0,0x77,
0x1C,0x18,0xA1,0x84,0x27,0x64,0x82,0x34,0x0A,0x31,0xE1,0x41,0x0B,0xB8,0x11,0xD9,
0x0C,0x61,0xBB,0x2C,0x32,0xA0,0x50,0x8F,0x06,0x28,0x3D,0xC1,0x43,0x04,0x5E,0xC8,
0x82,0x28,0x14,0x43,0xC3,0x86,0x00,0xF1,0x20,0x50,0xFD,0xC4,0x0F,0xA8,0xDA,0x14,
0x41,0x44,0x1C,0xA8,0xAC,0x8C,0x28,0x02,0x14,0x01,0xF0,0x0F,0x01,0x38,0x63,0xC5,
0x14,0x78,0x80,0x8D,0x05,0x42,0x8C,0x71,0xC9,0x86,0x48,0x92,0x80,0x09,0x40,0x08,
0x9F,0x70,0x90,0x43,0x3C,0x68,0x98,0x34,0xF1,0x02,0x9E,0x1A,0x24,0xE2,0xCE,0x5C,
0x74,0x43,0x94,0x00,0x30,0xF7,0x05,0x24,0xF3,0xC6,0xC4,0x82,0x05,0xC8,0x41,0x08,
0x14,0x5D,0x03,0x90,0x74,0x01,0x46,0xD8,0x05,0xB8,0x18,0xA5,0x5A,0x2C,0x0A,0xF1,
0x06,0x5E,0x0E,0x24,0x89,0x78,0x82,0x2D,0x0C,0x45,0x85,0x08,0x9B,0x45,0x06,0xA0,
0x1D,0x70,0xD9,0x0E,0x06,0xA8,0x04,0x5A
};

void init_ail_dict()
{
  ATermList afuns, terms;

  _ail_dict = (ATermList)ATreadFromBinaryString(_ail_dict_baf, _ail_dict_LEN);

  ATprotect((ATerm *)&_ail_dict);

  afuns = (ATermList)ATelementAt(_ail_dict, 0);

  AIL_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  AIL_afun36 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt(_ail_dict, 1);

  AIL_patternStatementListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternStatementListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternStatementListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternProgramDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternArgLabel = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternArgNumber = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternArgAterm = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternArgCode = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternStatementInsStat = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternStatementLabelStat = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternInstructionArgIns = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternInstructionNoargIns = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternIdListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternIdListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternIdListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  AIL_patternInstructionsDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
