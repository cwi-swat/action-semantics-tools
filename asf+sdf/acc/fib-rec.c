static AN2Data
action11001010000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = data;
    register AN2Data d2 = an2_make_int (0);
/* Current action: copy and provide 0 */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001010001 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: check _ = _ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d = ACC_check_equals (data, bindings);
      //ATfprintf(stderr, "%s: A1 exceptionally returned: %t\n",to-stringliteral(n1), d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      //ATfprintf(stderr, "%s: exceptionally A2 returned: %t\n",to-stringliteral(n2), d);
      return d;
    }
}
static AN2Data
action1100101000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail */
  {
    register AN2Data d = action11001010000 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = action11001010001 (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110010100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 */
  {
    register AN2Data d = action1100101000 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_GEN_provide (an2_make_int (1), d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11001010100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = data;
    register AN2Data d2 = an2_make_int (1);
/* Current action: copy and provide 1 */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001010101 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: check _ = _ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d = ACC_check_equals (data, bindings);
      //ATfprintf(stderr, "%s: A1 exceptionally returned: %t\n",to-stringliteral(n1), d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      //ATfprintf(stderr, "%s: exceptionally A2 returned: %t\n",to-stringliteral(n2), d);
      return d;
    }
}
static AN2Data
action1100101010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 1 then check _ = _ exceptionally fail */
  {
    register AN2Data d = action11001010100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = action11001010101 (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110010101 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 1 then check _ = _ exceptionally fail then provide 1 */
  {
    register AN2Data d = action1100101010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_GEN_provide (an2_make_int (1), d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11001010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 */
  if (!ACC_try ())
    {
      register AN2Data d = action110010100 (data, bindings);
      //ATfprintf(stderr, "%s: A1 otherwise returned: %t\n",to-stringliteral(n1), d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = action110010101 (data, bindings);
      //ATfprintf(stderr, "%s: otherwise A2 returned: %t\n",to-stringliteral(n2), d);
      return d;
    }
}
static AN2Data
action110010110000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = data;
    register AN2Data d2 = an2_make_int (2);
/* Current action: copy and provide 2 */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001011000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 2 then give _ - _ */
  {
    register AN2Data d = action110010110000 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_minus (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11001011001000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ */
  {
    register AN2Data d =
      ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_provide (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100101100100100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings then give provide _ */
  {
    register AN2Data d = bindings;
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_provide (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110010110010010100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001011001001010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings and provide "unf" then give bound _ */
  {
    register AN2Data d = action110010110010010100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_bound (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100101100100101 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
  {
    register AN2Data d = action11001011001001010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_GEN_give_the_datasort (AN2_ACTION_TYPE, d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110010110010010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = action1100101100100100 (data, bindings);
    register AN2Data d2 = action1100101100100101 (data, bindings);
/* Current action: give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001011001001 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
  {
    register AN2Data d = action110010110010010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_hence (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100101100100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = action11001011001000 (data, bindings);
    register AN2Data d2 = action11001011001001 (data, bindings);
/* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110010110010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ */
  {
    register AN2Data d = action1100101100100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_then (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11001011001 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d = action110010110010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_enact (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100101100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d = action11001011000 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = action11001011001 (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110010110100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = data;
    register AN2Data d2 = an2_make_int (1);
/* Current action: copy and provide 1 */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001011010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 1 then give _ - _ */
  {
    register AN2Data d = action110010110100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_minus (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11001011011000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ */
  {
    register AN2Data d =
      ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_provide (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100101101100100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings then give provide _ */
  {
    register AN2Data d = bindings;
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_provide (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110010110110010100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001011011001010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings and provide "unf" then give bound _ */
  {
    register AN2Data d = action110010110110010100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_bound (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100101101100101 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
  {
    register AN2Data d = action11001011011001010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_GEN_give_the_datasort (AN2_ACTION_TYPE, d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110010110110010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = action1100101101100100 (data, bindings);
    register AN2Data d2 = action1100101101100101 (data, bindings);
/* Current action: give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001011011001 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
  {
    register AN2Data d = action110010110110010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_hence (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100101101100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = action11001011011000 (data, bindings);
    register AN2Data d2 = action11001011011001 (data, bindings);
/* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110010110110 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ */
  {
    register AN2Data d = action1100101101100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_then (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11001011011 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d = action110010110110 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_enact (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100101101 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d = action11001011010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = action11001011011 (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action110010110 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = action1100101100 (data, bindings);
    register AN2Data d2 = action1100101101 (data, bindings);
/* Current action: copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001011 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ */
  {
    register AN2Data d = action110010110 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_plus (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100101 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ */
  if (!ACC_try ())
    {
      register AN2Data d = action11001010 (data, bindings);
      //ATfprintf(stderr, "%s: A1 otherwise returned: %t\n",to-stringliteral(n1), d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = action11001011 (data, bindings);
      //ATfprintf(stderr, "%s: otherwise A2 returned: %t\n",to-stringliteral(n2), d);
      return d;
    }
}
static AN2Data
action110010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = an2_make_token ("unf");
    register AN2Data d2 = ACC_make_action (action1100101, 0);
/* Current action: provide "unf" and provide copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11001 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ */
  {
    register AN2Data d = action110010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_binding (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = action11001 (data, bindings);
/* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action110 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ */
  {
    register AN2Data d = action1100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_overriding (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1110000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = data;
    register AN2Data d2 = an2_make_int (0);
/* Current action: copy and provide 0 */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110001 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: check _ = _ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d = ACC_check_equals (data, bindings);
      //ATfprintf(stderr, "%s: A1 exceptionally returned: %t\n",to-stringliteral(n1), d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      //ATfprintf(stderr, "%s: exceptionally A2 returned: %t\n",to-stringliteral(n2), d);
      return d;
    }
}
static AN2Data
action111000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail */
  {
    register AN2Data d = action1110000 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = action1110001 (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 */
  {
    register AN2Data d = action111000 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_GEN_provide (an2_make_int (1), d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1110100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = data;
    register AN2Data d2 = an2_make_int (1);
/* Current action: copy and provide 1 */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1110101 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: check _ = _ exceptionally fail */
  if (!ACC_try ())
    {
      register AN2Data d = ACC_check_equals (data, bindings);
      //ATfprintf(stderr, "%s: A1 exceptionally returned: %t\n",to-stringliteral(n1), d);
      return d;
    }
  else
    {
      register AN2Data d = ACC_catch_exception ();
      d = ACC_fail (d, bindings);
      //ATfprintf(stderr, "%s: exceptionally A2 returned: %t\n",to-stringliteral(n2), d);
      return d;
    }
}
static AN2Data
action111010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 1 then check _ = _ exceptionally fail */
  {
    register AN2Data d = action1110100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = action1110101 (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11101 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 1 then check _ = _ exceptionally fail then provide 1 */
  {
    register AN2Data d = action111010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_GEN_provide (an2_make_int (1), d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1110 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 */
  if (!ACC_try ())
    {
      register AN2Data d = action11100 (data, bindings);
      //ATfprintf(stderr, "%s: A1 otherwise returned: %t\n",to-stringliteral(n1), d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = action11101 (data, bindings);
      //ATfprintf(stderr, "%s: otherwise A2 returned: %t\n",to-stringliteral(n2), d);
      return d;
    }
}
static AN2Data
action11110000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = data;
    register AN2Data d2 = an2_make_int (2);
/* Current action: copy and provide 2 */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1111000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 2 then give _ - _ */
  {
    register AN2Data d = action11110000 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_minus (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1111001000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ */
  {
    register AN2Data d =
      ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_provide (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action111100100100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings then give provide _ */
  {
    register AN2Data d = bindings;
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_provide (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11110010010100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1111001001010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings and provide "unf" then give bound _ */
  {
    register AN2Data d = action11110010010100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_bound (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action111100100101 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
  {
    register AN2Data d = action1111001001010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_GEN_give_the_datasort (AN2_ACTION_TYPE, d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11110010010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = action111100100100 (data, bindings);
    register AN2Data d2 = action111100100101 (data, bindings);
/* Current action: give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1111001001 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
  {
    register AN2Data d = action11110010010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_hence (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action111100100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = action1111001000 (data, bindings);
    register AN2Data d2 = action1111001001 (data, bindings);
/* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11110010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ */
  {
    register AN2Data d = action111100100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_then (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1111001 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d = action11110010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_enact (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action111100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d = action1111000 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = action1111001 (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11110100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = data;
    register AN2Data d2 = an2_make_int (1);
/* Current action: copy and provide 1 */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1111010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 1 then give _ - _ */
  {
    register AN2Data d = action11110100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_minus (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1111011000 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ */
  {
    register AN2Data d =
      ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE, data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_provide (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action111101100100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings then give provide _ */
  {
    register AN2Data d = bindings;
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_provide (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11110110010100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = bindings;
    register AN2Data d2 = an2_make_token ("unf");
/* Current action: give current bindings and provide "unf" */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1111011001010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings and provide "unf" then give bound _ */
  {
    register AN2Data d = action11110110010100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_bound (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action111101100101 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
  {
    register AN2Data d = action1111011001010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_GEN_give_the_datasort (AN2_ACTION_TYPE, d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11110110010 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = action111101100100 (data, bindings);
    register AN2Data d2 = action111101100101 (data, bindings);
/* Current action: give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1111011001 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
  {
    register AN2Data d = action11110110010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_hence (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action111101100 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = action1111011000 (data, bindings);
    register AN2Data d2 = action1111011001 (data, bindings);
/* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action11110110 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ */
  {
    register AN2Data d = action111101100 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_then (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action1111011 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d = action11110110 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_enact (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action111101 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
  {
    register AN2Data d = action1111010 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = action1111011 (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action11110 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    register AN2Data d1 = action111100 (data, bindings);
    register AN2Data d2 = action111101 (data, bindings);
/* Current action: copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact */
    //ATfprintf(stderr, "%s: A1 and returned: %t\n",to-stringliteral(n1), d1);
    //ATfprintf(stderr, "%s: and A2 returned: %t\n",to-stringliteral(n2), d2);
/*return ACC_merge(action-to-exp(A1,n1), action-to-exp(A2,n2)); , n)*/
    return ACC_merge (d1, d2);
  }
}
static AN2Data
action1111 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ */
  {
    register AN2Data d = action11110 (data, bindings);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = ACC_give_plus (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
    return d;
/*return action-to-call(A2, n2, action-to-exp(A1, n1), bindings);*/
  }
}
static AN2Data
action111 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ */
  if (!ACC_try ())
    {
      register AN2Data d = action1110 (data, bindings);
      //ATfprintf(stderr, "%s: A1 otherwise returned: %t\n",to-stringliteral(n1), d);
      return d;
    }
  else
    {
      register AN2Data d;
      ACC_catch_failure ();
      d = action1111 (data, bindings);
      //ATfprintf(stderr, "%s: otherwise A2 returned: %t\n",to-stringliteral(n2), d);
      return d;
    }
}
static AN2Data
action11 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  {
    AN2Data new_bindings = action110 (data, bindings);
    /* Current action: give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ */
    //ATfprintf(stderr, "%s: A1 hence returned: %t\n", to-stringliteral(n1),new_bindings);
    if (an2_has_type (new_bindings, AN2_BINDINGS_TYPE))
      {
	AN2Data d = action111 (data, new_bindings);
	//ATfprintf(stderr, "%s: hence A2 returned: %t\n",to-stringliteral(n2), d);
	return d;
      }
    ACC_throw_exception (an2_make_empty ());
  }
}
static AN2Data
action1 (AN2Data data, AN2Data bindings)
{
  //fprintf(stderr, "############ current action = action%s\n", to-stringliteral(n));
  /* Current action: provide 5 then give current bindings and provide ( "unf" , copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ ) then give binding _ then give overriding _ hence copy and provide 0 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 1 then check _ = _ exceptionally fail then provide 1 otherwise copy and provide 2 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact and copy and provide 1 then give _ - _ then give the data _ then give provide _ and give current bindings then give provide _ and give current bindings and provide "unf" then give bound _ then give the action [ taking (  ) giving bindings ] _ then give _ hence _ then give _ then _ then enact then give _ + _ */
  {
    register AN2Data d = an2_make_int (5);
    //ATfprintf(stderr, "%s: A1 then returned: %t\n", to-stringliteral(n1),d);
    d = action11 (d, bindings);
    //ATfprintf(stderr, "%s: then A2 returned: %t\n", to-stringliteral(n2),d);
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
		action1 (an2_make_empty (), an2_make_no_bindings ()));
      an2_fprint_store (stdout, store);
    }
  else
    ATabort ("error or failure\n");
  return 0;
}
