
package ajc;

import ajc.data.*;

/**
 * Describe class <code>Unfold</code> here.
 *
 * @author <a href="mailto:tvdstorm@wins.uva.nl">Tijs van der Storm</a>
 * @version 1.0
 */
public class Unfold extends Exception {
    private Data data;

    /**
     * Describe <code>unfold</code> method here.
     *
     * @param data given <code>Data</code> 
     * @return nothing
     * @exception Unfold is always thrown with the given data
     */
    public static Data unfold(Data data) throws Unfold {
	//System.out.println("Throwing unfold with data " + data);
	throw new Unfold(data);
    }

    /**
     * Creates a new <code>Unfold</code> instance.
     *
     * @param data a <code>Data</code> value
     */
    public Unfold(Data data) {
	this.data = data;
    }

    /**
     * Describe <code>getData</code> method here.
     *
     * @return a <code>Data</code> value
     */
    public Data getData() {
	return data;
    }

}
