// Generated by Haxe 4.1.2
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_required_internalformat
#define INCLUDED_lime_graphics_opengl_ext_OES_required_internalformat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ecc8bf145862a1ac_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_required_internalformat)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_required_internalformat_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_required_internalformat_obj OBJ_;
		OES_required_internalformat_obj();

	public:
		enum { _hx_ClassId = 0x489cd4a0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_required_internalformat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_required_internalformat"); }

		inline static ::hx::ObjectPtr< OES_required_internalformat_obj > __new() {
			::hx::ObjectPtr< OES_required_internalformat_obj > __this = new OES_required_internalformat_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_required_internalformat_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_required_internalformat_obj *__this = (OES_required_internalformat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_required_internalformat_obj), false, "lime.graphics.opengl.ext.OES_required_internalformat"));
			*(void **)__this = OES_required_internalformat_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ecc8bf145862a1ac_4_new)
HXLINE(  20)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->RGB10_A2_EXT = 32857;
HXLINE(  19)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->RGB10_EXT = 32850;
HXLINE(  18)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->RGBA8_OES = 32856;
HXLINE(  17)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->RGB8_OES = 32849;
HXLINE(  16)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->RGB565_OES = 36194;
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->RGB5_A1_OES = 32855;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->RGBA4_OES = 32854;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->LUMINANCE8_OES = 32832;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->LUMINANCE8_ALPHA8_OES = 32837;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->LUMINANCE4_ALPHA4_OES = 32835;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->DEPTH_COMPONENT32_OES = 33191;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->DEPTH24_STENCIL8_OES = 35056;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->DEPTH_COMPONENT24_OES = 33190;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->DEPTH_COMPONENT16_OES = 33189;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::OES_required_internalformat)(__this) )->ALPHA8_OES = 32828;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_required_internalformat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_required_internalformat",52,c5,46,29); }

		int ALPHA8_OES;
		int DEPTH_COMPONENT16_OES;
		int DEPTH_COMPONENT24_OES;
		int DEPTH24_STENCIL8_OES;
		int DEPTH_COMPONENT32_OES;
		int LUMINANCE4_ALPHA4_OES;
		int LUMINANCE8_ALPHA8_OES;
		int LUMINANCE8_OES;
		int RGBA4_OES;
		int RGB5_A1_OES;
		int RGB565_OES;
		int RGB8_OES;
		int RGBA8_OES;
		int RGB10_EXT;
		int RGB10_A2_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_required_internalformat */ 
