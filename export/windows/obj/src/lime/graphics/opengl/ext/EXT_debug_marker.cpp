// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_debug_marker
#include <lime/graphics/opengl/ext/EXT_debug_marker.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d4093c89e1674d3_5_new,"lime.graphics.opengl.ext.EXT_debug_marker","new",0xd4b959b8,"lime.graphics.opengl.ext.EXT_debug_marker.new","lime/graphics/opengl/ext/EXT_debug_marker.hx",5,0xec070956)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_debug_marker_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2d4093c89e1674d3_5_new)
            	}

Dynamic EXT_debug_marker_obj::__CreateEmpty() { return new EXT_debug_marker_obj; }

void *EXT_debug_marker_obj::_hx_vtable = 0;

Dynamic EXT_debug_marker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_debug_marker_obj > _hx_result = new EXT_debug_marker_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_debug_marker_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18d49516;
}


EXT_debug_marker_obj::EXT_debug_marker_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EXT_debug_marker_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EXT_debug_marker_obj_sStaticStorageInfo = 0;
#endif

::hx::Class EXT_debug_marker_obj::__mClass;

void EXT_debug_marker_obj::__register()
{
	EXT_debug_marker_obj _hx_dummy;
	EXT_debug_marker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_debug_marker",c6,5d,b4,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EXT_debug_marker_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_debug_marker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_debug_marker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
