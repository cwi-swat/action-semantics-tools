
#include "runtime.c"

AN2Data
action (AN2Data data, AN2Data bindings)
{
  AN2Data result;
  {
    AN2Data bindingsx, resultx;
    {
      AN2Data datax, resultxx;
      {
	AN2Data resultxxx1, resultxxx2;
	resultxxx1 = bindings;;
	{
	  AN2Data datax, resultxxx2x;
	  {
	    AN2Data resultxxx2xx1, resultxxx2xx2;
	    resultxxx2xx1 = an2_make_token ("unf");;
	    {
	      AN2Data action (AN2Data data, AN2Data bindings)
	      {
		AN2Data result;
		if (!ACC_try ())
		  {
		    if (!ACC_try ())
		      {
			{
			  AN2Data datax, resultx;
			  {
			    AN2Data datax, resultxx;
			    {
			      AN2Data resultxxx1, resultxxx2;
			      resultxxx1 = data;;
			      resultxxx2 = an2_make_int (0);
			      resultxx = ACC_merge (resultxxx1, resultxxx2);
			    }
			    datax = resultxx;
			    if (!ACC_try ())
			      {
				resultx = ACC_check_equals (datax, bindings);
			      }
			    else
			      {
				AN2Data dataxx = ACC_catch_exception ();
				resultx = ACC_fail (dataxx, bindings);
			      }
			  }
			  datax = resultx;
			  result = an2_make_int (1);
			}
		      }
		    else
		      {
			ACC_catch_failure ();
			{
			  AN2Data datax, resultx;
			  {
			    AN2Data datax, resultxx;
			    {
			      AN2Data resultxxx1, resultxxx2;
			      resultxxx1 = data;;
			      resultxxx2 = an2_make_int (1);
			      resultxx = ACC_merge (resultxxx1, resultxxx2);
			    }
			    datax = resultxx;
			    if (!ACC_try ())
			      {
				resultx = ACC_check_equals (datax, bindings);
			      }
			    else
			      {
				AN2Data dataxx = ACC_catch_exception ();
				resultx = ACC_fail (dataxx, bindings);
			      }
			  }
			  datax = resultx;
			  result = an2_make_int (1);
			}
		      }
		  }
		else
		  {
		    ACC_catch_failure ();
		    {
		      AN2Data datax, resultx;
		      {
			AN2Data resultxx1, resultxx2;
			{
			  AN2Data datax, resultxx1x;
			  {
			    AN2Data datax, resultxx1xx;
			    {
			      AN2Data resultxx1xxx1, resultxx1xxx2;
			      resultxx1xxx1 = data;;
			      resultxx1xxx2 = an2_make_int (2);
			      resultxx1xx =
				ACC_merge (resultxx1xxx1, resultxx1xxx2);
			    }
			    datax = resultxx1xx;
			    resultxx1x = ACC_give_minus (datax, bindings);
			  }
			  datax = resultxx1x;
			  {
			    AN2Data dataxx, resultxx1x;
			    {
			      AN2Data dataxx, resultxx1xx;
			      {
				AN2Data resultxx1xxx1, resultxx1xxx2;
				{
				  AN2Data dataxx, resultxx1xxx1x;
				  resultxx1xxx1x =
				    ACC_GEN_give_the_datasort
				    (AN2_DATA_CASTABLE_TYPE, datax, bindings);
				  dataxx = resultxx1xxx1x;
				  resultxx1xxx1 =
				    ACC_give_provide (dataxx, bindings);
				};
				{
				  AN2Data dataxx, resultxx1xxx2x;
				  {
				    AN2Data resultxx1xxx2xx1,
				      resultxx1xxx2xx2;
				    {
				      AN2Data dataxx, resultxx1xxx2xx1x;
				      resultxx1xxx2xx1x = bindings;
				      dataxx = resultxx1xxx2xx1x;
				      resultxx1xxx2xx1 =
					ACC_give_provide (dataxx, bindings);
				    };
				    {
				      AN2Data dataxx, resultxx1xxx2xx2x;
				      {
					AN2Data dataxx, resultxx1xxx2xx2xx;
					{
					  AN2Data resultxx1xxx2xx2xxx1,
					    resultxx1xxx2xx2xxx2;
					  resultxx1xxx2xx2xxx1 = bindings;;
					  resultxx1xxx2xx2xxx2 =
					    an2_make_token ("unf");
					  resultxx1xxx2xx2xx =
					    ACC_merge (resultxx1xxx2xx2xxx1,
						       resultxx1xxx2xx2xxx2);
					}
					dataxx = resultxx1xxx2xx2xx;
					resultxx1xxx2xx2x =
					  ACC_give_bound (dataxx, bindings);
				      }
				      dataxx = resultxx1xxx2xx2x;
				      resultxx1xxx2xx2 =
					ACC_GEN_give_the_datasort
					(AN2_ACTION_TYPE, dataxx, bindings);
				    }
				    resultxx1xxx2x =
				      ACC_merge (resultxx1xxx2xx1,
						 resultxx1xxx2xx2);
				  }
				  dataxx = resultxx1xxx2x;
				  resultxx1xxx2 =
				    ACC_give_hence (dataxx, bindings);
				}
				resultxx1xx =
				  ACC_merge (resultxx1xxx1, resultxx1xxx2);
			      }
			      dataxx = resultxx1xx;
			      resultxx1x = ACC_give_then (dataxx, bindings);
			    }
			    dataxx = resultxx1x;
			    resultxx1 = ACC_enact (dataxx, bindings);
			  }
			};
			{
			  AN2Data datax, resultxx2x;
			  {
			    AN2Data datax, resultxx2xx;
			    {
			      AN2Data resultxx2xxx1, resultxx2xxx2;
			      resultxx2xxx1 = data;;
			      resultxx2xxx2 = an2_make_int (1);
			      resultxx2xx =
				ACC_merge (resultxx2xxx1, resultxx2xxx2);
			    }
			    datax = resultxx2xx;
			    resultxx2x = ACC_give_minus (datax, bindings);
			  }
			  datax = resultxx2x;
			  {
			    AN2Data dataxx, resultxx2x;
			    {
			      AN2Data dataxx, resultxx2xx;
			      {
				AN2Data resultxx2xxx1, resultxx2xxx2;
				{
				  AN2Data dataxx, resultxx2xxx1x;
				  resultxx2xxx1x =
				    ACC_GEN_give_the_datasort
				    (AN2_DATA_CASTABLE_TYPE, datax, bindings);
				  dataxx = resultxx2xxx1x;
				  resultxx2xxx1 =
				    ACC_give_provide (dataxx, bindings);
				};
				{
				  AN2Data dataxx, resultxx2xxx2x;
				  {
				    AN2Data resultxx2xxx2xx1,
				      resultxx2xxx2xx2;
				    {
				      AN2Data dataxx, resultxx2xxx2xx1x;
				      resultxx2xxx2xx1x = bindings;
				      dataxx = resultxx2xxx2xx1x;
				      resultxx2xxx2xx1 =
					ACC_give_provide (dataxx, bindings);
				    };
				    {
				      AN2Data dataxx, resultxx2xxx2xx2x;
				      {
					AN2Data dataxx, resultxx2xxx2xx2xx;
					{
					  AN2Data resultxx2xxx2xx2xxx1,
					    resultxx2xxx2xx2xxx2;
					  resultxx2xxx2xx2xxx1 = bindings;;
					  resultxx2xxx2xx2xxx2 =
					    an2_make_token ("unf");
					  resultxx2xxx2xx2xx =
					    ACC_merge (resultxx2xxx2xx2xxx1,
						       resultxx2xxx2xx2xxx2);
					}
					dataxx = resultxx2xxx2xx2xx;
					resultxx2xxx2xx2x =
					  ACC_give_bound (dataxx, bindings);
				      }
				      dataxx = resultxx2xxx2xx2x;
				      resultxx2xxx2xx2 =
					ACC_GEN_give_the_datasort
					(AN2_ACTION_TYPE, dataxx, bindings);
				    }
				    resultxx2xxx2x =
				      ACC_merge (resultxx2xxx2xx1,
						 resultxx2xxx2xx2);
				  }
				  dataxx = resultxx2xxx2x;
				  resultxx2xxx2 =
				    ACC_give_hence (dataxx, bindings);
				}
				resultxx2xx =
				  ACC_merge (resultxx2xxx1, resultxx2xxx2);
			      }
			      dataxx = resultxx2xx;
			      resultxx2x = ACC_give_then (dataxx, bindings);
			    }
			    dataxx = resultxx2x;
			    resultxx2 = ACC_enact (dataxx, bindings);
			  }
			}
			resultx = ACC_merge (resultxx1, resultxx2);
		      }
		      datax = resultx;
		      result = ACC_give_plus (datax, bindings);
		    }
		  }
	      }
	      resultxxx2xx2 = ACC_make_action (action, 0);
	    }
	    resultxxx2x = ACC_merge (resultxxx2xx1, resultxxx2xx2);
	  }
	  datax = resultxxx2x;
	  resultxxx2 = ACC_give_binding (datax, bindings);
	}
	resultxx = ACC_merge (resultxxx1, resultxxx2);
      }
      datax = resultxx;
      resultx = ACC_give_overriding (datax, bindings);
    };
    if (an2_has_type (resultx, AN2_BINDINGS_TYPE))
      {
	bindingsx = resultx;
	if (!ACC_try ())
	  {
	    if (!ACC_try ())
	      {
		{
		  AN2Data datax, resultx;
		  {
		    AN2Data datax, resultxx;
		    {
		      AN2Data resultxxx1, resultxxx2;
		      resultxxx1 = data;;
		      resultxxx2 = an2_make_int (0);
		      resultxx = ACC_merge (resultxxx1, resultxxx2);
		    }
		    datax = resultxx;
		    if (!ACC_try ())
		      {
			resultx = ACC_check_equals (datax, bindingsx);
		      }
		    else
		      {
			AN2Data dataxx = ACC_catch_exception ();
			resultx = ACC_fail (dataxx, bindingsx);
		      }
		  }
		  datax = resultx;
		  result = an2_make_int (1);
		}
	      }
	    else
	      {
		ACC_catch_failure ();
		{
		  AN2Data datax, resultx;
		  {
		    AN2Data datax, resultxx;
		    {
		      AN2Data resultxxx1, resultxxx2;
		      resultxxx1 = data;;
		      resultxxx2 = an2_make_int (1);
		      resultxx = ACC_merge (resultxxx1, resultxxx2);
		    }
		    datax = resultxx;
		    if (!ACC_try ())
		      {
			resultx = ACC_check_equals (datax, bindingsx);
		      }
		    else
		      {
			AN2Data dataxx = ACC_catch_exception ();
			resultx = ACC_fail (dataxx, bindingsx);
		      }
		  }
		  datax = resultx;
		  result = an2_make_int (1);
		}
	      }
	  }
	else
	  {
	    ACC_catch_failure ();
	    {
	      AN2Data datax, resultx;
	      {
		AN2Data resultxx1, resultxx2;
		{
		  AN2Data datax, resultxx1x;
		  {
		    AN2Data datax, resultxx1xx;
		    {
		      AN2Data resultxx1xxx1, resultxx1xxx2;
		      resultxx1xxx1 = data;;
		      resultxx1xxx2 = an2_make_int (2);
		      resultxx1xx = ACC_merge (resultxx1xxx1, resultxx1xxx2);
		    }
		    datax = resultxx1xx;
		    resultxx1x = ACC_give_minus (datax, bindingsx);
		  }
		  datax = resultxx1x;
		  {
		    AN2Data dataxx, resultxx1x;
		    {
		      AN2Data dataxx, resultxx1xx;
		      {
			AN2Data resultxx1xxx1, resultxx1xxx2;
			{
			  AN2Data dataxx, resultxx1xxx1x;
			  resultxx1xxx1x =
			    ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE,
						       datax, bindingsx);
			  dataxx = resultxx1xxx1x;
			  resultxx1xxx1 =
			    ACC_give_provide (dataxx, bindingsx);
			};
			{
			  AN2Data dataxx, resultxx1xxx2x;
			  {
			    AN2Data resultxx1xxx2xx1, resultxx1xxx2xx2;
			    {
			      AN2Data dataxx, resultxx1xxx2xx1x;
			      resultxx1xxx2xx1x = bindingsx;
			      dataxx = resultxx1xxx2xx1x;
			      resultxx1xxx2xx1 =
				ACC_give_provide (dataxx, bindingsx);
			    };
			    {
			      AN2Data dataxx, resultxx1xxx2xx2x;
			      {
				AN2Data dataxx, resultxx1xxx2xx2xx;
				{
				  AN2Data resultxx1xxx2xx2xxx1,
				    resultxx1xxx2xx2xxx2;
				  resultxx1xxx2xx2xxx1 = bindingsx;;
				  resultxx1xxx2xx2xxx2 =
				    an2_make_token ("unf");
				  resultxx1xxx2xx2xx =
				    ACC_merge (resultxx1xxx2xx2xxx1,
					       resultxx1xxx2xx2xxx2);
				}
				dataxx = resultxx1xxx2xx2xx;
				resultxx1xxx2xx2x =
				  ACC_give_bound (dataxx, bindingsx);
			      }
			      dataxx = resultxx1xxx2xx2x;
			      resultxx1xxx2xx2 =
				ACC_GEN_give_the_datasort (AN2_ACTION_TYPE,
							   dataxx, bindingsx);
			    }
			    resultxx1xxx2x =
			      ACC_merge (resultxx1xxx2xx1, resultxx1xxx2xx2);
			  }
			  dataxx = resultxx1xxx2x;
			  resultxx1xxx2 = ACC_give_hence (dataxx, bindingsx);
			}
			resultxx1xx =
			  ACC_merge (resultxx1xxx1, resultxx1xxx2);
		      }
		      dataxx = resultxx1xx;
		      resultxx1x = ACC_give_then (dataxx, bindingsx);
		    }
		    dataxx = resultxx1x;
		    resultxx1 = ACC_enact (dataxx, bindingsx);
		  }
		};
		{
		  AN2Data datax, resultxx2x;
		  {
		    AN2Data datax, resultxx2xx;
		    {
		      AN2Data resultxx2xxx1, resultxx2xxx2;
		      resultxx2xxx1 = data;;
		      resultxx2xxx2 = an2_make_int (1);
		      resultxx2xx = ACC_merge (resultxx2xxx1, resultxx2xxx2);
		    }
		    datax = resultxx2xx;
		    resultxx2x = ACC_give_minus (datax, bindingsx);
		  }
		  datax = resultxx2x;
		  {
		    AN2Data dataxx, resultxx2x;
		    {
		      AN2Data dataxx, resultxx2xx;
		      {
			AN2Data resultxx2xxx1, resultxx2xxx2;
			{
			  AN2Data dataxx, resultxx2xxx1x;
			  resultxx2xxx1x =
			    ACC_GEN_give_the_datasort (AN2_DATA_CASTABLE_TYPE,
						       datax, bindingsx);
			  dataxx = resultxx2xxx1x;
			  resultxx2xxx1 =
			    ACC_give_provide (dataxx, bindingsx);
			};
			{
			  AN2Data dataxx, resultxx2xxx2x;
			  {
			    AN2Data resultxx2xxx2xx1, resultxx2xxx2xx2;
			    {
			      AN2Data dataxx, resultxx2xxx2xx1x;
			      resultxx2xxx2xx1x = bindingsx;
			      dataxx = resultxx2xxx2xx1x;
			      resultxx2xxx2xx1 =
				ACC_give_provide (dataxx, bindingsx);
			    };
			    {
			      AN2Data dataxx, resultxx2xxx2xx2x;
			      {
				AN2Data dataxx, resultxx2xxx2xx2xx;
				{
				  AN2Data resultxx2xxx2xx2xxx1,
				    resultxx2xxx2xx2xxx2;
				  resultxx2xxx2xx2xxx1 = bindingsx;;
				  resultxx2xxx2xx2xxx2 =
				    an2_make_token ("unf");
				  resultxx2xxx2xx2xx =
				    ACC_merge (resultxx2xxx2xx2xxx1,
					       resultxx2xxx2xx2xxx2);
				}
				dataxx = resultxx2xxx2xx2xx;
				resultxx2xxx2xx2x =
				  ACC_give_bound (dataxx, bindingsx);
			      }
			      dataxx = resultxx2xxx2xx2x;
			      resultxx2xxx2xx2 =
				ACC_GEN_give_the_datasort (AN2_ACTION_TYPE,
							   dataxx, bindingsx);
			    }
			    resultxx2xxx2x =
			      ACC_merge (resultxx2xxx2xx1, resultxx2xxx2xx2);
			  }
			  dataxx = resultxx2xxx2x;
			  resultxx2xxx2 = ACC_give_hence (dataxx, bindingsx);
			}
			resultxx2xx =
			  ACC_merge (resultxx2xxx1, resultxx2xxx2);
		      }
		      dataxx = resultxx2xx;
		      resultxx2x = ACC_give_then (dataxx, bindingsx);
		    }
		    dataxx = resultxx2x;
		    resultxx2 = ACC_enact (dataxx, bindingsx);
		  }
		}
		resultx = ACC_merge (resultxx1, resultxx2);
	      }
	      datax = resultx;
	      result = ACC_give_plus (datax, bindingsx);
	    }
	  }
      }
    else
      ACC_throw_exception (an2_make_empty ());
  }
}

int
main (int argc, char **argv)
{
  long bp; int i;
  AN2Data bos;
  ACC_init_runtime (argc, argv, &bos, &bp);
  i = ((argc==2) ? atoi(argv[1]) : 1);
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
