// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime__internal_graphics_ImageDataUtil
#include <lime/_internal/graphics/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_DropShadowFilter
#include <openfl/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_786269b8d678908e_244_new,"openfl.filters.DropShadowFilter","new",0xf784b84a,"openfl.filters.DropShadowFilter.new","openfl/filters/DropShadowFilter.hx",244,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_271_clone,"openfl.filters.DropShadowFilter","clone",0x1b8d49c7,"openfl.filters.DropShadowFilter.clone","openfl/filters/DropShadowFilter.hx",271,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_276___applyFilter,"openfl.filters.DropShadowFilter","__applyFilter",0x5aedd110,"openfl.filters.DropShadowFilter.__applyFilter","openfl/filters/DropShadowFilter.hx",276,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_296___updateSize,"openfl.filters.DropShadowFilter","__updateSize",0xd6a7d160,"openfl.filters.DropShadowFilter.__updateSize","openfl/filters/DropShadowFilter.hx",296,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_308_get_alpha,"openfl.filters.DropShadowFilter","get_alpha",0xc136b71f,"openfl.filters.DropShadowFilter.get_alpha","openfl/filters/DropShadowFilter.hx",308,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_312_set_alpha,"openfl.filters.DropShadowFilter","set_alpha",0xa487a32b,"openfl.filters.DropShadowFilter.set_alpha","openfl/filters/DropShadowFilter.hx",312,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_319_get_angle,"openfl.filters.DropShadowFilter","get_angle",0xc2825394,"openfl.filters.DropShadowFilter.get_angle","openfl/filters/DropShadowFilter.hx",319,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_323_set_angle,"openfl.filters.DropShadowFilter","set_angle",0xa5d33fa0,"openfl.filters.DropShadowFilter.set_angle","openfl/filters/DropShadowFilter.hx",323,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_335_get_blurX,"openfl.filters.DropShadowFilter","get_blurX",0x54a11f92,"openfl.filters.DropShadowFilter.get_blurX","openfl/filters/DropShadowFilter.hx",335,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_339_set_blurX,"openfl.filters.DropShadowFilter","set_blurX",0x37f20b9e,"openfl.filters.DropShadowFilter.set_blurX","openfl/filters/DropShadowFilter.hx",339,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_351_get_blurY,"openfl.filters.DropShadowFilter","get_blurY",0x54a11f93,"openfl.filters.DropShadowFilter.get_blurY","openfl/filters/DropShadowFilter.hx",351,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_355_set_blurY,"openfl.filters.DropShadowFilter","set_blurY",0x37f20b9f,"openfl.filters.DropShadowFilter.set_blurY","openfl/filters/DropShadowFilter.hx",355,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_367_get_color,"openfl.filters.DropShadowFilter","get_color",0xe9fc8124,"openfl.filters.DropShadowFilter.get_color","openfl/filters/DropShadowFilter.hx",367,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_371_set_color,"openfl.filters.DropShadowFilter","set_color",0xcd4d6d30,"openfl.filters.DropShadowFilter.set_color","openfl/filters/DropShadowFilter.hx",371,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_378_get_distance,"openfl.filters.DropShadowFilter","get_distance",0xba1f1214,"openfl.filters.DropShadowFilter.get_distance","openfl/filters/DropShadowFilter.hx",378,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_382_set_distance,"openfl.filters.DropShadowFilter","set_distance",0xcf183588,"openfl.filters.DropShadowFilter.set_distance","openfl/filters/DropShadowFilter.hx",382,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_394_get_hideObject,"openfl.filters.DropShadowFilter","get_hideObject",0xee6f59c0,"openfl.filters.DropShadowFilter.get_hideObject","openfl/filters/DropShadowFilter.hx",394,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_398_set_hideObject,"openfl.filters.DropShadowFilter","set_hideObject",0x0e8f4234,"openfl.filters.DropShadowFilter.set_hideObject","openfl/filters/DropShadowFilter.hx",398,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_409_get_inner,"openfl.filters.DropShadowFilter","get_inner",0x5dbc4157,"openfl.filters.DropShadowFilter.get_inner","openfl/filters/DropShadowFilter.hx",409,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_413_set_inner,"openfl.filters.DropShadowFilter","set_inner",0x410d2d63,"openfl.filters.DropShadowFilter.set_inner","openfl/filters/DropShadowFilter.hx",413,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_420_get_knockout,"openfl.filters.DropShadowFilter","get_knockout",0xbdcb28d9,"openfl.filters.DropShadowFilter.get_knockout","openfl/filters/DropShadowFilter.hx",420,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_424_set_knockout,"openfl.filters.DropShadowFilter","set_knockout",0xd2c44c4d,"openfl.filters.DropShadowFilter.set_knockout","openfl/filters/DropShadowFilter.hx",424,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_431_get_quality,"openfl.filters.DropShadowFilter","get_quality",0x17e046c0,"openfl.filters.DropShadowFilter.get_quality","openfl/filters/DropShadowFilter.hx",431,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_435_set_quality,"openfl.filters.DropShadowFilter","set_quality",0x224d4dcc,"openfl.filters.DropShadowFilter.set_quality","openfl/filters/DropShadowFilter.hx",435,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_442_get_strength,"openfl.filters.DropShadowFilter","get_strength",0xdcb45160,"openfl.filters.DropShadowFilter.get_strength","openfl/filters/DropShadowFilter.hx",442,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_446_set_strength,"openfl.filters.DropShadowFilter","set_strength",0xf1ad74d4,"openfl.filters.DropShadowFilter.set_strength","openfl/filters/DropShadowFilter.hx",446,0x048fdea4)
namespace openfl{
namespace filters{

void DropShadowFilter_obj::__construct(::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_angle,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout,::hx::Null< bool >  __o_hideObject){
            		Float distance = __o_distance.Default(4);
            		Float angle = __o_angle.Default(45);
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(1);
            		Float blurX = __o_blurX.Default(4);
            		Float blurY = __o_blurY.Default(4);
            		Float strength = __o_strength.Default(1);
            		int quality = __o_quality.Default(1);
            		bool inner = __o_inner.Default(false);
            		bool knockout = __o_knockout.Default(false);
            		bool hideObject = __o_hideObject.Default(false);
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_244_new)
HXLINE( 245)		super::__construct();
HXLINE( 247)		this->_hx___offsetX = ( (Float)(0) );
HXLINE( 248)		this->_hx___offsetY = ( (Float)(0) );
HXLINE( 250)		this->_hx___distance = distance;
HXLINE( 251)		this->_hx___angle = angle;
HXLINE( 252)		this->_hx___color = color;
HXLINE( 253)		this->_hx___alpha = alpha;
HXLINE( 254)		this->_hx___blurX = blurX;
HXLINE( 255)		this->_hx___blurY = blurY;
HXLINE( 256)		this->_hx___strength = strength;
HXLINE( 257)		this->_hx___quality = quality;
HXLINE( 258)		this->_hx___inner = inner;
HXLINE( 259)		this->_hx___knockout = knockout;
HXLINE( 260)		this->_hx___hideObject = hideObject;
HXLINE( 262)		this->_hx___updateSize();
HXLINE( 264)		this->_hx___needSecondBitmapData = true;
HXLINE( 265)		this->_hx___preserveObject = !(this->_hx___hideObject);
HXLINE( 266)		this->_hx___renderDirty = true;
            	}

Dynamic DropShadowFilter_obj::__CreateEmpty() { return new DropShadowFilter_obj; }

void *DropShadowFilter_obj::_hx_vtable = 0;

Dynamic DropShadowFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropShadowFilter_obj > _hx_result = new DropShadowFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return _hx_result;
}

bool DropShadowFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x26de6bd2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x26de6bd2;
	} else {
		return inClassId==(int)0x2944c4ee;
	}
}

 ::openfl::filters::BitmapFilter DropShadowFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_786269b8d678908e_271_clone)
HXDLIN( 271)		return  ::openfl::filters::DropShadowFilter_obj::__alloc( HX_CTX ,this->_hx___distance,this->_hx___angle,this->_hx___color,this->_hx___alpha,this->_hx___blurX,this->_hx___blurY,this->_hx___strength,this->_hx___quality,this->_hx___inner,this->_hx___knockout,this->_hx___hideObject);
            	}


 ::openfl::display::BitmapData DropShadowFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_GC_STACKFRAME(&_hx_pos_786269b8d678908e_276___applyFilter)
HXLINE( 280)		int r = ((this->_hx___color >> 16) & 255);
HXLINE( 281)		int g = ((this->_hx___color >> 8) & 255);
HXLINE( 282)		int b = (this->_hx___color & 255);
HXLINE( 284)		 ::openfl::geom::Point point =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(destPoint->x + this->_hx___offsetX),(destPoint->y + this->_hx___offsetY));
HXLINE( 286)		 ::lime::graphics::Image bitmapData1 = bitmapData->image;
HXDLIN( 286)		 ::lime::graphics::Image sourceBitmapData1 = sourceBitmapData->image;
HXDLIN( 286)		 ::lime::math::Rectangle finalImage = sourceRect->_hx___toLimeRectangle();
HXDLIN( 286)		 ::lime::math::Vector2 finalImage1 = point->_hx___toLimeVector2();
HXDLIN( 286)		 ::lime::graphics::Image finalImage2 = ::lime::_internal::graphics::ImageDataUtil_obj::gaussianBlur(bitmapData1,sourceBitmapData1,finalImage,finalImage1,this->_hx___blurX,this->_hx___blurY,this->_hx___quality,this->_hx___strength,null());
HXLINE( 288)		 ::lime::math::Rectangle _hx_tmp = finalImage2->get_rect();
HXDLIN( 288)		finalImage2->colorTransform(_hx_tmp, ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,0,0,0,this->_hx___alpha,r,g,b,0)->_hx___toLimeColorMatrix());
HXLINE( 290)		if (::hx::IsEq( finalImage2,bitmapData->image )) {
HXLINE( 290)			return bitmapData;
            		}
HXLINE( 292)		return sourceBitmapData;
            	}


void DropShadowFilter_obj::_hx___updateSize(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_296___updateSize)
HXLINE( 297)		this->_hx___offsetX = ( (Float)(::Std_obj::_hx_int((this->_hx___distance * ::Math_obj::cos(((this->_hx___angle * ::Math_obj::PI) / ( (Float)(180) )))))) );
HXLINE( 298)		this->_hx___offsetY = ( (Float)(::Std_obj::_hx_int((this->_hx___distance * ::Math_obj::sin(((this->_hx___angle * ::Math_obj::PI) / ( (Float)(180) )))))) );
HXLINE( 299)		Float _hx_tmp;
HXDLIN( 299)		if ((this->_hx___offsetY < 0)) {
HXLINE( 299)			_hx_tmp = -(this->_hx___offsetY);
            		}
            		else {
HXLINE( 299)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN( 299)		this->_hx___topExtension = ::Math_obj::ceil((_hx_tmp + this->_hx___blurY));
HXLINE( 300)		Float _hx_tmp1;
HXDLIN( 300)		if ((this->_hx___offsetY > 0)) {
HXLINE( 300)			_hx_tmp1 = this->_hx___offsetY;
            		}
            		else {
HXLINE( 300)			_hx_tmp1 = ( (Float)(0) );
            		}
HXDLIN( 300)		this->_hx___bottomExtension = ::Math_obj::ceil((_hx_tmp1 + this->_hx___blurY));
HXLINE( 301)		Float _hx_tmp2;
HXDLIN( 301)		if ((this->_hx___offsetX < 0)) {
HXLINE( 301)			_hx_tmp2 = -(this->_hx___offsetX);
            		}
            		else {
HXLINE( 301)			_hx_tmp2 = ( (Float)(0) );
            		}
HXDLIN( 301)		this->_hx___leftExtension = ::Math_obj::ceil((_hx_tmp2 + this->_hx___blurX));
HXLINE( 302)		Float _hx_tmp3;
HXDLIN( 302)		if ((this->_hx___offsetX > 0)) {
HXLINE( 302)			_hx_tmp3 = this->_hx___offsetX;
            		}
            		else {
HXLINE( 302)			_hx_tmp3 = ( (Float)(0) );
            		}
HXDLIN( 302)		this->_hx___rightExtension = ::Math_obj::ceil((_hx_tmp3 + this->_hx___blurX));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,_hx___updateSize,(void))

Float DropShadowFilter_obj::get_alpha(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_308_get_alpha)
HXDLIN( 308)		return this->_hx___alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_alpha,return )

Float DropShadowFilter_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_312_set_alpha)
HXLINE( 313)		if ((value != this->_hx___alpha)) {
HXLINE( 313)			this->_hx___renderDirty = true;
            		}
HXLINE( 314)		return (this->_hx___alpha = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_alpha,return )

Float DropShadowFilter_obj::get_angle(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_319_get_angle)
HXDLIN( 319)		return this->_hx___angle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_angle,return )

Float DropShadowFilter_obj::set_angle(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_323_set_angle)
HXLINE( 324)		if ((value != this->_hx___angle)) {
HXLINE( 326)			this->_hx___angle = value;
HXLINE( 327)			this->_hx___renderDirty = true;
HXLINE( 328)			this->_hx___updateSize();
            		}
