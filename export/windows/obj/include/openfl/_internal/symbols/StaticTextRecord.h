// Generated by Haxe 4.1.2
#ifndef INCLUDED_openfl__internal_symbols_StaticTextRecord
#define INCLUDED_openfl__internal_symbols_StaticTextRecord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_94798ee06130056c_130_new)
HX_DECLARE_CLASS3(openfl,_internal,symbols,StaticTextRecord)

namespace openfl{
namespace _internal{
namespace symbols{


class HXCPP_CLASS_ATTRIBUTES StaticTextRecord_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StaticTextRecord_obj OBJ_;
		StaticTextRecord_obj();

	public:
		enum { _hx_ClassId = 0x7cb53ab3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.symbols.StaticTextRecord")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl._internal.symbols.StaticTextRecord"); }

		inline static ::hx::ObjectPtr< StaticTextRecord_obj > __new() {
			::hx::ObjectPtr< StaticTextRecord_obj > __this = new StaticTextRecord_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StaticTextRecord_obj > __alloc(::hx::Ctx *_hx_ctx) {
			StaticTextRecord_obj *__this = (StaticTextRecord_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticTextRecord_obj), true, "openfl._internal.symbols.StaticTextRecord"));
			*(void **)__this = StaticTextRecord_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_94798ee06130056c_130_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StaticTextRecord_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StaticTextRecord",8c,99,9c,6e); }

		::Array< int > advances;
		 ::Dynamic color;
		int fontHeight;
		 ::Dynamic fontID;
		::Array< int > glyphs;
		 ::Dynamic offsetX;
		 ::Dynamic offsetY;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols

#endif /* INCLUDED_openfl__internal_symbols_StaticTextRecord */ 
