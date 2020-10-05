package entities.enemies.projectiles;

import entities.enemies.ai.EnemyAI;
import entities.enemies.Enemy;
import entities.enemies.ai.StraightProjectileAI;
import flixel.tile.FlxTilemap;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class Projectile extends Enemy 
{

	public function new(X:Float, Y:Float, tmap:FlxTilemap) 
	{
		super(X, Y, new StraightProjectileAI(this, tmap, 300), tmap);
		
		CarriageState.damagers.add(this);
		
		loadGraphic("assets/images/projectile.png", true, 30, 30);
		animation.add("play", [for (i in 0...24) i]);
		animation.play("play");
		
		gravity = 0;
	}
	
	public override function collideCB(tiles:FlxTilemap, thisEn:Enemy)
	{
		super.collideCB(tiles, thisEn);
		this.kill();
	}
	
}