HXLINE( 330)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_angle,return )

Float DropShadowFilter_obj::get_blurX(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_335_get_blurX)
HXDLIN( 335)		return this->_hx___blurX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_blurX,return )

Float DropShadowFilter_obj::set_blurX(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_339_set_blurX)
HXLINE( 340)		if ((value != this->_hx___blurX)) {
HXLINE( 342)			this->_hx___blurX = value;
HXLINE( 343)			this->_hx___renderDirty = true;
HXLINE( 344)			this->_hx___updateSize();
            		}
HXLINE( 346)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_blurX,return )

Float DropShadowFilter_obj::get_blurY(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_351_get_blurY)
HXDLIN( 351)		return this->_hx___blurY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_blurY,return )

Float DropShadowFilter_obj::set_blurY(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_355_set_blurY)
HXLINE( 356)		if ((value != this->_hx___blurY)) {
HXLINE( 358)			this->_hx___blurY = value;
HXLINE( 359)			this->_hx___renderDirty = true;
HXLINE( 360)			this->_hx___updateSize();
            		}
HXLINE( 362)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_blurY,return )

int DropShadowFilter_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_367_get_color)
HXDLIN( 367)		return this->_hx___color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_color,return )

int DropShadowFilter_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_371_set_color)
HXLINE( 372)		if ((value != this->_hx___color)) {
HXLINE( 372)			this->_hx___renderDirty = true;
            		}
HXLINE( 373)		return (this->_hx___color = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_color,return )

Float DropShadowFilter_obj::get_distance(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_378_get_distance)
HXDLIN( 378)		return this->_hx___distance;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_distance,return )

Float DropShadowFilter_obj::set_distance(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_382_set_distance)
HXLINE( 383)		if ((value != this->_hx___distance)) {
HXLINE( 385)			this->_hx___distance = value;
HXLINE( 386)			this->_hx___renderDirty = true;
HXLINE( 387)			this->_hx___updateSize();
            		}
HXLINE( 389)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_distance,return )

bool DropShadowFilter_obj::get_hideObject(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_394_get_hideObject)
HXDLIN( 394)		return this->_hx___hideObject;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_hideObject,return )

bool DropShadowFilter_obj::set_hideObject(bool value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_398_set_hideObject)
HXLINE( 399)		if ((value != this->_hx___hideObject)) {
HXLINE( 401)			this->_hx___renderDirty = true;
HXLINE( 402)			this->_hx___preserveObject = !(value);
            		}
HXLINE( 404)		return (this->_hx___hideObject = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_hideObject,return )

bool DropShadowFilter_obj::get_inner(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_409_get_inner)
HXDLIN( 409)		return this->_hx___inner;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_inner,return )

bool DropShadowFilter_obj::set_inner(bool value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_413_set_inner)
HXLINE( 414)		if ((value != this->_hx___inner)) {
HXLINE( 414)			this->_hx___renderDirty = true;
            		}
HXLINE( 415)		return (this->_hx___inner = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_inner,return )

bool DropShadowFilter_obj::get_knockout(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_420_get_knockout)
HXDLIN( 420)		return this->_hx___knockout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_knockout,return )

bool DropShadowFilter_obj::set_knockout(bool value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_424_set_knockout)
HXLINE( 425)		if ((value != this->_hx___knockout)) {
HXLINE( 425)			this->_hx___renderDirty = true;
            		}
HXLINE( 426)		return (this->_hx___knockout = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_knockout,return )

int DropShadowFilter_obj::get_quality(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_431_get_quality)
HXDLIN( 431)		return this->_hx___quality;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_quality,return )

int DropShadowFilter_obj::set_quality(int value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_435_set_quality)
HXLINE( 436)		if ((value != this->_hx___quality)) {
HXLINE( 436)			this->_hx___renderDirty = true;
            		}
HXLINE( 437)		return (this->_hx___quality = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_quality,return )

Float DropShadowFilter_obj::get_strength(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_442_get_strength)
HXDLIN( 442)		return this->_hx___strength;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_strength,return )

Float DropShadowFilter_obj::set_strength(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_446_set_strength)
HXLINE( 447)		if ((value != this->_hx___strength)) {
HXLINE( 447)			this->_hx___renderDirty = true;
            		}
HXLINE( 448)		return (this->_hx___strength = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_strength,return )


