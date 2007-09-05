
package ajc.data.pure;

import ajc.data.Datum;
import ajc.data.Data;
import ajc.data.Action;

import ajc.Exceptional;
import ajc.Store;

class ActionImpl extends DatumImpl implements Action {
    private Data result;
    private Enactable enactable;


    /* Constructors only visible in this package. */
    ActionImpl(PureFactory factory, Enactable enactable) {
	super(factory);
	this.enactable = enactable;
    }

    ActionImpl(PureFactory factory) {
	this(factory, null);
    }
	
    /* From Action. */

    public Enactable getEnactable() {
	return enactable;
    }

    public Data enact() {
	return enactable.enact(factory.makeEmpty(), factory.makeNoBindings());
    }	

    public Action giveThen(Action action) {
	return new Then(factory, enactable, action.getEnactable());
    }
    public Action giveAndThen(Action action) {
	return new AndThen(factory, enactable, action.getEnactable());
    }
    public Action giveAnd(Action action) {
	return new And(factory, enactable, action.getEnactable());
    }
    public Action giveExceptionally(Action action) {
	return new Exceptionally(factory, enactable, action.getEnactable());
    }
    public Action giveAndExceptionally(Action action) {
	return new AndExceptionally(factory, enactable, action.getEnactable());
    }
    public Action giveOtherwise(Action action) {
	return new AndOtherwise(factory, enactable, action.getEnactable());
    }
    public Action giveHence(Action action) {
	return new Hence(factory, enactable, action.getEnactable());
    }
    public Action giveIndivisibly() {
	return new Indivisibly(factory, enactable);
    }
}


class Then extends AbstractInfixCombinator {
    public Then(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
    }
    public Data enact(Data data, Bindings bindings) throws Exceptional, Failed {
        return enactable2.enact(enactable1.enact(data, bindings), bindings);
    }
}

class AndThen extends AbstractInfixCombinator {
    public AndThen(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
    }
    public Data enact(Data data, Bindings bindings) throws Exceptional, Failed {
	Data d1 = enactable1.enact(data, bindings);
	Data d2 = enactable2.enact(data, bindings);
	return d1.merge(d2);
    }
}

class And extends AbstractInfixCombinator {
    public And(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
    }
    public Data enact(Data data, Bindings bindings) throws Exceptional, Failed {
	Data d1 = enactable1.enact(data, bindings);
	Data d2 = enactable2.enact(data, bindings);
	return d1.merge(d2);
    }
}

class Exceptionally extends AbstractInfixCombinator {
    public Exceptionally(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
    }
    public Data enact(Data data, Bindings bindings) throws Exceptional, Failed {
	try {
            return enactable1.enact(data,bindings);
        }
        catch (Exceptional e) {
            Data d = e.getData();
            return enactable2.enact(d, bindings);
        }
    }
}

class AndExceptionally extends AbstractInfixCombinator {
    public AndExceptionally(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
    }
    public Data enact(Data data, Bindings bindings) throws Exceptional, Failed {
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
                throw new Exceptional(d1.merge(d2));
            }
        }
    }
}

class Otherwise extends AbstractInfixCombinator {
    public Otherwise(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
    }
    public Data enact(Data data, Bindings bindings) throws Exceptional, Failed {
	try {
            return enactable1.enact(data, bindings);
        }
        catch (Failed f) {
            return enactable2.enact(data, bindings);
        }
    }
}

class Hence extends AbstractInfixCombinator {
    public Hence(PureFactory factory, Enactable enactable1, Enactable enactable2) {
	super(factory, enactable1, enactable2);
    }
    public Data enact(Data data, Bindings bindings) throws Exceptional, Failed {
	return enactable2.enact(data, 
				enactable1.enact(data, bindings).giveThe(Bindings));
    }
}


class Indivisibly extends AbstractPrefixCombinator {
    public Indivisibly(PureFactory factory, Enactable action) {
	super(factory, action);
    }
    public Data enact(Data data, Bindings bindings) throws Exceptional, Failed {
	synchronized (Store.getStore()) {
	    return action.enact(data, bindings);
	}
    }
}


