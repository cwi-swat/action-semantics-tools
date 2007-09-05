
package ajc.data.pure;

import ajc.*;
import ajc.data.*;

/* Maybe introduce String interface and let Token as well as
 * messagetag extend this. */

class MessageTagImpl extends TextImpl implements MessageTag {
    MessageTagImpl(PureFactory factory, String string) {
	super(factory, string);
    }
}
