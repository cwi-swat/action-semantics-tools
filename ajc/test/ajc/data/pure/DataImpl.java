
package ajc.data.pure;

import ajc.*;
import ajc.data.*;

class DataImpl implements Data {
    PureFactory factory;
    protected DataValue _first;
    protected Data _rest;
    
    protected DataImpl(PureFactory factory, DataValue first, Data rest) {
	this.factory = factory;
	this._first = first;
	this._rest = rest;
    }

    protected DataImpl(PureFactory factory) {
	this(factory, null, null);
    }

    /* Interface */

    public Data concat(Data data) {
	return new DataImpl(factory, _first, _rest.concat(data));
    }

    public List tupleToList() {
	return _rest.tupleToList().insert(_first);
    }
	
    public DataValue first() throws Exceptional {
	return _first;
    }

    public Data rest() {
	return _rest;
    }

    public DataValue component(int n) throws Exceptional {
	if (n == 1) 
	    return _first;
	return _rest.component(n - 1);
    }
	       
    public Action provide() {
	return new Provide(factory, this);
    }

}

class Provide extends ActionImpl {
    private Data provided;
    private class _Provide implements Enactable {
	public Data enact(Data data, Bindings bindings) throws Exceptional, Failed {
	    return provided;
	}
    }
    public Provide(PureFactory factory, Data data) {
	super(factory);
	provided = data;
	enactable = new _Provide();
    }
}
