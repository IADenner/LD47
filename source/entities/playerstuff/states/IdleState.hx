package entities.playerstuff.states;

import entities.playerstuff.Player;

/**
 * ...
 * @author Isaac Denner
 */
class IdleState extends PlayerState 
{

	public function new(thisPlay:Player) 
	{
		super(thisPlay, "idle");
		
	}
	
	public override function enter()
	{
		super.enter();
		play.acceleration.x = 0;
	}
	public override function move(speed:Float)
	{
		if (speed != 0) play.changeState(play.moveState);
		
	}
}