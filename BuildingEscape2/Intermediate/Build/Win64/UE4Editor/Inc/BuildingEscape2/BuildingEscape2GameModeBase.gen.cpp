// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BuildingEscape2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingEscape2GameModeBase() {}
// Cross Module References
	BUILDINGESCAPE2_API UClass* Z_Construct_UClass_ABuildingEscape2GameModeBase_NoRegister();
	BUILDINGESCAPE2_API UClass* Z_Construct_UClass_ABuildingEscape2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape2();
// End Cross Module References
	void ABuildingEscape2GameModeBase::StaticRegisterNativesABuildingEscape2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABuildingEscape2GameModeBase_NoRegister()
	{
		return ABuildingEscape2GameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABuildingEscape2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "BuildingEscape2GameModeBase.h" },
				{ "ModuleRelativePath", "BuildingEscape2GameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABuildingEscape2GameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABuildingEscape2GameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingEscape2GameModeBase, 1853769079);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingEscape2GameModeBase(Z_Construct_UClass_ABuildingEscape2GameModeBase, &ABuildingEscape2GameModeBase::StaticClass, TEXT("/Script/BuildingEscape2"), TEXT("ABuildingEscape2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingEscape2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
