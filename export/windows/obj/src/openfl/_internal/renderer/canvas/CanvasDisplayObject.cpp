// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasDisplayObject
#include <openfl/_internal/renderer/canvas/CanvasDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_eb9e22bc341d245c_15_render,"openfl._internal.renderer.canvas.CanvasDisplayObject","render",0x4f6734b6,"openfl._internal.renderer.canvas.CanvasDisplayObject.render","openfl/_internal/renderer/canvas/CanvasDisplayObject.hx",15,0x74b28f52)
HX_LOCAL_STACK_FRAME(_hx_pos_eb9e22bc341d245c_12_boot,"openfl._internal.renderer.canvas.CanvasDisplayObject","boot",0xaf423592,"openfl._internal.renderer.canvas.CanvasDisplayObject.boot","openfl/_internal/renderer/canvas/CanvasDisplayObject.hx",12,0x74b28f52)
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

void CanvasDisplayObject_obj::__construct() { }

Dynamic CanvasDisplayObject_obj::__CreateEmpty() { return new CanvasDisplayObject_obj; }

void *CanvasDisplayObject_obj::_hx_vtable = 0;

Dynamic CanvasDisplayObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasDisplayObject_obj > _hx_result = new CanvasDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasDisplayObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6cf4ae0a;
}

void CanvasDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_eb9e22bc341d245c_15_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasDisplayObject_obj,render,(void))


CanvasDisplayObject_obj::CanvasDisplayObject_obj()
{
}

bool CanvasDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasDisplayObject_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CanvasDisplayObject_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CanvasDisplayObject_obj::__mClass;

static ::String CanvasDisplayObject_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	::String(null())
};

void CanvasDisplayObject_obj::__register()
{
	CanvasDisplayObject_obj _hx_dummy;
	CanvasDisplayObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer.canvas.CanvasDisplayObject",0e,2b,eb,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasDisplayObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasDisplayObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasDisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasDisplayObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasDisplayObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb9e22bc341d245c_12_boot)
HXDLIN(  12)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
