package;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxSpriteUtil;

/**
 * ...
 * @author Isaac Denner
 */
class SplashObject extends FlxSprite 
{

	public function new() 
	{
		super(0, 0);
		
		loadGraphic("assets/images/splash.png", true, 800, 800);
		animation.add("play", [for (i in 0...48) i], 16);
		animation.play("play");
		screenCenter();
		y = -50;
		
	}
	
}