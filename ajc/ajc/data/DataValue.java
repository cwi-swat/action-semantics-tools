
package ajc.data;

import ajc.*;

public interface DataValue extends Data {
    public Empty equals(Data data) throws Exceptional;
}
