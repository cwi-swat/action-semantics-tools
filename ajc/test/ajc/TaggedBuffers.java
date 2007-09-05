
package ajc;

import ajc.data.*;

import java.util.Hashtable;
import java.util.LinkedList;

public class TaggedBuffers extends Hashtable {
    private DataFactory factory;
    public TaggedBuffers(DataFactory factory) {
	super();
	this.factory = factory;
    }

    public void queue(MessageTag messageTag, Message message) {
	if (!containsKey(messageTag)) {
	    LinkedList messages = new LinkedList();
	    messages.add(message);
	    put(messageTag, messages);
	}
	else 
	    ((LinkedList)get(messageTag)).add(message);
    }

    public Message dequeue(MessageTag messageTag) throws Exceptional {
	if (!containsKey(messageTag))
	    throw new Exceptional(factory.makeEmpty());
	return (Message)((LinkedList)get(messageTag)).removeFirst();
    }
}

