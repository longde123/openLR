// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_global_Common
#include <global/Common.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lr_Track
#include <lr/Track.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_ui_tool_ToolBase
#include <ui/tool/ToolBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c2cec41de9656ff1_18_new,"ui.tool.ToolBase","new",0xb6c35357,"ui.tool.ToolBase.new","ui/tool/ToolBase.hx",18,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_41_KeyNumDown,"ui.tool.ToolBase","KeyNumDown",0x4e381bf2,"ui.tool.ToolBase.KeyNumDown","ui/tool/ToolBase.hx",41,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_55_keyShiftUp,"ui.tool.ToolBase","keyShiftUp",0xbdb15587,"ui.tool.ToolBase.keyShiftUp","ui/tool/ToolBase.hx",55,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_62_keyShiftDown,"ui.tool.ToolBase","keyShiftDown",0x819a0a8e,"ui.tool.ToolBase.keyShiftDown","ui/tool/ToolBase.hx",62,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_69_mMouseUp,"ui.tool.ToolBase","mMouseUp",0xa67e109c,"ui.tool.ToolBase.mMouseUp","ui/tool/ToolBase.hx",69,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_74_mMouseDown,"ui.tool.ToolBase","mMouseDown",0xc35b74e3,"ui.tool.ToolBase.mMouseDown","ui/tool/ToolBase.hx",74,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_79_rMouseUp,"ui.tool.ToolBase","rMouseUp",0xc47a4b37,"ui.tool.ToolBase.rMouseUp","ui/tool/ToolBase.hx",79,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_84_rMouseDown,"ui.tool.ToolBase","rMouseDown",0x84cfcc3e,"ui.tool.ToolBase.rMouseDown","ui/tool/ToolBase.hx",84,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_89_mouseUp,"ui.tool.ToolBase","mouseUp",0x29c4be57,"ui.tool.ToolBase.mouseUp","ui/tool/ToolBase.hx",89,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_94_mouseDown,"ui.tool.ToolBase","mouseDown",0xa7f5475e,"ui.tool.ToolBase.mouseDown","ui/tool/ToolBase.hx",94,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_97_disable,"ui.tool.ToolBase","disable",0x1aaa345f,"ui.tool.ToolBase.disable","ui/tool/ToolBase.hx",97,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_108_enable,"ui.tool.ToolBase","enable",0x42791fec,"ui.tool.ToolBase.enable","ui/tool/ToolBase.hx",108,0xe483e399)
HX_LOCAL_STACK_FRAME(_hx_pos_c2cec41de9656ff1_121_mouseScroll,"ui.tool.ToolBase","mouseScroll",0x989ade09,"ui.tool.ToolBase.mouseScroll","ui/tool/ToolBase.hx",121,0xe483e399)
namespace ui{
namespace tool{

void ToolBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_18_new)
HXLINE(  22)		this->mod_shift = false;
HXLINE(  21)		this->type = HX_("Null",a7,ca,e7,33);
HXLINE(  26)		::global::Common_obj::gStage->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->mouseDown_dyn(),null(),null(),null());
HXLINE(  27)		::global::Common_obj::gStage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->mouseUp_dyn(),null(),null(),null());
HXLINE(  28)		::global::Common_obj::gStage->addEventListener(HX_("rightMouseDown",ab,29,d7,cd),this->rMouseDown_dyn(),null(),null(),null());
HXLINE(  29)		::global::Common_obj::gStage->addEventListener(HX_("rightMouseUp",64,83,21,ab),this->rMouseUp_dyn(),null(),null(),null());
HXLINE(  30)		::global::Common_obj::gStage->addEventListener(HX_("middleMouseDown",12,2b,fe,01),this->mMouseDown_dyn(),null(),null(),null());
HXLINE(  31)		::global::Common_obj::gStage->addEventListener(HX_("middleMouseUp",0b,8d,f5,3a),this->mMouseUp_dyn(),null(),null(),null());
HXLINE(  32)		::global::Common_obj::gStage->addEventListener(HX_("mouseWheel",36,28,87,e7),this->mouseScroll_dyn(),null(),null(),null());
HXLINE(  33)		::global::Common_obj::gStage->addEventListener(HX_("keyDown",a1,69,47,9c),this->keyShiftDown_dyn(),null(),null(),null());
HXLINE(  34)		::global::Common_obj::gStage->addEventListener(HX_("keyUp",da,b9,fe,de),this->keyShiftUp_dyn(),null(),null(),null());
HXLINE(  35)		::global::Common_obj::gStage->addEventListener(HX_("keyDown",a1,69,47,9c),this->KeyNumDown_dyn(),null(),null(),null());
HXLINE(  37)		::global::Common_obj::gToolBase = hx::ObjectPtr<OBJ_>(this);
            	}

