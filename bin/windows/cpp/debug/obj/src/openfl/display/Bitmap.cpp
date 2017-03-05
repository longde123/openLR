// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f5857023424199a6_40_new,"openfl.display.Bitmap","new",0x8bc0314b,"openfl.display.Bitmap.new","openfl/display/Bitmap.hx",40,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_59___getBounds,"openfl.display.Bitmap","__getBounds",0x13081c76,"openfl.display.Bitmap.__getBounds","openfl/display/Bitmap.hx",59,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_72___hitTest,"openfl.display.Bitmap","__hitTest",0x80f61450,"openfl.display.Bitmap.__hitTest","openfl/display/Bitmap.hx",72,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_105___hitTestMask,"openfl.display.Bitmap","__hitTestMask",0x7acde95c,"openfl.display.Bitmap.__hitTestMask","openfl/display/Bitmap.hx",105,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_128___renderCairo,"openfl.display.Bitmap","__renderCairo",0x941372dd,"openfl.display.Bitmap.__renderCairo","openfl/display/Bitmap.hx",128,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_136___renderCairoMask,"openfl.display.Bitmap","__renderCairoMask",0xba721269,"openfl.display.Bitmap.__renderCairoMask","openfl/display/Bitmap.hx",136,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_143___renderCanvas,"openfl.display.Bitmap","__renderCanvas",0x00421ce3,"openfl.display.Bitmap.__renderCanvas","openfl/display/Bitmap.hx",143,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_150___renderCanvasMask,"openfl.display.Bitmap","__renderCanvasMask",0x68a5376f,"openfl.display.Bitmap.__renderCanvasMask","openfl/display/Bitmap.hx",150,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_155___renderDOM,"openfl.display.Bitmap","__renderDOM",0xfdebb997,"openfl.display.Bitmap.__renderDOM","openfl/display/Bitmap.hx",155,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_166___renderGL,"openfl.display.Bitmap","__renderGL",0xbc428090,"openfl.display.Bitmap.__renderGL","openfl/display/Bitmap.hx",166,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_171___updateMask,"openfl.display.Bitmap","__updateMask",0x5202506a,"openfl.display.Bitmap.__updateMask","openfl/display/Bitmap.hx",171,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_202_set_bitmapData,"openfl.display.Bitmap","set_bitmapData",0x81bf676b,"openfl.display.Bitmap.set_bitmapData","openfl/display/Bitmap.hx",202,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_222_get_height,"openfl.display.Bitmap","get_height",0x5901da25,"openfl.display.Bitmap.get_height","openfl/display/Bitmap.hx",222,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_235_set_height,"openfl.display.Bitmap","set_height",0x5c7f7899,"openfl.display.Bitmap.set_height","openfl/display/Bitmap.hx",235,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_254_get_width,"openfl.display.Bitmap","get_width",0x2b347588,"openfl.display.Bitmap.get_width","openfl/display/Bitmap.hx",254,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_267_set_width,"openfl.display.Bitmap","set_width",0x0e856194,"openfl.display.Bitmap.set_width","openfl/display/Bitmap.hx",267,0x461b2743)
namespace openfl{
namespace display{

void Bitmap_obj::__construct( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_40_new)
HXLINE(  42)		super::__construct();
HXLINE(  44)		this->set_bitmapData(bitmapData);
HXLINE(  45)		this->pixelSnapping = pixelSnapping;
HXLINE(  46)		this->smoothing = smoothing;
HXLINE(  48)		if (hx::IsNull( pixelSnapping )) {
HXLINE(  50)			this->pixelSnapping = (int)1;
            		}
            	}

Dynamic Bitmap_obj::__CreateEmpty() { return new Bitmap_obj; }

void *Bitmap_obj::_hx_vtable = 0;

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Bitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19c29573) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19c29573;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x3b5602c1;
	}
}

void Bitmap_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_59___getBounds)
HXLINE(  59)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE(  61)			 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___temp;
HXLINE(  62)			bounds->setTo((int)0,(int)0,this->bitmapData->width,this->bitmapData->height);
HXLINE(  63)			bounds->_hx___transform(bounds,matrix);
HXLINE(  65)			rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
            		}
            	}


bool Bitmap_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_72___hitTest)
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		bool _hx_tmp1;
HXDLIN(  74)		if (!(!(hitObject->get_visible()))) {
HXLINE(  74)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE(  74)			_hx_tmp1 = true;
            		}
