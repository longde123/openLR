// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e6d4d2a508b63638_872_new,"openfl.AssetLibrary","new",0x1b1e281b,"openfl.AssetLibrary.new","openfl/Assets.hx",872,0x989d477c)
HX_LOCAL_STACK_FRAME(_hx_pos_e6d4d2a508b63638_879_getMovieClip,"openfl.AssetLibrary","getMovieClip",0x2889f80f,"openfl.AssetLibrary.getMovieClip","openfl/Assets.hx",879,0x989d477c)
HX_LOCAL_STACK_FRAME(_hx_pos_e6d4d2a508b63638_886_loadMovieClip,"openfl.AssetLibrary","loadMovieClip",0x8eb64315,"openfl.AssetLibrary.loadMovieClip","openfl/Assets.hx",886,0x989d477c)
HX_LOCAL_STACK_FRAME(_hx_pos_e6d4d2a508b63638_884_loadMovieClip,"openfl.AssetLibrary","loadMovieClip",0x8eb64315,"openfl.AssetLibrary.loadMovieClip","openfl/Assets.hx",884,0x989d477c)
namespace openfl{

void AssetLibrary_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e6d4d2a508b63638_872_new)
HXLINE( 872)		super::__construct();
            	}

Dynamic AssetLibrary_obj::__CreateEmpty() { return new AssetLibrary_obj; }

void *AssetLibrary_obj::_hx_vtable = 0;

Dynamic AssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetLibrary_obj > _hx_result = new AssetLibrary_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetLibrary_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x425552e3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x425552e3;
	} else {
		return inClassId==(int)0x699b215b;
	}
}

 ::openfl::display::MovieClip AssetLibrary_obj::getMovieClip(::String id){
            	HX_STACKFRAME(&_hx_pos_e6d4d2a508b63638_879_getMovieClip)
HXLINE( 879)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getMovieClip,return )

 ::lime::app::Future AssetLibrary_obj::loadMovieClip(::String id){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,id, ::openfl::AssetLibrary,_gthis) HXARGC(0)
            		 ::openfl::display::MovieClip _hx_run(){
            			HX_STACKFRAME(&_hx_pos_e6d4d2a508b63638_886_loadMovieClip)
HXLINE( 886)			return _gthis->getMovieClip(id);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_e6d4d2a508b63638_884_loadMovieClip)
HXLINE( 884)		 ::openfl::AssetLibrary _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 886)		return  ::lime::app::Future_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(id,_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadMovieClip,return )


hx::ObjectPtr< AssetLibrary_obj > AssetLibrary_obj::__new() {
	hx::ObjectPtr< AssetLibrary_obj > __this = new AssetLibrary_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AssetLibrary_obj > AssetLibrary_obj::__alloc(hx::Ctx *_hx_ctx) {
	AssetLibrary_obj *__this = (AssetLibrary_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetLibrary_obj), true, "openfl.AssetLibrary"));
	*(void **)__this = AssetLibrary_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetLibrary_obj::AssetLibrary_obj()
{
}

hx::Val AssetLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return hx::Val( getMovieClip_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { return hx::Val( loadMovieClip_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AssetLibrary_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AssetLibrary_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetLibrary_obj_sMemberFields[] = {
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"),
	::String(null()) };

static void AssetLibrary_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetLibrary_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetLibrary_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetLibrary_obj::__mClass;

void AssetLibrary_obj::__register()
{
	hx::Object *dummy = new AssetLibrary_obj;
	AssetLibrary_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.AssetLibrary","\xa9","\x7e","\x13","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetLibrary_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AssetLibrary_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetLibrary_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetLibrary_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetLibrary_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
