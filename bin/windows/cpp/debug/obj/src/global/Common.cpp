// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_file_SaveManager
#include <file/SaveManager.h>
#endif
#ifndef INCLUDED_global_Common
#include <global/Common.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lr_Track
#include <lr/Track.h>
#endif
#ifndef INCLUDED_lr_line_Grid
#include <lr/line/Grid.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_ui_tool_ToolBase
#include <ui/tool/ToolBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_20_new,"global.Common","new",0xda3ca4e8,"global.Common.new","global/Common.hx",20,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_61_get_angle_radians,"global.Common","get_angle_radians",0x2d502ca5,"global.Common.get_angle_radians","global/Common.hx",61,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_66_get_angle_degrees,"global.Common","get_angle_degrees",0x40bac9da,"global.Common.get_angle_degrees","global/Common.hx",66,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_71_get_point_vector,"global.Common","get_point_vector",0x25fd1b13,"global.Common.get_point_vector","global/Common.hx",71,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_77_get_distance,"global.Common","get_distance",0x9cffa1b6,"global.Common.get_distance","global/Common.hx",77,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_80_get_distance_point,"global.Common","get_distance_point",0x38a7c9c7,"global.Common.get_distance_point","global/Common.hx",80,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_27_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",27,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_38_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",38,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_39_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",39,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_41_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",41,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_42_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",42,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_43_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",43,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_44_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",44,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_47_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",47,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_48_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",48,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_50_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",50,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_51_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",51,0x2e53e767)
HX_LOCAL_STACK_FRAME(_hx_pos_7ee4709dfe1b7650_52_boot,"global.Common","boot",0x12eca6aa,"global.Common.boot","global/Common.hx",52,0x2e53e767)
namespace global{

void Common_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_20_new)
            	}

Dynamic Common_obj::__CreateEmpty() { return new Common_obj; }

void *Common_obj::_hx_vtable = 0;

Dynamic Common_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Common_obj > _hx_result = new Common_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Common_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x017edfd2;
}

::String Common_obj::version;

 ::openfl::display::Stage Common_obj::gStage;

 ::Main Common_obj::gCode;

 ::lr::Track Common_obj::gTrack;

 ::openfl::display::MovieClip Common_obj::gVisContainer;

 ::ui::tool::ToolBase Common_obj::gToolBase;

 ::Dynamic Common_obj::gToolCurrent;

 ::lr::line::Grid Common_obj::gGrid;

 ::file::SaveManager Common_obj::gSaveManager;

int Common_obj::line_minLength;

int Common_obj::line_type;

int Common_obj::sLineCount;

int Common_obj::sBLueLineCount;

int Common_obj::sRedLineCount;

int Common_obj::sGreenLineCount;

Float Common_obj::track_scale;

Float Common_obj::track_scale_max;

Float Common_obj::track_scale_min;

bool Common_obj::cvar_icon_hit_display;

int Common_obj::cvar_line_render_mode;

::String Common_obj::cvar_track_author;

Float Common_obj::stage_width;

Float Common_obj::stage_height;

Float Common_obj::get_angle_radians( ::openfl::geom::Point _a, ::openfl::geom::Point _b){
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_61_get_angle_radians)
HXLINE(  62)		Float _locAngle = (_b->y - _a->y);
HXDLIN(  62)		Float _locAngle1 = ::Math_obj::atan2(_locAngle,(_b->x - _a->x));
HXLINE(  63)		return _locAngle1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Common_obj,get_angle_radians,return )

Float Common_obj::get_angle_degrees( ::openfl::geom::Point _a, ::openfl::geom::Point _b){
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_66_get_angle_degrees)
HXLINE(  67)		Float _locAngle = (_b->y - _a->y);
HXDLIN(  67)		Float _locAngle1 = ((Float)(::Math_obj::atan2(_locAngle,(_b->x - _a->x)) * (int)180) / (Float)::Math_obj::PI);
HXLINE(  68)		return _locAngle1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Common_obj,get_angle_degrees,return )

 ::openfl::geom::Point Common_obj::get_point_vector(int _dis,Float _ang){
            	HX_GC_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_71_get_point_vector)
HXLINE(  72)		Float _loc1 = ((_dis * (int)-1) * ::Math_obj::cos(_ang));
HXDLIN(  72)		 ::openfl::geom::Point _loc11 =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_loc1,((_dis * (int)-1) * ::Math_obj::sin(_ang)));
HXLINE(  73)		return _loc11;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Common_obj,get_point_vector,return )

