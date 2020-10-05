// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_26_new,"openfl.utils.AssetLibrary","new",0x69b47d78,"openfl.utils.AssetLibrary.new","openfl/utils/AssetLibrary.hx",26,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_33_exists,"openfl.utils.AssetLibrary","exists",0xdc46afc4,"openfl.utils.AssetLibrary.exists","openfl/utils/AssetLibrary.hx",33,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_92_getAsset,"openfl.utils.AssetLibrary","getAsset",0x76ad5562,"openfl.utils.AssetLibrary.getAsset","openfl/utils/AssetLibrary.hx",92,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_106_getAudioBuffer,"openfl.utils.AssetLibrary","getAudioBuffer",0x0089fb68,"openfl.utils.AssetLibrary.getAudioBuffer","openfl/utils/AssetLibrary.hx",106,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_120_getBytes,"openfl.utils.AssetLibrary","getBytes",0x0e0bf3dd,"openfl.utils.AssetLibrary.getBytes","openfl/utils/AssetLibrary.hx",120,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_134_getFont,"openfl.utils.AssetLibrary","getFont",0xd39c269d,"openfl.utils.AssetLibrary.getFont","openfl/utils/AssetLibrary.hx",134,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_148_getImage,"openfl.utils.AssetLibrary","getImage",0x0ddd0acd,"openfl.utils.AssetLibrary.getImage","openfl/utils/AssetLibrary.hx",148,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_161_getMovieClip,"openfl.utils.AssetLibrary","getMovieClip",0xec0e8f12,"openfl.utils.AssetLibrary.getMovieClip","openfl/utils/AssetLibrary.hx",161,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_167_getPath,"openfl.utils.AssetLibrary","getPath",0xda2dae73,"openfl.utils.AssetLibrary.getPath","openfl/utils/AssetLibrary.hx",167,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_181_getText,"openfl.utils.AssetLibrary","getText",0xdcd5957b,"openfl.utils.AssetLibrary.getText","openfl/utils/AssetLibrary.hx",181,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_195_isLocal,"openfl.utils.AssetLibrary","isLocal",0xd2cf8639,"openfl.utils.AssetLibrary.isLocal","openfl/utils/AssetLibrary.hx",195,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_209_list,"openfl.utils.AssetLibrary","list",0x12e9e446,"openfl.utils.AssetLibrary.list","openfl/utils/AssetLibrary.hx",209,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_223_loadAsset,"openfl.utils.AssetLibrary","loadAsset",0xda144502,"openfl.utils.AssetLibrary.loadAsset","openfl/utils/AssetLibrary.hx",223,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_237_load,"openfl.utils.AssetLibrary","load",0x12ee620e,"openfl.utils.AssetLibrary.load","openfl/utils/AssetLibrary.hx",237,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_251_loadAudioBuffer,"openfl.utils.AssetLibrary","loadAudioBuffer",0x7bb86308,"openfl.utils.AssetLibrary.loadAudioBuffer","openfl/utils/AssetLibrary.hx",251,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_265_loadBytes,"openfl.utils.AssetLibrary","loadBytes",0x7172e37d,"openfl.utils.AssetLibrary.loadBytes","openfl/utils/AssetLibrary.hx",265,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_279_loadFont,"openfl.utils.AssetLibrary","loadFont",0xa4fd0afd,"openfl.utils.AssetLibrary.loadFont","openfl/utils/AssetLibrary.hx",279,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_338_loadImage,"openfl.utils.AssetLibrary","loadImage",0x7143fa6d,"openfl.utils.AssetLibrary.loadImage","openfl/utils/AssetLibrary.hx",338,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_351_loadMovieClip,"openfl.utils.AssetLibrary","loadMovieClip",0xdf35ceb2,"openfl.utils.AssetLibrary.loadMovieClip","openfl/utils/AssetLibrary.hx",351,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_357_loadText,"openfl.utils.AssetLibrary","loadText",0xae3679db,"openfl.utils.AssetLibrary.loadText","openfl/utils/AssetLibrary.hx",357,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_371_unload,"openfl.utils.AssetLibrary","unload",0x81f332e7,"openfl.utils.AssetLibrary.unload","openfl/utils/AssetLibrary.hx",371,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_47_fromBytes,"openfl.utils.AssetLibrary","fromBytes",0x0ac481b9,"openfl.utils.AssetLibrary.fromBytes","openfl/utils/AssetLibrary.hx",47,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_56_fromFile,"openfl.utils.AssetLibrary","fromFile",0x922478ee,"openfl.utils.AssetLibrary.fromFile","openfl/utils/AssetLibrary.hx",56,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_63_fromManifest,"openfl.utils.AssetLibrary","fromManifest",0x34ddc721,"openfl.utils.AssetLibrary.fromManifest","openfl/utils/AssetLibrary.hx",63,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_295_loadFromBytes,"openfl.utils.AssetLibrary","loadFromBytes",0x393bbeb3,"openfl.utils.AssetLibrary.loadFromBytes","openfl/utils/AssetLibrary.hx",295,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_293_loadFromBytes,"openfl.utils.AssetLibrary","loadFromBytes",0x393bbeb3,"openfl.utils.AssetLibrary.loadFromBytes","openfl/utils/AssetLibrary.hx",293,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_307_loadFromFile,"openfl.utils.AssetLibrary","loadFromFile",0x1f8d7934,"openfl.utils.AssetLibrary.loadFromFile","openfl/utils/AssetLibrary.hx",307,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_305_loadFromFile,"openfl.utils.AssetLibrary","loadFromFile",0x1f8d7934,"openfl.utils.AssetLibrary.loadFromFile","openfl/utils/AssetLibrary.hx",305,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_315_loadFromManifest,"openfl.utils.AssetLibrary","loadFromManifest",0x78d36267,"openfl.utils.AssetLibrary.loadFromManifest","openfl/utils/AssetLibrary.hx",315,0x41ec4c76)
HX_LOCAL_STACK_FRAME(_hx_pos_547ec2a4bdcd47c7_323_loadFromManifest,"openfl.utils.AssetLibrary","loadFromManifest",0x78d36267,"openfl.utils.AssetLibrary.loadFromManifest","openfl/utils/AssetLibrary.hx",323,0x41ec4c76)
namespace openfl{
namespace utils{

void AssetLibrary_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_26_new)
HXDLIN(  26)		super::__construct();
            	}

