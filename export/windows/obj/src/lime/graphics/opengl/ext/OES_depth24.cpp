// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth24
#include <lime/graphics/opengl/ext/OES_depth24.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f8d54f752c084853_6_new,"lime.graphics.opengl.ext.OES_depth24","new",0x7a2dbe93,"lime.graphics.opengl.ext.OES_depth24.new","lime/graphics/opengl/ext/OES_depth24.hx",6,0x5d6ef45f)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_depth24_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f8d54f752c084853_6_new)
HXDLIN(   6)		this->DEPTH_COMPONENT24_OES = 33190;
            	}

Dynamic OES_depth24_obj::__CreateEmpty() { return new OES_depth24_obj; }

void *OES_depth24_obj::_hx_vtable = 0;

Dynamic OES_depth24_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_depth24_obj > _hx_result = new OES_depth24_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_depth24_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x43157935;
}


OES_depth24_obj::OES_depth24_obj()
{
}

::hx::Val OES_depth24_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT24_OES") ) { return ::hx::Val( DEPTH_COMPONENT24_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_depth24_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT24_OES") ) { DEPTH_COMPONENT24_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_depth24_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("DEPTH_COMPONENT24_OES",01,7e,8e,35));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_depth24_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_depth24_obj,DEPTH_COMPONENT24_OES),HX_("DEPTH_COMPONENT24_OES",01,7e,8e,35)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_depth24_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_depth24_obj_sMemberFields[] = {
	HX_("DEPTH_COMPONENT24_OES",01,7e,8e,35),
	::String(null()) };

::hx::Class OES_depth24_obj::__mClass;

void OES_depth24_obj::__register()
{
	OES_depth24_obj _hx_dummy;
	OES_depth24_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_depth24",21,79,08,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_depth24_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_depth24_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_depth24_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_depth24_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext