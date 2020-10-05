package entities.enemies.enemyPlugins;
import entities.Entity;
import entities.enemies.Enemy;
import entities.enemies.enemyPlugins.EnemyPlugin;
import entities.weapons.Weapon;
import flixel.FlxG;
import flixel.util.FlxSpriteUtil;
import states.CarriageState;
/**
 * ...
 * @author Isaac Denner
 */
class BasicDamageAblePlugin implements EnemyPlugin implements EnemyDamagePlugin
{
	var en:Enemy;
	
	var cd:Float = 0.0;
	
	public var kbResist:Float = 1.0;
	
	public var cb:Dynamic->Dynamic->Void;
	
	public function new(thisEn:Enemy, knockBackResist:Float = 1.0 ) 
	{
		cb = hitCB;
		en = thisEn;
		kbResist = knockBackResist;
	}
	
	
	public function update()
	{
		if (!FlxSpriteUtil.isFlickering(en)) FlxG.overlap(en, CarriageState.playerWeapons, cb);
	}
	
	private function hitCB(thisEn:Enemy, pWeapon:Weapon)
	{
		if (pWeapon.isActive())
		{
			thisEn.health -= pWeapon.damage;
			
			if (thisEn.x < pWeapon.x) thisEn.velocity.x = -pWeapon.knockback*kbResist;
			else thisEn.velocity.x = pWeapon.knockback;
			cd = 0.5;
			FlxSpriteUtil.flicker(thisEn, 0.5);
			FlxG.camera.shake(0.005, 0.05);
		}
	}
	
}