HXDLIN(  74)		if (!(_hx_tmp1)) {
HXLINE(  74)			_hx_tmp = hx::IsNull( this->bitmapData );
            		}
            		else {
HXLINE(  74)			_hx_tmp = true;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  74)			return false;
            		}
HXLINE(  75)		bool _hx_tmp2;
HXDLIN(  75)		if (hx::IsNotNull( this->get_mask() )) {
HXLINE(  75)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE(  75)			_hx_tmp2 = false;
            		}
HXDLIN(  75)		if (_hx_tmp2) {
HXLINE(  75)			return false;
            		}
HXLINE(  77)		this->_hx___getRenderTransform();
HXLINE(  79)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN(  79)		Float norm = (_this->a * _this->d);
HXDLIN(  79)		Float norm1 = (norm - (_this->b * _this->c));
HXDLIN(  79)		Float px;
HXDLIN(  79)		if ((norm1 == (int)0)) {
HXLINE(  79)			px = -(_this->tx);
            		}
            		else {
HXLINE(  79)			Float _this1 = _this->c;
HXDLIN(  79)			Float px1 = (_this1 * (_this->ty - y));
HXDLIN(  79)			Float _this2 = _this->d;
HXDLIN(  79)			px = (((Float)((Float)1.0) / (Float)norm1) * (px1 + (_this2 * (x - _this->tx))));
            		}
HXLINE(  80)		 ::openfl::geom::Matrix _this3 = this->_hx___renderTransform;
HXDLIN(  80)		Float norm2 = (_this3->a * _this3->d);
HXDLIN(  80)		Float norm3 = (norm2 - (_this3->b * _this3->c));
HXDLIN(  80)		Float py;
HXDLIN(  80)		if ((norm3 == (int)0)) {
HXLINE(  80)			py = -(_this3->ty);
            		}
            		else {
HXLINE(  80)			Float _this4 = _this3->a;
HXDLIN(  80)			Float py1 = (_this4 * (y - _this3->ty));
HXDLIN(  80)			Float _this5 = _this3->b;
HXDLIN(  80)			py = (((Float)((Float)1.0) / (Float)norm3) * (py1 + (_this5 * (_this3->tx - x))));
            		}
HXLINE(  82)		bool _hx_tmp3;
HXDLIN(  82)		bool _hx_tmp4;
HXDLIN(  82)		bool _hx_tmp5;
HXDLIN(  82)		if ((px > (int)0)) {
HXLINE(  82)			_hx_tmp5 = (py > (int)0);
            		}
            		else {
HXLINE(  82)			_hx_tmp5 = false;
            		}
HXDLIN(  82)		if (_hx_tmp5) {
HXLINE(  82)			_hx_tmp4 = (px <= this->bitmapData->width);
            		}
            		else {
HXLINE(  82)			_hx_tmp4 = false;
            		}
HXDLIN(  82)		if (_hx_tmp4) {
HXLINE(  82)			_hx_tmp3 = (py <= this->bitmapData->height);
            		}
            		else {
HXLINE(  82)			_hx_tmp3 = false;
            		}
HXDLIN(  82)		if (_hx_tmp3) {
HXLINE(  84)			bool _hx_tmp6;
HXDLIN(  84)			if (hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE(  84)				_hx_tmp6 = !(this->_hx___scrollRect->contains(px,py));
            			}
            			else {
HXLINE(  84)				_hx_tmp6 = false;
            			}
HXDLIN(  84)			if (_hx_tmp6) {
HXLINE(  86)				return false;
            			}
HXLINE(  90)			bool _hx_tmp7;
HXDLIN(  90)			if (hx::IsNotNull( stack )) {
HXLINE(  90)				_hx_tmp7 = !(interactiveOnly);
            			}
            			else {
HXLINE(  90)				_hx_tmp7 = false;
            			}
HXDLIN(  90)			if (_hx_tmp7) {
HXLINE(  92)				stack->push(hitObject);
            			}
HXLINE(  96)			return true;
            		}
HXLINE( 100)		return false;
            	}


bool Bitmap_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_105___hitTestMask)
HXLINE( 107)		if (hx::IsNull( this->bitmapData )) {
HXLINE( 107)			return false;
            		}
