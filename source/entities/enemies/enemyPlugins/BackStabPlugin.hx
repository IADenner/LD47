package entities.enemies.enemyPlugins;
import entities.enemies.Enemy;
import entities.weapons.Weapon;

/**
 * ...
 * @author Isaac Denner
 */
class BackStabPlugin implements EnemyDamagePlugin 
{
	var en:Enemy;
	var wrapped:EnemyDamagePlugin;
	public var cb:Dynamic->Dynamic->Void;
	public var tempcb:Dynamic->Dynamic->Void;
	
	public function new(thisEn:Enemy, thisWrapped:EnemyDamagePlugin) 
	{
		en = thisEn;
		wrapped = thisWrapped;
		
		tempcb = wrapped.cb;
		
		wrapped.cb = hitCB;
	}
	
	
	/* INTERFACE entities.enemies.enemyPlugins.EnemyPlugin */
	
	public function update():Void 
	{
		wrapped.update();
	}
	
	
	public function hitCB(thisEnemy:Enemy, pweapon:Weapon)
	{
		if ((pweapon.x < en.x + en.width/2 && en.dir == 1) || (pweaon.x > en.x + en.width/2 && en.dir == -1))
		{
			tempcb(thisEnemy, pweapon);
		}
	}
}