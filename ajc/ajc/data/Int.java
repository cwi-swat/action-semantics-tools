
package ajc.data;

import ajc.Exceptional;

public interface Int extends Datum {
    long intValue();
    public Int plus(Int n);
    public Int minus(Int n);
    public Int monus(Int n);
    public Int times(Int n);
    public Empty greater(Int n) throws Exceptional;
    public Empty greaterOrEq(Int n) throws Exceptional;
    public Empty less(Int n) throws Exceptional;
    public Empty lessOrEq(Int n) throws Exceptional;
}

