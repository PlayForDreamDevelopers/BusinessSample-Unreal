// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVSTCameraFrameItem;
#ifdef YVRBUSINESS_YvrCameraComponent_generated_h
#error "YvrCameraComponent.generated.h already included, missing '#pragma once' in YvrCameraComponent.h"
#endif
#define YVRBUSINESS_YvrCameraComponent_generated_h

#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYvrBusinessDelegates(); \
	friend struct Z_Construct_UClass_UYvrBusinessDelegates_Statics; \
public: \
	DECLARE_CLASS(UYvrBusinessDelegates, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YvrBusiness"), NO_API) \
	DECLARE_SERIALIZER(UYvrBusinessDelegates)


#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrBusinessDelegates(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrBusinessDelegates(UYvrBusinessDelegates&&); \
	UYvrBusinessDelegates(const UYvrBusinessDelegates&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrBusinessDelegates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrBusinessDelegates); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrBusinessDelegates) \
	NO_API virtual ~UYvrBusinessDelegates();


#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_14_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRBUSINESS_API UClass* StaticClass<class UYvrBusinessDelegates>();

#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_31_DELEGATE \
static YVRBUSINESS_API void FCameraFrameDelegate_DelegateWrapper(const FMulticastScriptDelegate& CameraFrameDelegate, FVSTCameraFrameItem Frame);


#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYvrCameraComponent(); \
	friend struct Z_Construct_UClass_UYvrCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UYvrCameraComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YvrBusiness"), NO_API) \
	DECLARE_SERIALIZER(UYvrCameraComponent)


#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrCameraComponent(UYvrCameraComponent&&); \
	UYvrCameraComponent(const UYvrCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrCameraComponent) \
	NO_API virtual ~UYvrCameraComponent();


#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_25_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRBUSINESS_API UClass* StaticClass<class UYvrCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
