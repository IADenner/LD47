// Generated by Haxe 4.1.2
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#define INCLUDED_openfl_events__EventDispatcher_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,events,_EventDispatcher,Listener)

namespace openfl{
namespace events{
namespace _EventDispatcher{


class HXCPP_CLASS_ATTRIBUTES Listener_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Listener_obj OBJ_;
		Listener_obj();

	public:
		enum { _hx_ClassId = 0x0e5e3763 };

		void __construct( ::Dynamic callback,bool useCapture,int priority);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events._EventDispatcher.Listener")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events._EventDispatcher.Listener"); }
		static ::hx::ObjectPtr< Listener_obj > __new( ::Dynamic callback,bool useCapture,int priority);
		static ::hx::ObjectPtr< Listener_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic callback,bool useCapture,int priority);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Listener_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Listener",94,bc,e3,11); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		int priority;
		bool useCapture;
		bool match( ::Dynamic callback,bool useCapture);
		::Dynamic match_dyn();

};

} // end namespace openfl
} // end namespace events
} // end namespace _EventDispatcher

#endif /* INCLUDED_openfl_events__EventDispatcher_Listener */ 
