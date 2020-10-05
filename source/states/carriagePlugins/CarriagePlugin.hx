package states.carriagePlugins;
import states.CarriageState;

/**
 * @author Isaac Denner
 */
interface CarriagePlugin 
{
	private var state:CarriageState;
	public function onEnter(thisState:CarriageState):Void;
	public function update():Void;
}