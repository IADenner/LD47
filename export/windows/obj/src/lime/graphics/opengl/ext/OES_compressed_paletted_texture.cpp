// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_compressed_paletted_texture
#include <lime/graphics/opengl/ext/OES_compressed_paletted_texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_169dd139fd8d75fb_4_new,"lime.graphics.opengl.ext.OES_compressed_paletted_texture","new",0x4e71e5b1,"lime.graphics.opengl.ext.OES_compressed_paletted_texture.new","lime/graphics/opengl/ext/OES_compressed_paletted_texture.hx",4,0x52203801)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_compressed_paletted_texture_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_169dd139fd8d75fb_4_new)
HXLINE(  15)		this->PALETTE8_RGB5_A1_OES = 35737;
HXLINE(  14)		this->PALETTE8_RGBA4_OES = 35736;
HXLINE(  13)		this->PALETTE8_R5_G6_B5_OES = 35735;
HXLINE(  12)		this->PALETTE8_RGBA8_OES = 35734;
HXLINE(  11)		this->PALETTE8_RGB8_OES = 35733;
HXLINE(  10)		this->PALETTE4_RGB5_A1_OES = 35732;
HXLINE(   9)		this->PALETTE4_RGBA4_OES = 35731;
HXLINE(   8)		this->PALETTE4_R5_G6_B5_OES = 35730;
HXLINE(   7)		this->PALETTE4_RGBA8_OES = 35729;
HXLINE(   6)		this->PALETTE4_RGB8_OES = 35728;
            	}

Dynamic OES_compressed_paletted_texture_obj::__CreateEmpty() { return new OES_compressed_paletted_texture_obj; }

void *OES_compressed_paletted_texture_obj::_hx_vtable = 0;

Dynamic OES_compressed_paletted_texture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_compressed_paletted_texture_obj > _hx_result = new OES_compressed_paletted_texture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_compressed_paletted_texture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6506bab7;
}


OES_compressed_paletted_texture_obj::OES_compressed_paletted_texture_obj()
{
}

::hx::Val OES_compressed_paletted_texture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGB8_OES") ) { return ::hx::Val( PALETTE4_RGB8_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGB8_OES") ) { return ::hx::Val( PALETTE8_RGB8_OES ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGBA8_OES") ) { return ::hx::Val( PALETTE4_RGBA8_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE4_RGBA4_OES") ) { return ::hx::Val( PALETTE4_RGBA4_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGBA8_OES") ) { return ::hx::Val( PALETTE8_RGBA8_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGBA4_OES") ) { return ::hx::Val( PALETTE8_RGBA4_OES ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGB5_A1_OES") ) { return ::hx::Val( PALETTE4_RGB5_A1_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGB5_A1_OES") ) { return ::hx::Val( PALETTE8_RGB5_A1_OES ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"PALETTE4_R5_G6_B5_OES") ) { return ::hx::Val( PALETTE4_R5_G6_B5_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE8_R5_G6_B5_OES") ) { return ::hx::Val( PALETTE8_R5_G6_B5_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_compressed_paletted_texture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGB8_OES") ) { PALETTE4_RGB8_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGB8_OES") ) { PALETTE8_RGB8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGBA8_OES") ) { PALETTE4_RGBA8_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE4_RGBA4_OES") ) { PALETTE4_RGBA4_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGBA8_OES") ) { PALETTE8_RGBA8_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGBA4_OES") ) { PALETTE8_RGBA4_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGB5_A1_OES") ) { PALETTE4_RGB5_A1_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGB5_A1_OES") ) { PALETTE8_RGB5_A1_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"PALETTE4_R5_G6_B5_OES") ) { PALETTE4_R5_G6_B5_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE8_R5_G6_B5_OES") ) { PALETTE8_R5_G6_B5_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_compressed_paletted_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("PALETTE4_RGB8_OES",6f,94,1b,77));
	outFields->push(HX_("PALETTE4_RGBA8_OES",fc,e0,36,f0));
	outFields->push(HX_("PALETTE4_R5_G6_B5_OES",0b,45,14,23));
	outFields->push(HX_("PALETTE4_RGBA4_OES",f8,8e,9c,a2));
	outFields->push(HX_("PALETTE4_RGB5_A1_OES",3f,5b,48,08));
	outFields->push(HX_("PALETTE8_RGB8_OES",eb,73,45,78));
	outFields->push(HX_("PALETTE8_RGBA8_OES",00,8e,b0,f3));
	outFields->push(HX_("PALETTE8_R5_G6_B5_OES",87,92,c9,2d));
	outFields->push(HX_("PALETTE8_RGBA4_OES",fc,3b,16,a6));
	outFields->push(HX_("PALETTE8_RGB5_A1_OES",43,51,4a,1f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_compressed_paletted_texture_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE4_RGB8_OES),HX_("PALETTE4_RGB8_OES",6f,94,1b,77)},
	{::hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE4_RGBA8_OES),HX_("PALETTE4_RGBA8_OES",fc,e0,36,f0)},
	{::hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE4_R5_G6_B5_OES),HX_("PALETTE4_R5_G6_B5_OES",0b,45,14,23)},
	{::hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE4_RGBA4_OES),HX_("PALETTE4_RGBA4_OES",f8,8e,9c,a2)},
	{::hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE4_RGB5_A1_OES),HX_("PALETTE4_RGB5_A1_OES",3f,5b,48,08)},
	{::hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE8_RGB8_OES),HX_("PALETTE8_RGB8_OES",eb,73,45,78)},
	{::hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE8_RGBA8_OES),HX_("PALETTE8_RGBA8_OES",00,8e,b0,f3)},
	{::hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE8_R5_G6_B5_OES),HX_("PALETTE8_R5_G6_B5_OES",87,92,c9,2d)},
	{::hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE8_RGBA4_OES),HX_("PALETTE8_RGBA4_OES",fc,3b,16,a6)},
	{::hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE8_RGB5_A1_OES),HX_("PALETTE8_RGB5_A1_OES",43,51,4a,1f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_compressed_paletted_texture_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_compressed_paletted_texture_obj_sMemberFields[] = {
	HX_("PALETTE4_RGB8_OES",6f,94,1b,77),
	HX_("PALETTE4_RGBA8_OES",fc,e0,36,f0),
	HX_("PALETTE4_R5_G6_B5_OES",0b,45,14,23),
	HX_("PALETTE4_RGBA4_OES",f8,8e,9c,a2),
	HX_("PALETTE4_RGB5_A1_OES",3f,5b,48,08),
	HX_("PALETTE8_RGB8_OES",eb,73,45,78),
	HX_("PALETTE8_RGBA8_OES",00,8e,b0,f3),
	HX_("PALETTE8_R5_G6_B5_OES",87,92,c9,2d),
	HX_("PALETTE8_RGBA4_OES",fc,3b,16,a6),
	HX_("PALETTE8_RGB5_A1_OES",43,51,4a,1f),
	::String(null()) };

::hx::Class OES_compressed_paletted_texture_obj::__mClass;

void OES_compressed_paletted_texture_obj::__register()
{
	OES_compressed_paletted_texture_obj _hx_dummy;
	OES_compressed_paletted_texture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_compressed_paletted_texture",3f,39,e7,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_compressed_paletted_texture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_compressed_paletted_texture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_compressed_paletted_texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_compressed_paletted_texture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext