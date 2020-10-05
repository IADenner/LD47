// Generated by Haxe 4.1.2
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasBitmap
#define INCLUDED_openfl__internal_renderer_canvas_CanvasBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,renderer,canvas,CanvasBitmap)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{


class HXCPP_CLASS_ATTRIBUTES CanvasBitmap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CanvasBitmap_obj OBJ_;
		CanvasBitmap_obj();

	public:
		enum { _hx_ClassId = 0x7ec5c966 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.canvas.CanvasBitmap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.canvas.CanvasBitmap"); }

		inline static ::hx::ObjectPtr< CanvasBitmap_obj > __new() {
			::hx::ObjectPtr< CanvasBitmap_obj > __this = new CanvasBitmap_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CanvasBitmap_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CanvasBitmap_obj *__this = (CanvasBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CanvasBitmap_obj), false, "openfl._internal.renderer.canvas.CanvasBitmap"));
			*(void **)__this = CanvasBitmap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CanvasBitmap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CanvasBitmap",07,57,88,64); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void render( ::openfl::display::Bitmap bitmap, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas

#endif /* INCLUDED_openfl__internal_renderer_canvas_CanvasBitmap */ 
