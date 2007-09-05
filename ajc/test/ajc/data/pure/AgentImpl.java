

package ajc.data.pure;

import ajc.*;
import ajc.data.*;

class AgentImpl extends DatumImpl implements Agent {
    private static int agents = 0;

    /* This id isn't really needed, but allows
       informative printing of agents (and cells). */
    private int id;

    AgentImpl(PureFactory factory) {
	super(factory);
	id = agents++;
    }

}
