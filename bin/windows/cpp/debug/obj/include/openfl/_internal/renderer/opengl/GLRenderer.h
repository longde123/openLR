// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#define INCLUDED_openfl__internal_renderer_opengl_GLRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS4(openfl,_internal,renderer,opengl,GLRenderer)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES GLRenderer_obj : public  ::openfl::_internal::renderer::AbstractRenderer_obj
{
	public:
		typedef  ::openfl::_internal::renderer::AbstractRenderer_obj super;
		typedef GLRenderer_obj OBJ_;
		GLRenderer_obj();

	public:
		enum { _hx_ClassId = 0x0339ec6e };

		void __construct( ::openfl::display::Stage stage, ::lime::_backend::native::NativeGLRenderContext gl,hx::Null< bool >  __o_flipped);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.GLRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.opengl.GLRenderer"); }
		static hx::ObjectPtr< GLRenderer_obj > __new( ::openfl::display::Stage stage, ::lime::_backend::native::NativeGLRenderContext gl,hx::Null< bool >  __o_flipped);
		static hx::ObjectPtr< GLRenderer_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display::Stage stage, ::lime::_backend::native::NativeGLRenderContext gl,hx::Null< bool >  __o_flipped);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLRenderer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLRenderer","\x88","\xec","\xdf","\x80"); }

		 ::lime::utils::ArrayBufferView projection;
		 ::lime::utils::ArrayBufferView projectionFlipped;
		 ::openfl::display::BitmapData currentRenderTarget;
		int displayHeight;
		 ::openfl::geom::Matrix displayMatrix;
		int displayWidth;
		bool flipped;
		 ::lime::_backend::native::NativeGLRenderContext gl;
		 ::lime::utils::ArrayBufferView matrix;
		 ::openfl::display::BitmapData renderTargetA;
		 ::openfl::display::BitmapData renderTargetB;
		int offsetX;
		int offsetY;
		::Array< Float > values;
		void clear();

		void getCacheObject();
		::Dynamic getCacheObject_dyn();

		::Array< Float > getMatrix( ::openfl::geom::Matrix transform);
		::Dynamic getMatrix_dyn();

		void getRenderTarget(bool framebuffer);
		::Dynamic getRenderTarget_dyn();

		void render();

		void resize(int width,int height);

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_renderer_opengl_GLRenderer */ 
