package entities.playerstuff.states;

import entities.playerstuff.Player;

/**
 * ...
 * @author Isaac Denner
 */
class KnockBackState extends PlayerState 
{
	private var strength:Float = 600;
	
	public function new(thisPlay:Player) 
	{
		super(thisPlay, "knocked");
		
	}
	
	public override function enter()
	{
		super.enter();
		play.maxVelocity.x = Math.abs(strength);
		play.velocity.x = strength;
		play.velocity.y = -Math.abs(strength / 2);
	}
	
	public override function move(speed:Float)
	{
		
	}
	
	public override function canExit(nextState:PlayerState):Bool
	{
		return (Math.abs(play.velocity.x) < Math.abs(strength / 3));
	}
	
	
	public function init(Str:Float)
	{
		strength = Str;
	}
}