Dynamic AssetLibrary_obj::__CreateEmpty() { return new AssetLibrary_obj; }

void *AssetLibrary_obj::_hx_vtable = 0;

Dynamic AssetLibrary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetLibrary_obj > _hx_result = new AssetLibrary_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetLibrary_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12db4ee4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12db4ee4;
	} else {
		return inClassId==(int)0x25654723;
	}
}

bool AssetLibrary_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_33_exists)
HXDLIN(  33)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE(  35)			return this->_hx___proxy->exists(id,type);
            		}
            		else {
HXLINE(  39)			return this->super::exists(id,type);
            		}
HXLINE(  33)		return false;
            	}


 ::Dynamic AssetLibrary_obj::getAsset(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_92_getAsset)
HXDLIN(  92)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE(  94)			return this->_hx___proxy->getAsset(id,type);
            		}
            		else {
HXLINE(  98)			return this->super::getAsset(id,type);
            		}
HXLINE(  92)		return null();
            	}


 ::lime::media::AudioBuffer AssetLibrary_obj::getAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_106_getAudioBuffer)
HXDLIN( 106)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 108)			return this->_hx___proxy->getAudioBuffer(id);
            		}
            		else {
HXLINE( 112)			return this->super::getAudioBuffer(id);
            		}
HXLINE( 106)		return null();
            	}


 ::haxe::io::Bytes AssetLibrary_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_120_getBytes)
