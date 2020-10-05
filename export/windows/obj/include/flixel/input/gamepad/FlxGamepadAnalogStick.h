// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#define INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxAnalogToDigitalMode)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)

namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES FlxGamepadAnalogStick_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxGamepadAnalogStick_obj OBJ_;
		FlxGamepadAnalogStick_obj();

	public:
		enum { _hx_ClassId = 0x15ebfdfe };

		void __construct(int x,int y, ::Dynamic settings);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.FlxGamepadAnalogStick")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.FlxGamepadAnalogStick"); }
		static ::hx::ObjectPtr< FlxGamepadAnalogStick_obj > __new(int x,int y, ::Dynamic settings);
		static ::hx::ObjectPtr< FlxGamepadAnalogStick_obj > __alloc(::hx::Ctx *_hx_ctx,int x,int y, ::Dynamic settings);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGamepadAnalogStick_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxGamepadAnalogStick",d1,6a,ea,71); }

		int x;
		int y;
		int rawUp;
		int rawDown;
		int rawLeft;
		int rawRight;
		Float digitalThreshold;
		 ::flixel::input::gamepad::FlxAnalogToDigitalMode mode;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick */ 
