// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_PSVitaID
#include <flixel/input/gamepad/id/PSVitaID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_PSVitaMapping
#include <flixel/input/gamepad/mappings/PSVitaMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cea460118c4fe0d4_6_new,"flixel.input.gamepad.mappings.PSVitaMapping","new",0x4af00697,"flixel.input.gamepad.mappings.PSVitaMapping.new","flixel/input/gamepad/mappings/PSVitaMapping.hx",6,0xe1b17b97)
HX_LOCAL_STACK_FRAME(_hx_pos_cea460118c4fe0d4_9_initValues,"flixel.input.gamepad.mappings.PSVitaMapping","initValues",0xc2c96dbb,"flixel.input.gamepad.mappings.PSVitaMapping.initValues","flixel/input/gamepad/mappings/PSVitaMapping.hx",9,0xe1b17b97)
HX_LOCAL_STACK_FRAME(_hx_pos_cea460118c4fe0d4_16_getID,"flixel.input.gamepad.mappings.PSVitaMapping","getID",0xe42003e8,"flixel.input.gamepad.mappings.PSVitaMapping.getID","flixel/input/gamepad/mappings/PSVitaMapping.hx",16,0xe1b17b97)
HX_LOCAL_STACK_FRAME(_hx_pos_cea460118c4fe0d4_44_getRawID,"flixel.input.gamepad.mappings.PSVitaMapping","getRawID",0x46fe51b6,"flixel.input.gamepad.mappings.PSVitaMapping.getRawID","flixel/input/gamepad/mappings/PSVitaMapping.hx",44,0xe1b17b97)
HX_LOCAL_STACK_FRAME(_hx_pos_cea460118c4fe0d4_72_getInputLabel,"flixel.input.gamepad.mappings.PSVitaMapping","getInputLabel",0x0a60f2b7,"flixel.input.gamepad.mappings.PSVitaMapping.getInputLabel","flixel/input/gamepad/mappings/PSVitaMapping.hx",72,0xe1b17b97)
HX_LOCAL_STACK_FRAME(_hx_pos_cea460118c4fe0d4_89_isAxisFlipped,"flixel.input.gamepad.mappings.PSVitaMapping","isAxisFlipped",0x43decece,"flixel.input.gamepad.mappings.PSVitaMapping.isAxisFlipped","flixel/input/gamepad/mappings/PSVitaMapping.hx",89,0xe1b17b97)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void PSVitaMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_6_new)
HXDLIN(   6)		super::__construct(attachment);
            	}

Dynamic PSVitaMapping_obj::__CreateEmpty() { return new PSVitaMapping_obj; }

void *PSVitaMapping_obj::_hx_vtable = 0;

Dynamic PSVitaMapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PSVitaMapping_obj > _hx_result = new PSVitaMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PSVitaMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21e2b607) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21e2b607;
	} else {
		return inClassId==(int)0x6e5567f3;
	}
}

void PSVitaMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_9_initValues)
HXLINE(  10)		this->leftStick = ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK;
HXLINE(  11)		this->rightStick = ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK;
            	}


int PSVitaMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_16_getID)
HXDLIN(  16)		switch((int)(rawID)){
            			case (int)6: {
HXLINE(  18)				return 0;
            			}
            			break;
            			case (int)7: {
HXLINE(  19)				return 1;
            			}
            			break;
            			case (int)8: {
HXLINE(  20)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  21)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  22)				return 6;
            			}
            			break;
            			case (int)12: {
HXLINE(  23)				return 7;
            			}
            			break;
            			case (int)15: {
HXLINE(  24)				return 4;
            			}
            			break;
            			case (int)16: {
HXLINE(  25)				return 5;
            			}
            			break;
            			case (int)17: {
HXLINE(  27)				return 11;
            			}
            			break;
            			case (int)18: {
HXLINE(  26)				return 12;
            			}
            			break;
            			case (int)19: {
HXLINE(  28)				return 13;
            			}
            			break;
            			case (int)20: {
HXLINE(  29)				return 14;
            			}
            			break;
            			default:{
HXLINE(  30)				int id = rawID;
HXDLIN(  30)				if ((id == this->leftStick->rawUp)) {
HXLINE(  30)					return 34;
            				}
            				else {
HXLINE(  31)					int id = rawID;
HXDLIN(  31)					if ((id == this->leftStick->rawDown)) {
HXLINE(  31)						return 34;
            					}
            					else {
HXLINE(  32)						int id = rawID;
HXDLIN(  32)						if ((id == this->leftStick->rawLeft)) {
HXLINE(  32)							return 37;
            						}
            						else {
HXLINE(  33)							int id = rawID;
HXDLIN(  33)							if ((id == this->leftStick->rawRight)) {
HXLINE(  33)								return 35;
            							}
            							else {
HXLINE(  34)								int id = rawID;
HXDLIN(  34)								if ((id == this->rightStick->rawUp)) {
HXLINE(  34)									return 38;
            								}
            								else {
HXLINE(  35)									int id = rawID;
HXDLIN(  35)									if ((id == this->rightStick->rawDown)) {
HXLINE(  35)										return 40;
            									}
            									else {
HXLINE(  36)										int id = rawID;
HXDLIN(  36)										if ((id == this->rightStick->rawLeft)) {
HXLINE(  36)											return 41;
            										}
            										else {
HXLINE(  37)											int id = rawID;
HXDLIN(  37)											if ((id == this->rightStick->rawRight)) {
HXLINE(  37)												return 39;
            											}
            											else {
HXLINE(  38)												return -1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  16)		return null();
            	}


int PSVitaMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_44_getRawID)
HXDLIN(  44)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  46)				return 6;
            			}
            			break;
            			case (int)1: {
HXLINE(  47)				return 7;
            			}
            			break;
            			case (int)2: {
HXLINE(  48)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE(  49)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE(  52)				return 15;
            			}
            			break;
            			case (int)5: {
HXLINE(  53)				return 16;
            			}
            			break;
            			case (int)6: {
HXLINE(  50)				return 10;
            			}
            			break;
            			case (int)7: {
HXLINE(  51)				return 12;
            			}
            			break;
            			case (int)11: {
HXLINE(  54)				return 17;
            			}
            			break;
            			case (int)12: {
HXLINE(  55)				return 18;
            			}
            			break;
            			case (int)13: {
HXLINE(  56)				return 19;
            			}
            			break;
            			case (int)14: {
HXLINE(  57)				return 20;
            			}
            			break;
            			case (int)34: {
HXLINE(  58)				return ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  61)				return ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  59)				return ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  60)				return ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  62)				return ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  65)				return ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  63)				return ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  64)				return ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  66)				return -1;
            			}
            		}
HXLINE(  44)		return 0;
            	}


::String PSVitaMapping_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_72_getInputLabel)
HXDLIN(  72)		switch((int)(id)){
            			case (int)0: {
HXLINE(  74)				return HX_("x",78,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE(  75)				return HX_("circle",10,72,0d,56);
            			}
            			break;
            			case (int)2: {
HXLINE(  76)				return HX_("square",9d,00,f2,58);
            			}
            			break;
            			case (int)3: {
HXLINE(  77)				return HX_("triangle",c8,be,c5,8d);
            			}
            			break;
            			case (int)4: {
HXLINE(  79)				return HX_("l1",45,5e,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(  80)				return HX_("r1",7f,63,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE(  78)				return HX_("select",fc,1a,33,6a);
            			}
            			break;
            			case (int)17: {
HXLINE(  81)				return HX_("l2",46,5e,00,00);
            			}
            			break;
            			case (int)18: {
HXLINE(  82)				return HX_("r2",80,63,00,00);
            			}
            			break;
            			default:{
HXLINE(  83)				return this->super::getInputLabel(id);
            			}
            		}
HXLINE(  72)		return null();
            	}


bool PSVitaMapping_obj::isAxisFlipped(int axisID){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_89_isAxisFlipped)
HXDLIN(  89)		if ((axisID != ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK->y)) {
HXDLIN(  89)			return (axisID == ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK->y);
            		}
            		else {
HXDLIN(  89)			return true;
            		}
HXDLIN(  89)		return false;
            	}



::hx::ObjectPtr< PSVitaMapping_obj > PSVitaMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< PSVitaMapping_obj > __this = new PSVitaMapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< PSVitaMapping_obj > PSVitaMapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	PSVitaMapping_obj *__this = (PSVitaMapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PSVitaMapping_obj), true, "flixel.input.gamepad.mappings.PSVitaMapping"));
	*(void **)__this = PSVitaMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

PSVitaMapping_obj::PSVitaMapping_obj()
{
}

::hx::Val PSVitaMapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return ::hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return ::hx::Val( getRawID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return ::hx::Val( initValues_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getInputLabel") ) { return ::hx::Val( getInputLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"isAxisFlipped") ) { return ::hx::Val( isAxisFlipped_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PSVitaMapping_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PSVitaMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String PSVitaMapping_obj_sMemberFields[] = {
	HX_("initValues",12,5f,fc,53),
	HX_("getID",f1,91,60,91),
	HX_("getRawID",4d,6f,fd,43),
	HX_("getInputLabel",c0,31,5c,4a),
	HX_("isAxisFlipped",d7,0d,da,83),
	::String(null()) };

::hx::Class PSVitaMapping_obj::__mClass;

void PSVitaMapping_obj::__register()
{
	PSVitaMapping_obj _hx_dummy;
	PSVitaMapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.PSVitaMapping",25,6f,7d,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PSVitaMapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PSVitaMapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PSVitaMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PSVitaMapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings