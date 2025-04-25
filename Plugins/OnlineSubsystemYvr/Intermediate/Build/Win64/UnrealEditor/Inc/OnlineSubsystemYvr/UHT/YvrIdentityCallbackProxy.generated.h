// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrIdentityCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UYvrIdentityCallbackProxy;
#ifdef ONLINESUBSYSTEMYVR_YvrIdentityCallbackProxy_generated_h
#error "YvrIdentityCallbackProxy.generated.h already included, missing '#pragma once' in YvrIdentityCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMYVR_YvrIdentityCallbackProxy_generated_h

#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_9_DELEGATE \
ONLINESUBSYSTEMYVR_API void FYvrIdentitySuccessResult_DelegateWrapper(const FMulticastScriptDelegate& YvrIdentitySuccessResult, const FString& YvrId, const FString& YvrName);


#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_10_DELEGATE \
ONLINESUBSYSTEMYVR_API void FYvrIdentityFailureResult_DelegateWrapper(const FMulticastScriptDelegate& YvrIdentityFailureResult);


#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetYvrIdentity);


#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUYvrIdentityCallbackProxy(); \
	friend struct Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UYvrIdentityCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemYvr"), ONLINESUBSYSTEMYVR_API) \
	DECLARE_SERIALIZER(UYvrIdentityCallbackProxy)


#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMYVR_API UYvrIdentityCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrIdentityCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMYVR_API, UYvrIdentityCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrIdentityCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrIdentityCallbackProxy(UYvrIdentityCallbackProxy&&); \
	UYvrIdentityCallbackProxy(const UYvrIdentityCallbackProxy&); \
public: \
	ONLINESUBSYSTEMYVR_API virtual ~UYvrIdentityCallbackProxy();


#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_15_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_18_RPC_WRAPPERS \
	FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_18_INCLASS \
	FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMYVR_API UClass* StaticClass<class UYvrIdentityCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
