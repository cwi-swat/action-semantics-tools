
#include "runtime.c"

static AN2Data
action1001000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1001000");
  /* Current action: provide 2 then create */
  {
    register AN2Data d = an2_make_int (2);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1001000", d);
    d = ACC_create (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1001000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10010010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "10010010");
  {
    register AN2Data d1 = an2_make_token ("x");
    register AN2Data d2 =
      ACC_GEN_give_the_datasort (AN2_CELL_TYPE, data, bindings);
/* Current action: provide "x" and give the cell_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "10010010", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "10010010", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1001001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1001001");
  /* Current action: provide "x" and give the cell_ then give binding_ */
  {
    register AN2Data d = action10010010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1001001", d);
    d = ACC_give_binding (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1001001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "100100");
  /* Current action: provide 2 then create then provide "x" and give the cell_ then give binding_ */
  {
    register AN2Data d = action1001000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "100100", d);
    d = action1001001 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "100100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1001010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1001010");
  /* Current action: provide 1 then create */
  {
    register AN2Data d = an2_make_int (1);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1001010", d);
    d = ACC_create (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1001010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10010110 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "10010110");
  {
    register AN2Data d1 = an2_make_token ("y");
    register AN2Data d2 =
      ACC_GEN_give_the_datasort (AN2_CELL_TYPE, data, bindings);
/* Current action: provide "y" and give the cell_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "10010110", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "10010110", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1001011 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1001011");
  /* Current action: provide "y" and give the cell_ then give binding_ */
  {
    register AN2Data d = action10010110 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1001011", d);
    d = ACC_give_binding (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1001011", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "100101");
  /* Current action: provide 1 then create then provide "y" and give the cell_ then give binding_ */
  {
    register AN2Data d = action1001010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "100101", d);
    d = action1001011 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "100101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "10010");
  {
    register AN2Data d1 = action100100 (data, bindings);
    register AN2Data d2 = action100101 (data, bindings);
/* Current action: provide 2 then create 
		then provide "x" and give the cell_ then give binding_ and provide 1 then create 
		then provide "y" and give the cell_ then give binding_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "10010", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "10010", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1001");
  /* Current action: provide 2 then create 
     then provide "x" and give the cell_ then give binding_ and
     provide 1 then create 
     then provide "y" and give the cell_ then give binding_ then give disjoint union _ */
  {
    register AN2Data d = action10010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1001", d);
    d = ACC_give_disjoint_union (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "100");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = action1001 (data, bindings);
/* Current action: give current bindings and provide 2 then create 
		then provide "x" and give the cell_ then give binding_ and
		 provide 1 then create 
		then provide "y" and give the cell_ then give binding_ then give disjoint union _ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "100", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "100", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action10 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "10");
  /* Current action: give current bindings and provide 2 then create 
     then provide "x" and give the cell_ then give binding_ and
     provide 1 then create 
     then provide "y" and give the cell_ then give binding_ then give disjoint union _ then give overriding_ */
  {
    register AN2Data d = action100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "10", d);
    d = ACC_give_overriding (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "10", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101000000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11000101000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11000101000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100010100000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010100000");
  /* Current action: give current bindings and provide "x" then give bound_ */
  {
    register AN2Data d = action11000101000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010100000", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010100000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001010000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001010000");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  {
    register AN2Data d = action1100010100000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001010000", d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001010000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11000101000");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  {
    register AN2Data d = action110001010000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101000", d);
    d = ACC_inspect (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1100010100");
  {
    register AN2Data d1 = action11000101000 (data, bindings);
    register AN2Data d2 = an2_make_int (0);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1100010100", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1100010100", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101010000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101010000");
  /* Current action: give #1_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (1, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101010000", d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101010000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101010001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101010001");
  /* Current action: give #2_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (2, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101010001", d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101010001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010101000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010101000");
  {
    register AN2Data d1 = action11000101010000 (data, bindings);
    register AN2Data d2 = action11000101010001 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1100010101000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1100010101000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101010010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101010010");
  /* Current action: check _>_ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d = ACC_check_greater_than (data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n",
		 "11000101010010", d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n",
		 "11000101010010", d);
      return d;
    }
}
static AN2Data
action1100010101001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010101001");
  {
    register AN2Data d1 = action11000101010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _>_ exceptionally fail and copy */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1100010101001", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1100010101001", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001010100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001010100");
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy */
  {
    register AN2Data d = action1100010101000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001010100", d);
    d = action1100010101001 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001010100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11000101010");
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy then provide true */
  {
    register AN2Data d = action110001010100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101010", d);
    d = ACC_GEN_provide (an2_make_bool (1), d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1100010101");
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  if (!ACC_try ())
    {
      register AN2Data d = action11000101010 (data, bindings);
      ATfprintf (stderr, "%s: A1 otherwise returned: %t\n", "1100010101", d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = an2_make_bool (0);
      ATfprintf (stderr, "%s: otherwise A2 returned: %t\n", "1100010101", d);
      return d;
    }
}
static AN2Data
action110001010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110001010");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  {
    register AN2Data d = action1100010100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001010", d);
    d = action1100010101 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000000");
  /* Current action: give the data _ then give tupleToList_ */
  {
    register AN2Data d =
      ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001011000000", d);
    d = ACC_give_tupleToList (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001011000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000001");
  /* Current action: provide true then give tupleToList_ */
  {
    register AN2Data d = an2_make_bool (1);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001011000001", d);
    d = ACC_give_tupleToList (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001011000001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101100000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100000");
  {
    register AN2Data d1 = action110001011000000 (data, bindings);
    register AN2Data d2 = action110001011000001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11000101100000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11000101100000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001011000010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000010");
  /* Current action: check _=_ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d = ACC_check_equals (data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n",
		 "110001011000010", d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n",
		 "110001011000010", d);
      return d;
    }
}
static AN2Data
action11000101100001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100001");
  {
    register AN2Data d1 = action110001011000010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11000101100001", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11000101100001", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100010110000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110000");
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy */
  {
    register AN2Data d = action11000101100000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110000", d);
    d = action11000101100001 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000100000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000100000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("y");
/* Current action: give current bindings and provide "y" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110001011000100000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110001011000100000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100010000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100010000");
  /* Current action: give current bindings and provide "y" then give bound_ */
  {
    register AN2Data d = action110001011000100000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101100010000", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101100010000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110001000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001000");
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ */
  {
    register AN2Data d = action11000101100010000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110001000", d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110001000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000100100000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000100100000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("y");
/* Current action: give current bindings and provide "y" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110001011000100100000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110001011000100100000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100010010000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100010010000");
  /* Current action: give current bindings and provide "y" then give bound_ */
  {
    register AN2Data d = action110001011000100100000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101100010010000",
	       d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101100010010000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110001001000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001001000");
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ */
  {
    register AN2Data d = action11000101100010010000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110001001000",
	       d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110001001000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000100100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000100100");
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect */
  {
    register AN2Data d = action1100010110001001000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001011000100100", d);
    d = ACC_inspect (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001011000100100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000100101000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000100101000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110001011000100101000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110001011000100101000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100010010100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100010010100");
  /* Current action: give current bindings and provide "x" then give bound_ */
  {
    register AN2Data d = action110001011000100101000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101100010010100",
	       d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101100010010100",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110001001010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001001010");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  {
    register AN2Data d = action11000101100010010100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110001001010",
	       d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110001001010",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000100101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000100101");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  {
    register AN2Data d = action1100010110001001010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001011000100101", d);
    d = ACC_inspect (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001011000100101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101100010010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100010010");
  {
    register AN2Data d1 = action110001011000100100 (data, bindings);
    register AN2Data d2 = action110001011000100101 (data, bindings);
/* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11000101100010010", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11000101100010010", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100010110001001100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001001100");
  /* Current action: give #1_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (1, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110001001100",
	       d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110001001100",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110001001101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001001101");
  /* Current action: give #2_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (2, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110001001101",
	       d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110001001101",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000100110 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000100110");
  {
    register AN2Data d1 = action1100010110001001100 (data, bindings);
    register AN2Data d2 = action1100010110001001101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110001011000100110", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110001011000100110", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100010011 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100010011");
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
  {
    register AN2Data d = action110001011000100110 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101100010011", d);
    d = ACC_give_times (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101100010011", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110001001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001001");
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
  {
    register AN2Data d = action11000101100010010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110001001", d);
    d = action11000101100010011 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110001001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000100");
  {
    register AN2Data d1 = action1100010110001000 (data, bindings);
    register AN2Data d2 = action1100010110001001 (data, bindings);
/* Current action: give current bindings and provide "y" then give bound_ then give the cell_ and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110001011000100", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110001011000100", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100010");
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update */
  {
    register AN2Data d = action110001011000100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101100010", d);
    d = ACC_update (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101100010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000110000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000110000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110001011000110000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110001011000110000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100011000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100011000");
  /* Current action: give current bindings and provide "x" then give bound_ */
  {
    register AN2Data d = action110001011000110000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101100011000", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101100011000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110001100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001100");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  {
    register AN2Data d = action11000101100011000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110001100", d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110001100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000110100000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000110100000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110001011000110100000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110001011000110100000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100011010000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100011010000");
  /* Current action: give current bindings and provide "x" then give bound_ */
  {
    register AN2Data d = action110001011000110100000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101100011010000",
	       d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101100011010000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110001101000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001101000");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  {
    register AN2Data d = action11000101100011010000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110001101000",
	       d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110001101000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000110100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000110100");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  {
    register AN2Data d = action1100010110001101000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001011000110100", d);
    d = ACC_inspect (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001011000110100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101100011010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100011010");
  {
    register AN2Data d1 = action110001011000110100 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11000101100011010", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11000101100011010", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100010110001101100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001101100");
  /* Current action: give #1_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (1, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110001101100",
	       d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110001101100",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110001101101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001101101");
  /* Current action: give #2_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (2, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110001101101",
	       d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110001101101",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000110110 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000110110");
  {
    register AN2Data d1 = action1100010110001101100 (data, bindings);
    register AN2Data d2 = action1100010110001101101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110001011000110110", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110001011000110110", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100011011 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100011011");
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  {
    register AN2Data d = action110001011000110110 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101100011011", d);
    d = ACC_give_minus (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101100011011", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110001101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001101");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  {
    register AN2Data d = action11000101100011010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110001101", d);
    d = action11000101100011011 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110001101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011000110 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000110");
  {
    register AN2Data d1 = action1100010110001100 (data, bindings);
    register AN2Data d2 = action1100010110001101 (data, bindings);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110001011000110", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110001011000110", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101100011 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100011");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  {
    register AN2Data d = action110001011000110 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101100011", d);
    d = ACC_update (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101100011", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110001");
  {
    register AN2Data d1 = action11000101100010 (data, bindings);
    register AN2Data d2 = action11000101100011 (data, bindings);
    /* Current action: give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    ATfprintf (stderr, "%s: A1 and then returned: %t\n", "1100010110001", d1);
    ATfprintf (stderr, "%s: and then A2 returned: %t\n", "1100010110001", d2);
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001011000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011000");
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  {
    register AN2Data d = action1100010110000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001011000", d);
    d = action1100010110001 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001011000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011001000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011001000");
  /* Current action: give the data_ then give provide_ */
  {
    register AN2Data d =
      ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001011001000", d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001011001000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101100100100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100100100");
  /* Current action: give current bindings then give provide_ */
  {
    register AN2Data d = bindings;
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101100100100", d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101100100100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110010010100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110010010100");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1100010110010010100",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1100010110010010100",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001011001001010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011001001010");
  /* Current action: give current bindings and provide "unf" then give bound_ */
  {
    register AN2Data d = action1100010110010010100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001011001001010", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001011001001010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101100100101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100100101");
  /* Current action: give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
  {
    register AN2Data d = action110001011001001010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101100100101", d);
    d = ACC_GEN_give_the_datasort (AN2_ACTION_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101100100101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110010010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110010010");
  {
    register AN2Data d1 = action11000101100100100 (data, bindings);
    register AN2Data d2 = action11000101100100101 (data, bindings);
/* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1100010110010010", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1100010110010010", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001011001001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011001001");
  /* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
  {
    register AN2Data d = action1100010110010010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001011001001", d);
    d = ACC_give_hence (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001011001001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101100100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101100100");
  {
    register AN2Data d1 = action110001011001000 (data, bindings);
    register AN2Data d2 = action110001011001001 (data, bindings);
/* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11000101100100", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11000101100100", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100010110010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110010");
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ */
  {
    register AN2Data d = action11000101100100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010110010", d);
    d = ACC_give_then (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010110010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011001");
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
  {
    register AN2Data d = action1100010110010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001011001", d);
    d = ACC_enact (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001011001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11000101100");
  {
    register AN2Data d1 = action110001011000 (data, bindings);
    register AN2Data d2 = action110001011001 (data, bindings);
    /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
    ATfprintf (stderr, "%s: A1 and then returned: %t\n", "11000101100", d1);
    ATfprintf (stderr, "%s: and then A2 returned: %t\n", "11000101100", d2);
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101101000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101101000");
  /* Current action: give the data _ then give tupleToList_ */
  {
    register AN2Data d =
      ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101101000", d);
    d = ACC_give_tupleToList (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101101000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101101001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101101001");
  /* Current action: provide false then give tupleToList_ */
  {
    register AN2Data d = an2_make_bool (0);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101101001", d);
    d = ACC_give_tupleToList (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101101001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110100");
  {
    register AN2Data d1 = action11000101101000 (data, bindings);
    register AN2Data d2 = action11000101101001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1100010110100", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1100010110100", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11000101101010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11000101101010");
  /* Current action: check _=_ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d = ACC_check_equals (data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n",
		 "11000101101010", d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n",
		 "11000101101010", d);
      return d;
    }
}
static AN2Data
action1100010110101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1100010110101");
  {
    register AN2Data d1 = action11000101101010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1100010110101", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1100010110101", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001011010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110001011010");
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy */
  {
    register AN2Data d = action1100010110100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001011010", d);
    d = action1100010110101 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001011010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000101101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11000101101");
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  {
    register AN2Data d = action110001011010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101101", d);
    d = ACC_GEN_provide (an2_make_empty (), d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010110 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1100010110");
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact otherwise select(give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) */
  if (!ACC_try ())
    {
      register AN2Data d = action11000101100 (data, bindings);
      ATfprintf (stderr, "%s: A1 otherwise returned: %t\n", "1100010110", d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = action11000101101 (data, bindings);
      ATfprintf (stderr, "%s: otherwise A2 returned: %t\n", "1100010110", d);
      return d;
    }
}
static AN2Data
action1100010111 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1100010111");
  /* Current action: provide () then raise */
  {
    register AN2Data d = an2_make_empty ();
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100010111", d);
    d = ACC_raise (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100010111", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110001011 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110001011");
  /* Current action: select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  if (!ACC_try ())
    {
      register AN2Data d = action1100010110 (data, bindings);
      ATfprintf (stderr, "%s: A1 otherwise returned: %t\n", "110001011", d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = action1100010111 (data, bindings);
      ATfprintf (stderr, "%s: otherwise A2 returned: %t\n", "110001011", d);
      return d;
    }
}
static AN2Data
action11000101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11000101");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  {
    register AN2Data d = action110001010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11000101", d);
    d = action110001011 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11000101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1100010");
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
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1100010", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1100010", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110001");
  /* Current action: provide ("unf", give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ */
  {
    register AN2Data d = action1100010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110001", d);
    d = ACC_give_binding (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11000");
  {
    register AN2Data d1 = bindings;
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
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1100");
  /* Current action: give current bindings and provide ("unf", give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise) then give binding_ then give overriding_ */
  {
    register AN2Data d = action11000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1100", d);
    d = ACC_give_overriding (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101000000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1101000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1101000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110100000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110100000");
  /* Current action: give current bindings and provide "x" then give bound_ */
  {
    register AN2Data d = action1101000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110100000", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110100000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11010000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11010000");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  {
    register AN2Data d = action110100000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11010000", d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11010000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101000");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  {
    register AN2Data d = action11010000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101000", d);
    d = ACC_inspect (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110100");
  {
    register AN2Data d1 = action1101000 (data, bindings);
    register AN2Data d2 = an2_make_int (0);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110100", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110100", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101010000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101010000");
  /* Current action: give #1_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (1, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101010000", d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101010000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101010001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101010001");
  /* Current action: give #2_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (2, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101010001", d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101010001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110101000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110101000");
  {
    register AN2Data d1 = action1101010000 (data, bindings);
    register AN2Data d2 = action1101010001 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110101000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110101000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101010010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101010010");
  /* Current action: check _>_ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d = ACC_check_greater_than (data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n", "1101010010",
		 d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n", "1101010010",
		 d);
      return d;
    }
}
static AN2Data
action110101001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110101001");
  {
    register AN2Data d1 = action1101010010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _>_ exceptionally fail and copy */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110101001", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110101001", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11010100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11010100");
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy */
  {
    register AN2Data d = action110101000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11010100", d);
    d = action110101001 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11010100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101010");
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy then provide true */
  {
    register AN2Data d = action11010100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101010", d);
    d = ACC_GEN_provide (an2_make_bool (1), d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110101");
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  if (!ACC_try ())
    {
      register AN2Data d = action1101010 (data, bindings);
      ATfprintf (stderr, "%s: A1 otherwise returned: %t\n", "110101", d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = an2_make_bool (0);
      ATfprintf (stderr, "%s: otherwise A2 returned: %t\n", "110101", d);
      return d;
    }
}
static AN2Data
action11010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11010");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false */
  {
    register AN2Data d = action110100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11010", d);
    d = action110101 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11011000000");
  /* Current action: give the data _ then give tupleToList_ */
  {
    register AN2Data d =
      ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11011000000", d);
    d = ACC_give_tupleToList (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11011000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11011000001");
  /* Current action: provide true then give tupleToList_ */
  {
    register AN2Data d = an2_make_bool (1);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11011000001", d);
    d = ACC_give_tupleToList (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11011000001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101100000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101100000");
  {
    register AN2Data d1 = action11011000000 (data, bindings);
    register AN2Data d2 = action11011000001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1101100000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1101100000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11011000010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11011000010");
  /* Current action: check _=_ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d = ACC_check_equals (data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n", "11011000010",
		 d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n", "11011000010",
		 d);
      return d;
    }
}
static AN2Data
action1101100001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101100001");
  {
    register AN2Data d1 = action11011000010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1101100001", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1101100001", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110110000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110110000");
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy */
  {
    register AN2Data d = action1101100000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110000", d);
    d = action1101100001 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000100000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11011000100000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("y");
/* Current action: give current bindings and provide "y" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11011000100000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11011000100000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100010000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1101100010000");
  /* Current action: give current bindings and provide "y" then give bound_ */
  {
    register AN2Data d = action11011000100000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101100010000", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101100010000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110001000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110001000");
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ */
  {
    register AN2Data d = action1101100010000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110001000", d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110001000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000100100000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11011000100100000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("y");
/* Current action: give current bindings and provide "y" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11011000100100000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11011000100100000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100010010000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1101100010010000");
  /* Current action: give current bindings and provide "y" then give bound_ */
  {
    register AN2Data d = action11011000100100000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101100010010000", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101100010010000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110001001000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110001001000");
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ */
  {
    register AN2Data d = action1101100010010000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110001001000", d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110001001000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000100100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11011000100100");
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect */
  {
    register AN2Data d = action110110001001000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11011000100100", d);
    d = ACC_inspect (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11011000100100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000100101000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11011000100101000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11011000100101000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11011000100101000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100010010100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1101100010010100");
  /* Current action: give current bindings and provide "x" then give bound_ */
  {
    register AN2Data d = action11011000100101000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101100010010100", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101100010010100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110001001010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110001001010");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  {
    register AN2Data d = action1101100010010100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110001001010", d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110001001010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000100101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11011000100101");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  {
    register AN2Data d = action110110001001010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11011000100101", d);
    d = ACC_inspect (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11011000100101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101100010010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1101100010010");
  {
    register AN2Data d1 = action11011000100100 (data, bindings);
    register AN2Data d2 = action11011000100101 (data, bindings);
/* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1101100010010", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1101100010010", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110110001001100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110001001100");
  /* Current action: give #1_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (1, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110001001100", d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110001001100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110001001101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110001001101");
  /* Current action: give #2_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (2, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110001001101", d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110001001101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000100110 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11011000100110");
  {
    register AN2Data d1 = action110110001001100 (data, bindings);
    register AN2Data d2 = action110110001001101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11011000100110", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11011000100110", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100010011 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1101100010011");
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
  {
    register AN2Data d = action11011000100110 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101100010011", d);
    d = ACC_give_times (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101100010011", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110001001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110001001");
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
  {
    register AN2Data d = action1101100010010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110001001", d);
    d = action1101100010011 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110001001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11011000100");
  {
    register AN2Data d1 = action110110001000 (data, bindings);
    register AN2Data d2 = action110110001001 (data, bindings);
/* Current action: give current bindings and provide "y" then give bound_ then give the cell_ and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11011000100", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11011000100", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101100010");
  /* Current action: give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update */
  {
    register AN2Data d = action11011000100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101100010", d);
    d = ACC_update (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101100010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000110000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11011000110000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11011000110000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11011000110000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100011000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1101100011000");
  /* Current action: give current bindings and provide "x" then give bound_ */
  {
    register AN2Data d = action11011000110000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101100011000", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101100011000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110001100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110001100");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  {
    register AN2Data d = action1101100011000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110001100", d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110001100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000110100000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11011000110100000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("x");
/* Current action: give current bindings and provide "x" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11011000110100000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11011000110100000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100011010000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1101100011010000");
  /* Current action: give current bindings and provide "x" then give bound_ */
  {
    register AN2Data d = action11011000110100000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101100011010000", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101100011010000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110001101000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110001101000");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ */
  {
    register AN2Data d = action1101100011010000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110001101000", d);
    d = ACC_GEN_give_the_datasort (AN2_CELL_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110001101000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000110100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11011000110100");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect */
  {
    register AN2Data d = action110110001101000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11011000110100", d);
    d = ACC_inspect (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11011000110100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101100011010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1101100011010");
  {
    register AN2Data d1 = action11011000110100 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1101100011010", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1101100011010", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110110001101100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110001101100");
  /* Current action: give #1_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (1, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110001101100", d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110001101100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110001101101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110001101101");
  /* Current action: give #2_ then give the int_ */
  {
    register AN2Data d = ACC_GEN_give_component (2, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110001101101", d);
    d = ACC_GEN_give_the_datasort (AN2_INT_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110001101101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000110110 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11011000110110");
  {
    register AN2Data d1 = action110110001101100 (data, bindings);
    register AN2Data d2 = action110110001101101 (data, bindings);
/* Current action: give #1_ then give the int_ and give #2_ then give the int_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11011000110110", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11011000110110", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100011011 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1101100011011");
  /* Current action: give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  {
    register AN2Data d = action11011000110110 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101100011011", d);
    d = ACC_give_minus (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101100011011", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110001101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110001101");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
  {
    register AN2Data d = action1101100011010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110001101", d);
    d = action1101100011011 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110001101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011000110 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11011000110");
  {
    register AN2Data d1 = action110110001100 (data, bindings);
    register AN2Data d2 = action110110001101 (data, bindings);
/* Current action: give current bindings and provide "x" then give bound_ then give the cell_ and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
		then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "11011000110", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "11011000110", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101100011 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101100011");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  {
    register AN2Data d = action11011000110 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101100011", d);
    d = ACC_update (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101100011", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110110001");
  {
    register AN2Data d1 = action1101100010 (data, bindings);
    register AN2Data d2 = action1101100011 (data, bindings);
    /* Current action: give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
    ATfprintf (stderr, "%s: A1 and then returned: %t\n", "110110001", d1);
    ATfprintf (stderr, "%s: and then A2 returned: %t\n", "110110001", d2);
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11011000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11011000");
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update */
  {
    register AN2Data d = action110110000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11011000", d);
    d = action110110001 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11011000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011001000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11011001000");
  /* Current action: give the data_ then give provide_ */
  {
    register AN2Data d =
      ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11011001000", d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11011001000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101100100100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1101100100100");
  /* Current action: give current bindings then give provide_ */
  {
    register AN2Data d = bindings;
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101100100100", d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101100100100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110010010100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110010010100");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110110010010100", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110110010010100", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11011001001010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "11011001001010");
  /* Current action: give current bindings and provide "unf" then give bound_ */
  {
    register AN2Data d = action110110010010100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11011001001010", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11011001001010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101100100101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1101100100101");
  /* Current action: give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
  {
    register AN2Data d = action11011001001010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101100100101", d);
    d = ACC_GEN_give_the_datasort (AN2_ACTION_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101100100101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110010010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "110110010010");
  {
    register AN2Data d1 = action1101100100100 (data, bindings);
    register AN2Data d2 = action1101100100101 (data, bindings);
/* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110110010010", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110110010010", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11011001001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11011001001");
  /* Current action: give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
  {
    register AN2Data d = action110110010010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11011001001", d);
    d = ACC_give_hence (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11011001001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101100100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101100100");
  {
    register AN2Data d1 = action11011001000 (data, bindings);
    register AN2Data d2 = action11011001001 (data, bindings);
/* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1101100100", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1101100100", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110110010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110110010");
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ */
  {
    register AN2Data d = action1101100100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110110010", d);
    d = ACC_give_then (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110110010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11011001");
  /* Current action: give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
  {
    register AN2Data d = action110110010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11011001", d);
    d = ACC_enact (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11011001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101100");
  {
    register AN2Data d1 = action11011000 (data, bindings);
    register AN2Data d2 = action11011001 (data, bindings);
    /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
       and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
       and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
       then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact */
    ATfprintf (stderr, "%s: A1 and then returned: %t\n", "1101100", d1);
    ATfprintf (stderr, "%s: and then A2 returned: %t\n", "1101100", d2);
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101101000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101101000");
  /* Current action: give the data _ then give tupleToList_ */
  {
    register AN2Data d =
      ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101101000", d);
    d = ACC_give_tupleToList (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101101000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101101001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101101001");
  /* Current action: provide false then give tupleToList_ */
  {
    register AN2Data d = an2_make_bool (0);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101101001", d);
    d = ACC_give_tupleToList (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101101001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110110100");
  {
    register AN2Data d1 = action1101101000 (data, bindings);
    register AN2Data d2 = action1101101001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110110100", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110110100", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1101101010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101101010");
  /* Current action: check _=_ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d = ACC_check_equals (data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n", "1101101010",
		 d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n", "1101101010",
		 d);
      return d;
    }
}
static AN2Data
action110110101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110110101");
  {
    register AN2Data d1 = action1101101010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "110110101", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "110110101", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11011010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11011010");
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy */
  {
    register AN2Data d = action110110100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11011010", d);
    d = action110110101 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11011010", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1101101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101101");
  /* Current action: give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  {
    register AN2Data d = action11011010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101101", d);
    d = ACC_GEN_provide (an2_make_empty (), d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110110 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110110");
  /* Current action: give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact otherwise select(give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) */
  if (!ACC_try ())
    {
      register AN2Data d = action1101100 (data, bindings);
      ATfprintf (stderr, "%s: A1 otherwise returned: %t\n", "110110", d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = action1101101 (data, bindings);
      ATfprintf (stderr, "%s: otherwise A2 returned: %t\n", "110110", d);
      return d;
    }
}
static AN2Data
action110111 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110111");
  /* Current action: provide () then raise */
  {
    register AN2Data d = an2_make_empty ();
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "110111", d);
    d = ACC_raise (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "110111", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11011 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11011");
  /* Current action: select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  if (!ACC_try ())
    {
      register AN2Data d = action110110 (data, bindings);
      ATfprintf (stderr, "%s: A1 otherwise returned: %t\n", "11011", d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = action110111 (data, bindings);
      ATfprintf (stderr, "%s: otherwise A2 returned: %t\n", "11011", d);
      return d;
    }
}
static AN2Data
action1101 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1101");
  /* Current action: give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 0 
     then give #1_ then give the int_ and give #2_ then give the int_ then check _>_ exceptionally fail and copy
     then provide true otherwise provide false then select (
     give the data _ then give tupleToList_ and provide true then give tupleToList_ then check _=_ exceptionally fail and copy then give current bindings and provide "y" then give bound_ then give the cell_
     and give current bindings and provide "y" then give bound_ then give the cell_ then inspect and give current bindings and provide "x" then give bound_ then give the cell_ then inspect 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _*_ then update and then give current bindings and provide "x" then give bound_ then give the cell_
     and give current bindings and provide "x" then give bound_ then give the cell_ then inspect and provide 1 
     then give #1_ then give the int_ and give #2_ then give the int_ then give _-_ then update and then give the data_ then give provide_ and give current bindings then give provide_ and give current bindings and provide "unf" then give bound_ then give the action[taking () giving bindings]_ then give _hence_ then give _then_ then enact or
     give the data _ then give tupleToList_ and provide false then give tupleToList_ then check _=_ exceptionally fail and copy then provide ()) otherwise provide () then raise */
  {
    register AN2Data d = action11010 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1101", d);
    d = action11011 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1101", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "110");
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
    ATfprintf (stderr, "%s: A1 hence returned: %t\n", "110", new_bindings);
    if (an2_has_type (new_bindings, AN2_BINDINGS_TYPE))
      {
	AN2Data d = action1101 (data, new_bindings);
	ATfprintf (stderr, "%s: hence A2 returned: %t\n", "110", d);
	return d;
      }
    ACC_throw_exception (an2_make_empty ());
  }
}
static AN2Data
action1110000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1110000");
  /* Current action: give the data _ then give tupleToList_ */
  {
    register AN2Data d =
      ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1110000", d);
    d = ACC_give_tupleToList (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1110000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1110001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1110001");
  /* Current action: provide "break" then give tupleToList_ */
  {
    register AN2Data d = an2_make_token ("break");
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1110001", d);
    d = ACC_give_tupleToList (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1110001", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action111000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "111000");
  {
    register AN2Data d1 = action1110000 (data, bindings);
    register AN2Data d2 = action1110001 (data, bindings);
/* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "111000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "111000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110010 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1110010");
  /* Current action: check _=_ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d = ACC_check_equals (data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n", "1110010", d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n", "1110010", d);
      return d;
    }
}
static AN2Data
action111001 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "111001");
  {
    register AN2Data d1 = action1110010 (data, bindings);
    register AN2Data d2 = data;
/* Current action: check _=_ exceptionally fail and copy */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "111001", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "111001", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11100");
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy */
  {
    register AN2Data d = action111000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "11100", d);
    d = action111001 (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "11100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1110 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1110");
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () */
  {
    register AN2Data d = action11100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1110", d);
    d = ACC_GEN_provide (an2_make_empty (), d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1110", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action111 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "111");
  /* Current action: give the data _ then give tupleToList_ and provide "break" then give tupleToList_ then check _=_ exceptionally fail and copy then provide () otherwise raise */
  if (!ACC_try ())
    {
      register AN2Data d = action1110 (data, bindings);
      ATfprintf (stderr, "%s: A1 otherwise returned: %t\n", "111", d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = ACC_raise (data, bindings);
      ATfprintf (stderr, "%s: otherwise A2 returned: %t\n", "111", d);
      return d;
    }
}
static AN2Data
action11 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "11");
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
  if (!ACC_try ())
    {
      register AN2Data d = action110 (data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n", "11", d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = action111 (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n", "11", d);
      return d;
    }
}
static AN2Data
action1 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1");
  {
    AN2Data new_bindings = action10 (data, bindings);
    /* Current action: give current bindings and provide 2 then create 
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
    ATfprintf (stderr, "%s: A1 hence returned: %t\n", "1", new_bindings);
    if (an2_has_type (new_bindings, AN2_BINDINGS_TYPE))
      {
	AN2Data d = action11 (data, new_bindings);
	ATfprintf (stderr, "%s: hence A2 returned: %t\n", "1", d);
	return d;
      }
    ACC_throw_exception (an2_make_empty ());
  }
}

int
main (int argc, char **argv)
{
  long bp;
  AN2Data bos;
  ACC_init_runtime (argc, argv, &bos, &bp);
  if (!ACC_try ())
    {
      ATprintf ("result = %t\n",
		action1 (an2_make_empty (), an2_make_no_bindings ()));
      an2_fprint_store (stdout, store);
    }
  else
    ATabort ("error or failure\n");
  return 0;
}