Float Common_obj::get_distance( ::openfl::geom::Point _a, ::openfl::geom::Point _b){
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_77_get_distance)
HXLINE(  77)		Float _hx_tmp = ::Math_obj::pow((_b->y - _a->y),(int)2);
HXDLIN(  77)		return ::Math_obj::sqrt((_hx_tmp + ::Math_obj::pow((_b->x - _a->x),(int)2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Common_obj,get_distance,return )

 ::openfl::geom::Point Common_obj::get_distance_point( ::openfl::geom::Point _a, ::openfl::geom::Point _b){
            	HX_GC_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_80_get_distance_point)
HXLINE(  81)		Float _loc1 = (_b->y - _a->y);
HXDLIN(  81)		 ::openfl::geom::Point _loc11 =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_loc1,(_b->x - _a->x));
HXLINE(  82)		return _loc11;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Common_obj,get_distance_point,return )


Common_obj::Common_obj()
{
}

bool Common_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"gCode") ) { outValue = gCode; return true; }
		if (HX_FIELD_EQ(inName,"gGrid") ) { outValue = gGrid; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gStage") ) { outValue = gStage; return true; }
		if (HX_FIELD_EQ(inName,"gTrack") ) { outValue = gTrack; return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gToolBase") ) { outValue = gToolBase; return true; }
		if (HX_FIELD_EQ(inName,"line_type") ) { outValue = line_type; return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sLineCount") ) { outValue = sLineCount; return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"track_scale") ) { outValue = track_scale; return true; }
		if (HX_FIELD_EQ(inName,"stage_width") ) { outValue = stage_width; return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gToolCurrent") ) { outValue = gToolCurrent; return true; }
		if (HX_FIELD_EQ(inName,"gSaveManager") ) { outValue = gSaveManager; return true; }
		if (HX_FIELD_EQ(inName,"stage_height") ) { outValue = stage_height; return true; }
		if (HX_FIELD_EQ(inName,"get_distance") ) { outValue = get_distance_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gVisContainer") ) { outValue = gVisContainer; return true; }
		if (HX_FIELD_EQ(inName,"sRedLineCount") ) { outValue = sRedLineCount; return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"line_minLength") ) { outValue = line_minLength; return true; }
		if (HX_FIELD_EQ(inName,"sBLueLineCount") ) { outValue = sBLueLineCount; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sGreenLineCount") ) { outValue = sGreenLineCount; return true; }
		if (HX_FIELD_EQ(inName,"track_scale_max") ) { outValue = track_scale_max; return true; }
		if (HX_FIELD_EQ(inName,"track_scale_min") ) { outValue = track_scale_min; return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_point_vector") ) { outValue = get_point_vector_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cvar_track_author") ) { outValue = cvar_track_author; return true; }
		if (HX_FIELD_EQ(inName,"get_angle_radians") ) { outValue = get_angle_radians_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_angle_degrees") ) { outValue = get_angle_degrees_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_distance_point") ) { outValue = get_distance_point_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"cvar_icon_hit_display") ) { outValue = cvar_icon_hit_display; return true; }
		if (HX_FIELD_EQ(inName,"cvar_line_render_mode") ) { outValue = cvar_line_render_mode; return true; }
	}
	return false;
}

