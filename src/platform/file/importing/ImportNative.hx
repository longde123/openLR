package platform.file.importing;

import openfl.utils.Object;
import openfl.Lib;
import sys.FileSystem;
import sys.io.File;
import lime.system.System;
import haxe.Json;

import ui.inter.FileWindow;
import ui.inter.TextButton;
import ui.inter.AlertBox;
import global.Common;
import platform.file.ImportBase;
import platform.file.fileType.FileJSON;

/**
 * ...
 * @author Kaelan Evans
 * 
 * 
 * 	var data:String='{"data":{"0":0,"1":1},"method":"test"}';
	var res = haxe.Json.parse(data);
	for (n in Reflect.fields(res.data))
    trace(Reflect.field(res.data, n));
 * 
 * 
 */
class ImportNative extends ImportBase 
{
	var rootDirectoryList:Array<String>;
	var subFolderDirectoryList:Map<String, Array<String>>;
	var subDirectory:String;
	var inSubDir:Bool = false;
	
	var loadButton:TextButton;
	
	var itemWindow:FileWindow;
	
	var trackData:Object;
	var error_alert:AlertBox;
	public function new() 
	{
		super();
		
		Common.gImport = this;
		
		this.loadButton = new TextButton("Load", this.load, ButtonSize.b120x30);
		this.addChild(this.loadButton);
		this.loadButton.y = 600;
		
		if (!FileSystem.isDirectory(System.documentsDirectory + "/openLR/saves")) {
			FileSystem.createDirectory(System.documentsDirectory + "/openLR/saves");
		}
		this.rootDirectoryList = FileSystem.readDirectory(System.documentsDirectory + "/openLR/saves");
		this.subFolderDirectoryList = new Map();
		for (a in this.rootDirectoryList) {
			var _locNameLength:Int= a.length;
			var _locExtensionJSON:String = a.substring(_locNameLength - 5, _locNameLength);
			if (_locExtensionJSON != ".json") {
				this.subFolderDirectoryList[a] = new Array();
				this.subFolderDirectoryList[a] = FileSystem.readDirectory(System.documentsDirectory + "/openLR/saves/" + a);
			}
		}
		this.itemWindow = new FileWindow(this.rootDirectoryList);
		this.addChild(this.itemWindow);
	}
	override public function updateList(_path:String, _isRoot:Bool = false) 
	{
		this.removeChild(this.itemWindow);
		if (!_isRoot) {
			this.subDirectory = _path;
			this.inSubDir = true;
			this.itemWindow = new FileWindow(this.subFolderDirectoryList[_path]);
		} else {
			this.inSubDir = false;
			this.itemWindow = new FileWindow(this.rootDirectoryList);
		}
		this.addChild(this.itemWindow);
	}
	override public function load(_path:String = null) 
	{
		var file:FileJSON = new FileJSON();
		var path:String;
		if (_path != null) {
			path = _path;
			if (FileSystem.isDirectory(_path)) {
				var tempArray = FileSystem.readDirectory(path);
				path = _path + "/" + tempArray.pop();
			}
		} else if (this.inSubDir) {
			path = System.documentsDirectory + "/openLR/saves/" + this.subDirectory + "/" + this.subFolderDirectoryList[this.subDirectory][FileWindow.selectedIndex];
		} else {
			if (FileSystem.isDirectory(System.documentsDirectory + "/openLR/saves/" + this.rootDirectoryList[FileWindow.selectedIndex])) {
				var tempArray = FileSystem.readDirectory(System.documentsDirectory + "/openLR/saves/" + this.rootDirectoryList[FileWindow.selectedIndex]);
				path = System.documentsDirectory + "/openLR/saves/" + this.rootDirectoryList[FileWindow.selectedIndex] + "/" + tempArray.pop();
			} else {
				path = System.documentsDirectory + "/openLR/saves/" + this.rootDirectoryList[FileWindow.selectedIndex];
			}
		}
		try {
			var _locFile = File.getContent(path);
			this.trackData = new Object();
			this.trackData = Json.parse(_locFile);
		} catch (_msg:String) {
			this.visible = false;
			this.error_alert = new AlertBox("Error! Are you sure that was a compatable JSON file?" + "\n" + "If it was, copy this error and provide a save if possible!" + "\n \n" + _msg + "\n" + this.itemWindow.currentList[FileWindow.selectedIndex], this.hide_error, "Silly Goose!");
			Lib.current.stage.addChild(this.error_alert);
			this.error_alert.x = (Common.stage_width * 0.5) - (this.error_alert.width * 0.5);
			this.error_alert.y = (Common.stage_height * 0.5) - (this.error_alert.height * 0.5);
			return;
		}
		file.decode(this.trackData);
	}
	private function hide_error() {
		Lib.current.stage.removeChild(this.error_alert);
		this.visible = true;
	}
}