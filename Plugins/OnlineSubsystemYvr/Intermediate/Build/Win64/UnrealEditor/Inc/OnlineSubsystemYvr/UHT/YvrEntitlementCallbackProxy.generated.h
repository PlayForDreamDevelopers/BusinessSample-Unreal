// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrEntitlementCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UYvrEntitlementCallbackProxy;
#ifdef ONLINESUBSYSTEMYVR_YvrEntitlementCallbackProxy_generated_h
#error "YvrEntitlementCallbackProxy.generated.h already included, missing '#pragma once' in YvrEntitlementCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMYVR_YvrEntitlementCallbackProxy_generated_h

#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_9_DELEGATE \
ONLINESUBSYSTEMYVR_API void FYvrEntitlementCheckResult_DelegateWrapper(const FMulticastScriptDelegate& YvrEntitlementCheckResult);


#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execVerifyEntitlement);


#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUYvrEntitlementCallbackProxy(); \
	friend struct Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UYvrEntitlementCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemYvr"), ONLINESUBSYSTEMYVR_API) \
	DECLARE_SERIALIZER(UYvrEntitlementCallbackProxy)


#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMYVR_API UYvrEntitlementCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYvrEntitlementCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMYVR_API, UYvrEntitlementCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYvrEntitlementCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYvrEntitlementCallbackProxy(UYvrEntitlementCallbackProxy&&); \
	UYvrEntitlementCallbackProxy(const UYvrEntitlementCallbackProxy&); \
public: \
	ONLINESUBSYSTEMYVR_API virtual ~UYvrEntitlementCallbackProxy();


#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_14_PROLOG
#define FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_17_RPC_WRAPPERS \
	FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_17_INCLASS \
	FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMYVR_API UClass* StaticClass<class UYvrEntitlementCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
