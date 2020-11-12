// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "miso/misoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemisoGameMode() {}
// Cross Module References
	MISO_API UClass* Z_Construct_UClass_AmisoGameMode_NoRegister();
	MISO_API UClass* Z_Construct_UClass_AmisoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_miso();
// End Cross Module References
	void AmisoGameMode::StaticRegisterNativesAmisoGameMode()
	{
	}
	UClass* Z_Construct_UClass_AmisoGameMode_NoRegister()
	{
		return AmisoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AmisoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmisoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_miso,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmisoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "misoGameMode.h" },
		{ "ModuleRelativePath", "misoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmisoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmisoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AmisoGameMode_Statics::ClassParams = {
		&AmisoGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AmisoGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AmisoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AmisoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AmisoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AmisoGameMode, 736526727);
	template<> MISO_API UClass* StaticClass<AmisoGameMode>()
	{
		return AmisoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AmisoGameMode(Z_Construct_UClass_AmisoGameMode, &AmisoGameMode::StaticClass, TEXT("/Script/miso"), TEXT("AmisoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmisoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
