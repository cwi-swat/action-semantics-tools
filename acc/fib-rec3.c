#include "runtime.c"

AN2Data
action (AN2Data data, AN2Data bindings)
{
  register AN2Data result;
  AN2Data dev_null;
  {
    register AN2Data bindingsx, resultx;
    {
      register AN2Data resultxx1, resultxx2;
      resultxx1 = bindings;;
      {
	register AN2Data resultxx2x1, resultxx2x2;
	resultxx2x1 = an2_make_token ("unf");;
	{
	  AN2Data action (AN2Data data,
				   AN2Data bindings)
	  {
	    register AN2Data result;
	    AN2Data dev_null;
	    if (!ACC_try ())
	      {
		if (!ACC_try ())
		  {
		    dev_null = ACC_merge (data, an2_make_int (0));
		    if (!ACC_try ())
		      {
			dev_null = ACC_check_equals (dev_null, bindings);
		      }
		    else
		      {
			dev_null = ACC_catch_exception ();
			dev_null = ACC_fail (NULL, bindings);
		      }
		    result = an2_make_int (1);
		  }
		else
		  {
		    ACC_catch_failure ();
		    dev_null = ACC_merge (data, an2_make_int (1));
		    if (!ACC_try ())
		      {
			dev_null = ACC_check_equals (dev_null, bindings);
		      }
		    else
		      {
			dev_null = ACC_catch_exception ();
			dev_null = ACC_fail (NULL, bindings);
		      }
		    result = an2_make_int (1);
		  }
	      }
	    else
	      {
		ACC_catch_failure ();
		result =
		  ACC_give_plus (ACC_merge
				 (ACC_enact
				  (ACC_give_then
				   (ACC_merge
				    (ACC_give_provide
				     (ACC_GEN_give_the_datasort
				      (AN2_DATA_CASTABLE_TYPE,
				       ACC_give_minus (ACC_merge
						       (data,
							an2_make_int (2)),
						       bindings), bindings),
				      bindings),
				     ACC_give_hence (ACC_merge
						     (ACC_give_provide
						      (bindings, bindings),
						      ACC_GEN_give_the_datasort
						      (AN2_ACTION_TYPE,
						       ACC_give_bound
						       (ACC_merge
							(bindings,
							 an2_make_token
							 ("unf")), bindings),
						       bindings)), bindings)),
				    bindings), bindings),
				  ACC_enact (ACC_give_then
					     (ACC_merge
					      (ACC_give_provide
					       (ACC_GEN_give_the_datasort
						(AN2_DATA_CASTABLE_TYPE,
						 ACC_give_minus (ACC_merge
								 (data,
								  an2_make_int
								  (1)),
								 bindings),
						 bindings), bindings),
					       ACC_give_hence (ACC_merge
							       (ACC_give_provide
								(bindings,
								 bindings),
								ACC_GEN_give_the_datasort
								(AN2_ACTION_TYPE,
								 ACC_give_bound
								 (ACC_merge
								  (bindings,
								   an2_make_token
								   ("unf")),
								  bindings),
								 bindings)),
							       bindings)),
					      bindings), bindings)),
				 bindings);
	      }
	    return result;
	  }
	  resultxx2x2 = ACC_make_action (action, 0);
	}
	resultxx2 = ACC_merge (resultxx2x1, resultxx2x2);
      }
      resultxx2 = ACC_give_binding (resultxx2, bindings);
      resultx = ACC_merge (resultxx1, resultxx2);
    }
    resultx = ACC_give_overriding (resultx, bindings);;
    if (an2_has_type (resultx, AN2_BINDINGS_TYPE))
      {
	bindingsx = resultx;
	if (!ACC_try ())
	  {
	    if (!ACC_try ())
	      {
		dev_null = ACC_merge (data, an2_make_int (0));
		if (!ACC_try ())
		  {
		    dev_null = ACC_check_equals (dev_null, bindingsx);
		  }
		else
		  {
		    dev_null = ACC_catch_exception ();
		    dev_null = ACC_fail (NULL, bindingsx);
		  }
		result = an2_make_int (1);
	      }
	    else
	      {
		ACC_catch_failure ();
		dev_null = ACC_merge (data, an2_make_int (1));
		if (!ACC_try ())
		  {
		    dev_null = ACC_check_equals (dev_null, bindingsx);
		  }
		else
		  {
		    dev_null = ACC_catch_exception ();
		    dev_null = ACC_fail (NULL, bindingsx);
		  }
		result = an2_make_int (1);
	      }
	  }
	else
	  {
	    ACC_catch_failure ();
	    result =
	      ACC_give_plus (ACC_merge
			     (ACC_enact
			      (ACC_give_then
			       (ACC_merge
				(ACC_give_provide
				 (ACC_GEN_give_the_datasort
				  (AN2_DATA_CASTABLE_TYPE,
				   ACC_give_minus (ACC_merge
						   (data, an2_make_int (2)),
						   bindingsx), bindingsx),
				  bindingsx),
				 ACC_give_hence (ACC_merge
						 (ACC_give_provide
						  (bindingsx, bindingsx),
						  ACC_GEN_give_the_datasort
						  (AN2_ACTION_TYPE,
						   ACC_give_bound (ACC_merge
								   (bindingsx,
								    an2_make_token
								    ("unf")),
								   bindingsx),
						   bindingsx)), bindingsx)),
				bindingsx), bindingsx),
			      ACC_enact (ACC_give_then
					 (ACC_merge
					  (ACC_give_provide
					   (ACC_GEN_give_the_datasort
					    (AN2_DATA_CASTABLE_TYPE,
					     ACC_give_minus (ACC_merge
							     (data,
							      an2_make_int
							      (1)),
							     bindingsx),
					     bindingsx), bindingsx),
					   ACC_give_hence (ACC_merge
							   (ACC_give_provide
							    (bindingsx,
							     bindingsx),
							    ACC_GEN_give_the_datasort
							    (AN2_ACTION_TYPE,
							     ACC_give_bound
							     (ACC_merge
							      (bindingsx,
							       an2_make_token
							       ("unf")),
							      bindingsx),
							     bindingsx)),
							   bindingsx)),
					  bindingsx), bindingsx)), bindingsx);
	  }
      }
    else
      ACC_throw_exception (an2_make_empty ());
  }
  return result;
}

int
main (int argc, char **argv)
{
  long bp;
  int i;
  AN2Data bos;
  ACC_init_runtime (argc, argv, &bos, &bp);
  if (argc == 2)
    i = atoi (argv[1]);
  else
    i = 1;
  if (!ACC_try ())
    {
      ATprintf ("result = %t\n",
		action (an2_make_int (i), an2_make_no_bindings ()));
      an2_fprint_store (stdout, store);
    }
  else
    ATabort ("error or failure\n");
  return 0;
}
