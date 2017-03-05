// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_global_Common
#include <global/Common.h>
#endif
#ifndef INCLUDED_lr_Toolbar
#include <lr/Toolbar.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_ui_tool_ToolBase
#include <ui/tool/ToolBase.h>
#endif
#ifndef INCLUDED_ui_tool_icon_IconBase
#include <ui/tool/icon/IconBase.h>
#endif
#ifndef INCLUDED_ui_tool_icon_IconPencil
#include <ui/tool/icon/IconPencil.h>
#endif
#ifndef INCLUDED_ui_tool_lr_ToolPencil
#include <ui/tool/lr/ToolPencil.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a3b2b003e1b0eda4_20_new,"ui.tool.icon.IconPencil","new",0x3a729ad1,"ui.tool.icon.IconPencil.new","ui/tool/icon/IconPencil.hx",20,0xa225b17e)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2b003e1b0eda4_25_down,"ui.tool.icon.IconPencil","down",0xe34050d1,"ui.tool.icon.IconPencil.down","ui/tool/icon/IconPencil.hx",25,0xa225b17e)
namespace ui{
namespace tool{
namespace icon{

void IconPencil_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a3b2b003e1b0eda4_20_new)
HXLINE(  21)		super::__construct();
HXLINE(  22)		this->icon =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,::openfl::Assets_obj::getBitmapData(HX_("icon/pencil.png",9e,85,92,d7),null()),null(),null());
HXLINE(  23)		this->addChild(this->icon);
            	}

Dynamic IconPencil_obj::__CreateEmpty() { return new IconPencil_obj; }

void *IconPencil_obj::_hx_vtable = 0;

Dynamic IconPencil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IconPencil_obj > _hx_result = new IconPencil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IconPencil_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17120186) {
		if (inClassId<=(int)0x0ddfced7) {
			if (inClassId<=(int)0x0d69592b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0d69592b;
			} else {
				return inClassId==(int)0x0ddfced7;
			}
		} else {
			return inClassId==(int)0x0f1199ef || inClassId==(int)0x17120186;
		}
	} else {
		if (inClassId<=(int)0x21e31f0e) {
			if (inClassId<=(int)0x1b123bf8) {
				return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
			} else {
				return inClassId==(int)0x21e31f0e;
			}
		} else {
			return inClassId==(int)0x3f2b00af;
		}
	}
}

void IconPencil_obj::down( ::openfl::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_a3b2b003e1b0eda4_25_down)
HXLINE(  26)		::global::Common_obj::gToolBase->disable();
HXLINE(  27)		::lr::Toolbar_obj::tool =  ::ui::tool::lr::ToolPencil_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< IconPencil_obj > IconPencil_obj::__new() {
	hx::ObjectPtr< IconPencil_obj > __this = new IconPencil_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< IconPencil_obj > IconPencil_obj::__alloc(hx::Ctx *_hx_ctx) {
	IconPencil_obj *__this = (IconPencil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IconPencil_obj), true, "ui.tool.icon.IconPencil"));
	*(void **)__this = IconPencil_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

IconPencil_obj::IconPencil_obj()
{
}

hx::Val IconPencil_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { return hx::Val( down_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *IconPencil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *IconPencil_obj_sStaticStorageInfo = 0;
#endif

static ::String IconPencil_obj_sMemberFields[] = {
	HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),
	::String(null()) };

static void IconPencil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IconPencil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IconPencil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IconPencil_obj::__mClass,"__mClass");
};

#endif

hx::Class IconPencil_obj::__mClass;

void IconPencil_obj::__register()
{
	hx::Object *dummy = new IconPencil_obj;
	IconPencil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.tool.icon.IconPencil","\x5f","\xde","\xde","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IconPencil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IconPencil_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IconPencil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IconPencil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IconPencil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IconPencil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace ui
} // end namespace tool
} // end namespace icon
