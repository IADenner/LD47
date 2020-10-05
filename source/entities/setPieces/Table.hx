package entities.setPieces;
import entities.Entity;
import flixel.FlxObject;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class Table extends Entity
{

	public function new(X:Float, Y:Float) 
	{
		super(X, Y);
		loadGraphic( "assets/images/table.png");
		CarriageState.solids.add(this);
		set_allowCollisions(FlxObject.UP);
		immovable = true;
	}
	
}