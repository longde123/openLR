package ui.tool;

import openfl.display.Sprite;
import openfl.events.KeyboardEvent;
import openfl.events.MouseEvent;

import ui.tool.ToolBase;
import ui.tool.lr.*;
import ui.tool.icon.*;
import global.KeyBindings;
import global.Common;

/**
 * ...
 * @author Kaelan Evans
 * 
 * Tool bar seen across top of screen
 * 
 */
class Toolbar extends Sprite
{

	public static var tool:ToolBase;
	public static var icon:IconBase;
	public static var swatch:IconBase;
	private var pencil:IconPencil;
	private var line:IconLine;
	private var save:IconSave;
	private var eraser:IconEraser;
	public var pause:IconPause;
	private var settings:IconSettings;
	private var swBlue:SwatchBlue;
	private var swRed:SwatchRed;
	private var swGreen:SwatchGreen;
	
	private var playB:IconPlay;
	private var stopB:IconStop;
	private var flag:IconFlag;
	
	private var tool_list:Array<IconBase>;
	private var swatch_list:Array<IconBase>;
	
	public function new() 
	{
		super();
		
		Common.gToolbar = this;
		Common.gStage.addEventListener(KeyboardEvent.KEY_UP, key_tool_switch);
		
		this.tool_list = new Array();
		this.swatch_list = new Array();
		
		tool = new ToolPencil();
		
		pencil = new IconPencil();
		this.tool_list.push(this.pencil);
		
		line = new IconLine();
		this.tool_list.push(this.line);
		
		eraser = new IconEraser();
		this.tool_list.push(this.eraser);
		
		pause = new IconPause();
		this.tool_list.push(this.pause);
		this.pause.visible = false;
		
		playB = new IconPlay();
		this.tool_list.push(this.playB);
		
		stopB = new IconStop();
		this.tool_list.push(this.stopB);
		
		flag = new IconFlag();
		this.tool_list.push(this.flag);
		
		save = new IconSave();
		this.tool_list.push(this.save);
		
		settings = new IconSettings();
		this.tool_list.push(this.settings);
		
		this.swBlue = new SwatchBlue();
		this.swatch_list.push(this.swBlue);
		
		this.swRed = new SwatchRed();
		this.swatch_list.push(this.swRed);
		
		this.swGreen = new SwatchGreen();
		this.swatch_list.push(this.swGreen);
		
		Toolbar.icon = pencil;
		icon.select();
		Toolbar.swatch = swBlue;
		swBlue.select();
		
		this.addEventListener(MouseEvent.MOUSE_OVER, this.disable_stage);
		this.addEventListener(MouseEvent.MOUSE_OUT, this.enable_stage);
		
		this.place_icons();
	}
	private function place_icons() {
		var i = 0;
		for (a in this.tool_list) {
			this.addChild(a);
			a.x = (32 * i);
			++i;
		}
		i = 0;
		for (b in this.swatch_list) {
			this.addChild(b);
			b.y = 32;
			b.x = (32 * i);
			++i;
		}
	}
	private function enable_stage(e:MouseEvent):Void 
	{
		Common.gToolBase.enable();
		Common.gStage.addEventListener(KeyboardEvent.KEY_UP, key_tool_switch);
	}
	
	private function disable_stage(e:MouseEvent):Void 
	{
		Common.gToolBase.disable();
		Common.gStage.removeEventListener(KeyboardEvent.KEY_UP, key_tool_switch);
	}
	public function disable_keys() {
		Common.gStage.removeEventListener(KeyboardEvent.KEY_UP, key_tool_switch);
	}
	public function enable_keys() {
		Common.gStage.addEventListener(KeyboardEvent.KEY_UP, key_tool_switch);
	}
	private function key_tool_switch(e:KeyboardEvent):Void 
	{
		if (e.keyCode == KeyBindings.pencil_1 || e.keyCode == KeyBindings.pencil_2) {
			Common.gToolBase.disable();
			icon.deselect();
			tool = new ToolPencil();
			icon = pencil;
			icon.select();
			swatch.select();
		}
		if (e.keyCode == KeyBindings.line_1 || e.keyCode == KeyBindings.line_2) {
			Common.gToolBase.disable();
			icon.deselect();
			tool = new ToolLine();
			icon = line;
			icon.select();
			swatch.select();
		}
		if (e.keyCode == KeyBindings.eraser_1 || e.keyCode == KeyBindings.eraser_2) {
			Common.gToolBase.disable();
			icon.deselect();
			tool = new ToolEraser();
			icon = eraser;
			icon.select();
			swatch.deselect();
			Common.line_type = -1;
		}
		if (e.keyCode == KeyBindings.swatch_blue) {
			swatch.deselect();
			Common.line_type = 0;
			swatch = swBlue;
			swatch.select();
		}
		if (e.keyCode == KeyBindings.swatch_red) {
			swatch.deselect();
			Common.line_type = 1;
			swatch = swRed;
			swatch.select();
		}
		if (e.keyCode == KeyBindings.swatch_green) {
			swatch.deselect();
			Common.line_type = 2;
			swatch = swGreen;
			swatch.select();
		}
	}
	public function set_play_mode() {
		this.pencil.disable();
		this.line.disable();
		this.eraser.disable();
		this.save.disable();
		this.settings.disable();
		this.swBlue.disable();
		this.swGreen.disable();
		this.swRed.disable();
		Common.gStage.removeEventListener(KeyboardEvent.KEY_DOWN, key_tool_switch);
	}
	public function set_edit_mode() {
		this.pencil.enable();
		this.line.enable();
		this.eraser.enable();
		this.save.enable();
		this.settings.enable();
		this.swBlue.enable();
		this.swRed.enable();
		this.swGreen.enable();
		Common.gStage.addEventListener(KeyboardEvent.KEY_UP, key_tool_switch);
	}
}