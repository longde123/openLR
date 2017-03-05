// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime_app_Preloader
#define INCLUDED_lime_app_Preloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Preloader_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Preloader_obj OBJ_;
		Preloader_obj();

	public:
		enum { _hx_ClassId = 0x669a9732 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app.Preloader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.app.Preloader"); }
		static hx::ObjectPtr< Preloader_obj > __new();
		static hx::ObjectPtr< Preloader_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Preloader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Preloader","\x56","\xc4","\x4e","\x24"); }

		bool complete;
		 ::lime::app::_Event_Void_Void onComplete;
		 ::lime::app::_Event_Int_Int_Void onProgress;
		int bytesLoaded;
		 ::haxe::ds::ObjectMap bytesLoadedCache;
		 ::haxe::ds::StringMap bytesLoadedCache2;
		int bytesTotal;
		 ::haxe::ds::StringMap bytesTotalCache;
		bool initLibraryNames;
		::Array< ::Dynamic> libraries;
		::Array< ::String > libraryNames;
		int loadedLibraries;
		bool loadedStage;
		bool preloadStarted;
		bool simulateProgress;
		void addLibrary( ::lime::utils::AssetLibrary library);
		::Dynamic addLibrary_dyn();

		void addLibraryName(::String name);
		::Dynamic addLibraryName_dyn();

		void create( ::Dynamic config);
		::Dynamic create_dyn();

		void load();
		::Dynamic load_dyn();

		void loadedAssetLibrary(::String name);
		::Dynamic loadedAssetLibrary_dyn();

		virtual void start();
		::Dynamic start_dyn();

		virtual void update(int loaded,int total);
		::Dynamic update_dyn();

		void updateProgress();
		::Dynamic updateProgress_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Preloader */ 
