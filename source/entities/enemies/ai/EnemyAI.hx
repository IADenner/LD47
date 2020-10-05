package entities.enemies.ai;
import entities.enemies.Enemy;

/**
 * @author Isaac Denner
 */
interface EnemyAI 
{
	public function update():Void;
	private var ent:Enemy;
}