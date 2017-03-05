// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_34_new,"openfl.display.Loader","new",0x0b8c4b6f,"openfl.display.Loader.new","openfl/display/Loader.hx",34,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_45_close,"openfl.display.Loader","close",0xeefbb487,"openfl.display.Loader.close","openfl/display/Loader.hx",45,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_50_load,"openfl.display.Loader","load",0x0deacc37,"openfl.display.Loader.load","openfl/display/Loader.hx",50,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_119_loadBytes,"openfl.display.Loader","loadBytes",0x5dd804b4,"openfl.display.Loader.loadBytes","openfl/display/Loader.hx",119,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_126_unload,"openfl.display.Loader","unload",0x847d3950,"openfl.display.Loader.unload","openfl/display/Loader.hx",126,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_150_unloadAndStop,"openfl.display.Loader","unloadAndStop",0x25cb8709,"openfl.display.Loader.unloadAndStop","openfl/display/Loader.hx",150,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_179___dispatchError,"openfl.display.Loader","__dispatchError",0xdd48591d,"openfl.display.Loader.__dispatchError","openfl/display/Loader.hx",179,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_197_BitmapData_onError,"openfl.display.Loader","BitmapData_onError",0x2d70cc54,"openfl.display.Loader.BitmapData_onError","openfl/display/Loader.hx",197,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_202_BitmapData_onLoad,"openfl.display.Loader","BitmapData_onLoad",0x9c5aef1a,"openfl.display.Loader.BitmapData_onLoad","openfl/display/Loader.hx",202,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_213_BitmapData_onProgress,"openfl.display.Loader","BitmapData_onProgress",0x8ecdd6a1,"openfl.display.Loader.BitmapData_onProgress","openfl/display/Loader.hx",213,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_223_loader_onComplete,"openfl.display.Loader","loader_onComplete",0xf5bb9433,"openfl.display.Loader.loader_onComplete","openfl/display/Loader.hx",223,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_280_loader_onError,"openfl.display.Loader","loader_onError",0x53aca80e,"openfl.display.Loader.loader_onError","openfl/display/Loader.hx",280,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_288_loader_onProgress,"openfl.display.Loader","loader_onProgress",0xfc1e8b27,"openfl.display.Loader.loader_onProgress","openfl/display/Loader.hx",288,0x7a569d9f)
namespace openfl{
namespace display{

void Loader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_34_new)
HXLINE(  36)		super::__construct();
HXLINE(  38)		this->contentLoaderInfo = ::openfl::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic Loader_obj::__CreateEmpty() { return new Loader_obj; }

void *Loader_obj::_hx_vtable = 0;

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Loader_obj > _hx_result = new Loader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Loader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19c29573) {
			if (inClassId<=(int)0x17120186) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x17120186;
			} else {
				return inClassId==(int)0x19c29573;
			}
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x3248531d || inClassId==(int)0x3f2b00af;
	}
}

