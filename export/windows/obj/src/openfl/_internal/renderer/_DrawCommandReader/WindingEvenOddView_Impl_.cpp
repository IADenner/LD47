// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_WindingEvenOddView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/WindingEvenOddView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8368c8805a35f20c_1019__new,"openfl._internal.renderer._DrawCommandReader.WindingEvenOddView_Impl_","_new",0x241297a7,"openfl._internal.renderer._DrawCommandReader.WindingEvenOddView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",1019,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void WindingEvenOddView_Impl__obj::__construct() { }

Dynamic WindingEvenOddView_Impl__obj::__CreateEmpty() { return new WindingEvenOddView_Impl__obj; }

void *WindingEvenOddView_Impl__obj::_hx_vtable = 0;

Dynamic WindingEvenOddView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WindingEvenOddView_Impl__obj > _hx_result = new WindingEvenOddView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WindingEvenOddView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x058c0e7a;
}

 ::openfl::_internal::renderer::DrawCommandReader WindingEvenOddView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_8368c8805a35f20c_1019__new)
HXDLIN(1019)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN(1019)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WindingEvenOddView_Impl__obj,_new,return )


WindingEvenOddView_Impl__obj::WindingEvenOddView_Impl__obj()
{
}

bool WindingEvenOddView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WindingEvenOddView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *WindingEvenOddView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class WindingEvenOddView_Impl__obj::__mClass;

static ::String WindingEvenOddView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void WindingEvenOddView_Impl__obj::__register()
{
	WindingEvenOddView_Impl__obj _hx_dummy;
	WindingEvenOddView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer._DrawCommandReader.WindingEvenOddView_Impl_",e8,03,dc,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WindingEvenOddView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WindingEvenOddView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< WindingEvenOddView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindingEvenOddView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindingEvenOddView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
