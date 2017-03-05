// Generated by Haxe 3.4.0
#ifndef INCLUDED_DefaultAssetLibrary
#define INCLUDED_DefaultAssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
HX_DECLARE_CLASS0(DefaultAssetLibrary)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)



class HXCPP_CLASS_ATTRIBUTES DefaultAssetLibrary_obj : public  ::lime::utils::AssetLibrary_obj
{
	public:
		typedef  ::lime::utils::AssetLibrary_obj super;
		typedef DefaultAssetLibrary_obj OBJ_;
		DefaultAssetLibrary_obj();

	public:
		enum { _hx_ClassId = 0x3a783d2c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DefaultAssetLibrary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"DefaultAssetLibrary"); }
		static hx::ObjectPtr< DefaultAssetLibrary_obj > __new();
		static hx::ObjectPtr< DefaultAssetLibrary_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultAssetLibrary_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"); }

		Float lastModified;
		::String rootPath;
		 ::haxe::Timer timer;
		void loadManifest();
		::Dynamic loadManifest_dyn();

};


#endif /* INCLUDED_DefaultAssetLibrary */ 