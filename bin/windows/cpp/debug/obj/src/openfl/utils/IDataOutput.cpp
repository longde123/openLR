// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

namespace openfl{
namespace utils{


static ::String IDataOutput_obj_sMemberFields[] = {
	HX_HCSTRING("get_endian","\x64","\x08","\x10","\xeb"),
	HX_HCSTRING("set_endian","\xd8","\xa6","\x8d","\xee"),
	HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"),
	HX_HCSTRING("writeBoolean","\x89","\x8f","\x2d","\x43"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("writeDouble","\x50","\x7d","\xc4","\xc7"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeMultiByte","\x42","\x65","\x25","\xec"),
	HX_HCSTRING("writeShort","\x1d","\x7f","\xe9","\x10"),
	HX_HCSTRING("writeUTF","\x88","\x71","\xf9","\x23"),
	HX_HCSTRING("writeUTFBytes","\xc3","\x79","\x7b","\xda"),
	HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"),
	::String(null()) };

static void IDataOutput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IDataOutput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IDataOutput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IDataOutput_obj::__mClass,"__mClass");
};

#endif

hx::Class IDataOutput_obj::__mClass;

void IDataOutput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils.IDataOutput","\x59","\x44","\x6d","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IDataOutput_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IDataOutput_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x948d2d33 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IDataOutput_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
