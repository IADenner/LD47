package entities.playerstuff.playerPlugins;
import entities.playerstuff.Player;

/**
 * @author Isaac Denner
 */
interface PlayerPlugin 
{
	
	private var play:Player;
	public function update():Void;
}