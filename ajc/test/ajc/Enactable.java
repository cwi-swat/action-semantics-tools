
package ajc;

import ajc.data.*;

public interface Enactable {
    public Data enact(Data data, Bindings bindings) throws Exceptional, Failed;
}

