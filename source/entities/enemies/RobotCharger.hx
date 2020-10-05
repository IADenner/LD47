package entities.enemies;

import entities.enemies.ai.ChargeAI;
import entities.enemies.ai.EnemyAI;
import entities.enemies.ai.RoamAI;
import entities.enemies.enemyPlugins.BasicDamageAblePlugin;
import flixel.tile.FlxTilemap;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class RobotCharger extends Enemy 
{

	public function new(X:Float, Y:Float, tilemap:FlxTilemap) 
	{
		super(X, Y, new ChargeAI(this, 600), tilemap);
		loadGraphic("assets/images/greenrobot.png", true, 120, 120);
		animation.add("run", [for (i in 0...18) i]);
		animation.play("run");
		
		width = 60;
		offset.x = 30;
		
		damagePlugin = new BasicDamageAblePlugin(this);
		
		CarriageState.damagers.add(this);
		
		if (Math.random() < 0.5) dir = 1;
		else dir = -1;
		
		health = 1;
	}
	
}