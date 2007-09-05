#include "runtime.c"

static AN2Data
action100000000000000000000000000000000000000000110000000000000000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000000000000000000000000000000000000");
  {
    register AN2Data d1 = data;
    register AN2Data d2 = an2_make_int (0);
/* Current action: copy and provide 0 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000000000000000000000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000000000000000000000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action10000000000000000000000000000000000000000011000000000000000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000000000000000000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ */
  {
    register AN2Data d =
      action100000000000000000000000000000000000000000110000000000000000000000000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000000000000000000000000",
	       d);
    d = ACC_check_equals (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000000000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000000000000000000000001100000000000000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100000000000000000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d =
	action10000000000000000000000000000000000000000011000000000000000000000000000000000000
	(data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n",
		 "1000000000000000000000000000000000000000001100000000000000000000000000000000000",
		 d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n",
		 "1000000000000000000000000000000000000000001100000000000000000000000000000000000",
		 d);
      return d;
    }
}
static AN2Data
action100000000000000000000000000000000000000000110000000000000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000000000000000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 */
  {
    register AN2Data d =
      action1000000000000000000000000000000000000000001100000000000000000000000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000000000000000000",
	       d);
    d = ACC_GEN_provide (an2_make_int (1), d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000000000000000000000000000011000000000000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000000000000000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy */
  if (!ACC_try ())
    {
      register AN2Data d =
	action100000000000000000000000000000000000000000110000000000000000000000000000000000
	(data, bindings);
      ATfprintf (stderr, "%s: A1 otherwise returned: %t\n",
		 "10000000000000000000000000000000000000000011000000000000000000000000000000000",
		 d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = data;
      ATfprintf (stderr, "%s: otherwise A2 returned: %t\n",
		 "10000000000000000000000000000000000000000011000000000000000000000000000000000",
		 d);
      return d;
    }
}
static AN2Data
action1000000000000000000000000000000000000000001100000000000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100000000000000000000000000000000");
  {
    register AN2Data d1 =
      action10000000000000000000000000000000000000000011000000000000000000000000000000000
      (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000000000000000000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000000000000000000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action100000000000000000000000000000000000000000110000000000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000000000000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ */
  {
    register AN2Data d =
      action1000000000000000000000000000000000000000001100000000000000000000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000000000000000",
	       d);
    d = ACC_check_equals (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000000000000000000000000000011000000000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000000000000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d =
	action100000000000000000000000000000000000000000110000000000000000000000000000000
	(data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n",
		 "10000000000000000000000000000000000000000011000000000000000000000000000000",
		 d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n",
		 "10000000000000000000000000000000000000000011000000000000000000000000000000",
		 d);
      return d;
    }
}
static AN2Data
action1000000000000000000000000000000000000000001100000000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100000000000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 */
  {
    register AN2Data d =
      action10000000000000000000000000000000000000000011000000000000000000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000000000000000",
	       d);
    d = ACC_GEN_provide (an2_make_int (1), d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000000000000000000000000000000110000000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000000000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy */
  if (!ACC_try ())
    {
      register AN2Data d =
	action1000000000000000000000000000000000000000001100000000000000000000000000000
	(data, bindings);
      ATfprintf (stderr, "%s: A1 otherwise returned: %t\n",
		 "100000000000000000000000000000000000000000110000000000000000000000000000",
		 d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = data;
      ATfprintf (stderr, "%s: otherwise A2 returned: %t\n",
		 "100000000000000000000000000000000000000000110000000000000000000000000000",
		 d);
      return d;
    }
}
static AN2Data
action10000000000000000000000000000000000000000011000000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000000000000000000000000000");
  {
    register AN2Data d1 =
      action100000000000000000000000000000000000000000110000000000000000000000000000
      (data, bindings);
    register AN2Data d2 = an2_make_int (2);
/* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000000000000000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000000000000000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1000000000000000000000000000000000000000001100000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100000000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ */
  {
    register AN2Data d =
      action10000000000000000000000000000000000000000011000000000000000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000000000000",
	       d);
    d = ACC_give_minus (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000000000000000000000000000000110000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ */
  {
    register AN2Data d =
      action1000000000000000000000000000000000000000001100000000000000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000000000",
	       d);
    d = ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000000000000000000000000000011000000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ */
  {
    register AN2Data d =
      action100000000000000000000000000000000000000000110000000000000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000000000000",
	       d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000000000000000000000001100000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100000000000000000000000");
  {
    register AN2Data d1 =
      action10000000000000000000000000000000000000000011000000000000000000000000
      (data, bindings);
    register AN2Data d2 = bindings;
/* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000000000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000000000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action100000000000000000000000000000000000000000110000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ */
  {
    register AN2Data d =
      action1000000000000000000000000000000000000000001100000000000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000000",
	       d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000000000000000000000000000011000000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000000000000000000000");
  {
    register AN2Data d1 =
      action100000000000000000000000000000000000000000110000000000000000000000
      (data, bindings);
    register AN2Data d2 = bindings;
/* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000000000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000000000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1000000000000000000000000000000000000000001100000000000000000000
  (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100000000000000000000");
  {
    register AN2Data d1 =
      action10000000000000000000000000000000000000000011000000000000000000000
      (data, bindings);
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action100000000000000000000000000000000000000000110000000000000000000 (AN2Data
								       data,
								       AN2Data
								       bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ */
  {
    register AN2Data d =
      action1000000000000000000000000000000000000000001100000000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000",
	       d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000000000000000000000000000011000000000000000000 (AN2Data
								      data,
								      AN2Data
								      bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
  {
    register AN2Data d =
      action100000000000000000000000000000000000000000110000000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000000",
	       d);
    d = ACC_GEN_give_the_datasort (AN2_ACTION_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000000000000000000000001100000000000000000 (AN2Data
								     data,
								     AN2Data
								     bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
  {
    register AN2Data d =
      action10000000000000000000000000000000000000000011000000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000",
	       d);
    d = ACC_give_hence (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000000000000000000000000000000110000000000000000 (AN2Data
								    data,
								    AN2Data
								    bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ */
  {
    register AN2Data d =
      action1000000000000000000000000000000000000000001100000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000",
	       d);
    d = ACC_give_then (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000000000000000000000000000011000000000000000 (AN2Data
								   data,
								   AN2Data
								   bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d =
      action100000000000000000000000000000000000000000110000000000000000
      (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000",
	       d);
    d = ACC_enact (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000000000000000000000001100000000000000 (AN2Data
								  data,
								  AN2Data
								  bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100000000000000");
  {
    register AN2Data d1 =
      action10000000000000000000000000000000000000000011000000000000000 (data,
									 bindings);
    register AN2Data d2 = data;
/* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action100000000000000000000000000000000000000000110000000000000 (AN2Data data,
								 AN2Data
								 bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000000000000");
  {
    register AN2Data d1 =
      action1000000000000000000000000000000000000000001100000000000000 (data,
									bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action10000000000000000000000000000000000000000011000000000000 (AN2Data data,
								AN2Data
								bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ */
  {
    register AN2Data d =
      action100000000000000000000000000000000000000000110000000000000 (data,
								       bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000", d);
    d = ACC_give_minus (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000000000000000000000001100000000000 (AN2Data data,
							       AN2Data
							       bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ */
  {
    register AN2Data d =
      action10000000000000000000000000000000000000000011000000000000 (data,
								      bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000", d);
    d = ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000000000000000000000000000000110000000000 (AN2Data data,
							      AN2Data
							      bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ */
  {
    register AN2Data d =
      action1000000000000000000000000000000000000000001100000000000 (data,
								     bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000", d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000000000000000000000000000011000000000 (AN2Data data,
							     AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000000000");
  {
    register AN2Data d1 =
      action100000000000000000000000000000000000000000110000000000 (data,
								    bindings);
    register AN2Data d2 = bindings;
/* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "10000000000000000000000000000000000000000011000000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1000000000000000000000000000000000000000001100000000 (AN2Data data,
							    AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100000000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ */
  {
    register AN2Data d =
      action10000000000000000000000000000000000000000011000000000 (data,
								   bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000", d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001100000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000000000000000000000000000000110000000 (AN2Data data,
							   AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000000");
  {
    register AN2Data d1 =
      action1000000000000000000000000000000000000000001100000000 (data,
								  bindings);
    register AN2Data d2 = bindings;
/* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "100000000000000000000000000000000000000000110000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action10000000000000000000000000000000000000000011000000 (AN2Data data,
							  AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000000");
  {
    register AN2Data d1 =
      action100000000000000000000000000000000000000000110000000 (data,
								 bindings);
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "10000000000000000000000000000000000000000011000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "10000000000000000000000000000000000000000011000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1000000000000000000000000000000000000000001100000 (AN2Data data,
							 AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ */
  {
    register AN2Data d =
      action10000000000000000000000000000000000000000011000000 (data,
								bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "1000000000000000000000000000000000000000001100000", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001100000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000000000000000000000000000000110000 (AN2Data data,
							AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
  {
    register AN2Data d =
      action1000000000000000000000000000000000000000001100000 (data,
							       bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "100000000000000000000000000000000000000000110000", d);
    d = ACC_GEN_give_the_datasort (AN2_ACTION_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000000000000000000000000000011000 (AN2Data data,
						       AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011000");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
  {
    register AN2Data d =
      action100000000000000000000000000000000000000000110000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000000000000000000000011000", d);
    d = ACC_give_hence (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000000000000000000000011000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000000000000000000000001100 (AN2Data data,
						      AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001100");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ */
  {
    register AN2Data d =
      action10000000000000000000000000000000000000000011000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "1000000000000000000000000000000000000000001100", d);
    d = ACC_give_then (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000000000000000000000000000000110 (AN2Data data,
						     AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000110");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d =
      action1000000000000000000000000000000000000000001100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "100000000000000000000000000000000000000000110", d);
    d = ACC_enact (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "100000000000000000000000000000000000000000110", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000000000000000000000000000011 (AN2Data data,
						    AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000011");
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ */
  {
    register AN2Data d =
      action100000000000000000000000000000000000000000110 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000000000000000000000011", d);
    d = ACC_give_plus (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000000000000000000000011", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000000000000000000000001 (AN2Data data,
						   AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000001");
  {
    register AN2Data d1 = an2_make_token ("unf");
    register AN2Data d2 =
      ACC_make_action (action10000000000000000000000000000000000000000011, 0);
/* Current action: provide "unf" and provide copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "1000000000000000000000000000000000000000001", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "1000000000000000000000000000000000000000001", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action100000000000000000000000000000000000000000 (AN2Data data,
						  AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000000");
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 =
      action1000000000000000000000000000000000000000001 (data, bindings);
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "100000000000000000000000000000000000000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "100000000000000000000000000000000000000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action10000000000000000000000000000000000000000 (AN2Data data,
						 AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ */
  {
    register AN2Data d =
      action100000000000000000000000000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000000000000000000000", d);
    d = ACC_give_binding (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000000000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000000000000000000000 (AN2Data data,
						AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ */
  {
    register AN2Data d =
      action10000000000000000000000000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "1000000000000000000000000000000000000000", d);
    d = ACC_give_overriding (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "1000000000000000000000000000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000000");
  {
    AN2Data new_bindings =
      action1000000000000000000000000000000000000000 (data, bindings);
    /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy */
    ATfprintf (stderr, "%s: A1 hence returned: %t\n",
	       "100000000000000000000000000000000000000", new_bindings);
    if (an2_has_type (new_bindings, AN2_BINDINGS_TYPE))
      {
	AN2Data d = ACC_copy (data, new_bindings);
	ATfprintf (stderr, "%s: hence A2 returned: %t\n",
		   "100000000000000000000000000000000000000", d);
	return d;
      }
    ACC_throw_exception (an2_make_empty ());
  }
}
static AN2Data
action10000000000000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000000");
  {
    register AN2Data d1 =
      action100000000000000000000000000000000000000 (data, bindings);
    register AN2Data d2 = an2_make_int (0);
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "10000000000000000000000000000000000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "10000000000000000000000000000000000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1000000000000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ */
  {
    register AN2Data d =
      action10000000000000000000000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "1000000000000000000000000000000000000", d);
    d = ACC_check_equals (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "1000000000000000000000000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d =
	action1000000000000000000000000000000000000 (data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n",
		 "100000000000000000000000000000000000", d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n",
		 "100000000000000000000000000000000000", d);
      return d;
    }
}
static AN2Data
action10000000000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 */
  {
    register AN2Data d =
      action100000000000000000000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000000000000000", d);
    d = ACC_GEN_provide (an2_make_int (1), d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy */
  if (!ACC_try ())
    {
      register AN2Data d =
	action10000000000000000000000000000000000 (data, bindings);
      ATfprintf (stderr, "%s: A1 otherwise returned: %t\n",
		 "1000000000000000000000000000000000", d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = data;
      ATfprintf (stderr, "%s: otherwise A2 returned: %t\n",
		 "1000000000000000000000000000000000", d);
      return d;
    }
}
static AN2Data
action100000000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000000");
  {
    register AN2Data d1 =
      action1000000000000000000000000000000000 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "100000000000000000000000000000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "100000000000000000000000000000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action10000000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ */
  {
    register AN2Data d =
      action100000000000000000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000000000000", d);
    d = ACC_check_equals (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d =
	action10000000000000000000000000000000 (data, bindings);
      ATfprintf (stderr, "%s: A1 exceptionally returned: %t\n",
		 "1000000000000000000000000000000", d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      ATfprintf (stderr, "%s: exceptionally A2 returned: %t\n",
		 "1000000000000000000000000000000", d);
      return d;
    }
}
static AN2Data
action100000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 */
  {
    register AN2Data d =
      action1000000000000000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "100000000000000000000000000000", d);
    d = ACC_GEN_provide (an2_make_int (1), d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "100000000000000000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy */
  if (!ACC_try ())
    {
      register AN2Data d =
	action100000000000000000000000000000 (data, bindings);
      ATfprintf (stderr, "%s: A1 otherwise returned: %t\n",
		 "10000000000000000000000000000", d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = data;
      ATfprintf (stderr, "%s: otherwise A2 returned: %t\n",
		 "10000000000000000000000000000", d);
      return d;
    }
}
static AN2Data
action1000000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000000");
  {
    register AN2Data d1 =
      action10000000000000000000000000000 (data, bindings);
    register AN2Data d2 = an2_make_int (2);
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "1000000000000000000000000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "1000000000000000000000000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action100000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ */
  {
    register AN2Data d = action1000000000000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "100000000000000000000000000", d);
    d = ACC_give_minus (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "100000000000000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ */
  {
    register AN2Data d = action100000000000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000000", d);
    d = ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ */
  {
    register AN2Data d = action10000000000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "1000000000000000000000000", d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "1000000000000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000000");
  {
    register AN2Data d1 = action1000000000000000000000000 (data, bindings);
    register AN2Data d2 = bindings;
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings */
    ATfprintf (stderr, "%s: A1 and returned: %t\n",
	       "100000000000000000000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n",
	       "100000000000000000000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action10000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ */
  {
    register AN2Data d = action100000000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n",
	       "10000000000000000000000", d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n",
	       "10000000000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000000");
  {
    register AN2Data d1 = action10000000000000000000000 (data, bindings);
    register AN2Data d2 = bindings;
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1000000000000000000000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1000000000000000000000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action100000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000000");
  {
    register AN2Data d1 = action1000000000000000000000 (data, bindings);
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "100000000000000000000",
	       d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "100000000000000000000",
	       d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action10000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ */
  {
    register AN2Data d = action100000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "10000000000000000000",
	       d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "10000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
  {
    register AN2Data d = action10000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1000000000000000000",
	       d);
    d = ACC_GEN_give_the_datasort (AN2_ACTION_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1000000000000000000",
	       d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
  {
    register AN2Data d = action1000000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "100000000000000000", d);
    d = ACC_give_hence (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "100000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ */
  {
    register AN2Data d = action100000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "10000000000000000", d);
    d = ACC_give_then (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "10000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d = action10000000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1000000000000000", d);
    d = ACC_enact (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1000000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000000");
  {
    register AN2Data d1 = action1000000000000000 (data, bindings);
    register AN2Data d2 = data;
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "100000000000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "100000000000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action10000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "10000000000000");
  {
    register AN2Data d1 = action100000000000000 (data, bindings);
    register AN2Data d2 = an2_make_int (1);
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "10000000000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "10000000000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1000000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "1000000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ */
  {
    register AN2Data d = action10000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1000000000000", d);
    d = ACC_give_minus (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1000000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n",
	   "100000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ */
  {
    register AN2Data d = action1000000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "100000000000", d);
    d = ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "100000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "10000000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ */
  {
    register AN2Data d = action100000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "10000000000", d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "10000000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1000000000");
  {
    register AN2Data d1 = action10000000000 (data, bindings);
    register AN2Data d2 = bindings;
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1000000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1000000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action100000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "100000000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ */
  {
    register AN2Data d = action1000000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "100000000", d);
    d = ACC_give_provide (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "100000000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "10000000");
  {
    register AN2Data d1 = action100000000 (data, bindings);
    register AN2Data d2 = bindings;
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "10000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "10000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1000000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1000000");
  {
    register AN2Data d1 = action10000000 (data, bindings);
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" */
    ATfprintf (stderr, "%s: A1 and returned: %t\n", "1000000", d1);
    ATfprintf (stderr, "%s: and A2 returned: %t\n", "1000000", d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action100000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "100000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ */
  {
    register AN2Data d = action1000000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "100000", d);
    d = ACC_give_bound (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "100000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "10000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
  {
    register AN2Data d = action100000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "10000", d);
    d = ACC_GEN_give_the_datasort (AN2_ACTION_TYPE, d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "10000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1000 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1000");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
  {
    register AN2Data d = action10000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1000", d);
    d = ACC_give_hence (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1000", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action100 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "100");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ */
  {
    register AN2Data d = action1000 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "100", d);
    d = ACC_give_then (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "100", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action10 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "10");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d = action100 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "10", d);
    d = ACC_enact (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "10", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1 (AN2Data data, AN2Data bindings)
{
  fprintf (stderr, "############ current action = action%s\n", "1");
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ */
  {
    register AN2Data d = action10 (data, bindings);
    ATfprintf (stderr, "%s: A1 then returned: %t\n", "1", d);
    d = ACC_give_plus (d, bindings);
    ATfprintf (stderr, "%s: then A2 returned: %t\n", "1", d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
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
		action1 (an2_make_int (4), an2_make_no_bindings ()));
      an2_fprint_store (stdout, store);
    }
  else
    ATabort ("error or failure\n");
  return 0;
}