HXDLIN( 120)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 122)			return this->_hx___proxy->getBytes(id);
            		}
            		else {
HXLINE( 126)			return this->super::getBytes(id);
            		}
HXLINE( 120)		return null();
            	}


 ::lime::text::Font AssetLibrary_obj::getFont(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_134_getFont)
HXDLIN( 134)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 136)			return this->_hx___proxy->getFont(id);
            		}
            		else {
HXLINE( 140)			return this->super::getFont(id);
            		}
HXLINE( 134)		return null();
            	}


 ::lime::graphics::Image AssetLibrary_obj::getImage(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_148_getImage)
HXDLIN( 148)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 150)			return this->_hx___proxy->getImage(id);
            		}
            		else {
HXLINE( 154)			return this->super::getImage(id);
            		}
HXLINE( 148)		return null();
            	}


 ::openfl::display::MovieClip AssetLibrary_obj::getMovieClip(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_161_getMovieClip)
HXDLIN( 161)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getMovieClip,return )

::String AssetLibrary_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_167_getPath)
HXDLIN( 167)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 169)			return this->_hx___proxy->getPath(id);
            		}
            		else {
HXLINE( 173)			return this->super::getPath(id);
            		}
HXLINE( 167)		return null();
            	}


::String AssetLibrary_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_181_getText)
HXDLIN( 181)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 183)			return this->_hx___proxy->getText(id);
            		}
            		else {
HXLINE( 187)			return this->super::getText(id);
            		}
HXLINE( 181)		return null();
            	}


bool AssetLibrary_obj::isLocal(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_195_isLocal)
HXDLIN( 195)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 197)			return this->_hx___proxy->isLocal(id,type);
            		}
            		else {
HXLINE( 201)			return this->super::isLocal(id,type);
            		}
HXLINE( 195)		return false;
            	}


::Array< ::String > AssetLibrary_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_209_list)
HXDLIN( 209)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 211)			return this->_hx___proxy->list(type);
            		}
            		else {
HXLINE( 215)			return this->super::list(type);
            		}
HXLINE( 209)		return null();
            	}


 ::lime::app::Future AssetLibrary_obj::loadAsset(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_223_loadAsset)
HXDLIN( 223)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 225)			return this->_hx___proxy->loadAsset(id,type);
            		}
            		else {
HXLINE( 229)			return this->super::loadAsset(id,type);
            		}
HXLINE( 223)		return null();
            	}


 ::lime::app::Future AssetLibrary_obj::load(){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_237_load)
HXDLIN( 237)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 239)			return this->_hx___proxy->load();
            		}
            		else {
HXLINE( 243)			return this->super::load();
            		}
HXLINE( 237)		return null();
            	}


 ::lime::app::Future AssetLibrary_obj::loadAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_251_loadAudioBuffer)
HXDLIN( 251)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 253)			return this->_hx___proxy->loadAudioBuffer(id);
            		}
            		else {
HXLINE( 257)			return this->super::loadAudioBuffer(id);
            		}
HXLINE( 251)		return null();
            	}


 ::lime::app::Future AssetLibrary_obj::loadBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_265_loadBytes)
HXDLIN( 265)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 267)			return this->_hx___proxy->loadBytes(id);
            		}
            		else {
HXLINE( 271)			return this->super::loadBytes(id);
            		}
HXLINE( 265)		return null();
            	}


 ::lime::app::Future AssetLibrary_obj::loadFont(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_279_loadFont)
HXDLIN( 279)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 281)			return this->_hx___proxy->loadFont(id);
            		}
            		else {
HXLINE( 285)			return this->super::loadFont(id);
            		}
HXLINE( 279)		return null();
            	}


 ::lime::app::Future AssetLibrary_obj::loadImage(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_338_loadImage)
HXDLIN( 338)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 340)			return this->_hx___proxy->loadImage(id);
            		}
            		else {
HXLINE( 344)			return this->super::loadImage(id);
            		}
