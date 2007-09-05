

package ajc.data.pure;

import ajc.*;
import ajc.data.*;

abstract class DataValueImpl extends DataImpl implements DataValue {
    protected DataValueImpl(PureFactory factory) {
	super(factory);
    }
    public DataValue first() throws Exceptional {
	return this;
    }
    public Data rest() {
	return factory.makeEmpty();
    }

    public List tupleToList() {
	return factory.makeList1(this);
    }

    public Data concat(Data data) {
	return factory.makeTuple(this, data);
    }

    public DataValue at(int n) throws Exceptional {
	if (n == 1)
	    return this;
	throw new Exceptional(factory.makeEmpty());
    }

    /* Default equality to reference equality. 
     * This is enough for data values that  
     * have no real content (e.g. cell, agent, empty). */

    public Empty equals(Data data) throws Exceptional {
	if (this == data)
	    return factory.makeEmpty();
	throw new Exceptional(factory.makeEmpty());
    }

}