HXLINE( 109)		this->_hx___getRenderTransform();
HXLINE( 111)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 111)		Float norm = (_this->a * _this->d);
HXDLIN( 111)		Float norm1 = (norm - (_this->b * _this->c));
HXDLIN( 111)		Float px;
HXDLIN( 111)		if ((norm1 == (int)0)) {
HXLINE( 111)			px = -(_this->tx);
            		}
            		else {
HXLINE( 111)			Float _this1 = _this->c;
HXDLIN( 111)			Float px1 = (_this1 * (_this->ty - y));
HXDLIN( 111)			Float _this2 = _this->d;
HXDLIN( 111)			px = (((Float)((Float)1.0) / (Float)norm1) * (px1 + (_this2 * (x - _this->tx))));
            		}
HXLINE( 112)		 ::openfl::geom::Matrix _this3 = this->_hx___renderTransform;
HXDLIN( 112)		Float norm2 = (_this3->a * _this3->d);
HXDLIN( 112)		Float norm3 = (norm2 - (_this3->b * _this3->c));
HXDLIN( 112)		Float py;
HXDLIN( 112)		if ((norm3 == (int)0)) {
HXLINE( 112)			py = -(_this3->ty);
            		}
            		else {
HXLINE( 112)			Float _this4 = _this3->a;
HXDLIN( 112)			Float py1 = (_this4 * (y - _this3->ty));
HXDLIN( 112)			Float _this5 = _this3->b;
HXDLIN( 112)			py = (((Float)((Float)1.0) / (Float)norm3) * (py1 + (_this5 * (_this3->tx - x))));
            		}
HXLINE( 114)		bool _hx_tmp;
HXDLIN( 114)		bool _hx_tmp1;
HXDLIN( 114)		bool _hx_tmp2;
HXDLIN( 114)		if ((px > (int)0)) {
HXLINE( 114)			_hx_tmp2 = (py > (int)0);
            		}
            		else {
HXLINE( 114)			_hx_tmp2 = false;
            		}
HXDLIN( 114)		if (_hx_tmp2) {
HXLINE( 114)			_hx_tmp1 = (px <= this->bitmapData->width);
            		}
            		else {
HXLINE( 114)			_hx_tmp1 = false;
            		}
HXDLIN( 114)		if (_hx_tmp1) {
HXLINE( 114)			_hx_tmp = (py <= this->bitmapData->height);
            		}
            		else {
HXLINE( 114)			_hx_tmp = false;
            		}
HXDLIN( 114)		if (_hx_tmp) {
HXLINE( 116)			return true;
            		}
HXLINE( 120)		return false;
            	}


void Bitmap_obj::_hx___renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_128___renderCairo)
HXLINE( 128)		bool _hx_tmp;
HXDLIN( 128)		if (!(!(this->_hx___renderable))) {
HXLINE( 128)			_hx_tmp = (this->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE( 128)			_hx_tmp = true;
            		}
HXDLIN( 128)		if (!(_hx_tmp)) {
HXLINE( 128)			 ::lime::graphics::cairo::Cairo cairo = renderSession->cairo;
HXDLIN( 128)			bool _hx_tmp1;
HXDLIN( 128)			if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 128)				_hx_tmp1 = this->bitmapData->_hx___isValid;
            			}
            			else {
HXLINE( 128)				_hx_tmp1 = false;
            			}
HXDLIN( 128)			if (_hx_tmp1) {
HXLINE( 128)				renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
HXDLIN( 128)				 ::openfl::geom::Matrix transform = this->_hx___renderTransform;
HXDLIN( 128)				if (renderSession->roundPixels) {
HXLINE( 128)					 ::lime::math::Matrix3 matrix = transform->_hx___toMatrix3();
HXDLIN( 128)					matrix->tx = ::Math_obj::round(matrix->tx);
HXDLIN( 128)					matrix->ty = ::Math_obj::round(matrix->ty);
HXDLIN( 128)					cairo->set_matrix(matrix);
            				}
            				else {
HXLINE( 128)					cairo->set_matrix(transform->_hx___toMatrix3());
            				}
HXDLIN( 128)				 ::Dynamic surface = this->bitmapData->getSurface();
HXDLIN( 128)				if (hx::IsNotNull( surface )) {
HXLINE( 128)					 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 128)					int _hx_tmp2;
HXDLIN( 128)					bool _hx_tmp3;
HXDLIN( 128)					if (renderSession->allowSmoothing) {
HXLINE( 128)						_hx_tmp3 = this->smoothing;
            					}
            					else {
HXLINE( 128)						_hx_tmp3 = false;
            					}
HXDLIN( 128)					if (_hx_tmp3) {
HXLINE( 128)						_hx_tmp2 = (int)1;
            					}
            					else {
HXLINE( 128)						_hx_tmp2 = (int)3;
            					}
HXDLIN( 128)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp2);
HXDLIN( 128)					cairo->set_source(pattern);
HXDLIN( 128)					if ((this->_hx___worldAlpha == (int)1)) {
HXLINE( 128)						cairo->paint();
            					}
            					else {
HXLINE( 128)						cairo->paintWithAlpha(this->_hx___worldAlpha);
            					}
            				}