bool Common_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"gCode") ) { gCode=ioValue.Cast<  ::Main >(); return true; }
		if (HX_FIELD_EQ(inName,"gGrid") ) { gGrid=ioValue.Cast<  ::lr::line::Grid >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gStage") ) { gStage=ioValue.Cast<  ::openfl::display::Stage >(); return true; }
		if (HX_FIELD_EQ(inName,"gTrack") ) { gTrack=ioValue.Cast<  ::lr::Track >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gToolBase") ) { gToolBase=ioValue.Cast<  ::ui::tool::ToolBase >(); return true; }
		if (HX_FIELD_EQ(inName,"line_type") ) { line_type=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sLineCount") ) { sLineCount=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"track_scale") ) { track_scale=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"stage_width") ) { stage_width=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gToolCurrent") ) { gToolCurrent=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"gSaveManager") ) { gSaveManager=ioValue.Cast<  ::file::SaveManager >(); return true; }
		if (HX_FIELD_EQ(inName,"stage_height") ) { stage_height=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gVisContainer") ) { gVisContainer=ioValue.Cast<  ::openfl::display::MovieClip >(); return true; }
		if (HX_FIELD_EQ(inName,"sRedLineCount") ) { sRedLineCount=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"line_minLength") ) { line_minLength=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"sBLueLineCount") ) { sBLueLineCount=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sGreenLineCount") ) { sGreenLineCount=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"track_scale_max") ) { track_scale_max=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"track_scale_min") ) { track_scale_min=ioValue.Cast< Float >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cvar_track_author") ) { cvar_track_author=ioValue.Cast< ::String >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"cvar_icon_hit_display") ) { cvar_icon_hit_display=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"cvar_line_render_mode") ) { cvar_line_render_mode=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Common_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Common_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Common_obj::version,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(void *) &Common_obj::gStage,HX_HCSTRING("gStage","\xd7","\x04","\xfb","\x45")},
	{hx::fsObject /*::Main*/ ,(void *) &Common_obj::gCode,HX_HCSTRING("gCode","\x34","\x9d","\xe3","\x7a")},
	{hx::fsObject /*::lr::Track*/ ,(void *) &Common_obj::gTrack,HX_HCSTRING("gTrack","\xa4","\x28","\x0f","\xd8")},
	{hx::fsObject /*::openfl::display::MovieClip*/ ,(void *) &Common_obj::gVisContainer,HX_HCSTRING("gVisContainer","\x48","\x7e","\xb5","\xc4")},
	{hx::fsObject /*::ui::tool::ToolBase*/ ,(void *) &Common_obj::gToolBase,HX_HCSTRING("gToolBase","\x10","\xf7","\x4a","\x68")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Common_obj::gToolCurrent,HX_HCSTRING("gToolCurrent","\x9a","\xb6","\x73","\x4e")},
	{hx::fsObject /*::lr::line::Grid*/ ,(void *) &Common_obj::gGrid,HX_HCSTRING("gGrid","\xcd","\xc2","\x8a","\x7d")},
	{hx::fsObject /*::file::SaveManager*/ ,(void *) &Common_obj::gSaveManager,HX_HCSTRING("gSaveManager","\x89","\x73","\x99","\xc5")},
	{hx::fsInt,(void *) &Common_obj::line_minLength,HX_HCSTRING("line_minLength","\xcd","\x20","\x06","\x29")},
	{hx::fsInt,(void *) &Common_obj::line_type,HX_HCSTRING("line_type","\x25","\xa2","\xe7","\xb3")},
	{hx::fsInt,(void *) &Common_obj::sLineCount,HX_HCSTRING("sLineCount","\x48","\x01","\xa5","\x94")},
	{hx::fsInt,(void *) &Common_obj::sBLueLineCount,HX_HCSTRING("sBLueLineCount","\xee","\xd1","\x8a","\xea")},
	{hx::fsInt,(void *) &Common_obj::sRedLineCount,HX_HCSTRING("sRedLineCount","\xbd","\xc9","\xd1","\x8c")},
	{hx::fsInt,(void *) &Common_obj::sGreenLineCount,HX_HCSTRING("sGreenLineCount","\xcb","\x00","\x4a","\x96")},
	{hx::fsFloat,(void *) &Common_obj::track_scale,HX_HCSTRING("track_scale","\x96","\x9e","\x1b","\xe8")},
	{hx::fsFloat,(void *) &Common_obj::track_scale_max,HX_HCSTRING("track_scale_max","\x3b","\xf1","\x7b","\x7e")},
	{hx::fsFloat,(void *) &Common_obj::track_scale_min,HX_HCSTRING("track_scale_min","\x29","\xf8","\x7b","\x7e")},
	{hx::fsBool,(void *) &Common_obj::cvar_icon_hit_display,HX_HCSTRING("cvar_icon_hit_display","\x8b","\xbb","\xdf","\xf5")},
	{hx::fsInt,(void *) &Common_obj::cvar_line_render_mode,HX_HCSTRING("cvar_line_render_mode","\x9c","\x0f","\x8d","\x03")},
	{hx::fsString,(void *) &Common_obj::cvar_track_author,HX_HCSTRING("cvar_track_author","\xfa","\x8a","\xd7","\xe2")},
	{hx::fsFloat,(void *) &Common_obj::stage_width,HX_HCSTRING("stage_width","\x85","\x0a","\xaf","\x24")},
	{hx::fsFloat,(void *) &Common_obj::stage_height,HX_HCSTRING("stage_height","\x88","\xa2","\xc9","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Common_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Common_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Common_obj::version,"version");
	HX_MARK_MEMBER_NAME(Common_obj::gStage,"gStage");
	HX_MARK_MEMBER_NAME(Common_obj::gCode,"gCode");
	HX_MARK_MEMBER_NAME(Common_obj::gTrack,"gTrack");
	HX_MARK_MEMBER_NAME(Common_obj::gVisContainer,"gVisContainer");
	HX_MARK_MEMBER_NAME(Common_obj::gToolBase,"gToolBase");
	HX_MARK_MEMBER_NAME(Common_obj::gToolCurrent,"gToolCurrent");
	HX_MARK_MEMBER_NAME(Common_obj::gGrid,"gGrid");
	HX_MARK_MEMBER_NAME(Common_obj::gSaveManager,"gSaveManager");
	HX_MARK_MEMBER_NAME(Common_obj::line_minLength,"line_minLength");
	HX_MARK_MEMBER_NAME(Common_obj::line_type,"line_type");
	HX_MARK_MEMBER_NAME(Common_obj::sLineCount,"sLineCount");
	HX_MARK_MEMBER_NAME(Common_obj::sBLueLineCount,"sBLueLineCount");
	HX_MARK_MEMBER_NAME(Common_obj::sRedLineCount,"sRedLineCount");
	HX_MARK_MEMBER_NAME(Common_obj::sGreenLineCount,"sGreenLineCount");
	HX_MARK_MEMBER_NAME(Common_obj::track_scale,"track_scale");
	HX_MARK_MEMBER_NAME(Common_obj::track_scale_max,"track_scale_max");
	HX_MARK_MEMBER_NAME(Common_obj::track_scale_min,"track_scale_min");
	HX_MARK_MEMBER_NAME(Common_obj::cvar_icon_hit_display,"cvar_icon_hit_display");
	HX_MARK_MEMBER_NAME(Common_obj::cvar_line_render_mode,"cvar_line_render_mode");
	HX_MARK_MEMBER_NAME(Common_obj::cvar_track_author,"cvar_track_author");
	HX_MARK_MEMBER_NAME(Common_obj::stage_width,"stage_width");
	HX_MARK_MEMBER_NAME(Common_obj::stage_height,"stage_height");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Common_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Common_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Common_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Common_obj::gStage,"gStage");
	HX_VISIT_MEMBER_NAME(Common_obj::gCode,"gCode");
	HX_VISIT_MEMBER_NAME(Common_obj::gTrack,"gTrack");
	HX_VISIT_MEMBER_NAME(Common_obj::gVisContainer,"gVisContainer");
	HX_VISIT_MEMBER_NAME(Common_obj::gToolBase,"gToolBase");
	HX_VISIT_MEMBER_NAME(Common_obj::gToolCurrent,"gToolCurrent");
	HX_VISIT_MEMBER_NAME(Common_obj::gGrid,"gGrid");
	HX_VISIT_MEMBER_NAME(Common_obj::gSaveManager,"gSaveManager");
	HX_VISIT_MEMBER_NAME(Common_obj::line_minLength,"line_minLength");
	HX_VISIT_MEMBER_NAME(Common_obj::line_type,"line_type");
	HX_VISIT_MEMBER_NAME(Common_obj::sLineCount,"sLineCount");
	HX_VISIT_MEMBER_NAME(Common_obj::sBLueLineCount,"sBLueLineCount");
	HX_VISIT_MEMBER_NAME(Common_obj::sRedLineCount,"sRedLineCount");
	HX_VISIT_MEMBER_NAME(Common_obj::sGreenLineCount,"sGreenLineCount");
	HX_VISIT_MEMBER_NAME(Common_obj::track_scale,"track_scale");
	HX_VISIT_MEMBER_NAME(Common_obj::track_scale_max,"track_scale_max");
	HX_VISIT_MEMBER_NAME(Common_obj::track_scale_min,"track_scale_min");
	HX_VISIT_MEMBER_NAME(Common_obj::cvar_icon_hit_display,"cvar_icon_hit_display");
	HX_VISIT_MEMBER_NAME(Common_obj::cvar_line_render_mode,"cvar_line_render_mode");
	HX_VISIT_MEMBER_NAME(Common_obj::cvar_track_author,"cvar_track_author");
	HX_VISIT_MEMBER_NAME(Common_obj::stage_width,"stage_width");
	HX_VISIT_MEMBER_NAME(Common_obj::stage_height,"stage_height");
};

