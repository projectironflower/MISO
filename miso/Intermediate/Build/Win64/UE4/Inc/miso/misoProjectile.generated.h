// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MISO_misoProjectile_generated_h
#error "misoProjectile.generated.h already included, missing '#pragma once' in misoProjectile.h"
#endif
#define MISO_misoProjectile_generated_h

#define miso_Source_miso_misoProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define miso_Source_miso_misoProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define miso_Source_miso_misoProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmisoProjectile(); \
	friend struct Z_Construct_UClass_AmisoProjectile_Statics; \
public: \
	DECLARE_CLASS(AmisoProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/miso"), NO_API) \
	DECLARE_SERIALIZER(AmisoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define miso_Source_miso_misoProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAmisoProjectile(); \
	friend struct Z_Construct_UClass_AmisoProjectile_Statics; \
public: \
	DECLARE_CLASS(AmisoProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/miso"), NO_API) \
	DECLARE_SERIALIZER(AmisoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define miso_Source_miso_misoProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmisoProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmisoProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmisoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmisoProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmisoProjectile(AmisoProjectile&&); \
	NO_API AmisoProjectile(const AmisoProjectile&); \
public:


#define miso_Source_miso_misoProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmisoProjectile(AmisoProjectile&&); \
	NO_API AmisoProjectile(const AmisoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmisoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmisoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmisoProjectile)


#define miso_Source_miso_misoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AmisoProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AmisoProjectile, ProjectileMovement); }


#define miso_Source_miso_misoProjectile_h_9_PROLOG
#define miso_Source_miso_misoProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	miso_Source_miso_misoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	miso_Source_miso_misoProjectile_h_12_RPC_WRAPPERS \
	miso_Source_miso_misoProjectile_h_12_INCLASS \
	miso_Source_miso_misoProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define miso_Source_miso_misoProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	miso_Source_miso_misoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	miso_Source_miso_misoProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	miso_Source_miso_misoProjectile_h_12_INCLASS_NO_PURE_DECLS \
	miso_Source_miso_misoProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MISO_API UClass* StaticClass<class AmisoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID miso_Source_miso_misoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
