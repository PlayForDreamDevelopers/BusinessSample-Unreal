// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrXRMRFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UObject;
class UYvrAnchorComponent;
class UYvrXRSpaceMeshComponent;
struct FYvrAnchor;
struct FYvrAnchorLoadResult;
struct FYvrAnchorUUID;
#ifdef YVRXRMR_YvrXRMRFunctionLibrary_generated_h
#error "YvrXRMRFunctionLibrary.generated.h already included, missing '#pragma once' in YvrXRMRFunctionLibrary.h"
#endif
#define YVRXRMR_YvrXRMRFunctionLibrary_generated_h

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execYvrXRSetMarkerEnabled); \
	DECLARE_FUNCTION(execYvrXRDestroyMeshDetector); \
	DECLARE_FUNCTION(execYvrXRCreateMeshDetector); \
	DECLARE_FUNCTION(execYvrXRGetAnchorSemanticLabels); \
	DECLARE_FUNCTION(execYvrXRGetAnchorBoundingBox3D); \
	DECLARE_FUNCTION(execYvrXRGetAnchorBoundingBox2D); \
	DECLARE_FUNCTION(execYvrXRFromUUIDToString); \
	DECLARE_FUNCTION(execYvrXRFromAnchorToString); \
	DECLARE_FUNCTION(execYvrXRIsAnchorValidForComponent); \
	DECLARE_FUNCTION(execYvrXRIsAnchorValidForActor); \
	DECLARE_FUNCTION(execYvrXRSpawnActorFromLoadResult); \
	DECLARE_FUNCTION(execYvrXRGetAnchorPoseByActor); \
	DECLARE_FUNCTION(execYvrXRGetAnchorPoseByComponent); \
	DECLARE_FUNCTION(execYvrXRGetAnchorEntityUuid);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYvrXRMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UYvrXRMRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UYvrXRMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YvrXRMR"), NO_API) \
	DECLARE_SERIALIZER(UYvrXRMRFunctionLibrary)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrXRMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrXRMRFunctionLibrary(UYvrXRMRFunctionLibrary&&); \
	UYvrXRMRFunctionLibrary(const UYvrXRMRFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrXRMRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrXRMRFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrXRMRFunctionLibrary) \
	NO_API virtual ~UYvrXRMRFunctionLibrary();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_16_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRMR_API UClass* StaticClass<class UYvrXRMRFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
