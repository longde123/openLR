// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_init_FileStart
#include <init/FileStart.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1d7674365e5ce2ca_7_new,"init.FileStart","new",0xd3b1123a,"init.FileStart.new","init/FileStart.hx",7,0xb7340ff7)
HX_LOCAL_STACK_FRAME(_hx_pos_1d7674365e5ce2ca_18_loadSettings,"init.FileStart","loadSettings",0x45831c0f,"init.FileStart.loadSettings","init/FileStart.hx",18,0xb7340ff7)
HX_LOCAL_STACK_FRAME(_hx_pos_1d7674365e5ce2ca_23_checkDirectories,"init.FileStart","checkDirectories",0x76541e09,"init.FileStart.checkDirectories","init/FileStart.hx",23,0xb7340ff7)
namespace init{

void FileStart_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1d7674365e5ce2ca_7_new)
HXLINE(   9)		this->ready = false;
HXLINE(  12)		this->checkDirectories();
HXLINE(  13)		this->loadSettings();
            	}

Dynamic FileStart_obj::__CreateEmpty() { return new FileStart_obj; }

void *FileStart_obj::_hx_vtable = 0;

Dynamic FileStart_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FileStart_obj > _hx_result = new FileStart_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FileStart_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13a8e856;
}

void FileStart_obj::loadSettings(){
            	HX_STACKFRAME(&_hx_pos_1d7674365e5ce2ca_18_loadSettings)
HXLINE(  18)		::haxe::Log_obj::trace(HX_("Loading settings",27,fb,ba,5c),hx::SourceInfo(HX_("FileStart.hx",58,ea,6b,4a),18,HX_("init.FileStart",48,2d,81,e3),HX_("loadSettings",29,69,a6,44)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileStart_obj,loadSettings,(void))

void FileStart_obj::checkDirectories(){
            	HX_STACKFRAME(&_hx_pos_1d7674365e5ce2ca_23_checkDirectories)
HXLINE(  23)		::haxe::Log_obj::trace(HX_("checking directories",05,70,4f,38),hx::SourceInfo(HX_("FileStart.hx",58,ea,6b,4a),23,HX_("init.FileStart",48,2d,81,e3),HX_("checkDirectories",23,00,0d,16)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileStart_obj,checkDirectories,(void))


hx::ObjectPtr< FileStart_obj > FileStart_obj::__new() {
	hx::ObjectPtr< FileStart_obj > __this = new FileStart_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FileStart_obj > FileStart_obj::__alloc(hx::Ctx *_hx_ctx) {
	FileStart_obj *__this = (FileStart_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FileStart_obj), false, "init.FileStart"));
	*(void **)__this = FileStart_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FileStart_obj::FileStart_obj()
{
}

hx::Val FileStart_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return hx::Val( ready); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadSettings") ) { return hx::Val( loadSettings_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkDirectories") ) { return hx::Val( checkDirectories_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FileStart_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileStart_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FileStart_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FileStart_obj,ready),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FileStart_obj_sStaticStorageInfo = 0;
#endif

static ::String FileStart_obj_sMemberFields[] = {
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("loadSettings","\x29","\x69","\xa6","\x44"),
	HX_HCSTRING("checkDirectories","\x23","\x00","\x0d","\x16"),
	::String(null()) };

static void FileStart_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileStart_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FileStart_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileStart_obj::__mClass,"__mClass");
};

#endif

hx::Class FileStart_obj::__mClass;

void FileStart_obj::__register()
{
	hx::Object *dummy = new FileStart_obj;
	FileStart_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("init.FileStart","\x48","\x2d","\x81","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FileStart_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FileStart_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FileStart_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FileStart_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileStart_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileStart_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace init
