package entities;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author Isaac Denner
 */
class Entity extends FlxSprite 
{
	
	public var dir:Int = 1;
	public var damage:Int = 1;
	public var knockback:Float = 600;
	
	public function new(?X:Float=0, ?Y:Float=0) 
	{
		super(X, Y);
		
	}
	
}