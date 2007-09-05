
package ajc.data.pure;

import ajc.*;
import ajc.data.*;

class TextImpl extends DatumImpl implements Text {
    private String string;
    TextImpl(PureFactory factory, String string) {
	super(factory);
	this.string = string;
    }
    
    public String stringValue() {
	return string;
    }


    public Empty equals(Data data) throws Exceptional {
	if (data instanceof Text) {
	    if (string.compareTo(((Text)data).stringValue()) == 0)
		return factory.makeEmpty();
	}
	throw new Exceptional(factory.makeEmpty());
    }
}
