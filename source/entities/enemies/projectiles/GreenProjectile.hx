package entities.enemies.projectiles;

import flixel.tile.FlxTilemap;

/**
 * ...
 * @author Isaac Denner
 */
class GreenProjectile extends Projectile 
{

	public function new(X:Float, Y:Float, tmap:FlxTilemap) 
	{
		super(X, Y, tmap);
		loadGraphic("assets/images/greenprojectile.png", true, 30, 30);
		animation.add("play", [for (i in 0...24) i]);
		animation.play("play");
	}
	
}