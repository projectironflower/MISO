// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStrixNetworkId;
struct FStrixRelayArg;
 
 struct FRotator;
 struct FVector;
struct FVector;
struct FTransform;
struct FRotator;
struct FQuat;
struct FStrixOrder;
struct FStrixCondition;
struct FStrixPropertyMap;
class UObject;
class AActor;
struct FStrixRoomMember;
struct FStrixRoom;
struct FStrixNodeRoomInfo;
#ifdef STRIXSDK_StrixBlueprintFunctionLibrary_generated_h
#error "StrixBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in StrixBlueprintFunctionLibrary.h"
#endif
#define STRIXSDK_StrixBlueprintFunctionLibrary_generated_h

#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_StrixNetworkIdToStrixRelayArg) \
	{ \
		P_GET_STRUCT(FStrixNetworkId,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StrixNetworkIdToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyStringMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,FString,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyStringMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyRotatorMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,FRotator,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyRotatorMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyVectorMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,FVector,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyVectorMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyFloatMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,float,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyFloatMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyIntMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,int32,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyIntMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyByteMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,uint8,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyByteMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyStringMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,FString,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyStringMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyRotatorMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,FRotator,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyRotatorMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyVectorMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,FVector,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyVectorMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyFloatMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,float,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyFloatMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyIntMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,int32,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyIntMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyByteMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,uint8,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyByteMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringSetToStrixRelayArg) \
	{ \
		P_GET_TSET(FString,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringSetToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorSetToStrixRelayArg) \
	{ \
		P_GET_TSET(FVector,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_VectorSetToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatSetToStrixRelayArg) \
	{ \
		P_GET_TSET(float,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_FloatSetToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntSetToStrixRelayArg) \
	{ \
		P_GET_TSET(int32,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntSetToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteSetToStrixRelayArg) \
	{ \
		P_GET_TSET(uint8,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_ByteSetToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(bool,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_BoolArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TextArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FText,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_TextArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FString,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TransformArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FTransform,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_TransformArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FRotator,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_RotatorArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_QuatArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FQuat,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_QuatArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_VectorArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(float,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_FloatArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(int32,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_ByteArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TextToStrixRelayArg) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_TextToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToStrixRelayArg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_QuatToStrixRelayArg) \
	{ \
		P_GET_STRUCT(FQuat,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_QuatToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TransformToStrixRelayArg) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_TransformToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorToStrixRelayArg) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_RotatorToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToStrixRelayArg) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_VectorToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatToStrixRelayArg) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_FloatToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToStrixRelayArg) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToStrixRelayArg) \
	{ \
		P_GET_UBOOL(Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_BoolToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteToStrixRelayArg) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_ByteToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixDescendingOrder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixOrder*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixDescendingOrder(Z_Param_fieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixAscendingOrder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixOrder*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixAscendingOrder(Z_Param_fieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixOrCondition) \
	{ \
		P_GET_TARRAY(FStrixCondition,Z_Param_conditions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixOrCondition(Z_Param_conditions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixAndCondition) \
	{ \
		P_GET_TARRAY(FStrixCondition,Z_Param_conditions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixAndCondition(Z_Param_conditions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldIsNotNullCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldIsNotNullCondition(Z_Param_fieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldIsNullCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldIsNullCondition(Z_Param_fieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldBetweenInclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_left); \
		P_GET_PROPERTY(UStrProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldBetweenInclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldBetweenExclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_left); \
		P_GET_PROPERTY(UStrProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldBetweenExclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldLessThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldLessThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldLessThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldLessThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldGreaterThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldGreaterThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldGreaterThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldGreaterThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixStringStartsWithCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixStringStartsWithCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixStringEndsWithCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixStringEndsWithCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixStringContainsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixStringContainsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixStringNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixStringNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixStringEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixStringEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatBetweenInclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_left); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatBetweenInclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatBetweenExclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_left); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatBetweenExclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatLessThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatLessThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatLessThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatLessThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatGreaterThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatGreaterThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatGreaterThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatGreaterThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntBetweenInclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_left); \
		P_GET_PROPERTY(UIntProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntBetweenInclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntBetweenExclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_left); \
		P_GET_PROPERTY(UIntProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntBetweenExclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntLessThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntLessThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntLessThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntLessThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntGreaterThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntGreaterThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntGreaterThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntGreaterThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteBetweenInclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_left); \
		P_GET_PROPERTY(UByteProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteBetweenInclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteBetweenExclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_left); \
		P_GET_PROPERTY(UByteProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteBetweenExclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteLessThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteLessThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteLessThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteLessThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteGreaterThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteGreaterThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteGreaterThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteGreaterThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixBoolNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixBoolNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixBoolEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixBoolEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringProperty) \
	{ \
		P_GET_STRUCT(FStrixPropertyMap,Z_Param_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixPropertyMap*)Z_Param__Result=UStrixBlueprintFunctionLibrary::SetStringProperty(Z_Param_strixStructure,Z_Param_propertyName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatProperty) \
	{ \
		P_GET_STRUCT(FStrixPropertyMap,Z_Param_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixPropertyMap*)Z_Param__Result=UStrixBlueprintFunctionLibrary::SetFloatProperty(Z_Param_strixStructure,Z_Param_propertyName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntProperty) \
	{ \
		P_GET_STRUCT(FStrixPropertyMap,Z_Param_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixPropertyMap*)Z_Param__Result=UStrixBlueprintFunctionLibrary::SetIntProperty(Z_Param_strixStructure,Z_Param_propertyName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolProperty) \
	{ \
		P_GET_STRUCT(FStrixPropertyMap,Z_Param_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixPropertyMap*)Z_Param__Result=UStrixBlueprintFunctionLibrary::SetBoolProperty(Z_Param_strixStructure,Z_Param_propertyName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetByteProperty) \
	{ \
		P_GET_STRUCT(FStrixPropertyMap,Z_Param_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixPropertyMap*)Z_Param__Result=UStrixBlueprintFunctionLibrary::SetByteProperty(Z_Param_strixStructure,Z_Param_propertyName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetStringProperty) \
	{ \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::TryGetStringProperty(Z_Param_Out_strixStructure,Z_Param_propertyName,Z_Param_Out_result,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetFloatProperty) \
	{ \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::TryGetFloatProperty(Z_Param_Out_strixStructure,Z_Param_propertyName,Z_Param_Out_result,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetIntProperty) \
	{ \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::TryGetIntProperty(Z_Param_Out_strixStructure,Z_Param_propertyName,Z_Param_Out_result,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetBoolProperty) \
	{ \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_result); \
		P_GET_UBOOL_REF(Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::TryGetBoolProperty(Z_Param_Out_strixStructure,Z_Param_propertyName,Z_Param_Out_result,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetByteProperty) \
	{ \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::TryGetByteProperty(Z_Param_Out_strixStructure,Z_Param_propertyName,Z_Param_Out_result,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnpauseNetworkObjectManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::UnpauseNetworkObjectManager(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseNetworkObjectManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::PauseNetworkObjectManager(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectFromNetworkIdString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_networkId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetObjectFromNetworkIdString(Z_Param_WorldContextObject,Z_Param_networkId,Z_Param_channel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectFromNetworkId) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FStrixNetworkId,Z_Param_networkId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetObjectFromNetworkId(Z_Param_WorldContextObject,Z_Param_networkId,Z_Param_channel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNetworkIdFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixNetworkId*)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetNetworkIdFromObject(Z_Param_WorldContextObject,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRpc) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_STRUCT_REF(FStrixRoomMember,Z_Param_Out_member); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_GET_TARRAY_REF(FStrixRelayArg,Z_Param_Out_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SendRpc(Z_Param_WorldContextObject,Z_Param_target,Z_Param_Out_member,Z_Param_functionName,Z_Param_Out_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRpcToAll) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_GET_TARRAY_REF(FStrixRelayArg,Z_Param_Out_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SendRpcToAll(Z_Param_WorldContextObject,Z_Param_target,Z_Param_functionName,Z_Param_Out_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRpcToOtherMembers) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_GET_TARRAY_REF(FStrixRelayArg,Z_Param_Out_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SendRpcToOtherMembers(Z_Param_WorldContextObject,Z_Param_target,Z_Param_functionName,Z_Param_Out_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRpcToRoomOwner) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_GET_TARRAY_REF(FStrixRelayArg,Z_Param_Out_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SendRpcToRoomOwner(Z_Param_WorldContextObject,Z_Param_target,Z_Param_functionName,Z_Param_Out_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRpcToObjectOwner) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_GET_TARRAY_REF(FStrixRelayArg,Z_Param_Out_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SendRpcToObjectOwner(Z_Param_WorldContextObject,Z_Param_target,Z_Param_functionName,Z_Param_Out_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterStrixRpc) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::RegisterStrixRpc(Z_Param_WorldContextObject,Z_Param_target,Z_Param_functionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDirectRelayMessage) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixRelayArg,Z_Param_Out_message); \
		P_GET_STRUCT_REF(FStrixRoomMember,Z_Param_Out_member); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::DirectRelayMessage(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_message,Z_Param_Out_member,FStrixRoomDirectRelayDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRelayMessage) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixRelayArg,Z_Param_Out_message); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::RelayMessage(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_message,FStrixRoomRelayDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::GetNodeCount(Z_Param_WorldContextObject,FStrixNodeGetCountDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRoomMembers) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStrixRoomMember>*)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetCurrentRoomMembers(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRoomMemberById) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_memberId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRoomMember*)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetCurrentRoomMemberById(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_memberId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRoomMember) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRoomMember*)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetCurrentRoomMember(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRoomOwner) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStrixBlueprintFunctionLibrary::IsRoomOwner(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKickRoomMember) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixRoomMember,Z_Param_Out_member); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::KickRoomMember(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_member,FStrixRoomMemberKickDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRoomMember) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SetRoomMember(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_memberProperties,FStrixRoomMemberSetDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRoom*)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetCurrentRoom(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_roomProperties); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SetRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_roomProperties,FStrixRoomSetDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::DeleteRoom(Z_Param_WorldContextObject,Z_Param_channelId,FStrixRoomDeleteDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::LeaveRoom(Z_Param_WorldContextObject,Z_Param_channelId,FStrixRoomLeaveDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinRandomRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT(FStrixCondition,Z_Param_condition); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::JoinRandomRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_condition,Z_Param_Out_memberProperties,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchJoinableRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_offset); \
		P_GET_STRUCT_REF(FStrixCondition,Z_Param_Out_condition); \
		P_GET_STRUCT_REF(FStrixOrder,Z_Param_Out_order); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SearchJoinableRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_limit,Z_Param_offset,Z_Param_Out_condition,Z_Param_Out_order,FStrixRoomSearchDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_roomProperties); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::CreateRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_roomProperties,Z_Param_Out_memberProperties,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_roomId); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::JoinRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_roomId,Z_Param_Out_memberProperties,Z_Param_password,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_offset); \
		P_GET_STRUCT_REF(FStrixCondition,Z_Param_Out_condition); \
		P_GET_STRUCT_REF(FStrixOrder,Z_Param_Out_order); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SearchRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_limit,Z_Param_offset,Z_Param_Out_condition,Z_Param_Out_order,FStrixRoomSearchDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisconnectRoomServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::DisconnectRoomServer(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRoomServerConnected) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStrixBlueprintFunctionLibrary::IsRoomServerConnected(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectToRoomServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_host); \
		P_GET_PROPERTY(UIntProperty,Z_Param_port); \
		P_GET_PROPERTY(UStrProperty,Z_Param_protocol); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::ConnectToRoomServer(Z_Param_WorldContextObject,Z_Param_host,Z_Param_port,Z_Param_protocol,Z_Param_channelId,FStrixRoomServerConnectedDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNodeRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_roomProperties); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::CreateNodeRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_roomProperties,Z_Param_Out_memberProperties,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinNodeRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixNodeRoomInfo,Z_Param_Out_roomInfo); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::JoinNodeRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_roomInfo,Z_Param_Out_memberProperties,Z_Param_password,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinRandomNodeRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT(FStrixCondition,Z_Param_condition); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::JoinRandomNodeRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_condition,Z_Param_Out_memberProperties,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchJoinableNodeRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_offset); \
		P_GET_STRUCT_REF(FStrixCondition,Z_Param_Out_condition); \
		P_GET_STRUCT_REF(FStrixOrder,Z_Param_Out_order); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SearchJoinableNodeRoom(Z_Param_WorldContextObject,Z_Param_limit,Z_Param_offset,Z_Param_Out_condition,Z_Param_Out_order,FStrixNodeRoomSearchDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchNodeRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_offset); \
		P_GET_STRUCT_REF(FStrixCondition,Z_Param_Out_condition); \
		P_GET_STRUCT_REF(FStrixOrder,Z_Param_Out_order); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SearchNodeRoom(Z_Param_WorldContextObject,Z_Param_limit,Z_Param_offset,Z_Param_Out_condition,Z_Param_Out_order,FStrixNodeRoomSearchDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchNode) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_offset); \
		P_GET_STRUCT_REF(FStrixCondition,Z_Param_Out_condition); \
		P_GET_STRUCT_REF(FStrixOrder,Z_Param_Out_order); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SearchNode(Z_Param_WorldContextObject,Z_Param_limit,Z_Param_offset,Z_Param_Out_condition,Z_Param_Out_order,FStrixNodeSearchDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisconnectMasterServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::DisconnectMasterServer(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMasterServerConnected) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStrixBlueprintFunctionLibrary::IsMasterServerConnected(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectToMasterServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_host); \
		P_GET_PROPERTY(UIntProperty,Z_Param_port); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::ConnectToMasterServer(Z_Param_WorldContextObject,Z_Param_host,Z_Param_port,FStrixMasterServerConnectedDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNetworkObjectManagerPaused) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStrixBlueprintFunctionLibrary::IsNetworkObjectManagerPaused(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInitialized) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStrixBlueprintFunctionLibrary::IsInitialized(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopStrixNetwork) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::StopStrixNetwork(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeStrixNetworkWithHttpAccessToken) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_applicationId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_accessToken); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::InitializeStrixNetworkWithHttpAccessToken(Z_Param_WorldContextObject,Z_Param_applicationId,Z_Param_accessToken); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeStrixNetwork) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_applicationId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::InitializeStrixNetwork(Z_Param_WorldContextObject,Z_Param_applicationId); \
		P_NATIVE_END; \
	}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_StrixNetworkIdToStrixRelayArg) \
	{ \
		P_GET_STRUCT(FStrixNetworkId,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StrixNetworkIdToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyStringMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,FString,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyStringMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyRotatorMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,FRotator,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyRotatorMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyVectorMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,FVector,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyVectorMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyFloatMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,float,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyFloatMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyIntMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,int32,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyIntMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringKeyByteMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(FString,uint8,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringKeyByteMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyStringMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,FString,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyStringMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyRotatorMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,FRotator,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyRotatorMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyVectorMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,FVector,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyVectorMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyFloatMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,float,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyFloatMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyIntMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,int32,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyIntMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntKeyByteMapToStrixRelayArg) \
	{ \
		P_GET_TMAP(int32,uint8,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntKeyByteMapToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringSetToStrixRelayArg) \
	{ \
		P_GET_TSET(FString,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringSetToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorSetToStrixRelayArg) \
	{ \
		P_GET_TSET(FVector,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_VectorSetToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatSetToStrixRelayArg) \
	{ \
		P_GET_TSET(float,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_FloatSetToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntSetToStrixRelayArg) \
	{ \
		P_GET_TSET(int32,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntSetToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteSetToStrixRelayArg) \
	{ \
		P_GET_TSET(uint8,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_ByteSetToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(bool,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_BoolArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TextArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FText,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_TextArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FString,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TransformArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FTransform,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_TransformArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FRotator,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_RotatorArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_QuatArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FQuat,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_QuatArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_VectorArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(float,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_FloatArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(int32,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteArrayToStrixRelayArg) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_ByteArrayToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TextToStrixRelayArg) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_TextToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_StringToStrixRelayArg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_StringToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_QuatToStrixRelayArg) \
	{ \
		P_GET_STRUCT(FQuat,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_QuatToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TransformToStrixRelayArg) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_TransformToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorToStrixRelayArg) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_RotatorToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToStrixRelayArg) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_VectorToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatToStrixRelayArg) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_FloatToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToStrixRelayArg) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_IntToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToStrixRelayArg) \
	{ \
		P_GET_UBOOL(Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_BoolToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteToStrixRelayArg) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRelayArg*)Z_Param__Result=UStrixBlueprintFunctionLibrary::Conv_ByteToStrixRelayArg(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixDescendingOrder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixOrder*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixDescendingOrder(Z_Param_fieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixAscendingOrder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixOrder*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixAscendingOrder(Z_Param_fieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixOrCondition) \
	{ \
		P_GET_TARRAY(FStrixCondition,Z_Param_conditions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixOrCondition(Z_Param_conditions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixAndCondition) \
	{ \
		P_GET_TARRAY(FStrixCondition,Z_Param_conditions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixAndCondition(Z_Param_conditions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldIsNotNullCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldIsNotNullCondition(Z_Param_fieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldIsNullCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldIsNullCondition(Z_Param_fieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldBetweenInclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_left); \
		P_GET_PROPERTY(UStrProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldBetweenInclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldBetweenExclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_left); \
		P_GET_PROPERTY(UStrProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldBetweenExclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldLessThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldLessThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldLessThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldLessThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldGreaterThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldGreaterThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldGreaterThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldGreaterThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFieldEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFieldEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixStringStartsWithCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixStringStartsWithCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixStringEndsWithCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixStringEndsWithCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixStringContainsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixStringContainsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixStringNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixStringNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixStringEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixStringEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatBetweenInclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_left); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatBetweenInclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatBetweenExclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_left); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatBetweenExclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatLessThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatLessThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatLessThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatLessThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatGreaterThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatGreaterThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatGreaterThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatGreaterThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixFloatEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixFloatEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntBetweenInclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_left); \
		P_GET_PROPERTY(UIntProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntBetweenInclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntBetweenExclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_left); \
		P_GET_PROPERTY(UIntProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntBetweenExclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntLessThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntLessThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntLessThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntLessThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntGreaterThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntGreaterThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntGreaterThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntGreaterThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixIntEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixIntEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteBetweenInclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_left); \
		P_GET_PROPERTY(UByteProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteBetweenInclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteBetweenExclusiveCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_left); \
		P_GET_PROPERTY(UByteProperty,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteBetweenExclusiveCondition(Z_Param_fieldName,Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteLessThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteLessThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteLessThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteLessThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteGreaterThanEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteGreaterThanEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteGreaterThanCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteGreaterThanCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixByteEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixByteEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixBoolNotEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixBoolNotEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateStrixBoolEqualsCondition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fieldName); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixCondition*)Z_Param__Result=UStrixBlueprintFunctionLibrary::CreateStrixBoolEqualsCondition(Z_Param_fieldName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringProperty) \
	{ \
		P_GET_STRUCT(FStrixPropertyMap,Z_Param_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixPropertyMap*)Z_Param__Result=UStrixBlueprintFunctionLibrary::SetStringProperty(Z_Param_strixStructure,Z_Param_propertyName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatProperty) \
	{ \
		P_GET_STRUCT(FStrixPropertyMap,Z_Param_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixPropertyMap*)Z_Param__Result=UStrixBlueprintFunctionLibrary::SetFloatProperty(Z_Param_strixStructure,Z_Param_propertyName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntProperty) \
	{ \
		P_GET_STRUCT(FStrixPropertyMap,Z_Param_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixPropertyMap*)Z_Param__Result=UStrixBlueprintFunctionLibrary::SetIntProperty(Z_Param_strixStructure,Z_Param_propertyName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolProperty) \
	{ \
		P_GET_STRUCT(FStrixPropertyMap,Z_Param_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixPropertyMap*)Z_Param__Result=UStrixBlueprintFunctionLibrary::SetBoolProperty(Z_Param_strixStructure,Z_Param_propertyName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetByteProperty) \
	{ \
		P_GET_STRUCT(FStrixPropertyMap,Z_Param_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixPropertyMap*)Z_Param__Result=UStrixBlueprintFunctionLibrary::SetByteProperty(Z_Param_strixStructure,Z_Param_propertyName,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetStringProperty) \
	{ \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::TryGetStringProperty(Z_Param_Out_strixStructure,Z_Param_propertyName,Z_Param_Out_result,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetFloatProperty) \
	{ \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::TryGetFloatProperty(Z_Param_Out_strixStructure,Z_Param_propertyName,Z_Param_Out_result,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetIntProperty) \
	{ \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::TryGetIntProperty(Z_Param_Out_strixStructure,Z_Param_propertyName,Z_Param_Out_result,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetBoolProperty) \
	{ \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_result); \
		P_GET_UBOOL_REF(Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::TryGetBoolProperty(Z_Param_Out_strixStructure,Z_Param_propertyName,Z_Param_Out_result,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetByteProperty) \
	{ \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_strixStructure); \
		P_GET_PROPERTY(UStrProperty,Z_Param_propertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::TryGetByteProperty(Z_Param_Out_strixStructure,Z_Param_propertyName,Z_Param_Out_result,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnpauseNetworkObjectManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::UnpauseNetworkObjectManager(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseNetworkObjectManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::PauseNetworkObjectManager(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectFromNetworkIdString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_networkId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetObjectFromNetworkIdString(Z_Param_WorldContextObject,Z_Param_networkId,Z_Param_channel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectFromNetworkId) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FStrixNetworkId,Z_Param_networkId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetObjectFromNetworkId(Z_Param_WorldContextObject,Z_Param_networkId,Z_Param_channel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNetworkIdFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixNetworkId*)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetNetworkIdFromObject(Z_Param_WorldContextObject,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRpc) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_STRUCT_REF(FStrixRoomMember,Z_Param_Out_member); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_GET_TARRAY_REF(FStrixRelayArg,Z_Param_Out_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SendRpc(Z_Param_WorldContextObject,Z_Param_target,Z_Param_Out_member,Z_Param_functionName,Z_Param_Out_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRpcToAll) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_GET_TARRAY_REF(FStrixRelayArg,Z_Param_Out_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SendRpcToAll(Z_Param_WorldContextObject,Z_Param_target,Z_Param_functionName,Z_Param_Out_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRpcToOtherMembers) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_GET_TARRAY_REF(FStrixRelayArg,Z_Param_Out_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SendRpcToOtherMembers(Z_Param_WorldContextObject,Z_Param_target,Z_Param_functionName,Z_Param_Out_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRpcToRoomOwner) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_GET_TARRAY_REF(FStrixRelayArg,Z_Param_Out_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SendRpcToRoomOwner(Z_Param_WorldContextObject,Z_Param_target,Z_Param_functionName,Z_Param_Out_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRpcToObjectOwner) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_GET_TARRAY_REF(FStrixRelayArg,Z_Param_Out_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SendRpcToObjectOwner(Z_Param_WorldContextObject,Z_Param_target,Z_Param_functionName,Z_Param_Out_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterStrixRpc) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_functionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::RegisterStrixRpc(Z_Param_WorldContextObject,Z_Param_target,Z_Param_functionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDirectRelayMessage) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixRelayArg,Z_Param_Out_message); \
		P_GET_STRUCT_REF(FStrixRoomMember,Z_Param_Out_member); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::DirectRelayMessage(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_message,Z_Param_Out_member,FStrixRoomDirectRelayDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRelayMessage) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixRelayArg,Z_Param_Out_message); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::RelayMessage(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_message,FStrixRoomRelayDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::GetNodeCount(Z_Param_WorldContextObject,FStrixNodeGetCountDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRoomMembers) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FStrixRoomMember>*)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetCurrentRoomMembers(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRoomMemberById) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_memberId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRoomMember*)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetCurrentRoomMemberById(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_memberId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRoomMember) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRoomMember*)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetCurrentRoomMember(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRoomOwner) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStrixBlueprintFunctionLibrary::IsRoomOwner(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKickRoomMember) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixRoomMember,Z_Param_Out_member); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::KickRoomMember(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_member,FStrixRoomMemberKickDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRoomMember) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SetRoomMember(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_memberProperties,FStrixRoomMemberSetDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStrixRoom*)Z_Param__Result=UStrixBlueprintFunctionLibrary::GetCurrentRoom(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_roomProperties); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SetRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_roomProperties,FStrixRoomSetDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::DeleteRoom(Z_Param_WorldContextObject,Z_Param_channelId,FStrixRoomDeleteDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::LeaveRoom(Z_Param_WorldContextObject,Z_Param_channelId,FStrixRoomLeaveDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinRandomRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT(FStrixCondition,Z_Param_condition); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::JoinRandomRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_condition,Z_Param_Out_memberProperties,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchJoinableRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_offset); \
		P_GET_STRUCT_REF(FStrixCondition,Z_Param_Out_condition); \
		P_GET_STRUCT_REF(FStrixOrder,Z_Param_Out_order); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SearchJoinableRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_limit,Z_Param_offset,Z_Param_Out_condition,Z_Param_Out_order,FStrixRoomSearchDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_roomProperties); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::CreateRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_roomProperties,Z_Param_Out_memberProperties,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_roomId); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::JoinRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_roomId,Z_Param_Out_memberProperties,Z_Param_password,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_offset); \
		P_GET_STRUCT_REF(FStrixCondition,Z_Param_Out_condition); \
		P_GET_STRUCT_REF(FStrixOrder,Z_Param_Out_order); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SearchRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_limit,Z_Param_offset,Z_Param_Out_condition,Z_Param_Out_order,FStrixRoomSearchDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisconnectRoomServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::DisconnectRoomServer(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRoomServerConnected) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStrixBlueprintFunctionLibrary::IsRoomServerConnected(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectToRoomServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_host); \
		P_GET_PROPERTY(UIntProperty,Z_Param_port); \
		P_GET_PROPERTY(UStrProperty,Z_Param_protocol); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::ConnectToRoomServer(Z_Param_WorldContextObject,Z_Param_host,Z_Param_port,Z_Param_protocol,Z_Param_channelId,FStrixRoomServerConnectedDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNodeRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_roomProperties); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::CreateNodeRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_roomProperties,Z_Param_Out_memberProperties,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinNodeRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT_REF(FStrixNodeRoomInfo,Z_Param_Out_roomInfo); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::JoinNodeRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_Out_roomInfo,Z_Param_Out_memberProperties,Z_Param_password,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinRandomNodeRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_GET_STRUCT(FStrixCondition,Z_Param_condition); \
		P_GET_STRUCT_REF(FStrixPropertyMap,Z_Param_Out_memberProperties); \
		P_GET_UBOOL(Z_Param_pauseNetworkObjects); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::JoinRandomNodeRoom(Z_Param_WorldContextObject,Z_Param_channelId,Z_Param_condition,Z_Param_Out_memberProperties,Z_Param_pauseNetworkObjects,FStrixRoomContextOpenDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchJoinableNodeRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_offset); \
		P_GET_STRUCT_REF(FStrixCondition,Z_Param_Out_condition); \
		P_GET_STRUCT_REF(FStrixOrder,Z_Param_Out_order); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SearchJoinableNodeRoom(Z_Param_WorldContextObject,Z_Param_limit,Z_Param_offset,Z_Param_Out_condition,Z_Param_Out_order,FStrixNodeRoomSearchDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchNodeRoom) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_offset); \
		P_GET_STRUCT_REF(FStrixCondition,Z_Param_Out_condition); \
		P_GET_STRUCT_REF(FStrixOrder,Z_Param_Out_order); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SearchNodeRoom(Z_Param_WorldContextObject,Z_Param_limit,Z_Param_offset,Z_Param_Out_condition,Z_Param_Out_order,FStrixNodeRoomSearchDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchNode) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_offset); \
		P_GET_STRUCT_REF(FStrixCondition,Z_Param_Out_condition); \
		P_GET_STRUCT_REF(FStrixOrder,Z_Param_Out_order); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::SearchNode(Z_Param_WorldContextObject,Z_Param_limit,Z_Param_offset,Z_Param_Out_condition,Z_Param_Out_order,FStrixNodeSearchDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisconnectMasterServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::DisconnectMasterServer(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMasterServerConnected) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStrixBlueprintFunctionLibrary::IsMasterServerConnected(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectToMasterServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_host); \
		P_GET_PROPERTY(UIntProperty,Z_Param_port); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_successCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_failureCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::ConnectToMasterServer(Z_Param_WorldContextObject,Z_Param_host,Z_Param_port,FStrixMasterServerConnectedDelegate(Z_Param_Out_successCallback),FStrixErrorCodeFailureDelegate(Z_Param_Out_failureCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNetworkObjectManagerPaused) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_channelId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStrixBlueprintFunctionLibrary::IsNetworkObjectManagerPaused(Z_Param_WorldContextObject,Z_Param_channelId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInitialized) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStrixBlueprintFunctionLibrary::IsInitialized(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopStrixNetwork) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::StopStrixNetwork(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeStrixNetworkWithHttpAccessToken) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_applicationId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_accessToken); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::InitializeStrixNetworkWithHttpAccessToken(Z_Param_WorldContextObject,Z_Param_applicationId,Z_Param_accessToken); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeStrixNetwork) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_applicationId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStrixBlueprintFunctionLibrary::InitializeStrixNetwork(Z_Param_WorldContextObject,Z_Param_applicationId); \
		P_NATIVE_END; \
	}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStrixBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UStrixBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UStrixBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixBlueprintFunctionLibrary)


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUStrixBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UStrixBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UStrixBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixBlueprintFunctionLibrary)


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixBlueprintFunctionLibrary(UStrixBlueprintFunctionLibrary&&); \
	NO_API UStrixBlueprintFunctionLibrary(const UStrixBlueprintFunctionLibrary&); \
public:


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixBlueprintFunctionLibrary(UStrixBlueprintFunctionLibrary&&); \
	NO_API UStrixBlueprintFunctionLibrary(const UStrixBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixBlueprintFunctionLibrary)


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_PRIVATE_PROPERTY_OFFSET
#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_24_PROLOG
#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_RPC_WRAPPERS \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_INCLASS \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRIXSDK_API UClass* StaticClass<class UStrixBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
