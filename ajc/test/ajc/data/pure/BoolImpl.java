

package ajc.data.pure;

import ajc.*;
import ajc.data.*;


class BoolImpl extends DatumImpl implements Bool {
    private boolean value;

    BoolImpl(PureFactory factory, boolean value) {
	super(factory);
	this.value = value;
    }

    public boolean booleanValue() {
	return value;
    }

    public Bool not() {
	return factory.makeBool(!value);
    }

    public Empty equals(Data data) throws Exceptional {
	if (data instanceof Bool)
	    if (value == ((Bool)data).booleanValue())
		return factory.makeEmpty();
	throw new Exceptional(factory.makeEmpty());
    }

}
