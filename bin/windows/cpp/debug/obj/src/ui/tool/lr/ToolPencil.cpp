// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_global_Common
#include <global/Common.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lr_Track
#include <lr/Track.h>
#endif
#ifndef INCLUDED_lr_line_LineAccel
#include <lr/line/LineAccel.h>
#endif
#ifndef INCLUDED_lr_line_LineBase
#include <lr/line/LineBase.h>
#endif
#ifndef INCLUDED_lr_line_LineFloor
#include <lr/line/LineFloor.h>
#endif
#ifndef INCLUDED_lr_line_LineScene
#include <lr/line/LineScene.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_ui_tool_ToolBase
#include <ui/tool/ToolBase.h>
#endif
#ifndef INCLUDED_ui_tool_lr_ToolPencil
#include <ui/tool/lr/ToolPencil.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a2fdb776d12f4de_23_new,"ui.tool.lr.ToolPencil","new",0x19782203,"ui.tool.lr.ToolPencil.new","ui/tool/lr/ToolPencil.hx",23,0xeba0be8c)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2fdb776d12f4de_25_mouseDown,"ui.tool.lr.ToolPencil","mouseDown",0x3fa45f0a,"ui.tool.lr.ToolPencil.mouseDown","ui/tool/lr/ToolPencil.hx",25,0xeba0be8c)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2fdb776d12f4de_32_pencil_move,"ui.tool.lr.ToolPencil","pencil_move",0xc84b50a6,"ui.tool.lr.ToolPencil.pencil_move","ui/tool/lr/ToolPencil.hx",32,0xeba0be8c)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2fdb776d12f4de_52_mouseUp,"ui.tool.lr.ToolPencil","mouseUp",0x8ae45303,"ui.tool.lr.ToolPencil.mouseUp","ui/tool/lr/ToolPencil.hx",52,0xeba0be8c)
namespace ui{
namespace tool{
namespace lr{

void ToolPencil_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8a2fdb776d12f4de_23_new)
HXLINE(  23)		super::__construct();
            	}

Dynamic ToolPencil_obj::__CreateEmpty() { return new ToolPencil_obj; }

void *ToolPencil_obj::_hx_vtable = 0;

Dynamic ToolPencil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ToolPencil_obj > _hx_result = new ToolPencil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ToolPencil_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x392974d5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x392974d5;
	} else {
		return inClassId==(int)0x5445f1d7;
	}
}

void ToolPencil_obj::mouseDown( ::openfl::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_8a2fdb776d12f4de_25_mouseDown)
HXLINE(  26)		Float _hx_tmp = ::global::Common_obj::gTrack->get_mouseX();
HXDLIN(  26)		this->a =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp,::global::Common_obj::gTrack->get_mouseY());
HXLINE(  27)		Float _hx_tmp1 = ::global::Common_obj::gStage->get_mouseX();
HXDLIN(  27)		this->c =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp1,::global::Common_obj::gStage->get_mouseY());
HXLINE(  28)		::global::Common_obj::gStage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->pencil_move_dyn(),null(),null(),null());
            	}


