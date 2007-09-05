public class Factorial extends AbstractAction {
    public Data enact(Data data, 
		      Bindings bindings) {
	return hence$1(data,bindings);
    }
    private Data and$100(Data data, 
			 Bindings bindings) {
	return merge(bindings,
		     then$1001(data,bindings));
    }
    private Data then$1001000(Data data, 
			      Bindings bindings) {
	return create(a_data_item);
    }
    private Data then$100100(Data data, 
			     Bindings bindings) {
	return then$1001001(then$1001000(data,bindings),bindings);
    }
    private Data and$10010010(Data data, 
			      Bindings bindings) {
	return merge(a_data_item,
		     the(datasort-to-pattern(ds), data, bindings));
    }
    private Data then$1001001(Data data, 
			      Bindings bindings) {
	return giveBinding(and$10010010(data,bindings));
    }
    private Data and$10010(Data data, 
			   Bindings bindings) {
	return merge(then$100100(data,bindings),
		     then$100101(data,bindings));
    }
    private Data then$1001010(Data data, 
			      Bindings bindings) {
	return create(a_data_item);
    }
    private Data then$100101(Data data, 
			     Bindings bindings) {
	return then$1001011(then$1001010(data,bindings),bindings);
    }
    private Data and$10010110(Data data, 
			      Bindings bindings) {
	return merge(a_data_item,
		     the(datasort-to-pattern(ds), data, bindings));
    }
    private Data then$1001011(Data data, 
			      Bindings bindings) {
	return giveBinding(and$10010110(data,bindings));
    }
    private Data then$1001(Data data, 
			   Bindings bindings) {
	return giveDisjointUnion(and$10010(data,bindings));
    }
    private Data then$10(Data data, 
			 Bindings bindings) {
	return giveOverriding(and$100(data,bindings));
    }
    private Data hence$1(Data data, 
			 Bindings bindings) {
	Data result = then$10(data,bindings);
	if (hasType(result, Types.BINDINGS))
	    return exceptionally$11(data,result);
	throw new Exceptional(Empty.EMPTY);
    }
    private Data and$112000000(Data data, 
			       Bindings bindings) {
	return merge(bindings,
		     a_data_item);
    }
    private Data then$11200000(Data data, 
			       Bindings bindings) {
	return giveBound(and$112000000(data,bindings));
    }
    private Data then$1120000(Data data, 
			      Bindings bindings) {
	return the(datasort-to-pattern(ds), then$11200000(data,bindings), bindings);
    }
    private Data then$112000(Data data, 
			     Bindings bindings) {
	return inspect(then$1120000(data,bindings));
    }
    private Data and$11200(Data data, 
			   Bindings bindings) {
	return merge(then$112000(data,bindings),
		     a_data_item);
    }
    private Data then$1120(Data data, 
			   Bindings bindings) {
	return otherwise$11201(and$11200(data,bindings),bindings);
    }
    private Data then$112010000(Data data, 
				Bindings bindings) {
	return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(1), data,bindings), bindings);
    }
    private Data and$11201000(Data data, 
			      Bindings bindings) {
	return merge(then$112010000(data,bindings),
		     then$112010001(data,bindings));
    }
    private Data then$112010001(Data data, 
				Bindings bindings) {
	return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(2), data,bindings), bindings);
    }
    private Data then$1120100(Data data, 
			      Bindings bindings) {
	return and$11201001(and$11201000(data,bindings),bindings);
    }
    private Data exceptionally$112010010(Data data, 
					 Bindings bindings) {
	try {
	    return checkGreater(data);
	}
	catch (Exceptional e) {
	    Data raised = e.getData();
	    return fail();
	}
    }
    private Data and$11201001(Data data, 
			      Bindings bindings) {
	return merge(exceptionally$112010010(data,bindings),
		     data);
    }
    private Data then$112010(Data data, 
			     Bindings bindings) {
	return a_data_item;
    }
    private Data otherwise$11201(Data data, 
				 Bindings bindings) {
	try {
	    return then$112010(data,bindings);
	}
	catch (Failed f) {
	    return a_data_item;
	}
    }
    private Data unfold$112(Data data, 
			    Bindings bindings) {
	return otherwise$1121(then$1120(data,bindings),bindings);
    }
    private Data then$1121000000(Data data, 
				 Bindings bindings) {
	return giveTupleToList(the(datasort-to-pattern(ds), data, bindings));
    }
    private Data and$112100000(Data data, 
			       Bindings bindings) {
	return merge(then$1121000000(data,bindings),
		     then$1121000001(data,bindings));
    }
    private Data then$1121000001(Data data, 
				 Bindings bindings) {
	return giveTupleToList(a_data_item);
    }
    private Data then$11210000(Data data, 
			       Bindings bindings) {
	return and$112100001(and$112100000(data,bindings),bindings);
    }
    private Data exceptionally$1121000010(Data data, 
					  Bindings bindings) {
	try {
	    return checkEquals(data);
	}
	catch (Exceptional e) {
	    Data raised = e.getData();
	    return fail();
	}
    }
    private Data and$112100001(Data data, 
			       Bindings bindings) {
	return merge(exceptionally$1121000010(data,bindings),
		     data);
    }
    private Data then$1121000(Data data, 
			      Bindings bindings) {
	return andThen$11210001(then$11210000(data,bindings),bindings);
    }
    private Data and$1121000100000(Data data, 
				   Bindings bindings) {
	return merge(bindings,
		     a_data_item);
    }
    private Data then$112100010000(Data data, 
				   Bindings bindings) {
	return giveBound(and$1121000100000(data,bindings));
    }
    private Data then$11210001000(Data data, 
				  Bindings bindings) {
	return the(datasort-to-pattern(ds), then$112100010000(data,bindings), bindings);
    }
    private Data and$1121000100(Data data, 
				Bindings bindings) {
	return merge(then$11210001000(data,bindings),
		     then$11210001001(data,bindings));
    }
    private Data and$1121000100100000(Data data, 
				      Bindings bindings) {
	return merge(bindings,
		     a_data_item);
    }
    private Data then$112100010010000(Data data, 
				      Bindings bindings) {
	return giveBound(and$1121000100100000(data,bindings));
    }
    private Data then$11210001001000(Data data, 
				     Bindings bindings) {
	return the(datasort-to-pattern(ds), then$112100010010000(data,bindings), bindings);
    }
    private Data then$1121000100100(Data data, 
				    Bindings bindings) {
	return inspect(then$11210001001000(data,bindings));
    }
    private Data and$112100010010(Data data, 
				  Bindings bindings) {
	return merge(then$1121000100100(data,bindings),
		     then$1121000100101(data,bindings));
    }
    private Data and$1121000100101000(Data data, 
				      Bindings bindings) {
	return merge(bindings,
		     a_data_item);
    }
    private Data then$112100010010100(Data data, 
				      Bindings bindings) {
	return giveBound(and$1121000100101000(data,bindings));
    }
    private Data then$11210001001010(Data data, 
				     Bindings bindings) {
	return the(datasort-to-pattern(ds), then$112100010010100(data,bindings), bindings);
    }
    private Data then$1121000100101(Data data, 
				    Bindings bindings) {
	return inspect(then$11210001001010(data,bindings));
    }
    private Data then$11210001001(Data data, 
				  Bindings bindings) {
	return then$112100010011(and$112100010010(data,bindings),bindings);
    }
    private Data then$11210001001100(Data data, 
				     Bindings bindings) {
	return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(1), data,bindings), bindings);
    }
    private Data and$1121000100110(Data data, 
				   Bindings bindings) {
	return merge(then$11210001001100(data,bindings),
		     then$11210001001101(data,bindings));
    }
    private Data then$11210001001101(Data data, 
				     Bindings bindings) {
	return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(2), data,bindings), bindings);
    }
    private Data then$112100010011(Data data, 
				   Bindings bindings) {
	return giveTimes(and$1121000100110(data,bindings));
    }
    private Data then$112100010(Data data, 
				Bindings bindings) {
	return update(and$1121000100(data,bindings));
    }
    private Data andThen$11210001(Data data, 
				  Bindings bindings) {
	ATerm d1 = then$112100010(data,bindings);
	ATerm d2 = then$112100011(data,bindings);
	return merge(d1,d2);
    }
    private Data and$1121000110000(Data data, 
				   Bindings bindings) {
	return merge(bindings,
		     a_data_item);
    }
    private Data then$112100011000(Data data, 
				   Bindings bindings) {
	return giveBound(and$1121000110000(data,bindings));
    }
    private Data then$11210001100(Data data, 
				  Bindings bindings) {
	return the(datasort-to-pattern(ds), then$112100011000(data,bindings), bindings);
    }
    private Data and$1121000110(Data data, 
				Bindings bindings) {
	return merge(then$11210001100(data,bindings),
		     then$11210001101(data,bindings));
    }
    private Data and$1121000110100000(Data data, 
				      Bindings bindings) {
	return merge(bindings,
		     a_data_item);
    }
    private Data then$112100011010000(Data data, 
				      Bindings bindings) {
	return giveBound(and$1121000110100000(data,bindings));
    }
    private Data then$11210001101000(Data data, 
				     Bindings bindings) {
	return the(datasort-to-pattern(ds), then$112100011010000(data,bindings), bindings);
    }
    private Data then$1121000110100(Data data, 
				    Bindings bindings) {
	return inspect(then$11210001101000(data,bindings));
    }
    private Data and$112100011010(Data data, 
				  Bindings bindings) {
	return merge(then$1121000110100(data,bindings),
		     a_data_item);
    }
    private Data then$11210001101(Data data, 
				  Bindings bindings) {
	return then$112100011011(and$112100011010(data,bindings),bindings);
    }
    private Data then$11210001101100(Data data, 
				     Bindings bindings) {
	return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(1), data,bindings), bindings);
    }
    private Data and$1121000110110(Data data, 
				   Bindings bindings) {
	return merge(then$11210001101100(data,bindings),
		     then$11210001101101(data,bindings));
    }
    private Data then$11210001101101(Data data, 
				     Bindings bindings) {
	return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(2), data,bindings), bindings);
    }
    private Data then$112100011011(Data data, 
				   Bindings bindings) {
	return giveMinus(and$1121000110110(data,bindings));
    }
    private Data then$112100011(Data data, 
				Bindings bindings) {
	return update(and$1121000110(data,bindings));
    }
    private Data andThen$112100(Data data, 
				Bindings bindings) {
	ATerm d1 = then$1121000(data,bindings);
	ATerm d2 = unfold$112(data,bindings);
	return merge(d1,d2);
    }
    private Data otherwise$11210(Data data, 
				 Bindings bindings) {
	try {
	    return andThen$112100(data,bindings);
	}
	catch (Failed f) {
	    return action$112101(data,bindings);
	}
    }
    private Data then$112101000(Data data, 
				Bindings bindings) {
	return giveTupleToList(the(datasort-to-pattern(ds), data, bindings));
    }
    private Data and$11210100(Data data, 
			      Bindings bindings) {
	return merge(then$112101000(data,bindings),
		     then$112101001(data,bindings));
    }
    private Data then$112101001(Data data, 
				Bindings bindings) {
	return giveTupleToList(a_data_item);
    }
    private Data then$1121010(Data data, 
			      Bindings bindings) {
	return and$11210101(and$11210100(data,bindings),bindings);
    }
    private Data exceptionally$112101010(Data data, 
					 Bindings bindings) {
	try {
	    return checkEquals(data);
	}
	catch (Exceptional e) {
	    Data raised = e.getData();
	    return fail();
	}
    }
    private Data and$11210101(Data data, 
			      Bindings bindings) {
	return merge(exceptionally$112101010(data,bindings),
		     data);
    }
    private Data then$112101(Data data, 
			     Bindings bindings) {
	return action$1121011(then$1121010(data,bindings),bindings);
    }
    private Data otherwise$1121(Data data, 
				Bindings bindings) {
	try {
	    return action$11210(data,bindings);
	}
	catch (Failed f) {
	    return then$11211(data,bindings);
	}
    }
    private Data then$11211(Data data, 
			    Bindings bindings) {
	return raise(action$112110(data,bindings));
    }
    private Data unfolding$110(Data data, 
			       Bindings bindings) {
	return unfold$112(data,bindings);
    }
    private Data exceptionally$11(Data data, 
				  Bindings bindings) {
	try {
	    return unfolding$110(data,bindings);
	}
	catch (Exceptional e) {
	    Data raised = e.getData();
	    return otherwise$111(raised,bindings);
	}
    }
    private Data then$1110000(Data data, 
			      Bindings bindings) {
	return giveTupleToList(the(datasort-to-pattern(ds), data, bindings));
    }
    private Data and$111000(Data data, 
			    Bindings bindings) {
	return merge(then$1110000(data,bindings),
		     then$1110001(data,bindings));
    }
    private Data then$1110001(Data data, 
			      Bindings bindings) {
	return giveTupleToList(a_data_item);
    }
    private Data then$11100(Data data, 
			    Bindings bindings) {
	return and$111001(and$111000(data,bindings),bindings);
    }
    private Data exceptionally$1110010(Data data, 
				       Bindings bindings) {
	try {
	    return checkEquals(data);
	}
	catch (Exceptional e) {
	    Data raised = e.getData();
	    return fail();
	}
    }
    private Data and$111001(Data data, 
			    Bindings bindings) {
	return merge(exceptionally$1110010(data,bindings),
		     data);
    }
    private Data then$1110(Data data, 
			   Bindings bindings) {
	return action$11101(then$11100(data,bindings),bindings);
    }
    private Data otherwise$111(Data data, 
			       Bindings bindings) {
	try {
	    return then$1110(data,bindings);
	}
	catch (Failed f) {
	    return raise(data);
	}
    }
}
