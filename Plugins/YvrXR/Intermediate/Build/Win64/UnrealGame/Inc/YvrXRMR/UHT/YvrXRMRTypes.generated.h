// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YvrXRMRTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YVRXRMR_YvrXRMRTypes_generated_h
#error "YvrXRMRTypes.generated.h already included, missing '#pragma once' in YvrXRMRTypes.h"
#endif
#define YVRXRMR_YvrXRMRTypes_generated_h

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRTypes_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYvrAnchor_Statics; \
	static class UScriptStruct* StaticStruct();


template<> YVRXRMR_API UScriptStruct* StaticStruct<struct FYvrAnchor>();

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRTypes_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYvrAnchorUUID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> YVRXRMR_API UScriptStruct* StaticStruct<struct FYvrAnchorUUID>();

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRTypes_h_225_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> YVRXRMR_API UScriptStruct* StaticStruct<struct FYvrAnchorLoadInfo>();

#define FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRTypes_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> YVRXRMR_API UScriptStruct* StaticStruct<struct FYvrAnchorLoadResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRTypes_h


#define FOREACH_ENUM_EYVRRESULT(op) \
	op(Success) \
	op(TimeoutExpired) \
	op(Error_ValidationFailure) \
	op(Error_RuntimeFailure) \
	op(Error_OutOfMemory) \
	op(Error_APIVersionUnsupported) \
	op(Error_InitializationFailed) \
	op(Error_FunctionUnsupported) \
	op(Error_FeatureUnsupported) \
	op(Error_LimitReached) \
	op(Error_SizeInsufficient) \
	op(Error_HandleInvalid) \
	op(Error_ComponentNotSupported) \
	op(Error_ComponentConflict) \
	op(Error_ComponentNotAdded) \
	op(Error_ComponentAdded) \
	op(Error_Unknow) 
#define FOREACH_ENUM_EYVRSPATIALSCENEDATATYPEFLAG(op) \
	op(EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Locatable) \
	op(EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Storable) \
	op(EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Sharable) \
	op(EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Bounded_2D) \
	op(EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Bounded_3D) \
	op(EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Semantic_Labels) \
	op(EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Room_Layout) \
	op(EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Space_Container) \
	op(EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Max) 

enum class EYvrSpatialSceneDataTypeFlag : uint8;
template<> struct TIsUEnumClass<EYvrSpatialSceneDataTypeFlag> { enum { Value = true }; };
template<> YVRXRMR_API UEnum* StaticEnum<EYvrSpatialSceneDataTypeFlag>();

#define FOREACH_ENUM_EYVRANCHORSCENELABEL(op) \
	op(EYvrAnchorSceneLabel::SceneLabel_Unknown) \
	op(EYvrAnchorSceneLabel::SceneLabel_Floor) \
	op(EYvrAnchorSceneLabel::SceneLabel_Ceiling) \
	op(EYvrAnchorSceneLabel::SceneLabel_Wall) \
	op(EYvrAnchorSceneLabel::SceneLabel_Door) \
	op(EYvrAnchorSceneLabel::SceneLabel_Window) \
	op(EYvrAnchorSceneLabel::SceneLabel_Opening) \
	op(EYvrAnchorSceneLabel::SceneLabel_Table) \
	op(EYvrAnchorSceneLabel::SceneLabel_Sofa) 

enum class EYvrAnchorSceneLabel : uint8;
template<> struct TIsUEnumClass<EYvrAnchorSceneLabel> { enum { Value = true }; };
template<> YVRXRMR_API UEnum* StaticEnum<EYvrAnchorSceneLabel>();

#define FOREACH_ENUM_EYVRSAVELOCATION(op) \
	op(EYvrSaveLocation::SaveLocation_None) \
	op(EYvrSaveLocation::SaveLocation_Local) \
	op(EYvrSaveLocation::SaveLocation_Remote) 

enum class EYvrSaveLocation : uint8;
template<> struct TIsUEnumClass<EYvrSaveLocation> { enum { Value = true }; };
template<> YVRXRMR_API UEnum* StaticEnum<EYvrSaveLocation>();

#define FOREACH_ENUM_EYVRLOADFILTERTYPE(op) \
	op(EYvrLoadFilterType::LoadFilterType_None) \
	op(EYvrLoadFilterType::LoadFilterType_UUID) \
	op(EYvrLoadFilterType::LoadFilterType_SpatialSceneData) 

enum class EYvrLoadFilterType : uint8;
template<> struct TIsUEnumClass<EYvrLoadFilterType> { enum { Value = true }; };
template<> YVRXRMR_API UEnum* StaticEnum<EYvrLoadFilterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
