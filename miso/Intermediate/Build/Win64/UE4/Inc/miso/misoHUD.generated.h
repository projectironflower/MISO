// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MISO_misoHUD_generated_h
#error "misoHUD.generated.h already included, missing '#pragma once' in misoHUD.h"
#endif
#define MISO_misoHUD_generated_h

#define miso_Source_miso_misoHUD_h_12_RPC_WRAPPERS
#define miso_Source_miso_misoHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define miso_Source_miso_misoHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmisoHUD(); \
	friend struct Z_Construct_UClass_AmisoHUD_Statics; \
public: \
	DECLARE_CLASS(AmisoHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/miso"), NO_API) \
	DECLARE_SERIALIZER(AmisoHUD)


#define miso_Source_miso_misoHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAmisoHUD(); \
	friend struct Z_Construct_UClass_AmisoHUD_Statics; \
public: \
	DECLARE_CLASS(AmisoHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/miso"), NO_API) \
	DECLARE_SERIALIZER(AmisoHUD)


#define miso_Source_miso_misoHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmisoHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmisoHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmisoHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmisoHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmisoHUD(AmisoHUD&&); \
	NO_API AmisoHUD(const AmisoHUD&); \
public:


#define miso_Source_miso_misoHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmisoHUD(AmisoHUD&&); \
	NO_API AmisoHUD(const AmisoHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmisoHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmisoHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmisoHUD)


#define miso_Source_miso_misoHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define miso_Source_miso_misoHUD_h_9_PROLOG
#define miso_Source_miso_misoHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	miso_Source_miso_misoHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	miso_Source_miso_misoHUD_h_12_RPC_WRAPPERS \
	miso_Source_miso_misoHUD_h_12_INCLASS \
	miso_Source_miso_misoHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define miso_Source_miso_misoHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	miso_Source_miso_misoHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	miso_Source_miso_misoHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	miso_Source_miso_misoHUD_h_12_INCLASS_NO_PURE_DECLS \
	miso_Source_miso_misoHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MISO_API UClass* StaticClass<class AmisoHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID miso_Source_miso_misoHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
