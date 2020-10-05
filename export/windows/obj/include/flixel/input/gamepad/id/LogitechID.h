// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_input_gamepad_id_LogitechID
#define INCLUDED_flixel_input_gamepad_id_LogitechID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,LogitechID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES LogitechID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LogitechID_obj OBJ_;
		LogitechID_obj();

	public:
		enum { _hx_ClassId = 0x53611d44 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.LogitechID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.LogitechID"); }

		inline static ::hx::ObjectPtr< LogitechID_obj > __new() {
			::hx::ObjectPtr< LogitechID_obj > __this = new LogitechID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LogitechID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			LogitechID_obj *__this = (LogitechID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LogitechID_obj), false, "flixel.input.gamepad.id.LogitechID"));
			*(void **)__this = LogitechID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LogitechID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LogitechID",f6,78,ff,68); }

		static void __boot();
		static int ONE;
		static int TWO;
		static int THREE;
		static int FOUR;
		static int FIVE;
		static int SIX;
		static int SEVEN;
		static int EIGHT;
		static int NINE;
		static int TEN;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int LOGITECH;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_LogitechID */ 
