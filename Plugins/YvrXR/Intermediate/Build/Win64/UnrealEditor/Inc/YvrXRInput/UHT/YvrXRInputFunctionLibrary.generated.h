// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrXRInputFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EYvrXRHandFinger : uint8;
enum class EYvrXRHandJoint : uint8;
enum class EYvrXRHandTrackingConfidence : uint8;
enum class EYvrXRHandType : uint8;
#ifdef YVRXRINPUT_YvrXRInputFunctionLibrary_generated_h
#error "YvrXRInputFunctionLibrary.generated.h already included, missing '#pragma once' in YvrXRInputFunctionLibrary.h"
#endif
#define YVRXRINPUT_YvrXRInputFunctionLibrary_generated_h

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_71_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execIsHandTrackingEnabled); \
	DECLARE_FUNCTION(execGetFingerPinchStrength); \
	DECLARE_FUNCTION(execGetFingerIsPinching); \
	DECLARE_FUNCTION(execIsMenuPressed); \
	DECLARE_FUNCTION(execIsDominantHand); \
	DECLARE_FUNCTION(execIsSystemGesture); \
	DECLARE_FUNCTION(execIsAimValid); \
	DECLARE_FUNCTION(execIsComputed); \
	DECLARE_FUNCTION(execGetPointerPose); \
	DECLARE_FUNCTION(execGetTrackingConfidence); \
	DECLARE_FUNCTION(execIsBonePositionTracked); \
	DECLARE_FUNCTION(execIsBoneOrientationTracked); \
	DECLARE_FUNCTION(execIsBonePositionValid); \
	DECLARE_FUNCTION(execIsBoneOrientationValid); \
	DECLARE_FUNCTION(execGetBoneRadii); \
	DECLARE_FUNCTION(execGetHandScale); \
	DECLARE_FUNCTION(execGetBoneLocation); \
	DECLARE_FUNCTION(execGetBoneRotation);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUYvrXRInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UYvrXRInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UYvrXRInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YvrXRInput"), NO_API) \
	DECLARE_SERIALIZER(UYvrXRInputFunctionLibrary)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrXRInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrXRInputFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrXRInputFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrXRInputFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrXRInputFunctionLibrary(UYvrXRInputFunctionLibrary&&); \
	UYvrXRInputFunctionLibrary(const UYvrXRInputFunctionLibrary&); \
public: \
	NO_API virtual ~UYvrXRInputFunctionLibrary();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_68_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_71_RPC_WRAPPERS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_71_INCLASS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRINPUT_API UClass* StaticClass<class UYvrXRInputFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h


#define FOREACH_ENUM_EYVRXRHANDTYPE(op) \
	op(EYvrXRHandType::None) \
	op(EYvrXRHandType::HandLeft) \
	op(EYvrXRHandType::HandRight) 

enum class EYvrXRHandType : uint8;
template<> struct TIsUEnumClass<EYvrXRHandType> { enum { Value = true }; };
template<> YVRXRINPUT_API UEnum* StaticEnum<EYvrXRHandType>();

#define FOREACH_ENUM_EYVRXRHANDFINGER(op) \
	op(EYvrXRHandFinger::None) \
	op(EYvrXRHandFinger::Index) \
	op(EYvrXRHandFinger::Middle) \
	op(EYvrXRHandFinger::Ring) \
	op(EYvrXRHandFinger::Pinky) 

enum class EYvrXRHandFinger : uint8;
template<> struct TIsUEnumClass<EYvrXRHandFinger> { enum { Value = true }; };
template<> YVRXRINPUT_API UEnum* StaticEnum<EYvrXRHandFinger>();

#define FOREACH_ENUM_EYVRXRHANDJOINT(op) \
	op(EYvrXRHandJoint::Palm) \
	op(EYvrXRHandJoint::Wrist) \
	op(EYvrXRHandJoint::ThumbMetacarpal) \
	op(EYvrXRHandJoint::ThumbProximal) \
	op(EYvrXRHandJoint::ThumbDistal) \
	op(EYvrXRHandJoint::ThumbTip) \
	op(EYvrXRHandJoint::IndexMetacarpal) \
	op(EYvrXRHandJoint::IndexProximal) \
	op(EYvrXRHandJoint::IndexIntermediate) \
	op(EYvrXRHandJoint::IndexDistal) \
	op(EYvrXRHandJoint::IndexTip) \
	op(EYvrXRHandJoint::MiddleMetacarpal) \
	op(EYvrXRHandJoint::MiddleProximal) \
	op(EYvrXRHandJoint::MiddleIntermediate) \
	op(EYvrXRHandJoint::MiddleDistal) \
	op(EYvrXRHandJoint::MiddleTip) \
	op(EYvrXRHandJoint::RingMetacarpal) \
	op(EYvrXRHandJoint::RingProximal) \
	op(EYvrXRHandJoint::RingIntermediate) \
	op(EYvrXRHandJoint::RingDistal) \
	op(EYvrXRHandJoint::RingTip) \
	op(EYvrXRHandJoint::LittleMetacarpal) \
	op(EYvrXRHandJoint::LittleProximal) \
	op(EYvrXRHandJoint::LittleIntermediate) \
	op(EYvrXRHandJoint::LittleDistal) \
	op(EYvrXRHandJoint::LittleTip) \
	op(EYvrXRHandJoint::HandJointMax) 

enum class EYvrXRHandJoint : uint8;
template<> struct TIsUEnumClass<EYvrXRHandJoint> { enum { Value = true }; };
template<> YVRXRINPUT_API UEnum* StaticEnum<EYvrXRHandJoint>();

#define FOREACH_ENUM_EYVRXRHANDTRACKINGCONFIDENCE(op) \
	op(EYvrXRHandTrackingConfidence::Low) \
	op(EYvrXRHandTrackingConfidence::High) 

enum class EYvrXRHandTrackingConfidence : uint8;
template<> struct TIsUEnumClass<EYvrXRHandTrackingConfidence> { enum { Value = true }; };
template<> YVRXRINPUT_API UEnum* StaticEnum<EYvrXRHandTrackingConfidence>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
