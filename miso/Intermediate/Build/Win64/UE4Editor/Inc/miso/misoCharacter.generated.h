// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MISO_misoCharacter_generated_h
#error "misoCharacter.generated.h already included, missing '#pragma once' in misoCharacter.h"
#endif
#define MISO_misoCharacter_generated_h

#define miso_Source_miso_misoCharacter_h_14_RPC_WRAPPERS
#define miso_Source_miso_misoCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define miso_Source_miso_misoCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmisoCharacter(); \
	friend struct Z_Construct_UClass_AmisoCharacter_Statics; \
public: \
	DECLARE_CLASS(AmisoCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/miso"), NO_API) \
	DECLARE_SERIALIZER(AmisoCharacter)


#define miso_Source_miso_misoCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAmisoCharacter(); \
	friend struct Z_Construct_UClass_AmisoCharacter_Statics; \
public: \
	DECLARE_CLASS(AmisoCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/miso"), NO_API) \
	DECLARE_SERIALIZER(AmisoCharacter)


#define miso_Source_miso_misoCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmisoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmisoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmisoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmisoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmisoCharacter(AmisoCharacter&&); \
	NO_API AmisoCharacter(const AmisoCharacter&); \
public:


#define miso_Source_miso_misoCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmisoCharacter(AmisoCharacter&&); \
	NO_API AmisoCharacter(const AmisoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmisoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmisoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmisoCharacter)


#define miso_Source_miso_misoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AmisoCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AmisoCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AmisoCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AmisoCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AmisoCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AmisoCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AmisoCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AmisoCharacter, L_MotionController); }


#define miso_Source_miso_misoCharacter_h_11_PROLOG
#define miso_Source_miso_misoCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	miso_Source_miso_misoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	miso_Source_miso_misoCharacter_h_14_RPC_WRAPPERS \
	miso_Source_miso_misoCharacter_h_14_INCLASS \
	miso_Source_miso_misoCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define miso_Source_miso_misoCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	miso_Source_miso_misoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	miso_Source_miso_misoCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	miso_Source_miso_misoCharacter_h_14_INCLASS_NO_PURE_DECLS \
	miso_Source_miso_misoCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MISO_API UClass* StaticClass<class AmisoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID miso_Source_miso_misoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