HXDLIN( 128)				renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
            			}
            		}
            	}


void Bitmap_obj::_hx___renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_136___renderCairoMask)
HXLINE( 136)		 ::lime::graphics::cairo::Cairo renderSession1 = renderSession->cairo;
HXDLIN( 136)		Float _hx_tmp = this->get_width();
HXDLIN( 136)		renderSession1->rectangle((int)0,(int)0,_hx_tmp,this->get_height());
            	}


void Bitmap_obj::_hx___renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_143___renderCanvas)
            	}


void Bitmap_obj::_hx___renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_150___renderCanvasMask)
HXLINE( 150)		 ::lime::graphics::CanvasRenderContext renderSession1 = renderSession->context;
HXDLIN( 150)		Float _hx_tmp = this->get_width();
HXDLIN( 150)		renderSession1->rect((int)0,(int)0,_hx_tmp,this->get_height());
            	}


void Bitmap_obj::_hx___renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_155___renderDOM)
            	}


void Bitmap_obj::_hx___renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_166___renderGL)
HXLINE( 166)		bool _hx_tmp;
HXDLIN( 166)		if (!(!(this->_hx___renderable))) {
HXLINE( 166)			_hx_tmp = (this->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE( 166)			_hx_tmp = true;
            		}
HXDLIN( 166)		if (!(_hx_tmp)) {
HXLINE( 166)			bool _hx_tmp1;
HXDLIN( 166)			if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 166)				_hx_tmp1 = this->bitmapData->_hx___isValid;
            			}
            			else {
HXLINE( 166)				_hx_tmp1 = false;
            			}
HXDLIN( 166)			if (_hx_tmp1) {
HXLINE( 166)				 ::openfl::_internal::renderer::opengl::GLRenderer renderer = ( ( ::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer) );
HXDLIN( 166)				 ::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
HXDLIN( 166)				 ::openfl::_internal::renderer::AbstractBlendModeManager renderSession1 = renderSession->blendModeManager;
HXDLIN( 166)				renderSession1->setBlendMode(this->get_blendMode());
HXDLIN( 166)				renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
HXDLIN( 166)				 ::openfl::display::Shader shader = renderSession->filterManager->pushObject(hx::ObjectPtr<OBJ_>(this));
HXDLIN( 166)				shader->get_data()->uImage0->input = this->bitmapData;
HXDLIN( 166)				bool _hx_tmp2;
HXDLIN( 166)				if (renderSession->allowSmoothing) {
HXLINE( 166)					if (!(this->smoothing)) {
HXLINE( 166)						_hx_tmp2 = renderSession->upscaled;
            					}
            					else {
HXLINE( 166)						_hx_tmp2 = true;
            					}
            				}
            				else {
HXLINE( 166)					_hx_tmp2 = false;
            				}
HXDLIN( 166)				shader->get_data()->uImage0->smoothing = _hx_tmp2;
HXDLIN( 166)				shader->get_data()->uMatrix->value = renderer->getMatrix(this->_hx___renderTransform);
HXDLIN( 166)				renderSession->shaderManager->setShader(shader);
HXDLIN( 166)				int gl1 = gl->ARRAY_BUFFER;
HXDLIN( 166)				gl->bindBuffer(gl1,this->bitmapData->getBuffer(gl,this->_hx___worldAlpha));
HXDLIN( 166)				gl->vertexAttribPointer(shader->get_data()->aPosition->index,(int)3,gl->FLOAT,false,(int)24,(int)0);
HXDLIN( 166)				gl->vertexAttribPointer(shader->get_data()->aTexCoord->index,(int)2,gl->FLOAT,false,(int)24,(int)12);
HXDLIN( 166)				gl->vertexAttribPointer(shader->get_data()->aAlpha->index,(int)1,gl->FLOAT,false,(int)24,(int)20);
HXDLIN( 166)				gl->drawArrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
HXDLIN( 166)				renderSession->filterManager->popObject(hx::ObjectPtr<OBJ_>(this));
HXDLIN( 166)				renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
            			}
            		}
            	}


