package entities.playerstuff.states;

import entities.playerstuff.Player;

/**
 * ...
 * @author Isaac Denner
 */
class DodgeState extends PlayerState 
{
	var timer:Float = 0;
	var dodgeTime:Float = 0;
	var speed:Float = 300;
	
	public function new(thisPlay:Player, dSpeed:Float = 800, dTime:Float = 0.75)
	{
		super(thisPlay, "dodge");
		speed = dSpeed;
		dodgeTime = dTime;
		
	}
	
	public override function enter()
	{
		super.enter();
		timer = dodgeTime;
	}
	
	public override function update()
	{
		super.update();
		
		play.maxVelocity.x = speed;
		play.velocity.x = play.dir * speed;
		
		timer -= 1 / 60.0;
		if (timer < 0) play.changeState(play.idleState);
	}
	
	public override function canExit(nextState:PlayerState):Bool
	{
		return (timer < 0 || nextState == play.jumpState);
	}
	
	public override function move(speed:Float)
	{
		
	}
}