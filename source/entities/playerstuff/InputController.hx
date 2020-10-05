package entities.playerstuff;
import entities.Entity;
import flixel.FlxG;

/**
 * ...
 * @author Isaac Denner
 */
class InputController 
{
	private var doubleTapLeftTimer:Float = 0;
	private var doubleTapRightTimer:Float = 0;
	
	private var play:Player;
	
	public function new() 
	{
		
	}
	
	public function assign(ent:Player)
	{
		play = ent;
	}
	
	///don't need null checks since this should only be called by the entity it has assigned itself to
	public function update()
	{
		
		doubleTapLeftTimer -= 1 / 60.0;
		doubleTapRightTimer -= 1 / 60.0;
		
		if (FlxG.keys.anyJustReleased([A]))
		{
			if (doubleTapLeftTimer > 0) dodgeLeft();
			doubleTapLeftTimer = 0.3;
		}
		
		
		if (FlxG.keys.anyJustReleased([D]))
		{
			if (doubleTapRightTimer > 0) dodgeRight();
			doubleTapRightTimer = 0.3;
		}
		
		if (FlxG.keys.anyPressed([W])) jump();
		
		
		if (FlxG.keys.anyPressed([S])) fall();
		else solid();
		
		if (FlxG.keys.anyPressed([A])) moveLeft();
		else if (FlxG.keys.anyPressed([D])) moveRight();
		else moveNeutral();
		
		if (FlxG.keys.anyPressed([O])) secondaryWeapon();
		else if (FlxG.keys.anyPressed([P])) primaryWeapon();
		
	}
	
	
	private function solid()
	{
		play.collideWSolids = true;
	}
	private function fall()
	{
		play.collideWSolids = false;
	}
	
	private function moveNeutral()
	{
		play.changeState(play.idleState);
	}
	
	private function moveLeft()
	{
		play.dir = -1;
		play.move( -800);
	}
	
	private function moveRight()
	{
		play.dir = 1;
		play.move(800);
	}
	
	private function dodgeLeft()
	{
		play.dir = -1;
		play.changeState(play.dodgeState);
	}
	
	private function dodgeRight()
	{
		play.dir = 1;
		play.changeState(play.dodgeState);
	}
	
	private function primaryWeapon()
	{
		if (play.mainAttackState.canActivate()) play.changeState(play.mainAttackState);
	}
	
	private function secondaryWeapon()
	{
		play.changeState(play.secondaryAttackState);
	}
	
	
	private function jump()
	{
		play.changeState(play.jumpState);
	}
}