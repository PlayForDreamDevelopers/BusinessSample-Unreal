// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrXRAsyncAnchorAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UYvrAnchorComponent;
class UYvrCreateAnchorEntity_AsyncAction;
class UYvrEraseAnchorEntity_AsyncAction;
class UYvrLoadAnchorEntity_AsyncAction;
class UYvrSaveAnchorEntity_AsyncAction;
class UYvrStartSpatialSceneCapture_AsyncAction;
enum class EYvrSaveLocation : uint8;
struct FYvrAnchorLoadInfo;
struct FYvrAnchorLoadResult;
#ifdef YVRXRMR_YvrXRAsyncAnchorAction_generated_h
#error "YvrXRAsyncAnchorAction.generated.h already included, missing '#pragma once' in YvrXRAsyncAnchorAction.h"
#endif
#define YVRXRMR_YvrXRAsyncAnchorAction_generated_h

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_13_DELEGATE \
YVRXRMR_API void FYvrCreateAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& YvrCreateAnchorEntityActionSuccess, EYvrResult Result, UYvrAnchorComponent* AnchorEntityComponent);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_14_DELEGATE \
YVRXRMR_API void FYvrCreateAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& YvrCreateAnchorEntityActionFailure, EYvrResult Result);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_16_DELEGATE \
YVRXRMR_API void FYvrSaveAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& YvrSaveAnchorEntityActionSuccess, EYvrResult Result, UYvrAnchorComponent* AnchorEntityComponent);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_17_DELEGATE \
YVRXRMR_API void FYvrSaveAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& YvrSaveAnchorEntityActionFailure, EYvrResult Result);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_19_DELEGATE \
YVRXRMR_API void FYvrEraseAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& YvrEraseAnchorEntityActionSuccess, EYvrResult Result, UYvrAnchorComponent* AnchorEntityComponent);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_20_DELEGATE \
YVRXRMR_API void FYvrEraseAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& YvrEraseAnchorEntityActionFailure, EYvrResult Result);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_22_DELEGATE \
YVRXRMR_API void FYvrLoadAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& YvrLoadAnchorEntityActionSuccess, EYvrResult Result, TArray<FYvrAnchorLoadResult> const& AnchorLoadResults);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_23_DELEGATE \
YVRXRMR_API void FYvrLoadAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& YvrLoadAnchorEntityActionFailure, EYvrResult Result);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_25_DELEGATE \
YVRXRMR_API void FYvrStartSpatialSceneCaptureActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& YvrStartSpatialSceneCaptureActionSuccess, EYvrResult Result);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_26_DELEGATE \
YVRXRMR_API void FYvrStartSpatialSceneCaptureActionFailure_DelegateWrapper(const FMulticastScriptDelegate& YvrStartSpatialSceneCaptureActionFailure, EYvrResult Result);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execYvrXRCreateAnchorEntity_Async);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYvrCreateAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UYvrCreateAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YvrXRMR"), NO_API) \
	DECLARE_SERIALIZER(UYvrCreateAnchorEntity_AsyncAction)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrCreateAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrCreateAnchorEntity_AsyncAction(UYvrCreateAnchorEntity_AsyncAction&&); \
	UYvrCreateAnchorEntity_AsyncAction(const UYvrCreateAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrCreateAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrCreateAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrCreateAnchorEntity_AsyncAction) \
	NO_API virtual ~UYvrCreateAnchorEntity_AsyncAction();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_31_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_34_INCLASS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRMR_API UClass* StaticClass<class UYvrCreateAnchorEntity_AsyncAction>();

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execYvrXRSaveAnchorEntity_Async);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYvrSaveAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UYvrSaveAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YvrXRMR"), NO_API) \
	DECLARE_SERIALIZER(UYvrSaveAnchorEntity_AsyncAction)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrSaveAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrSaveAnchorEntity_AsyncAction(UYvrSaveAnchorEntity_AsyncAction&&); \
	UYvrSaveAnchorEntity_AsyncAction(const UYvrSaveAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrSaveAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrSaveAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrSaveAnchorEntity_AsyncAction) \
	NO_API virtual ~UYvrSaveAnchorEntity_AsyncAction();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_60_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_63_INCLASS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRMR_API UClass* StaticClass<class UYvrSaveAnchorEntity_AsyncAction>();

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execYvrXREraseAnchorEntity_Async);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYvrEraseAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UYvrEraseAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YvrXRMR"), NO_API) \
	DECLARE_SERIALIZER(UYvrEraseAnchorEntity_AsyncAction)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrEraseAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrEraseAnchorEntity_AsyncAction(UYvrEraseAnchorEntity_AsyncAction&&); \
	UYvrEraseAnchorEntity_AsyncAction(const UYvrEraseAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrEraseAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrEraseAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrEraseAnchorEntity_AsyncAction) \
	NO_API virtual ~UYvrEraseAnchorEntity_AsyncAction();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_87_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_90_INCLASS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRMR_API UClass* StaticClass<class UYvrEraseAnchorEntity_AsyncAction>();

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execYvrXRLoadAnchorEntity_Async);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYvrLoadAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UYvrLoadAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YvrXRMR"), NO_API) \
	DECLARE_SERIALIZER(UYvrLoadAnchorEntity_AsyncAction)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrLoadAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrLoadAnchorEntity_AsyncAction(UYvrLoadAnchorEntity_AsyncAction&&); \
	UYvrLoadAnchorEntity_AsyncAction(const UYvrLoadAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrLoadAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrLoadAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrLoadAnchorEntity_AsyncAction) \
	NO_API virtual ~UYvrLoadAnchorEntity_AsyncAction();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_114_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_117_INCLASS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRMR_API UClass* StaticClass<class UYvrLoadAnchorEntity_AsyncAction>();

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execYvrXRStartSpatialSceneCapture_Async);


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYvrStartSpatialSceneCapture_AsyncAction(); \
	friend struct Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UYvrStartSpatialSceneCapture_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YvrXRMR"), NO_API) \
	DECLARE_SERIALIZER(UYvrStartSpatialSceneCapture_AsyncAction)


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_142_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYvrStartSpatialSceneCapture_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrStartSpatialSceneCapture_AsyncAction(UYvrStartSpatialSceneCapture_AsyncAction&&); \
	UYvrStartSpatialSceneCapture_AsyncAction(const UYvrStartSpatialSceneCapture_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYvrStartSpatialSceneCapture_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrStartSpatialSceneCapture_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrStartSpatialSceneCapture_AsyncAction) \
	NO_API virtual ~UYvrStartSpatialSceneCapture_AsyncAction();


#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_139_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_142_INCLASS_NO_PURE_DECLS \
	FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YVRXRMR_API UClass* StaticClass<class UYvrStartSpatialSceneCapture_AsyncAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
