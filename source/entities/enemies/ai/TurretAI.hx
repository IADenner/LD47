package entities.enemies.ai;
import entities.Entity;
import entities.enemies.Enemy;
import entities.playerstuff.Player;
import flixel.FlxG;
import flixel.tile.FlxTilemap;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class TurretAI implements EnemyAI 
{
	private var gen:Class<Enemy>;
	private var tmap:FlxTilemap;
	
	public function new(thisEnt:Enemy, freq:Float, thisGen:Class<Enemy>, tilemap:FlxTilemap) 
	{
		shotFreq = freq;
		gen = thisGen;
		ent = thisEnt;
		tmap = tilemap;
		
		shotTimer = Math.random() * freq;
	}
	
	/* INTERFACE entities.enemies.ai.EnemyAI */
	public function update():Void 
	{
		target = determineTarget();
		
		if (needDirectionChange()) flipTimer -= 1.0 / 60.0;
		else flipTimer = 1.0;
		
		if (flipTimer < 0)
		{
			ent.dir *= -1;
			flipTimer = 1.0;
		}
		
		
		manageShots();
		
	}
	
	private function manageShots()
	{
		shotTimer -= 1.0 / 60.0;
		if (shotTimer < 0.2) ent.animation.play("fire");
		if (shotTimer < 0)
		{
			shotTimer = shotFreq;
			var newie:Entity = Type.createInstance(gen, [ent.x + ent.width / 2 - 15, ent.y + 15, tmap]);
			newie.dir = ent.dir;
			FlxG.state.add(newie);
		}
	}
	
	private function needDirectionChange():Bool
	{
		return ((target.x < ent.x && ent.dir == 1) || (target.x > ent.x && ent.dir == -1));
	}
	
	private function determineTarget():Player
	{
		var shortestDist:Float = 100000;
		var shortest:Player = CarriageState.players[0];
		for (i in CarriageState.players)
		{
			var dist2Player = Math.sqrt((ent.x - i.x) * (ent.x - i.x) + (ent.y - i.y) * (ent.y - i.y));
			if (dist2Player < shortestDist)
			{
				shortest = i;
				shortestDist = dist2Player;
			}
		}
		
		return shortest;
	}
	
	
	var shotTimer:Float = 3.0;
	var shotFreq:Float = 3.0;
	
	var flipTimer:Float = 1.0;
	var target:Player;
	public var ent:Enemy;
	
}