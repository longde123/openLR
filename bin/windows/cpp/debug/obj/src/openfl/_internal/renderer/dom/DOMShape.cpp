// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMShape
#include <openfl/_internal/renderer/dom/DOMShape.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_108cf59222717320_22_render,"openfl._internal.renderer.dom.DOMShape","render",0x498be01e,"openfl._internal.renderer.dom.DOMShape.render","openfl/_internal/renderer/dom/DOMShape.hx",22,0xad9b03d8)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

void DOMShape_obj::__construct() { }

Dynamic DOMShape_obj::__CreateEmpty() { return new DOMShape_obj; }

void *DOMShape_obj::_hx_vtable = 0;

Dynamic DOMShape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DOMShape_obj > _hx_result = new DOMShape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMShape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x401a0f56;
}

void DOMShape_obj::render( ::openfl::display::DisplayObject shape, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_108cf59222717320_22_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMShape_obj,render,(void))


DOMShape_obj::DOMShape_obj()
{
}

bool DOMShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DOMShape_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DOMShape_obj_sStaticStorageInfo = 0;
#endif

static void DOMShape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DOMShape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMShape_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMShape_obj::__mClass;

static ::String DOMShape_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void DOMShape_obj::__register()
{
	hx::Object *dummy = new DOMShape_obj;
	DOMShape_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMShape","\xa6","\x22","\x37","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DOMShape_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DOMShape_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DOMShape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DOMShape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMShape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
