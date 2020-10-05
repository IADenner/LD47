package entities.playerstuff.playerPlugins;
import entities.Entity;
import entities.playerstuff.Player;
import flixel.FlxG;
import flixel.util.FlxSpriteUtil;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class BasicPlayerDamage implements PlayerPlugin 
{
	private var cdTime:Float = 0.75;
	private var cd:Float = 0.0;
	private var play:Player;
	
	public function new(thisPlayer:Player, cdLength:Float = 0.75) 
	{
		play = thisPlayer;
		cdTime = cdLength;
	}
	
	
	/* INTERFACE entities.playerstuff.playerPlugins.PlayerPlugin */
	
	public function update():Void 
	{
		if (checkDamageable())
		{
			FlxG.collide(play, CarriageState.damagers, collideCB);
		}
		
		cd -= 1.0 / 60.0;
	}
	
	private function checkDamageable():Bool
	{
		return (cd < 0 && play.getState() != play.dodgeState);
	}
	
	private function collideCB(thisPlayer:Player, damager:Entity)
	{
		thisPlayer.health -= damager.damage;
		
		var kb:Float = damager.knockback;
		thisPlayer.changeState(thisPlayer.knockBackState);
		cd = cdTime;
		
		FlxSpriteUtil.flicker(thisPlayer, cdTime);
	}
	
}