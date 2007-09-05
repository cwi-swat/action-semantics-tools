
package ajc.data;

import ajc.*;

public interface Data {
    public Data concat(Data data);
    public List tupleToList();
    public DataValue first() throws Exceptional;
    public Data rest();
    public DataValue at(int n) throws Exceptional;
    public Action provide();
}

