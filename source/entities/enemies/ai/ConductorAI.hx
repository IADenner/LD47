package entities.enemies.ai;
import entities.enemies.Enemy;
import entities.enemies.Turret;
import flixel.tile.FlxTilemap;

/**
 * ...
 * @author Isaac Denner
 */
class ConductorAI implements EnemyAI 
{
	var turretAI:TurretAI;
	var turret2AI:TurretAI;
	
	var roamAI:RoamAI;
	
	var switchTime:Float = 6.0;
	var switchTimer:Float = 6.0;
	var switchState:Int = 1;
	var currentState:EnemyAI;
	
	public function new(thisCond:Enemy) 
	{
		ent = thisCond;
		turretAI = new TurretAI(ent, 2.0, RobotRoamer, ent.tmap);
		turret2AI = new TurretAI(ent, 3.0, RobotCharger, ent.tmap);
		roamAI = new RoamAI(ent, 300);
	}
	
	
	/* INTERFACE entities.enemies.ai.EnemyAI */
	
	public function update():Void 
	{
		switchTimer -= 1.0 / 60.0;
		if (switchTimer < 0) 
		{
			switchTimer = switchTime;
			switchState += 1;
		}
		
		else if (switchState % 4 == 0) currentState = roamAI;
		else if (switchState % 3 == 0) currentState = turret2AI;
		else if (switchState % 2 == 0) currentState = roamAI;
		else currentState = turretAI;
		
		currentState.update();
	}
	
	public var ent:Enemy;
	
}