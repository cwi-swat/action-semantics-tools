
#define DEBUG
#include "runtime.c"
static AN2Data
action1001 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide 3 then create */
  return ACC_create (an2_make_int (3), bindings);
}
static AN2Data
action100 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "x" and provide 3 then create */
  return ACC_merge (an2_make_token ("x"), action1001 (data, bindings));
}
static AN2Data
action10 (AN2Data data, AN2Data bindings)
{
  /* Current action: provide "x" and provide 3 then create then give binding_ */
  return ACC_give_binding (action100 (data, bindings), bindings);
}
static AN2Data
action11000 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ */
  return ACC_give_provide (bindings, bindings);
}
static AN2Data
action110010 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" */
  return ACC_merge (bindings, an2_make_token ("x"));
}
static AN2Data
action11001 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings and provide "x" then give bound_ */
  return ACC_give_bound (action110010 (data, bindings), bindings);
}
static AN2Data
action1100 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ and provide 
     give current bindings and provide "x" then give bound_ */
  return ACC_merge (action11000 (data, bindings),
		    ACC_make_action (action11001, 0));
}
static AN2Data
action110 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ and provide 
     give current bindings and provide "x" then give bound_ then give _hence_ */
  return ACC_give_hence (action1100 (data, bindings), bindings);
}
static AN2Data
action11 (AN2Data data, AN2Data bindings)
{
  /* Current action: give current bindings then give provide_ and provide 
     give current bindings and provide "x" then give bound_
     then give _hence_ then enact */
  return ACC_enact (action110 (data, bindings), bindings);
}
static AN2Data
action1 (AN2Data data, AN2Data bindings)
{
  {
    AN2Data new_bindings = action10 (data, bindings);
    /* Current action: provide "x" and provide 3 then create then give binding_ hence give current bindings then give provide_ and provide 
       give current bindings and provide "x" then give bound_
       then give _hence_ then enact */
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
      ATprintf ("END RESULT = %t\n",
		action1 (an2_make_empty (), an2_make_no_bindings ()));
      an2_fprint_store (stdout, store);
    }
  else
    ATabort ("error or failure\n");
  return 0;
}
