// Generated by Haxe 3.4.0
#ifndef INCLUDED_ui_tool_icon_IconPlay
#define INCLUDED_ui_tool_icon_IconPlay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ui_tool_icon_IconBase
#include <ui/tool/icon/IconBase.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS3(ui,tool,icon,IconBase)
HX_DECLARE_CLASS3(ui,tool,icon,IconPlay)

namespace ui{
namespace tool{
namespace icon{


class HXCPP_CLASS_ATTRIBUTES IconPlay_obj : public  ::ui::tool::icon::IconBase_obj
{
	public:
		typedef  ::ui::tool::icon::IconBase_obj super;
		typedef IconPlay_obj OBJ_;
		IconPlay_obj();

	public:
		enum { _hx_ClassId = 0x185adfd2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ui.tool.icon.IconPlay")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"ui.tool.icon.IconPlay"); }
		static hx::ObjectPtr< IconPlay_obj > __new();
		static hx::ObjectPtr< IconPlay_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IconPlay_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("IconPlay","\x2d","\xae","\x13","\x51"); }

		void down( ::openfl::events::MouseEvent e);

};

} // end namespace ui
} // end namespace tool
} // end namespace icon

#endif /* INCLUDED_ui_tool_icon_IconPlay */ 
