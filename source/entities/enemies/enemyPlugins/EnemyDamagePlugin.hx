package entities.enemies.enemyPlugins;

/**
 * @author Isaac Denner
 */
interface EnemyDamagePlugin extends EnemyPlugin
{
	public var cb:Dynamic->Dynamic->Void;
}