void Loader_obj::close(){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_45_close)
HXLINE(  45)		::openfl::Lib_obj::notImplemented(hx::SourceInfo(HX_("Loader.hx",6b,e8,d2,9c),45,HX_("openfl.display.Loader",fd,67,b0,e2),HX_("close",b8,17,63,48)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,close,(void))

void Loader_obj::load( ::openfl::net::URLRequest request, ::openfl::_hx_system::LoaderContext context){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_50_load)
HXLINE(  52)		this->contentLoaderInfo->url = request->url;
HXLINE(  54)		bool _hx_tmp;
HXDLIN(  54)		if (hx::IsNotNull( request->contentType )) {
HXLINE(  54)			_hx_tmp = (request->contentType == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  54)			_hx_tmp = true;
            		}
HXDLIN(  54)		if (_hx_tmp) {
HXLINE(  56)			::String extension = HX_("",00,00,00,00);
HXLINE(  57)			::String path = request->url;
HXLINE(  59)			int queryIndex = path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE(  60)			if ((queryIndex > (int)-1)) {
HXLINE(  62)				path = path.substring((int)0,queryIndex);
            			}
HXLINE(  66)			int extIndex = path.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE(  67)			if ((extIndex > (int)-1)) {
HXLINE(  69)				extension = path.substring((extIndex + (int)1),null());
            			}
HXLINE(  73)			::String _hx_tmp1;
HXDLIN(  73)			::String _hx_switch_0 = extension;
            			if (  (_hx_switch_0==HX_("gif",04,84,4e,00)) ){
HXLINE(  73)				_hx_tmp1 = HX_("image/gif",10,f4,ba,16);
HXDLIN(  73)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("jpeg",a8,f2,65,46)) ||  (_hx_switch_0==HX_("jpg",e1,d0,50,00)) ){
HXLINE(  73)				_hx_tmp1 = HX_("image/jpeg",1c,8d,db,ce);
HXDLIN(  73)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("js",c9,5c,00,00)) ){
HXLINE(  73)				_hx_tmp1 = HX_("application/javascript",cc,7a,f4,a7);
HXDLIN(  73)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("json",28,42,68,46)) ){
HXLINE(  73)				_hx_tmp1 = HX_("application/json",87,d8,7f,4e);
HXDLIN(  73)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("png",a9,5c,55,00)) ){
HXLINE(  73)				_hx_tmp1 = HX_("image/png",b5,cc,c1,16);
HXDLIN(  73)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("swf",42,ab,57,00)) ){
HXLINE(  73)				_hx_tmp1 = HX_("application/x-shockwave-flash",ea,f3,47,4a);
HXDLIN(  73)				goto _hx_goto_2;
            			}
            			/* default */{
HXLINE(  73)				_hx_tmp1 = HX_("application/x-www-form-urlencoded",9e,61,91,fa);
            			}
            			_hx_goto_2:;
HXDLIN(  73)			this->contentLoaderInfo->contentType = _hx_tmp1;
            		}
            		else {
HXLINE(  87)			this->contentLoaderInfo->contentType = request->contentType;
            		}
HXLINE( 100)		 ::openfl::net::URLLoader loader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 101)		loader->dataFormat = (int)0;
HXLINE( 103)		bool _hx_tmp2;
HXDLIN( 103)		bool _hx_tmp3;
HXDLIN( 103)		if ((this->contentLoaderInfo->contentType.indexOf(HX_("/json",d7,85,3d,56),null()) <= (int)-1)) {
HXLINE( 103)			_hx_tmp3 = (this->contentLoaderInfo->contentType.indexOf(HX_("/javascript",1c,04,67,9b),null()) > (int)-1);
            		}
            		else {
HXLINE( 103)			_hx_tmp3 = true;
            		}
HXDLIN( 103)		if (!(_hx_tmp3)) {
HXLINE( 103)			_hx_tmp2 = (this->contentLoaderInfo->contentType.indexOf(HX_("/ecmascript",ac,7b,0f,7d),null()) > (int)-1);
            		}
            		else {
HXLINE( 103)			_hx_tmp2 = true;
            		}
HXDLIN( 103)		if (_hx_tmp2) {
HXLINE( 105)			loader->dataFormat = (int)1;
            		}
HXLINE( 109)		loader->addEventListener(HX_("complete",b9,00,c8,7f),this->loader_onComplete_dyn(),null(),null(),null());
HXLINE( 110)		loader->addEventListener(HX_("ioError",02,fe,41,76),this->loader_onError_dyn(),null(),null(),null());
HXLINE( 111)		loader->addEventListener(HX_("progress",ad,f7,2a,86),this->loader_onProgress_dyn(),null(),null(),null());
HXLINE( 112)		loader->load(request);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

