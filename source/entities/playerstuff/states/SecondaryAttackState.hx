package entities.playerstuff.states;

import entities.playerstuff.Player;

/**
 * ...
 * @author Isaac Denner
 */
class SecondaryAttackState extends PlayerState 
{

	public function new(thisPlay:Player) 
	{
		super(thisPlay, "secondAttack");
		
	}
	
	public function canActivate():Bool
	{
		return false;
	}
	
	public override function update()
	{
		super.update();
		if (play.animation.finished) play.changeState(play.idleState);
	}
}