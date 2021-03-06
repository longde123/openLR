package ui.inter;

import openfl.display.MovieClip;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.Assets;

import ui.inter.TextButton;
import global.Language;

/**
 * ...
 * @author ...
 */
class ConfirmDialog extends MovieClip
{
	private var alert_message:TextField;
	private var yes_button:TextButton;
	private var no_button:TextButton;
	var font:TextFormat = new TextFormat(Assets.getFont("fonts/Verdana.ttf").fontName, 14, 0, null, null, null, null, null, TextFormatAlign.CENTER);
	public function new(_msg:String = "Message not set", _yes:Dynamic = null, _no:Dynamic = null) 
	{
		super();
		
		this.graphics.clear();
		this.graphics.lineStyle(2, 0, 1);
		this.graphics.beginFill(0xFFFFFF, 1);
		this.graphics.moveTo(0, 0);
		this.graphics.lineTo(450, 0);
		this.graphics.lineTo(450, 200);
		this.graphics.lineTo(0, 200);
		this.graphics.lineTo(0, 0);
		
		this.alert_message = new TextField();
		this.alert_message.defaultTextFormat = font;
		this.alert_message.text = _msg;
		this.alert_message.selectable = false;
		this.alert_message.wordWrap = true;
		this.addChild(this.alert_message);
		this.alert_message.width = this.width;
		this.alert_message.y = 40;
		
		this.yes_button = new TextButton(Language.Yes, _yes, ButtonSize.b120x30);
		this.addChild(this.yes_button);
		this.yes_button.x = 40;
		this.yes_button.y = 140;
		
		this.no_button = new TextButton(Language.No, _no, ButtonSize.b120x30);
		this.addChild(this.no_button);
		this.no_button.x = 260;
		this.no_button.y = 140;
	}
	
}