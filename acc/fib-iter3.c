
#include "runtime.c"

AN2Data
action (AN2Data data, AN2Data bindings)
{
  register AN2Data result;
  AN2Data temp;
  {
    register AN2Data bindingsx, resultx;
    resultx = ACC_give_overriding (ACC_merge (bindings,
					      ACC_give_disjoint_union
					      (ACC_merge
					       (ACC_give_binding
						(ACC_merge
						 (an2_make_token ("n"),
						  ACC_GEN_give_the_datasort
						  (AN2_CELL_TYPE,
						   ACC_create (data,
							       bindings),
						   bindings)), bindings),
						ACC_give_disjoint_union
						(ACC_merge
						 (ACC_give_binding
						  (ACC_merge
						   (an2_make_token ("i"),
						    ACC_GEN_give_the_datasort
						    (AN2_CELL_TYPE,
						     ACC_create (an2_make_int
								 (1),
								 bindings),
						     bindings)), bindings),
						  ACC_give_disjoint_union
						  (ACC_merge
						   (ACC_give_binding
						    (ACC_merge
						     (an2_make_token ("j"),
						      ACC_GEN_give_the_datasort
						      (AN2_CELL_TYPE,
						       ACC_create
						       (an2_make_int (0),
							bindings), bindings)),
						     bindings),
						    ACC_give_binding
						    (ACC_merge
						     (an2_make_token ("k"),
						      ACC_GEN_give_the_datasort
						      (AN2_CELL_TYPE,
						       ACC_create
						       (an2_make_int (0),
							bindings), bindings)),
						     bindings)), bindings)),
						 bindings)), bindings)),
				   bindings);;
    if (an2_has_type (resultx, AN2_BINDINGS_TYPE))
      {
	bindingsx = resultx;
	if (!ACC_try ())
	  {
	    {
	      register AN2Data bindingsxx, resultx;
	      {
		register AN2Data resultxx1, resultxx2;
		resultxx1 = bindingsx;;
		{
		  register AN2Data resultxx2x1, resultxx2x2;
		  resultxx2x1 = an2_make_token ("unf");;
		  {
		    AN2Data action (AN2Data data, AN2Data bindings)
		    {
		      register AN2Data result;
		      AN2Data temp;
		      {
			register AN2Data resultx;
			resultx =
			  ACC_merge (ACC_inspect
				     (ACC_GEN_give_the_datasort
				      (AN2_CELL_TYPE,
				       ACC_give_bound (ACC_merge
						       (bindings,
							an2_make_token ("k")),
						       bindings), bindings),
				      bindings),
				     ACC_inspect (ACC_GEN_give_the_datasort
						  (AN2_CELL_TYPE,
						   ACC_give_bound (ACC_merge
								   (bindings,
								    an2_make_token
								    ("n")),
								   bindings),
						   bindings), bindings));
			if (!ACC_try ())
			  {
			    {
			      register AN2Data tempx;
			      tempx =
				ACC_merge (ACC_GEN_give_the_datasort
					   (AN2_INT_TYPE,
					    ACC_GEN_give_component (1,
								    resultx,
								    bindings),
					    bindings),
					   ACC_GEN_give_the_datasort
					   (AN2_INT_TYPE,
					    ACC_GEN_give_component (2,
								    resultx,
								    bindings),
					    bindings));
			      {
				register AN2Data tempx1, tempx2;
				if (!ACC_try ())
				  {
				    tempx1 =
				      ACC_check_less_than (tempx, bindings);
				  }
				else
				  {
				    temp = ACC_catch_exception ();
				    tempx1 = ACC_fail (NULL, bindings);
				  };
				tempx2 = tempx;
				temp = ACC_merge (tempx1, tempx2);
			      }
			    }
			    result = an2_make_bool (1);
			  }
			else
			  {
			    ACC_catch_failure ();
			    result = an2_make_bool (0);
			  }
		      }
		      if (!ACC_try ())
			{
			  if (!ACC_try ())
			    {
			      {
				register AN2Data tempx;
				tempx =
				  ACC_merge (ACC_give_tupleToList
					     (ACC_GEN_give_the_datasort
					      (AN2_DATA_CASTABLE_TYPE, result,
					       bindings), bindings),
					     ACC_give_tupleToList
					     (an2_make_bool (1), bindings));
				{
				  register AN2Data tempx1, tempx2;
				  if (!ACC_try ())
				    {
				      tempx1 =
					ACC_check_equals (tempx, bindings);
				    }
				  else
				    {
				      temp = ACC_catch_exception ();
				      tempx1 = ACC_fail (NULL, bindings);
				    };
				  tempx2 = tempx;
				  temp = ACC_merge (tempx1, tempx2);
				}
			      }
			      result =
				ACC_update (ACC_merge
					    (ACC_GEN_give_the_datasort
					     (AN2_CELL_TYPE,
					      ACC_give_bound (ACC_merge
							      (bindings,
							       an2_make_token
							       ("j")),
							      bindings),
					      bindings),
					     ACC_give_plus (ACC_merge
							    (ACC_GEN_give_the_datasort
							     (AN2_INT_TYPE,
							      ACC_GEN_give_component
							      (1,
							       ACC_merge
							       (ACC_inspect
								(ACC_GEN_give_the_datasort
								 (AN2_CELL_TYPE,
								  ACC_give_bound
								  (ACC_merge
								   (bindings,
								    an2_make_token
								    ("i")),
								   bindings),
								  bindings),
								 bindings),
								ACC_inspect
								(ACC_GEN_give_the_datasort
								 (AN2_CELL_TYPE,
								  ACC_give_bound
								  (ACC_merge
								   (bindings,
								    an2_make_token
								    ("j")),
								   bindings),
								  bindings),
								 bindings)),
							       bindings),
							      bindings),
							     ACC_GEN_give_the_datasort
							     (AN2_INT_TYPE,
							      ACC_GEN_give_component
							      (2,
							       ACC_merge
							       (ACC_inspect
								(ACC_GEN_give_the_datasort
								 (AN2_CELL_TYPE,
								  ACC_give_bound
								  (ACC_merge
								   (bindings,
								    an2_make_token
								    ("i")),
								   bindings),
								  bindings),
								 bindings),
								ACC_inspect
								(ACC_GEN_give_the_datasort
								 (AN2_CELL_TYPE,
								  ACC_give_bound
								  (ACC_merge
								   (bindings,
								    an2_make_token
								    ("j")),
								   bindings),
								  bindings),
								 bindings)),
							       bindings),
							      bindings)),
							    bindings)),
					    bindings);
			      result =
				ACC_update (ACC_merge
					    (ACC_GEN_give_the_datasort
					     (AN2_CELL_TYPE,
					      ACC_give_bound (ACC_merge
							      (bindings,
							       an2_make_token
							       ("i")),
							      bindings),
					      bindings),
					     ACC_give_minus (ACC_merge
							     (ACC_GEN_give_the_datasort
							      (AN2_INT_TYPE,
							       ACC_GEN_give_component
							       (1,
								ACC_merge
								(ACC_inspect
								 (ACC_GEN_give_the_datasort
								  (AN2_CELL_TYPE,
								   ACC_give_bound
								   (ACC_merge
								    (bindings,
								     an2_make_token
								     ("j")),
								    bindings),
								   bindings),
								  bindings),
								 ACC_inspect
								 (ACC_GEN_give_the_datasort
								  (AN2_CELL_TYPE,
								   ACC_give_bound
								   (ACC_merge
								    (bindings,
								     an2_make_token
								     ("i")),
								    bindings),
								   bindings),
								  bindings)),
								bindings),
							       bindings),
							      ACC_GEN_give_the_datasort
							      (AN2_INT_TYPE,
							       ACC_GEN_give_component
							       (2,
								ACC_merge
								(ACC_inspect
								 (ACC_GEN_give_the_datasort
								  (AN2_CELL_TYPE,
								   ACC_give_bound
								   (ACC_merge
								    (bindings,
								     an2_make_token
								     ("j")),
								    bindings),
								   bindings),
								  bindings),
								 ACC_inspect
								 (ACC_GEN_give_the_datasort
								  (AN2_CELL_TYPE,
								   ACC_give_bound
								   (ACC_merge
								    (bindings,
								     an2_make_token
								     ("i")),
								    bindings),
								   bindings),
								  bindings)),
								bindings),
							       bindings)),
							     bindings)),
					    bindings);
			      result =
				ACC_update (ACC_merge
					    (ACC_GEN_give_the_datasort
					     (AN2_CELL_TYPE,
					      ACC_give_bound (ACC_merge
							      (bindings,
							       an2_make_token
							       ("k")),
							      bindings),
					      bindings),
					     ACC_give_plus (ACC_merge
							    (ACC_GEN_give_the_datasort
							     (AN2_INT_TYPE,
							      ACC_GEN_give_component
							      (1,
							       ACC_merge
							       (ACC_inspect
								(ACC_GEN_give_the_datasort
								 (AN2_CELL_TYPE,
								  ACC_give_bound
								  (ACC_merge
								   (bindings,
								    an2_make_token
								    ("k")),
								   bindings),
								  bindings),
								 bindings),
								an2_make_int
								(1)),
							       bindings),
							      bindings),
							     ACC_GEN_give_the_datasort
							     (AN2_INT_TYPE,
							      ACC_GEN_give_component
							      (2,
							       ACC_merge
							       (ACC_inspect
								(ACC_GEN_give_the_datasort
								 (AN2_CELL_TYPE,
								  ACC_give_bound
								  (ACC_merge
								   (bindings,
								    an2_make_token
								    ("k")),
								   bindings),
								  bindings),
								 bindings),
								an2_make_int
								(1)),
							       bindings),
							      bindings)),
							    bindings)),
					    bindings);
			      result =
				ACC_enact (ACC_give_then
					   (ACC_merge
					    (ACC_give_provide
					     (ACC_GEN_give_the_datasort
					      (AN2_DATA_CASTABLE_TYPE, result,
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
					    bindings), bindings);
			    }
			  else
			    {
			      ACC_catch_failure ();
			      {
				register AN2Data tempx;
				tempx =
				  ACC_merge (ACC_give_tupleToList
					     (ACC_GEN_give_the_datasort
					      (AN2_DATA_CASTABLE_TYPE, result,
					       bindings), bindings),
					     ACC_give_tupleToList
					     (an2_make_bool (0), bindings));
				{
				  register AN2Data tempx1, tempx2;
				  if (!ACC_try ())
				    {
				      tempx1 =
					ACC_check_equals (tempx, bindings);
				    }
				  else
				    {
				      temp = ACC_catch_exception ();
				      tempx1 = ACC_fail (NULL, bindings);
				    };
				  tempx2 = tempx;
				  temp = ACC_merge (tempx1, tempx2);
				}
			      }
			      result = an2_make_empty ();
			    }
			}
		      else
			{
			  ACC_catch_failure ();
			  result = ACC_raise (an2_make_empty (), bindings);
			}
		      return result;
		    }
		    resultxx2x2 = ACC_make_action (action, 0);
		  }
		  resultxx2 = ACC_merge (resultxx2x1, resultxx2x2);
		}
		resultxx2 = ACC_give_binding (resultxx2, bindingsx);
		resultx = ACC_merge (resultxx1, resultxx2);
	      }
	      resultx = ACC_give_overriding (resultx, bindingsx);;
	      if (an2_has_type (resultx, AN2_BINDINGS_TYPE))
		{
		  bindingsxx = resultx;
		  {
		    register AN2Data resultx;
		    resultx =
		      ACC_merge (ACC_inspect
				 (ACC_GEN_give_the_datasort
				  (AN2_CELL_TYPE,
				   ACC_give_bound (ACC_merge
						   (bindingsxx,
						    an2_make_token ("k")),
						   bindingsxx), bindingsxx),
				  bindingsxx),
				 ACC_inspect (ACC_GEN_give_the_datasort
					      (AN2_CELL_TYPE,
					       ACC_give_bound (ACC_merge
							       (bindingsxx,
								an2_make_token
								("n")),
							       bindingsxx),
					       bindingsxx), bindingsxx));
		    if (!ACC_try ())
		      {
			{
			  register AN2Data tempx;
			  tempx =
			    ACC_merge (ACC_GEN_give_the_datasort
				       (AN2_INT_TYPE,
					ACC_GEN_give_component (1, resultx,
								bindingsxx),
					bindingsxx),
				       ACC_GEN_give_the_datasort
				       (AN2_INT_TYPE,
					ACC_GEN_give_component (2, resultx,
								bindingsxx),
					bindingsxx));
			  {
			    register AN2Data tempx1, tempx2;
			    if (!ACC_try ())
			      {
				tempx1 =
				  ACC_check_less_than (tempx, bindingsxx);
			      }
			    else
			      {
				temp = ACC_catch_exception ();
				tempx1 = ACC_fail (NULL, bindingsxx);
			      };
			    tempx2 = tempx;
			    temp = ACC_merge (tempx1, tempx2);
			  }
			}
			result = an2_make_bool (1);
		      }
		    else
		      {
			ACC_catch_failure ();
			result = an2_make_bool (0);
		      }
		  }
		  if (!ACC_try ())
		    {
		      if (!ACC_try ())
			{
			  {
			    register AN2Data tempx;
			    tempx =
			      ACC_merge (ACC_give_tupleToList
					 (ACC_GEN_give_the_datasort
					  (AN2_DATA_CASTABLE_TYPE, result,
					   bindingsxx), bindingsxx),
					 ACC_give_tupleToList (an2_make_bool
							       (1),
							       bindingsxx));
			    {
			      register AN2Data tempx1, tempx2;
			      if (!ACC_try ())
				{
				  tempx1 =
				    ACC_check_equals (tempx, bindingsxx);
				}
			      else
				{
				  temp = ACC_catch_exception ();
				  tempx1 = ACC_fail (NULL, bindingsxx);
				};
			      tempx2 = tempx;
			      temp = ACC_merge (tempx1, tempx2);
			    }
			  }
			  result =
			    ACC_update (ACC_merge
					(ACC_GEN_give_the_datasort
					 (AN2_CELL_TYPE,
					  ACC_give_bound (ACC_merge
							  (bindingsxx,
							   an2_make_token
							   ("j")),
							  bindingsxx),
					  bindingsxx),
					 ACC_give_plus (ACC_merge
							(ACC_GEN_give_the_datasort
							 (AN2_INT_TYPE,
							  ACC_GEN_give_component
							  (1,
							   ACC_merge
							   (ACC_inspect
							    (ACC_GEN_give_the_datasort
							     (AN2_CELL_TYPE,
							      ACC_give_bound
							      (ACC_merge
							       (bindingsxx,
								an2_make_token
								("i")),
							       bindingsxx),
							      bindingsxx),
							     bindingsxx),
							    ACC_inspect
							    (ACC_GEN_give_the_datasort
							     (AN2_CELL_TYPE,
							      ACC_give_bound
							      (ACC_merge
							       (bindingsxx,
								an2_make_token
								("j")),
							       bindingsxx),
							      bindingsxx),
							     bindingsxx)),
							   bindingsxx),
							  bindingsxx),
							 ACC_GEN_give_the_datasort
							 (AN2_INT_TYPE,
							  ACC_GEN_give_component
							  (2,
							   ACC_merge
							   (ACC_inspect
							    (ACC_GEN_give_the_datasort
							     (AN2_CELL_TYPE,
							      ACC_give_bound
							      (ACC_merge
							       (bindingsxx,
								an2_make_token
								("i")),
							       bindingsxx),
							      bindingsxx),
							     bindingsxx),
							    ACC_inspect
							    (ACC_GEN_give_the_datasort
							     (AN2_CELL_TYPE,
							      ACC_give_bound
							      (ACC_merge
							       (bindingsxx,
								an2_make_token
								("j")),
							       bindingsxx),
							      bindingsxx),
							     bindingsxx)),
							   bindingsxx),
							  bindingsxx)),
							bindingsxx)),
					bindingsxx);
			  result =
			    ACC_update (ACC_merge
					(ACC_GEN_give_the_datasort
					 (AN2_CELL_TYPE,
					  ACC_give_bound (ACC_merge
							  (bindingsxx,
							   an2_make_token
							   ("i")),
							  bindingsxx),
					  bindingsxx),
					 ACC_give_minus (ACC_merge
							 (ACC_GEN_give_the_datasort
							  (AN2_INT_TYPE,
							   ACC_GEN_give_component
							   (1,
							    ACC_merge
							    (ACC_inspect
							     (ACC_GEN_give_the_datasort
							      (AN2_CELL_TYPE,
							       ACC_give_bound
							       (ACC_merge
								(bindingsxx,
								 an2_make_token
								 ("j")),
								bindingsxx),
							       bindingsxx),
							      bindingsxx),
							     ACC_inspect
							     (ACC_GEN_give_the_datasort
							      (AN2_CELL_TYPE,
							       ACC_give_bound
							       (ACC_merge
								(bindingsxx,
								 an2_make_token
								 ("i")),
								bindingsxx),
							       bindingsxx),
							      bindingsxx)),
							    bindingsxx),
							   bindingsxx),
							  ACC_GEN_give_the_datasort
							  (AN2_INT_TYPE,
							   ACC_GEN_give_component
							   (2,
							    ACC_merge
							    (ACC_inspect
							     (ACC_GEN_give_the_datasort
							      (AN2_CELL_TYPE,
							       ACC_give_bound
							       (ACC_merge
								(bindingsxx,
								 an2_make_token
								 ("j")),
								bindingsxx),
							       bindingsxx),
							      bindingsxx),
							     ACC_inspect
							     (ACC_GEN_give_the_datasort
							      (AN2_CELL_TYPE,
							       ACC_give_bound
							       (ACC_merge
								(bindingsxx,
								 an2_make_token
								 ("i")),
								bindingsxx),
							       bindingsxx),
							      bindingsxx)),
							    bindingsxx),
							   bindingsxx)),
							 bindingsxx)),
					bindingsxx);
			  result =
			    ACC_update (ACC_merge
					(ACC_GEN_give_the_datasort
					 (AN2_CELL_TYPE,
					  ACC_give_bound (ACC_merge
							  (bindingsxx,
							   an2_make_token
							   ("k")),
							  bindingsxx),
					  bindingsxx),
					 ACC_give_plus (ACC_merge
							(ACC_GEN_give_the_datasort
							 (AN2_INT_TYPE,
							  ACC_GEN_give_component
							  (1,
							   ACC_merge
							   (ACC_inspect
							    (ACC_GEN_give_the_datasort
							     (AN2_CELL_TYPE,
							      ACC_give_bound
							      (ACC_merge
							       (bindingsxx,
								an2_make_token
								("k")),
							       bindingsxx),
							      bindingsxx),
							     bindingsxx),
							    an2_make_int (1)),
							   bindingsxx),
							  bindingsxx),
							 ACC_GEN_give_the_datasort
							 (AN2_INT_TYPE,
							  ACC_GEN_give_component
							  (2,
							   ACC_merge
							   (ACC_inspect
							    (ACC_GEN_give_the_datasort
							     (AN2_CELL_TYPE,
							      ACC_give_bound
							      (ACC_merge
							       (bindingsxx,
								an2_make_token
								("k")),
							       bindingsxx),
							      bindingsxx),
							     bindingsxx),
							    an2_make_int (1)),
							   bindingsxx),
							  bindingsxx)),
							bindingsxx)),
					bindingsxx);
			  result =
			    ACC_enact (ACC_give_then
				       (ACC_merge
					(ACC_give_provide
					 (ACC_GEN_give_the_datasort
					  (AN2_DATA_CASTABLE_TYPE, result,
					   bindingsxx), bindingsxx),
					 ACC_give_hence (ACC_merge
							 (ACC_give_provide
							  (bindingsxx,
							   bindingsxx),
							  ACC_GEN_give_the_datasort
							  (AN2_ACTION_TYPE,
							   ACC_give_bound
							   (ACC_merge
							    (bindingsxx,
							     an2_make_token
							     ("unf")),
							    bindingsxx),
							   bindingsxx)),
							 bindingsxx)),
					bindingsxx), bindingsxx);
			}
		      else
			{
			  ACC_catch_failure ();
			  {
			    register AN2Data tempx;
			    tempx =
			      ACC_merge (ACC_give_tupleToList
					 (ACC_GEN_give_the_datasort
					  (AN2_DATA_CASTABLE_TYPE, result,
					   bindingsxx), bindingsxx),
					 ACC_give_tupleToList (an2_make_bool
							       (0),
							       bindingsxx));
			    {
			      register AN2Data tempx1, tempx2;
			      if (!ACC_try ())
				{
				  tempx1 =
				    ACC_check_equals (tempx, bindingsxx);
				}
			      else
				{
				  temp = ACC_catch_exception ();
				  tempx1 = ACC_fail (NULL, bindingsxx);
				};
			      tempx2 = tempx;
			      temp = ACC_merge (tempx1, tempx2);
			    }
			  }
			  result = an2_make_empty ();
			}
		    }
		  else
		    {
		      ACC_catch_failure ();
		      result = ACC_raise (an2_make_empty (), bindingsxx);
		    }
		}
	      else
		ACC_throw_exception (an2_make_empty ());
	    }
	  }
	else
	  {
	    register AN2Data datax = ACC_catch_exception ();
	    if (!ACC_try ())
	      {
		{
		  register AN2Data tempx;
		  tempx =
		    ACC_merge (ACC_give_tupleToList
			       (ACC_GEN_give_the_datasort
				(AN2_DATA_CASTABLE_TYPE, datax, bindingsx),
				bindingsx),
			       ACC_give_tupleToList (an2_make_token ("break"),
						     bindingsx));
		  {
		    register AN2Data tempx1, tempx2;
		    if (!ACC_try ())
		      {
			tempx1 = ACC_check_equals (tempx, bindingsx);
		      }
		    else
		      {
			temp = ACC_catch_exception ();
			tempx1 = ACC_fail (NULL, bindingsx);
		      };
		    tempx2 = tempx;
		    temp = ACC_merge (tempx1, tempx2);
		  }
		}
		result = an2_make_empty ();
	      }
	    else
	      {
		ACC_catch_failure ();
		result = ACC_raise (datax, bindingsx);
	      }
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
