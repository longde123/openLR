package lr.menus;

import openfl.Assets;
import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.display.Shape;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import ui.inter.StepCounter;

import ui.inter.TextButton;
import ui.inter.CheckBox;
import global.Language;
import global.Common;
import global.CVar;
import global.SVar;

/**
 * ...
 * @author Kaelan Evans
 */
class SettingsMenu extends Sprite
{
	private var font_a:TextFormat = new TextFormat(Assets.getFont("fonts/Verdana Bold.ttf").fontName, 16, 0, null, null, null, null, null, TextFormatAlign.LEFT);
	
	var objectList:Array<DisplayObject>;
	var close:TextButton;
	var list:Sprite;
	var listMask:Sprite;
	
	var dividerTrackSettings:TextField;
	var dividerEditorSettings:TextField;
	
	var forceReturn:Shape;
	
	var checkBox_colorPlay:CheckBox;
	var checkBox_hitTest:CheckBox;
	var checkBox_hitTestLive:CheckBox;
	var checkBox_forceZoom:CheckBox;
	var stepper_forceZoom:StepCounter;
	var checkBox_autoSlow:CheckBox;
	var stepper_autoSlowRate:StepCounter;
	
	var checkBox_angleSnap:CheckBox;
	var checkBox_jointSnap:CheckBox;
	var checkBox_skeleton:CheckBox;
	var stepper_RiderAlpha:StepCounter;
	var stepper_guiScale:StepCounter;
	var checkBox_previewMode:CheckBox;
	
