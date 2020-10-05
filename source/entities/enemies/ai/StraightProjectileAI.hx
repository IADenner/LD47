package entities.enemies.ai;
import entities.Entity;
import entities.enemies.Enemy;
import flixel.FlxG;
import flixel.tile.FlxTilemap;
import openfl.display.Tilemap;

/**
 * ...
 * @author Isaac Denner
 */
class StraightProjectileAI implements EnemyAI 
{
	var tilemap:FlxTilemap;
	var spd:Float;
	public function new(thisEn:Enemy, tmap:FlxTilemap, speed:Float) 
	{
		ent = thisEn;
		tilemap = tmap;
		spd = speed;
	}
	
	
	/* INTERFACE entities.enemies.ai.EnemyAI */
	
	public function update():Void 
	{
		ent.velocity.x = spd * ent.dir;
		
		if (ent.x < 0 || ent.x > tilemap.widthInTiles * 60) ent.kill();
	}
	
	private function killProj(thisEnt:Entity, tmap:FlxTilemap)
	{
		thisEnt.kill();
	}
	
	public var ent:Enemy;
	
}