void Loader_obj::loadBytes( ::openfl::utils::ByteArrayData buffer, ::openfl::_hx_system::LoaderContext context){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_119_loadBytes)
HXLINE( 119)		::openfl::display::BitmapData_obj::loadFromBytes(buffer,null())->onComplete(this->BitmapData_onLoad_dyn())->onError(this->BitmapData_onError_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

void Loader_obj::unload(){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_126_unload)
HXLINE( 126)		if ((this->get_numChildren() > (int)0)) {
HXLINE( 128)			while((this->get_numChildren() > (int)0)){
HXLINE( 130)				this->removeChildAt((int)0);
            			}
HXLINE( 134)			this->content = null();
HXLINE( 135)			this->contentLoaderInfo->url = null();
HXLINE( 136)			this->contentLoaderInfo->contentType = null();
HXLINE( 137)			this->contentLoaderInfo->content = null();
HXLINE( 138)			this->contentLoaderInfo->bytesLoaded = (int)0;
HXLINE( 139)			this->contentLoaderInfo->bytesTotal = (int)0;
HXLINE( 140)			this->contentLoaderInfo->width = (int)0;
HXLINE( 141)			this->contentLoaderInfo->height = (int)0;
HXLINE( 143)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("unload",ff,a0,8c,65),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

void Loader_obj::unloadAndStop(hx::Null< bool >  __o_gc){
bool gc = __o_gc.Default(true);
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_150_unloadAndStop)
HXLINE( 152)		if (hx::IsNotNull( this->content )) {
HXLINE( 154)			this->content->_hx___stopAllMovieClips();
            		}
HXLINE( 158)		{
HXLINE( 158)			int _g1 = (int)0;
HXDLIN( 158)			int _g = this->get_numChildren();
HXDLIN( 158)			while((_g1 < _g)){
HXLINE( 158)				_g1 = (_g1 + (int)1);
HXDLIN( 158)				int i = (_g1 - (int)1);
HXLINE( 160)				this->getChildAt(i)->_hx___stopAllMovieClips();
            			}
            		}
HXLINE( 164)		this->unload();
HXLINE( 166)		if (gc) {
HXLINE( 169)			::cpp::vm::Gc_obj::run(false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,unloadAndStop,(void))

void Loader_obj::_hx___dispatchError(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_179___dispatchError)
HXLINE( 181)		 ::openfl::events::IOErrorEvent event =  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null());
HXLINE( 182)		event->text = text;
HXLINE( 183)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,_hx___dispatchError,(void))

void Loader_obj::BitmapData_onError( ::Dynamic error){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_197_BitmapData_onError)
HXLINE( 197)		this->_hx___dispatchError(::Std_obj::string(error));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onError,(void))

void Loader_obj::BitmapData_onLoad( ::openfl::display::BitmapData bitmapData){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_202_BitmapData_onLoad)
HXLINE( 204)		this->contentLoaderInfo->content =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,bitmapData,null(),null());
HXLINE( 205)		this->content = this->contentLoaderInfo->content;
HXLINE( 206)		this->addChild(this->content);
HXLINE( 208)		 ::openfl::display::LoaderInfo _hx_tmp = this->contentLoaderInfo;
HXDLIN( 208)		_hx_tmp->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onLoad,(void))

void Loader_obj::BitmapData_onProgress(int bytesLoaded,int bytesTotal){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_213_BitmapData_onProgress)
HXLINE( 215)		 ::openfl::events::ProgressEvent event =  ::openfl::events::ProgressEvent_obj::__alloc( HX_CTX ,HX_("progress",ad,f7,2a,86),null(),null(),null(),null());
HXLINE( 216)		event->bytesLoaded = bytesLoaded;
HXLINE( 217)		event->bytesTotal = bytesTotal;
HXLINE( 218)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,BitmapData_onProgress,(void))

void Loader_obj::loader_onComplete( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_223_loader_onComplete)
HXLINE( 225)		 ::openfl::net::URLLoader loader = ( ( ::openfl::net::URLLoader)(event->target) );
HXLINE( 227)		if ((this->contentLoaderInfo->contentType.indexOf(HX_("/json",d7,85,3d,56),null()) > (int)-1)) {
HXLINE( 229)			 ::lime::utils::AssetManifest manifest = ::lime::utils::AssetManifest_obj::parse(( (::String)(loader->data) ));
HXLINE( 231)			if (hx::IsNull( manifest )) {
HXLINE( 233)				this->_hx___dispatchError(HX_("Cannot parse asset manifest",49,e5,68,e9));
HXLINE( 234)				return;
            			}
HXLINE( 238)			 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 240)			if (hx::IsNull( library )) {
HXLINE( 242)				this->_hx___dispatchError(HX_("Cannot open library",c2,bb,9d,77));
HXLINE( 243)				return;
            			}
