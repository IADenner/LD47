package entities.weapons.plugins;
import entities.enemies.Enemy;

/**
 * @author Isaac Denner
 */
interface WeaponPlugin 
{
	public function activate(thisEnemy:Enemy):Void;
}