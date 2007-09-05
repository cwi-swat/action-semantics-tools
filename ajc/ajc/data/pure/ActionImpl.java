
package ajc.data.pure;

import ajc.*;
import ajc.data.*;


class ActionImpl extends DatumImpl implements Action {
    protected Enactable enactable;


    /* Constructors only visible in this package. */
    ActionImpl(PureFactory factory, Enactable enactable) {
	super(factory);
	this.enactable = enactable;
    }

    ActionImpl(PureFactory factory) {
	this(factory, null);
    }

    /* From Action. */

    public Enactable enactableValue() {
	return enactable;
    }

    public Data enact() throws Exceptional, Failed, Unfold {
	return enactable.enact(factory.makeEmpty(), factory.makeNoBindings());
    }	

    public Action then(Action action) {
	return new Then(factory, enactable, action.enactableValue());
    }
    public Action andThen(Action action) {
	return new AndThen(factory, enactable, action.enactableValue());
    }
    public Action and(Action action) {
	return new And(factory, enactable, action.enactableValue());
    }
    public Action exceptionally(Action action) {
	return new Exceptionally(factory, enactable, action.enactableValue());
    }
    public Action andExceptionally(Action action) {
	return new AndExceptionally(factory, enactable, action.enactableValue());
    }
    public Action otherwise(Action action) {
	return new Otherwise(factory, enactable, action.enactableValue());
    }
    public Action hence(Action action) {
	return new Hence(factory, enactable, action.enactableValue());
    }
    public Action indivisibly() {
	return new Indivisibly(factory, enactable);
    }

    /* From Runnable */
    public void run() {
	try {
	    Data result = enact();
	}
	catch (Exception e) {
	    System.out.println("Agent exited abnormally.");
	}
    }

    /* From equality */
    public Empty equals(Data data) throws Exceptional {
	if (data instanceof Action)
	    if (enactable == ((Action)data).enactableValue())
		return factory.makeEmpty();
	throw new Exceptional(factory.makeEmpty());
    }

}


class Then extends AbstractInfixCombinator {
    private class _Then implements Enactable {
	public Data enact(Data data, Bindings bindings) throws Exceptional, Failed, Unfold {
	    return enactable2.enact(enactable1.enact(data, bindings), bindings);
	}
    }
    public Then(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
	enactable = new _Then();
    }
}

class AndThen extends AbstractInfixCombinator {
    private class _AndThen implements Enactable {
	public Data enact(Data data, Bindings bindings) throws Exceptional, Failed, Unfold {
	    Data d1 = enactable1.enact(data, bindings);
	    Data d2 = enactable2.enact(data, bindings);
	    return d1.concat(d2);
	}
    }
    public AndThen(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
	enactable = new _AndThen();
    }
}

class And extends AbstractInfixCombinator {
    private class _And implements Enactable {
	public Data enact(Data data, Bindings bindings) throws Exceptional, Failed, Unfold {
	    Data d1 = enactable1.enact(data, bindings);
	    Data d2 = enactable2.enact(data, bindings);
	    return d1.concat(d2);
	}
    }
    public And(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
	enactable = new _And();
    }
}

class Exceptionally extends AbstractInfixCombinator {
    private class _Exceptionally implements Enactable {
	public Data enact(Data data, Bindings bindings) throws Exceptional, Failed, Unfold {
	    try {
		return enactable1.enact(data,bindings);
	    }
	    catch (Exceptional e) {
		Data d = e.getData();
		return enactable2.enact(d, bindings);
	    }
	}
    }
    public Exceptionally(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
	enactable = new _Exceptionally();
    }
}

class AndExceptionally extends AbstractInfixCombinator {
    private class _AndExceptionally implements Enactable {
	public Data enact(Data data, Bindings bindings) throws Exceptional, Failed, Unfold {
	    try {
		return enactable1.enact(data,bindings);
	    }
	    catch (Exceptional e1) {
		Data d1 = e1.getData();
		try {
		    return enactable2.enact(data, bindings);
		}
		catch (Exceptional e2) {
		    Data d2 = e2.getData();
		    throw new Exceptional(d1.concat(d2));
		}
	    }
	}
    }
    public AndExceptionally(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
	enactable = new _AndExceptionally();
    }
}

class Otherwise extends AbstractInfixCombinator {
    private class _Otherwise implements Enactable {
	public Data enact(Data data, Bindings bindings) throws Exceptional, Failed, Unfold {
	    try {
		return enactable1.enact(data, bindings);
	    }
	    catch (Failed f) {
		return enactable2.enact(data, bindings);
	    }
	}
    }
    public Otherwise(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
	enactable = new _Otherwise();
    }
}

class Hence extends AbstractInfixCombinator {
    private class _Hence implements Enactable {
	public Data enact(Data data, Bindings bindings) throws Exceptional, Failed, Unfold {
	    return enactable2.enact(data, (Bindings)enactable1.enact(data, bindings));
	}
    }
    public Hence(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
	enactable = new _Hence();
    }
}


class Indivisibly extends AbstractPrefixCombinator {
    private class _Indivisibly implements Enactable {
	public Data enact(Data data, Bindings bindings) throws Exceptional, Failed, Unfold {
	    synchronized (Store.getStore()) {
		return enactable1.enact(data, bindings);
	    }
	}
    }
    public Indivisibly(PureFactory factory, Enactable enactable1) {
	super(factory, enactable1);
	enactable = new _Indivisibly();
    }
}