HXLINE( 338)		return null();
            	}


 ::lime::app::Future AssetLibrary_obj::loadMovieClip(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_351_loadMovieClip)
HXDLIN( 351)		return ::lime::app::Future_obj::withValue(this->getMovieClip(id));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadMovieClip,return )

 ::lime::app::Future AssetLibrary_obj::loadText(::String id){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_357_loadText)
HXDLIN( 357)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 359)			return this->_hx___proxy->loadText(id);
            		}
            		else {
HXLINE( 363)			return this->super::loadText(id);
            		}
HXLINE( 357)		return null();
            	}


void AssetLibrary_obj::unload(){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_371_unload)
HXDLIN( 371)		if (::hx::IsNotNull( this->_hx___proxy )) {
HXLINE( 373)			this->_hx___proxy->unload();
HXDLIN( 373)			return;
            		}
            		else {
HXLINE( 377)			this->super::unload();
HXDLIN( 377)			return;
            		}
            	}


 ::openfl::utils::AssetLibrary AssetLibrary_obj::fromBytes( ::openfl::utils::ByteArrayData bytes,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_47_fromBytes)
HXDLIN(  47)		return ::openfl::utils::AssetLibrary_obj::fromManifest(::lime::utils::AssetManifest_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes),rootPath));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,fromBytes,return )

 ::openfl::utils::AssetLibrary AssetLibrary_obj::fromFile(::String path,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_56_fromFile)
HXDLIN(  56)		return ::openfl::utils::AssetLibrary_obj::fromManifest(::lime::utils::AssetManifest_obj::fromFile(path,rootPath));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,fromFile,return )

 ::openfl::utils::AssetLibrary AssetLibrary_obj::fromManifest( ::lime::utils::AssetManifest manifest){
            	HX_GC_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_63_fromManifest)
HXLINE(  65)		 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE(  67)		if (::hx::IsNotNull( library )) {
HXLINE(  69)			if (::Std_obj::isOfType(library,( ( ::Dynamic)(::hx::ClassOf< ::openfl::utils::AssetLibrary >()) ))) {
HXLINE(  71)				return ( ( ::openfl::utils::AssetLibrary)(library) );
            			}
            			else {
HXLINE(  75)				 ::openfl::utils::AssetLibrary _library =  ::openfl::utils::AssetLibrary_obj::__alloc( HX_CTX );
HXLINE(  76)				_library->_hx___proxy = library;
HXLINE(  77)				return _library;
            			}
            		}
            		else {
HXLINE(  82)			return null();
            		}
HXLINE(  67)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,fromManifest,return )

 ::lime::app::Future AssetLibrary_obj::loadFromBytes( ::openfl::utils::ByteArrayData bytes,::String rootPath){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_295_loadFromBytes)
HXLINE( 295)			return ::openfl::utils::AssetLibrary_obj::loadFromManifest(manifest);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_293_loadFromBytes)
HXDLIN( 293)		return ::lime::utils::AssetManifest_obj::loadFromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes),rootPath)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFromBytes,return )

 ::lime::app::Future AssetLibrary_obj::loadFromFile(::String path,::String rootPath){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_307_loadFromFile)
HXLINE( 307)			return ::openfl::utils::AssetLibrary_obj::loadFromManifest(manifest);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_305_loadFromFile)
HXDLIN( 305)		return ::lime::utils::AssetManifest_obj::loadFromFile(path,rootPath)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFromFile,return )

 ::lime::app::Future AssetLibrary_obj::loadFromManifest( ::lime::utils::AssetManifest manifest){
            	HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_315_loadFromManifest)
HXLINE( 317)		 ::openfl::utils::AssetLibrary library = ::openfl::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 319)		if (::hx::IsNotNull( library )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::lime::app::Future _hx_run( ::lime::utils::AssetLibrary library){
            				HX_STACKFRAME(&_hx_pos_547ec2a4bdcd47c7_323_loadFromManifest)
HXLINE( 323)				return ::lime::app::Future_obj::withValue(( ( ::openfl::utils::AssetLibrary)(library) ));
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 321)			return library->load()->then( ::Dynamic(new _hx_Closure_0()));
            		}
            		else {
HXLINE( 328)			return ::lime::app::Future_obj::withError(HX_("Could not load asset manifest",cd,c6,09,7f));
            		}
