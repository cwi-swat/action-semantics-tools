
import ajc.*;
import ajc.data.*;

/**
 *  Description of the Class
 *
 *@author     tvdstorm
 *@created    13 September 2002
 */
public class FibRec extends AbstractEnactable {





    public static void main(String args[]) {
	DataFactory f = new ajc.data.pure.PureFactory();
	Enactable fib = new FibRec(f);
	Data d = null;
	try {
	    d = fib.enact(f.makeInt(32), f.makeNoBindings());
	}
	catch (Exception e) {
	    System.err.println("And exception occured.");
	}
	System.out.println(new Long(((Int)d).intValue()));
	
    }








    /**
     *  Constructor for the FibRec object
     *
     *@param  factory  Description of the Parameter
     */
    public FibRec(DataFactory factory) {
        this.factory = factory;
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    public Data enact(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        return unfolding$1(data, bindings);
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data and$30000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = data;
        Data d2 = factory.makeInt((0));
        return d1.concat(d2);
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data then$3000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$30000(data, bindings);
        return exceptionally$30001(d, bindings);
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data exceptionally$30001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        try {
            return ((DataValue) (data).at(1)).equals(((DataValue) (data).at(2)));
        } catch (Exception e) {
            Data raised = catchExceptional(e);
            return fail();
        }
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data then$300(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$3000(data, bindings);
        return factory.makeInt((1));
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data otherwise$30(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        try {
            return then$300(data, bindings);
        } catch (Failed f) {
            return then$301(data, bindings);
        }
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data and$30100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = data;
        Data d2 = factory.makeInt((1));
        return d1.concat(d2);
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data then$3010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$30100(data, bindings);
        return exceptionally$30101(d, bindings);
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data exceptionally$30101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        try {
            return ((DataValue) (data).at(1)).equals(((DataValue) (data).at(2)));
        } catch (Exception e) {
            Data raised = catchExceptional(e);
            return fail();
        }
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data then$301(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$3010(data, bindings);
        return factory.makeInt((1));
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data unfold$3(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        try {
            return otherwise$30(data, bindings);
        } catch (Failed f) {
            return then$31(data, bindings);
        }
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data and$310000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = data;
        Data d2 = factory.makeInt((2));
        return d1.concat(d2);
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data then$31000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$310000(data, bindings);
        return ((Int) ((d).at(1))).minus((Int) (d).at(2));
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data then$3100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$31000(data, bindings);
        return unfold$3(d, bindings);
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data and$310(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$3100(data, bindings);
        Data d2 = then$3101(data, bindings);
        return d1.concat(d2);
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data and$310100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = data;
        Data d2 = factory.makeInt((1));
        return d1.concat(d2);
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data then$31010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$310100(data, bindings);
        return ((Int) ((d).at(1))).minus((Int) (d).at(2));
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data then$3101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$31010(data, bindings);
        return unfold$3(d, bindings);
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data then$31(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$310(data, bindings);
        return ((Int) ((d).at(1))).plus((Int) (d).at(2));
    }


    /**
     *  Description of the Method
     *
     *@param  data             Description of the Parameter
     *@param  bindings         Description of the Parameter
     *@return                  Description of the Return Value
     *@exception  Exceptional  Description of the Exception
     *@exception  Failed       Description of the Exception
     */
    private Data unfolding$1(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        return unfold$3(data, bindings);
    }
}
