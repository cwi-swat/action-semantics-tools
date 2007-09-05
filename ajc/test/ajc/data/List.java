
package ajc.data;

import ajc.*;

public interface List extends Datum {
    public DataValue head() throws Exceptional;
    public List tail();
    public List insert(DataValue dataValue);
    public List append(DataValue dataValue);
    public List concat(List list);
}
