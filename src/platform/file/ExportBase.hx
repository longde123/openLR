package platform.file;
import openfl.display.Sprite;

/**
 * ...
 * @author Kaelan Evans
 */
@:enum abstract SaveType(Int) from Int to Int {
	public var LRPK:Int = 0;
	public var JSON:Int = 1;
	public var SOL:Int = 2;
	public var TRK:Int = 3;
}
class ExportBase extends Sprite
{

	public function new() 
	{
		
	}
	publicic function getNameSpace() {
		
	}
	public function getData() {
		
	}
	public function flushData() {
		
	}
}