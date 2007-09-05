
package ajc;

import ajc.data.*;

public interface Storing {
    public Cell create(Storable storable);
    public Empty destroy(Cell cell) throws Exceptional;
    public Empty update(Cell cell, Storable o) throws Exceptional;
    public Storable inspect(Cell cell) throws Exceptional;
}
