
package ajc.data.pure;

import ajc.*;
import ajc.data.*;

class ListImpl extends DatumImpl implements List {
    private static List _empty;

    private DataValue _head;
    private List _tail;

    static void init(PureFactory factory) {
	_empty = new ListImpl(factory);
    }

    static List empty() {
	return _empty;
    }

    private ListImpl(PureFactory factory) {
	this(factory, null, null);
    }

    private boolean isEmpty() {
	return this == _empty;
    }

    ListImpl(PureFactory factory, DataValue head) {
	this(factory, head, _empty);
    }

    ListImpl(PureFactory factory, DataValue head, List tail) {
	super(factory);
	_head = head;
	_tail = tail;
    }


    public DataValue head() throws Exceptional {
	if (this == _empty)
	    throw new Exceptional(factory.makeEmpty());
	return _head;
    }

    public List tail() {
	return _tail;
    }

    public List insert(DataValue dataValue) {
	return new ListImpl(factory, dataValue, new ListImpl(factory, _head, _tail));
    }

    public List append(DataValue dataValue) {
	if (this == _empty) 
	    return new ListImpl(factory, dataValue);
	return new ListImpl(factory, _head, _tail.append(dataValue));
    }

    public List concat(List list) {
	if (list == _empty) 
	    return this;
	if (this == _empty)
	    return list;
	return new ListImpl(factory, _head, _tail.concat(list));
    }

    public Empty equals(Data data) throws Exceptional {
	if (isEmpty()) {
	    if (this == data)
		return factory.makeEmpty();
	} 
	else {
	    if (data instanceof List) 
		if (_head.equals(((List)data).head()) == factory.makeEmpty())
		    return _tail.equals(((List)data).tail());
	}
	throw new Exceptional(factory.makeEmpty());
    }

    public String toString() {
	if (this == _empty)
	    return "[]";
	if (_tail == _empty)
	    return "[" + _head.toString() + "]";
	return "[" + _head.toString() + ", " + _tail.toString() + "]";
    }

}
