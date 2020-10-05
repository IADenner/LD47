package states;
import entities.enemies.Enemy;
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
import flixel.tile.FlxTilemap;
import entities.playerstuff.Player;
import entities.weapons.Weapon;
import entities.Entity;
/**
 * ...
 * @author Isaac Denner
 */
class CarriageState extends FlxState 
{
	var ogmoLoader:FlxOgmo3Loader;
	var tileMap:FlxTilemap;
	var bgMap:FlxTilemap;
	
	var bg:FlxSprite;
	var bgSlide2:FlxSprite;
	
	public static var players:Array<Player>;
	public static var playerWeapons:FlxTypedGroup<Weapon>;
	
	public static var damagers:FlxTypedGroup<Entity>;
	public static var enemies:FlxTypedGroup<Enemy>;
	public static var solids:FlxTypedGroup<Entity>;
	
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
			
			camera.follow(p1, FlxCameraFollowStyle.PLATFORMER, 100);
		}
		
		tileMap = new FlxTilemap();
		ogmoLoader.loadTilemap("assets/images/tileset.png", "Main", tileMap);
		add(tileMap);
		
		camera.maxScrollX = tileMap.width;
		camera.minScrollX = 0;
		camera.maxScrollY = tileMap.height;
		camera.minScrollY = 0;
		
		ogmoLoader.loadEntities(loadEntity, "test");
		
		FlxG.log.add(players[0].x);
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
		
		var allPlayersDead:Bool = true; //assume all players are dead until proven otherwise
		for (i in players)
		{
			FlxG.collide(i, tileMap);
			if (i.collideWSolids) FlxG.collide(i, solids);
			
			if (i.x > tileMap.widthInTiles * 60 - 60) 
			{
				if (enemies.countLiving() == 0) exitState();
				else if (i.velocity > 0) i.velocity = 0;
			}
			
			if (i.health > 0) allPlayersDead = false;
		}
	
		if (allPlayersDead) gameover();
	}
	
	public function gameover()
	{
		FlxG.
	}
	
	
	function exitState()
	{
		remove(players[0].mainWeapon);
		
		DungeonGenerator.currentLevel += 1;
		FlxG.switchState(new CarriageState(new FlxOgmo3Loader("assets/level1.ogmo", "assets/levels/level" + DungeonGenerator.currentLevel + ".json")));
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
			default: FlxG.log.add("unrecognized entity");
		}
	}
}