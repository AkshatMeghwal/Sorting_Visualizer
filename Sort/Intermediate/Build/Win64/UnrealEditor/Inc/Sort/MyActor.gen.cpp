// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sort/Public/MyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}
// Cross Module References
	SORT_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
	SORT_API UClass* Z_Construct_UClass_AMyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sort();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SORT_API UClass* Z_Construct_UClass_ANums_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AMyActor::execinsertion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ele);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->insertion(Z_Param_ele);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActor::execspawningproc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->spawningproc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActor::execspawn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_no);
		P_GET_STRUCT(FVector,Z_Param_plc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ANums**)Z_Param__Result=P_THIS->spawn(Z_Param_no,Z_Param_plc);
		P_NATIVE_END;
	}
	void AMyActor::StaticRegisterNativesAMyActor()
	{
		UClass* Class = AMyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "insertion", &AMyActor::execinsertion },
			{ "spawn", &AMyActor::execspawn },
			{ "spawningproc", &AMyActor::execspawningproc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActor_insertion_Statics
	{
		struct MyActor_eventinsertion_Parms
		{
			int32 ele;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ele;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor_insertion_Statics::NewProp_ele = { "ele", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActor_eventinsertion_Parms, ele), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_insertion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_insertion_Statics::NewProp_ele,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_insertion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_insertion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "insertion", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyActor_insertion_Statics::MyActor_eventinsertion_Parms), Z_Construct_UFunction_AMyActor_insertion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_insertion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor_insertion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_insertion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor_insertion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_insertion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_spawn_Statics
	{
		struct MyActor_eventspawn_Parms
		{
			int32 no;
			FVector plc;
			ANums* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_no;
		static const UECodeGen_Private::FStructPropertyParams NewProp_plc;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor_spawn_Statics::NewProp_no = { "no", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActor_eventspawn_Parms, no), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_spawn_Statics::NewProp_plc = { "plc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActor_eventspawn_Parms, plc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyActor_spawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActor_eventspawn_Parms, ReturnValue), Z_Construct_UClass_ANums_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_spawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_spawn_Statics::NewProp_no,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_spawn_Statics::NewProp_plc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_spawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "spawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyActor_spawn_Statics::MyActor_eventspawn_Parms), Z_Construct_UFunction_AMyActor_spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_spawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor_spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor_spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_spawningproc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_spawningproc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_spawningproc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "spawningproc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor_spawningproc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_spawningproc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor_spawningproc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_spawningproc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor);
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sttime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_sttime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_margin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_margin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxi_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxi;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_flag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_flag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_arr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_arr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arr;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_obj_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_obj_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_obj;
		static const UECodeGen_Private::FIntPropertyParams NewProp_swapl_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_swapl_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_swapl;
		static const UECodeGen_Private::FIntPropertyParams NewProp_swapr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_swapr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_swapr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sort,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_insertion, "insertion" }, // 2454584426
		{ &Z_Construct_UFunction_AMyActor_spawn, "spawn" }, // 3937811327
		{ &Z_Construct_UFunction_AMyActor_spawningproc, "spawningproc" }, // 347483391
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_time_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, time), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_sttime_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_sttime = { "sttime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, sttime), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_sttime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_sttime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_ToSpawn_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_ToSpawn = { "ToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ToSpawn, AMyActor), STRUCT_OFFSET(AMyActor, ToSpawn), Z_Construct_UClass_ANums_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_ToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_ToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_margin_MetaData[] = {
		{ "Category", "Margins" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_margin = { "margin", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, margin), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_margin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_maxi_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_maxi = { "maxi", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, maxi), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_maxi_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_maxi_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_Amp_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_Amp = { "Amp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, Amp), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_Amp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_Amp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_TimeConstant_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_TimeConstant = { "TimeConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, TimeConstant), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_TimeConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_TimeConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_sp_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_sp = { "sp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, sp), Z_Construct_UClass_ANums_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_sp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_sp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_flag_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, flag), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_flag_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_arr_Inner = { "arr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_arr_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_arr = { "arr", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, arr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_arr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_arr_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_obj_Inner = { "obj", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANums_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_obj_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, obj), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_obj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_obj_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_swapl_Inner = { "swapl", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_swapl_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_swapl = { "swapl", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, swapl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_swapl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_swapl_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_swapr_Inner = { "swapr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_swapr_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_swapr = { "swapr", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, swapr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_swapr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_swapr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_sttime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_ToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_margin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_maxi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_Amp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_TimeConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_sp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_flag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_arr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_arr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_obj_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_swapl_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_swapl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_swapr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_swapr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
		&AMyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor()
	{
		if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
	}
	template<> SORT_API UClass* StaticClass<AMyActor>()
	{
		return AMyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
	struct Z_CompiledInDeferFile_FID_Sort_Source_Sort_Public_MyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sort_Source_Sort_Public_MyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 2118806406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sort_Source_Sort_Public_MyActor_h_1742940417(TEXT("/Script/Sort"),
		Z_CompiledInDeferFile_FID_Sort_Source_Sort_Public_MyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sort_Source_Sort_Public_MyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
