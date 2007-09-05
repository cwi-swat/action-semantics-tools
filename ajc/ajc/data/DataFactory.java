
package ajc.data;

import ajc.*;

public interface DataFactory {
    public Empty makeEmpty();
    public Data makeTuple(DataValue dataValue, Data data);
    public Int makeInt(long n);
    public Token makeToken(String s);
    public Bool makeBool(boolean b);
    public MessageTag makeMessageTag(String s);
    public List makeList1(DataValue dataValue);
    public List makeList0();
    public Action makeAction(Enactable enactable);
    public Bindings makeNoBindings();
    public Bindings makeBindings(Token token, Bindable bindable);
    public Agent makeAgent();
    public Cell makeCell();
}
