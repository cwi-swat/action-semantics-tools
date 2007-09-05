
package ajc;

import ajc.data.*;

public interface Scheduling {
    public Empty send(Agent agent, Message message, MessageTag messageTag) throws Exceptional;
    public Message receive(MessageTag messageTag) throws Exceptional;
    public Agent activate(Action action);
    public Empty deactivate(Agent agent) throws Exceptional;
    public Agent currentAgent();
    public Int currentTime();
    public Int chooseNatural();
}
