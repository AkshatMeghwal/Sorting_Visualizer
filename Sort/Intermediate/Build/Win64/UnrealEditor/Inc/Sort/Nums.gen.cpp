// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sort/Public/Items/Nums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNums() {}
// Cross Module References
	SORT_API UClass* Z_Construct_UClass_ANums_NoRegister();
	SORT_API UClass* Z_Construct_UClass_ANums();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sort();
// End Cross Module References
	void ANums::StaticRegisterNativesANums()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANums);
	UClass* Z_Construct_UClass_ANums_NoRegister()
	{
		return ANums::StaticClass();
	}
	struct Z_Construct_UClass_ANums_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANums_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sort,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANums_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Nums.h" },
		{ "ModuleRelativePath", "Public/Items/Nums.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANums_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANums>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANums_Statics::ClassParams = {
		&ANums::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANums_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANums_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANums()
	{
		if (!Z_Registration_Info_UClass_ANums.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANums.OuterSingleton, Z_Construct_UClass_ANums_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANums.OuterSingleton;
	}
	template<> SORT_API UClass* StaticClass<ANums>()
	{
		return ANums::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANums);
	struct Z_CompiledInDeferFile_FID_Sort_Source_Sort_Public_Items_Nums_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sort_Source_Sort_Public_Items_Nums_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANums, ANums::StaticClass, TEXT("ANums"), &Z_Registration_Info_UClass_ANums, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANums), 3849123502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sort_Source_Sort_Public_Items_Nums_h_3989121365(TEXT("/Script/Sort"),
		Z_CompiledInDeferFile_FID_Sort_Source_Sort_Public_Items_Nums_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sort_Source_Sort_Public_Items_Nums_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
