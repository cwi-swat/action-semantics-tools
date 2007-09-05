package ajc;

import java.util.Hashtable;
import ajc.data.*;

/* Singleton pattern. */
public class Store implements Storing {
    private static Store theStore = null;

    private DataFactory factory;
    private Hashtable table;

    private Store(DataFactory factory, int cap, int loadf) {
	this.factory = factory;
	table = new Hashtable(cap, loadf);
    }
    
    public static void initStore(DataFactory factory) {
	initStore(factory, 1024);
    }

    public static void initStore(DataFactory factory, int cap) {
	initStore(factory, cap, 75);
    }

    public static void initStore(DataFactory factory, int cap, int loadf) {
	theStore = new Store(factory, cap, loadf);
    }

    public static Store getStore() {
	if (theStore == null)
	    throw new RuntimeException("Initialize store first!");
	return theStore;
    }

    /* Interface */
    public synchronized Cell create(Storable o) {
	Cell cell = factory.makeCell();
	table.put(cell, o);	
	return cell;	
    }

    public synchronized Empty destroy(Cell cell) throws Exceptional {
	if (table.remove(cell) == null)
	    throw new Exceptional("destroy: cell non-existent", factory.makeEmpty());
	return factory.makeEmpty();
    }

    public synchronized Empty update(Cell cell, Storable o) throws Exceptional {
	if (!table.containsKey(cell)) 
	    throw new Exceptional("update: cell non-existent", factory.makeEmpty());
	table.put(cell, o);
	return factory.makeEmpty();
    }

    public synchronized Storable inspect(Cell cell) throws Exceptional {
	if (!table.containsKey(cell)) 
	    throw new Exceptional("inpect: cell non-existent", factory.makeEmpty());
	return (Storable)(table.get(cell));
    }

    public String toString() {
	return table.toString();
    }

}
    
