// Generated by Haxe 4.1.2
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_WindingEvenOddView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_WindingEvenOddView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,WindingEvenOddView_Impl_)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES WindingEvenOddView_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WindingEvenOddView_Impl__obj OBJ_;
		WindingEvenOddView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x058c0e7a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.WindingEvenOddView_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.WindingEvenOddView_Impl_"); }

		inline static ::hx::ObjectPtr< WindingEvenOddView_Impl__obj > __new() {
			::hx::ObjectPtr< WindingEvenOddView_Impl__obj > __this = new WindingEvenOddView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< WindingEvenOddView_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			WindingEvenOddView_Impl__obj *__this = (WindingEvenOddView_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WindingEvenOddView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.WindingEvenOddView_Impl_"));
			*(void **)__this = WindingEvenOddView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WindingEvenOddView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WindingEvenOddView_Impl_",80,7d,e4,d4); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_WindingEvenOddView_Impl_ */ 