void Bitmap_obj::_hx___updateMask( ::openfl::display::Graphics maskGraphics){
            	HX_GC_STACKFRAME(&_hx_pos_f5857023424199a6_171___updateMask)
HXLINE( 173)		if (hx::IsNull( this->bitmapData )) {
HXLINE( 175)			return;
            		}
HXLINE( 179)		maskGraphics->_hx___commands->overrideMatrix(this->_hx___worldTransform);
HXLINE( 180)		maskGraphics->beginFill((int)0,null());
HXLINE( 181)		maskGraphics->drawRect((int)0,(int)0,this->bitmapData->width,this->bitmapData->height);
HXLINE( 183)		if (hx::IsNull( maskGraphics->_hx___bounds )) {
HXLINE( 185)			maskGraphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 189)		this->_hx___getBounds(maskGraphics->_hx___bounds,::openfl::geom::Matrix_obj::_hx___identity);
HXLINE( 191)		this->super::_hx___updateMask(maskGraphics);
            	}


 ::openfl::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_202_set_bitmapData)
HXLINE( 204)		this->bitmapData = value;
HXLINE( 205)		this->smoothing = false;
HXLINE( 207)		bool _hx_tmp;
HXDLIN( 207)		if (hx::IsNotNull( this->_hx___filters )) {
HXLINE( 207)			_hx_tmp = (this->_hx___filters->length > (int)0);
            		}
            		else {
HXLINE( 207)			_hx_tmp = false;
            		}
HXLINE( 217)		return this->bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

Float Bitmap_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_222_get_height)
HXLINE( 224)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 226)			int _hx_tmp = this->bitmapData->height;
HXDLIN( 226)			return (_hx_tmp * ::Math_obj::abs(this->get_scaleY()));
            		}
HXLINE( 230)		return (int)0;
            	}


Float Bitmap_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_235_set_height)
HXLINE( 237)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 239)			if ((value != this->bitmapData->height)) {
HXLINE( 241)				this->set_scaleY(((Float)value / (Float)this->bitmapData->height));
            			}
HXLINE( 245)			return value;
            		}
HXLINE( 249)		return (int)0;
            	}


Float Bitmap_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_254_get_width)
HXLINE( 256)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 258)			int _hx_tmp = this->bitmapData->width;
HXDLIN( 258)			return (_hx_tmp * ::Math_obj::abs(this->_hx___scaleX));
            		}
HXLINE( 262)		return (int)0;
            	}


Float Bitmap_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_267_set_width)
HXLINE( 269)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 271)			if ((value != this->bitmapData->width)) {
HXLINE( 273)				this->set_scaleX(((Float)value / (Float)this->bitmapData->width));
            			}
HXLINE( 277)			return value;
            		}
HXLINE( 281)		return (int)0;
            	}



hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing) {
	hx::ObjectPtr< Bitmap_obj > __this = new Bitmap_obj();
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing) {
	Bitmap_obj *__this = (Bitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bitmap_obj), true, "openfl.display.Bitmap"));
	*(void **)__this = Bitmap_obj::_hx_vtable;
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return hx::Val( smoothing); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return hx::Val( _hx___hitTest_dyn()); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn()); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return hx::Val( set_width_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return hx::Val( bitmapData); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return hx::Val( _hx___renderGL_dyn()); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn()); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return hx::Val( set_height_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return hx::Val( _hx___getBounds_dyn()); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return hx::Val( _hx___renderDOM_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return hx::Val( _hx___updateMask_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return hx::Val( pixelSnapping); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return hx::Val( _hx___hitTestMask_dyn()); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return hx::Val( _hx___renderCairo_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return hx::Val( _hx___renderCanvas_dyn()); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return hx::Val( set_bitmapData_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return hx::Val( _hx___renderCairoMask_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return hx::Val( _hx___renderCanvasMask_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Bitmap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bitmapData(inValue) );bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Bitmap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Bitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String Bitmap_obj_sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	::String(null()) };

static void Bitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Bitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Object *dummy = new Bitmap_obj;
	Bitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Bitmap","\xd9","\x2f","\x4d","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Bitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Bitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Bitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display