Dynamic ToolBase_obj::__CreateEmpty() { return new ToolBase_obj; }

void *ToolBase_obj::_hx_vtable = 0;

Dynamic ToolBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ToolBase_obj > _hx_result = new ToolBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ToolBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x392974d5;
}

void ToolBase_obj::KeyNumDown( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_41_KeyNumDown)
HXLINE(  42)		if ((e->keyCode == (int)49)) {
HXLINE(  43)			::global::Common_obj::line_type = (int)0;
            		}
HXLINE(  45)		if ((e->keyCode == (int)50)) {
HXLINE(  46)			::global::Common_obj::line_type = (int)1;
            		}
HXLINE(  48)		if ((e->keyCode == (int)51)) {
HXLINE(  49)			::global::Common_obj::line_type = (int)2;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolBase_obj,KeyNumDown,(void))

void ToolBase_obj::keyShiftUp( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_55_keyShiftUp)
HXLINE(  55)		if ((e->keyCode == (int)16)) {
HXLINE(  56)			this->mod_shift = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolBase_obj,keyShiftUp,(void))

void ToolBase_obj::keyShiftDown( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_62_keyShiftDown)
HXLINE(  62)		if ((e->keyCode == (int)16)) {
HXLINE(  63)			this->mod_shift = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolBase_obj,keyShiftDown,(void))

void ToolBase_obj::mMouseUp( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_69_mMouseUp)
HXLINE(  69)		::global::Common_obj::gTrack->stopDrag();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolBase_obj,mMouseUp,(void))

void ToolBase_obj::mMouseDown( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_74_mMouseDown)
HXLINE(  74)		::global::Common_obj::gTrack->startDrag(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolBase_obj,mMouseDown,(void))

void ToolBase_obj::rMouseUp( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_79_rMouseUp)
HXLINE(  79)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  79)		Float _hx_tmp1 = ::global::Common_obj::gStage->get_mouseX();
HXDLIN(  79)		_hx_tmp(_hx_tmp1, ::Dynamic(hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("className",a3,92,3d,dc),HX_("ui.tool.ToolBase",e5,5b,fb,ac))
            			->setFixed(1,HX_("customParams",d7,51,18,ed),::cpp::VirtualArray_obj::__new(1)->init(0,::global::Common_obj::gStage->get_mouseY()))
            			->setFixed(2,HX_("methodName",cc,19,0f,12),HX_("rMouseUp",8e,ed,3a,06))
            			->setFixed(3,HX_("fileName",e7,5a,43,62),HX_("ToolBase.hx",b5,fa,5a,3c))
            			->setFixed(4,HX_("lineNumber",dd,81,22,76),(int)79)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolBase_obj,rMouseUp,(void))

void ToolBase_obj::rMouseDown( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_84_rMouseDown)
HXLINE(  84)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  84)		Float _hx_tmp1 = ::global::Common_obj::gStage->get_mouseX();
HXDLIN(  84)		_hx_tmp(_hx_tmp1, ::Dynamic(hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("className",a3,92,3d,dc),HX_("ui.tool.ToolBase",e5,5b,fb,ac))
            			->setFixed(1,HX_("customParams",d7,51,18,ed),::cpp::VirtualArray_obj::__new(1)->init(0,::global::Common_obj::gStage->get_mouseY()))
            			->setFixed(2,HX_("methodName",cc,19,0f,12),HX_("rMouseDown",55,f2,be,31))
            			->setFixed(3,HX_("fileName",e7,5a,43,62),HX_("ToolBase.hx",b5,fa,5a,3c))
            			->setFixed(4,HX_("lineNumber",dd,81,22,76),(int)84)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolBase_obj,rMouseDown,(void))

