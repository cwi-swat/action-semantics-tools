import ajc.*;
import ajc.data.*;


/**
 *  Description of the Class
 *
 *@author     tvdstorm
 *@created    21 September 2002
 */
public class FibIterTail extends AbstractEnactable {
    public static void main(String args[]) {
	DataFactory f = new ajc.data.pure.PureFactory();
	Store.initStore(f);
	Enactable fib = new FibIterTail(f);
	try {
	    System.err.println("Trying fibiter.");
	    Data d = fib.enact(f.makeInt(30), f.makeNoBindings());
	    System.out.println(d);
	    System.out.println(Store.getStore());
	}
	catch (Exception e) {
	    System.err.println("An exception occurred:");
	    e.printStackTrace();
	}
    }

    /**
     *  Constructor for the FibIterTail object
     *
     *@param  factory  Description of the Parameter
     */
    public FibIterTail(DataFactory factory) {
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
        return hence$1(data, bindings);
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
    private Data and$100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = bindings;
        Data d2 = then$1001(data, bindings);
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
    private Data then$1001000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = factory.makeInt((100));
        return Store.getStore().create((Storable) (d));
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
    private Data then$100100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1001000(data, bindings);
        return then$1001001(d, bindings);
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
    private Data and$10010010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = factory.makeToken("n");
        Data d2 = ((Cell) (data));
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
    private Data then$1001001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$10010010(data, bindings);
        return factory.makeBindings((Token) (d).at(1), (Bindable) (d).at(2));
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
    private Data and$10010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$100100(data, bindings);
        Data d2 = then$100101(data, bindings);
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
    private Data then$100101000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = factory.makeInt((1));
        return Store.getStore().create((Storable) (d));
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
    private Data then$10010100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$100101000(data, bindings);
        return then$100101001(d, bindings);
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
    private Data and$1001010010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = factory.makeToken("i");
        Data d2 = ((Cell) (data));
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
    private Data then$100101001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1001010010(data, bindings);
        return factory.makeBindings((Token) (d).at(1), (Bindable) (d).at(2));
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
    private Data and$1001010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$10010100(data, bindings);
        Data d2 = then$10010101(data, bindings);
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
    private Data then$10010101000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = factory.makeInt((0));
        return Store.getStore().create((Storable) (d));
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
    private Data then$1001010100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$10010101000(data, bindings);
        return then$10010101001(d, bindings);
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
    private Data and$100101010010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = factory.makeToken("j");
        Data d2 = ((Cell) (data));
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
    private Data then$10010101001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$100101010010(data, bindings);
        return factory.makeBindings((Token) (d).at(1), (Bindable) (d).at(2));
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
    private Data and$100101010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$1001010100(data, bindings);
        Data d2 = then$1001010101(data, bindings);
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
    private Data then$10010101010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = factory.makeInt((0));
        return Store.getStore().create((Storable) (d));
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
    private Data then$1001010101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$10010101010(data, bindings);
        return then$10010101011(d, bindings);
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
    private Data and$100101010110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = factory.makeToken("k");
        Data d2 = ((Cell) (data));
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
    private Data then$10010101011(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$100101010110(data, bindings);
        return factory.makeBindings((Token) (d).at(1), (Bindable) (d).at(2));
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
    private Data then$10010101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$100101010(data, bindings);
        return ((Bindings) (d).at(1)).disjointUnion((Bindings) (d).at(2));
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
    private Data then$100101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1001010(data, bindings);
        return ((Bindings) (d).at(1)).disjointUnion((Bindings) (d).at(2));
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
    private Data then$1001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$10010(data, bindings);
        return ((Bindings) (d).at(1)).disjointUnion((Bindings) (d).at(2));
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
    private Data then$10(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$100(data, bindings);
        return ((Bindings) (d).at(1)).overriding((Bindings) (d).at(2));
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
    private Data hence$1(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Bindings newBindings = (Bindings) (then$10(data, bindings));
        return exceptionally$11(data, newBindings);
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
    private Data and$112000000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = bindings;
        Data d2 = factory.makeToken("k");
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
    private Data then$11200000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$112000000(data, bindings);
        return (Data) ((Bindings) (d).at(1)).bound((Token) (d).at(2));
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
    private Data then$1120000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11200000(data, bindings);
        return ((Cell) (d));
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
    private Data then$112000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1120000(data, bindings);
        return (Data) (Store.getStore().inspect((Cell) (d)));
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
    private Data and$11200(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$112000(data, bindings);
        Data d2 = then$112001(data, bindings);
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
    private Data and$112001000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = bindings;
        Data d2 = factory.makeToken("n");
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
    private Data then$11200100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$112001000(data, bindings);
        return (Data) ((Bindings) (d).at(1)).bound((Token) (d).at(2));
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
    private Data then$1120010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11200100(data, bindings);
        return ((Cell) (d));
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
    private Data then$112001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1120010(data, bindings);
        return (Data) (Store.getStore().inspect((Cell) (d)));
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
    private Data then$1120(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11200(data, bindings);
        return otherwise$11201(d, bindings);
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
    private Data then$112010000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = (data).at(1);
        return ((Int) (d));
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
    private Data and$11201000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$112010000(data, bindings);
        Data d2 = then$112010001(data, bindings);
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
    private Data then$112010001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = (data).at(2);
        return ((Int) (d));
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
    private Data then$1120100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11201000(data, bindings);
        return and$11201001(d, bindings);
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
    private Data exceptionally$112010010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        try {
            return ((Int) (data).at(1)).less(((Int) (data).at(2)));
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
    private Data and$11201001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = exceptionally$112010010(data, bindings);
        Data d2 = data;
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
    private Data then$112010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1120100(data, bindings);
        return factory.makeBool(true);
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
    private Data otherwise$11201(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        try {
            return then$112010(data, bindings);
        } catch (Failed f) {
            return factory.makeBool(false);
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
    private Data then$112(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1120(data, bindings);
        return otherwise$1121(d, bindings);
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
    private Data then$112102000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = ((Data) (data));
        return (d).tupleToList();
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
    private Data and$11210200(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$112102000(data, bindings);
        Data d2 = then$112102001(data, bindings);
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
    private Data then$112102001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = factory.makeBool(true);
        return (d).tupleToList();
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
    private Data then$1121020(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210200(data, bindings);
        return and$11210201(d, bindings);
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
    private Data exceptionally$112102010(Data data,
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
    private Data and$11210201(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = exceptionally$112102010(data, bindings);
        Data d2 = data;
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
    private Data then$112102(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1121020(data, bindings);
        return andThen$1121021(d, bindings);
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
    private Data and$112102100000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = bindings;
        Data d2 = factory.makeToken("j");
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
    private Data then$11210210000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$112102100000(data, bindings);
        return (Data) ((Bindings) (d).at(1)).bound((Token) (d).at(2));
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
    private Data then$1121021000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11210210000(data, bindings);
        return ((Cell) (d));
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
    private Data and$112102100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$1121021000(data, bindings);
        Data d2 = then$1121021001(data, bindings);
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
    private Data and$112102100100000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = bindings;
        Data d2 = factory.makeToken("i");
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
    private Data then$11210210010000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$112102100100000(data, bindings);
        return (Data) ((Bindings) (d).at(1)).bound((Token) (d).at(2));
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
    private Data then$1121021001000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11210210010000(data, bindings);
        return ((Cell) (d));
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
    private Data then$112102100100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1121021001000(data, bindings);
        return (Data) (Store.getStore().inspect((Cell) (d)));
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
    private Data and$11210210010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$112102100100(data, bindings);
        Data d2 = then$112102100101(data, bindings);
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
    private Data and$112102100101000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = bindings;
        Data d2 = factory.makeToken("j");
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
    private Data then$11210210010100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$112102100101000(data, bindings);
        return (Data) ((Bindings) (d).at(1)).bound((Token) (d).at(2));
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
    private Data then$1121021001010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11210210010100(data, bindings);
        return ((Cell) (d));
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
    private Data then$112102100101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1121021001010(data, bindings);
        return (Data) (Store.getStore().inspect((Cell) (d)));
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
    private Data then$1121021001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210210010(data, bindings);
        return then$11210210011(d, bindings);
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
    private Data then$1121021001100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = (data).at(1);
        return ((Int) (d));
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
    private Data and$112102100110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$1121021001100(data, bindings);
        Data d2 = then$1121021001101(data, bindings);
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
    private Data then$1121021001101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = (data).at(2);
        return ((Int) (d));
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
    private Data then$11210210011(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$112102100110(data, bindings);
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
    private Data then$11210210(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$112102100(data, bindings);
        return Store.getStore().update((Cell) (d).at(1), (Storable) (d).at(2));
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
    private Data andThen$1121021(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$11210210(data, bindings);
        Data d2 = andThen$11210211(data, bindings);
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
    private Data and$1121021100000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = bindings;
        Data d2 = factory.makeToken("i");
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
    private Data then$112102110000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121021100000(data, bindings);
        return (Data) ((Bindings) (d).at(1)).bound((Token) (d).at(2));
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
    private Data then$11210211000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112102110000(data, bindings);
        return ((Cell) (d));
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
    private Data and$1121021100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$11210211000(data, bindings);
        Data d2 = then$11210211001(data, bindings);
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
    private Data and$1121021100100000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = bindings;
        Data d2 = factory.makeToken("j");
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
    private Data then$112102110010000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121021100100000(data, bindings);
        return (Data) ((Bindings) (d).at(1)).bound((Token) (d).at(2));
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
    private Data then$11210211001000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112102110010000(data, bindings);
        return ((Cell) (d));
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
    private Data then$1121021100100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11210211001000(data, bindings);
        return (Data) (Store.getStore().inspect((Cell) (d)));
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
    private Data and$112102110010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$1121021100100(data, bindings);
        Data d2 = then$1121021100101(data, bindings);
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
    private Data and$1121021100101000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = bindings;
        Data d2 = factory.makeToken("i");
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
    private Data then$112102110010100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121021100101000(data, bindings);
        return (Data) ((Bindings) (d).at(1)).bound((Token) (d).at(2));
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
    private Data then$11210211001010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112102110010100(data, bindings);
        return ((Cell) (d));
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
    private Data then$1121021100101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11210211001010(data, bindings);
        return (Data) (Store.getStore().inspect((Cell) (d)));
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
    private Data then$11210211001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$112102110010(data, bindings);
        return then$112102110011(d, bindings);
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
    private Data then$11210211001100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = (data).at(1);
        return ((Int) (d));
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
    private Data and$1121021100110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$11210211001100(data, bindings);
        Data d2 = then$11210211001101(data, bindings);
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
    private Data then$11210211001101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = (data).at(2);
        return ((Int) (d));
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
    private Data then$112102110011(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121021100110(data, bindings);
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
    private Data then$112102110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121021100(data, bindings);
        return Store.getStore().update((Cell) (d).at(1), (Storable) (d).at(2));
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
    private Data andThen$11210211(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$112102110(data, bindings);
        Data d2 = then$112102111(data, bindings);
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
    private Data and$1121021110000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = bindings;
        Data d2 = factory.makeToken("k");
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
    private Data then$112102111000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121021110000(data, bindings);
        return (Data) ((Bindings) (d).at(1)).bound((Token) (d).at(2));
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
    private Data then$11210211100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112102111000(data, bindings);
        return ((Cell) (d));
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
    private Data and$1121021110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$11210211100(data, bindings);
        Data d2 = then$11210211101(data, bindings);
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
    private Data and$1121021110100000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = bindings;
        Data d2 = factory.makeToken("k");
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
    private Data then$112102111010000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121021110100000(data, bindings);
        return (Data) ((Bindings) (d).at(1)).bound((Token) (d).at(2));
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
    private Data then$11210211101000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112102111010000(data, bindings);
        return ((Cell) (d));
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
    private Data then$1121021110100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11210211101000(data, bindings);
        return (Data) (Store.getStore().inspect((Cell) (d)));
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
    private Data and$112102111010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$1121021110100(data, bindings);
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
    private Data then$11210211101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$112102111010(data, bindings);
        return then$112102111011(d, bindings);
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
    private Data then$11210211101100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = (data).at(1);
        return ((Int) (d));
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
    private Data and$1121021110110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$11210211101100(data, bindings);
        Data d2 = then$11210211101101(data, bindings);
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
    private Data then$11210211101101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = (data).at(2);
        return ((Int) (d));
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
    private Data then$112102111011(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121021110110(data, bindings);
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
    private Data then$112102111(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121021110(data, bindings);
        return Store.getStore().update((Cell) (d).at(1), (Storable) (d).at(2));
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
    private Data andThen$112100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112102(data, bindings);
        return null;
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
    private Data otherwise$11210(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        try {
            return andThen$112100(data, bindings);
        } catch (Failed f) {
            return then$112101(data, bindings);
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
    private Data then$112101000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = ((Data) (data));
        return (d).tupleToList();
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
    private Data and$11210100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$112101000(data, bindings);
        Data d2 = then$112101001(data, bindings);
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
    private Data then$112101001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = factory.makeBool(false);
        return (d).tupleToList();
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
    private Data then$1121010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210100(data, bindings);
        return and$11210101(d, bindings);
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
    private Data exceptionally$112101010(Data data,
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
    private Data and$11210101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = exceptionally$112101010(data, bindings);
        Data d2 = data;
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
    private Data then$112101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1121010(data, bindings);
        return factory.makeEmpty();
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
    private Data otherwise$1121(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        try {
            return otherwise$11210(data, bindings);
        } catch (Failed f) {
            return then$11211(data, bindings);
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
    private Data then$11211(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = factory.makeEmpty();
        return raise(d);
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
    private Data unfolding$110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d; //int i = 0;
        do {
	    //i++;
            d = (then$112(data, bindings));
	    //	    System.out.println("d = " + d + ", i = " + new Integer(i));
        } while (d == null);
        return d;
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
    private Data exceptionally$11(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        try {
            return unfolding$110(data, bindings);
        } catch (Exception e) {
            Data raised = catchExceptional(e);
            return otherwise$111(raised, bindings);
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
    private Data then$1110000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = ((Data) (data));
        return (d).tupleToList();
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
    private Data and$111000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$1110000(data, bindings);
        Data d2 = then$1110001(data, bindings);
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
    private Data then$1110001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = factory.makeToken("break");
        return (d).tupleToList();
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
    private Data then$11100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$111000(data, bindings);
        return and$111001(d, bindings);
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
    private Data exceptionally$1110010(Data data,
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
    private Data and$111001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = exceptionally$1110010(data, bindings);
        Data d2 = data;
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
    private Data then$1110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11100(data, bindings);
        return factory.makeEmpty();
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
    private Data otherwise$111(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        try {
            return then$1110(data, bindings);
        } catch (Failed f) {
            return raise(data);
        }
    }
}
