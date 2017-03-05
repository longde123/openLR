// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lr_Toolbar
#include <lr/Toolbar.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_ui_tool_ToolBase
#include <ui/tool/ToolBase.h>
#endif
#ifndef INCLUDED_ui_tool_icon_IconBase
#include <ui/tool/icon/IconBase.h>
#endif
#ifndef INCLUDED_ui_tool_icon_IconLine
#include <ui/tool/icon/IconLine.h>
#endif
#ifndef INCLUDED_ui_tool_icon_IconPencil
#include <ui/tool/icon/IconPencil.h>
#endif
#ifndef INCLUDED_ui_tool_lr_ToolLine
#include <ui/tool/lr/ToolLine.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d63ce7f7d2486650_20_new,"lr.Toolbar","new",0xb8b5d1e5,"lr.Toolbar.new","lr/Toolbar.hx",20,0x98a81c6c)
namespace lr{

void Toolbar_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d63ce7f7d2486650_20_new)
HXLINE(  21)		super::__construct();
HXLINE(  23)		::lr::Toolbar_obj::tool =  ::ui::tool::lr::ToolLine_obj::__alloc( HX_CTX );
HXLINE(  25)		this->pencil =  ::ui::tool::icon::IconPencil_obj::__alloc( HX_CTX );
HXLINE(  26)		this->addChild(this->pencil);
HXLINE(  28)		this->line =  ::ui::tool::icon::IconLine_obj::__alloc( HX_CTX );
HXLINE(  29)		this->addChild(this->line);
HXLINE(  30)		this->line->set_x((int)30);
            	}

Dynamic Toolbar_obj::__CreateEmpty() { return new Toolbar_obj; }

void *Toolbar_obj::_hx_vtable = 0;

Dynamic Toolbar_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Toolbar_obj > _hx_result = new Toolbar_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Toolbar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
		}
	} else {
		if (inClassId<=(int)0x3f2b00af) {
			return inClassId==(int)0x21e31f0e || inClassId==(int)0x3f2b00af;
		} else {
			return inClassId==(int)0x547c0f8d;
		}
	}
}

 ::Dynamic Toolbar_obj::tool;


hx::ObjectPtr< Toolbar_obj > Toolbar_obj::__new() {
	hx::ObjectPtr< Toolbar_obj > __this = new Toolbar_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Toolbar_obj > Toolbar_obj::__alloc(hx::Ctx *_hx_ctx) {
	Toolbar_obj *__this = (Toolbar_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Toolbar_obj), true, "lr.Toolbar"));
	*(void **)__this = Toolbar_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Toolbar_obj::Toolbar_obj()
{
}

void Toolbar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Toolbar);
	HX_MARK_MEMBER_NAME(pencil,"pencil");
	HX_MARK_MEMBER_NAME(line,"line");
	 ::openfl::display::MovieClip_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Toolbar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pencil,"pencil");
	HX_VISIT_MEMBER_NAME(line,"line");
	 ::openfl::display::MovieClip_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Toolbar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return hx::Val( line); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pencil") ) { return hx::Val( pencil); }
	}
	return super::__Field(inName,inCallProp);
}

bool Toolbar_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tool") ) { outValue = tool; return true; }
	}
	return false;
}

hx::Val Toolbar_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast<  ::ui::tool::icon::IconLine >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pencil") ) { pencil=inValue.Cast<  ::ui::tool::icon::IconPencil >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Toolbar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tool") ) { tool=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Toolbar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pencil","\xcd","\xf3","\x71","\x38"));
	outFields->push(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Toolbar_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::ui::tool::icon::IconPencil*/ ,(int)offsetof(Toolbar_obj,pencil),HX_HCSTRING("pencil","\xcd","\xf3","\x71","\x38")},
	{hx::fsObject /*::ui::tool::icon::IconLine*/ ,(int)offsetof(Toolbar_obj,line),HX_HCSTRING("line","\xf4","\x17","\xb3","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Toolbar_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Toolbar_obj::tool,HX_HCSTRING("tool","\x58","\x5b","\x01","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Toolbar_obj_sMemberFields[] = {
	HX_HCSTRING("pencil","\xcd","\xf3","\x71","\x38"),
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	::String(null()) };

static void Toolbar_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Toolbar_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Toolbar_obj::tool,"tool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Toolbar_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Toolbar_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Toolbar_obj::tool,"tool");
};

#endif

hx::Class Toolbar_obj::__mClass;

static ::String Toolbar_obj_sStaticFields[] = {
	HX_HCSTRING("tool","\x58","\x5b","\x01","\x4d"),
	::String(null())
};

void Toolbar_obj::__register()
{
	hx::Object *dummy = new Toolbar_obj;
	Toolbar_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lr.Toolbar","\x73","\xfb","\xcb","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Toolbar_obj::__GetStatic;
	__mClass->mSetStaticField = &Toolbar_obj::__SetStatic;
	__mClass->mMarkFunc = Toolbar_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Toolbar_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Toolbar_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Toolbar_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Toolbar_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Toolbar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Toolbar_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lr
