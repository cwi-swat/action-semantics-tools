
package ajc.data.pure;

import ajc.data.*;
import ajc.*;


public class PureFactory implements DataFactory {
    public PureFactory() {
	EmptyImpl.init(this);
	ListImpl.init(this);
    }

    public Int makeInt(long n) {
	return new IntImpl(this, n);
    }
    public Token makeToken(String s) {
	return new TokenImpl(this, s);
    }
    public Bool makeBool(boolean b) {
	return new BoolImpl(this, b);
    }
    public MessageTag makeMessageTag(String s) {
	return new MessageTagImpl(this,s);
    }
    public List makeList0() {
	return ListImpl.empty();
    }

    public List makeList1(DataValue dataValue) {
	return new ListImpl(this,dataValue);
    }
	
    public Bindings makeNoBindings() {
	return new BindingsImpl(this);
    }
    public Agent makeAgent() {
	return new AgentImpl(this);
    }
    public Cell makeCell() {
	return new CellImpl(this);
    }
    public Empty makeEmpty() {
	return EmptyImpl.empty();
    }

    public Data makeTuple(DataValue dataValue, Data data) {
	return new DataImpl(this, dataValue, data);
    }
    
    public Action makeAction(Enactable enactable) {
	return new ActionImpl(this, enactable);
    }

}

