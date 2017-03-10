package;

import file.SaveManager;
import lr.Toolbar;
import lr.Track;
import openfl.display.MovieClip;
import openfl.display.Sprite;
import openfl.Lib;
import openfl.events.Event;

import init.FileStart;
import global.Common;
import ui.inter.SingleButton;

/**
 * ...
 * @author Kaelan Evans
 * 
 * /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 * //OpenLR Project
 * /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * This program was built using FlashDevelop IDE, with haxe and openFL. Other libraries if used can be found in project.xml
 * 
 * /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 * //Known issues to make work around
 * /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * -- OpenFL does not constantly update vector graphics. Zomming in will cause blurring of lines.
 * 		--Okay suddenly it does anti-alias? Really weird AF
 * -- Haxe does not support array indexing in negative values. Map data type might possible fix this instead of Array or Vector.
 * -- Json save exporting does not come out as expected. Need to figure out why and ask for advice.
 * 
 * /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 * //Notes
 * /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * -- GitKraken test: Success!
 * 
 * /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 * //To do
 * /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * -- Arbitrary save parser. Will allow for saves to be incomplete and future proof
 * -- UI system. Menus, checkboxes, radio buttons, arbitrarily sized buttons, fonts, blah blah blah
 * 
 */
class Main extends Sprite 
{
	private var mainFileInit:FileStart; //this class controls settings
	private var visContainer:MovieClip; //simple display container. This will make it easier to take screenshots and record video without having to move a matrix all around
	private var track:Track;
	private var toolBar:Toolbar;
	private var saveManager:SaveManager; //controls file saving and (in the future) loading
	
	var testButton:SingleButton;
	
	
	public function new() 
	{
		super(); //In Haxe, a super must be called when classes inherit
		
		this.mainFileInit = new FileStart();
		this.init_env();
		this.init_track();
		
		this.stage.addEventListener(Event.RESIZE, resize);
		
		this.testButton = new SingleButton("this is a test button I am making it super long to make sure it works");
		this.addChild(this.testButton);
	}
	
	public function init_env() //Initialize enviornment
	{
		Common.gCode = this; //This class
		Common.gStage = this.stage; //The stage, not to be comfused with main.hx
		
		Common.stage_height = this.stage.stageHeight;
		Common.stage_width = this.stage.stageWidth;
		
		this.saveManager = new SaveManager(); //need to move this
	}
	
	public function init_track() //display minimum items
	{
		this.visContainer = new MovieClip();
		this.addChild(visContainer);
		Common.gVisContainer = this.visContainer;
		
		this.track = new Track();
		this.visContainer.addChild(this.track);
		
		this.toolBar = new Toolbar();
		this.visContainer.addChild(this.toolBar);
	}
	private function resize(e:Event):Void
	{
		trace(this.stage.stageWidth, this.stage.stageHeight);
		this.visContainer.x = this.visContainer.y = 0;
		this.toolBar.x = (this.stage.stageWidth / 2) - (this.toolBar.width / 2); 
		
		Common.stage_height = this.stage.stageHeight;
		Common.stage_width = this.stage.stageWidth;
	}
}
