package states.carriagePlugins;
import entities.enemies.enemyPlugins.BackStabPlugin;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class BackstabPlugin implements CarriagePlugin 
{

	public function new() 
	{
		CarriageState.messageTexts += "\nENEMIES CAN ONLY BE BACKSTABBED";
	}
	
	
	/* INTERFACE states.carriagePlugins.CarriagePlugin */
	
	public var state:CarriageState;
	
	public function onEnter(thisState:CarriageState) 
	{
		state = thisState;
		
		for (i in CarriageState.enemies)
		{
			i.damagePlugin = new BackStabPlugin(i, i.damagePlugin);
		}
	}
	
	public function update() 
	{
		
	}
	
}