void ToolPencil_obj::pencil_move( ::openfl::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_8a2fdb776d12f4de_32_pencil_move)
HXLINE(  33)		Float _hx_tmp = ::global::Common_obj::gTrack->get_mouseX();
HXDLIN(  33)		this->b =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp,::global::Common_obj::gTrack->get_mouseY());
HXLINE(  34)		Float _hx_tmp1 = ::global::Common_obj::gStage->get_mouseX();
HXDLIN(  34)		this->d =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp1,::global::Common_obj::gStage->get_mouseY());
HXLINE(  35)		::global::Common_obj::gTrack->render_preview_line(this->a,this->b);
HXLINE(  36)		Float _hx_tmp2 = ::global::Common_obj::get_distance(this->c,this->d);
HXDLIN(  36)		if ((_hx_tmp2 >= ::global::Common_obj::line_minLength)) {
HXLINE(  37)			 ::Dynamic _loc1;
HXLINE(  38)			if ((::global::Common_obj::line_type == (int)0)) {
HXLINE(  39)				_loc1 =  ::lr::line::LineFloor_obj::__alloc( HX_CTX ,this->a,this->b,this->mod_shift,null());
HXLINE(  40)				::global::Common_obj::gTrack->add_vis_line(_loc1);
            			}
            			else {
HXLINE(  41)				if ((::global::Common_obj::line_type == (int)1)) {
HXLINE(  42)					_loc1 =  ::lr::line::LineAccel_obj::__alloc( HX_CTX ,this->a,this->b,this->mod_shift,null());
HXLINE(  43)					::global::Common_obj::gTrack->add_vis_line(_loc1);
            				}
            				else {
HXLINE(  44)					if ((::global::Common_obj::line_type == (int)2)) {
HXLINE(  45)						_loc1 =  ::lr::line::LineScene_obj::__alloc( HX_CTX ,this->a,this->b,this->mod_shift,null());
HXLINE(  46)						::global::Common_obj::gTrack->add_vis_line(_loc1);
            					}
            				}
            			}
HXLINE(  48)			Float _hx_tmp3 = ::global::Common_obj::gTrack->get_mouseX();
HXDLIN(  48)			this->a =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp3,::global::Common_obj::gTrack->get_mouseY());
HXLINE(  49)			Float _hx_tmp4 = ::global::Common_obj::gStage->get_mouseX();
HXDLIN(  49)			this->c =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp4,::global::Common_obj::gStage->get_mouseY());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolPencil_obj,pencil_move,(void))

void ToolPencil_obj::mouseUp( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_8a2fdb776d12f4de_52_mouseUp)
HXLINE(  53)		::global::Common_obj::gStage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->pencil_move_dyn(),null());
HXLINE(  54)		::global::Common_obj::gTrack->clear_preview();
            	}



hx::ObjectPtr< ToolPencil_obj > ToolPencil_obj::__new() {
	hx::ObjectPtr< ToolPencil_obj > __this = new ToolPencil_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ToolPencil_obj > ToolPencil_obj::__alloc(hx::Ctx *_hx_ctx) {
	ToolPencil_obj *__this = (ToolPencil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ToolPencil_obj), true, "ui.tool.lr.ToolPencil"));
	*(void **)__this = ToolPencil_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ToolPencil_obj::ToolPencil_obj()
{
}

void ToolPencil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToolPencil);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(d,"d");
	 ::ui::tool::ToolBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ToolPencil_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(d,"d");
	 ::ui::tool::ToolBase_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ToolPencil_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return hx::Val( a); }
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b); }
		if (HX_FIELD_EQ(inName,"c") ) { return hx::Val( c); }
		if (HX_FIELD_EQ(inName,"d") ) { return hx::Val( d); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return hx::Val( mouseUp_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return hx::Val( mouseDown_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pencil_move") ) { return hx::Val( pencil_move_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ToolPencil_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ToolPencil_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ToolPencil_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(ToolPencil_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(ToolPencil_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(ToolPencil_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(ToolPencil_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ToolPencil_obj_sStaticStorageInfo = 0;
#endif

static ::String ToolPencil_obj_sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),
	HX_HCSTRING("pencil_move","\x03","\x24","\x38","\x39"),
	HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),
	::String(null()) };

static void ToolPencil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolPencil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ToolPencil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolPencil_obj::__mClass,"__mClass");
};

#endif

hx::Class ToolPencil_obj::__mClass;

void ToolPencil_obj::__register()
{
	hx::Object *dummy = new ToolPencil_obj;
	ToolPencil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.tool.lr.ToolPencil","\x91","\x64","\xa0","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ToolPencil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ToolPencil_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ToolPencil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ToolPencil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToolPencil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToolPencil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace ui
} // end namespace tool
} // end namespace lr
