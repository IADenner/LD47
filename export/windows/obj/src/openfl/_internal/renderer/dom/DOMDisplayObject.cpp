// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_dom_DOMDisplayObject
#include <openfl/_internal/renderer/dom/DOMDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_861188b285f627bd_12_clear,"openfl._internal.renderer.dom.DOMDisplayObject","clear",0x6073f245,"openfl._internal.renderer.dom.DOMDisplayObject.clear","openfl/_internal/renderer/dom/DOMDisplayObject.hx",12,0xeb6cef58)
HX_LOCAL_STACK_FRAME(_hx_pos_861188b285f627bd_23_render,"openfl._internal.renderer.dom.DOMDisplayObject","render",0x02818b9e,"openfl._internal.renderer.dom.DOMDisplayObject.render","openfl/_internal/renderer/dom/DOMDisplayObject.hx",23,0xeb6cef58)
HX_LOCAL_STACK_FRAME(_hx_pos_861188b285f627bd_9_boot,"openfl._internal.renderer.dom.DOMDisplayObject","boot",0x2a41827a,"openfl._internal.renderer.dom.DOMDisplayObject.boot","openfl/_internal/renderer/dom/DOMDisplayObject.hx",9,0xeb6cef58)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

void DOMDisplayObject_obj::__construct() { }

Dynamic DOMDisplayObject_obj::__CreateEmpty() { return new DOMDisplayObject_obj; }

void *DOMDisplayObject_obj::_hx_vtable = 0;

Dynamic DOMDisplayObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMDisplayObject_obj > _hx_result = new DOMDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMDisplayObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e810d32;
}

void DOMDisplayObject_obj::clear( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_861188b285f627bd_12_clear)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObject_obj,clear,(void))

void DOMDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_861188b285f627bd_23_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObject_obj,render,(void))


DOMDisplayObject_obj::DOMDisplayObject_obj()
{
}

bool DOMDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMDisplayObject_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DOMDisplayObject_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DOMDisplayObject_obj::__mClass;

static ::String DOMDisplayObject_obj_sStaticFields[] = {
	HX_("clear",8d,71,5b,48),
	HX_("render",56,6b,29,05),
	::String(null())
};

void DOMDisplayObject_obj::__register()
{
	DOMDisplayObject_obj _hx_dummy;
	DOMDisplayObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer.dom.DOMDisplayObject",26,07,ff,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMDisplayObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMDisplayObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMDisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMDisplayObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DOMDisplayObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_861188b285f627bd_9_boot)
HXDLIN(   9)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
