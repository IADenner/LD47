package entities.setPieces;

/**
 * ...
 * @author Isaac Denner
 */
class Wheel extends Entity
{

	public function new(X:Float, Y:Float) 
	{
		super(X, Y);
		loadGraphic("assets/images/wheel.png", true, 120, 120);
		animation.add("play", [for (i in 0...24) i]);
		animation.play("play");
	}
	
}