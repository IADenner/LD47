// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl_system_ApplicationDomain
#include <openfl/system/ApplicationDomain.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a0a7282aa095189_74_new,"openfl.system.ApplicationDomain","new",0x87171265,"openfl.system.ApplicationDomain.new","openfl/system/ApplicationDomain.hx",74,0xc87242cb)
HX_LOCAL_STACK_FRAME(_hx_pos_5a0a7282aa095189_95_getDefinition,"openfl.system.ApplicationDomain","getDefinition",0xdd020c0e,"openfl.system.ApplicationDomain.getDefinition","openfl/system/ApplicationDomain.hx",95,0xc87242cb)
HX_LOCAL_STACK_FRAME(_hx_pos_5a0a7282aa095189_111_hasDefinition,"openfl.system.ApplicationDomain","hasDefinition",0x9ae667d2,"openfl.system.ApplicationDomain.hasDefinition","openfl/system/ApplicationDomain.hx",111,0xc87242cb)
HX_LOCAL_STACK_FRAME(_hx_pos_5a0a7282aa095189_51_boot,"openfl.system.ApplicationDomain","boot",0xa532068d,"openfl.system.ApplicationDomain.boot","openfl/system/ApplicationDomain.hx",51,0xc87242cb)
namespace openfl{
namespace _hx_system{

void ApplicationDomain_obj::__construct( ::openfl::_hx_system::ApplicationDomain parentDomain){
            	HX_STACKFRAME(&_hx_pos_5a0a7282aa095189_74_new)
HXDLIN(  74)		if (::hx::IsNotNull( parentDomain )) {
HXLINE(  76)			this->parentDomain = parentDomain;
            		}
            		else {
HXLINE(  80)			this->parentDomain = ::openfl::_hx_system::ApplicationDomain_obj::currentDomain;
            		}
            	}

Dynamic ApplicationDomain_obj::__CreateEmpty() { return new ApplicationDomain_obj; }

void *ApplicationDomain_obj::_hx_vtable = 0;

Dynamic ApplicationDomain_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ApplicationDomain_obj > _hx_result = new ApplicationDomain_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ApplicationDomain_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ad5ad35;
}

::hx::Class ApplicationDomain_obj::getDefinition(::String name){
            	HX_STACKFRAME(&_hx_pos_5a0a7282aa095189_95_getDefinition)
HXDLIN(  95)		return ::Type_obj::resolveClass(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationDomain_obj,getDefinition,return )

bool ApplicationDomain_obj::hasDefinition(::String name){
            	HX_STACKFRAME(&_hx_pos_5a0a7282aa095189_111_hasDefinition)
HXDLIN( 111)		return ::hx::IsNotNull( ::Type_obj::resolveClass(name) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationDomain_obj,hasDefinition,return )

 ::openfl::_hx_system::ApplicationDomain ApplicationDomain_obj::currentDomain;


::hx::ObjectPtr< ApplicationDomain_obj > ApplicationDomain_obj::__new( ::openfl::_hx_system::ApplicationDomain parentDomain) {
	::hx::ObjectPtr< ApplicationDomain_obj > __this = new ApplicationDomain_obj();
	__this->__construct(parentDomain);
	return __this;
}

::hx::ObjectPtr< ApplicationDomain_obj > ApplicationDomain_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::_hx_system::ApplicationDomain parentDomain) {
	ApplicationDomain_obj *__this = (ApplicationDomain_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ApplicationDomain_obj), true, "openfl.system.ApplicationDomain"));
	*(void **)__this = ApplicationDomain_obj::_hx_vtable;
	__this->__construct(parentDomain);
	return __this;
}

ApplicationDomain_obj::ApplicationDomain_obj()
{
}

void ApplicationDomain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationDomain);
	HX_MARK_MEMBER_NAME(parentDomain,"parentDomain");
	HX_MARK_END_CLASS();
}

void ApplicationDomain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentDomain,"parentDomain");
}

::hx::Val ApplicationDomain_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"parentDomain") ) { return ::hx::Val( parentDomain ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDefinition") ) { return ::hx::Val( getDefinition_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasDefinition") ) { return ::hx::Val( hasDefinition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ApplicationDomain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { outValue = ( currentDomain ); return true; }
	}
	return false;
}

::hx::Val ApplicationDomain_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"parentDomain") ) { parentDomain=inValue.Cast<  ::openfl::_hx_system::ApplicationDomain >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ApplicationDomain_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { currentDomain=ioValue.Cast<  ::openfl::_hx_system::ApplicationDomain >(); return true; }
	}
	return false;
}

void ApplicationDomain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parentDomain",0e,66,ea,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ApplicationDomain_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_hx_system::ApplicationDomain */ ,(int)offsetof(ApplicationDomain_obj,parentDomain),HX_("parentDomain",0e,66,ea,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ApplicationDomain_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_hx_system::ApplicationDomain */ ,(void *) &ApplicationDomain_obj::currentDomain,HX_("currentDomain",5d,32,dd,10)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ApplicationDomain_obj_sMemberFields[] = {
	HX_("parentDomain",0e,66,ea,3f),
	HX_("getDefinition",c9,31,80,48),
	HX_("hasDefinition",8d,8d,64,06),
	::String(null()) };

static void ApplicationDomain_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationDomain_obj::currentDomain,"currentDomain");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ApplicationDomain_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationDomain_obj::currentDomain,"currentDomain");
};

#endif

::hx::Class ApplicationDomain_obj::__mClass;

static ::String ApplicationDomain_obj_sStaticFields[] = {
	HX_("currentDomain",5d,32,dd,10),
	::String(null())
};

void ApplicationDomain_obj::__register()
{
	ApplicationDomain_obj _hx_dummy;
	ApplicationDomain_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.system.ApplicationDomain",f3,fb,62,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ApplicationDomain_obj::__GetStatic;
	__mClass->mSetStaticField = &ApplicationDomain_obj::__SetStatic;
	__mClass->mMarkFunc = ApplicationDomain_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ApplicationDomain_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ApplicationDomain_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ApplicationDomain_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ApplicationDomain_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ApplicationDomain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ApplicationDomain_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ApplicationDomain_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_5a0a7282aa095189_51_boot)
HXDLIN(  51)		currentDomain =  ::openfl::_hx_system::ApplicationDomain_obj::__alloc( HX_CTX ,null());
            	}
}

} // end namespace openfl
} // end namespace system
