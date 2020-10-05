// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DTextField
#include <openfl/_internal/renderer/context3D/Context3DTextField.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_95420d7511b8e364_18_render,"openfl._internal.renderer.context3D.Context3DTextField","render",0x823c412e,"openfl._internal.renderer.context3D.Context3DTextField.render","openfl/_internal/renderer/context3D/Context3DTextField.hx",18,0x12c70ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_95420d7511b8e364_28_renderMask,"openfl._internal.renderer.context3D.Context3DTextField","renderMask",0x0b8edd3a,"openfl._internal.renderer.context3D.Context3DTextField.renderMask","openfl/_internal/renderer/context3D/Context3DTextField.hx",28,0x12c70ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_95420d7511b8e364_15_boot,"openfl._internal.renderer.context3D.Context3DTextField","boot",0x6ea0b40a,"openfl._internal.renderer.context3D.Context3DTextField.boot","openfl/_internal/renderer/context3D/Context3DTextField.hx",15,0x12c70ba8)
namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{

void Context3DTextField_obj::__construct() { }

Dynamic Context3DTextField_obj::__CreateEmpty() { return new Context3DTextField_obj; }

void *Context3DTextField_obj::_hx_vtable = 0;

Dynamic Context3DTextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DTextField_obj > _hx_result = new Context3DTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5e3b1de6;
}

void Context3DTextField_obj::render( ::openfl::text::TextField textField, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_95420d7511b8e364_18_render)
HXLINE(  22)		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(textField,( ( ::openfl::display::CairoRenderer)(renderer->_hx___softwareRenderer) ),textField->_hx___worldTransform);
HXLINE(  24)		textField->_hx___graphics->_hx___hardwareDirty = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTextField_obj,render,(void))

void Context3DTextField_obj::renderMask( ::openfl::text::TextField textField, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_95420d7511b8e364_28_renderMask)
HXLINE(  32)		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(textField,( ( ::openfl::display::CairoRenderer)(renderer->_hx___softwareRenderer) ),textField->_hx___worldTransform);
HXLINE(  34)		textField->_hx___graphics->_hx___hardwareDirty = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTextField_obj,renderMask,(void))


Context3DTextField_obj::Context3DTextField_obj()
{
}

bool Context3DTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DTextField_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Context3DTextField_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Context3DTextField_obj::__mClass;

static ::String Context3DTextField_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void Context3DTextField_obj::__register()
{
	Context3DTextField_obj _hx_dummy;
	Context3DTextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer.context3D.Context3DTextField",96,3f,0d,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DTextField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DTextField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DTextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DTextField_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_95420d7511b8e364_15_boot)
HXDLIN(  15)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D
