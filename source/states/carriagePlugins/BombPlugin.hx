package states.carriagePlugins;
import entities.Bomb;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class BombPlugin implements CarriagePlugin 
{

	public function new() 
	{
		CarriageState.messageTexts += "\nDEFEAT EACH CARRIAGE BEFORE BOMB EXPLODES";
	}
	
	
	/* INTERFACE states.carriagePlugins.CarriagePlugin */
	
	public var state:CarriageState;
	
	public function onEnter(thisState:CarriageState):Void 
	{
		state = thisState;
		state.add(new Bomb(CarriageState.players[0].x + 240, CarriageState.players[0].y));
	}
	
	public function update():Void 
	{
		
	}
	
}