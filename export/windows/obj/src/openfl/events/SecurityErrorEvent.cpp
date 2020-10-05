// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#include <openfl/events/SecurityErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7a0f0e2b2707adbe_69_new,"openfl.events.SecurityErrorEvent","new",0x42af717b,"openfl.events.SecurityErrorEvent.new","openfl/events/SecurityErrorEvent.hx",69,0x4f4e3035)
HX_LOCAL_STACK_FRAME(_hx_pos_7a0f0e2b2707adbe_73_clone,"openfl.events.SecurityErrorEvent","clone",0x91bd7138,"openfl.events.SecurityErrorEvent.clone","openfl/events/SecurityErrorEvent.hx",73,0x4f4e3035)
HX_LOCAL_STACK_FRAME(_hx_pos_7a0f0e2b2707adbe_83_toString,"openfl.events.SecurityErrorEvent","toString",0xccee4db1,"openfl.events.SecurityErrorEvent.toString","openfl/events/SecurityErrorEvent.hx",83,0x4f4e3035)
static const ::String _hx_array_data_072c9809_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("text",ad,cc,f9,4c),HX_("errorID",a3,8d,0a,ea),
};
HX_LOCAL_STACK_FRAME(_hx_pos_7a0f0e2b2707adbe_42_boot,"openfl.events.SecurityErrorEvent","boot",0x0eecdab7,"openfl.events.SecurityErrorEvent.boot","openfl/events/SecurityErrorEvent.hx",42,0x4f4e3035)
HX_LOCAL_STACK_FRAME(_hx_pos_7a0f0e2b2707adbe_44_boot,"openfl.events.SecurityErrorEvent","boot",0x0eecdab7,"openfl.events.SecurityErrorEvent.boot","openfl/events/SecurityErrorEvent.hx",44,0x4f4e3035)
HX_LOCAL_STACK_FRAME(_hx_pos_7a0f0e2b2707adbe_45_boot,"openfl.events.SecurityErrorEvent","boot",0x0eecdab7,"openfl.events.SecurityErrorEvent.boot","openfl/events/SecurityErrorEvent.hx",45,0x4f4e3035)
namespace openfl{
namespace events{

void SecurityErrorEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		int id = __o_id.Default(0);
            	HX_STACKFRAME(&_hx_pos_7a0f0e2b2707adbe_69_new)
HXDLIN(  69)		super::__construct(type,bubbles,cancelable,text,id);
            	}

Dynamic SecurityErrorEvent_obj::__CreateEmpty() { return new SecurityErrorEvent_obj; }

void *SecurityErrorEvent_obj::_hx_vtable = 0;

Dynamic SecurityErrorEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SecurityErrorEvent_obj > _hx_result = new SecurityErrorEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool SecurityErrorEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b393f9b) {
		if (inClassId<=(int)0x08ec4c31) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
		} else {
			return inClassId==(int)0x0b393f9b;
		}
	} else {
		return inClassId==(int)0x27730e1f || inClassId==(int)0x53d8fde0;
	}
}

 ::openfl::events::Event SecurityErrorEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7a0f0e2b2707adbe_73_clone)
HXLINE(  74)		 ::openfl::events::SecurityErrorEvent event =  ::openfl::events::SecurityErrorEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->text,this->errorID);
HXLINE(  75)		event->target = this->target;
HXLINE(  76)		event->currentTarget = this->currentTarget;
HXLINE(  77)		event->eventPhase = this->eventPhase;
HXLINE(  78)		return event;
            	}


::String SecurityErrorEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_7a0f0e2b2707adbe_83_toString)
HXDLIN(  83)		return this->_hx___formatToString(HX_("SecurityErrorEvent",32,ea,b2,a1),::Array_obj< ::String >::fromData( _hx_array_data_072c9809_3,5));
            	}


::String SecurityErrorEvent_obj::SECURITY_ERROR;

 ::lime::utils::ObjectPool SecurityErrorEvent_obj::_hx___pool;


::hx::ObjectPtr< SecurityErrorEvent_obj > SecurityErrorEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< SecurityErrorEvent_obj > __this = new SecurityErrorEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return __this;
}

::hx::ObjectPtr< SecurityErrorEvent_obj > SecurityErrorEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id) {
	SecurityErrorEvent_obj *__this = (SecurityErrorEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SecurityErrorEvent_obj), true, "openfl.events.SecurityErrorEvent"));
	*(void **)__this = SecurityErrorEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return __this;
}

SecurityErrorEvent_obj::SecurityErrorEvent_obj()
{
}

::hx::Val SecurityErrorEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SecurityErrorEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
	}
	return false;
}

bool SecurityErrorEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SecurityErrorEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SecurityErrorEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SecurityErrorEvent_obj::SECURITY_ERROR,HX_("SECURITY_ERROR",a9,85,3b,cf)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &SecurityErrorEvent_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SecurityErrorEvent_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void SecurityErrorEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SecurityErrorEvent_obj::SECURITY_ERROR,"SECURITY_ERROR");
	HX_MARK_MEMBER_NAME(SecurityErrorEvent_obj::_hx___pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SecurityErrorEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SecurityErrorEvent_obj::SECURITY_ERROR,"SECURITY_ERROR");
	HX_VISIT_MEMBER_NAME(SecurityErrorEvent_obj::_hx___pool,"__pool");
};

#endif

::hx::Class SecurityErrorEvent_obj::__mClass;

static ::String SecurityErrorEvent_obj_sStaticFields[] = {
	HX_("SECURITY_ERROR",a9,85,3b,cf),
	HX_("__pool",fc,e3,54,f9),
	::String(null())
};

void SecurityErrorEvent_obj::__register()
{
	SecurityErrorEvent_obj _hx_dummy;
	SecurityErrorEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.SecurityErrorEvent",09,98,2c,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SecurityErrorEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &SecurityErrorEvent_obj::__SetStatic;
	__mClass->mMarkFunc = SecurityErrorEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SecurityErrorEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SecurityErrorEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SecurityErrorEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SecurityErrorEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SecurityErrorEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SecurityErrorEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SecurityErrorEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7a0f0e2b2707adbe_42_boot)
HXDLIN(  42)		SECURITY_ERROR = HX_("securityError",e8,28,7c,a2);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::events::SecurityErrorEvent _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7a0f0e2b2707adbe_44_boot)
HXDLIN(  44)			return  ::openfl::events::SecurityErrorEvent_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::events::SecurityErrorEvent event){
            			HX_STACKFRAME(&_hx_pos_7a0f0e2b2707adbe_45_boot)
HXLINE(  45)			event->_hx___init();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_7a0f0e2b2707adbe_44_boot)
HXDLIN(  44)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace events
