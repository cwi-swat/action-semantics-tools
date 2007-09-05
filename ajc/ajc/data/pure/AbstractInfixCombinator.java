

package ajc.data.pure;

import ajc.Enactable;

abstract class AbstractInfixCombinator extends ActionImpl {
    Enactable enactable1;
    Enactable enactable2;
    AbstractInfixCombinator(PureFactory factory,
			    Enactable enactable1,
			    Enactable enactable2) {
	super(factory);
	this.enactable1 = enactable1;
	this.enactable2 = enactable2;
    }
}
