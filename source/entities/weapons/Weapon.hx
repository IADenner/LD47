package entities.weapons;
import entities.enemies.Enemy;
import entities.playerstuff.Player;
import entities.weapons.plugins.WeaponPlugin;
import flixel.FlxG;
import flixel.FlxSprite;
import states.CarriageState;

/**
 * ...
 * @author Isaac Denner
 */
class Weapon extends FlxSprite
{
	public var damage:Int = 1;
	public var knockback:Float;
	public var plugins:Array<WeaponPlugin>;
	private var owner:Player;
	
	public function new(thisOwner:Player) 
	{
		super(thisOwner.x, thisOwner.y);
		
		CarriageState.playerWeapons.add(this);
		
		plugins = new Array<WeaponPlugin>();
		owner = thisOwner;
	}
	
	public function setOwner(thisOwner:Player)
	{
		//FlxG.state.add(this);
		CarriageState.playerWeapons.add(this);
		owner = thisOwner;
	}
	
	public function activate()
	{
		
	}
	
	public function canActivate():Bool
	{
			return true;
	}
	
	public function isActive():Bool
	{
		return true;
	}
	
	public override function update(elapsed:Float)
	{
		super.update(elapsed);
		
		this.animation.frameIndex = owner.animation.frameIndex;
		
		if (owner.dir == 1)
		{
			flipX = false;
			this.x = owner.x;
			this.offset.x = 40;
		}
		else if (owner.dir == -1)
		{
			flipX = true;
			this.x = owner.x + (owner.width - this.width);
			this.offset.x = -40;
		}
		
		this.y = owner.y;
	}
	
	public function activatePlugins(thisEnemy:Enemy)
	{
		for (i in plugins)
		{
			i.activate(thisEnemy);
		}
	}
}