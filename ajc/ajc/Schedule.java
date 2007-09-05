
package ajc;

import ajc.data.*;

import java.util.Hashtable;
import java.util.Calendar;
import java.util.Random;

/* Singleton */
public class Schedule implements Scheduling {
    private static Schedule theSchedule = null;

    private DataFactory factory;
    private Hashtable threads = new Hashtable();
    private Hashtable agents = new Hashtable();
    private Hashtable buffers = new Hashtable();

    private Schedule(DataFactory factory) {
	this.factory = factory;
	Agent agent = factory.makeAgent();
	Thread thread = Thread.currentThread();
	agents.put(agent, thread);
	threads.put(thread, agent);
	buffers.put(agent, new TaggedBuffers(factory));
    }

    public static void initSchedule(DataFactory factory) {
	theSchedule = new Schedule(factory);
    }

    public static Schedule getSchedule() {
	if (theSchedule == null)
	    throw new RuntimeException("Initialize schedule first!");
	return theSchedule;
    }

    /* Interface */

    public synchronized Empty send(Agent agent, Message message, MessageTag messageTag) throws Exceptional {
	if (agents.containsKey(agent)) {
	    TaggedBuffers taggedBuffers = (TaggedBuffers)buffers.get(agent);
	    taggedBuffers.queue(messageTag, message);
	}
	throw new Exceptional(factory.makeEmpty());
    }	
	
    public synchronized Message receive(MessageTag messageTag) 
	throws Exceptional {
	Thread thread = Thread.currentThread();
	if (threads.containsKey(thread)) {
	    Agent agent = (Agent)threads.get(thread);
	    TaggedBuffers taggedBuffers = (TaggedBuffers)buffers.get(agent);
	    return taggedBuffers.dequeue(messageTag);
	}
	throw new Exceptional(factory.makeEmpty());
    }	


    public synchronized Agent activate(Action action) {
	Agent agent = factory.makeAgent();
	Thread thread = new Thread(action);
	agents.put(agent, thread);
	//threads.put(thread, agent);
	buffers.put(agent, new TaggedBuffers(factory));
	thread.start();
	return agent;
    }

    public synchronized Empty deactivate(Agent agent) throws Exceptional {
	if (agents.containsKey(agent)) {
	    Thread thread = (Thread)(agents.get(agent));
	    thread.interrupt();
	    agents.remove(agent);
	    //threads.remove(thread);
	    return factory.makeEmpty();
	}
	throw new Exceptional(factory.makeEmpty());
    }

    public synchronized Agent currentAgent() {
	return (Agent)(threads.get(Thread.currentThread()));
    }

    public Int currentTime() {
	return factory.makeInt((Calendar.getInstance()).get(Calendar.SECOND));

    }

    public Int chooseNatural() {
	return factory.makeInt((new Random()).nextInt());
    }

}


	
