// Generated by Haxe 4.1.2
#ifndef INCLUDED_openfl_display_GraphicsShaderFill
#define INCLUDED_openfl_display_GraphicsShaderFill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,display,GraphicsShaderFill)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsFill)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES GraphicsShaderFill_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GraphicsShaderFill_obj OBJ_;
		GraphicsShaderFill_obj();

	public:
		enum { _hx_ClassId = 0x2a61a921 };

		void __construct( ::openfl::display::Shader shader, ::openfl::geom::Matrix matrix);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.GraphicsShaderFill")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.GraphicsShaderFill"); }
		static ::hx::ObjectPtr< GraphicsShaderFill_obj > __new( ::openfl::display::Shader shader, ::openfl::geom::Matrix matrix);
		static ::hx::ObjectPtr< GraphicsShaderFill_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Shader shader, ::openfl::geom::Matrix matrix);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicsShaderFill_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("GraphicsShaderFill",13,dd,f4,3d); }

		 ::openfl::geom::Matrix matrix;
		 ::openfl::display::Shader shader;
		int _hx___graphicsDataType;
		int _hx___graphicsFillType;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsShaderFill */ 
