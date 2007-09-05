
package ajc;

import ajc.data.*;

/*
 * Since constructors are never inherited, acj must generate a 
 * constructor for each Enactable initializing factory.
 */

public abstract class AbstractEnactable implements Enactable {
    protected DataFactory factory;

    protected Data fail() throws Failed {
	Failed e = new Failed();
	//e.printStackTrace();
	throw e;
    }
    protected Data raise(Data data) throws Exceptional {
	Exceptional e = new Exceptional(data);
	//e.printStackTrace();
	throw e;
    }

    protected Data catchExceptional(Exception e) throws Failed {
	if (e instanceof Exceptional) 
	    return ((Exceptional)e).getData();
	if (e instanceof Failed)
	    throw (Failed)e;
	if (e instanceof ClassCastException)
	    return factory.makeEmpty();	
	e.printStackTrace();
	System.exit(1);
	return null;
    }

}
