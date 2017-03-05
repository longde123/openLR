// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime_media_ALAudioContext
#define INCLUDED_lime_media_ALAudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,media,ALAudioContext)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace media{


class HXCPP_CLASS_ATTRIBUTES ALAudioContext_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ALAudioContext_obj OBJ_;
		ALAudioContext_obj();

	public:
		enum { _hx_ClassId = 0x0d4f75b3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.media.ALAudioContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.media.ALAudioContext"); }
		static hx::ObjectPtr< ALAudioContext_obj > __new();
		static hx::ObjectPtr< ALAudioContext_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALAudioContext_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ALAudioContext","\x44","\x65","\x2c","\x10"); }

		int NONE;
		int FALSE;
		int TRUE;
		int SOURCE_RELATIVE;
		int CONE_INNER_ANGLE;
		int CONE_OUTER_ANGLE;
		int PITCH;
		int POSITION;
		int DIRECTION;
		int VELOCITY;
		int LOOPING;
		int BUFFER;
		int GAIN;
		int MIN_GAIN;
		int MAX_GAIN;
		int ORIENTATION;
		int SOURCE_STATE;
		int INITIAL;
		int PLAYING;
		int PAUSED;
		int STOPPED;
		int BUFFERS_QUEUED;
		int BUFFERS_PROCESSED;
		int REFERENCE_DISTANCE;
		int ROLLOFF_FACTOR;
		int CONE_OUTER_GAIN;
		int MAX_DISTANCE;
		int SEC_OFFSET;
		int SAMPLE_OFFSET;
		int BYTE_OFFSET;
		int SOURCE_TYPE;
		int STATIC;
		int STREAMING;
		int UNDETERMINED;
		int FORMAT_MONO8;
		int FORMAT_MONO16;
		int FORMAT_STEREO8;
		int FORMAT_STEREO16;
		int FREQUENCY;
		int BITS;
		int CHANNELS;
		int SIZE;
		int NO_ERROR;
		int INVALID_NAME;
		int INVALID_ENUM;
		int INVALID_VALUE;
		int INVALID_OPERATION;
		int OUT_OF_MEMORY;
		int VENDOR;
		int VERSION;
		int RENDERER;
		int EXTENSIONS;
		int DOPPLER_FACTOR;
		int SPEED_OF_SOUND;
		int DOPPLER_VELOCITY;
		int DISTANCE_MODEL;
		int INVERSE_DISTANCE;
		int INVERSE_DISTANCE_CLAMPED;
		int LINEAR_DISTANCE;
		int LINEAR_DISTANCE_CLAMPED;
		int EXPONENT_DISTANCE;
		int EXPONENT_DISTANCE_CLAMPED;
		void bufferData( ::Dynamic buffer,int format, ::lime::utils::ArrayBufferView data,int size,int freq);
		::Dynamic bufferData_dyn();

		void buffer3f( ::Dynamic buffer,int param,Float value1,Float value2,Float value3);
		::Dynamic buffer3f_dyn();

		void buffer3i( ::Dynamic buffer,int param,int value1,int value2,int value3);
		::Dynamic buffer3i_dyn();

		void bufferf( ::Dynamic buffer,int param,Float value);
		::Dynamic bufferf_dyn();

		void bufferfv( ::Dynamic buffer,int param,::Array< Float > values);
		::Dynamic bufferfv_dyn();

		void bufferi( ::Dynamic buffer,int param,int value);
		::Dynamic bufferi_dyn();

		void bufferiv( ::Dynamic buffer,int param,::Array< int > values);
		::Dynamic bufferiv_dyn();

		void deleteBuffer( ::Dynamic buffer);
		::Dynamic deleteBuffer_dyn();

		void deleteBuffers(::cpp::VirtualArray buffers);
		::Dynamic deleteBuffers_dyn();

		void deleteSource( ::Dynamic source);
		::Dynamic deleteSource_dyn();

		void deleteSources(::cpp::VirtualArray sources);
		::Dynamic deleteSources_dyn();

		void disable(int capability);
		::Dynamic disable_dyn();

		void distanceModel(int distanceModel);
		::Dynamic distanceModel_dyn();

		void dopplerFactor(Float value);
		::Dynamic dopplerFactor_dyn();

		void dopplerVelocity(Float value);
		::Dynamic dopplerVelocity_dyn();

		void enable(int capability);
		::Dynamic enable_dyn();

		 ::Dynamic genSource();
		::Dynamic genSource_dyn();

		::cpp::VirtualArray genSources(int n);
		::Dynamic genSources_dyn();

		 ::Dynamic genBuffer();
		::Dynamic genBuffer_dyn();

		::cpp::VirtualArray genBuffers(int n);
		::Dynamic genBuffers_dyn();

		bool getBoolean(int param);
		::Dynamic getBoolean_dyn();

		::Array< bool > getBooleanv(int param,hx::Null< int >  count);
		::Dynamic getBooleanv_dyn();

		::Array< Float > getBuffer3f( ::Dynamic buffer,int param);
		::Dynamic getBuffer3f_dyn();

		::Array< int > getBuffer3i( ::Dynamic buffer,int param);
		::Dynamic getBuffer3i_dyn();

		Float getBufferf( ::Dynamic buffer,int param);
		::Dynamic getBufferf_dyn();

		::Array< Float > getBufferfv( ::Dynamic buffer,int param,hx::Null< int >  count);
		::Dynamic getBufferfv_dyn();

		int getBufferi( ::Dynamic buffer,int param);
		::Dynamic getBufferi_dyn();

		::Array< int > getBufferiv( ::Dynamic buffer,int param,hx::Null< int >  count);
		::Dynamic getBufferiv_dyn();

		Float getDouble(int param);
		::Dynamic getDouble_dyn();

		::Array< Float > getDoublev(int param,hx::Null< int >  count);
		::Dynamic getDoublev_dyn();

		int getEnumValue(::String ename);
		::Dynamic getEnumValue_dyn();

		int getError();
		::Dynamic getError_dyn();

		::String getErrorString();
		::Dynamic getErrorString_dyn();

		Float getFloat(int param);
		::Dynamic getFloat_dyn();

		::Array< Float > getFloatv(int param,hx::Null< int >  count);
		::Dynamic getFloatv_dyn();

		int getInteger(int param);
		::Dynamic getInteger_dyn();

		::Array< int > getIntegerv(int param,hx::Null< int >  count);
		::Dynamic getIntegerv_dyn();

		::Array< Float > getListener3f(int param);
		::Dynamic getListener3f_dyn();

		::Array< int > getListener3i(int param);
		::Dynamic getListener3i_dyn();

		Float getListenerf(int param);
		::Dynamic getListenerf_dyn();

		::Array< Float > getListenerfv(int param,hx::Null< int >  count);
		::Dynamic getListenerfv_dyn();

		int getListeneri(int param);
		::Dynamic getListeneri_dyn();

		::Array< int > getListeneriv(int param,hx::Null< int >  count);
		::Dynamic getListeneriv_dyn();

		 ::Dynamic getProcAddress(::String fname);
		::Dynamic getProcAddress_dyn();

		::Array< Float > getSource3f( ::Dynamic source,int param);
		::Dynamic getSource3f_dyn();

		Float getSourcef( ::Dynamic source,int param);
		::Dynamic getSourcef_dyn();

		::Array< int > getSource3i( ::Dynamic source,int param);
		::Dynamic getSource3i_dyn();

		::Array< Float > getSourcefv( ::Dynamic source,int param,hx::Null< int >  count);
		::Dynamic getSourcefv_dyn();

		 ::Dynamic getSourcei( ::Dynamic source,int param);
		::Dynamic getSourcei_dyn();

		::Array< int > getSourceiv( ::Dynamic source,int param,hx::Null< int >  count);
		::Dynamic getSourceiv_dyn();

		::String getString(int param);
		::Dynamic getString_dyn();

		bool isBuffer( ::Dynamic buffer);
		::Dynamic isBuffer_dyn();

		bool isEnabled(int capability);
		::Dynamic isEnabled_dyn();

		bool isExtensionPresent(::String extname);
		::Dynamic isExtensionPresent_dyn();

		bool isSource( ::Dynamic source);
		::Dynamic isSource_dyn();

		void listener3f(int param,Float value1,Float value2,Float value3);
		::Dynamic listener3f_dyn();

		void listener3i(int param,int value1,int value2,int value3);
		::Dynamic listener3i_dyn();

		void listenerf(int param,Float value);
		::Dynamic listenerf_dyn();

		void listenerfv(int param,::Array< Float > values);
		::Dynamic listenerfv_dyn();

		void listeneri(int param,int value);
		::Dynamic listeneri_dyn();

		void listeneriv(int param,::Array< int > values);
		::Dynamic listeneriv_dyn();

		void source3f( ::Dynamic source,int param,Float value1,Float value2,Float value3);
		::Dynamic source3f_dyn();

		void source3i( ::Dynamic source,int param,int value1,int value2,int value3);
		::Dynamic source3i_dyn();

		void sourcef( ::Dynamic source,int param,Float value);
		::Dynamic sourcef_dyn();

		void sourcefv( ::Dynamic source,int param,::Array< Float > values);
		::Dynamic sourcefv_dyn();

		void sourcei( ::Dynamic source,int param, ::Dynamic value);
		::Dynamic sourcei_dyn();

		void sourceiv( ::Dynamic source,int param,::Array< int > values);
		::Dynamic sourceiv_dyn();

		void sourcePlay( ::Dynamic source);
		::Dynamic sourcePlay_dyn();

		void sourcePlayv(::cpp::VirtualArray sources);
		::Dynamic sourcePlayv_dyn();

		void sourceStop( ::Dynamic source);
		::Dynamic sourceStop_dyn();

		void sourceStopv(::cpp::VirtualArray sources);
		::Dynamic sourceStopv_dyn();

		void sourceRewind( ::Dynamic source);
		::Dynamic sourceRewind_dyn();

		void sourceRewindv(::cpp::VirtualArray sources);
		::Dynamic sourceRewindv_dyn();

		void sourcePause( ::Dynamic source);
		::Dynamic sourcePause_dyn();

		void sourcePausev(::cpp::VirtualArray sources);
		::Dynamic sourcePausev_dyn();

		void sourceQueueBuffer( ::Dynamic source, ::Dynamic buffer);
		::Dynamic sourceQueueBuffer_dyn();

		void sourceQueueBuffers( ::Dynamic source,int nb,::cpp::VirtualArray buffers);
		::Dynamic sourceQueueBuffers_dyn();

		int sourceUnqueueBuffer( ::Dynamic source);
		::Dynamic sourceUnqueueBuffer_dyn();

		::cpp::VirtualArray sourceUnqueueBuffers( ::Dynamic source,int nb);
		::Dynamic sourceUnqueueBuffers_dyn();

		void speedOfSound(Float value);
		::Dynamic speedOfSound_dyn();

};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_ALAudioContext */ 
