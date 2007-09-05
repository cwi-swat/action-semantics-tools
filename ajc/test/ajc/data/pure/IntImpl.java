
package ajc.data.pure;

import ajc.data.*;
import ajc.*;

class IntImpl extends DatumImpl implements Int {
    private long value;

    protected IntImpl(PureFactory factory, long value) {
	super(factory);
	this.value = value;
    }

    /* Interface */
    public long intValue() {
	return value;
    }

    public Int plus(Int n) {
	return new IntImpl(factory, value + n.intValue());
    }
    public Int minus(Int n) {
	return new IntImpl(factory, value - n.intValue());
    }
    public Int monus(Int n) {
	if (n.intValue() < value)
	    return new IntImpl(factory, value - n.intValue());
	return new IntImpl(factory, 0);
    }
    public Int times(Int n) {
	return new IntImpl(factory, value * n.intValue());
    }

    public Empty greater(Int n) throws Exceptional {
	if (value > n.intValue())
	    return factory.makeEmpty();
	throw new Exceptional(factory.makeEmpty());
    }
    public Empty greaterOrEq(Int n) throws Exceptional {
	if (value >= n.intValue())
	    return factory.makeEmpty();
	throw new Exceptional(factory.makeEmpty());
    }
    public Empty less(Int n) throws Exceptional {
	if (value < n.intValue())
	    return factory.makeEmpty();
	throw new Exceptional(factory.makeEmpty());
    }
    public Empty lessOrEq(Int n) throws Exceptional {
	if (value <= n.intValue())
	    return factory.makeEmpty();
	throw new Exceptional(factory.makeEmpty());
    }

    public Empty equals(Data data) throws Exceptional {
	if (data instanceof Int) 
	    if (value == ((Int)data).intValue())
		return factory.makeEmpty();
	throw new Exceptional(factory.makeEmpty());
    }
}
