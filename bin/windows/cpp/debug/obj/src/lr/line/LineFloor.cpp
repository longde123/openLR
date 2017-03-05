// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lr_line_LineBase
#include <lr/line/LineBase.h>
#endif
#ifndef INCLUDED_lr_line_LineFloor
#include <lr/line/LineFloor.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display__CapsStyle_CapsStyle_Impl_
#include <openfl/display/_CapsStyle/CapsStyle_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display__LineScaleMode_LineScaleMode_Impl_
#include <openfl/display/_LineScaleMode/LineScaleMode_Impl_.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_67f2f2f3fefeb1e4_14_new,"lr.line.LineFloor","new",0x2b7d88f8,"lr.line.LineFloor.new","lr/line/LineFloor.hx",14,0x63d129d8)
HX_LOCAL_STACK_FRAME(_hx_pos_67f2f2f3fefeb1e4_24_render,"lr.line.LineFloor","render",0x7d5b21be,"lr.line.LineFloor.render","lr/line/LineFloor.hx",24,0x63d129d8)
namespace lr{
namespace line{

void LineFloor_obj::__construct( ::openfl::geom::Point _a, ::openfl::geom::Point _b,bool _inv,hx::Null< int >  __o__lim){
int _lim = __o__lim.Default(-1);
            	HX_STACKFRAME(&_hx_pos_67f2f2f3fefeb1e4_14_new)
HXLINE(  15)		super::__construct();
HXLINE(  16)		this->type = (int)0;
HXLINE(  17)		this->a = _a;
HXLINE(  18)		this->b = _b;
HXLINE(  19)		this->inv = _inv;
HXLINE(  20)		this->calculateConstants();
HXLINE(  21)		int _hx_tmp;
HXDLIN(  21)		if ((_lim == (int)-1)) {
HXLINE(  21)			_hx_tmp = (int)0;
            		}
            		else {
HXLINE(  21)			_hx_tmp = _lim;
            		}
HXDLIN(  21)		this->set_lim(_hx_tmp);
            	}

Dynamic LineFloor_obj::__CreateEmpty() { return new LineFloor_obj; }

void *LineFloor_obj::_hx_vtable = 0;

Dynamic LineFloor_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LineFloor_obj > _hx_result = new LineFloor_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool LineFloor_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
		}
	} else {
		if (inClassId<=(int)0x694ebede) {
			if (inClassId<=(int)0x3f2b00af) {
				return inClassId==(int)0x21e31f0e || inClassId==(int)0x3f2b00af;
			} else {
				return inClassId==(int)0x694ebede;
			}
		} else {
			return inClassId==(int)0x7d38c33f;
		}
	}
}

void LineFloor_obj::render(){
            	HX_STACKFRAME(&_hx_pos_67f2f2f3fefeb1e4_24_render)
HXLINE(  25)		Float _loc_3;
HXLINE(  26)		Float _loc_4;
HXLINE(  27)		this->get_graphics()->clear();
HXLINE(  28)		if ((this->n->x > (int)0)) {
HXLINE(  28)			_loc_3 = ::Math_obj::ceil(this->n->x);
            		}
            		else {
HXLINE(  28)			_loc_3 = ::Math_obj::floor(this->n->x);
            		}
HXLINE(  29)		if ((this->n->y > (int)0)) {
HXLINE(  29)			_loc_4 = ::Math_obj::ceil(this->n->y);
            		}
            		else {
HXLINE(  29)			_loc_4 = ::Math_obj::floor(this->n->y);
            		}
HXLINE(  30)		 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN(  30)		 ::Dynamic _hx_tmp1 = ::openfl::display::_LineScaleMode::LineScaleMode_Impl__obj::fromString(HX_("normal",27,72,69,30));
HXDLIN(  30)		_hx_tmp->lineStyle((int)2,(int)26367,(int)1,true,_hx_tmp1,::openfl::display::_CapsStyle::CapsStyle_Impl__obj::fromString(HX_("round",4e,f8,65,ed)),null(),null());
HXLINE(  31)		 ::openfl::display::Graphics _hx_tmp2 = this->get_graphics();
HXDLIN(  31)		Float _hx_tmp3 = (this->a->x + _loc_3);
HXDLIN(  31)		_hx_tmp2->moveTo(_hx_tmp3,(this->a->y + _loc_4));
HXLINE(  32)		 ::openfl::display::Graphics _hx_tmp4 = this->get_graphics();
HXDLIN(  32)		Float _hx_tmp5 = (this->b->x + _loc_3);
HXDLIN(  32)		_hx_tmp4->lineTo(_hx_tmp5,(this->b->y + _loc_4));
HXLINE(  33)		 ::openfl::display::Graphics _hx_tmp6 = this->get_graphics();
HXDLIN(  33)		 ::Dynamic _hx_tmp7 = ::openfl::display::_LineScaleMode::LineScaleMode_Impl__obj::fromString(HX_("normal",27,72,69,30));
HXDLIN(  33)		_hx_tmp6->lineStyle((int)2,(int)0,(int)1,true,_hx_tmp7,::openfl::display::_CapsStyle::CapsStyle_Impl__obj::fromString(HX_("round",4e,f8,65,ed)),null(),null());
HXLINE(  34)		this->get_graphics()->moveTo(this->a->x,this->a->y);
HXLINE(  35)		this->get_graphics()->lineTo(this->b->x,this->b->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LineFloor_obj,render,(void))


hx::ObjectPtr< LineFloor_obj > LineFloor_obj::__new( ::openfl::geom::Point _a, ::openfl::geom::Point _b,bool _inv,hx::Null< int >  __o__lim) {
	hx::ObjectPtr< LineFloor_obj > __this = new LineFloor_obj();
	__this->__construct(_a,_b,_inv,__o__lim);
	return __this;
}

hx::ObjectPtr< LineFloor_obj > LineFloor_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::geom::Point _a, ::openfl::geom::Point _b,bool _inv,hx::Null< int >  __o__lim) {
	LineFloor_obj *__this = (LineFloor_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LineFloor_obj), true, "lr.line.LineFloor"));
	*(void **)__this = LineFloor_obj::_hx_vtable;
	__this->__construct(_a,_b,_inv,__o__lim);
	return __this;
}

LineFloor_obj::LineFloor_obj()
{
}

hx::Val LineFloor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LineFloor_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LineFloor_obj_sStaticStorageInfo = 0;
#endif

static ::String LineFloor_obj_sMemberFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void LineFloor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineFloor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineFloor_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineFloor_obj::__mClass,"__mClass");
};

#endif

hx::Class LineFloor_obj::__mClass;

void LineFloor_obj::__register()
{
	hx::Object *dummy = new LineFloor_obj;
	LineFloor_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lr.line.LineFloor","\x06","\xed","\x5f","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LineFloor_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LineFloor_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LineFloor_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineFloor_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineFloor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineFloor_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lr
} // end namespace line