#endif

hx::Class Common_obj::__mClass;

static ::String Common_obj_sStaticFields[] = {
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("gStage","\xd7","\x04","\xfb","\x45"),
	HX_HCSTRING("gCode","\x34","\x9d","\xe3","\x7a"),
	HX_HCSTRING("gTrack","\xa4","\x28","\x0f","\xd8"),
	HX_HCSTRING("gVisContainer","\x48","\x7e","\xb5","\xc4"),
	HX_HCSTRING("gToolBase","\x10","\xf7","\x4a","\x68"),
	HX_HCSTRING("gToolCurrent","\x9a","\xb6","\x73","\x4e"),
	HX_HCSTRING("gGrid","\xcd","\xc2","\x8a","\x7d"),
	HX_HCSTRING("gSaveManager","\x89","\x73","\x99","\xc5"),
	HX_HCSTRING("line_minLength","\xcd","\x20","\x06","\x29"),
	HX_HCSTRING("line_type","\x25","\xa2","\xe7","\xb3"),
	HX_HCSTRING("sLineCount","\x48","\x01","\xa5","\x94"),
	HX_HCSTRING("sBLueLineCount","\xee","\xd1","\x8a","\xea"),
	HX_HCSTRING("sRedLineCount","\xbd","\xc9","\xd1","\x8c"),
	HX_HCSTRING("sGreenLineCount","\xcb","\x00","\x4a","\x96"),
	HX_HCSTRING("track_scale","\x96","\x9e","\x1b","\xe8"),
	HX_HCSTRING("track_scale_max","\x3b","\xf1","\x7b","\x7e"),
	HX_HCSTRING("track_scale_min","\x29","\xf8","\x7b","\x7e"),
	HX_HCSTRING("cvar_icon_hit_display","\x8b","\xbb","\xdf","\xf5"),
	HX_HCSTRING("cvar_line_render_mode","\x9c","\x0f","\x8d","\x03"),
	HX_HCSTRING("cvar_track_author","\xfa","\x8a","\xd7","\xe2"),
	HX_HCSTRING("stage_width","\x85","\x0a","\xaf","\x24"),
	HX_HCSTRING("stage_height","\x88","\xa2","\xc9","\xaa"),
	HX_HCSTRING("get_angle_radians","\x1d","\x7a","\x6f","\x47"),
	HX_HCSTRING("get_angle_degrees","\x52","\x17","\xda","\x5a"),
	HX_HCSTRING("get_point_vector","\x9b","\x24","\xc6","\x1b"),
	HX_HCSTRING("get_distance","\x3e","\x47","\x13","\x21"),
	HX_HCSTRING("get_distance_point","\x4f","\x45","\xec","\xf9"),
	::String(null())
};

