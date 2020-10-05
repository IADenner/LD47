// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_PS4ID
#include <flixel/input/gamepad/id/PS4ID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_PS4Mapping
#include <flixel/input/gamepad/mappings/PS4Mapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e4c9bfb09cde4791_6_new,"flixel.input.gamepad.mappings.PS4Mapping","new",0x2b618f95,"flixel.input.gamepad.mappings.PS4Mapping.new","flixel/input/gamepad/mappings/PS4Mapping.hx",6,0x24847fdd)
HX_LOCAL_STACK_FRAME(_hx_pos_e4c9bfb09cde4791_20_initValues,"flixel.input.gamepad.mappings.PS4Mapping","initValues",0xcf26207d,"flixel.input.gamepad.mappings.PS4Mapping.initValues","flixel/input/gamepad/mappings/PS4Mapping.hx",20,0x24847fdd)
HX_LOCAL_STACK_FRAME(_hx_pos_e4c9bfb09cde4791_29_getID,"flixel.input.gamepad.mappings.PS4Mapping","getID",0xeac44866,"flixel.input.gamepad.mappings.PS4Mapping.getID","flixel/input/gamepad/mappings/PS4Mapping.hx",29,0x24847fdd)
HX_LOCAL_STACK_FRAME(_hx_pos_e4c9bfb09cde4791_64_getRawID,"flixel.input.gamepad.mappings.PS4Mapping","getRawID",0x44a56ff8,"flixel.input.gamepad.mappings.PS4Mapping.getRawID","flixel/input/gamepad/mappings/PS4Mapping.hx",64,0x24847fdd)
HX_LOCAL_STACK_FRAME(_hx_pos_e4c9bfb09cde4791_105_getInputLabel,"flixel.input.gamepad.mappings.PS4Mapping","getInputLabel",0x47bae535,"flixel.input.gamepad.mappings.PS4Mapping.getInputLabel","flixel/input/gamepad/mappings/PS4Mapping.hx",105,0x24847fdd)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void PS4Mapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_e4c9bfb09cde4791_6_new)
HXDLIN(   6)		super::__construct(attachment);
            	}

Dynamic PS4Mapping_obj::__CreateEmpty() { return new PS4Mapping_obj; }

void *PS4Mapping_obj::_hx_vtable = 0;

Dynamic PS4Mapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PS4Mapping_obj > _hx_result = new PS4Mapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PS4Mapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21e2b607) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21e2b607;
	} else {
		return inClassId==(int)0x756c32f9;
	}
}

void PS4Mapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_e4c9bfb09cde4791_20_initValues)
HXLINE(  21)		this->leftStick = ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK;
HXLINE(  22)		this->rightStick = ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK;
HXLINE(  23)		this->supportsMotion = true;
HXLINE(  24)		this->supportsPointer = true;
            	}


