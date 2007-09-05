#ifndef _INT_H
#define _INT_H

/*{{{  includes */

#include <aterm1.h>
#include "Int_dict.h"

/*}}}  */

/*{{{  typedefs */

typedef struct _Numeral *Numeral;
typedef struct _Nat *Nat;
typedef struct _Int *Int;
typedef struct _Bool *Bool;

/*}}}  */

void initIntApi(void);

/*{{{  term conversion functions */

Numeral NumeralFromTerm(ATerm t);
ATerm NumeralToTerm(Numeral arg);
Nat NatFromTerm(ATerm t);
ATerm NatToTerm(Nat arg);
Int IntFromTerm(ATerm t);
ATerm IntToTerm(Int arg);
Bool BoolFromTerm(ATerm t);
ATerm BoolToTerm(Bool arg);

/*}}}  */
/*{{{  constructors */

Numeral makeNumeralNumeral(NatCon NatCon);
Nat makeNatNat(Numeral Numeral);
Nat makeNatMonus(Nat l, Nat r);
Nat makeNatDefault(Nat Nat);
Int makeIntInt(Nat Nat);
Int makeIntUnaryPlus(Nat Nat);
Int makeIntUnaryMinus(Nat Nat);
Int makeIntPlus(Int l, Int r);
Int makeIntMinus(Int l, Int r);
Int makeIntTimes(Int l, Int r);
Int makeIntDefault(Int Int);
Bool makeBoolGt(Int l, Int r);
Bool makeBoolGe(Int l, Int r);
Bool makeBoolLt(Int l, Int r);
Bool makeBoolLe(Int l, Int r);

/*}}}  */
/*{{{  equality functions */

ATbool isEqualNumeral(Numeral arg0, Numeral arg1);
ATbool isEqualNat(Nat arg0, Nat arg1);
ATbool isEqualInt(Int arg0, Int arg1);
ATbool isEqualBool(Bool arg0, Bool arg1);

/*}}}  */
/*{{{  Numeral accessors */

ATbool isValidNumeral(Numeral arg);
inline ATbool isNumeralNumeral(Numeral arg);
ATbool hasNumeralNatCon(Numeral arg);
NatCon getNumeralNatCon(Numeral arg);
Numeral setNumeralNatCon(Numeral arg, NatCon NatCon);

/*}}}  */
/*{{{  Nat accessors */

ATbool isValidNat(Nat arg);
inline ATbool isNatNat(Nat arg);
inline ATbool isNatMonus(Nat arg);
inline ATbool isNatDefault(Nat arg);
ATbool hasNatNumeral(Nat arg);
Numeral getNatNumeral(Nat arg);
Nat setNatNumeral(Nat arg, Numeral Numeral);
ATbool hasNatL(Nat arg);
Nat getNatL(Nat arg);
Nat setNatL(Nat arg, Nat l);
ATbool hasNatR(Nat arg);
Nat getNatR(Nat arg);
Nat setNatR(Nat arg, Nat r);
ATbool hasNatNat(Nat arg);
Nat getNatNat(Nat arg);
Nat setNatNat(Nat arg, Nat Nat);

/*}}}  */
/*{{{  Int accessors */

ATbool isValidInt(Int arg);
inline ATbool isIntInt(Int arg);
inline ATbool isIntUnaryPlus(Int arg);
inline ATbool isIntUnaryMinus(Int arg);
inline ATbool isIntPlus(Int arg);
inline ATbool isIntMinus(Int arg);
inline ATbool isIntTimes(Int arg);
inline ATbool isIntDefault(Int arg);
ATbool hasIntNat(Int arg);
Nat getIntNat(Int arg);
Int setIntNat(Int arg, Nat Nat);
ATbool hasIntL(Int arg);
Int getIntL(Int arg);
Int setIntL(Int arg, Int l);
ATbool hasIntR(Int arg);
Int getIntR(Int arg);
Int setIntR(Int arg, Int r);
ATbool hasIntInt(Int arg);
Int getIntInt(Int arg);
Int setIntInt(Int arg, Int Int);

/*}}}  */
/*{{{  Bool accessors */

ATbool isValidBool(Bool arg);
inline ATbool isBoolGt(Bool arg);
inline ATbool isBoolGe(Bool arg);
inline ATbool isBoolLt(Bool arg);
inline ATbool isBoolLe(Bool arg);
ATbool hasBoolL(Bool arg);
Int getBoolL(Bool arg);
Bool setBoolL(Bool arg, Int l);
ATbool hasBoolR(Bool arg);
Int getBoolR(Bool arg);
Bool setBoolR(Bool arg, Int r);

/*}}}  */
/*{{{  sort visitors */

Numeral visitNumeral(Numeral arg, NatCon (*acceptNatCon)(NatCon));
Nat visitNat(Nat arg, Numeral (*acceptNumeral)(Numeral));
Int visitInt(Int arg, Nat (*acceptNat)(Nat));
Bool visitBool(Bool arg, Int (*acceptL)(Int), Int (*acceptR)(Int));

/*}}}  */

#endif /* _INT_H */
