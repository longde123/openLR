// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_init_Defaults
#include <init/Defaults.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0694247e9276afbb_11_new,"init.Defaults","new",0x671816c2,"init.Defaults.new","init/Defaults.hx",11,0x5493e48d)
namespace init{

void Defaults_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0694247e9276afbb_11_new)
            	}

Dynamic Defaults_obj::__CreateEmpty() { return new Defaults_obj; }

void *Defaults_obj::_hx_vtable = 0;

Dynamic Defaults_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Defaults_obj > _hx_result = new Defaults_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Defaults_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12f62e82;
}


Defaults_obj::Defaults_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Defaults_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Defaults_obj_sStaticStorageInfo = 0;
#endif

static void Defaults_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Defaults_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Defaults_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Defaults_obj::__mClass,"__mClass");
};

#endif

hx::Class Defaults_obj::__mClass;

void Defaults_obj::__register()
{
	hx::Object *dummy = new Defaults_obj;
	Defaults_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("init.Defaults","\xd0","\x4d","\xd9","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Defaults_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Defaults_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Defaults_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Defaults_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Defaults_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace init
