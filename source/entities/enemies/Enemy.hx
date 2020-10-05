package entities.enemies;
import entities.Entity;
import entities.enemies.ai.EnemyAI;
import entities.enemies.enemyPlugins.EnemyDamagePlugin;
import entities.enemies.enemyPlugins.EnemyPlugin;
import entities.weapons.plugins.WeaponPlugin;
import flixel.FlxG;
import flixel.tile.FlxTilemap;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class Enemy extends Entity
{
	var ai:EnemyAI;
	public var tmap:FlxTilemap;
	private var plugins:Array<EnemyPlugin>;
	private var gravity = 1000;
	//seperated from the rest of the plugins for easy changing in/out
	private var damagePlugin:EnemyDamagePlugin;
	
	public function new(X:Float, Y:Float, AI:EnemyAI, tilemap:FlxTilemap) 
	{
		super(X, Y);
		ai = AI;
		tmap = tilemap;
		drag.x = 1000;
		
		plugins = new Array<EnemyPlugin>();
		
		CarriageState.enemies.add(this);
	}
	
	
	public override function update(elapsed:Float)
	{
		if (this.y > tmap.heightInTiles * 60) 
		{
			health = 0;
			kill();
		}
		
		FlxG.collide(tmap, this, collideCB);
		
		ai.update();
		acceleration.y = gravity;
		
		if (dir < 0) flipX = true;
		else if (dir > 0) flipX = false;
		
		
		if (damagePlugin != null) damagePlugin.update();
		for (i in plugins)
		{
			i.update();
		}
		
		if (health <= 0)
		{
			kill();
		}
		
		super.update(elapsed);
		
		
	}
	
	public function collideCB(tiles:FlxTilemap, thisEn:Enemy)
	{
		
	}
}