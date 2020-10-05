package entities.playerstuff.states;
import flixel.FlxObject;
import entities.playerstuff.Player;

/**
 * ...
 * @author Isaac Denner
 */
class JumpState extends PlayerState 
{

	var jHeight:Float; 
	public function new(thisPlay:Player, jumpVel:Float) 
	{
		super(thisPlay, "jump");
		jHeight = jumpVel;
	}
	
	public override function enter()
	{
		if (play.isTouching(FlxObject.FLOOR))
		{
			super.enter();
			play.velocity.y = -jHeight;
			play.y -= 20;
		}
	}
	
	public override function move(speed:Float)
	{
		super.move(speed);
		play.acceleration.x = speed;
	}
	
	public override function update()
	{
		super.update();
		if (play.isTouching(FlxObject.FLOOR)) play.changeState(play.moveState);
	}
	
	public override function canExit(nextState:PlayerState):Bool
	{
		return ((nextState != play.moveState && nextState != play.idleState) || play.isTouching(FlxObject.FLOOR));
	}
}