	public function new() 
	{
		super();
		
		this.graphics.clear();
		this.graphics.lineStyle(4, 0, 1);
		this.graphics.beginFill(0xFFFFFF, 1);
		this.graphics.moveTo(0, 0);
		this.graphics.lineTo(350, 0);
		this.graphics.lineTo(350, 250);
		this.graphics.lineTo(0, 250);
		this.graphics.lineTo(0, 0);
		
		this.objectList = new Array();
		
		this.forceReturn = new Shape();
		
		//Track settings
		this.dividerTrackSettings = new TextField();
		this.dividerTrackSettings.defaultTextFormat = font_a;
		this.dividerTrackSettings.width = 300;
		this.dividerTrackSettings.selectable = false;
		this.dividerTrackSettings.text = "Track Settings";
		this.objectList.push(this.dividerTrackSettings);
		
		this.checkBox_colorPlay = new CheckBox("Color Play", false);
		this.checkBox_colorPlay.hitBox.addEventListener(MouseEvent.MOUSE_UP, this.toggle_colorPlay);
		this.objectList.push(this.checkBox_colorPlay);
		
		this.checkBox_hitTest = new CheckBox("Hit test", false);
		this.checkBox_hitTest.hitBox.addEventListener(MouseEvent.MOUSE_UP, this.toggle_hitTest);
		this.objectList.push(this.checkBox_hitTest);
		
		this.checkBox_hitTestLive = new CheckBox("Live", false);
		this.checkBox_hitTestLive.visible = false;
		this.checkBox_hitTestLive.hitBox.addEventListener(MouseEvent.MOUSE_UP, this.toggle_liveHitTest);
		this.objectList.push(this.checkBox_hitTestLive);
		
		this.checkBox_forceZoom = new CheckBox("Force Zoom");
		this.checkBox_forceZoom.hitBox.addEventListener(MouseEvent.MOUSE_UP, this.toggle_forceZoom);
		this.objectList.push(this.checkBox_forceZoom);
		
		this.stepper_forceZoom = new StepCounter();
		this.stepper_forceZoom.set_numeric_mode(Common.track_scale_min, Common.track_scale_max, 0.5, 2, "x Scale");
		this.stepper_forceZoom.stepUp.addEventListener(MouseEvent.MOUSE_UP, this.stepper_inc_forceZoom);
		this.stepper_forceZoom.stepDown.addEventListener(MouseEvent.MOUSE_UP, this.stepper_dec_forceZoom);
		this.objectList.push(this.stepper_forceZoom);
		
		this.objectList.push(this.forceReturn);
		
		this.checkBox_autoSlow = new CheckBox("Auto Slow", false);
		this.checkBox_autoSlow.hitBox.addEventListener(MouseEvent.MOUSE_UP, this.toggle_autoSlow);
		this.objectList.push (this.checkBox_autoSlow);
		
		this.stepper_autoSlowRate = new StepCounter();
		this.stepper_autoSlowRate.set_numeric_mode(1, 40, 1, 5, " FPS");
		this.stepper_autoSlowRate.stepUp.addEventListener(MouseEvent.MOUSE_UP, this.stepper_inc_autoSlowRate);
		this.stepper_autoSlowRate.stepDown.addEventListener(MouseEvent.MOUSE_UP, this.stepper_dec_autoSlowRate);
		this.objectList.push(this.stepper_autoSlowRate);
		
		//Editor Settings
		this.dividerEditorSettings = new TextField();
		this.dividerEditorSettings.defaultTextFormat = font_a;
		this.dividerEditorSettings.width = 300;
		this.dividerEditorSettings.selectable = false;
		this.dividerEditorSettings.text = "Editor Settings";
		this.objectList.push(this.dividerEditorSettings);
		
		this.checkBox_angleSnap = new CheckBox("Angle Snap", false);
		this.checkBox_angleSnap.hitBox.addEventListener(MouseEvent.MOUSE_UP, this.toggle_angleSnap);
		this.objectList.push(this.checkBox_angleSnap);
		
		this.checkBox_jointSnap = new CheckBox("Joint Snap", true);
		this.checkBox_jointSnap.hitBox.addEventListener(MouseEvent.MOUSE_UP, this.toggle_jointSnap);
		this.objectList.push(this.checkBox_jointSnap);
		
		this.objectList.push(this.forceReturn);
		
		this.checkBox_skeleton = new CheckBox("Skeleton", false);
		this.checkBox_skeleton.hitBox.addEventListener(MouseEvent.MOUSE_UP, this.toggle_skeleton);
		this.objectList.push(this.checkBox_skeleton);
		
		this.stepper_RiderAlpha = new StepCounter();
		this.stepper_RiderAlpha.set_numeric_mode(0, 1, 0.1, 1, " Alpha");
		this.stepper_RiderAlpha.stepDown.addEventListener(MouseEvent.MOUSE_UP, this.stepper_dec_riderAlpha);
		this.stepper_RiderAlpha.stepUp.addEventListener(MouseEvent.MOUSE_UP, this.stepper_inc_riderAlpha);
		this.objectList.push(this.stepper_RiderAlpha);
		
		this.objectList.push(this.forceReturn);
		
		this.stepper_guiScale = new StepCounter();
		this.stepper_guiScale.set_numeric_mode(0.2, 8, 0.2, 1, " UI Scale");
		//this.objectList.push(this.stepper_guiScale);
		
		//this.objectList.push(this.forceReturn);
		
		this.checkBox_previewMode = new CheckBox("Preview edit", false);
		this.checkBox_previewMode.hitBox.addEventListener(MouseEvent.MOUSE_UP, this.toggle_previewMode);
		this.objectList.push(this.checkBox_previewMode);
		
		this.attachItems();
	}
	function attachItems() 
	{
		this.list = new Sprite();
		this.addChild(this.list);
		this.list.x = 5;
		this.list.y = 5;
		
		var i = 0;
		var j = 0;
		for (a in this.objectList) {
			this.list.addChild(a);
			a.y = i * 30;
			if (Std.is(a, TextField)) { //Section divider
				if (i != 0) {
					if (j != 0) {
						i += 2;
						a.y += 30;
					} else {
						++i;
					}
				} else {
					++i;
				}
				j = 0;
			} else if (Std.is(a, Shape)) { //Force return
				++i;
				j = 0;
			} else { //Normal object placement
				a.x = 35 + (105 * j);
				++j;
				if (j == 3) {
					j = 0;
					++i;
				}
			}
		}

		this.close = new TextButton("Close", Common.gCode.toggleSettings_box, 1);
		this.addChild(this.close);
		this.close.y = 255;
	}
	public function update() {
		
	}
	//setting functions
	private function toggle_previewMode(e:MouseEvent):Void 
	{
		CVar.preview_mode = this.checkBox_previewMode.toggle();
		Common.gTrack.set_rendermode_edit();
	}
	private function stepper_dec_autoSlowRate(e:MouseEvent):Void 
	{
		CVar.slow_motion_rate = Std.int(this.stepper_autoSlowRate.dec());
	}
	private function stepper_inc_autoSlowRate(e:MouseEvent):Void 
	{
		CVar.slow_motion_rate = Std.int(this.stepper_autoSlowRate.inc());
	}
	private function stepper_inc_riderAlpha(e:MouseEvent):Void 
	{
		CVar.rider_alpha = this.stepper_RiderAlpha.inc();
	}
	private function stepper_dec_riderAlpha(e:MouseEvent):Void 
	{
		CVar.rider_alpha = this.stepper_RiderAlpha.dec();
	}
	private function stepper_dec_forceZoom(e:MouseEvent):Void 
	{
		CVar.force_zoom_ammount = this.stepper_forceZoom.dec();
	}
	private function stepper_inc_forceZoom(e:MouseEvent):Void 
	{
		CVar.force_zoom_ammount = this.stepper_forceZoom.inc();
	}
	private function toggle_jointSnap(e:MouseEvent):Void 
	{
		CVar.line_snap = this.checkBox_jointSnap.toggle();
	}
	private function toggle_angleSnap(e:MouseEvent):Void 
	{
		CVar.angle_snap = this.checkBox_angleSnap.toggle();
	}
	private function toggle_autoSlow(e:MouseEvent):Void 
	{
		CVar.slow_motion_auto = this.checkBox_autoSlow.toggle();
	}
	private function toggle_forceZoom(e:MouseEvent):Void 
	{
		CVar.force_zoom = this.checkBox_forceZoom.toggle();
	}
	private function toggle_colorPlay(e:MouseEvent):Void 
	{
		CVar.color_play = checkBox_colorPlay.toggle();
	}
	private function toggle_hitTest(e:MouseEvent):Void 
	{
		CVar.hit_test = checkBox_hitTest.toggle();
		this.checkBox_hitTestLive.visible = CVar.hit_test;
	}
	private function toggle_liveHitTest(e:MouseEvent):Void 
	{
		CVar.hit_test_live = checkBox_hitTestLive.toggle();
	}
	private function toggle_skeleton(e:MouseEvent):Void 
	{
		CVar.contact_points = checkBox_skeleton.toggle();
	}
}