
#include "runtime.c"

static AN2Data
action11001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 4 then create */
  return ACC_create (an2_make_int (4), bindings);
}
static AN2Data
action110010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = an2_make_token ("input");
    register AN2Data d2 =
      ACC_GEN_give_the_datasort (AN2_CELL_TYPE, data, bindings);
/* Current action: provide "input" and give the cell_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "input" and give the cell_ then give binding_ */
  return ACC_give_binding (action110010010 (data, bindings), bindings);
}
static AN2Data
action1100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 4 then create then provide "input" and give the cell_ then give binding_ */
  return action11001001 (action11001000 (data, bindings), bindings);
}
static AN2Data
action1100101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 1 then create */
  return ACC_create (an2_make_int (1), bindings);
}
static AN2Data
action11001010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = an2_make_token ("output");
    register AN2Data d2 =
      ACC_GEN_give_the_datasort (AN2_CELL_TYPE, data, bindings);
/* Current action: provide "output" and give the cell_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100101001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "output" and give the cell_ then give binding_ */
  return ACC_give_binding (action11001010010 (data, bindings), bindings);
}
static AN2Data
action110010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 1 then create then provide "output" and give the cell_ then give binding_ */
  return action1100101001 (action1100101000 (data, bindings), bindings);
}
static AN2Data
action110010101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 0 then create */
  return ACC_create (an2_make_int (0), bindings);
}
static AN2Data
action1100101010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = an2_make_token ("repnr");
    register AN2Data d2 =
      ACC_GEN_give_the_datasort (AN2_CELL_TYPE, data, bindings);
/* Current action: provide "repnr" and give the cell_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110010101001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "repnr" and give the cell_ then give binding_ */
  return ACC_give_binding (action1100101010010 (data, bindings), bindings);
}
static AN2Data
action11001010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 0 then create then provide "repnr" and give the cell_ then give binding_ */
  return action110010101001 (action110010101000 (data, bindings), bindings);
}
static AN2Data
action110010101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 0 then create */
  return ACC_create (an2_make_int (0), bindings);
}
static AN2Data
action1100101010110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = an2_make_token ("rep");
    register AN2Data d2 =
      ACC_GEN_give_the_datasort (AN2_CELL_TYPE, data, bindings);
/* Current action: provide "rep" and give the cell_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110010101011 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "rep" and give the cell_ then give binding_ */
  return ACC_give_binding (action1100101010110 (data, bindings), bindings);
}
static AN2Data
action11001010101 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 0 then create then provide "rep" and give the cell_ then give binding_ */
  return action110010101011 (action110010101010 (data, bindings), bindings);
}
static AN2Data
action1100101010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11001010100 (data, bindings);
    register AN2Data d2 = action11001010101 (data, bindings);
/* Current action: provide 0 then create 
		then provide "repnr" and give the cell_ then give binding_ and provide 0 then create 
		then provide "rep" and give the cell_ then give binding_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110010101 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 0 then create 
     then provide "repnr" and give the cell_ then give binding_ and
     provide 0 then create 
     then provide "rep" and give the cell_ then give binding_ then give disjoint union _ */
  return ACC_give_disjoint_union (action1100101010 (data, bindings),
				  bindings);
}
static AN2Data
action11001010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action110010100 (data, bindings);
    register AN2Data d2 = action110010101 (data, bindings);
/* Current action: provide 1 then create 
		then provide "output" and give the cell_ then give binding_ and provide 0 then create 
		then provide "repnr" and give the cell_ then give binding_ and
		 provide 0 then create 
		then provide "rep" and give the cell_ then give binding_ then give disjoint union _ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 1 then create 
     then provide "output" and give the cell_ then give binding_ and
     provide 0 then create 
     then provide "repnr" and give the cell_ then give binding_ and
     provide 0 then create 
     then provide "rep" and give the cell_ then give binding_ then give disjoint union _ then give disjoint union _ */
  return ACC_give_disjoint_union (action11001010 (data, bindings), bindings);
}
static AN2Data
action110010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1100100 (data, bindings);
    register AN2Data d2 = action1100101 (data, bindings);
/* Current action: provide 4 then create 
		then provide "input" and give the cell_ then give binding_ and provide 1 then create 
		then provide "output" and give the cell_ then give binding_ and
		 provide 0 then create 
		then provide "repnr" and give the cell_ then give binding_ and
		 provide 0 then create 
		then provide "rep" and give the cell_ then give binding_ then give disjoint union _ then give disjoint union _ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 4 then create 
     then provide "input" and give the cell_ then give binding_ and
     provide 1 then create 
     then provide "output" and give the cell_ then give binding_ and
     provide 0 then create 
     then provide "repnr" and give the cell_ then give binding_ and
     provide 0 then create 
     then provide "rep" and give the cell_ then give binding_ then give disjoint union _ then give disjoint union _ then give disjoint union _ */
  return ACC_give_disjoint_union (action110010 (data, bindings), bindings);
}
static AN2Data
action1100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = action11001 (data, bindings);
/* Current action: give current bindings and provide 4 then create 
		then provide "input" and give the cell_ then give binding_ and
		 provide 1 then create 
		then provide "output" and give the cell_ then give binding_ and
		 provide 0 then create 
		then provide "repnr" and give the cell_ then give binding_ and
		 provide 0 then create 
		then provide "rep" and give the cell_ then give binding_ then give disjoint union _ then give disjoint union _ then give disjoint union _ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide 4 then create 
     then provide "input" and give the cell_ then give binding_ and
     provide 1 then create 
     then provide "output" and give the cell_ then give binding_ and
     provide 0 then create 
     then provide "repnr" and give the cell_ then give binding_ and
     provide 0 then create 
     then provide "rep" and give the cell_ then give binding_ then give disjoint union _ then give disjoint union _ then give disjoint union _ then give overriding_ */
  return ACC_give_overriding (action1100 (data, bindings), bindings);
}
static AN2Data
action11100010100000000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("input");
/* Current action: give current bindings and provide "input" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001010000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ */
  return ACC_give_bound (action11100010100000000 (data, bindings), bindings);
}
static AN2Data
action111000101000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110001010000000 (data, bindings),
				    bindings);
}
static AN2Data
action11100010100000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action111000101000000 (data, bindings), bindings);
}
static AN2Data
action1110001010000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11100010100000 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101000100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action111000101000101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action11100010100010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101000100 (data, bindings);
    register AN2Data d2 = action111000101000101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action11100010100010 (data, bindings), bindings);
}
static AN2Data
action111000101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return action1110001010001 (action1110001010000 (data, bindings), bindings);
}
static AN2Data
action11100010100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101000 (data, bindings);
    register AN2Data d2 = an2_make_int (0);
/* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action111000101010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action11100010101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101010000 (data, bindings);
    register AN2Data d2 = action111000101010001 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101010010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _>_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_greater_than (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action11100010101001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _>_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy */
  return action11100010101001 (action11100010101000 (data, bindings),
			       bindings);
}
static AN2Data
action111000101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy then provide true */
  return ACC_GEN_provide (an2_make_bool (1),
			  action1110001010100 (data, bindings), bindings);
}
static AN2Data
action11100010101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  if (!setChoicePoint ())
    return action111000101010 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return an2_make_bool (0);
    }
}
static AN2Data
action1110001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  return action11100010101 (action11100010100 (data, bindings), bindings);
}
static AN2Data
action1110001011000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action1110001011000001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide true then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (1), bindings);
}
static AN2Data
action111000101100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000000 (data, bindings);
    register AN2Data d2 = action1110001011000001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action111000101100001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy */
  return action111000101100001 (action111000101100000 (data, bindings),
				bindings);
}
static AN2Data
action1110001011000100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("rep");
/* Current action: give current bindings and provide "rep" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ */
  return ACC_give_bound (action1110001011000100000 (data, bindings),
			 bindings);
}
static AN2Data
action11100010110001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action111000101100010000 (data, bindings),
				    bindings);
}
static AN2Data
action11100010110001001000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("output");
/* Current action: give current bindings and provide "output" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ */
  return ACC_give_bound (action11100010110001001000 (data, bindings),
			 bindings);
}
static AN2Data
action111000101100010010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110001011000100100 (data,
							       bindings),
				    bindings);
}
static AN2Data
action11100010110001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action111000101100010010 (data, bindings), bindings);
}
static AN2Data
action1110001011000100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11100010110001000 (data, bindings);
    register AN2Data d2 = action11100010110001001 (data, bindings);
/* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ and give current bindings and provide "output" then give bound_ then give the cell_ then inspect */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update */
  return ACC_update (action1110001011000100 (data, bindings), bindings);
}
static AN2Data
action11100010110001100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return ACC_give_bound (action11100010110001100000 (data, bindings),
			 bindings);
}
static AN2Data
action111000101100011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110001011000110000 (data,
							       bindings),
				    bindings);
}
static AN2Data
action111000101100011001000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("input");
/* Current action: give current bindings and provide "input" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ */
  return ACC_give_bound (action111000101100011001000 (data, bindings),
			 bindings);
}
static AN2Data
action1110001011000110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11100010110001100100 (data,
								bindings),
				    bindings);
}
static AN2Data
action111000101100011001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action1110001011000110010 (data, bindings), bindings);
}
static AN2Data
action11100010110001100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101100011000 (data, bindings);
    register AN2Data d2 = action111000101100011001 (data, bindings);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ and give current bindings and provide "input" then give bound_ then give the cell_ then inspect */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update */
  return ACC_update (action11100010110001100 (data, bindings), bindings);
}
static AN2Data
action1110001011000111000010100000000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100001010000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return
    ACC_give_bound (action1110001011000111000010100000000 (data, bindings),
		    bindings);
}
static AN2Data
action11100010110001110000101000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action111000101100011100001010000000
				    (data, bindings), bindings);
}
static AN2Data
action1110001011000111000010100000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action11100010110001110000101000000 (data, bindings),
		      bindings);
}
static AN2Data
action111000101100011100001010000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111000010100000 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101000100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action11100010110001110000101000101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110001011000111000010100010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action11100010110001110000101000100 (data, bindings);
    register AN2Data d2 =
      action11100010110001110000101000101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100001010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action1110001011000111000010100010 (data, bindings),
			 bindings);
}
static AN2Data
action11100010110001110000101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return
    action111000101100011100001010001 (action111000101100011100001010000
				       (data, bindings), bindings);
}
static AN2Data
action1110001011000111000010100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11100010110001110000101000 (data, bindings);
    register AN2Data d2 = an2_make_int (0);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action11100010110001110000101010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110001011000111000010101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action11100010110001110000101010000 (data, bindings);
    register AN2Data d2 =
      action11100010110001110000101010001 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101010010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _>_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_greater_than (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action1110001011000111000010101001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action11100010110001110000101010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _>_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100001010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy */
  return
    action1110001011000111000010101001 (action1110001011000111000010101000
					(data, bindings), bindings);
}
static AN2Data
action11100010110001110000101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy then provide true */
  return ACC_GEN_provide (an2_make_bool (1),
			  action111000101100011100001010100 (data, bindings),
			  bindings);
}
static AN2Data
action1110001011000111000010101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  if (!setChoicePoint ())
    return action11100010110001110000101010 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return an2_make_bool (0);
    }
}
static AN2Data
action111000101100011100001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  return
    action1110001011000111000010101 (action1110001011000111000010100
				     (data, bindings), bindings);
}
static AN2Data
action111000101100011100001011000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action111000101100011100001011000001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide true then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (1), bindings);
}
static AN2Data
action11100010110001110000101100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action111000101100011100001011000000 (data, bindings);
    register AN2Data d2 =
      action111000101100011100001011000001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100001011000010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action11100010110001110000101100001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action111000101100011100001011000010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111000010110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy */
  return
    action11100010110001110000101100001 (action11100010110001110000101100000
					 (data, bindings), bindings);
}
static AN2Data
action111000101100011100001011000100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("output");
/* Current action: give current bindings and provide "output" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101100010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ */
  return
    ACC_give_bound (action111000101100011100001011000100000 (data, bindings),
		    bindings);
}
static AN2Data
action1110001011000111000010110001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11100010110001110000101100010000
				    (data, bindings), bindings);
}
static AN2Data
action111000101100011100001011000100100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("output");
/* Current action: give current bindings and provide "output" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101100010010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ */
  return
    ACC_give_bound (action111000101100011100001011000100100000
		    (data, bindings), bindings);
}
static AN2Data
action1110001011000111000010110001001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11100010110001110000101100010010000
				    (data, bindings), bindings);
}
static AN2Data
action111000101100011100001011000100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect */
  return
    ACC_inspect (action1110001011000111000010110001001000 (data, bindings),
		 bindings);
}
static AN2Data
action111000101100011100001011000100101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("rep");
/* Current action: give current bindings and provide "rep" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101100010010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ */
  return
    ACC_give_bound (action111000101100011100001011000100101000
		    (data, bindings), bindings);
}
static AN2Data
action1110001011000111000010110001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11100010110001110000101100010010100
				    (data, bindings), bindings);
}
static AN2Data
action111000101100011100001011000100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ then inspect */
  return
    ACC_inspect (action1110001011000111000010110001001010 (data, bindings),
		 bindings);
}
static AN2Data
action11100010110001110000101100010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action111000101100011100001011000100100 (data, bindings);
    register AN2Data d2 =
      action111000101100011100001011000100101 (data, bindings);
/* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111000010110001001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110001011000111000010110001001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action111000101100011100001011000100110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action1110001011000111000010110001001100 (data, bindings);
    register AN2Data d2 =
      action1110001011000111000010110001001101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101100010011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
  return
    ACC_give_plus (action111000101100011100001011000100110 (data, bindings),
		   bindings);
}
static AN2Data
action1110001011000111000010110001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
  return
    action11100010110001110000101100010011
    (action11100010110001110000101100010010 (data, bindings), bindings);
}
static AN2Data
action111000101100011100001011000100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action1110001011000111000010110001000 (data, bindings);
    register AN2Data d2 =
      action1110001011000111000010110001001 (data, bindings);
/* Current action: give current bindings and provide "output" then give bound_ then give the cell_ and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101100010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update */
  return ACC_update (action111000101100011100001011000100 (data, bindings),
		     bindings);
}
static AN2Data
action111000101100011100001011000110000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101100011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return
    ACC_give_bound (action111000101100011100001011000110000 (data, bindings),
		    bindings);
}
static AN2Data
action1110001011000111000010110001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11100010110001110000101100011000
				    (data, bindings), bindings);
}
static AN2Data
action111000101100011100001011000110100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101100011010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return
    ACC_give_bound (action111000101100011100001011000110100000
		    (data, bindings), bindings);
}
static AN2Data
action1110001011000111000010110001101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11100010110001110000101100011010000
				    (data, bindings), bindings);
}
static AN2Data
action111000101100011100001011000110100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect */
  return
    ACC_inspect (action1110001011000111000010110001101000 (data, bindings),
		 bindings);
}
static AN2Data
action11100010110001110000101100011010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action111000101100011100001011000110100 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111000010110001101100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110001011000111000010110001101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action111000101100011100001011000110110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action1110001011000111000010110001101100 (data, bindings);
    register AN2Data d2 =
      action1110001011000111000010110001101101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101100011011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return
    ACC_give_minus (action111000101100011100001011000110110 (data, bindings),
		    bindings);
}
static AN2Data
action1110001011000111000010110001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return
    action11100010110001110000101100011011
    (action11100010110001110000101100011010 (data, bindings), bindings);
}
static AN2Data
action111000101100011100001011000110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action1110001011000111000010110001100 (data, bindings);
    register AN2Data d2 =
      action1110001011000111000010110001101 (data, bindings);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101100011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return ACC_update (action111000101100011100001011000110 (data, bindings),
		     bindings);
}
static AN2Data
action1110001011000111000010110001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action11100010110001110000101100010 (data, bindings);
    register AN2Data d2 =
      action11100010110001110000101100011 (data, bindings);
    /* Current action: give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100001011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return
    action1110001011000111000010110001 (action1110001011000111000010110000
					(data, bindings), bindings);
}
static AN2Data
action111000101100011100001011001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ */
  return
    ACC_give_provide (ACC_GEN_give_the_datasort
		      (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action11100010110001110000101100100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ */
  return ACC_give_provide (ACC_give_current_bindings (data, bindings),
			   bindings);
}
static AN2Data
action1110001011000111000010110010010100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100001011001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ */
  return
    ACC_give_bound (action1110001011000111000010110010010100 (data, bindings),
		    bindings);
}
static AN2Data
action11100010110001110000101100100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
  return ACC_GEN_give_the_datasort (AN2_ACTION_TYPE,
				    action111000101100011100001011001001010
				    (data, bindings), bindings);
}
static AN2Data
action1110001011000111000010110010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action11100010110001110000101100100100 (data, bindings);
    register AN2Data d2 =
      action11100010110001110000101100100101 (data, bindings);
/* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100001011001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
  return
    ACC_give_hence (action1110001011000111000010110010010 (data, bindings),
		    bindings);
}
static AN2Data
action11100010110001110000101100100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action111000101100011100001011001000 (data, bindings);
    register AN2Data d2 =
      action111000101100011100001011001001 (data, bindings);
/* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111000010110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ */
  return ACC_give_then (action11100010110001110000101100100 (data, bindings),
			bindings);
}
static AN2Data
action111000101100011100001011001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
  return ACC_enact (action1110001011000111000010110010 (data, bindings),
		    bindings);
}
static AN2Data
action11100010110001110000101100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101100011100001011000 (data, bindings);
    register AN2Data d2 = action111000101100011100001011001 (data, bindings);
    /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action11100010110001110000101101001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide false then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (0), bindings);
}
static AN2Data
action1110001011000111000010110100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action11100010110001110000101101000 (data, bindings);
    register AN2Data d2 =
      action11100010110001110000101101001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110000101101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action1110001011000111000010110101 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action11100010110001110000101101010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100001011010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy */
  return
    action1110001011000111000010110101 (action1110001011000111000010110100
					(data, bindings), bindings);
}
static AN2Data
action11100010110001110000101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (),
			  action111000101100011100001011010 (data, bindings),
			  bindings);
}
static AN2Data
action1110001011000111000010110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact otherwise select(give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) */
  if (!setChoicePoint ())
    return action11100010110001110000101100 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action11100010110001110000101101 (data, bindings);
    }
}
static AN2Data
action1110001011000111000010111 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide () then raise */
  return ACC_raise (an2_make_empty (), bindings);
}
static AN2Data
action111000101100011100001011 (AN2Data data, AN2Data bindings)
{
  /* Current action: select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  if (!setChoicePoint ())
    return action1110001011000111000010110 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action1110001011000111000010111 (data, bindings);
    }
}
static AN2Data
action11100010110001110000101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  return
    action111000101100011100001011 (action111000101100011100001010
				    (data, bindings), bindings);
}
static AN2Data
action1110001011000111000010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = an2_make_token ("unf");
    register AN2Data d2 = ACC_make_action (action11100010110001110000101, 0);
/* Current action: provide "unf" and provide give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
		and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
		and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ */
  return ACC_give_binding (action1110001011000111000010 (data, bindings),
			   bindings);
}
static AN2Data
action11100010110001110000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = action111000101100011100001 (data, bindings);
/* Current action: give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
		and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
		and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ */
  return ACC_give_overriding (action11100010110001110000 (data, bindings),
			      bindings);
}
static AN2Data
action111000101100011100100000000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110010000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return ACC_give_bound (action111000101100011100100000000 (data, bindings),
			 bindings);
}
static AN2Data
action1110001011000111001000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11100010110001110010000000 (data,
								      bindings),
				    bindings);
}
static AN2Data
action111000101100011100100000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action1110001011000111001000000 (data, bindings),
		      bindings);
}
static AN2Data
action11100010110001110010000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101100011100100000 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001000100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110001011000111001000101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action111000101100011100100010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111001000100 (data, bindings);
    register AN2Data d2 = action1110001011000111001000101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action111000101100011100100010 (data, bindings),
			 bindings);
}
static AN2Data
action1110001011000111001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return
    action11100010110001110010001 (action11100010110001110010000
				   (data, bindings), bindings);
}
static AN2Data
action111000101100011100100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111001000 (data, bindings);
    register AN2Data d2 = an2_make_int (0);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110001011000111001010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action111000101100011100101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111001010000 (data, bindings);
    register AN2Data d2 = action1110001011000111001010001 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001010010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _>_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_greater_than (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action111000101100011100101001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111001010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _>_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy */
  return
    action111000101100011100101001 (action111000101100011100101000
				    (data, bindings), bindings);
}
static AN2Data
action1110001011000111001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy then provide true */
  return ACC_GEN_provide (an2_make_bool (1),
			  action11100010110001110010100 (data, bindings),
			  bindings);
}
static AN2Data
action111000101100011100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  if (!setChoicePoint ())
    return action1110001011000111001010 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return an2_make_bool (0);
    }
}
static AN2Data
action11100010110001110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  return
    action111000101100011100101 (action111000101100011100100 (data, bindings),
				 bindings);
}
static AN2Data
action11100010110001110011000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action11100010110001110011000001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide true then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (1), bindings);
}
static AN2Data
action1110001011000111001100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11100010110001110011000000 (data, bindings);
    register AN2Data d2 = action11100010110001110011000001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110011000010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action1110001011000111001100001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11100010110001110011000010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy */
  return
    action1110001011000111001100001 (action1110001011000111001100000
				     (data, bindings), bindings);
}
static AN2Data
action11100010110001110011000100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("output");
/* Current action: give current bindings and provide "output" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001100010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ */
  return ACC_give_bound (action11100010110001110011000100000 (data, bindings),
			 bindings);
}
static AN2Data
action111000101100011100110001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110001011000111001100010000 (data,
									bindings),
				    bindings);
}
static AN2Data
action11100010110001110011000100100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("output");
/* Current action: give current bindings and provide "output" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001100010010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ */
  return
    ACC_give_bound (action11100010110001110011000100100000 (data, bindings),
		    bindings);
}
static AN2Data
action111000101100011100110001001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110001011000111001100010010000
				    (data, bindings), bindings);
}
static AN2Data
action11100010110001110011000100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action111000101100011100110001001000 (data, bindings),
		      bindings);
}
static AN2Data
action11100010110001110011000100101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("rep");
/* Current action: give current bindings and provide "rep" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001100010010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ */
  return
    ACC_give_bound (action11100010110001110011000100101000 (data, bindings),
		    bindings);
}
static AN2Data
action111000101100011100110001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110001011000111001100010010100
				    (data, bindings), bindings);
}
static AN2Data
action11100010110001110011000100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action111000101100011100110001001010 (data, bindings),
		      bindings);
}
static AN2Data
action1110001011000111001100010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action11100010110001110011000100100 (data, bindings);
    register AN2Data d2 =
      action11100010110001110011000100101 (data, bindings);
/* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100110001001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action111000101100011100110001001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action11100010110001110011000100110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action111000101100011100110001001100 (data, bindings);
    register AN2Data d2 =
      action111000101100011100110001001101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001100010011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
  return ACC_give_plus (action11100010110001110011000100110 (data, bindings),
			bindings);
}
static AN2Data
action111000101100011100110001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
  return
    action1110001011000111001100010011 (action1110001011000111001100010010
					(data, bindings), bindings);
}
static AN2Data
action11100010110001110011000100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101100011100110001000 (data, bindings);
    register AN2Data d2 = action111000101100011100110001001 (data, bindings);
/* Current action: give current bindings and provide "output" then give bound_ then give the cell_ and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001100010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update */
  return ACC_update (action11100010110001110011000100 (data, bindings),
		     bindings);
}
static AN2Data
action11100010110001110011000110000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001100011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return ACC_give_bound (action11100010110001110011000110000 (data, bindings),
			 bindings);
}
static AN2Data
action111000101100011100110001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110001011000111001100011000 (data,
									bindings),
				    bindings);
}
static AN2Data
action11100010110001110011000110100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001100011010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return
    ACC_give_bound (action11100010110001110011000110100000 (data, bindings),
		    bindings);
}
static AN2Data
action111000101100011100110001101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110001011000111001100011010000
				    (data, bindings), bindings);
}
static AN2Data
action11100010110001110011000110100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action111000101100011100110001101000 (data, bindings),
		      bindings);
}
static AN2Data
action1110001011000111001100011010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action11100010110001110011000110100 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100110001101100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action111000101100011100110001101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action11100010110001110011000110110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action111000101100011100110001101100 (data, bindings);
    register AN2Data d2 =
      action111000101100011100110001101101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001100011011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action11100010110001110011000110110 (data, bindings),
			 bindings);
}
static AN2Data
action111000101100011100110001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return
    action1110001011000111001100011011 (action1110001011000111001100011010
					(data, bindings), bindings);
}
static AN2Data
action11100010110001110011000110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101100011100110001100 (data, bindings);
    register AN2Data d2 = action111000101100011100110001101 (data, bindings);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001100011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return ACC_update (action11100010110001110011000110 (data, bindings),
		     bindings);
}
static AN2Data
action111000101100011100110001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111001100010 (data, bindings);
    register AN2Data d2 = action1110001011000111001100011 (data, bindings);
    /* Current action: give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return
    action111000101100011100110001 (action111000101100011100110000
				    (data, bindings), bindings);
}
static AN2Data
action11100010110001110011001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ */
  return
    ACC_give_provide (ACC_GEN_give_the_datasort
		      (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action1110001011000111001100100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ */
  return ACC_give_provide (ACC_give_current_bindings (data, bindings),
			   bindings);
}
static AN2Data
action111000101100011100110010010100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110011001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ */
  return
    ACC_give_bound (action111000101100011100110010010100 (data, bindings),
		    bindings);
}
static AN2Data
action1110001011000111001100100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
  return ACC_GEN_give_the_datasort (AN2_ACTION_TYPE,
				    action11100010110001110011001001010 (data,
									 bindings),
				    bindings);
}
static AN2Data
action111000101100011100110010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111001100100100 (data, bindings);
    register AN2Data d2 = action1110001011000111001100100101 (data, bindings);
/* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110011001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
  return ACC_give_hence (action111000101100011100110010010 (data, bindings),
			 bindings);
}
static AN2Data
action1110001011000111001100100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11100010110001110011001000 (data, bindings);
    register AN2Data d2 = action11100010110001110011001001 (data, bindings);
/* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011100110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ */
  return ACC_give_then (action1110001011000111001100100 (data, bindings),
			bindings);
}
static AN2Data
action11100010110001110011001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
  return ACC_enact (action111000101100011100110010 (data, bindings),
		    bindings);
}
static AN2Data
action1110001011000111001100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11100010110001110011000 (data, bindings);
    register AN2Data d2 = action11100010110001110011001 (data, bindings);
    /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action1110001011000111001101001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide false then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (0), bindings);
}
static AN2Data
action111000101100011100110100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111001101000 (data, bindings);
    register AN2Data d2 = action1110001011000111001101001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111001101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action111000101100011100110101 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111001101010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110011010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy */
  return
    action111000101100011100110101 (action111000101100011100110100
				    (data, bindings), bindings);
}
static AN2Data
action1110001011000111001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (),
			  action11100010110001110011010 (data, bindings),
			  bindings);
}
static AN2Data
action111000101100011100110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact otherwise select(give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) */
  if (!setChoicePoint ())
    return action1110001011000111001100 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action1110001011000111001101 (data, bindings);
    }
}
static AN2Data
action111000101100011100111 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide () then raise */
  return ACC_raise (an2_make_empty (), bindings);
}
static AN2Data
action11100010110001110011 (AN2Data data, AN2Data bindings)
{
  /* Current action: select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  if (!setChoicePoint ())
    return action111000101100011100110 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action111000101100011100111 (data, bindings);
    }
}
static AN2Data
action1110001011000111001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  return
    action11100010110001110011 (action11100010110001110010 (data, bindings),
				bindings);
}
static AN2Data
action111000101100011100 (AN2Data data, AN2Data bindings)
{
  {
    AN2Data new_bindings = action1110001011000111000 (data, bindings);
    /* Current action: give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
    if (an2_has_type (new_bindings, AN2_BINDINGS_TYPE))
      return action1110001011000111001 (data, new_bindings);
    ACC_throw_exception (an2_make_empty ());
  }
}
static AN2Data
action1110001011000111010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action1110001011000111010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "break" then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_token ("break"), bindings);
}
static AN2Data
action111000101100011101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111010000 (data, bindings);
    register AN2Data d2 = action1110001011000111010001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111010010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action111000101100011101001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001110100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy */
  return
    action111000101100011101001 (action111000101100011101000 (data, bindings),
				 bindings);
}
static AN2Data
action1110001011000111010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (),
			  action11100010110001110100 (data, bindings),
			  bindings);
}
static AN2Data
action111000101100011101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
  if (!setChoicePoint ())
    return action1110001011000111010 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return ACC_raise (data, bindings);
    }
}
static AN2Data
action11100010110001110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
  if (!setChoicePoint ())
    return action111000101100011100 (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      if (!setChoicePoint ())
	return action111000101100011101 (data, bindings);
      else
	ACC_throw_exception (ACC_merge (d, ACC_catch_exception ()));
    }
}
static AN2Data
action111000101100011110000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("input");
/* Current action: give current bindings and provide "input" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001111000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ */
  return ACC_give_bound (action111000101100011110000 (data, bindings),
			 bindings);
}
static AN2Data
action1110001011000111100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11100010110001111000 (data,
								bindings),
				    bindings);
}
static AN2Data
action111000101100011110100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("input");
/* Current action: give current bindings and provide "input" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001111010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ */
  return ACC_give_bound (action111000101100011110100000 (data, bindings),
			 bindings);
}
static AN2Data
action1110001011000111101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11100010110001111010000 (data,
								   bindings),
				    bindings);
}
static AN2Data
action111000101100011110100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action1110001011000111101000 (data, bindings),
		      bindings);
}
static AN2Data
action11100010110001111010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101100011110100 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000111101100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110001011000111101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action111000101100011110110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111101100 (data, bindings);
    register AN2Data d2 = action1110001011000111101101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001111011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action111000101100011110110 (data, bindings),
			 bindings);
}
static AN2Data
action1110001011000111101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return
    action11100010110001111011 (action11100010110001111010 (data, bindings),
				bindings);
}
static AN2Data
action111000101100011110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000111100 (data, bindings);
    register AN2Data d2 = action1110001011000111101 (data, bindings);
/* Current action: give current bindings and provide "input" then give bound_ then give the cell_ and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001111 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return ACC_update (action111000101100011110 (data, bindings), bindings);
}
static AN2Data
action1110001011000111 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11100010110001110 (data, bindings);
    register AN2Data d2 = action11100010110001111 (data, bindings);
    /* Current action: give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101100011 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000110 (data, bindings);
    register AN2Data d2 = action1110001011000111 (data, bindings);
    /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101100010 (data, bindings);
    register AN2Data d2 = action111000101100011 (data, bindings);
    /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return action11100010110001 (action11100010110000 (data, bindings),
			       bindings);
}
static AN2Data
action1110001011001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ */
  return
    ACC_give_provide (ACC_GEN_give_the_datasort
		      (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action111000101100100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ */
  return ACC_give_provide (ACC_give_current_bindings (data, bindings),
			   bindings);
}
static AN2Data
action11100010110010010100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ */
  return ACC_give_bound (action11100010110010010100 (data, bindings),
			 bindings);
}
static AN2Data
action111000101100100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
  return ACC_GEN_give_the_datasort (AN2_ACTION_TYPE,
				    action1110001011001001010 (data,
							       bindings),
				    bindings);
}
static AN2Data
action11100010110010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101100100100 (data, bindings);
    register AN2Data d2 = action111000101100100101 (data, bindings);
/* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
  return ACC_give_hence (action11100010110010010 (data, bindings), bindings);
}
static AN2Data
action111000101100100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011001000 (data, bindings);
    register AN2Data d2 = action1110001011001001 (data, bindings);
/* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100010110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ */
  return ACC_give_then (action111000101100100 (data, bindings), bindings);
}
static AN2Data
action1110001011001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
  return ACC_enact (action11100010110010 (data, bindings), bindings);
}
static AN2Data
action111000101100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110001011000 (data, bindings);
    register AN2Data d2 = action1110001011001 (data, bindings);
    /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action111000101101001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide false then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (0), bindings);
}
static AN2Data
action11100010110100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101101000 (data, bindings);
    register AN2Data d2 = action111000101101001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111000101101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action11100010110101 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111000101101010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001011010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy */
  return action11100010110101 (action11100010110100 (data, bindings),
			       bindings);
}
static AN2Data
action111000101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (),
			  action1110001011010 (data, bindings), bindings);
}
static AN2Data
action11100010110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact otherwise select(give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) */
  if (!setChoicePoint ())
    return action111000101100 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action111000101101 (data, bindings);
    }
}
static AN2Data
action11100010111 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide () then raise */
  return ACC_raise (an2_make_empty (), bindings);
}
static AN2Data
action1110001011 (AN2Data data, AN2Data bindings)
{
  /* Current action: select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  if (!setChoicePoint ())
    return action11100010110 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action11100010111 (data, bindings);
    }
}
static AN2Data
action111000101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  return action1110001011 (action1110001010 (data, bindings), bindings);
}
static AN2Data
action11100010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = an2_make_token ("unf");
    register AN2Data d2 = ACC_make_action (action111000101, 0);
/* Current action: provide "unf" and provide give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
		and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
		and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
		and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
		and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
		and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
		and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
		and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
		and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide ("unf", give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ */
  return ACC_give_binding (action11100010 (data, bindings), bindings);
}
static AN2Data
action111000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = action1110001 (data, bindings);
/* Current action: give current bindings and provide ("unf", give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
		and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
		and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
		and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
		and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
		and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
		and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
		and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
		and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide ("unf", give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ */
  return ACC_give_overriding (action111000 (data, bindings), bindings);
}
static AN2Data
action1110100000000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("input");
/* Current action: give current bindings and provide "input" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111010000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ */
  return ACC_give_bound (action1110100000000 (data, bindings), bindings);
}
static AN2Data
action11101000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action111010000000 (data, bindings),
				    bindings);
}
static AN2Data
action1110100000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action11101000000 (data, bindings), bindings);
}
static AN2Data
action111010000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110100000 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101000100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action11101000101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110100010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101000100 (data, bindings);
    register AN2Data d2 = action11101000101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action1110100010 (data, bindings), bindings);
}
static AN2Data
action11101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return action111010001 (action111010000 (data, bindings), bindings);
}
static AN2Data
action1110100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101000 (data, bindings);
    register AN2Data d2 = an2_make_int (0);
/* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action11101010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101010000 (data, bindings);
    register AN2Data d2 = action11101010001 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101010010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _>_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_greater_than (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action1110101001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _>_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy */
  return action1110101001 (action1110101000 (data, bindings), bindings);
}
static AN2Data
action11101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy then provide true */
  return ACC_GEN_provide (an2_make_bool (1), action111010100 (data, bindings),
			  bindings);
}
static AN2Data
action1110101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  if (!setChoicePoint ())
    return action11101010 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return an2_make_bool (0);
    }
}
static AN2Data
action111010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  return action1110101 (action1110100 (data, bindings), bindings);
}
static AN2Data
action111011000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action111011000001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide true then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (1), bindings);
}
static AN2Data
action11101100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000000 (data, bindings);
    register AN2Data d2 = action111011000001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action11101100001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy */
  return action11101100001 (action11101100000 (data, bindings), bindings);
}
static AN2Data
action111011000100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("rep");
/* Current action: give current bindings and provide "rep" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ */
  return ACC_give_bound (action111011000100000 (data, bindings), bindings);
}
static AN2Data
action1110110001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11101100010000 (data, bindings),
				    bindings);
}
static AN2Data
action1110110001001000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("output");
/* Current action: give current bindings and provide "output" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ */
  return ACC_give_bound (action1110110001001000 (data, bindings), bindings);
}
static AN2Data
action11101100010010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action111011000100100 (data, bindings),
				    bindings);
}
static AN2Data
action1110110001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action11101100010010 (data, bindings), bindings);
}
static AN2Data
action111011000100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001000 (data, bindings);
    register AN2Data d2 = action1110110001001 (data, bindings);
/* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ and give current bindings and provide "output" then give bound_ then give the cell_ then inspect */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update */
  return ACC_update (action111011000100 (data, bindings), bindings);
}
static AN2Data
action1110110001100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return ACC_give_bound (action1110110001100000 (data, bindings), bindings);
}
static AN2Data
action11101100011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action111011000110000 (data, bindings),
				    bindings);
}
static AN2Data
action11101100011001000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("input");
/* Current action: give current bindings and provide "input" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ */
  return ACC_give_bound (action11101100011001000 (data, bindings), bindings);
}
static AN2Data
action111011000110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110110001100100 (data, bindings),
				    bindings);
}
static AN2Data
action11101100011001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action111011000110010 (data, bindings), bindings);
}
static AN2Data
action1110110001100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100011000 (data, bindings);
    register AN2Data d2 = action11101100011001 (data, bindings);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ and give current bindings and provide "input" then give bound_ then give the cell_ then inspect */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update */
  return ACC_update (action1110110001100 (data, bindings), bindings);
}
static AN2Data
action111011000111000010100000000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100001010000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return ACC_give_bound (action111011000111000010100000000 (data, bindings),
			 bindings);
}
static AN2Data
action1110110001110000101000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11101100011100001010000000 (data,
								      bindings),
				    bindings);
}
static AN2Data
action111011000111000010100000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action1110110001110000101000000 (data, bindings),
		      bindings);
}
static AN2Data
action11101100011100001010000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111000010100000 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101000100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110110001110000101000101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action111011000111000010100010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110000101000100 (data, bindings);
    register AN2Data d2 = action1110110001110000101000101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100001010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action111011000111000010100010 (data, bindings),
			 bindings);
}
static AN2Data
action1110110001110000101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return
    action11101100011100001010001 (action11101100011100001010000
				   (data, bindings), bindings);
}
static AN2Data
action111011000111000010100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110000101000 (data, bindings);
    register AN2Data d2 = an2_make_int (0);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110110001110000101010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action111011000111000010101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110000101010000 (data, bindings);
    register AN2Data d2 = action1110110001110000101010001 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101010010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _>_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_greater_than (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action111011000111000010101001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110000101010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _>_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100001010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy */
  return
    action111011000111000010101001 (action111011000111000010101000
				    (data, bindings), bindings);
}
static AN2Data
action1110110001110000101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy then provide true */
  return ACC_GEN_provide (an2_make_bool (1),
			  action11101100011100001010100 (data, bindings),
			  bindings);
}
static AN2Data
action111011000111000010101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  if (!setChoicePoint ())
    return action1110110001110000101010 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return an2_make_bool (0);
    }
}
static AN2Data
action11101100011100001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  return
    action111011000111000010101 (action111011000111000010100 (data, bindings),
				 bindings);
}
static AN2Data
action11101100011100001011000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action11101100011100001011000001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide true then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (1), bindings);
}
static AN2Data
action1110110001110000101100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100011100001011000000 (data, bindings);
    register AN2Data d2 = action11101100011100001011000001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100001011000010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action1110110001110000101100001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100011100001011000010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111000010110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy */
  return
    action1110110001110000101100001 (action1110110001110000101100000
				     (data, bindings), bindings);
}
static AN2Data
action11101100011100001011000100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("output");
/* Current action: give current bindings and provide "output" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101100010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ */
  return ACC_give_bound (action11101100011100001011000100000 (data, bindings),
			 bindings);
}
static AN2Data
action111011000111000010110001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110110001110000101100010000 (data,
									bindings),
				    bindings);
}
static AN2Data
action11101100011100001011000100100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("output");
/* Current action: give current bindings and provide "output" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101100010010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ */
  return
    ACC_give_bound (action11101100011100001011000100100000 (data, bindings),
		    bindings);
}
static AN2Data
action111011000111000010110001001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110110001110000101100010010000
				    (data, bindings), bindings);
}
static AN2Data
action11101100011100001011000100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action111011000111000010110001001000 (data, bindings),
		      bindings);
}
static AN2Data
action11101100011100001011000100101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("rep");
/* Current action: give current bindings and provide "rep" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101100010010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ */
  return
    ACC_give_bound (action11101100011100001011000100101000 (data, bindings),
		    bindings);
}
static AN2Data
action111011000111000010110001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110110001110000101100010010100
				    (data, bindings), bindings);
}
static AN2Data
action11101100011100001011000100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action111011000111000010110001001010 (data, bindings),
		      bindings);
}
static AN2Data
action1110110001110000101100010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action11101100011100001011000100100 (data, bindings);
    register AN2Data d2 =
      action11101100011100001011000100101 (data, bindings);
/* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111000010110001001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action111011000111000010110001001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action11101100011100001011000100110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action111011000111000010110001001100 (data, bindings);
    register AN2Data d2 =
      action111011000111000010110001001101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101100010011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
  return ACC_give_plus (action11101100011100001011000100110 (data, bindings),
			bindings);
}
static AN2Data
action111011000111000010110001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
  return
    action1110110001110000101100010011 (action1110110001110000101100010010
					(data, bindings), bindings);
}
static AN2Data
action11101100011100001011000100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111000010110001000 (data, bindings);
    register AN2Data d2 = action111011000111000010110001001 (data, bindings);
/* Current action: give current bindings and provide "output" then give bound_ then give the cell_ and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101100010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update */
  return ACC_update (action11101100011100001011000100 (data, bindings),
		     bindings);
}
static AN2Data
action11101100011100001011000110000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101100011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return ACC_give_bound (action11101100011100001011000110000 (data, bindings),
			 bindings);
}
static AN2Data
action111011000111000010110001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110110001110000101100011000 (data,
									bindings),
				    bindings);
}
static AN2Data
action11101100011100001011000110100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101100011010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return
    ACC_give_bound (action11101100011100001011000110100000 (data, bindings),
		    bindings);
}
static AN2Data
action111011000111000010110001101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110110001110000101100011010000
				    (data, bindings), bindings);
}
static AN2Data
action11101100011100001011000110100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action111011000111000010110001101000 (data, bindings),
		      bindings);
}
static AN2Data
action1110110001110000101100011010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action11101100011100001011000110100 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111000010110001101100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action111011000111000010110001101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action11101100011100001011000110110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 =
      action111011000111000010110001101100 (data, bindings);
    register AN2Data d2 =
      action111011000111000010110001101101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101100011011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action11101100011100001011000110110 (data, bindings),
			 bindings);
}
static AN2Data
action111011000111000010110001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return
    action1110110001110000101100011011 (action1110110001110000101100011010
					(data, bindings), bindings);
}
static AN2Data
action11101100011100001011000110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111000010110001100 (data, bindings);
    register AN2Data d2 = action111011000111000010110001101 (data, bindings);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101100011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return ACC_update (action11101100011100001011000110 (data, bindings),
		     bindings);
}
static AN2Data
action111011000111000010110001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110000101100010 (data, bindings);
    register AN2Data d2 = action1110110001110000101100011 (data, bindings);
    /* Current action: give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100001011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return
    action111011000111000010110001 (action111011000111000010110000
				    (data, bindings), bindings);
}
static AN2Data
action11101100011100001011001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ */
  return
    ACC_give_provide (ACC_GEN_give_the_datasort
		      (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action1110110001110000101100100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ */
  return ACC_give_provide (ACC_give_current_bindings (data, bindings),
			   bindings);
}
static AN2Data
action111011000111000010110010010100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100001011001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ */
  return
    ACC_give_bound (action111011000111000010110010010100 (data, bindings),
		    bindings);
}
static AN2Data
action1110110001110000101100100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
  return ACC_GEN_give_the_datasort (AN2_ACTION_TYPE,
				    action11101100011100001011001001010 (data,
									 bindings),
				    bindings);
}
static AN2Data
action111011000111000010110010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110000101100100100 (data, bindings);
    register AN2Data d2 = action1110110001110000101100100101 (data, bindings);
/* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100001011001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
  return ACC_give_hence (action111011000111000010110010010 (data, bindings),
			 bindings);
}
static AN2Data
action1110110001110000101100100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100011100001011001000 (data, bindings);
    register AN2Data d2 = action11101100011100001011001001 (data, bindings);
/* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111000010110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ */
  return ACC_give_then (action1110110001110000101100100 (data, bindings),
			bindings);
}
static AN2Data
action11101100011100001011001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
  return ACC_enact (action111011000111000010110010 (data, bindings),
		    bindings);
}
static AN2Data
action1110110001110000101100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100011100001011000 (data, bindings);
    register AN2Data d2 = action11101100011100001011001 (data, bindings);
    /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action1110110001110000101101001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide false then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (0), bindings);
}
static AN2Data
action111011000111000010110100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110000101101000 (data, bindings);
    register AN2Data d2 = action1110110001110000101101001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110000101101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action111011000111000010110101 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110000101101010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100001011010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy */
  return
    action111011000111000010110101 (action111011000111000010110100
				    (data, bindings), bindings);
}
static AN2Data
action1110110001110000101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (),
			  action11101100011100001011010 (data, bindings),
			  bindings);
}
static AN2Data
action111011000111000010110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact otherwise select(give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) */
  if (!setChoicePoint ())
    return action1110110001110000101100 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action1110110001110000101101 (data, bindings);
    }
}
static AN2Data
action111011000111000010111 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide () then raise */
  return ACC_raise (an2_make_empty (), bindings);
}
static AN2Data
action11101100011100001011 (AN2Data data, AN2Data bindings)
{
  /* Current action: select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  if (!setChoicePoint ())
    return action111011000111000010110 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action111011000111000010111 (data, bindings);
    }
}
static AN2Data
action1110110001110000101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  return
    action11101100011100001011 (action11101100011100001010 (data, bindings),
				bindings);
}
static AN2Data
action111011000111000010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = an2_make_token ("unf");
    register AN2Data d2 = ACC_make_action (action1110110001110000101, 0);
/* Current action: provide "unf" and provide give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
		and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
		and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ */
  return ACC_give_binding (action111011000111000010 (data, bindings),
			   bindings);
}
static AN2Data
action1110110001110000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = action11101100011100001 (data, bindings);
/* Current action: give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
		and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
		and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ */
  return ACC_give_overriding (action1110110001110000 (data, bindings),
			      bindings);
}
static AN2Data
action11101100011100100000000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110010000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return ACC_give_bound (action11101100011100100000000 (data, bindings),
			 bindings);
}
static AN2Data
action111011000111001000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110110001110010000000 (data,
								  bindings),
				    bindings);
}
static AN2Data
action11101100011100100000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action111011000111001000000 (data, bindings), bindings);
}
static AN2Data
action1110110001110010000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100011100100000 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001000100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action111011000111001000101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action11101100011100100010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111001000100 (data, bindings);
    register AN2Data d2 = action111011000111001000101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action11101100011100100010 (data, bindings),
			 bindings);
}
static AN2Data
action111011000111001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return
    action1110110001110010001 (action1110110001110010000 (data, bindings),
			       bindings);
}
static AN2Data
action11101100011100100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111001000 (data, bindings);
    register AN2Data d2 = an2_make_int (0);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action111011000111001010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action11101100011100101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111001010000 (data, bindings);
    register AN2Data d2 = action111011000111001010001 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001010010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _>_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_greater_than (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action11101100011100101001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111001010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _>_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy */
  return
    action11101100011100101001 (action11101100011100101000 (data, bindings),
				bindings);
}
static AN2Data
action111011000111001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy then provide true */
  return ACC_GEN_provide (an2_make_bool (1),
			  action1110110001110010100 (data, bindings),
			  bindings);
}
static AN2Data
action11101100011100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  if (!setChoicePoint ())
    return action111011000111001010 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return an2_make_bool (0);
    }
}
static AN2Data
action1110110001110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  return action11101100011100101 (action11101100011100100 (data, bindings),
				  bindings);
}
static AN2Data
action1110110001110011000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action1110110001110011000001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide true then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (1), bindings);
}
static AN2Data
action111011000111001100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110011000000 (data, bindings);
    register AN2Data d2 = action1110110001110011000001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110011000010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action111011000111001100001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110011000010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy */
  return
    action111011000111001100001 (action111011000111001100000 (data, bindings),
				 bindings);
}
static AN2Data
action1110110001110011000100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("output");
/* Current action: give current bindings and provide "output" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001100010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ */
  return ACC_give_bound (action1110110001110011000100000 (data, bindings),
			 bindings);
}
static AN2Data
action11101100011100110001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action111011000111001100010000 (data,
								    bindings),
				    bindings);
}
static AN2Data
action1110110001110011000100100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("output");
/* Current action: give current bindings and provide "output" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001100010010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ */
  return ACC_give_bound (action1110110001110011000100100000 (data, bindings),
			 bindings);
}
static AN2Data
action11101100011100110001001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action111011000111001100010010000 (data,
								       bindings),
				    bindings);
}
static AN2Data
action1110110001110011000100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action11101100011100110001001000 (data, bindings),
		      bindings);
}
static AN2Data
action1110110001110011000100101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("rep");
/* Current action: give current bindings and provide "rep" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001100010010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ */
  return ACC_give_bound (action1110110001110011000100101000 (data, bindings),
			 bindings);
}
static AN2Data
action11101100011100110001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action111011000111001100010010100 (data,
								       bindings),
				    bindings);
}
static AN2Data
action1110110001110011000100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action11101100011100110001001010 (data, bindings),
		      bindings);
}
static AN2Data
action111011000111001100010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110011000100100 (data, bindings);
    register AN2Data d2 = action1110110001110011000100101 (data, bindings);
/* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100110001001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action11101100011100110001001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110110001110011000100110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100011100110001001100 (data, bindings);
    register AN2Data d2 = action11101100011100110001001101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001100010011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
  return ACC_give_plus (action1110110001110011000100110 (data, bindings),
			bindings);
}
static AN2Data
action11101100011100110001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
  return
    action111011000111001100010011 (action111011000111001100010010
				    (data, bindings), bindings);
}
static AN2Data
action1110110001110011000100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100011100110001000 (data, bindings);
    register AN2Data d2 = action11101100011100110001001 (data, bindings);
/* Current action: give current bindings and provide "output" then give bound_ then give the cell_ and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001100010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update */
  return ACC_update (action1110110001110011000100 (data, bindings), bindings);
}
static AN2Data
action1110110001110011000110000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001100011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return ACC_give_bound (action1110110001110011000110000 (data, bindings),
			 bindings);
}
static AN2Data
action11101100011100110001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action111011000111001100011000 (data,
								    bindings),
				    bindings);
}
static AN2Data
action1110110001110011000110100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("repnr");
/* Current action: give current bindings and provide "repnr" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001100011010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ */
  return ACC_give_bound (action1110110001110011000110100000 (data, bindings),
			 bindings);
}
static AN2Data
action11101100011100110001101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action111011000111001100011010000 (data,
								       bindings),
				    bindings);
}
static AN2Data
action1110110001110011000110100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action11101100011100110001101000 (data, bindings),
		      bindings);
}
static AN2Data
action111011000111001100011010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110011000110100 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100110001101100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action11101100011100110001101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action1110110001110011000110110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100011100110001101100 (data, bindings);
    register AN2Data d2 = action11101100011100110001101101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001100011011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action1110110001110011000110110 (data, bindings),
			 bindings);
}
static AN2Data
action11101100011100110001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return
    action111011000111001100011011 (action111011000111001100011010
				    (data, bindings), bindings);
}
static AN2Data
action1110110001110011000110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100011100110001100 (data, bindings);
    register AN2Data d2 = action11101100011100110001101 (data, bindings);
/* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001100011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return ACC_update (action1110110001110011000110 (data, bindings), bindings);
}
static AN2Data
action11101100011100110001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111001100010 (data, bindings);
    register AN2Data d2 = action111011000111001100011 (data, bindings);
    /* Current action: give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return
    action11101100011100110001 (action11101100011100110000 (data, bindings),
				bindings);
}
static AN2Data
action1110110001110011001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ */
  return
    ACC_give_provide (ACC_GEN_give_the_datasort
		      (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action111011000111001100100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ */
  return ACC_give_provide (ACC_give_current_bindings (data, bindings),
			   bindings);
}
static AN2Data
action11101100011100110010010100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110011001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ */
  return ACC_give_bound (action11101100011100110010010100 (data, bindings),
			 bindings);
}
static AN2Data
action111011000111001100100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
  return ACC_GEN_give_the_datasort (AN2_ACTION_TYPE,
				    action1110110001110011001001010 (data,
								     bindings),
				    bindings);
}
static AN2Data
action11101100011100110010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111001100100100 (data, bindings);
    register AN2Data d2 = action111011000111001100100101 (data, bindings);
/* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110011001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
  return ACC_give_hence (action11101100011100110010010 (data, bindings),
			 bindings);
}
static AN2Data
action111011000111001100100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110011001000 (data, bindings);
    register AN2Data d2 = action1110110001110011001001 (data, bindings);
/* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011100110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ */
  return ACC_give_then (action111011000111001100100 (data, bindings),
			bindings);
}
static AN2Data
action1110110001110011001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
  return ACC_enact (action11101100011100110010 (data, bindings), bindings);
}
static AN2Data
action111011000111001100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110011000 (data, bindings);
    register AN2Data d2 = action1110110001110011001 (data, bindings);
    /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action111011000111001101001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide false then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (0), bindings);
}
static AN2Data
action11101100011100110100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111001101000 (data, bindings);
    register AN2Data d2 = action111011000111001101001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111001101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action11101100011100110101 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111001101010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110011010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy */
  return
    action11101100011100110101 (action11101100011100110100 (data, bindings),
				bindings);
}
static AN2Data
action111011000111001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (),
			  action1110110001110011010 (data, bindings),
			  bindings);
}
static AN2Data
action11101100011100110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact otherwise select(give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) */
  if (!setChoicePoint ())
    return action111011000111001100 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action111011000111001101 (data, bindings);
    }
}
static AN2Data
action11101100011100111 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide () then raise */
  return ACC_raise (an2_make_empty (), bindings);
}
static AN2Data
action1110110001110011 (AN2Data data, AN2Data bindings)
{
  /* Current action: select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  if (!setChoicePoint ())
    return action11101100011100110 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action11101100011100111 (data, bindings);
    }
}
static AN2Data
action111011000111001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  return action1110110001110011 (action1110110001110010 (data, bindings),
				 bindings);
}
static AN2Data
action11101100011100 (AN2Data data, AN2Data bindings)
{
  {
    AN2Data new_bindings = action111011000111000 (data, bindings);
    /* Current action: give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
    if (an2_has_type (new_bindings, AN2_BINDINGS_TYPE))
      return action111011000111001 (data, new_bindings);
    ACC_throw_exception (an2_make_empty ());
  }
}
static AN2Data
action111011000111010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action111011000111010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "break" then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_token ("break"), bindings);
}
static AN2Data
action11101100011101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111010000 (data, bindings);
    register AN2Data d2 = action111011000111010001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111010010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action11101100011101001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001110100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy */
  return action11101100011101001 (action11101100011101000 (data, bindings),
				  bindings);
}
static AN2Data
action111011000111010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (),
			  action1110110001110100 (data, bindings), bindings);
}
static AN2Data
action11101100011101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
  if (!setChoicePoint ())
    return action111011000111010 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return ACC_raise (data, bindings);
    }
}
static AN2Data
action1110110001110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
  if (!setChoicePoint ())
    return action11101100011100 (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      if (!setChoicePoint ())
	return action11101100011101 (data, bindings);
      else
	ACC_throw_exception (ACC_merge (d, ACC_catch_exception ()));
    }
}
static AN2Data
action11101100011110000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("input");
/* Current action: give current bindings and provide "input" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001111000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ */
  return ACC_give_bound (action11101100011110000 (data, bindings), bindings);
}
static AN2Data
action111011000111100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110110001111000 (data, bindings),
				    bindings);
}
static AN2Data
action11101100011110100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("input");
/* Current action: give current bindings and provide "input" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001111010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ */
  return ACC_give_bound (action11101100011110100000 (data, bindings),
			 bindings);
}
static AN2Data
action111011000111101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1110110001111010000 (data,
							       bindings),
				    bindings);
}
static AN2Data
action11101100011110100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action111011000111101000 (data, bindings), bindings);
}
static AN2Data
action1110110001111010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100011110100 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000111101100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action111011000111101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action11101100011110110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111101100 (data, bindings);
    register AN2Data d2 = action111011000111101101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001111011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action11101100011110110 (data, bindings), bindings);
}
static AN2Data
action111011000111101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return action1110110001111011 (action1110110001111010 (data, bindings),
				 bindings);
}
static AN2Data
action11101100011110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000111100 (data, bindings);
    register AN2Data d2 = action111011000111101 (data, bindings);
