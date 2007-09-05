
package ajc.data.pure;

import ajc.*;
import ajc.data.*;

abstract class AbstractPrefixCombinator extends ActionImpl {
    protected Enactable enactable1;
    AbstractPrefixCombinator(PureFactory factory, Enactable enactable1) {
	super(factory);
	this.enactable1 = enactable1;
    }
}
