
package ajc.data;

import ajc.*;

import java.util.Map;

public interface Bindings extends Datum {
    public Map mapValue();
    public Bindable bound(Token token) throws Exceptional;
    public Bindings overriding(Bindings bindings);
    public Bindings disjointUnion(Bindings bindings);
}
