// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl_display_ShaderInput
#define INCLUDED_openfl_display_ShaderInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_362945d0bc3d9e06_19_new)
HX_DECLARE_CLASS2(openfl,display,ShaderInput)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES ShaderInput_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ShaderInput_obj OBJ_;
		ShaderInput_obj();

	public:
		enum { _hx_ClassId = 0x060010f7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.ShaderInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.ShaderInput"); }

		hx::ObjectPtr< ShaderInput_obj > __new() {
			hx::ObjectPtr< ShaderInput_obj > __this = new ShaderInput_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ShaderInput_obj > __alloc(hx::Ctx *_hx_ctx) {
			ShaderInput_obj *__this = (ShaderInput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ShaderInput_obj), true, "openfl.display.ShaderInput"));
			*(void **)__this = ShaderInput_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_362945d0bc3d9e06_19_new)
HXLINE(  21)		( ( ::openfl::display::ShaderInput)(__this) )->channels = (int)0;
HXLINE(  22)		( ( ::openfl::display::ShaderInput)(__this) )->height = (int)0;
HXLINE(  23)		( ( ::openfl::display::ShaderInput)(__this) )->index = (int)0;
HXLINE(  24)		( ( ::openfl::display::ShaderInput)(__this) )->width = (int)0;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderInput_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ShaderInput","\x85","\x06","\x7d","\x79"); }

		int channels;
		int height;
		 ::Dynamic index;
		 ::Dynamic input;
		::String name;
		bool smoothing;
		int width;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ShaderInput */ 
