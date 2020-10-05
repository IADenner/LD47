package states;
import entities.enemies.Conductor;
import entities.enemies.Enemy;
import entities.enemies.Heart;
import entities.enemies.RapidFireTurret;
import entities.enemies.RobotCharger;
import entities.enemies.Turret;
import entities.setPieces.Chair;
import entities.setPieces.Table;
import entities.setPieces.Wheel;
import entities.enemies.RobotRoamer;
import entities.playerstuff.InputController;
import flixel.FlxCamera.FlxCameraFollowStyle;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.editors.ogmo.FlxOgmo3Loader;
import flixel.addons.editors.ogmo.FlxOgmo3Loader.EntityData;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import entities.playerstuff.Player;
import entities.weapons.Weapon;
import entities.Entity;
import flixel.util.FlxColor;
import states.carriagePlugins.CarriagePlugin;
/**
 * ...
 * @author Isaac Denner
 */
class CarriageState extends FlxState 
{
	var ogmoLoader:FlxOgmo3Loader;
	public var tileMap:FlxTilemap;
	var bgMap:FlxTilemap;
	
	var bg:FlxSprite;
	var bgSlide2:FlxSprite;
	
	public static var players:Array<Player>;
	public static var playerWeapons:FlxTypedGroup<Weapon>;
	
	public static var damagers:FlxTypedGroup<Entity>;
	public static var enemies:FlxTypedGroup<Enemy>;
	public static var solids:FlxTypedGroup<Entity>;
	public static var plugins:Array <CarriagePlugin>;
	
	var healthMeter:FlxText;
	var messages:FlxText = "BEAT ALL ENEMIES";
	
	public static var messageTexts:String;
	
	public override function new(loader:FlxOgmo3Loader)
	{
		super();
		ogmoLoader = loader;
		
		damagers = new FlxTypedGroup<Entity>();
		solids = new FlxTypedGroup<Entity>();
		enemies = new FlxTypedGroup<Enemy>();
		
		bg = new FlxSprite(0, 0, "assets/images/backgroundbackground.png");
		bgSlide2 = new FlxSprite(7680, 0, "assets/images/backgroundbackground.png");
		add(bg);
		add(bgSlide2);
		
		bgMap = new FlxTilemap();
		ogmoLoader.loadTilemap("assets/images/bgtileset.png", "BG", bgMap);
		add(bgMap);
		
		
		playerWeapons = new FlxTypedGroup<Weapon>();
		
		if (players == null)
		{
			players = new Array<Player>();
			var p1 = new Player(171, 883, new InputController());
			players.push(p1);
			
			
		}
		
		if (plugins == null) 
		{
			plugins = new Array<CarriagePlugin>();
		}
		
		tileMap = new FlxTilemap();
		ogmoLoader.loadTilemap("assets/images/tileset.png", "Main", tileMap);
		add(tileMap);
		
		FlxG.worldBounds.set(0, 0, tileMap.widthInTiles * 60 + 60, tileMap.heightInTiles * 60 + 60);
		
		ogmoLoader.loadEntities(loadEntity, "test");
		
		FlxG.log.add(players[0].x);
		
		for (i in plugins)
		{
			i.onEnter(this);
		}
		
		healthMeter = new FlxText(0, 0, 300, "5", 30);
		add(healthMeter);
		
		messages = new FlxText(0, 80, 300, "EXTRA WIN CONDITIONS: " + messageTexts, 30);
		add(messages);
		
		
		//FlxG.camera.maxScrollX = tileMap.width;
		//FlxG.camera.minScrollX = 0;
		//FlxG.camera.maxScrollY = tileMap.height;
		//FlxG.camera.minScrollY = 0;
	}
	
	override public function create():Void
	{
		super.create();
		
		
	}
	
	public function updateBG()
	{
		if (bg.x < -7680) 
		{
			bgSlide2.x = 0;
			bg.x = 7620;
		}
		else if (bgSlide2.x < -7680) 
		{
			bg.x = 0;
			bgSlide2.x = 7620;
		}
		
		bg.x -= 30;
		bgSlide2.x -= 30;
		
	}
	
	
	public override function update(elapsed:Float)
	{
		updateBG();
		super.update(elapsed);
		
		FlxG.camera.follow(players[0], FlxCameraFollowStyle.PLATFORMER);
		FlxG.camera.maxScrollX = tileMap.width;
		FlxG.camera.minScrollX = 0;
		FlxG.camera.maxScrollY = tileMap.height;
		FlxG.camera.minScrollY = 0;
		healthMeter.text = "Health: " + players[0].health;
		
		
		var allPlayersDead:Bool = true; //assume all players are dead until proven otherwise
		for (i in players)
		{
			FlxG.collide(i, tileMap);
			if (i.collideWSolids) FlxG.collide(i, solids);
			
			if (i.x > tileMap.widthInTiles * 60 - 120) 
			{
				if (enemies.countLiving() == 0) exitState();
				else if (i.velocity.x > 0) i.velocity.x = 0;
			}
			
			if (i.health > 0) allPlayersDead = false;
		}
	
		if (allPlayersDead) gameover();
		
		for (i in plugins)
		{
			i.update();
		}
	}
	
	public function gameover()
	{
		camera.fade(FlxColor.BLACK, 1.0, false, onfadecomplete);
	}
	
	public function onfadecomplete()
	{
		FlxG.resetGame();
	}
	
	
	function exitState()
	{
		remove(players[0].mainWeapon);
		
		DungeonGenerator.currentLevel += 1;
		FlxG.switchState(new CarriageState(new FlxOgmo3Loader("assets/level1.ogmo", "assets/levels/level" + DungeonGenerator.levels[DungeonGenerator.currentLevel] + ".json")));
	}
	
	function loadEntity(entity:EntityData)
	{
		switch (entity.name)
		{
			case "wheel":
				add(new Wheel(entity.x, entity.y));
			case "player":
				for (i in 0...players.length)
				{
					//if (players[i].health > 0) players[i].alive = true;
//add(players[i]);
					//add(players[i].mainWeapon);
					//add(players[i].secondWeapon);
					
					//players[i].x = entity.x + i * 60;
					//players[i].y = entity.y;
					
					var newPlayer = new Player(0, 0, new InputController());
					newPlayer.health = players[i].health;
					newPlayer.setWeapon(players[i].mainWeapon);
					
					if (players[i].secondWeapon != null)
					{
						
						newPlayer.setSecondWeapon(players[i].secondWeapon);
						add(newPlayer.secondWeapon);
						
						
					}
					newPlayer.x = entity.x;
					newPlayer.y = entity.y;
					
					players[i] = newPlayer;
					add(newPlayer);
					add(newPlayer.mainWeapon);
					
					
					
				}
			case "robotroamer":
				add(new RobotRoamer(entity.x, entity.y, tileMap));
			case "robotcharger":
				add(new RobotCharger(entity.x, entity.y, tileMap));
			case "turret":
				add(new Turret(entity.x, entity.y, tileMap));
			case "rapidfireturret":
				add(new RapidFireTurret(entity.x, entity.y, tileMap));
			case "table":
				add(new Table(entity.x, entity.y));
			case "chair":
				add(new Chair(entity.x, entity.y, entity.flippedX));
			case "heart":
				add(new Heart(entity.x, entity.y));
			case "conductor":
				add (new Conductor(entity.x, entity.y, tileMap));
			default: FlxG.log.add("unrecognized entity");
		}
	}
}