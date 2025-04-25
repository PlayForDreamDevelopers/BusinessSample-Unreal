// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrXRFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EYvrFixedFoveatedRenderingLevel : uint8;
enum class EYvrLayerSharpenType : uint8;
struct FLinearColor;
#ifdef YVRXRHMD_YvrXRFunctionLibrary_generated_h
#error "YvrXRFunctionLibrary.generated.h already included, missing '#pragma once' in YvrXRFunctionLibrary.h"
#endif
#define YVRXRHMD_YvrXRFunctionLibrary_generated_h

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_63_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetBackgroundLayerVisible); \
	DECLARE_FUNCTION(execSetSharpenType); \
	DECLARE_FUNCTION(execGetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execSetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execSetSeeThroughBackgroundEnabled); \
	DECLARE_FUNCTION(execSetSpaceWarpEnabled); \
	DECLARE_FUNCTION(execSetColorScaleAndOffset); \
	DECLARE_FUNCTION(execSetDisplayFrequency); \
	DECLARE_FUNCTION(execGetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execGetAvailableDisplayFrequencies); \
	DECLARE_FUNCTION(execSetFixedFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetFixedFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execHasSystemOverlayPresent); \
	DECLARE_FUNCTION(execHasInputFocus); \
	DECLARE_FUNCTION(execSetCPUAndGPULevels); \
	DECLARE_FUNCTION(execGetPose);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUYvrXRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UYvrXRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UYvrXRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YvrXRHMD"), NO_API) \
	DECLARE_SERIALIZER(UYvrXRFunctionLibrary)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrXRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrXRFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrXRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrXRFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrXRFunctionLibrary(UYvrXRFunctionLibrary&&); \
	UYvrXRFunctionLibrary(const UYvrXRFunctionLibrary&); \
public: \
	NO_API virtual ~UYvrXRFunctionLibrary();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_60_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_63_RPC_WRAPPERS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_63_INCLASS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRHMD_API UClass* StaticClass<class UYvrXRFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h


#define FOREACH_ENUM_EYVRFIXEDFOVEATEDRENDERINGLEVEL(op) \
	op(EYvrFixedFoveatedRenderingLevel::FFR_OFF) \
	op(EYvrFixedFoveatedRenderingLevel::FFR_LOW) \
	op(EYvrFixedFoveatedRenderingLevel::FFR_MEDIUM) \
	op(EYvrFixedFoveatedRenderingLevel::FFR_HIGH) 

enum class EYvrFixedFoveatedRenderingLevel : uint8;
template<> struct TIsUEnumClass<EYvrFixedFoveatedRenderingLevel> { enum { Value = true }; };
template<> YVRXRHMD_API UEnum* StaticEnum<EYvrFixedFoveatedRenderingLevel>();

#define FOREACH_ENUM_EYVRPERFORMANCELEVEL(op) \
	op(EYvrPerformanceLevel::LEVEL_POWER_SAVINGS) \
	op(EYvrPerformanceLevel::LEVEL_SUSTAINED_LOW) \
	op(EYvrPerformanceLevel::LEVEL_SUSTAINED_HIGH) \
	op(EYvrPerformanceLevel::LEVEL_BOOST) 

enum class EYvrPerformanceLevel : uint8;
template<> struct TIsUEnumClass<EYvrPerformanceLevel> { enum { Value = true }; };
template<> YVRXRHMD_API UEnum* StaticEnum<EYvrPerformanceLevel>();

#define FOREACH_ENUM_EYVRXRHANDTRACKINGSUPPORT(op) \
	op(EYvrXRHandTrackingSupport::ControllersOnly) \
	op(EYvrXRHandTrackingSupport::ControllersAndHands) \
	op(EYvrXRHandTrackingSupport::HandsOnly) 

enum class EYvrXRHandTrackingSupport : uint8;
template<> struct TIsUEnumClass<EYvrXRHandTrackingSupport> { enum { Value = true }; };
template<> YVRXRHMD_API UEnum* StaticEnum<EYvrXRHandTrackingSupport>();

#define FOREACH_ENUM_EYVRLAYERSHARPENTYPE(op) \
	op(EYvrLayerSharpenType::NONE) \
	op(EYvrLayerSharpenType::NORMAL_SUPER_SAMPING) \
	op(EYvrLayerSharpenType::QUALITY_SUPER_SAMPLING) \
	op(EYvrLayerSharpenType::NORMAL_SHARPENING) \
	op(EYvrLayerSharpenType::QUALITY_SHARPENING) 

enum class EYvrLayerSharpenType : uint8;
template<> struct TIsUEnumClass<EYvrLayerSharpenType> { enum { Value = true }; };
template<> YVRXRHMD_API UEnum* StaticEnum<EYvrLayerSharpenType>();

#define FOREACH_ENUM_EYVRDYNAMICRESOLUTIONSETTING(op) \
	op(EYvrDynamicResolutionSetting::HIGH_QUALITY) \
	op(EYvrDynamicResolutionSetting::BALANCED) \
	op(EYvrDynamicResolutionSetting::BATTERY_SAVING) 

enum class EYvrDynamicResolutionSetting : uint8;
template<> struct TIsUEnumClass<EYvrDynamicResolutionSetting> { enum { Value = true }; };
template<> YVRXRHMD_API UEnum* StaticEnum<EYvrDynamicResolutionSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
