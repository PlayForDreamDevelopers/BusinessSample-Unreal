// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrXRHandComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YVRXRINPUT_YvrXRHandComponent_generated_h
#error "YvrXRHandComponent.generated.h already included, missing '#pragma once' in YvrXRHandComponent.h"
#endif
#define YVRXRINPUT_YvrXRHandComponent_generated_h

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUYvrXRHandComponent(); \
	friend struct Z_Construct_UClass_UYvrXRHandComponent_Statics; \
public: \
	DECLARE_CLASS(UYvrXRHandComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YvrXRInput"), NO_API) \
	DECLARE_SERIALIZER(UYvrXRHandComponent)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrXRHandComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrXRHandComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrXRHandComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrXRHandComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrXRHandComponent(UYvrXRHandComponent&&); \
	UYvrXRHandComponent(const UYvrXRHandComponent&); \
public: \
	NO_API virtual ~UYvrXRHandComponent();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_15_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_18_INCLASS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRINPUT_API UClass* StaticClass<class UYvrXRHandComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h


#define FOREACH_ENUM_EYVRCONFIDENCEBEHAVIOR(op) \
	op(EYvrConfidenceBehavior::None) \
	op(EYvrConfidenceBehavior::HideActor) 

enum class EYvrConfidenceBehavior : uint8;
template<> struct TIsUEnumClass<EYvrConfidenceBehavior> { enum { Value = true }; };
template<> YVRXRINPUT_API UEnum* StaticEnum<EYvrConfidenceBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
