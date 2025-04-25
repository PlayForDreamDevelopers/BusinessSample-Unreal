// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrBusinessBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTextureRenderTarget2D;
enum class ECameraType : uint8;
enum class EVSTCameraFormat : uint8;
enum class EVSTCameraFrequency : uint8;
enum class EVSTCameraID : uint8;
enum class EVSTCameraResolution : uint8;
enum class EVSTCameraSource : uint8;
struct FVSTCameraFrame;
struct FVSTCameraFrameItem;
struct FVSTCameraIntrinsicExtrinsic;
#ifdef YVRBUSINESS_YvrBusinessBPLibrary_generated_h
#error "YvrBusinessBPLibrary.generated.h already included, missing '#pragma once' in YvrBusinessBPLibrary.h"
#endif
#define YVRBUSINESS_YvrBusinessBPLibrary_generated_h

#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics; \
	YVRBUSINESS_API static class UScriptStruct* StaticStruct();


template<> YVRBUSINESS_API UScriptStruct* StaticStruct<struct FVSTCameraFrameItem>();

#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYvrPose_Statics; \
	YVRBUSINESS_API static class UScriptStruct* StaticStruct();


template<> YVRBUSINESS_API UScriptStruct* StaticStruct<struct FYvrPose>();

#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVSTCameraFrame_Statics; \
	YVRBUSINESS_API static class UScriptStruct* StaticStruct();


template<> YVRBUSINESS_API UScriptStruct* StaticStruct<struct FVSTCameraFrame>();

#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics; \
	YVRBUSINESS_API static class UScriptStruct* StaticStruct();


template<> YVRBUSINESS_API UScriptStruct* StaticStruct<struct FVSTCameraIntrinsicExtrinsic>();

#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_145_DELEGATE \
YVRBUSINESS_API void FCameraFrameDelegate_DelegateWrapper(const FMulticastScriptDelegate& CameraFrameDelegate, FVSTCameraFrameItem& Frame, UObject* UserData);


#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_150_RPC_WRAPPERS \
	DECLARE_FUNCTION(execUpdateRenderTargetFromYUVNV21); \
	DECLARE_FUNCTION(execUpdateRenderTargetFromRGB); \
	DECLARE_FUNCTION(execGetTrackingCameraFps); \
	DECLARE_FUNCTION(execSetTrackingCameraFps); \
	DECLARE_FUNCTION(execAcquireTrackingCameraFrame); \
	DECLARE_FUNCTION(execUnSubscribeFrame); \
	DECLARE_FUNCTION(execSubscribeFrame); \
	DECLARE_FUNCTION(execCloseTrackingCamera); \
	DECLARE_FUNCTION(execOpenTrackingCamera); \
	DECLARE_FUNCTION(execGetVSTCameraIntrinsicExtrinsic); \
	DECLARE_FUNCTION(execGetVSTCameraOutputSource); \
	DECLARE_FUNCTION(execSetVSTCameraOutputSource); \
	DECLARE_FUNCTION(execGetVSTCameraFormat); \
	DECLARE_FUNCTION(execSetVSTCameraFormat); \
	DECLARE_FUNCTION(execGetVSTCameraResolution); \
	DECLARE_FUNCTION(execSetVSTCameraResolution); \
	DECLARE_FUNCTION(execGetVSTCameraFrequency); \
	DECLARE_FUNCTION(execSetVSTCameraFrequency); \
	DECLARE_FUNCTION(execAcquireVSTCameraFrame); \
	DECLARE_FUNCTION(execCloseVSTCamera); \
	DECLARE_FUNCTION(execOpenVSTCamera); \
	DECLARE_FUNCTION(execGetSoftwareVersion); \
	DECLARE_FUNCTION(execGetDeviceModel); \
	DECLARE_FUNCTION(execGetDeviceSn);


#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUYvrBusinessBPLibrary(); \
	friend struct Z_Construct_UClass_UYvrBusinessBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UYvrBusinessBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YvrBusiness"), NO_API) \
	DECLARE_SERIALIZER(UYvrBusinessBPLibrary)


