package entities.enemies;

import entities.Entity;
import entities.playerstuff.Player;
import flixel.FlxG;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class Heart extends Entity 
{

	public function new(?X:Float=0, ?Y:Float=0) 
	{
		super(X, Y);
		loadGraphic("assets/images/heart.png");
	}
	
	public override function update(elapsed:Float)
	{
		super.update(elapsed);
		for (i in CarriageState.players)
		{
			FlxG.collide(i, this, cb);
			
		}
	}
	
	private function cb(play:Player, thisHeart:Heart)
	{
		this.kill();
		play.health = 5;
	}
	
}