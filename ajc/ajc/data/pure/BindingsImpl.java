
package ajc.data.pure;

import ajc.*;
import ajc.data.*;

import java.util.TreeMap;
import java.util.Map;
import java.util.Set;
import java.util.Iterator;

class BindingsImpl extends DatumImpl implements Bindings {
    private Map bindingMap;

    BindingsImpl(PureFactory factory, Token token, Bindable bindable) {
	this(factory);
	bindingMap.put(token, bindable);
    }

    BindingsImpl(PureFactory factory) {
	this(factory, new TreeMap());
    }

    private BindingsImpl(PureFactory factory, Map map) {
	super(factory);
	bindingMap = map;
    }

    public Map mapValue() {
	return bindingMap;
    }

//     public Bindings binding(Token token, Bindable bindable) {
// 	Map map = new TreeMap();
// 	map.put(token, bindable);
// 	return new BindingsImpl(factory, map);
//     }

    public Bindable bound(Token token) throws Exceptional {
	if (bindingMap.containsKey(token))
	    return (Bindable)bindingMap.get(token);
	throw new Exceptional("No binding found for token " + token.toString(), factory.makeEmpty());
    }
	

    public Bindings overriding(Bindings bindings) {
	Map newMap = new TreeMap(bindingMap);
	newMap.putAll(bindings.mapValue());
	return new BindingsImpl(factory, newMap);
    }

    public Bindings disjointUnion(Bindings bindings) {
	Map newMap = new TreeMap(bindingMap);
	Set keySet = bindings.mapValue().keySet();
	for (Iterator i = keySet.iterator(); i.hasNext();) {
	    Token token = (Token)i.next();
	    if (newMap.containsKey(token))
		newMap.remove(token);
	    else
		newMap.put(token, bindings.mapValue().get(token));
	}
	return new BindingsImpl(factory, newMap);
    }

    public String toString() {
	return bindingMap.toString();
    }

}