void ToolBase_obj::mouseUp( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_89_mouseUp)
HXLINE(  89)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  89)		Float _hx_tmp1 = ::global::Common_obj::gStage->get_mouseX();
HXDLIN(  89)		_hx_tmp(_hx_tmp1, ::Dynamic(hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("className",a3,92,3d,dc),HX_("ui.tool.ToolBase",e5,5b,fb,ac))
            			->setFixed(1,HX_("customParams",d7,51,18,ed),::cpp::VirtualArray_obj::__new(1)->init(0,::global::Common_obj::gStage->get_mouseY()))
            			->setFixed(2,HX_("methodName",cc,19,0f,12),HX_("mouseUp",e0,f3,72,c0))
            			->setFixed(3,HX_("fileName",e7,5a,43,62),HX_("ToolBase.hx",b5,fa,5a,3c))
            			->setFixed(4,HX_("lineNumber",dd,81,22,76),(int)89)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolBase_obj,mouseUp,(void))

void ToolBase_obj::mouseDown( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_94_mouseDown)
HXLINE(  94)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  94)		Float _hx_tmp1 = ::global::Common_obj::gStage->get_mouseX();
HXDLIN(  94)		_hx_tmp(_hx_tmp1, ::Dynamic(hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("className",a3,92,3d,dc),HX_("ui.tool.ToolBase",e5,5b,fb,ac))
            			->setFixed(1,HX_("customParams",d7,51,18,ed),::cpp::VirtualArray_obj::__new(1)->init(0,::global::Common_obj::gStage->get_mouseY()))
            			->setFixed(2,HX_("methodName",cc,19,0f,12),HX_("mouseDown",27,b1,c2,ee))
            			->setFixed(3,HX_("fileName",e7,5a,43,62),HX_("ToolBase.hx",b5,fa,5a,3c))
            			->setFixed(4,HX_("lineNumber",dd,81,22,76),(int)94)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolBase_obj,mouseDown,(void))

void ToolBase_obj::disable(){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_97_disable)
HXLINE(  98)		::global::Common_obj::gStage->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->mouseDown_dyn(),null());
HXLINE(  99)		::global::Common_obj::gStage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->mouseUp_dyn(),null());
HXLINE( 100)		::global::Common_obj::gStage->removeEventListener(HX_("rightMouseDown",ab,29,d7,cd),this->rMouseDown_dyn(),null());
HXLINE( 101)		::global::Common_obj::gStage->removeEventListener(HX_("rightMouseUp",64,83,21,ab),this->rMouseUp_dyn(),null());
HXLINE( 102)		::global::Common_obj::gStage->removeEventListener(HX_("middleMouseDown",12,2b,fe,01),this->mMouseDown_dyn(),null());
HXLINE( 103)		::global::Common_obj::gStage->removeEventListener(HX_("middleMouseUp",0b,8d,f5,3a),this->mMouseUp_dyn(),null());
HXLINE( 104)		::global::Common_obj::gStage->removeEventListener(HX_("mouseWheel",36,28,87,e7),this->mouseScroll_dyn(),null());
HXLINE( 105)		::global::Common_obj::gStage->removeEventListener(HX_("keyDown",a1,69,47,9c),this->keyShiftDown_dyn(),null());
HXLINE( 106)		::global::Common_obj::gStage->removeEventListener(HX_("keyUp",da,b9,fe,de),this->keyShiftUp_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolBase_obj,disable,(void))

