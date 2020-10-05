// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_util_FlxPool_flixel_effects_FlxFlicker
#define INCLUDED_flixel_util_FlxPool_flixel_effects_FlxFlicker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
HX_DECLARE_CLASS2(flixel,effects,FlxFlicker)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_effects_FlxFlicker)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxPool_flixel_effects_FlxFlicker_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxPool_flixel_effects_FlxFlicker_obj OBJ_;
		FlxPool_flixel_effects_FlxFlicker_obj();

	public:
		enum { _hx_ClassId = 0x6ad81a8f };

		void __construct(::hx::Class classObj);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxPool_flixel_effects_FlxFlicker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util.FlxPool_flixel_effects_FlxFlicker"); }
		static ::hx::ObjectPtr< FlxPool_flixel_effects_FlxFlicker_obj > __new(::hx::Class classObj);
		static ::hx::ObjectPtr< FlxPool_flixel_effects_FlxFlicker_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Class classObj);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxPool_flixel_effects_FlxFlicker_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::cpp::VirtualArray clear_36f85899();
		::String __ToString() const { return HX_("FlxPool_flixel_effects_FlxFlicker",35,6d,61,fd); }

		::Array< ::Dynamic> _pool;
		::hx::Class _class;
		int _count;
		 ::flixel::effects::FlxFlicker get();
		::Dynamic get_dyn();

		void put( ::flixel::effects::FlxFlicker obj);
		::Dynamic put_dyn();

		void putUnsafe( ::flixel::effects::FlxFlicker obj);
		::Dynamic putUnsafe_dyn();

		void preAllocate(int numObjects);
		::Dynamic preAllocate_dyn();

		::Array< ::Dynamic> clear();
		::Dynamic clear_dyn();

		int get_length();
		::Dynamic get_length_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPool_flixel_effects_FlxFlicker */ 
