
package ajc;

public class Failed extends Exception {
    public Failed() {
	super("Action failure");
    }
}