HXLINE( 247)			if (::Std_obj::is(library,hx::ClassOf< ::openfl::AssetLibrary >())) {
HXLINE( 249)				this->contentLoaderInfo->content = hx::TCast<  ::openfl::AssetLibrary >::cast(library)->getMovieClip(HX_("",00,00,00,00));
HXLINE( 250)				this->addChild(this->contentLoaderInfo->content);
HXLINE( 252)				 ::openfl::display::LoaderInfo _hx_tmp = this->contentLoaderInfo;
HXDLIN( 252)				_hx_tmp->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            			}
            		}
            		else {
HXLINE( 256)			bool _hx_tmp1;
HXDLIN( 256)			if ((this->contentLoaderInfo->contentType.indexOf(HX_("/javascript",1c,04,67,9b),null()) <= (int)-1)) {
HXLINE( 256)				_hx_tmp1 = (this->contentLoaderInfo->contentType.indexOf(HX_("/ecmascript",ac,7b,0f,7d),null()) > (int)-1);
            			}
            			else {
HXLINE( 256)				_hx_tmp1 = true;
            			}
HXDLIN( 256)			if (_hx_tmp1) {
HXLINE( 258)				this->contentLoaderInfo->content =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 259)				this->addChild(this->contentLoaderInfo->content);
HXLINE( 269)				 ::openfl::display::LoaderInfo _hx_tmp2 = this->contentLoaderInfo;
HXDLIN( 269)				_hx_tmp2->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            			}
            			else {
HXLINE( 273)				::openfl::display::BitmapData_obj::loadFromBytes(( ( ::openfl::utils::ByteArrayData)(loader->data) ),null())->onComplete(this->BitmapData_onLoad_dyn())->onError(this->BitmapData_onError_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onComplete,(void))

void Loader_obj::loader_onError( ::openfl::events::IOErrorEvent event){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_280_loader_onError)
HXLINE( 282)		event->target = this->contentLoaderInfo;
HXLINE( 283)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onError,(void))

void Loader_obj::loader_onProgress( ::openfl::events::ProgressEvent event){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_288_loader_onProgress)
HXLINE( 290)		event->target = this->contentLoaderInfo;
HXLINE( 291)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onProgress,(void))


hx::ObjectPtr< Loader_obj > Loader_obj::__new() {
	hx::ObjectPtr< Loader_obj > __this = new Loader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Loader_obj > Loader_obj::__alloc(hx::Ctx *_hx_ctx) {
	Loader_obj *__this = (Loader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Loader_obj), true, "openfl.display.Loader"));
	*(void **)__this = Loader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	 ::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	 ::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return hx::Val( unload_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return hx::Val( content); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return hx::Val( loadBytes_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadAndStop") ) { return hx::Val( unloadAndStop_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loader_onError") ) { return hx::Val( loader_onError_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__dispatchError") ) { return hx::Val( _hx___dispatchError_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return hx::Val( contentLoaderInfo); }
		if (HX_FIELD_EQ(inName,"BitmapData_onLoad") ) { return hx::Val( BitmapData_onLoad_dyn()); }
		if (HX_FIELD_EQ(inName,"loader_onComplete") ) { return hx::Val( loader_onComplete_dyn()); }
		if (HX_FIELD_EQ(inName,"loader_onProgress") ) { return hx::Val( loader_onProgress_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BitmapData_onError") ) { return hx::Val( BitmapData_onError_dyn()); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"BitmapData_onProgress") ) { return hx::Val( BitmapData_onProgress_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Loader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast<  ::openfl::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Loader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Loader_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Loader_obj_sStaticStorageInfo = 0;
#endif

static ::String Loader_obj_sMemberFields[] = {
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("unloadAndStop","\x3a","\x03","\x03","\x7a"),
	HX_HCSTRING("__dispatchError","\x8e","\x03","\x7c","\x4b"),
	HX_HCSTRING("BitmapData_onError","\x83","\x7e","\x14","\x0a"),
	HX_HCSTRING("BitmapData_onLoad","\xcb","\xd7","\xa2","\xbe"),
	HX_HCSTRING("BitmapData_onProgress","\xd2","\x6b","\x16","\xc1"),
	HX_HCSTRING("loader_onComplete","\xe4","\x7c","\x03","\x18"),
	HX_HCSTRING("loader_onError","\xbd","\xd6","\x01","\xb0"),
	HX_HCSTRING("loader_onProgress","\xd8","\x73","\x66","\x1e"),
	::String(null()) };

static void Loader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Loader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

hx::Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Object *dummy = new Loader_obj;
	Loader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Loader","\xfd","\x67","\xb0","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Loader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Loader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Loader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Loader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Loader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
