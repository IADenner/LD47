package entities.playerstuff.states;

import entities.playerstuff.Player;

/**
 * ...
 * @author Isaac Denner
 */
class MoveState extends PlayerState 
{
	var maxSpeed:Float;
	public function new(thisPlay:Player, mSpeed:Float) 
	{
		super(thisPlay, "run");
		maxSpeed = mSpeed;
	}
	
	public override function enter()
	{
		super.enter();
		play.maxVelocity.x = maxSpeed;
		play.velocity.x = play.dir * 50;
	}
	
	public override function move(speed:Float)
	{
		super.move(speed);
		play.acceleration.x = speed;
	}
	
	public override function update()
	{
		super.update();
		if (Math.abs(play.velocity.x) < 30) play.changeState(play.idleState);
	}
}