// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_util_FlxGradient
#define INCLUDED_flixel_util_FlxGradient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxGradient)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxGradient_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxGradient_obj OBJ_;
		FlxGradient_obj();

	public:
		enum { _hx_ClassId = 0x27df7a04 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxGradient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util.FlxGradient"); }

		inline static ::hx::ObjectPtr< FlxGradient_obj > __new() {
			::hx::ObjectPtr< FlxGradient_obj > __this = new FlxGradient_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxGradient_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxGradient_obj *__this = (FlxGradient_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGradient_obj), false, "flixel.util.FlxGradient"));
			*(void **)__this = FlxGradient_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGradient_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxGradient",62,14,56,41); }

		static  ::Dynamic createGradientMatrix(int width,int height,::Array< int > colors,::hx::Null< int >  chunkSize,::hx::Null< int >  rotation);
		static ::Dynamic createGradientMatrix_dyn();

		static ::Array< int > createGradientArray(int width,int height,::Array< int > colors,::hx::Null< int >  chunkSize,::hx::Null< int >  rotation,::hx::Null< bool >  interpolate);
		static ::Dynamic createGradientArray_dyn();

		static  ::flixel::FlxSprite createGradientFlxSprite(int width,int height,::Array< int > colors,::hx::Null< int >  chunkSize,::hx::Null< int >  rotation,::hx::Null< bool >  interpolate);
		static ::Dynamic createGradientFlxSprite_dyn();

		static  ::openfl::display::BitmapData createGradientBitmapData(int width,int height,::Array< int > colors,::hx::Null< int >  chunkSize,::hx::Null< int >  rotation,::hx::Null< bool >  interpolate);
		static ::Dynamic createGradientBitmapData_dyn();

		static  ::flixel::FlxSprite overlayGradientOnFlxSprite( ::flixel::FlxSprite dest,int width,int height,::Array< int > colors,::hx::Null< int >  destX,::hx::Null< int >  destY,::hx::Null< int >  chunkSize,::hx::Null< int >  rotation,::hx::Null< bool >  interpolate);
		static ::Dynamic overlayGradientOnFlxSprite_dyn();

		static  ::openfl::display::BitmapData overlayGradientOnBitmapData( ::openfl::display::BitmapData dest,int width,int height,::Array< int > colors,::hx::Null< int >  destX,::hx::Null< int >  destY,::hx::Null< int >  chunkSize,::hx::Null< int >  rotation,::hx::Null< bool >  interpolate);
		static ::Dynamic overlayGradientOnBitmapData_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxGradient */ 
