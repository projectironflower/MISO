// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef STRIXSDK_StrixMovementSynchronizer_generated_h
#error "StrixMovementSynchronizer.generated.h already included, missing '#pragma once' in StrixMovementSynchronizer.h"
#endif
#define STRIXSDK_StrixMovementSynchronizer_generated_h

#define miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInterpolateRotation) \
	{ \
		P_GET_UBOOL(Z_Param_interpolate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInterpolateRotation(Z_Param_interpolate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncZVelocity) \
	{ \
		P_GET_UBOOL(Z_Param_sync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncZVelocity(Z_Param_sync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncYVelocity) \
	{ \
		P_GET_UBOOL(Z_Param_sync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncYVelocity(Z_Param_sync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncXVelocity) \
	{ \
		P_GET_UBOOL(Z_Param_sync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncXVelocity(Z_Param_sync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncJump) \
	{ \
		P_GET_UBOOL(Z_Param_sync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncJump(Z_Param_sync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncPeriodMax) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_periodMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncPeriodMax(Z_Param_periodMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncPeriodMin) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_periodMin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncPeriodMin(Z_Param_periodMin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSync) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSync(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendJumpRpcIfNecessary) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_character); \
		P_GET_PROPERTY(UByteProperty,Z_Param_mode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_v); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendJumpRpcIfNecessary(Z_Param_character,EMovementMode(Z_Param_mode),Z_Param_v); \
		P_NATIVE_END; \
	}


#define miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInterpolateRotation) \
	{ \
		P_GET_UBOOL(Z_Param_interpolate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInterpolateRotation(Z_Param_interpolate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncZVelocity) \
	{ \
		P_GET_UBOOL(Z_Param_sync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncZVelocity(Z_Param_sync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncYVelocity) \
	{ \
		P_GET_UBOOL(Z_Param_sync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncYVelocity(Z_Param_sync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncXVelocity) \
	{ \
		P_GET_UBOOL(Z_Param_sync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncXVelocity(Z_Param_sync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncJump) \
	{ \
		P_GET_UBOOL(Z_Param_sync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncJump(Z_Param_sync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncPeriodMax) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_periodMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncPeriodMax(Z_Param_periodMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSyncPeriodMin) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_periodMin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSyncPeriodMin(Z_Param_periodMin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSync) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSync(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendJumpRpcIfNecessary) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_character); \
		P_GET_PROPERTY(UByteProperty,Z_Param_mode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_v); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendJumpRpcIfNecessary(Z_Param_character,EMovementMode(Z_Param_mode),Z_Param_v); \
		P_NATIVE_END; \
	}


#define miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStrixMovementSynchronizer(); \
	friend struct Z_Construct_UClass_UStrixMovementSynchronizer_Statics; \
public: \
	DECLARE_CLASS(UStrixMovementSynchronizer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixMovementSynchronizer)


#define miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUStrixMovementSynchronizer(); \
	friend struct Z_Construct_UClass_UStrixMovementSynchronizer_Statics; \
public: \
	DECLARE_CLASS(UStrixMovementSynchronizer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixMovementSynchronizer)


#define miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixMovementSynchronizer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixMovementSynchronizer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixMovementSynchronizer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixMovementSynchronizer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixMovementSynchronizer(UStrixMovementSynchronizer&&); \
	NO_API UStrixMovementSynchronizer(const UStrixMovementSynchronizer&); \
public:


#define miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixMovementSynchronizer(UStrixMovementSynchronizer&&); \
	NO_API UStrixMovementSynchronizer(const UStrixMovementSynchronizer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixMovementSynchronizer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixMovementSynchronizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStrixMovementSynchronizer)


#define miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_PRIVATE_PROPERTY_OFFSET
#define miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_45_PROLOG
#define miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_PRIVATE_PROPERTY_OFFSET \
	miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_RPC_WRAPPERS \
	miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_INCLASS \
	miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_PRIVATE_PROPERTY_OFFSET \
	miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_INCLASS_NO_PURE_DECLS \
	miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRIXSDK_API UClass* StaticClass<class UStrixMovementSynchronizer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID miso_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixMovementSynchronizer_h


#define FOREACH_ENUM_EMOVEMENTSYNCTYPE(op) \
	op(EMovementSyncType::RPC) \
	op(EMovementSyncType::SyncProperties) 

enum class EMovementSyncType : uint8;
template<> STRIXSDK_API UEnum* StaticEnum<EMovementSyncType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