int PS4Mapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_e4c9bfb09cde4791_29_getID)
HXDLIN(  29)		switch((int)(rawID)){
            			case (int)6: {
HXLINE(  31)				return 0;
            			}
            			break;
            			case (int)7: {
HXLINE(  32)				return 1;
            			}
            			break;
            			case (int)8: {
HXLINE(  33)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  34)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  38)				return 6;
            			}
            			break;
            			case (int)11: {
HXLINE(  40)				return 10;
            			}
            			break;
            			case (int)12: {
HXLINE(  41)				return 7;
            			}
            			break;
            			case (int)13: {
HXLINE(  42)				return 8;
            			}
            			break;
            			case (int)14: {
HXLINE(  43)				return 9;
            			}
            			break;
            			case (int)15: {
HXLINE(  44)				return 4;
            			}
            			break;
            			case (int)16: {
HXLINE(  45)				return 5;
            			}
            			break;
            			case (int)17: {
HXLINE(  47)				return 11;
            			}
            			break;
            			case (int)18: {
HXLINE(  46)				return 12;
            			}
            			break;
            			case (int)19: {
HXLINE(  48)				return 13;
            			}
            			break;
            			case (int)20: {
HXLINE(  49)				return 14;
            			}
            			break;
            			default:{
HXLINE(  50)				int id = rawID;
HXDLIN(  50)				if ((id == this->leftStick->rawUp)) {
HXLINE(  50)					return 34;
            				}
            				else {
HXLINE(  51)					int id = rawID;
HXDLIN(  51)					if ((id == this->leftStick->rawDown)) {
HXLINE(  51)						return 36;
            					}
            					else {
HXLINE(  52)						int id = rawID;
HXDLIN(  52)						if ((id == this->leftStick->rawLeft)) {
HXLINE(  52)							return 37;
            						}
            						else {
HXLINE(  53)							int id = rawID;
HXDLIN(  53)							if ((id == this->leftStick->rawRight)) {
HXLINE(  53)								return 35;
            							}
            							else {
HXLINE(  54)								int id = rawID;
HXDLIN(  54)								if ((id == this->rightStick->rawUp)) {
HXLINE(  54)									return 38;
            								}
            								else {
HXLINE(  55)									int id = rawID;
HXDLIN(  55)									if ((id == this->rightStick->rawDown)) {
HXLINE(  55)										return 40;
            									}
            									else {
HXLINE(  56)										int id = rawID;
HXDLIN(  56)										if ((id == this->rightStick->rawLeft)) {
HXLINE(  56)											return 41;
            										}
            										else {
HXLINE(  57)											int id = rawID;
HXDLIN(  57)											if ((id == this->rightStick->rawRight)) {
HXLINE(  57)												return 39;
            											}
            											else {
HXLINE(  58)												return -1;
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
HXLINE(  29)		return null();
            	}


int PS4Mapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_e4c9bfb09cde4791_64_getRawID)
HXDLIN(  64)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  66)				return 6;
            			}
            			break;
            			case (int)1: {
HXLINE(  67)				return 7;
            			}
            			break;
            			case (int)2: {
HXLINE(  68)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE(  69)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE(  79)				return 15;
            			}
            			break;
            			case (int)5: {
HXLINE(  80)				return 16;
            			}
            			break;
            			case (int)6: {
HXLINE(  73)				return 10;
            			}
            			break;
            			case (int)7: {
HXLINE(  76)				return 12;
            			}
            			break;
            			case (int)8: {
HXLINE(  77)				return 13;
            			}
            			break;
            			case (int)9: {
HXLINE(  78)				return 14;
            			}
            			break;
            			case (int)10: {
HXLINE(  75)				return 11;
            			}
            			break;
            			case (int)11: {
HXLINE(  81)				return 17;
            			}
            			break;
            			case (int)12: {
HXLINE(  82)				return 18;
            			}
            			break;
            			case (int)13: {
HXLINE(  83)				return 19;
            			}
            			break;
            			case (int)14: {
HXLINE(  84)				return 20;
            			}
            			break;
            			case (int)17: {
HXLINE(  85)				return 4;
            			}
            			break;
            			case (int)18: {
HXLINE(  86)				return 5;
            			}
            			break;
            			case (int)34: {
HXLINE(  87)				return ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  90)				return ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  88)				return ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  89)				return ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  91)				return ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  94)				return ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  92)				return ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  93)				return ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  99)				return -1;
            			}
            		}
HXLINE(  64)		return 0;
            	}


::String PS4Mapping_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_e4c9bfb09cde4791_105_getInputLabel)
HXDLIN( 105)		switch((int)(id)){
            			case (int)0: {
HXLINE( 107)				return HX_("x",78,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE( 108)				return HX_("circle",10,72,0d,56);
            			}
            			break;
            			case (int)2: {
HXLINE( 109)				return HX_("square",9d,00,f2,58);
            			}
            			break;
            			case (int)3: {
HXLINE( 110)				return HX_("triangle",c8,be,c5,8d);
            			}
            			break;
            			case (int)4: {
HXLINE( 114)				return HX_("l1",45,5e,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE( 115)				return HX_("r1",7f,63,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE( 111)				return HX_("share",df,e4,1c,7c);
            			}
            			break;
            			case (int)7: {
HXLINE( 113)				return HX_("options",5e,33,fe,df);
            			}
            			break;
            			case (int)10: {
HXLINE( 112)				return HX_("ps",03,62,00,00);
            			}
            			break;
            			case (int)17: {
HXLINE( 116)				return HX_("l2",46,5e,00,00);
            			}
            			break;
            			case (int)18: {
HXLINE( 117)				return HX_("r2",80,63,00,00);
            			}
            			break;
            			default:{
HXLINE( 118)				return this->super::getInputLabel(id);
            			}
            		}
HXLINE( 105)		return null();
            	}



::hx::ObjectPtr< PS4Mapping_obj > PS4Mapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< PS4Mapping_obj > __this = new PS4Mapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< PS4Mapping_obj > PS4Mapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	PS4Mapping_obj *__this = (PS4Mapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PS4Mapping_obj), true, "flixel.input.gamepad.mappings.PS4Mapping"));
	*(void **)__this = PS4Mapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

PS4Mapping_obj::PS4Mapping_obj()
{
}

::hx::Val PS4Mapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PS4Mapping_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PS4Mapping_obj_sStaticStorageInfo = 0;
#endif

static ::String PS4Mapping_obj_sMemberFields[] = {
	HX_("initValues",12,5f,fc,53),
	HX_("getID",f1,91,60,91),
	HX_("getRawID",4d,6f,fd,43),
	HX_("getInputLabel",c0,31,5c,4a),
	::String(null()) };

::hx::Class PS4Mapping_obj::__mClass;

void PS4Mapping_obj::__register()
{
	PS4Mapping_obj _hx_dummy;
	PS4Mapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.PS4Mapping",23,21,fb,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PS4Mapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PS4Mapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PS4Mapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PS4Mapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
