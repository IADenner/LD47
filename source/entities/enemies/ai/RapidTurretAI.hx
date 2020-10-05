package entities.enemies.ai;

import entities.enemies.Enemy;
import flixel.tile.FlxTilemap;

/**
 * ...
 * @author Isaac Denner
 */
class RapidTurretAI extends TurretAI 
{
	var changeFreq:Float = 0;
	var changeFreqTime:Float = 5.0;
	var firing:Bool = true;
	
	public function new(thisEnt:Enemy, freq:Float, thisGen:Class<Enemy>, tilemap:FlxTilemap) 
	{
		super(thisEnt, freq, thisGen, tilemap);
		
	}
	
	public override function update()
	{
		super.update();
		
		changeFreq -= 1 / 60.0;
		if (changeFreq < 0)
		{
			changeFreq = changeFreqTime;
			firing = !firing;
		}
	}
	
	public override function manageShots()
	{
		if (firing) super.manageShots();
	}
	
}