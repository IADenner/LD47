// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_buffer
#include <lime/graphics/opengl/ext/NV_read_buffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7fd5b608eccbd553_6_new,"lime.graphics.opengl.ext.NV_read_buffer","new",0x0be51166,"lime.graphics.opengl.ext.NV_read_buffer.new","lime/graphics/opengl/ext/NV_read_buffer.hx",6,0x21ff5de8)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void NV_read_buffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7fd5b608eccbd553_6_new)
HXDLIN(   6)		this->READ_BUFFER_NV = 3074;
            	}

Dynamic NV_read_buffer_obj::__CreateEmpty() { return new NV_read_buffer_obj; }

void *NV_read_buffer_obj::_hx_vtable = 0;

Dynamic NV_read_buffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NV_read_buffer_obj > _hx_result = new NV_read_buffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NV_read_buffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x060fe9c4;
}


NV_read_buffer_obj::NV_read_buffer_obj()
{
}

::hx::Val NV_read_buffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"READ_BUFFER_NV") ) { return ::hx::Val( READ_BUFFER_NV ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NV_read_buffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"READ_BUFFER_NV") ) { READ_BUFFER_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_read_buffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("READ_BUFFER_NV",fe,e7,b0,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NV_read_buffer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(NV_read_buffer_obj,READ_BUFFER_NV),HX_("READ_BUFFER_NV",fe,e7,b0,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NV_read_buffer_obj_sStaticStorageInfo = 0;
#endif

static ::String NV_read_buffer_obj_sMemberFields[] = {
	HX_("READ_BUFFER_NV",fe,e7,b0,1d),
	::String(null()) };

::hx::Class NV_read_buffer_obj::__mClass;

void NV_read_buffer_obj::__register()
{
	NV_read_buffer_obj _hx_dummy;
	NV_read_buffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.NV_read_buffer",74,26,23,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NV_read_buffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NV_read_buffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NV_read_buffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NV_read_buffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
