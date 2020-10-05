package states.carriagePlugins;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class CursedPlugin implements CarriagePlugin 
{

	public function new() 
	{
		CarriageState.messageTexts += "\LOSE 1 HEALTH EVERY 10 SECONDS";
	}
	
	
	/* INTERFACE states.carriagePlugins.CarriagePlugin */
	
	public var state:CarriageState;
	
	public function onEnter(thisState:CarriageState):Void 
	{
		
	}
	
	public function update():Void 
	{
		for (i in CarriageState.players)
		{
			i.health -= (0.1 / 60.0);
		}
	}
	
}