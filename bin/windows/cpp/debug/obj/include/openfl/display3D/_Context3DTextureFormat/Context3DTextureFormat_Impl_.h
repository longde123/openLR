// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl_display3D__Context3DTextureFormat_Context3DTextureFormat_Impl_
#define INCLUDED_openfl_display3D__Context3DTextureFormat_Context3DTextureFormat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3DTextureFormat,Context3DTextureFormat_Impl_)

namespace openfl{
namespace display3D{
namespace _Context3DTextureFormat{


class HXCPP_CLASS_ATTRIBUTES Context3DTextureFormat_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Context3DTextureFormat_Impl__obj OBJ_;
		Context3DTextureFormat_Impl__obj();

	public:
		enum { _hx_ClassId = 0x1f3750e0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3DTextureFormat.Context3DTextureFormat_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display3D._Context3DTextureFormat.Context3DTextureFormat_Impl_"); }

		hx::ObjectPtr< Context3DTextureFormat_Impl__obj > __new() {
			hx::ObjectPtr< Context3DTextureFormat_Impl__obj > __this = new Context3DTextureFormat_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Context3DTextureFormat_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Context3DTextureFormat_Impl__obj *__this = (Context3DTextureFormat_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Context3DTextureFormat_Impl__obj), false, "openfl.display3D._Context3DTextureFormat.Context3DTextureFormat_Impl_"));
			*(void **)__this = Context3DTextureFormat_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DTextureFormat_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Context3DTextureFormat_Impl_","\x32","\xe4","\x60","\x8c"); }

		static void __boot();
		static  ::Dynamic BGR_PACKED;
		static  ::Dynamic BGRA;
		static  ::Dynamic BGRA_PACKED;
		static  ::Dynamic COMPRESSED;
		static  ::Dynamic COMPRESSED_ALPHA;
		static  ::Dynamic RGBA_HALF_FLOAT;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString(int value);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DTextureFormat

#endif /* INCLUDED_openfl_display3D__Context3DTextureFormat_Context3DTextureFormat_Impl_ */ 
