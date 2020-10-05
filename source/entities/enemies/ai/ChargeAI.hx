package entities.enemies.ai;

import entities.enemies.Enemy;

/**
 * ...
 * @author Isaac Denner
 */
class ChargeAI extends RoamAI 
{
	var dirSwitchTime:Float = 4.0;
	var dirSwitchTimer:Float = 0.0;
	
	var charging:Bool = false;
	public function new(thisEnt:Enemy, speed:Float) 
	{
		super(thisEnt, speed);
		
	}
	
	public override function update()
	{
		super.update();
		dirSwitchTimer -= 1 / 60.0;
		
		if (dirSwitchTimer < 0)
		{
			dirSwitchTimer = dirSwitchTime;
			charging = !charging;
		}
	}
	
	public override function manageDirection()
	{
		if (charging)
		{
			super.manageDirection();
		}
		else ent.acceleration.x = 0;
	}
}