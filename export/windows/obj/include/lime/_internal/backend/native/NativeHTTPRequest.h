// Generated by Haxe 4.1.2
#ifndef INCLUDED_lime__internal_backend_native_NativeHTTPRequest
#define INCLUDED_lime__internal_backend_native_NativeHTTPRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeHTTPRequest)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,Promise_haxe_io_Bytes)
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)
HX_DECLARE_CLASS3(lime,net,curl,CURL)
HX_DECLARE_CLASS3(lime,net,curl,CURLMulti)
HX_DECLARE_CLASS2(lime,_hx_system,ThreadPool)
HX_DECLARE_CLASS2(sys,thread,Deque)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeHTTPRequest_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NativeHTTPRequest_obj OBJ_;
		NativeHTTPRequest_obj();

	public:
		enum { _hx_ClassId = 0x203f6a6c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._internal.backend.native.NativeHTTPRequest")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime._internal.backend.native.NativeHTTPRequest"); }
		static ::hx::ObjectPtr< NativeHTTPRequest_obj > __new();
		static ::hx::ObjectPtr< NativeHTTPRequest_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeHTTPRequest_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeHTTPRequest",50,e4,b2,51); }

		static ::Array< ::Dynamic> activeInstances;
		static  ::lime::_hx_system::ThreadPool localThreadPool;
		static  ::lime::net::curl::CURLMulti multi;
		static  ::haxe::ds::ObjectMap multiInstances;
		static  ::haxe::Timer multiProgressTimer;
		static  ::lime::_hx_system::ThreadPool multiThreadPool;
		static bool multiThreadPoolRunning;
		static  ::sys::thread::Deque multiAddHandle;
		static void localThreadPool_doWork( ::Dynamic state);
		static ::Dynamic localThreadPool_doWork_dyn();

		static void localThreadPool_onComplete( ::Dynamic state);
		static ::Dynamic localThreadPool_onComplete_dyn();

		static void localThreadPool_onError( ::Dynamic state);
		static ::Dynamic localThreadPool_onError_dyn();

		static void localThreadPool_onProgress( ::Dynamic state);
		static ::Dynamic localThreadPool_onProgress_dyn();

		static void multiThreadPool_doWork( ::Dynamic _);
		static ::Dynamic multiThreadPool_doWork_dyn();

		static void multiThreadPool_onComplete( ::Dynamic _);
		static ::Dynamic multiThreadPool_onComplete_dyn();

		static void multiThreadPool_onProgress( ::Dynamic state);
		static ::Dynamic multiThreadPool_onProgress_dyn();

		static void multiProgressTimer_onRun();
		static ::Dynamic multiProgressTimer_onRun_dyn();

		 ::haxe::io::Bytes bytes;
		int bytesLoaded;
		int bytesTotal;
		bool canceled;
		 ::lime::net::curl::CURL curl;
		::Dynamic parent;
		 ::lime::app::Promise_haxe_io_Bytes promise;
		int writeBytesLoaded;
		int writeBytesTotal;
		int writePosition;
		 ::haxe::Timer timeout;
		void cancel();
		::Dynamic cancel_dyn();

		void init(::Dynamic parent);
		::Dynamic init_dyn();

		void initRequest(::String uri,bool binary);
		::Dynamic initRequest_dyn();

		 ::lime::app::Future loadData(::String uri,::hx::Null< bool >  binary);
		::Dynamic loadData_dyn();

		 ::lime::app::Future loadText(::String uri);
		::Dynamic loadText_dyn();

		void growBuffer(int length);
		::Dynamic growBuffer_dyn();

		void curl_onHeader( ::lime::net::curl::CURL curl,::String header);
		::Dynamic curl_onHeader_dyn();

		void curl_onProgress( ::lime::net::curl::CURL curl,Float dltotal,Float dlnow,Float uptotal,Float upnow);
		::Dynamic curl_onProgress_dyn();

		int curl_onWrite( ::lime::net::curl::CURL curl, ::haxe::io::Bytes output);
		::Dynamic curl_onWrite_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_NativeHTTPRequest */ 
