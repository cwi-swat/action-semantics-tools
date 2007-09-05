
package ajc;

import ajc.data.*;

/*
 * Since constructors are never inherited, acj must generate a 
 * constructor for each Enactable initializing factory.
 */

public abstract class AbstractEnactable implements Enactable {
    protected DataFactory factory;

    protected Data fail() throws Failed {
	throw new Failed();
    }
    protected Data raise(Data data) throws Exceptional {
	throw new Exceptional(data);
    }

    protected Data catchExceptional(Exception e) throws Exception {
	if (e instanceof Exceptional) 
	    return ((Exceptional)e).getData();
	if (e instanceof Failed)
	    throw (Failed)e;
	if (e instanceof ClassCastException)
	    return factory.makeEmpty();	
	throw e;
    }

    protected void catchFailed(Exception e) throws Exception {
	if (!(e instanceof Failed))
	    throw e;
    }
}
