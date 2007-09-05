
package ajc;

import ajc.data.*;

public class Exceptional extends Exception {
    Data data;

    public Data getData() {
	return data;
    }

    public Exceptional(Data data) {
	super("Primitive action exception with data " + data);
	this.data = data;
    }

    public Exceptional(String s, Data data) {
	super("Action exception: " + s + ", with data " + data);
	this.data = data;
    }

}

    
	
