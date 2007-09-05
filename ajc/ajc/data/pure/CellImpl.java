
package ajc.data.pure;

import ajc.*;
import ajc.data.*;

class CellImpl extends DatumImpl implements Cell {
    private static int cells = 0;
    private int id;

    CellImpl(PureFactory factory) {
	super(factory);
	id = cells++;
    }

    public String toString() {
	return "@" + (new Integer(id)).toString();
    }

}