#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_150_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrBusinessBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrBusinessBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrBusinessBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrBusinessBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrBusinessBPLibrary(UYvrBusinessBPLibrary&&); \
	UYvrBusinessBPLibrary(const UYvrBusinessBPLibrary&); \
public: \
	NO_API virtual ~UYvrBusinessBPLibrary();


#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_147_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_150_RPC_WRAPPERS \
	FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_150_INCLASS \
	FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRBUSINESS_API UClass* StaticClass<class UYvrBusinessBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h


#define FOREACH_ENUM_EVSTCAMERARESOLUTION(op) \
	op(EVSTCameraResolution::RESOLUTION_660_616) \
	op(EVSTCameraResolution::RESOLUTION_1320_1232) \
	op(EVSTCameraResolution::RESOLUTION_2640_2464) 

enum class EVSTCameraResolution : uint8;
template<> struct TIsUEnumClass<EVSTCameraResolution> { enum { Value = true }; };
template<> YVRBUSINESS_API UEnum* StaticEnum<EVSTCameraResolution>();

#define FOREACH_ENUM_EVSTCAMERAFREQUENCY(op) \
	op(EVSTCameraFrequency::FREQUENCY_8_HZ) \
	op(EVSTCameraFrequency::FREQUENCY_10_HZ) \
	op(EVSTCameraFrequency::FREQUENCY_24_HZ) \
	op(EVSTCameraFrequency::FREQUENCY_30_HZ) 

enum class EVSTCameraFrequency : uint8;
template<> struct TIsUEnumClass<EVSTCameraFrequency> { enum { Value = true }; };
template<> YVRBUSINESS_API UEnum* StaticEnum<EVSTCameraFrequency>();

#define FOREACH_ENUM_EVSTCAMERAFORMAT(op) \
	op(EVSTCameraFormat::FORMAT_NV21) 

enum class EVSTCameraFormat : uint8;
template<> struct TIsUEnumClass<EVSTCameraFormat> { enum { Value = true }; };
template<> YVRBUSINESS_API UEnum* StaticEnum<EVSTCameraFormat>();

#define FOREACH_ENUM_EVSTCAMERASOURCE(op) \
	op(EVSTCameraSource::SOURCE_LEFT_EYE) \
	op(EVSTCameraSource::SOURCE_RIGHT_EYE) \
	op(EVSTCameraSource::SOURCE_BOTH_EYES) 

enum class EVSTCameraSource : uint8;
template<> struct TIsUEnumClass<EVSTCameraSource> { enum { Value = true }; };
template<> YVRBUSINESS_API UEnum* StaticEnum<EVSTCameraSource>();

#define FOREACH_ENUM_EVSTCAMERAID(op) \
	op(EVSTCameraID::ID_LEFT) \
	op(EVSTCameraID::ID_RIGHT) 

enum class EVSTCameraID : uint8;
template<> struct TIsUEnumClass<EVSTCameraID> { enum { Value = true }; };
template<> YVRBUSINESS_API UEnum* StaticEnum<EVSTCameraID>();

#define FOREACH_ENUM_ECAMERATYPE(op) \
	op(ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_MASTER) \
	op(ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_SLAVE) \
	op(ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_AUX) \
	op(ECameraType::PFDM_XR_CAMERA_TYPE_EYE_TRACKING) \
	op(ECameraType::PFDM_XR_CAMERA_TYPE_TOF) 

enum class ECameraType : uint8;
template<> struct TIsUEnumClass<ECameraType> { enum { Value = true }; };
template<> YVRBUSINESS_API UEnum* StaticEnum<ECameraType>();

#define FOREACH_ENUM_ETRACKINGCAMERAFORMAT(op) \
	op(ETrackingCameraFormat::PFDM_XR_TRACKING_CAMERA_FMT_Y8) \
	op(ETrackingCameraFormat::PFDM_XR_TRACKING_CAMERA_FMT_RAW8) 

enum class ETrackingCameraFormat : uint8;
template<> struct TIsUEnumClass<ETrackingCameraFormat> { enum { Value = true }; };
template<> YVRBUSINESS_API UEnum* StaticEnum<ETrackingCameraFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
