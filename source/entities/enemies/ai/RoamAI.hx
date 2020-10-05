package entities.enemies.ai;
import entities.Entity;
import entities.enemies.Enemy;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.tile.FlxTilemap;

/**
 * ...
 * @author Isaac Denner
 */
class RoamAI implements EnemyAI
{
	var ent:Enemy;
	var spd:Float;
	
	public function new(thisEnt:Enemy, speed:Float) 
	{
		ent = thisEnt;
		spd = speed;
		
		
	}
	
	
	public function update()
	{
		ent.maxVelocity.x = spd;
		ent.acceleration.x = ent.dir * spd;
		
		manageDirection();
		
	}
	
	private function manageDirection()
	{
		if (checkRight())
		{
			if (ent.acceleration.x > 0)
			{
				FlxG.log.add("dir switched");
				ent.acceleration.x = 0;
			}
			ent.dir = -1;
		}
		else if (checkLeft())
		{
			if (ent.acceleration.x < 0)
			{
				FlxG.log.add("dir switched");
				ent.acceleration.x = 0;
			}
			ent.dir = 1;
		}
		
		
	}
	
	private function checkLeft():Bool
	{
		//check for walls
		var x:Int = Math.round((ent.x  + ent.width * 0.5 )/ 60);
		var y:Int = Math.round((ent.y + ent.height * 0.5 ) / 60);
		
		var h:Int = Math.round(ent.width / 60);
		var w:Int = Math.round(ent.height / 60);
		
		
		if (ent.tmap.getTile(x - w, y) > 0) return true;
		else //check for nonwalls
		{
			
			if (ent.tmap.getTile(x - w, y + h) <= 0)
			{
				return true;
			}
			else return false;
		}
	}
	
	private function checkRight():Bool
	{
		//check for walls
		var x:Int = Math.round((ent.x  + ent.width * 0.5 )/ 60);
		var y:Int = Math.round((ent.y + ent.height * 0.5 ) / 60);
		
		var h:Int = Math.round(ent.width / 60);
		var w:Int = Math.round(ent.height / 60);
		
		
		if (ent.tmap.getTile(x + w, y) > 0) return true;
		else //check for nonwalls
		{
			if (ent.tmap.getTile(x + w, y + h) <= 0)
			{
				return true;
			}
			else return false;
		}
	}
}