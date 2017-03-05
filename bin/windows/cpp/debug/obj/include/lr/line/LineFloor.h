// Generated by Haxe 3.4.0
#ifndef INCLUDED_lr_line_LineFloor
#define INCLUDED_lr_line_LineFloor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lr_line_LineBase
#include <lr/line/LineBase.h>
#endif
HX_DECLARE_CLASS2(lr,line,LineBase)
HX_DECLARE_CLASS2(lr,line,LineFloor)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace lr{
namespace line{


class HXCPP_CLASS_ATTRIBUTES LineFloor_obj : public  ::lr::line::LineBase_obj
{
	public:
		typedef  ::lr::line::LineBase_obj super;
		typedef LineFloor_obj OBJ_;
		LineFloor_obj();

	public:
		enum { _hx_ClassId = 0x694ebede };

		void __construct( ::openfl::geom::Point _a, ::openfl::geom::Point _b,bool _inv,hx::Null< int >  __o__lim);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lr.line.LineFloor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lr.line.LineFloor"); }
		static hx::ObjectPtr< LineFloor_obj > __new( ::openfl::geom::Point _a, ::openfl::geom::Point _b,bool _inv,hx::Null< int >  __o__lim);
		static hx::ObjectPtr< LineFloor_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::geom::Point _a, ::openfl::geom::Point _b,bool _inv,hx::Null< int >  __o__lim);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LineFloor_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("LineFloor","\x18","\xb5","\x64","\xeb"); }

		void render(::String con);
		::Dynamic render_dyn();

};

} // end namespace lr
} // end namespace line

#endif /* INCLUDED_lr_line_LineFloor */ 