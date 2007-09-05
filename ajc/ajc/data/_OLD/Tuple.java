
package ajc.data;

import java.util.*;

public class Tuple extends LinkedList implements Data, Cloneable {
    public Tuple() {
	super();
    }

    public Tuple concat(Data data1, Data data2) {
	if (data1 == Data.EMPTY)
	if (data1 instanceof Tuple && data2 instanceof Tuple) {
	    Tuple t1 = (Tuple)(((Cloneable)data1).clone());
	    Tuple t2 = (Tuple)(((Cloneable)data2).clone());
	    return (Tuple)t1.addAll(t2);
	}

    public Object clone() {
	super.clone();
    }
    