void ToolBase_obj::enable(){
            	HX_STACKFRAME(&_hx_pos_c2cec41de9656ff1_108_enable)
HXLINE( 109)		::global::Common_obj::gStage->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->mouseDown_dyn(),null(),null(),null());
HXLINE( 110)		::global::Common_obj::gStage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->mouseUp_dyn(),null(),null(),null());
HXLINE( 111)		::global::Common_obj::gStage->addEventListener(HX_("rightMouseDown",ab,29,d7,cd),this->rMouseDown_dyn(),null(),null(),null());
HXLINE( 112)		::global::Common_obj::gStage->addEventListener(HX_("rightMouseUp",64,83,21,ab),this->rMouseUp_dyn(),null(),null(),null());
HXLINE( 113)		::global::Common_obj::gStage->addEventListener(HX_("middleMouseDown",12,2b,fe,01),this->mMouseDown_dyn(),null(),null(),null());
HXLINE( 114)		::global::Common_obj::gStage->addEventListener(HX_("middleMouseUp",0b,8d,f5,3a),this->mMouseUp_dyn(),null(),null(),null());
HXLINE( 115)		::global::Common_obj::gStage->addEventListener(HX_("mouseWheel",36,28,87,e7),this->mouseScroll_dyn(),null(),null(),null());
HXLINE( 116)		::global::Common_obj::gStage->addEventListener(HX_("keyDown",a1,69,47,9c),this->keyShiftDown_dyn(),null(),null(),null());
HXLINE( 117)		::global::Common_obj::gStage->addEventListener(HX_("keyUp",da,b9,fe,de),this->keyShiftUp_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolBase_obj,enable,(void))

void ToolBase_obj::mouseScroll( ::openfl::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_c2cec41de9656ff1_121_mouseScroll)
HXLINE( 122)		Float _locPrePoint = ::global::Common_obj::gTrack->get_x();
HXDLIN( 122)		 ::openfl::geom::Point _locPrePoint1 =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_locPrePoint,::global::Common_obj::gTrack->get_y());
HXLINE( 123)		 ::openfl::geom::Point _locPrevLoc = ::global::Common_obj::gStage->localToGlobal(_locPrePoint1);
HXLINE( 124)		Float _locPrevScale = ::global::Common_obj::track_scale;
HXLINE( 125)		if ((e->delta == (int)1)) {
HXLINE( 126)			if ((::global::Common_obj::track_scale < ::global::Common_obj::track_scale_max)) {
HXLINE( 128)				 ::Dynamic _hx_tmp = hx::ClassOf< ::global::Common >();
HXDLIN( 128)				::global::Common_obj::track_scale = (::global::Common_obj::track_scale + ((Float)0.2));
            			}
            			else {
HXLINE( 130)				::global::Common_obj::track_scale = ::global::Common_obj::track_scale_max;
            			}
            		}
            		else {
HXLINE( 132)			if ((e->delta == (int)-1)) {
HXLINE( 133)				if ((::global::Common_obj::track_scale > ::global::Common_obj::track_scale_min)) {
HXLINE( 134)					 ::Dynamic _hx_tmp1 = hx::ClassOf< ::global::Common >();
HXDLIN( 134)					::global::Common_obj::track_scale = (::global::Common_obj::track_scale - ((Float)0.2));
            				}
            			}
            		}
HXLINE( 139)		Float _locNewScale = ::global::Common_obj::track_scale;
HXLINE( 140)		Float _locRatio = ((Float)::Math_obj::min(::Math_obj::max((_locNewScale + ((_locNewScale * ((Float)0.004)) * (e->delta * ((Float)0.2)))),((Float)0.4)),(int)24) / (Float)_locPrevScale);
HXLINE( 141)		if ((_locNewScale != _locPrevScale)) {
HXLINE( 143)			 ::lr::Track _hx_tmp2 = ::global::Common_obj::gTrack;
HXDLIN( 143)			Float _hx_tmp3 = (::global::Common_obj::stage_width * ((Float)0.5));
HXDLIN( 143)			Float _locPrevLoc1 = _locPrevLoc->x;
HXDLIN( 143)			Float _hx_tmp4 = (_hx_tmp3 + ((_locPrevLoc1 - (::global::Common_obj::stage_width * ((Float)0.5))) * _locRatio));
HXDLIN( 143)			_hx_tmp2->set_x((_hx_tmp4 - ((int)0 * (e->delta * ((Float)0.2)))));
HXLINE( 144)			 ::lr::Track _hx_tmp5 = ::global::Common_obj::gTrack;
HXDLIN( 144)			Float _hx_tmp6 = (::global::Common_obj::stage_height * ((Float)0.5));
HXDLIN( 144)			Float _locPrevLoc2 = _locPrevLoc->y;
HXDLIN( 144)			Float _hx_tmp7 = (_hx_tmp6 + ((_locPrevLoc2 - (::global::Common_obj::stage_height * ((Float)0.5))) * _locRatio));
HXDLIN( 144)			_hx_tmp5->set_y((_hx_tmp7 - ((int)0 * (e->delta * ((Float)0.2)))));
HXLINE( 145)			 ::lr::Track _hx_tmp8 = ::global::Common_obj::gTrack;
HXDLIN( 145)			_hx_tmp8->set_scaleX(::global::Common_obj::gTrack->set_scaleY(::global::Common_obj::track_scale));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolBase_obj,mouseScroll,(void))


