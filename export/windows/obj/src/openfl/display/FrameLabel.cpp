// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f7a9456505745c4_43_new,"openfl.display.FrameLabel","new",0x6d144ce3,"openfl.display.FrameLabel.new","openfl/display/FrameLabel.hx",43,0x7487bdab)
HX_LOCAL_STACK_FRAME(_hx_pos_4f7a9456505745c4_53_get_frame,"openfl.display.FrameLabel","get_frame",0x73ee1547,"openfl.display.FrameLabel.get_frame","openfl/display/FrameLabel.hx",53,0x7487bdab)
HX_LOCAL_STACK_FRAME(_hx_pos_4f7a9456505745c4_58_get_name,"openfl.display.FrameLabel","get_name",0xc5787671,"openfl.display.FrameLabel.get_name","openfl/display/FrameLabel.hx",58,0x7487bdab)
namespace openfl{
namespace display{

void FrameLabel_obj::__construct(::String name,int frame){
            	HX_STACKFRAME(&_hx_pos_4f7a9456505745c4_43_new)
HXLINE(  44)		super::__construct(null());
HXLINE(  46)		this->_hx___name = name;
HXLINE(  47)		this->_hx___frame = frame;
            	}

Dynamic FrameLabel_obj::__CreateEmpty() { return new FrameLabel_obj; }

void *FrameLabel_obj::_hx_vtable = 0;

Dynamic FrameLabel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FrameLabel_obj > _hx_result = new FrameLabel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FrameLabel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x060154b5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x060154b5;
	} else {
		return inClassId==(int)0x0c89e854;
	}
}

int FrameLabel_obj::get_frame(){
            	HX_STACKFRAME(&_hx_pos_4f7a9456505745c4_53_get_frame)
HXDLIN(  53)		return this->_hx___frame;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FrameLabel_obj,get_frame,return )

::String FrameLabel_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_4f7a9456505745c4_58_get_name)
HXDLIN(  58)		return this->_hx___name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FrameLabel_obj,get_name,return )


::hx::ObjectPtr< FrameLabel_obj > FrameLabel_obj::__new(::String name,int frame) {
	::hx::ObjectPtr< FrameLabel_obj > __this = new FrameLabel_obj();
	__this->__construct(name,frame);
	return __this;
}

::hx::ObjectPtr< FrameLabel_obj > FrameLabel_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,int frame) {
	FrameLabel_obj *__this = (FrameLabel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FrameLabel_obj), true, "openfl.display.FrameLabel"));
	*(void **)__this = FrameLabel_obj::_hx_vtable;
	__this->__construct(name,frame);
	return __this;
}

FrameLabel_obj::FrameLabel_obj()
{
}

void FrameLabel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameLabel);
	HX_MARK_MEMBER_NAME(_hx___frame,"__frame");
	HX_MARK_MEMBER_NAME(_hx___name,"__name");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FrameLabel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___frame,"__frame");
	HX_VISIT_MEMBER_NAME(_hx___name,"__name");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FrameLabel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frame() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__name") ) { return ::hx::Val( _hx___name ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__frame") ) { return ::hx::Val( _hx___frame ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_frame") ) { return ::hx::Val( get_frame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FrameLabel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__name") ) { _hx___name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__frame") ) { _hx___frame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("__frame",0d,d1,e1,70));
	outFields->push(HX_("__name",6b,d5,f7,f7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FrameLabel_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FrameLabel_obj,_hx___frame),HX_("__frame",0d,d1,e1,70)},
	{::hx::fsString,(int)offsetof(FrameLabel_obj,_hx___name),HX_("__name",6b,d5,f7,f7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FrameLabel_obj_sStaticStorageInfo = 0;
#endif

static ::String FrameLabel_obj_sMemberFields[] = {
	HX_("__frame",0d,d1,e1,70),
	HX_("__name",6b,d5,f7,f7),
	HX_("get_frame",84,d4,2c,4a),
	HX_("get_name",d4,2d,ba,c8),
	::String(null()) };

::hx::Class FrameLabel_obj::__mClass;

void FrameLabel_obj::__register()
{
	FrameLabel_obj _hx_dummy;
	FrameLabel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.FrameLabel",71,9f,55,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FrameLabel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FrameLabel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FrameLabel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FrameLabel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
