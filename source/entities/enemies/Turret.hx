package entities.enemies;
import entities.enemies.ai.TurretAI;
import entities.enemies.enemyPlugins.BasicDamageAblePlugin;
import entities.enemies.projectiles.Projectile;
import flixel.tile.FlxTilemap;
import openfl.display.Tilemap;

/**
 * ...
 * @author Isaac Denner
 */
class Turret extends Enemy
{

	public function new(X:Float, Y:Float, tmap:FlxTilemap ) 
	{
		super(X, Y, new TurretAI(this, 2.0, Projectile, tmap), tmap);
		
		
		loadGraphic("assets/images/turret.png", true, 120, 120);
		animation.add("idle", [for (i in 0...24) i]);
		animation.add("fire", [for (i in 24...36) i], false);
		animation.finishCallback = animComplete;
		
		width = 60;
		offset.x = 30;
		damagePlugin = new BasicDamageAblePlugin(this, 0.0);
		
		health = 1;
	}
	
	private function animComplete(animName:String)
	{
		if (animName == "fire") animation.play("idle");
	}
	
}