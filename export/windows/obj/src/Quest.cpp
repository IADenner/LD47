// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Quest
#include <Quest.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_823851edec826063_15_new,"Quest","new",0x2ea9a5b4,"Quest.new","Quest.hx",15,0x00358c3c)
HX_LOCAL_STACK_FRAME(_hx_pos_823851edec826063_24_update,"Quest","update",0x3dc8bd35,"Quest.update","Quest.hx",24,0x00358c3c)

void Quest_obj::__construct(::String Prompt,::String Solution,int Num,::String Hint){
            	HX_STACKFRAME(&_hx_pos_823851edec826063_15_new)
HXLINE(  16)		this->prompt = Prompt;
HXLINE(  17)		this->solution = Solution;
HXLINE(  18)		this->num = Num;
HXLINE(  19)		this->hint = Hint;
            	}

Dynamic Quest_obj::__CreateEmpty() { return new Quest_obj; }

void *Quest_obj::_hx_vtable = 0;

Dynamic Quest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Quest_obj > _hx_result = new Quest_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Quest_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d10f93a;
}

void Quest_obj::update(){
            	HX_STACKFRAME(&_hx_pos_823851edec826063_24_update)
HXDLIN(  24)		if ((::PlayState_obj::QuestNumber == this->num)) {
HXLINE(  26)			::PlayState_obj::txtRegular->set_text(this->prompt);
HXLINE(  27)			::PlayState_obj::txtRegular->set_fieldWidth(( (Float)(400) ));
HXLINE(  28)			::PlayState_obj::hint->set_text(this->hint);
HXLINE(  29)			::PlayState_obj::hint->set_fieldWidth(( (Float)(400) ));
HXLINE(  30)			::String _hx_tmp = ::PlayState_obj::_textField->get_text().toLowerCase();
HXDLIN(  30)			if ((_hx_tmp == this->solution)) {
HXLINE(  32)				 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PlayState >();
HXDLIN(  32)				::PlayState_obj::QuestNumber = (::PlayState_obj::QuestNumber + 1);
HXLINE(  33)				::PlayState_obj::hint->set_visible(false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quest_obj,update,(void))


::hx::ObjectPtr< Quest_obj > Quest_obj::__new(::String Prompt,::String Solution,int Num,::String Hint) {
	::hx::ObjectPtr< Quest_obj > __this = new Quest_obj();
	__this->__construct(Prompt,Solution,Num,Hint);
	return __this;
}

::hx::ObjectPtr< Quest_obj > Quest_obj::__alloc(::hx::Ctx *_hx_ctx,::String Prompt,::String Solution,int Num,::String Hint) {
	Quest_obj *__this = (Quest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Quest_obj), true, "Quest"));
	*(void **)__this = Quest_obj::_hx_vtable;
	__this->__construct(Prompt,Solution,Num,Hint);
	return __this;
}

Quest_obj::Quest_obj()
{
}

void Quest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Quest);
	HX_MARK_MEMBER_NAME(prompt,"prompt");
	HX_MARK_MEMBER_NAME(solution,"solution");
	HX_MARK_MEMBER_NAME(num,"num");
	HX_MARK_MEMBER_NAME(hint,"hint");
	HX_MARK_END_CLASS();
}

void Quest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prompt,"prompt");
	HX_VISIT_MEMBER_NAME(solution,"solution");
	HX_VISIT_MEMBER_NAME(num,"num");
	HX_VISIT_MEMBER_NAME(hint,"hint");
}

::hx::Val Quest_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { return ::hx::Val( num ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { return ::hx::Val( hint ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prompt") ) { return ::hx::Val( prompt ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"solution") ) { return ::hx::Val( solution ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Quest_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { num=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { hint=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prompt") ) { prompt=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"solution") ) { solution=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Quest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("prompt",a4,51,58,b5));
	outFields->push(HX_("solution",79,66,e1,92));
	outFields->push(HX_("num",46,de,53,00));
	outFields->push(HX_("hint",87,3d,0e,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Quest_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Quest_obj,prompt),HX_("prompt",a4,51,58,b5)},
	{::hx::fsString,(int)offsetof(Quest_obj,solution),HX_("solution",79,66,e1,92)},
	{::hx::fsInt,(int)offsetof(Quest_obj,num),HX_("num",46,de,53,00)},
	{::hx::fsString,(int)offsetof(Quest_obj,hint),HX_("hint",87,3d,0e,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Quest_obj_sStaticStorageInfo = 0;
#endif

static ::String Quest_obj_sMemberFields[] = {
	HX_("prompt",a4,51,58,b5),
	HX_("solution",79,66,e1,92),
	HX_("num",46,de,53,00),
	HX_("hint",87,3d,0e,45),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Quest_obj::__mClass;

void Quest_obj::__register()
{
	Quest_obj _hx_dummy;
	Quest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Quest",c2,fb,17,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Quest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Quest_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Quest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Quest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

