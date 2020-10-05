package entities.setPieces;
import entities.Entity;
import flixel.FlxObject;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class Chair extends Entity
{

	public function new(X:Float, Y:Float, flippedx:Bool) 
	{
		super(X, Y);
		loadGraphic("assets/images/Chair.png");
		
		this.offset.y = 60;
		this.y += 60;
		this.height = 60;
		CarriageState.solids.add(this);
		set_allowCollisions(FlxObject.UP);
		flipX = flippedx;
		immovable = true;
	}
	
}