/* Current action: give current bindings and provide "input" then give bound_ then give the cell_ and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001111 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return ACC_update (action11101100011110 (data, bindings), bindings);
}
static AN2Data
action111011000111 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110110001110 (data, bindings);
    register AN2Data d2 = action1110110001111 (data, bindings);
    /* Current action: give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101100011 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000110 (data, bindings);
    register AN2Data d2 = action111011000111 (data, bindings);
    /* Current action: give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100010 (data, bindings);
    register AN2Data d2 = action11101100011 (data, bindings);
    /* Current action: give current bindings and provide "rep" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return action1110110001 (action1110110000 (data, bindings), bindings);
}
static AN2Data
action111011001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ */
  return
    ACC_give_provide (ACC_GEN_give_the_datasort
		      (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action11101100100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ */
  return ACC_give_provide (ACC_give_current_bindings (data, bindings),
			   bindings);
}
static AN2Data
action1110110010010100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ */
  return ACC_give_bound (action1110110010010100 (data, bindings), bindings);
}
static AN2Data
action11101100100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
  return ACC_GEN_give_the_datasort (AN2_ACTION_TYPE,
				    action111011001001010 (data, bindings),
				    bindings);
}
static AN2Data
action1110110010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101100100100 (data, bindings);
    register AN2Data d2 = action11101100100101 (data, bindings);
/* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
  return ACC_give_hence (action1110110010010 (data, bindings), bindings);
}
static AN2Data
action11101100100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011001000 (data, bindings);
    register AN2Data d2 = action111011001001 (data, bindings);
/* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ */
  return ACC_give_then (action11101100100 (data, bindings), bindings);
}
static AN2Data
action111011001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
  return ACC_enact (action1110110010 (data, bindings), bindings);
}
static AN2Data
action11101100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action111011000 (data, bindings);
    register AN2Data d2 = action111011001 (data, bindings);
    /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action11101101001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide false then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (0), bindings);
}
static AN2Data
action1110110100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101101000 (data, bindings);
    register AN2Data d2 = action11101101001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11101101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action1110110101 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11101101010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111011010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy */
  return action1110110101 (action1110110100 (data, bindings), bindings);
}
static AN2Data
action11101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (), action111011010 (data, bindings),
			  bindings);
}
static AN2Data
action1110110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact otherwise select(give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) */
  if (!setChoicePoint ())
    return action11101100 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action11101101 (data, bindings);
    }
}
static AN2Data
action1110111 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide () then raise */
  return ACC_raise (an2_make_empty (), bindings);
}
static AN2Data
action111011 (AN2Data data, AN2Data bindings)
{
  /* Current action: select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  if (!setChoicePoint ())
    return action1110110 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action1110111 (data, bindings);
    }
}
static AN2Data
action11101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  return action111011 (action111010 (data, bindings), bindings);
}
static AN2Data
action1110 (AN2Data data, AN2Data bindings)
{
  {
    AN2Data new_bindings = action11100 (data, bindings);
    /* Current action: give current bindings and provide ("unf", give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
    if (an2_has_type (new_bindings, AN2_BINDINGS_TYPE))
      return action11101 (data, new_bindings);
    ACC_throw_exception (an2_make_empty ());
  }
}
static AN2Data
action11110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action11110001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "break" then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_token ("break"), bindings);
}
static AN2Data
action1111000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11110000 (data, bindings);
    register AN2Data d2 = action11110001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: check _=_ exceptionally fail */
  if (!setChoicePoint ())
    return ACC_check_equals (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return ACC_fail (d, bindings);
    }
}
static AN2Data
action1111001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11110010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action111100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy */
  return action1111001 (action1111000 (data, bindings), bindings);
}
static AN2Data
action11110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (), action111100 (data, bindings),
			  bindings);
}
static AN2Data
action1111 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
  if (!setChoicePoint ())
    return action11110 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return ACC_raise (data, bindings);
    }
}
static AN2Data
action111 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide ("unf", give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
     and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
     and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
     and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
     and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
  if (!setChoicePoint ())
    return action1110 (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      if (!setChoicePoint ())
	return action1111 (data, bindings);
      else
	ACC_throw_exception (ACC_merge (d, ACC_catch_exception ()));
    }
}
static AN2Data
action11 (AN2Data data, AN2Data bindings)
{
  {
    AN2Data new_bindings = action110 (data, bindings);
    /* Current action: give current bindings and provide 4 then create 
       then provide "input" and give the cell_ then give binding_ and
       provide 1 then create 
       then provide "output" and give the cell_ then give binding_ and
       provide 0 then create 
       then provide "repnr" and give the cell_ then give binding_ and
       provide 0 then create 
       then provide "rep" and give the cell_ then give binding_ then give disjoint union _ then give disjoint union _ then give disjoint union _ then give overriding_ hence give current bindings and provide ("unf", give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
    if (an2_has_type (new_bindings, AN2_BINDINGS_TYPE))
      return action111 (data, new_bindings);
    ACC_throw_exception (an2_make_empty ());
  }
}
static AN2Data
action1 (AN2Data data, AN2Data bindings)
{
  {
    AN2Data new_bindings =
      ACC_GEN_provide (an2_make_no_bindings (), data, bindings);
    /* Current action: normal empty hence give current bindings and provide 4 then create 
       then provide "input" and give the cell_ then give binding_ and
       provide 1 then create 
       then provide "output" and give the cell_ then give binding_ and
       provide 0 then create 
       then provide "repnr" and give the cell_ then give binding_ and
       provide 0 then create 
       then provide "rep" and give the cell_ then give binding_ then give disjoint union _ then give disjoint union _ then give disjoint union _ then give overriding_ hence 
       give current bindings and provide ("unf", give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "rep" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect then update and then give current bindings and provide ("unf", give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "output" then give bound_ then give the cell_
       and give current bindings and provide "output" then give bound_ then give the cell_ then inspect and give current bindings and provide "rep" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _+_ then update and then give current bindings and provide "repnr" then give bound_ then give the cell_
       and give current bindings and provide "repnr" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise and then give current bindings and provide "input" then give bound_ then give the cell_
       and give current bindings and provide "input" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       and exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
    if (an2_has_type (new_bindings, AN2_BINDINGS_TYPE))
      return action11 (data, new_bindings);
    ACC_throw_exception (an2_make_empty ());
  }
}

int
main (int argc, char **argv)
{
  long bp;
  AN2Data bos;
  ACC_init_runtime (argc, argv, &bos, &bp);
  if (!setChoicePoint ())
    {
      ATprintf ("result = %t\n",
		action1 (an2_make_empty (), an2_make_no_bindings ()));
      an2_fprint_store (stdout, store);
    }
  else
    ATabort ("error or failure\n");
  return 0;
}
