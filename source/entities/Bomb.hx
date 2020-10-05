package entities;
import flixel.tweens.FlxTween;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class Bomb extends Entity 
{

	public function new(?X:Float=0, ?Y:Float=0) 
	{
		super(X, Y);
		loadGraphic("assets/images/bomb.png", true, 120, 120);
		animation.add("play", [for (i in 0...24) i], 1, false);
		
		animation.play("play"); 
		animation.finishCallback = animCB;
	}
	
	public function animCB(animName:String)
	{
		for (i in CarriageState.players)
		{
			i.kill();
		}
		
		FlxTween.globalManager.tween(this.scale, {x: 8, y: 8}, 1.0);
	}
}