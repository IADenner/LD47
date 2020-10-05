// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_formats_swf_FilterType
#include <openfl/_internal/formats/swf/FilterType.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_timeline_FrameObject
#include <openfl/_internal/symbols/timeline/FrameObject.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_timeline_FrameObjectType
#include <openfl/_internal/symbols/timeline/FrameObjectType.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e5ebc3e2682e2688_27_new,"openfl._internal.symbols.timeline.FrameObject","new",0xd7745e94,"openfl._internal.symbols.timeline.FrameObject.new","openfl/_internal/symbols/timeline/FrameObject.hx",27,0x5288fa3a)
namespace openfl{
namespace _internal{
namespace symbols{
namespace timeline{

void FrameObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e5ebc3e2682e2688_27_new)
            	}

Dynamic FrameObject_obj::__CreateEmpty() { return new FrameObject_obj; }

void *FrameObject_obj::_hx_vtable = 0;

Dynamic FrameObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FrameObject_obj > _hx_result = new FrameObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FrameObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f59599c;
}


FrameObject_obj::FrameObject_obj()
{
}

void FrameObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameObject);
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_MARK_MEMBER_NAME(clipDepth,"clipDepth");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(filters,"filters");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(symbol,"symbol");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_END_CLASS();
}

void FrameObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(clipDepth,"clipDepth");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(filters,"filters");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(symbol,"symbol");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(visible,"visible");
}

::hx::Val FrameObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return ::hx::Val( depth ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return ::hx::Val( matrix ); }
		if (HX_FIELD_EQ(inName,"symbol") ) { return ::hx::Val( symbol ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { return ::hx::Val( filters ); }
		if (HX_FIELD_EQ(inName,"visible") ) { return ::hx::Val( visible ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return ::hx::Val( blendMode ); }
		if (HX_FIELD_EQ(inName,"clipDepth") ) { return ::hx::Val( clipDepth ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return ::hx::Val( cacheAsBitmap ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return ::hx::Val( colorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FrameObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::openfl::_internal::symbols::timeline::FrameObjectType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"symbol") ) { symbol=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { filters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clipDepth") ) { clipDepth=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { cacheAsBitmap=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blendMode",54,e4,37,0c));
	outFields->push(HX_("cacheAsBitmap",e3,82,0f,6a));
	outFields->push(HX_("clipDepth",13,40,41,f5));
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("filters",bb,a1,46,09));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("symbol",58,af,dd,ee));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("visible",72,78,24,a3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FrameObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FrameObject_obj,blendMode),HX_("blendMode",54,e4,37,0c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FrameObject_obj,cacheAsBitmap),HX_("cacheAsBitmap",e3,82,0f,6a)},
	{::hx::fsInt,(int)offsetof(FrameObject_obj,clipDepth),HX_("clipDepth",13,40,41,f5)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FrameObject_obj,colorTransform),HX_("colorTransform",89,d7,3f,ad)},
	{::hx::fsInt,(int)offsetof(FrameObject_obj,depth),HX_("depth",03,f1,29,d7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FrameObject_obj,filters),HX_("filters",bb,a1,46,09)},
	{::hx::fsInt,(int)offsetof(FrameObject_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(FrameObject_obj,matrix),HX_("matrix",41,36,c8,bb)},
	{::hx::fsString,(int)offsetof(FrameObject_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(FrameObject_obj,symbol),HX_("symbol",58,af,dd,ee)},
	{::hx::fsObject /*  ::openfl::_internal::symbols::timeline::FrameObjectType */ ,(int)offsetof(FrameObject_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FrameObject_obj,visible),HX_("visible",72,78,24,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FrameObject_obj_sStaticStorageInfo = 0;
#endif

static ::String FrameObject_obj_sMemberFields[] = {
	HX_("blendMode",54,e4,37,0c),
	HX_("cacheAsBitmap",e3,82,0f,6a),
	HX_("clipDepth",13,40,41,f5),
	HX_("colorTransform",89,d7,3f,ad),
	HX_("depth",03,f1,29,d7),
	HX_("filters",bb,a1,46,09),
	HX_("id",db,5b,00,00),
	HX_("matrix",41,36,c8,bb),
	HX_("name",4b,72,ff,48),
	HX_("symbol",58,af,dd,ee),
	HX_("type",ba,f2,08,4d),
	HX_("visible",72,78,24,a3),
	::String(null()) };

::hx::Class FrameObject_obj::__mClass;

void FrameObject_obj::__register()
{
	FrameObject_obj _hx_dummy;
	FrameObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.symbols.timeline.FrameObject",a2,c4,1c,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FrameObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FrameObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FrameObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FrameObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
} // end namespace timeline