hx::ObjectPtr< ToolBase_obj > ToolBase_obj::__new() {
	hx::ObjectPtr< ToolBase_obj > __this = new ToolBase_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ToolBase_obj > ToolBase_obj::__alloc(hx::Ctx *_hx_ctx) {
	ToolBase_obj *__this = (ToolBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ToolBase_obj), true, "ui.tool.ToolBase"));
	*(void **)__this = ToolBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ToolBase_obj::ToolBase_obj()
{
}

void ToolBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToolBase);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(mod_shift,"mod_shift");
	HX_MARK_END_CLASS();
}

void ToolBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(mod_shift,"mod_shift");
}

hx::Val ToolBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return hx::Val( enable_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return hx::Val( mouseUp_dyn()); }
		if (HX_FIELD_EQ(inName,"disable") ) { return hx::Val( disable_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mMouseUp") ) { return hx::Val( mMouseUp_dyn()); }
		if (HX_FIELD_EQ(inName,"rMouseUp") ) { return hx::Val( rMouseUp_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mod_shift") ) { return hx::Val( mod_shift); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return hx::Val( mouseDown_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"KeyNumDown") ) { return hx::Val( KeyNumDown_dyn()); }
		if (HX_FIELD_EQ(inName,"keyShiftUp") ) { return hx::Val( keyShiftUp_dyn()); }
		if (HX_FIELD_EQ(inName,"mMouseDown") ) { return hx::Val( mMouseDown_dyn()); }
		if (HX_FIELD_EQ(inName,"rMouseDown") ) { return hx::Val( rMouseDown_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseScroll") ) { return hx::Val( mouseScroll_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyShiftDown") ) { return hx::Val( keyShiftDown_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ToolBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mod_shift") ) { mod_shift=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ToolBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("mod_shift","\x05","\xc8","\x15","\x54"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ToolBase_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ToolBase_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsBool,(int)offsetof(ToolBase_obj,mod_shift),HX_HCSTRING("mod_shift","\x05","\xc8","\x15","\x54")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ToolBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ToolBase_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("mod_shift","\x05","\xc8","\x15","\x54"),
	HX_HCSTRING("KeyNumDown","\x09","\x42","\x27","\xfb"),
	HX_HCSTRING("keyShiftUp","\x9e","\x7b","\xa0","\x6a"),
	HX_HCSTRING("keyShiftDown","\x65","\x24","\x30","\xa5"),
	HX_HCSTRING("mMouseUp","\xf3","\xb2","\x3e","\xe8"),
	HX_HCSTRING("mMouseDown","\xfa","\x9a","\x4a","\x70"),
	HX_HCSTRING("rMouseUp","\x8e","\xed","\x3a","\x06"),
	HX_HCSTRING("rMouseDown","\x55","\xf2","\xbe","\x31"),
	HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),
	HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("mouseScroll","\x12","\x0c","\xed","\x3c"),
	::String(null()) };

static void ToolBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ToolBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolBase_obj::__mClass,"__mClass");
};

#endif

hx::Class ToolBase_obj::__mClass;

void ToolBase_obj::__register()
{
	hx::Object *dummy = new ToolBase_obj;
	ToolBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.tool.ToolBase","\xe5","\x5b","\xfb","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ToolBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ToolBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ToolBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ToolBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToolBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToolBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace ui
} // end namespace tool
