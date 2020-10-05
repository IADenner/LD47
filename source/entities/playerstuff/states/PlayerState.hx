package entities.playerstuff.states;
import entities.playerstuff.Player;
import flixel.animation.FlxAnimation;

/**
 * ...
 * @author Isaac Denner
 */
class PlayerState 
{
	var play:Player;
	var anim:String;
	
	public function new(thisPlay:Player, thisAnim:String) 
	{
		play = thisPlay;
		anim = thisAnim;
	}
	
	public function enter()
	{
		play.animation.play(anim, true);
	}
	
	public function move(speed:Float)
	{
		if (speed < 0) play.flipX = true;
		else if (speed > 0) play.flipX = false;
	}
	
	public function canExit(nextState:PlayerState):Bool
	{
		return true;
	}
	
	public function update()
	{
		
	}
}