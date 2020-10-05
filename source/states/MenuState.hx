package states;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.addons.editors.ogmo.FlxOgmo3Loader;
import states.CarriageState;
import source.AssetPaths;

class MenuState extends FlxState
{
	
	override public function create():Void
	{
		super.create();
		
		var texty:FlxText;
		texty = new FlxText(0, 0, 300, "From the dawn of time \n Time itself has been pushed onwards by the cosmic Time Train \n Piloted by the ruthless conductor Cromulon \n Slowly pushing the universe to its heat death");
		texty.screenCenter();
		texty.size = 15;
		this.add(texty);
		texty.y = 20;
		
		 var _btnPlay:FlxButton;
		 _btnPlay = new FlxButton(0, 0, "Play", clickPlay);
		 _btnPlay.screenCenter();
		add(_btnPlay);
	}
	
	function clickPlay():Void
	{
		new DungeonGenerator();
		FlxG.switchState(new CarriageState(new FlxOgmo3Loader("assets/level1.ogmo", "assets/levels/level1.json")));
	}
	
}