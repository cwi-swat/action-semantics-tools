public class FibRec extends AbstractAction {
    public Data enact(Data data, 
		      Bindings bindings) {
	return unfolding$1(data,bindings);
    }
    private Data and$20000(Data data, 
			   Bindings bindings) {
	return merge(data,
		     a_data_item);
    }
    private Data then$2000(Data data, 
			   Bindings bindings) {
	return exceptionally$20001(and$20000(data,bindings),bindings);
    }
    private Data exceptionally$20001(Data data, 
				     Bindings bindings) {
	try {
	    return checkEquals(data);
	}
	catch (Exceptional e) {
	    Data raised = e.getData();
	    return fail();
	}
    }
    private Data then$200(Data data, 
			  Bindings bindings) {
	return a_data_item;
    }
    private Data otherwise$20(Data data, 
			      Bindings bindings) {
	try {
	    return then$200(data,bindings);
	}
	catch (Failed f) {
	    return then$201(data,bindings);
	}
    }
    private Data and$20100(Data data, 
			   Bindings bindings) {
	return merge(data,
		     a_data_item);
    }
    private Data then$2010(Data data, 
			   Bindings bindings) {
	return exceptionally$20101(and$20100(data,bindings),bindings);
    }
    private Data exceptionally$20101(Data data, 
				     Bindings bindings) {
	try {
	    return checkEquals(data);
	}
	catch (Exceptional e) {
	    Data raised = e.getData();
	    return fail();
	}
    }
    private Data then$201(Data data, 
			  Bindings bindings) {
	return a_data_item;
    }
    private Data unfold$2(Data data, 
			  Bindings bindings) {
	try {
	    return otherwise$20(data,bindings);
	}
	catch (Failed f) {
	    return then$21(data,bindings);
	}
    }
    private Data and$210000(Data data, 
			    Bindings bindings) {
	return merge(data,
		     a_data_item);
    }
    private Data then$21000(Data data, 
			    Bindings bindings) {
	return giveMinus(and$210000(data,bindings));
    }
    private Data then$2100(Data data, 
			   Bindings bindings) {
	return unfold$2(then$21000(data,bindings),bindings);
    }
    private Data and$210(Data data, 
			 Bindings bindings) {
	return merge(then$2100(data,bindings),
		     then$2101(data,bindings));
    }
    private Data and$210100(Data data, 
			    Bindings bindings) {
	return merge(data,
		     a_data_item);
    }
    private Data then$21010(Data data, 
			    Bindings bindings) {
	return giveMinus(and$210100(data,bindings));
    }
    private Data then$2101(Data data, 
			   Bindings bindings) {
	return unfold$2(then$21010(data,bindings),bindings);
    }
    private Data then$21(Data data, 
			 Bindings bindings) {
	return givePlus(and$210(data,bindings));
    }
    private Data unfolding$1(Data data, 
			     Bindings bindings) {
	return unfold$2(data,bindings);
    }
}
