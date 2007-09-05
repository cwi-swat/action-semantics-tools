

package ajc.data.pure;

import ajc.*;
import ajc.data.*;


class EmptyImpl extends DataConstImpl implements Empty {
    static private Empty _empty = null;
    private EmptyImpl(PureFactory factory) {
	super(factory);
    }

    static void init(PureFactory factory) {
	_empty = new EmptyImpl(factory);
	//_empty._rest = _empty;
    }

    static Empty empty() {
	return _empty;
    }

    /* Interface */

    public DataValue first() throws Exceptional {
	throw new Exceptional(factory.makeEmpty());
    }

    public List tupleToList() {
	return factory.makeList0();
    }

}
