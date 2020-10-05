package entities.enemies;

import entities.enemies.ai.EnemyAI;
import entities.enemies.ai.RoamAI;
import entities.enemies.enemyPlugins.BasicDamageAblePlugin;
import flixel.tile.FlxTilemap;
import states.CarriageState;
import states.DungeonGenerator;
import states.carriagePlugins.CarriagePlugin;

/**
 * ...
 * @author Isaac Denner
 */
class Conductor extends Enemy 
{

	public function new(X:Float, Y:Float, tilemap:FlxTilemap) 
	{
		super(X, Y, new RoamAI(this, 200), tilemap);
		loadGraphic("assets/images/conductor.png", true, 120, 180);
		animation.add("run", [for (i in 0...18) i]);
		animation.play("run");
		
		width = 60;
		offset.x = 30;
		
		damagePlugin = new BasicDamageAblePlugin(this);
		
		CarriageState.damagers.add(this);
		
		if (Math.random() < 0.5) dir = 1;
		else dir = -1;
		
		health = 4;
		
		gravity = 0;
		
	}
	
	
	public override function kill()
	{
		
		var rand:Class<CarriagePlugin> = DungeonGenerator.extras[Std.random(DungeonGenerator.extras.length)];
		DungeonGenerator.extras.remove(rand);
		CarriageState.plugins.push(Type.createInstance(rand, []));
		super.kill();
	}
}