// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_net_HTTPRequest
#include <lime/net/HTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b3faec552c086965_24_new,"lime.net.HTTPRequest","new",0xc8d2372f,"lime.net.HTTPRequest.new","lime/net/HTTPRequest.hx",24,0x339db723)
namespace lime{
namespace net{

void HTTPRequest_obj::__construct(::String uri){
            	HX_STACKFRAME(&_hx_pos_b3faec552c086965_24_new)
HXLINE(  24)		super::__construct(uri);
            	}

Dynamic HTTPRequest_obj::__CreateEmpty() { return new HTTPRequest_obj; }

void *HTTPRequest_obj::_hx_vtable = 0;

Dynamic HTTPRequest_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HTTPRequest_obj > _hx_result = new HTTPRequest_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HTTPRequest_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x618df855) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x618df855;
	} else {
		return inClassId==(int)0x6483967f;
	}
}


hx::ObjectPtr< HTTPRequest_obj > HTTPRequest_obj::__new(::String uri) {
	hx::ObjectPtr< HTTPRequest_obj > __this = new HTTPRequest_obj();
	__this->__construct(uri);
	return __this;
}

hx::ObjectPtr< HTTPRequest_obj > HTTPRequest_obj::__alloc(hx::Ctx *_hx_ctx,::String uri) {
	HTTPRequest_obj *__this = (HTTPRequest_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HTTPRequest_obj), true, "lime.net.HTTPRequest"));
	*(void **)__this = HTTPRequest_obj::_hx_vtable;
	__this->__construct(uri);
	return __this;
}

HTTPRequest_obj::HTTPRequest_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HTTPRequest_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HTTPRequest_obj_sStaticStorageInfo = 0;
#endif

static void HTTPRequest_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPRequest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HTTPRequest_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPRequest_obj::__mClass,"__mClass");
};

#endif

hx::Class HTTPRequest_obj::__mClass;

void HTTPRequest_obj::__register()
{
	hx::Object *dummy = new HTTPRequest_obj;
	HTTPRequest_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.HTTPRequest","\xbd","\x73","\x25","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HTTPRequest_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HTTPRequest_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HTTPRequest_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HTTPRequest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HTTPRequest_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
