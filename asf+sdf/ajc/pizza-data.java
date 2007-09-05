
// Packages
/*

ajc.data.pure
ajc.data
ajc.sorts
ajc.actions

*/


abstract class DataSort {
    public boolean subSort(DataSort sort);
    public boolean concat(DataSort sort) {
    }
}

public class EmptySort extends DataSort

public class SimpleSort extends DataSort {
    public SimpleSort(Class class) {
    }
    public boolean subSort(DataSort sort) {
	// getClass and isAssignableFrom
    }
}

abstract class ComplexSort extends DataSort {
}

public class TupleSort extends ComplexSort {
    public TupleSort(List sorts) {
    }
    public boolean subSort(DataSort sort) {
    }
}

abstract class RegularSort extends ComplexSort {
}

public class StarSort extends RegularSort {
    public StarSort(Class class);
    public boolean subSort(DataSort sort) {
    }
}

public class PlusSort extends RegularSort {
    public PlusSort(Class class);
    public boolean subSort(DataSort sort) {
    }
}

public class OptSort extends RegularSort {
    public OptSort(Class class);
    public boolean subSort(DataSort sort) {
    }
}



public interface Typeable {
    public DataSort getSort();
}

public interface Data extends Typeable, Cloneable {
    public Data concat(Data data) {
	//implement merge here.
    }
}

public class Tuple implements Data, Comparable {
    private List datums;
    public Tuple(List datums) {
	this.datums = datums;
    }
    public Type getType() {
    }
    public boolean equals(Data data) {
    }
}

interface Datum extends Data {
    public DataSort getSort() {
	return new SimpleSort(this.getClass());
    }
}

interface Enactable extends Datum, Storable;
interface Int extends Datum;
interface Nat extends Datum;
interface Bool extends Datum;
interface Bindings extends Datum;
interface Empty extends Data;


