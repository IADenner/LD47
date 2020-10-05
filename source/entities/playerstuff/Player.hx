package entities.playerstuff;

import entities.playerstuff.playerPlugins.BasicPlayerDamage;
import entities.playerstuff.playerPlugins.PlayerPlugin;
import entities.playerstuff.states.DodgeState;
import entities.playerstuff.states.IdleState;
import entities.playerstuff.states.JumpState;
import entities.playerstuff.states.KnockBackState;
import entities.playerstuff.states.MainAttackState;
import entities.playerstuff.states.MoveState;
import entities.playerstuff.states.PlayerState;
import entities.playerstuff.states.SecondaryAttackState;
import entities.weapons.BasicSword;
import entities.weapons.Weapon;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author Isaac Denner
 */
class Player extends Entity 
{
	private var inputController:InputController;
	private var state:PlayerState;
	
	
	public var moveState:MoveState;
	public var idleState:IdleState;
	public var knockBackState:KnockBackState;
	public var jumpState:JumpState;
	public var mainAttackState:MainAttackState;
	public var secondaryAttackState:SecondaryAttackState;
	public var dodgeState:DodgeState;
	
	public var mainWeapon:Weapon;
	public var secondWeapon:Weapon;
	
	public var plugins:Array<PlayerPlugin>;
	public var damagePlugin:PlayerPlugin;
	
	public var collideWSolids:Bool = true;
	
	public function new(?X:Float=0, ?Y:Float=0, thisInputController:entities.playerstuff.InputController) 
	{
		super(X, Y);
		
		
		
		drag.x = 1000;
		
		inputController = thisInputController;
		thisInputController.assign(this);
		
		loadGraphic("assets/images/frogperson.png", true, 120, 120);
		
		animation.add("run", [for (i in 0...24) i], 35);
		animation.add("jump", [for (i in 24...36) i], false);
		animation.add("mainAttack", [for (i in 36...60) i], 45, false);
		animation.add("knocked", [for (i in 60...66) i], false);
		animation.add("idle", [for (i in 66...90) i]);
		animation.add("dodge", [for (i in 90...108) i], false);
		animation.add("secondAttack", [for (i in 108...114) i], false);
		
		moveState = new MoveState(this, 500);
		idleState = new IdleState(this);
		knockBackState = new KnockBackState(this);
		jumpState = new JumpState(this, 1000);
		mainAttackState = new MainAttackState(this);
		secondaryAttackState = new SecondaryAttackState(this);
		dodgeState = new DodgeState(this, 600, 0.75);
		
		state = idleState;
		state.enter();
		
		width = 50;
		offset.x = 35;
		maxVelocity.y = 1200;
		health = 5;
		
		mainWeapon = new BasicSword(this);
		plugins = new Array<PlayerPlugin>();
		damagePlugin = new BasicPlayerDamage(this);
	}
	
	public function getState():PlayerState
	{
		return state;
	}
	public override function update(elapsed:Float)
	{
		acceleration.y = 1200;
		state.update();
		inputController.update();
		
		managePlugins();
		
		super.update(elapsed);
	}
	
	private function managePlugins()
	{
		damagePlugin.update();
		for (i in plugins)
		{
			i.update();
		}
	}
	
	public function setWeapon(wep:Weapon)
	{
		this.mainWeapon = wep;
		this.mainWeapon.setOwner(this);
	}

	public function setSecondWeapon(wep:Weapon)
	{
		this.secondWeapon = wep;
		this.secondWeapon.setOwner(this);
	}
	
	public function move(direc:Float = 1)
	{
		state.move(direc);
		
		if ((this.x < 60 && this.velocity.x < 0))
		{
			this.velocity.x = 0;
		}
	}
	
	public function changeState(newState:PlayerState)
	{
		if (state.canExit(newState) && newState != state)
		{
			state = newState;
			newState.enter();
		}
	}
	
}