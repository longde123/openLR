// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessage
#include <lime/system/_ThreadPool/ThreadPoolMessage.h>
#endif
#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessageType
#include <lime/system/_ThreadPool/ThreadPoolMessageType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb5354c74457ff34_235_new,"lime.system._ThreadPool.ThreadPoolMessage","new",0x973bef04,"lime.system._ThreadPool.ThreadPoolMessage.new","lime/system/ThreadPool.hx",235,0x8993fbb2)
namespace lime{
namespace _hx_system{
namespace _ThreadPool{

void ThreadPoolMessage_obj::__construct( ::lime::_hx_system::_ThreadPool::ThreadPoolMessageType type, ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_bb5354c74457ff34_235_new)
HXLINE( 237)		this->type = type;
HXLINE( 238)		this->state = state;
            	}

Dynamic ThreadPoolMessage_obj::__CreateEmpty() { return new ThreadPoolMessage_obj; }

void *ThreadPoolMessage_obj::_hx_vtable = 0;

Dynamic ThreadPoolMessage_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ThreadPoolMessage_obj > _hx_result = new ThreadPoolMessage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ThreadPoolMessage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x23d7cac4;
}


hx::ObjectPtr< ThreadPoolMessage_obj > ThreadPoolMessage_obj::__new( ::lime::_hx_system::_ThreadPool::ThreadPoolMessageType type, ::Dynamic state) {
	hx::ObjectPtr< ThreadPoolMessage_obj > __this = new ThreadPoolMessage_obj();
	__this->__construct(type,state);
	return __this;
}

hx::ObjectPtr< ThreadPoolMessage_obj > ThreadPoolMessage_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::_hx_system::_ThreadPool::ThreadPoolMessageType type, ::Dynamic state) {
	ThreadPoolMessage_obj *__this = (ThreadPoolMessage_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ThreadPoolMessage_obj), true, "lime.system._ThreadPool.ThreadPoolMessage"));
	*(void **)__this = ThreadPoolMessage_obj::_hx_vtable;
	__this->__construct(type,state);
	return __this;
}

ThreadPoolMessage_obj::ThreadPoolMessage_obj()
{
}

void ThreadPoolMessage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadPoolMessage);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void ThreadPoolMessage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(type,"type");
}

hx::Val ThreadPoolMessage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return hx::Val( state); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ThreadPoolMessage_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::lime::_hx_system::_ThreadPool::ThreadPoolMessageType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreadPoolMessage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ThreadPoolMessage_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ThreadPoolMessage_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*::lime::_hx_system::_ThreadPool::ThreadPoolMessageType*/ ,(int)offsetof(ThreadPoolMessage_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ThreadPoolMessage_obj_sStaticStorageInfo = 0;
#endif

static ::String ThreadPoolMessage_obj_sMemberFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	::String(null()) };

static void ThreadPoolMessage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadPoolMessage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ThreadPoolMessage_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadPoolMessage_obj::__mClass,"__mClass");
};

#endif

hx::Class ThreadPoolMessage_obj::__mClass;

void ThreadPoolMessage_obj::__register()
{
	hx::Object *dummy = new ThreadPoolMessage_obj;
	ThreadPoolMessage_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system._ThreadPool.ThreadPoolMessage","\x12","\x5d","\xd7","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ThreadPoolMessage_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ThreadPoolMessage_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ThreadPoolMessage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ThreadPoolMessage_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThreadPoolMessage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThreadPoolMessage_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
} // end namespace _ThreadPool
