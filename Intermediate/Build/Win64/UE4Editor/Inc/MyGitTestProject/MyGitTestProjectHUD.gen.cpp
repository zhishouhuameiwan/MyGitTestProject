// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGitTestProject/MyGitTestProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGitTestProjectHUD() {}
// Cross Module References
	MYGITTESTPROJECT_API UClass* Z_Construct_UClass_AMyGitTestProjectHUD_NoRegister();
	MYGITTESTPROJECT_API UClass* Z_Construct_UClass_AMyGitTestProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyGitTestProject();
// End Cross Module References
	void AMyGitTestProjectHUD::StaticRegisterNativesAMyGitTestProjectHUD()
	{
	}
	UClass* Z_Construct_UClass_AMyGitTestProjectHUD_NoRegister()
	{
		return AMyGitTestProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyGitTestProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGitTestProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGitTestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGitTestProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyGitTestProjectHUD.h" },
		{ "ModuleRelativePath", "MyGitTestProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGitTestProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGitTestProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGitTestProjectHUD_Statics::ClassParams = {
		&AMyGitTestProjectHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyGitTestProjectHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyGitTestProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGitTestProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGitTestProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGitTestProjectHUD, 3696333773);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGitTestProjectHUD(Z_Construct_UClass_AMyGitTestProjectHUD, &AMyGitTestProjectHUD::StaticClass, TEXT("/Script/MyGitTestProject"), TEXT("AMyGitTestProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGitTestProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
