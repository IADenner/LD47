// Generated by Haxe 4.1.2
#ifndef INCLUDED_lime_media_AudioManager
#define INCLUDED_lime_media_AudioManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,media,AudioContext)
HX_DECLARE_CLASS2(lime,media,AudioManager)

namespace lime{
namespace media{


class HXCPP_CLASS_ATTRIBUTES AudioManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AudioManager_obj OBJ_;
		AudioManager_obj();

	public:
		enum { _hx_ClassId = 0x4a977a62 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.media.AudioManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.media.AudioManager"); }

		inline static ::hx::ObjectPtr< AudioManager_obj > __new() {
			::hx::ObjectPtr< AudioManager_obj > __this = new AudioManager_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AudioManager_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AudioManager_obj *__this = (AudioManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AudioManager_obj), false, "lime.media.AudioManager"));
			*(void **)__this = AudioManager_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AudioManager_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AudioManager",57,f4,4e,e7); }

		static  ::lime::media::AudioContext context;
		static void init( ::lime::media::AudioContext context);
		static ::Dynamic init_dyn();

		static void resume();
		static ::Dynamic resume_dyn();

		static void shutdown();
		static ::Dynamic shutdown_dyn();

		static void suspend();
		static ::Dynamic suspend_dyn();

};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_AudioManager */ 
