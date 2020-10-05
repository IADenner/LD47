package states;
import entities.enemies.enemyPlugins.BackStabPlugin;
import states.carriagePlugins.BombPlugin;
import states.carriagePlugins.CarriagePlugin;
import states.carriagePlugins.CursedPlugin;
import states.carriagePlugins.LavaPlugin;

/**
 * ...
 * @author Isaac Denner
 */
class DungeonGenerator 
{
	public static var levels:Array<Int>;
	public static var currentLevel:Int;
	public static var extras:Array<Class<CarriagePlugin>>;
	
	public function new() 
	{
		extras = [BackStabPlugin, BombPlugin, LavaPlugin, CursedPlugin];
		levels = [1, 2, 3, 4, 5, 6];
		currentLevel = 0;
	
	}
	
}