// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MISO_misoGameMode_generated_h
#error "misoGameMode.generated.h already included, missing '#pragma once' in misoGameMode.h"
#endif
#define MISO_misoGameMode_generated_h

#define miso_Source_miso_misoGameMode_h_12_RPC_WRAPPERS
#define miso_Source_miso_misoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define miso_Source_miso_misoGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmisoGameMode(); \
	friend struct Z_Construct_UClass_AmisoGameMode_Statics; \
public: \
	DECLARE_CLASS(AmisoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/miso"), MISO_API) \
	DECLARE_SERIALIZER(AmisoGameMode)


#define miso_Source_miso_misoGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAmisoGameMode(); \
	friend struct Z_Construct_UClass_AmisoGameMode_Statics; \
public: \
	DECLARE_CLASS(AmisoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/miso"), MISO_API) \
	DECLARE_SERIALIZER(AmisoGameMode)


#define miso_Source_miso_misoGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MISO_API AmisoGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmisoGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MISO_API, AmisoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmisoGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MISO_API AmisoGameMode(AmisoGameMode&&); \
	MISO_API AmisoGameMode(const AmisoGameMode&); \
public:


#define miso_Source_miso_misoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MISO_API AmisoGameMode(AmisoGameMode&&); \
	MISO_API AmisoGameMode(const AmisoGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MISO_API, AmisoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmisoGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmisoGameMode)


#define miso_Source_miso_misoGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define miso_Source_miso_misoGameMode_h_9_PROLOG
#define miso_Source_miso_misoGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	miso_Source_miso_misoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	miso_Source_miso_misoGameMode_h_12_RPC_WRAPPERS \
	miso_Source_miso_misoGameMode_h_12_INCLASS \
	miso_Source_miso_misoGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define miso_Source_miso_misoGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	miso_Source_miso_misoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	miso_Source_miso_misoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	miso_Source_miso_misoGameMode_h_12_INCLASS_NO_PURE_DECLS \
	miso_Source_miso_misoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MISO_API UClass* StaticClass<class AmisoGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID miso_Source_miso_misoGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
