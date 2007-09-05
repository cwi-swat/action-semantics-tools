
package ajc.data.pure;

import ajc.*;
import ajc.data.*;

class TokenImpl extends TextImpl implements Token {
    TokenImpl(PureFactory factory, String string) {
	super(factory, string);
    }

    public int compareTo(Object o) {
	return stringValue().compareTo(((Token)o).stringValue());
    }

}
