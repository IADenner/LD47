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
		texty = new FlxText(0, 0, 800, "From the dawn of time \n Time itself has been pushed onwards by the cosmic Time Train \n Piloted by the ruthless trickster Chronos \n Rumor has it \n Conquering the train will grant eternal life and power over time \n But beware, not all is what it seems on the train");
		texty.screenCenter();
		texty.alignment = FlxTextAlign.CENTER;
		texty.size = 24;
		this.add(texty);
		
		add(new SplashObject());
		
		texty.y = 800;
		
		 var _btnPlay:FlxButton;
		 _btnPlay = new FlxButton(0, 0, "Play", clickPlay);
		 _btnPlay.screenCenter();
		add(_btnPlay);
		_btnPlay.y = 1050;
	}
	
	function clickPlay():Void
	{
		new DungeonGenerator();
		CarriageState.players = null;
		FlxG.switchState(new CarriageState(new FlxOgmo3Loader("assets/level1.ogmo", "assets/levels/level" + DungeonGenerator.levels[DungeonGenerator.currentLevel] + ".json")));
	}
	
}