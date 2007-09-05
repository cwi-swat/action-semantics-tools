
package ajc.data;

import ajc.Exceptional;
import ajc.Failed;
import ajc.Store;
import ajc.Enactable;

public interface Action extends Datum, Runnable  {
    public Enactable enactableValue();
    public Data enact() throws Exceptional, Failed;
    public Action then(Action action);
    public Action andThen(Action action);
    public Action and(Action action);
    public Action exceptionally(Action action);
    public Action andExceptionally(Action action);
    public Action otherwise(Action action);
    public Action hence(Action action);
    public Action indivisibly();
}