void Common_obj::__register()
{
	hx::Object *dummy = new Common_obj;
	Common_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("global.Common","\xf6","\x50","\x86","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Common_obj::__GetStatic;
	__mClass->mSetStaticField = &Common_obj::__SetStatic;
	__mClass->mMarkFunc = Common_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Common_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Common_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Common_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Common_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Common_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Common_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_27_boot)
HXLINE(  27)		version = HX_("0.0.2",36,3d,c8,c1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_38_boot)
HXLINE(  38)		line_minLength = (int)14;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_39_boot)
HXLINE(  39)		line_type = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_41_boot)
HXLINE(  41)		sLineCount = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_42_boot)
HXLINE(  42)		sBLueLineCount = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_43_boot)
HXLINE(  43)		sRedLineCount = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_44_boot)
HXLINE(  44)		sGreenLineCount = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_47_boot)
HXLINE(  47)		track_scale_max = ((Float)12);
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_48_boot)
HXLINE(  48)		track_scale_min = ((Float)0.6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_50_boot)
HXLINE(  50)		cvar_icon_hit_display = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_51_boot)
HXLINE(  51)		cvar_line_render_mode = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ee4709dfe1b7650_52_boot)
HXLINE(  52)		cvar_track_author = HX_("Unknown",6a,4b,cc,ae);
            	}
}

} // end namespace global