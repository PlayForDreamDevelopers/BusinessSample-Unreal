// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrXRAnchorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FYvrAnchor;
struct FYvrAnchorUUID;
#ifdef YVRXRMR_YvrXRAnchorComponent_generated_h
#error "YvrXRAnchorComponent.generated.h already included, missing '#pragma once' in YvrXRAnchorComponent.h"
#endif
#define YVRXRMR_YvrXRAnchorComponent_generated_h

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAnchorUUIDString); \
	DECLARE_FUNCTION(execGetAnchorUUID); \
	DECLARE_FUNCTION(execSetAnchorUUID); \
	DECLARE_FUNCTION(execIsAnchorValid); \
	DECLARE_FUNCTION(execGetAnchorHandleString); \
	DECLARE_FUNCTION(execSetAnchorHandle); \
	DECLARE_FUNCTION(execGetAnchorHandle);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYvrAnchorComponent(); \
	friend struct Z_Construct_UClass_UYvrAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UYvrAnchorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YvrXRMR"), NO_API) \
	DECLARE_SERIALIZER(UYvrAnchorComponent)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrAnchorComponent(UYvrAnchorComponent&&); \
	UYvrAnchorComponent(const UYvrAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrAnchorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrAnchorComponent) \
	NO_API virtual ~UYvrAnchorComponent();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_11_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRMR_API UClass* StaticClass<class UYvrAnchorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
