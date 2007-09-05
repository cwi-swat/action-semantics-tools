import ajc.*;
import ajc.data.*;

/**
 *  Description of the Class
 *
 *@author     tvdstorm
 *@created    13 September 2002
 */
public class FibIterRec extends AbstractEnactable {
    public static void main(String args[]) {
	DataFactory f = new ajc.data.pure.PureFactory();
	Store.initStore(f);
	Enactable fib = new FibIterRec(f);
	try {
	    System.err.println("Trying fibiterrec.");
	    Data d = fib.enact(f.makeInt(1), f.makeNoBindings());
	    System.out.println(d);
	    System.out.println(Store.getStore());
	}
	catch (Exception e) {
	    System.err.println("An exception occurred:");
	    e.printStackTrace();
	}
    }


    /**
     *  Constructor for the FibIter object
     *
     *@param  factory  Description of the Parameter
     */
    public FibIterRec(DataFactory factory) {
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
    private Data unfold$112(Data data,
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
    private Data then$1121000000(Data data,
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
    private Data and$112100000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$1121000000(data, bindings);
        Data d2 = then$1121000001(data, bindings);
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
    private Data then$1121000001(Data data,
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
    private Data then$11210000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$112100000(data, bindings);
        return and$112100001(d, bindings);
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
    private Data exceptionally$1121000010(Data data,
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
    private Data and$112100001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = exceptionally$1121000010(data, bindings);
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
    private Data then$1121000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11210000(data, bindings);
        return andThen$11210001(d, bindings);
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
    private Data and$1121000100000(Data data,
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
    private Data then$112100010000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121000100000(data, bindings);
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
    private Data then$11210001000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112100010000(data, bindings);
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
    private Data and$1121000100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$11210001000(data, bindings);
        Data d2 = then$11210001001(data, bindings);
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
    private Data and$1121000100100000(Data data,
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
    private Data then$112100010010000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121000100100000(data, bindings);
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
    private Data then$11210001001000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112100010010000(data, bindings);
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
    private Data then$1121000100100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11210001001000(data, bindings);
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
    private Data and$112100010010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$1121000100100(data, bindings);
        Data d2 = then$1121000100101(data, bindings);
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
    private Data and$1121000100101000(Data data,
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
    private Data then$112100010010100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121000100101000(data, bindings);
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
    private Data then$11210001001010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112100010010100(data, bindings);
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
    private Data then$1121000100101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$11210001001010(data, bindings);
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
    private Data then$11210001001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$112100010010(data, bindings);
        return then$112100010011(d, bindings);
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
    private Data then$11210001001100(Data data,
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
    private Data and$1121000100110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$11210001001100(data, bindings);
        Data d2 = then$11210001001101(data, bindings);
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
    private Data then$11210001001101(Data data,
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
    private Data then$112100010011(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121000100110(data, bindings);
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
    private Data then$112100010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121000100(data, bindings);
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
    private Data andThen$11210001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$112100010(data, bindings);
        Data d2 = andThen$112100011(data, bindings);
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
    private Data and$11210001100000(Data data,
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
    private Data then$1121000110000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210001100000(data, bindings);
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
    private Data then$112100011000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1121000110000(data, bindings);
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
    private Data and$11210001100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$112100011000(data, bindings);
        Data d2 = then$112100011001(data, bindings);
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
    private Data and$11210001100100000(Data data,
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
    private Data then$1121000110010000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210001100100000(data, bindings);
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
    private Data then$112100011001000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1121000110010000(data, bindings);
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
    private Data then$11210001100100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112100011001000(data, bindings);
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
    private Data and$1121000110010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$11210001100100(data, bindings);
        Data d2 = then$11210001100101(data, bindings);
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
    private Data and$11210001100101000(Data data,
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
    private Data then$1121000110010100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210001100101000(data, bindings);
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
    private Data then$112100011001010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1121000110010100(data, bindings);
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
    private Data then$11210001100101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112100011001010(data, bindings);
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
    private Data then$112100011001(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121000110010(data, bindings);
        return then$1121000110011(d, bindings);
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
    private Data then$112100011001100(Data data,
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
    private Data and$11210001100110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$112100011001100(data, bindings);
        Data d2 = then$112100011001101(data, bindings);
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
    private Data then$112100011001101(Data data,
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
    private Data then$1121000110011(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210001100110(data, bindings);
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
    private Data then$1121000110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210001100(data, bindings);
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
    private Data andThen$112100011(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$1121000110(data, bindings);
        Data d2 = then$1121000111(data, bindings);
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
    private Data and$11210001110000(Data data,
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
    private Data then$1121000111000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210001110000(data, bindings);
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
    private Data then$112100011100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1121000111000(data, bindings);
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
    private Data and$11210001110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$112100011100(data, bindings);
        Data d2 = then$112100011101(data, bindings);
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
    private Data and$11210001110100000(Data data,
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
    private Data then$1121000111010000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210001110100000(data, bindings);
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
    private Data then$112100011101000(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$1121000111010000(data, bindings);
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
    private Data then$11210001110100(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = then$112100011101000(data, bindings);
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
    private Data and$1121000111010(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$11210001110100(data, bindings);
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
    private Data then$112100011101(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$1121000111010(data, bindings);
        return then$1121000111011(d, bindings);
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
    private Data then$112100011101100(Data data,
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
    private Data and$11210001110110(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d1 = then$112100011101100(data, bindings);
        Data d2 = then$112100011101101(data, bindings);
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
    private Data then$112100011101101(Data data,
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
    private Data then$1121000111011(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210001110110(data, bindings);
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
    private Data then$1121000111(Data data,
            Bindings bindings)
             throws Exceptional, Failed {
        Data d = and$11210001110(data, bindings);
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
        Data d1 = then$1121000(data, bindings);
        Data d2 = unfold$112(data, bindings);
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
        return unfold$112(data, bindings);
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
