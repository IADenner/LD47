package entities.weapons;

import entities.playerstuff.Player;

/**
 * ...
 * @author Isaac Denner
 */
class BasicSword extends Weapon 
{
	
	private var cd:Float = 0.0;
	private var cdTime:Float = 0.5;
	
	private var activeTimer:Float = 0;
	
	private var activeTime = 0.5;
	
	public function new(thisOwner:Player) 
	{
		super(thisOwner);
		loadGraphic("assets/images/basicSword.png", true, 120, 120);
		
		knockback = 800;
	}
	
	public override function canActivate():Bool
	{
		return (cd < 0);
	}
	
	public override function activate()
	{
		if (cd < 0)
		{
			super.activate();
			activeTimer = activeTime;
			cd = cdTime + activeTime;
		}
		
	}
	
	public override function isActive()
	{
		return (activeTimer > 0);
	}
	public override function update(elapsed:Float)
	{
		super.update(elapsed);
		activeTimer -= 1.0 / 60.0;
		cd -= 1.0 / 60.0;
		
	}
}