::hx::ObjectPtr< DropShadowFilter_obj > DropShadowFilter_obj::__new(::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_angle,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout,::hx::Null< bool >  __o_hideObject) {
	::hx::ObjectPtr< DropShadowFilter_obj > __this = new DropShadowFilter_obj();
	__this->__construct(__o_distance,__o_angle,__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout,__o_hideObject);
	return __this;
}

::hx::ObjectPtr< DropShadowFilter_obj > DropShadowFilter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_angle,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout,::hx::Null< bool >  __o_hideObject) {
	DropShadowFilter_obj *__this = (DropShadowFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropShadowFilter_obj), true, "openfl.filters.DropShadowFilter"));
	*(void **)__this = DropShadowFilter_obj::_hx_vtable;
	__this->__construct(__o_distance,__o_angle,__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout,__o_hideObject);
	return __this;
}

DropShadowFilter_obj::DropShadowFilter_obj()
{
}

::hx::Val DropShadowFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alpha() ); }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_angle() ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blurX() ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blurY() ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_inner() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_quality() ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return ::hx::Val( _hx___alpha ); }
		if (HX_FIELD_EQ(inName,"__angle") ) { return ::hx::Val( _hx___angle ); }
		if (HX_FIELD_EQ(inName,"__blurX") ) { return ::hx::Val( _hx___blurX ); }
		if (HX_FIELD_EQ(inName,"__blurY") ) { return ::hx::Val( _hx___blurY ); }
		if (HX_FIELD_EQ(inName,"__color") ) { return ::hx::Val( _hx___color ); }
		if (HX_FIELD_EQ(inName,"__inner") ) { return ::hx::Val( _hx___inner ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_distance() ); }
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_knockout() ); }
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_strength() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__offsetX") ) { return ::hx::Val( _hx___offsetX ); }
		if (HX_FIELD_EQ(inName,"__offsetY") ) { return ::hx::Val( _hx___offsetY ); }
		if (HX_FIELD_EQ(inName,"__quality") ) { return ::hx::Val( _hx___quality ); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return ::hx::Val( get_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return ::hx::Val( get_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blurX") ) { return ::hx::Val( get_blurX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blurX") ) { return ::hx::Val( set_blurX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blurY") ) { return ::hx::Val( get_blurY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blurY") ) { return ::hx::Val( set_blurY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_inner") ) { return ::hx::Val( get_inner_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_inner") ) { return ::hx::Val( set_inner_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideObject") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hideObject() ); }
		if (HX_FIELD_EQ(inName,"__distance") ) { return ::hx::Val( _hx___distance ); }
		if (HX_FIELD_EQ(inName,"__knockout") ) { return ::hx::Val( _hx___knockout ); }
		if (HX_FIELD_EQ(inName,"__strength") ) { return ::hx::Val( _hx___strength ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_quality") ) { return ::hx::Val( get_quality_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return ::hx::Val( set_quality_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__hideObject") ) { return ::hx::Val( _hx___hideObject ); }
		if (HX_FIELD_EQ(inName,"__updateSize") ) { return ::hx::Val( _hx___updateSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_distance") ) { return ::hx::Val( get_distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_distance") ) { return ::hx::Val( set_distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_knockout") ) { return ::hx::Val( get_knockout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_knockout") ) { return ::hx::Val( set_knockout_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_strength") ) { return ::hx::Val( get_strength_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_strength") ) { return ::hx::Val( set_strength_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return ::hx::Val( _hx___applyFilter_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_hideObject") ) { return ::hx::Val( get_hideObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hideObject") ) { return ::hx::Val( set_hideObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DropShadowFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blurX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blurY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_inner(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_quality(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { _hx___alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__angle") ) { _hx___angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blurX") ) { _hx___blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blurY") ) { _hx___blurY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__color") ) { _hx___color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inner") ) { _hx___inner=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_distance(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_knockout(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_strength(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__offsetX") ) { _hx___offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__offsetY") ) { _hx___offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__quality") ) { _hx___quality=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideObject") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hideObject(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__distance") ) { _hx___distance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__knockout") ) { _hx___knockout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__strength") ) { _hx___strength=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__hideObject") ) { _hx___hideObject=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropShadowFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("blurX",d1,0f,01,b5));
	outFields->push(HX_("blurY",d2,0f,01,b5));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("distance",35,93,f9,6b));
	outFields->push(HX_("hideObject",21,25,c5,ac));
	outFields->push(HX_("inner",96,31,1c,be));
	outFields->push(HX_("knockout",fa,a9,a5,6f));
	outFields->push(HX_("quality",bf,04,4c,44));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("__alpha",3e,00,f5,8b));
	outFields->push(HX_("__angle",b3,9c,40,8d));
	outFields->push(HX_("__blurX",b1,68,5f,1f));
	outFields->push(HX_("__blurY",b2,68,5f,1f));
	outFields->push(HX_("__color",43,ca,ba,b4));
	outFields->push(HX_("__distance",55,06,32,0f));
	outFields->push(HX_("__hideObject",41,a0,58,e5));
	outFields->push(HX_("__inner",76,8a,7a,28));
	outFields->push(HX_("__knockout",1a,1d,de,12));
	outFields->push(HX_("__offsetX",45,5a,b3,58));
	outFields->push(HX_("__offsetY",46,5a,b3,58));
	outFields->push(HX_("__quality",9f,55,9a,c5));
	outFields->push(HX_("__strength",a1,45,c7,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DropShadowFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___alpha),HX_("__alpha",3e,00,f5,8b)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___angle),HX_("__angle",b3,9c,40,8d)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___blurX),HX_("__blurX",b1,68,5f,1f)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___blurY),HX_("__blurY",b2,68,5f,1f)},
	{::hx::fsInt,(int)offsetof(DropShadowFilter_obj,_hx___color),HX_("__color",43,ca,ba,b4)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___distance),HX_("__distance",55,06,32,0f)},
	{::hx::fsBool,(int)offsetof(DropShadowFilter_obj,_hx___hideObject),HX_("__hideObject",41,a0,58,e5)},
	{::hx::fsBool,(int)offsetof(DropShadowFilter_obj,_hx___inner),HX_("__inner",76,8a,7a,28)},
	{::hx::fsBool,(int)offsetof(DropShadowFilter_obj,_hx___knockout),HX_("__knockout",1a,1d,de,12)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___offsetX),HX_("__offsetX",45,5a,b3,58)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___offsetY),HX_("__offsetY",46,5a,b3,58)},
	{::hx::fsInt,(int)offsetof(DropShadowFilter_obj,_hx___quality),HX_("__quality",9f,55,9a,c5)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___strength),HX_("__strength",a1,45,c7,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DropShadowFilter_obj_sStaticStorageInfo = 0;
#endif

static ::String DropShadowFilter_obj_sMemberFields[] = {
	HX_("__alpha",3e,00,f5,8b),
	HX_("__angle",b3,9c,40,8d),
	HX_("__blurX",b1,68,5f,1f),
	HX_("__blurY",b2,68,5f,1f),
	HX_("__color",43,ca,ba,b4),
	HX_("__distance",55,06,32,0f),
	HX_("__hideObject",41,a0,58,e5),
	HX_("__inner",76,8a,7a,28),
	HX_("__knockout",1a,1d,de,12),
	HX_("__offsetX",45,5a,b3,58),
	HX_("__offsetY",46,5a,b3,58),
	HX_("__quality",9f,55,9a,c5),
	HX_("__strength",a1,45,c7,31),
	HX_("clone",5d,13,63,48),
	HX_("__applyFilter",a6,20,a8,09),
	HX_("__updateSize",8a,06,9c,3d),
	HX_("get_alpha",b5,03,40,65),
	HX_("set_alpha",c1,ef,90,48),
	HX_("get_angle",2a,a0,8b,66),
	HX_("set_angle",36,8c,dc,49),
	HX_("get_blurX",28,6c,aa,f8),
	HX_("set_blurX",34,58,fb,db),
	HX_("get_blurY",29,6c,aa,f8),
	HX_("set_blurY",35,58,fb,db),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_distance",3e,47,13,21),
	HX_("set_distance",b2,6a,0c,36),
	HX_("get_hideObject",6a,ad,ba,22),
	HX_("set_hideObject",de,95,da,42),
	HX_("get_inner",ed,8d,c5,01),
	HX_("set_inner",f9,79,16,e5),
	HX_("get_knockout",03,5e,bf,24),
	HX_("set_knockout",77,81,b8,39),
	HX_("get_quality",d6,64,46,ca),
	HX_("set_quality",e2,6b,b3,d4),
	HX_("get_strength",8a,86,a8,43),
	HX_("set_strength",fe,a9,a1,58),
	::String(null()) };

::hx::Class DropShadowFilter_obj::__mClass;

void DropShadowFilter_obj::__register()
{
	DropShadowFilter_obj _hx_dummy;
	DropShadowFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters.DropShadowFilter",58,8b,e4,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropShadowFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropShadowFilter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropShadowFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropShadowFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters