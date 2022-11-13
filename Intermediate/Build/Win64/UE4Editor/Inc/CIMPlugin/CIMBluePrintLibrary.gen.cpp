// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CIMPlugin/Classes/CIMBluePrintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCIMBluePrintLibrary() {}
// Cross Module References
	CIMPLUGIN_API UClass* Z_Construct_UClass_UCIMBluePrintLibrary_NoRegister();
	CIMPLUGIN_API UClass* Z_Construct_UClass_UCIMBluePrintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CIMPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCIMBluePrintLibrary::execCustomSetAxisValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AxisID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCIMBluePrintLibrary::CustomSetAxisValue(Z_Param_AxisID,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCIMBluePrintLibrary::execCustomReleaseButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ButtonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCIMBluePrintLibrary::CustomReleaseButton(Z_Param_ButtonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCIMBluePrintLibrary::execCustomPressButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ButtonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCIMBluePrintLibrary::CustomPressButton(Z_Param_ButtonID);
		P_NATIVE_END;
	}
	void UCIMBluePrintLibrary::StaticRegisterNativesUCIMBluePrintLibrary()
	{
		UClass* Class = UCIMBluePrintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomPressButton", &UCIMBluePrintLibrary::execCustomPressButton },
			{ "CustomReleaseButton", &UCIMBluePrintLibrary::execCustomReleaseButton },
			{ "CustomSetAxisValue", &UCIMBluePrintLibrary::execCustomSetAxisValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton_Statics
	{
		struct CIMBluePrintLibrary_eventCustomPressButton_Parms
		{
			int32 ButtonID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ButtonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton_Statics::NewProp_ButtonID = { "ButtonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CIMBluePrintLibrary_eventCustomPressButton_Parms, ButtonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton_Statics::NewProp_ButtonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Input Mapping (cim)" },
		{ "Comment", "/**\n\x09 * Sends press event to the specified custom button\n\x09 *\n\x09 * @param ButtonID (in) the button you wish to execute the event. Valid range is 1-12.\n\x09 */" },
		{ "CPP_Default_ButtonID", "1" },
		{ "ModuleRelativePath", "Classes/CIMBluePrintLibrary.h" },
		{ "ToolTip", "Sends press event to the specified custom button\n\n@param ButtonID (in) the button you wish to execute the event. Valid range is 1-12." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCIMBluePrintLibrary, nullptr, "CustomPressButton", nullptr, nullptr, sizeof(CIMBluePrintLibrary_eventCustomPressButton_Parms), Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton_Statics
	{
		struct CIMBluePrintLibrary_eventCustomReleaseButton_Parms
		{
			int32 ButtonID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ButtonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton_Statics::NewProp_ButtonID = { "ButtonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CIMBluePrintLibrary_eventCustomReleaseButton_Parms, ButtonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton_Statics::NewProp_ButtonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Input Mapping (cim)" },
		{ "Comment", "/**\n\x09 * Sends release event to the specified custom button\n\x09 *\n\x09 * @param ButtonID (in) the button you wish to execute the event. Valid range is 1-12.\n\x09 */" },
		{ "CPP_Default_ButtonID", "1" },
		{ "ModuleRelativePath", "Classes/CIMBluePrintLibrary.h" },
		{ "ToolTip", "Sends release event to the specified custom button\n\n@param ButtonID (in) the button you wish to execute the event. Valid range is 1-12." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCIMBluePrintLibrary, nullptr, "CustomReleaseButton", nullptr, nullptr, sizeof(CIMBluePrintLibrary_eventCustomReleaseButton_Parms), Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics
	{
		struct CIMBluePrintLibrary_eventCustomSetAxisValue_Parms
		{
			int32 AxisID;
			float Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AxisID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::NewProp_AxisID = { "AxisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CIMBluePrintLibrary_eventCustomSetAxisValue_Parms, AxisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CIMBluePrintLibrary_eventCustomSetAxisValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::NewProp_AxisID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Input Mapping (cim)" },
		{ "Comment", "/**\n\x09 * Updates the specified custom axis with the new float value.\n\x09 *\n\x09 * @param AxisID (in) Axis ID for event. Valid range is 1-12. ID's 1-6 relates to Custom Axis 1-6, ID's 7-9 to Custom Axis X-Z, and ID's 10-12 to Custom Axis Pitch,Yaw, and Roll.\n\x09 * @param Value (in) New value\n\x09 */" },
		{ "CPP_Default_AxisID", "1" },
		{ "CPP_Default_Value", "0.000000" },
		{ "ModuleRelativePath", "Classes/CIMBluePrintLibrary.h" },
		{ "ToolTip", "Updates the specified custom axis with the new float value.\n\n@param AxisID (in) Axis ID for event. Valid range is 1-12. ID's 1-6 relates to Custom Axis 1-6, ID's 7-9 to Custom Axis X-Z, and ID's 10-12 to Custom Axis Pitch,Yaw, and Roll.\n@param Value (in) New value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCIMBluePrintLibrary, nullptr, "CustomSetAxisValue", nullptr, nullptr, sizeof(CIMBluePrintLibrary_eventCustomSetAxisValue_Parms), Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCIMBluePrintLibrary_NoRegister()
	{
		return UCIMBluePrintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCIMBluePrintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCIMBluePrintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CIMPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCIMBluePrintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCIMBluePrintLibrary_CustomPressButton, "CustomPressButton" }, // 501026508
		{ &Z_Construct_UFunction_UCIMBluePrintLibrary_CustomReleaseButton, "CustomReleaseButton" }, // 1247001570
		{ &Z_Construct_UFunction_UCIMBluePrintLibrary_CustomSetAxisValue, "CustomSetAxisValue" }, // 728396178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCIMBluePrintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CIMBluePrintLibrary.h" },
		{ "ModuleRelativePath", "Classes/CIMBluePrintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCIMBluePrintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCIMBluePrintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCIMBluePrintLibrary_Statics::ClassParams = {
		&UCIMBluePrintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCIMBluePrintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCIMBluePrintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCIMBluePrintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCIMBluePrintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCIMBluePrintLibrary, 701559469);
	template<> CIMPLUGIN_API UClass* StaticClass<UCIMBluePrintLibrary>()
	{
		return UCIMBluePrintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCIMBluePrintLibrary(Z_Construct_UClass_UCIMBluePrintLibrary, &UCIMBluePrintLibrary::StaticClass, TEXT("/Script/CIMPlugin"), TEXT("UCIMBluePrintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCIMBluePrintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
