package states.carriagePlugins;
import entities.playerstuff.Player;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.tile.FlxTilemap;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class LavaPlugin implements CarriagePlugin 
{

	public function new() 
	{
		CarriageState.messageTexts += "\nENEMIES CAN ONLY BE BACKSTABBED";
	}
	
	
	/* INTERFACE states.carriagePlugins.CarriagePlugin */
	
	public var state:CarriageState;
	
	public function onEnter(thisState:CarriageState):Void 
	{
		state = thisState;
	}
	
	public function update():Void 
	{
		for (i in CarriageState.players)
		{
			FlxG.collide(i, state.tilemap, cb);
		}
	}
	
	public function cb(P:Player, tmap:FlxTilemap)
	{
		if (P.touching(FlxObject.DOWN))
		{
			P.health -= 0.05;
		}
	}
	
}