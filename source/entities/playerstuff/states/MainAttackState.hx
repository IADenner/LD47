package entities.playerstuff.states;

import entities.playerstuff.Player;

/**
 * ...
 * @author Isaac Denner
 */
class MainAttackState extends PlayerState 
{

	public function new(thisPlay:Player) 
	{
		super(thisPlay, "mainAttack");
		
	}
	
	public function canActivate():Bool
	{
		return play.mainWeapon.canActivate();
	}
	
	public override function enter()
	{
		play.mainWeapon.activate();
		
		///successfully activated
		
		super.enter();
		play.acceleration.x = 0;
		
	}
	public override function update()
	{
		super.update();
		if (play.animation.finished) play.changeState(play.moveState);
	}
	
	public override function canExit(nextState:PlayerState):Bool
	{
		return (play.animation.finished || nextState == play.dodgeState);
	}
}