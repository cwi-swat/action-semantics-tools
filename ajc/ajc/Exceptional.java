
package ajc;

import ajc.data.*;

public class Exceptional extends Exception {
    Data data;

    public Data getData() {
	return data;
    }

    public Exceptional(Data data) {
	super("Action exception with data " + data);
	this.data = data;
	//printStackTrace();
    }

    public Exceptional(String s, Data data) {
	super("Action exception: " + s + ", with data " + data);
	this.data = data;
    }

}

    
	
