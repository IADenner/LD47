// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_formats_agal__AGALConverter_ProgramType
#include <openfl/_internal/formats/agal/_AGALConverter/ProgramType.h>
#endif
namespace openfl{
namespace _internal{
namespace formats{
namespace agal{
namespace _AGALConverter{

::openfl::_internal::formats::agal::_AGALConverter::ProgramType ProgramType_obj::FRAGMENT;

::openfl::_internal::formats::agal::_AGALConverter::ProgramType ProgramType_obj::VERTEX;

bool ProgramType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FRAGMENT",d0,ef,6a,07)) { outValue = ProgramType_obj::FRAGMENT; return true; }
	if (inName==HX_("VERTEX",64,87,ca,53)) { outValue = ProgramType_obj::VERTEX; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ProgramType_obj)

int ProgramType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FRAGMENT",d0,ef,6a,07)) return 1;
	if (inName==HX_("VERTEX",64,87,ca,53)) return 0;
	return super::__FindIndex(inName);
}

int ProgramType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FRAGMENT",d0,ef,6a,07)) return 0;
	if (inName==HX_("VERTEX",64,87,ca,53)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ProgramType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FRAGMENT",d0,ef,6a,07)) return FRAGMENT;
	if (inName==HX_("VERTEX",64,87,ca,53)) return VERTEX;
	return super::__Field(inName,inCallProp);
}

static ::String ProgramType_obj_sStaticFields[] = {
	HX_("VERTEX",64,87,ca,53),
	HX_("FRAGMENT",d0,ef,6a,07),
	::String(null())
};

::hx::Class ProgramType_obj::__mClass;

Dynamic __Create_ProgramType_obj() { return new ProgramType_obj; }

void ProgramType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("openfl._internal.formats.agal._AGALConverter.ProgramType",5b,b6,f6,00), ::hx::TCanCast< ProgramType_obj >,ProgramType_obj_sStaticFields,0,
	&__Create_ProgramType_obj, &__Create,
	&super::__SGetClass(), &CreateProgramType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ProgramType_obj::__GetStatic;
}

void ProgramType_obj::__boot()
{
FRAGMENT = ::hx::CreateConstEnum< ProgramType_obj >(HX_("FRAGMENT",d0,ef,6a,07),1);
VERTEX = ::hx::CreateConstEnum< ProgramType_obj >(HX_("VERTEX",64,87,ca,53),0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace agal
} // end namespace _AGALConverter
