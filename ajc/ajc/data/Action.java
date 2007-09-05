
package ajc.data;

import ajc.*;

public interface Action extends Datum, Runnable  {
    public Enactable enactableValue();
    public Data enact() throws Exceptional, Failed, Unfold;
    public Action then(Action action);
    public Action andThen(Action action);
    public Action and(Action action);
    public Action exceptionally(Action action);
    public Action andExceptionally(Action action);
    public Action otherwise(Action action);
    public Action hence(Action action);
    public Action indivisibly();
}