HXLINE( 319)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadFromManifest,return )


::hx::ObjectPtr< AssetLibrary_obj > AssetLibrary_obj::__new() {
	::hx::ObjectPtr< AssetLibrary_obj > __this = new AssetLibrary_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetLibrary_obj > AssetLibrary_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetLibrary_obj *__this = (AssetLibrary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetLibrary_obj), true, "openfl.utils.AssetLibrary"));
	*(void **)__this = AssetLibrary_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetLibrary_obj::AssetLibrary_obj()
{
}

void AssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetLibrary);
	HX_MARK_MEMBER_NAME(_hx___proxy,"__proxy");
	 ::lime::utils::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___proxy,"__proxy");
	 ::lime::utils::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AssetLibrary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"unload") ) { return ::hx::Val( unload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__proxy") ) { return ::hx::Val( _hx___proxy ); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return ::hx::Val( getFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return ::hx::Val( isLocal_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAsset") ) { return ::hx::Val( getAsset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return ::hx::Val( getImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return ::hx::Val( loadFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return ::hx::Val( loadText_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadAsset") ) { return ::hx::Val( loadAsset_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return ::hx::Val( loadBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return ::hx::Val( loadImage_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return ::hx::Val( getMovieClip_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { return ::hx::Val( loadMovieClip_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return ::hx::Val( getAudioBuffer_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return ::hx::Val( loadAudioBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromManifest") ) { outValue = fromManifest_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadFromManifest") ) { outValue = loadFromManifest_dyn(); return true; }
	}
	return false;
}

::hx::Val AssetLibrary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__proxy") ) { _hx___proxy=inValue.Cast<  ::lime::utils::AssetLibrary >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__proxy",4e,47,ee,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AssetLibrary_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::AssetLibrary */ ,(int)offsetof(AssetLibrary_obj,_hx___proxy),HX_("__proxy",4e,47,ee,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AssetLibrary_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetLibrary_obj_sMemberFields[] = {
	HX_("__proxy",4e,47,ee,32),
	HX_("exists",dc,1d,e0,bf),
	HX_("getAsset",7a,79,10,86),
	HX_("getAudioBuffer",80,41,e3,26),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getFont",85,0d,43,16),
	HX_("getImage",e5,2e,40,1d),
	HX_("getMovieClip",2a,9f,71,27),
	HX_("getPath",5b,95,d4,1c),
	HX_("getText",63,7c,7c,1f),
	HX_("isLocal",21,6d,76,15),
	HX_("list",5e,1c,b3,47),
	HX_("loadAsset",ea,b5,70,41),
	HX_("load",26,9a,b7,47),
	HX_("loadAudioBuffer",f0,71,7c,e3),
	HX_("loadBytes",65,54,cf,d8),
	HX_("loadFont",15,2f,60,b4),
	HX_("loadImage",55,6b,a0,d8),
	HX_("loadMovieClip",9a,d3,80,9a),
	HX_("loadText",f3,9d,99,bd),
	HX_("unload",ff,a0,8c,65),
	::String(null()) };

::hx::Class AssetLibrary_obj::__mClass;

static ::String AssetLibrary_obj_sStaticFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromFile",06,9d,87,a1),
	HX_("fromManifest",39,d7,40,70),
	HX_("loadFromBytes",9b,c3,86,f4),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("loadFromManifest",7f,5e,9c,dc),
	::String(null())
};

void AssetLibrary_obj::__register()
{
	AssetLibrary_obj _hx_dummy;
	AssetLibrary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils.AssetLibrary",86,a1,e2,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetLibrary_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetLibrary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetLibrary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetLibrary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
