
#include "runtime.c"

static AN2Data
action1001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 4 then create */
  return ACC_create (an2_make_int (4), bindings);
}
static AN2Data
action10010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = an2_make_token ("x");
    register AN2Data d2 =
      ACC_GEN_give_the_datasort (AN2_CELL_TYPE, data, bindings);
/* Current action: provide "x" and give the cell_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "x" and give the cell_ then give binding_ */
  return ACC_give_binding (action10010010 (data, bindings), bindings);
}
static AN2Data
action100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 4 then create then provide "x" and give the cell_ then give binding_ */
  return action1001001 (action1001000 (data, bindings), bindings);
}
static AN2Data
action1001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 1 then create */
  return ACC_create (an2_make_int (1), bindings);
}
static AN2Data
action10010110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = an2_make_token ("y");
    register AN2Data d2 =
      ACC_GEN_give_the_datasort (AN2_CELL_TYPE, data, bindings);
/* Current action: provide "y" and give the cell_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1001011 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "y" and give the cell_ then give binding_ */
  return ACC_give_binding (action10010110 (data, bindings), bindings);
}
static AN2Data
action100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 1 then create then provide "y" and give the cell_ then give binding_ */
  return action1001011 (action1001010 (data, bindings), bindings);
}
static AN2Data
action10010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action100100 (data, bindings);
    register AN2Data d2 = action100101 (data, bindings);
/* Current action: provide 4 then create 
		then provide "x" and give the cell_ then give binding_ and provide 1 then create 
		then provide "y" and give the cell_ then give binding_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 4 then create 
     then provide "x" and give the cell_ then give binding_ and
     provide 1 then create 
     then provide "y" and give the cell_ then give binding_ then give disjoint union _ */
  return ACC_give_disjoint_union (action10010 (data, bindings), bindings);
}
static AN2Data
action100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = action1001 (data, bindings);
/* Current action: give current bindings and provide 4 then create 
		then provide "x" and give the cell_ then give binding_ and
		 provide 1 then create 
		then provide "y" and give the cell_ then give binding_ then give disjoint union _ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action10 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide 4 then create 
     then provide "x" and give the cell_ then give binding_ and
     provide 1 then create 
     then provide "y" and give the cell_ then give binding_ then give disjoint union _ then give overriding_ */
  return ACC_give_overriding (action100 (data, bindings), bindings);
}
static AN2Data
action11000101000000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100010100000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ */
  return ACC_give_bound (action11000101000000 (data, bindings), bindings);
}
static AN2Data
action110001010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1100010100000 (data, bindings),
				    bindings);
}
static AN2Data
action11000101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action110001010000 (data, bindings), bindings);
}
static AN2Data
action1100010100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11000101000 (data, bindings);
    register AN2Data d2 = an2_make_int (0);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action11000101010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action1100010101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11000101010000 (data, bindings);
    register AN2Data d2 = action11000101010001 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101010010 (AN2Data data, AN2Data bindings)
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
action1100010101001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11000101010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _>_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy */
  return action1100010101001 (action1100010101000 (data, bindings), bindings);
}
static AN2Data
action11000101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy then provide true */
  return ACC_GEN_provide (an2_make_bool (1),
			  action110001010100 (data, bindings), bindings);
}
static AN2Data
action1100010101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  if (!setChoicePoint ())
    return action11000101010 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return an2_make_bool (0);
    }
}
static AN2Data
action110001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  return action1100010101 (action1100010100 (data, bindings), bindings);
}
static AN2Data
action110001011000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action110001011000001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide true then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (1), bindings);
}
static AN2Data
action11000101100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action110001011000000 (data, bindings);
    register AN2Data d2 = action110001011000001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001011000010 (AN2Data data, AN2Data bindings)
{
  ATwarning("action110001011000010\n");
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
action11000101100001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action110001011000010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100010110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy */
  return action11000101100001 (action11000101100000 (data, bindings),
			       bindings);
}
static AN2Data
action110001011000100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("y");
/* Current action: give current bindings and provide "y" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ */
  return ACC_give_bound (action110001011000100000 (data, bindings), bindings);
}
static AN2Data
action1100010110001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11000101100010000 (data, bindings),
				    bindings);
}
static AN2Data
action110001011000100100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("y");
/* Current action: give current bindings and provide "y" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100010010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ */
  return ACC_give_bound (action110001011000100100000 (data, bindings),
			 bindings);
}
static AN2Data
action1100010110001001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11000101100010010000 (data,
								bindings),
				    bindings);
}
static AN2Data
action110001011000100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action1100010110001001000 (data, bindings), bindings);
}
static AN2Data
action110001011000100101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100010010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ */
  return ACC_give_bound (action110001011000100101000 (data, bindings),
			 bindings);
}
static AN2Data
action1100010110001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11000101100010010100 (data,
								bindings),
				    bindings);
}
static AN2Data
action110001011000100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action1100010110001001010 (data, bindings), bindings);
}
static AN2Data
action11000101100010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action110001011000100100 (data, bindings);
    register AN2Data d2 = action110001011000100101 (data, bindings);
/* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100010110001001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action1100010110001001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action110001011000100110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1100010110001001100 (data, bindings);
    register AN2Data d2 = action1100010110001001101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100010011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
  return ACC_give_times (action110001011000100110 (data, bindings), bindings);
}
static AN2Data
action1100010110001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
  return action11000101100010011 (action11000101100010010 (data, bindings),
				  bindings);
}
static AN2Data
action110001011000100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1100010110001000 (data, bindings);
    register AN2Data d2 = action1100010110001001 (data, bindings);
/* Current action: give current bindings and provide "y" then give bound_ then give the cell_ and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update */
  return ACC_update (action110001011000100 (data, bindings), bindings);
}
static AN2Data
action110001011000110000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ */
  return ACC_give_bound (action110001011000110000 (data, bindings), bindings);
}
static AN2Data
action1100010110001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11000101100011000 (data, bindings),
				    bindings);
}
static AN2Data
action110001011000110100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100011010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ */
  return ACC_give_bound (action110001011000110100000 (data, bindings),
			 bindings);
}
static AN2Data
action1100010110001101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action11000101100011010000 (data,
								bindings),
				    bindings);
}
static AN2Data
action110001011000110100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action1100010110001101000 (data, bindings), bindings);
}
static AN2Data
action11000101100011010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action110001011000110100 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100010110001101100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action1100010110001101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action110001011000110110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1100010110001101100 (data, bindings);
    register AN2Data d2 = action1100010110001101101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100011011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action110001011000110110 (data, bindings), bindings);
}
static AN2Data
action1100010110001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return action11000101100011011 (action11000101100011010 (data, bindings),
				  bindings);
}
static AN2Data
action110001011000110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1100010110001100 (data, bindings);
    register AN2Data d2 = action1100010110001101 (data, bindings);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return ACC_update (action110001011000110 (data, bindings), bindings);
}
static AN2Data
action1100010110001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11000101100010 (data, bindings);
    register AN2Data d2 = action11000101100011 (data, bindings);
    /* Current action: give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return action1100010110001 (action1100010110000 (data, bindings), bindings);
}
static AN2Data
action110001011001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ */
  return
    ACC_give_provide (ACC_GEN_give_the_datasort
		      (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action11000101100100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ */
  return ACC_give_provide (ACC_give_current_bindings (data, bindings),
			   bindings);
}
static AN2Data
action1100010110010010100 (AN2Data data, AN2Data bindings)
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
action110001011001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ */
  return ACC_give_bound (action1100010110010010100 (data, bindings),
			 bindings);
}
static AN2Data
action11000101100100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
  return ACC_GEN_give_the_datasort (AN2_ACTION_TYPE,
				    action110001011001001010 (data, bindings),
				    bindings);
}
static AN2Data
action1100010110010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11000101100100100 (data, bindings);
    register AN2Data d2 = action11000101100100101 (data, bindings);
/* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001011001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
  return ACC_give_hence (action1100010110010010 (data, bindings), bindings);
}
static AN2Data
action11000101100100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action110001011001000 (data, bindings);
    register AN2Data d2 = action110001011001001 (data, bindings);
/* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100010110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ */
  return ACC_give_then (action11000101100100 (data, bindings), bindings);
}
static AN2Data
action110001011001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
  return ACC_enact (action1100010110010 (data, bindings), bindings);
}
static AN2Data
action11000101100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action110001011000 (data, bindings);
    register AN2Data d2 = action110001011001 (data, bindings);
    /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action11000101101001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide false then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (0), bindings);
}
static AN2Data
action1100010110100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11000101101000 (data, bindings);
    register AN2Data d2 = action11000101101001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101101010 (AN2Data data, AN2Data bindings)
{
  ATwarning("action11000101101010\n");
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
action1100010110101 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11000101101010 (data, bindings);
    register AN2Data d2 = data;
    ATfprintf(stderr, "bl %t and %t = %t\n",d1,d2, ACC_merge(d1,d2));
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001011010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy */
  return action1100010110101 (action1100010110100 (data, bindings), bindings);
}
static AN2Data
action11000101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (),
			  action110001011010 (data, bindings), bindings);
}
static AN2Data
action1100010110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact otherwise select(give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) */
  if (!setChoicePoint ())
    return action11000101100 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action11000101101 (data, bindings);
    }
}
static AN2Data
action1100010111 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide () then raise */
  return ACC_raise (an2_make_empty (), bindings);
}
static AN2Data
action110001011 (AN2Data data, AN2Data bindings)
{
  /* Current action: select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  if (!setChoicePoint ())
    return action1100010110 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action1100010111 (data, bindings);
    }
}
static AN2Data
action11000101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  return action110001011 (action110001010 (data, bindings), bindings);
}
static AN2Data
action1100010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = an2_make_token ("unf");
    register AN2Data d2 = ACC_make_action (action11000101, 0);
/* Current action: provide "unf" and provide give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
		and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
		and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide ("unf", give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ */
  return ACC_give_binding (action1100010 (data, bindings), bindings);
}
static AN2Data
action11000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = action110001 (data, bindings);
/* Current action: give current bindings and provide ("unf", give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
		then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
	 	then provide true otherwise provide false then select (
		give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
		and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
		and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
		give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide ("unf", give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ */
  return ACC_give_overriding (action11000 (data, bindings), bindings);
}
static AN2Data
action1101000000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110100000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ */
  return ACC_give_bound (action1101000000 (data, bindings), bindings);
}
static AN2Data
action11010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action110100000 (data, bindings),
				    bindings);
}
static AN2Data
action1101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action11010000 (data, bindings), bindings);
}
static AN2Data
action110100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1101000 (data, bindings);
    register AN2Data d2 = an2_make_int (0);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action1101010001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action110101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1101010000 (data, bindings);
    register AN2Data d2 = action1101010001 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101010010 (AN2Data data, AN2Data bindings)
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
action110101001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1101010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _>_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy */
  return action110101001 (action110101000 (data, bindings), bindings);
}
static AN2Data
action1101010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy then provide true */
  return ACC_GEN_provide (an2_make_bool (1), action11010100 (data, bindings),
			  bindings);
}
static AN2Data
action110101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  if (!setChoicePoint ())
    return action1101010 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return an2_make_bool (0);
    }
}
static AN2Data
action11010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  return action110101 (action110100 (data, bindings), bindings);
}
static AN2Data
action11011000000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action11011000001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide true then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (1), bindings);
}
static AN2Data
action1101100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11011000000 (data, bindings);
    register AN2Data d2 = action11011000001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11011000010 (AN2Data data, AN2Data bindings)
{
  ATwarning("action11011000010\n");
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
action1101100001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11011000010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy */
  return action1101100001 (action1101100000 (data, bindings), bindings);
}
static AN2Data
action11011000100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("y");
/* Current action: give current bindings and provide "y" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ */
  return ACC_give_bound (action11011000100000 (data, bindings), bindings);
}
static AN2Data
action110110001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1101100010000 (data, bindings),
				    bindings);
}
static AN2Data
action11011000100100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("y");
/* Current action: give current bindings and provide "y" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100010010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ */
  return ACC_give_bound (action11011000100100000 (data, bindings), bindings);
}
static AN2Data
action110110001001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1101100010010000 (data, bindings),
				    bindings);
}
static AN2Data
action11011000100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action110110001001000 (data, bindings), bindings);
}
static AN2Data
action11011000100101000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100010010100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ */
  return ACC_give_bound (action11011000100101000 (data, bindings), bindings);
}
static AN2Data
action110110001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1101100010010100 (data, bindings),
				    bindings);
}
static AN2Data
action11011000100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action110110001001010 (data, bindings), bindings);
}
static AN2Data
action1101100010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11011000100100 (data, bindings);
    register AN2Data d2 = action11011000100101 (data, bindings);
/* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110110001001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action110110001001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action11011000100110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action110110001001100 (data, bindings);
    register AN2Data d2 = action110110001001101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100010011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
  return ACC_give_times (action11011000100110 (data, bindings), bindings);
}
static AN2Data
action110110001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
  return action1101100010011 (action1101100010010 (data, bindings), bindings);
}
static AN2Data
action11011000100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action110110001000 (data, bindings);
    register AN2Data d2 = action110110001001 (data, bindings);
/* Current action: give current bindings and provide "y" then give bound_ then give the cell_ and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update */
  return ACC_update (action11011000100 (data, bindings), bindings);
}
static AN2Data
action11011000110000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ */
  return ACC_give_bound (action11011000110000 (data, bindings), bindings);
}
static AN2Data
action110110001100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1101100011000 (data, bindings),
				    bindings);
}
static AN2Data
action11011000110100000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = ACC_give_current_bindings (data, bindings);
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100011010000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ */
  return ACC_give_bound (action11011000110100000 (data, bindings), bindings);
}
static AN2Data
action110110001101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  return ACC_GEN_give_the_datasort (AN2_CELL_TYPE,
				    action1101100011010000 (data, bindings),
				    bindings);
}
static AN2Data
action11011000110100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  return ACC_inspect (action110110001101000 (data, bindings), bindings);
}
static AN2Data
action1101100011010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11011000110100 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110110001101100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (1, data,
							    bindings),
				    bindings);
}
static AN2Data
action110110001101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #2_ then give the int_ */
  return ACC_GEN_give_the_datasort (AN2_INT_TYPE,
				    ACC_GEN_give_component (2, data,
							    bindings),
				    bindings);
}
static AN2Data
action11011000110110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action110110001101100 (data, bindings);
    register AN2Data d2 = action110110001101101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100011011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return ACC_give_minus (action11011000110110 (data, bindings), bindings);
}
static AN2Data
action110110001101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  return action1101100011011 (action1101100011010 (data, bindings), bindings);
}
static AN2Data
action11011000110 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action110110001100 (data, bindings);
    register AN2Data d2 = action110110001101 (data, bindings);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100011 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return ACC_update (action11011000110 (data, bindings), bindings);
}
static AN2Data
action110110001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1101100010 (data, bindings);
    register AN2Data d2 = action1101100011 (data, bindings);
    /* Current action: give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11011000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  return action110110001 (action110110000 (data, bindings), bindings);
}
static AN2Data
action11011001000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ */
  return
    ACC_give_provide (ACC_GEN_give_the_datasort
		      (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action1101100100100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ */
  return ACC_give_provide (ACC_give_current_bindings (data, bindings),
			   bindings);
}
static AN2Data
action110110010010100 (AN2Data data, AN2Data bindings)
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
action11011001001010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ */
  return ACC_give_bound (action110110010010100 (data, bindings), bindings);
}
static AN2Data
action1101100100101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
  return ACC_GEN_give_the_datasort (AN2_ACTION_TYPE,
				    action11011001001010 (data, bindings),
				    bindings);
}
static AN2Data
action110110010010 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1101100100100 (data, bindings);
    register AN2Data d2 = action1101100100101 (data, bindings);
/* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11011001001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
  return ACC_give_hence (action110110010010 (data, bindings), bindings);
}
static AN2Data
action1101100100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11011001000 (data, bindings);
    register AN2Data d2 = action11011001001 (data, bindings);
/* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ */
  return ACC_give_then (action1101100100 (data, bindings), bindings);
}
static AN2Data
action11011001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
  return ACC_enact (action110110010 (data, bindings), bindings);
}
static AN2Data
action1101100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action11011000 (data, bindings);
    register AN2Data d2 = action11011001 (data, bindings);
    /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101101000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action1101101001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide false then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_bool (0), bindings);
}
static AN2Data
action110110100 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1101101000 (data, bindings);
    register AN2Data d2 = action1101101001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101101010 (AN2Data data, AN2Data bindings)
{
  ATwarning("action1101101010\n");
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
action110110101 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1101101010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11011010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy */
  return action110110101 (action110110100 (data, bindings), bindings);
}
static AN2Data
action1101101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (), action11011010 (data, bindings),
			  bindings);
}
static AN2Data
action110110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact otherwise select(give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) */
  if (!setChoicePoint ())
    return action1101100 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action1101101 (data, bindings);
    }
}
static AN2Data
action110111 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide () then raise */
  return ACC_raise (an2_make_empty (), bindings);
}
static AN2Data
action11011 (AN2Data data, AN2Data bindings)
{
  /* Current action: select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  if (!setChoicePoint ())
    return action110110 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return action110111 (data, bindings);
    }
}
static AN2Data
action1101 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  return action11011 (action11010 (data, bindings), bindings);
}
static AN2Data
action110 (AN2Data data, AN2Data bindings)
{
  {
    AN2Data new_bindings = action1100 (data, bindings);
    /* Current action: give current bindings and provide ("unf", give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
    if (an2_has_type (new_bindings, AN2_BINDINGS_TYPE))
      return action1101 (data, new_bindings);
    ACC_throw_exception (an2_make_empty ());
  }
}
static AN2Data
action1110000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ */
  return
    ACC_give_tupleToList (ACC_GEN_give_the_datasort
			  (AN2_DATA_CASTABLE_TYPE, data, bindings), bindings);
}
static AN2Data
action1110001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "break" then give tupleToList_ */
  return ACC_give_tupleToList (an2_make_token ("break"), bindings);
}
static AN2Data
action111000 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110000 (data, bindings);
    register AN2Data d2 = action1110001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110010 (AN2Data data, AN2Data bindings)
{
  ATwarning("action1110010\n");
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
action111001 (AN2Data data, AN2Data bindings)
{
  {
    register AN2Data d1 = action1110010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy */
  return action111001 (action111000 (data, bindings), bindings);
}
static AN2Data
action1110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  return ACC_GEN_provide (an2_make_empty (), action11100 (data, bindings),
			  bindings);
}
static AN2Data
action111 (AN2Data data, AN2Data bindings)
{
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
  if (!setChoicePoint ())
    return action1110 (data, bindings);
  else
    {
      ACC_catch_failure ();
      return ACC_raise (data, bindings);
    }
}
static AN2Data
action11 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide ("unf", give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
  if (!setChoicePoint ())
    return action110 (data, bindings);
  else
    {
      AN2Data d = ACC_catch_exception ();
      return action111 (d, bindings);
    }
}
static AN2Data
action1 (AN2Data data, AN2Data bindings)
{
  {
    AN2Data new_bindings = action10 (data, bindings);
    /* Current action: give current bindings and provide 4 then create 
       then provide "x" and give the cell_ then give binding_ and
       provide 1 then create 
       then provide "y" and give the cell_ then give binding_ then give disjoint union _ then give overriding_ hence give current bindings and provide ("unf", give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ hence give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
       then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
       then provide true otherwise provide false then select (
       give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
       give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise
       exceptionally give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
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
