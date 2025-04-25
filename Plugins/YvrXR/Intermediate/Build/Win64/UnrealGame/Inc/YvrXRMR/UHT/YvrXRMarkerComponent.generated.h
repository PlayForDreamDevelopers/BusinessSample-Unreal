// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrXRMarkerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YVRXRMR_YvrXRMarkerComponent_generated_h
#error "YvrXRMarkerComponent.generated.h already included, missing '#pragma once' in YvrXRMarkerComponent.h"
#endif
#define YVRXRMR_YvrXRMarkerComponent_generated_h

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYvrXRMarkerDelegates(); \
	friend struct Z_Construct_UClass_UYvrXRMarkerDelegates_Statics; \
public: \
	DECLARE_CLASS(UYvrXRMarkerDelegates, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YvrXRMR"), NO_API) \
	DECLARE_SERIALIZER(UYvrXRMarkerDelegates)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrXRMarkerDelegates(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrXRMarkerDelegates(UYvrXRMarkerDelegates&&); \
	UYvrXRMarkerDelegates(const UYvrXRMarkerDelegates&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrXRMarkerDelegates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrXRMarkerDelegates); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrXRMarkerDelegates) \
	NO_API virtual ~UYvrXRMarkerDelegates();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_12_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRMR_API UClass* StaticClass<class UYvrXRMarkerDelegates>();

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_35_DELEGATE \
static void FNewYvrMarkerDetected_DelegateWrapper(const FMulticastScriptDelegate& NewYvrMarkerDetected, int32 MarkerId, FVector const& Position, FRotator const& Rotation, FVector2D const& Size);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_39_DELEGATE \
static void FYvrMarkerMoved_DelegateWrapper(const FMulticastScriptDelegate& YvrMarkerMoved, int32 MarkerId, FVector const& Position, FRotator const& Rotation, FVector2D const& Size);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_43_DELEGATE \
static void FYvrMarkerLost_DelegateWrapper(const FMulticastScriptDelegate& YvrMarkerLost, int32 MarkerId);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYvrXRMarkerComponent(); \
	friend struct Z_Construct_UClass_UYvrXRMarkerComponent_Statics; \
public: \
	DECLARE_CLASS(UYvrXRMarkerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YvrXRMR"), NO_API) \
	DECLARE_SERIALIZER(UYvrXRMarkerComponent)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrXRMarkerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrXRMarkerComponent(UYvrXRMarkerComponent&&); \
	UYvrXRMarkerComponent(const UYvrXRMarkerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrXRMarkerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrXRMarkerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrXRMarkerComponent) \
	NO_API virtual ~UYvrXRMarkerComponent();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_29_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRMR_API UClass* StaticClass<class UYvrXRMarkerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
