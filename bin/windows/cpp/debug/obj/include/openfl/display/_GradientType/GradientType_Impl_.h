// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl_display__GradientType_GradientType_Impl_
#define INCLUDED_openfl_display__GradientType_GradientType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_GradientType,GradientType_Impl_)

namespace openfl{
namespace display{
namespace _GradientType{


class HXCPP_CLASS_ATTRIBUTES GradientType_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GradientType_Impl__obj OBJ_;
		GradientType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x778edb69 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._GradientType.GradientType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display._GradientType.GradientType_Impl_"); }

		hx::ObjectPtr< GradientType_Impl__obj > __new() {
			hx::ObjectPtr< GradientType_Impl__obj > __this = new GradientType_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GradientType_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			GradientType_Impl__obj *__this = (GradientType_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GradientType_Impl__obj), false, "openfl.display._GradientType.GradientType_Impl_"));
			*(void **)__this = GradientType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GradientType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GradientType_Impl_","\x0a","\x25","\x04","\xa0"); }

		static void __boot();
		static  ::Dynamic LINEAR;
		static  ::Dynamic RADIAL;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString(int value);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _GradientType

#endif /* INCLUDED_openfl_display__GradientType_GradientType_Impl_ */ 
