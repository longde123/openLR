// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_net_curl__CURL_CURL_Impl_
#include <lime/net/curl/_CURL/CURL_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_23_getDate,"lime.net.curl._CURL.CURL_Impl_","getDate",0xf817421d,"lime.net.curl._CURL.CURL_Impl_.getDate","lime/net/curl/CURL.hx",23,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_34_globalCleanup,"lime.net.curl._CURL.CURL_Impl_","globalCleanup",0xf988f1fa,"lime.net.curl._CURL.CURL_Impl_.globalCleanup","lime/net/curl/CURL.hx",34,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_43_globalInit,"lime.net.curl._CURL.CURL_Impl_","globalInit",0x7c47f37a,"lime.net.curl._CURL.CURL_Impl_.globalInit","lime/net/curl/CURL.hx",43,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_54_version,"lime.net.curl._CURL.CURL_Impl_","version",0x60232351,"lime.net.curl._CURL.CURL_Impl_.version","lime/net/curl/CURL.hx",54,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_65_versionInfo,"lime.net.curl._CURL.CURL_Impl_","versionInfo",0x87fa045f,"lime.net.curl._CURL.CURL_Impl_.versionInfo","lime/net/curl/CURL.hx",65,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_75_intGt,"lime.net.curl._CURL.CURL_Impl_","intGt",0x725c30f5,"lime.net.curl._CURL.CURL_Impl_.intGt","lime/net/curl/CURL.hx",75,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_12_boot,"lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",12,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_13_boot,"lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",13,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_14_boot,"lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",14,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_15_boot,"lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",15,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_16_boot,"lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",16,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_facf838d67b043c2_17_boot,"lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",17,0x82d3899b)
namespace lime{
namespace net{
namespace curl{
namespace _CURL{

void CURL_Impl__obj::__construct() { }

Dynamic CURL_Impl__obj::__CreateEmpty() { return new CURL_Impl__obj; }

void *CURL_Impl__obj::_hx_vtable = 0;

Dynamic CURL_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CURL_Impl__obj > _hx_result = new CURL_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CURL_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c51c50b;
}

int CURL_Impl__obj::GLOBAL_SSL;

int CURL_Impl__obj::GLOBAL_WIN32;

int CURL_Impl__obj::GLOBAL_ALL;

int CURL_Impl__obj::GLOBAL_NOTHING;

int CURL_Impl__obj::GLOBAL_DEFAULT;

int CURL_Impl__obj::GLOBAL_ACK_EINTR;

int CURL_Impl__obj::getDate(::String date,int now){
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_23_getDate)
HXLINE(  23)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_getdate(date,now);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_Impl__obj,getDate,return )

void CURL_Impl__obj::globalCleanup(){
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_34_globalCleanup)
HXLINE(  34)		::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_global_cleanup();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,globalCleanup,(void))

int CURL_Impl__obj::globalInit(int flags){
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_43_globalInit)
HXLINE(  43)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_global_init(flags);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,globalInit,return )

::String CURL_Impl__obj::version(){
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_54_version)
HXLINE(  54)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_version()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,version,return )

 ::Dynamic CURL_Impl__obj::versionInfo(int type){
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_65_versionInfo)
HXLINE(  65)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_version_info(type)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,versionInfo,return )

bool CURL_Impl__obj::intGt(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_75_intGt)
HXLINE(  75)		return (a > b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_Impl__obj,intGt,return )


CURL_Impl__obj::CURL_Impl__obj()
{
}

bool CURL_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"intGt") ) { outValue = intGt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getDate") ) { outValue = getDate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalInit") ) { outValue = globalInit_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionInfo") ) { outValue = versionInfo_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"globalCleanup") ) { outValue = globalCleanup_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CURL_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo CURL_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_SSL,HX_HCSTRING("GLOBAL_SSL","\x90","\x53","\x1d","\x52")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_WIN32,HX_HCSTRING("GLOBAL_WIN32","\x7f","\x38","\xc5","\x59")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_ALL,HX_HCSTRING("GLOBAL_ALL","\xe5","\xa4","\x0f","\x52")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_NOTHING,HX_HCSTRING("GLOBAL_NOTHING","\xd1","\x41","\x21","\xb2")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_DEFAULT,HX_HCSTRING("GLOBAL_DEFAULT","\x85","\x7e","\x85","\xfe")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_ACK_EINTR,HX_HCSTRING("GLOBAL_ACK_EINTR","\x76","\xbf","\xc3","\x74")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void CURL_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CURL_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
};

#endif

hx::Class CURL_Impl__obj::__mClass;

static ::String CURL_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("GLOBAL_SSL","\x90","\x53","\x1d","\x52"),
	HX_HCSTRING("GLOBAL_WIN32","\x7f","\x38","\xc5","\x59"),
	HX_HCSTRING("GLOBAL_ALL","\xe5","\xa4","\x0f","\x52"),
	HX_HCSTRING("GLOBAL_NOTHING","\xd1","\x41","\x21","\xb2"),
	HX_HCSTRING("GLOBAL_DEFAULT","\x85","\x7e","\x85","\xfe"),
	HX_HCSTRING("GLOBAL_ACK_EINTR","\x76","\xbf","\xc3","\x74"),
	HX_HCSTRING("getDate","\xe4","\x05","\xe6","\x14"),
	HX_HCSTRING("globalCleanup","\x01","\x45","\x7b","\xd1"),
	HX_HCSTRING("globalInit","\x13","\x86","\x5e","\x3c"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("versionInfo","\xa6","\xb7","\xa3","\xdb"),
	HX_HCSTRING("intGt","\xfc","\xa4","\x20","\xbe"),
	::String(null())
};

void CURL_Impl__obj::__register()
{
	hx::Object *dummy = new CURL_Impl__obj;
	CURL_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.curl._CURL.CURL_Impl_","\xa7","\x3b","\x72","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CURL_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CURL_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CURL_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CURL_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CURL_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CURL_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CURL_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CURL_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_12_boot)
HXLINE(  12)		GLOBAL_SSL = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_13_boot)
HXLINE(  13)		GLOBAL_WIN32 = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_14_boot)
HXLINE(  14)		GLOBAL_ALL = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_15_boot)
HXLINE(  15)		GLOBAL_NOTHING = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_16_boot)
HXLINE(  16)		GLOBAL_DEFAULT = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_facf838d67b043c2_17_boot)
HXLINE(  17)		GLOBAL_ACK_EINTR = (int)4;
            	}
}

} // end namespace lime
} // end namespace net
} // end namespace curl
} // end namespace _CURL