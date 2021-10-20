// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/VR_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVR_Player() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_AVR_Player_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AVR_Player();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_UMoveActorComponent_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_UHandActorComponent_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_UGrabActorComponent_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_ASJ_UIPannel_NoRegister();
// End Cross Module References
	void AVR_Player::StaticRegisterNativesAVR_Player()
	{
	}
	UClass* Z_Construct_UClass_AVR_Player_NoRegister()
	{
		return AVR_Player::StaticClass();
	}
	struct Z_Construct_UClass_AVR_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capsuleComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_capsuleComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_headComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_headComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftHandLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftHandLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightHandLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightHandLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_moveComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_handComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grabComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uiPannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_uiPannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isClose_MetaData[];
#endif
		static void NewProp_isClose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isClose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVR_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VR_Player.h" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// Capsule ??\xc3\xbc\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "Capsule ??\xc3\xbc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp = { "capsuleComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, capsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// Camera ??\xc4\xa1\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "Camera ??\xc4\xa1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot = { "cameraRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, cameraRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// Main Camera\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "Main Camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam = { "playerCam", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, playerCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_headComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_headComp = { "headComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, headComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_headComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_headComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// LeftController\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "LeftController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController = { "leftController", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, leftController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// RightController\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "RightController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController = { "rightController", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, rightController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// ?\xde\xbc?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "?\xde\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, leftHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHandLoc_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// ?\xde\xbc? ?\xd7\xb7? ????\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "?\xde\xbc? ?\xd7\xb7? ????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHandLoc = { "leftHandLoc", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, leftHandLoc), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHandLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHandLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// ??????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, rightHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHandLoc_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// ?????? ?\xd7\xb7? ????\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "?????? ?\xd7\xb7? ????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHandLoc = { "rightHandLoc", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, rightHandLoc), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHandLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHandLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_leftLog_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// ?\xde\xbc? ?\xd7\xb7? TextLog\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "?\xde\xbc? ?\xd7\xb7? TextLog" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_leftLog = { "leftLog", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, leftLog), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_rightLog_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// ?????? ?\xd7\xb7? TextLog\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "?????? ?\xd7\xb7? TextLog" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_rightLog = { "rightLog", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, rightLog), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// ???? ??????\xc6\xae?? ?\xdf\xb0??\xcf\xb1?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "???? ??????\xc6\xae?? ?\xdf\xb0??\xcf\xb1?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp = { "moveComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, moveComp), Z_Construct_UClass_UMoveActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// ?? ?\xd6\xb4\xcf\xb8??\xcc\xbc? ?\xdf\xb0?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "?? ?\xd6\xb4\xcf\xb8??\xcc\xbc? ?\xdf\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp = { "handComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, handComp), Z_Construct_UClass_UHandActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp = { "grabComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, grabComp), Z_Construct_UClass_UGrabActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_uiPannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_uiPannel = { "uiPannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, uiPannel), Z_Construct_UClass_ASJ_UIPannel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_uiPannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_uiPannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_isClose_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	void Z_Construct_UClass_AVR_Player_Statics::NewProp_isClose_SetBit(void* Obj)
	{
		((AVR_Player*)Obj)->isClose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_isClose = { "isClose", nullptr, (EPropertyFlags)0x0010000000030001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVR_Player), &Z_Construct_UClass_AVR_Player_Statics::NewProp_isClose_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_isClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_isClose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVR_Player_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_headComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHandLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHandLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_leftLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_rightLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_uiPannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_isClose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVR_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVR_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVR_Player_Statics::ClassParams = {
		&AVR_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVR_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVR_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVR_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVR_Player, 3951487873);
	template<> WOOGA_API UClass* StaticClass<AVR_Player>()
	{
		return AVR_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVR_Player(Z_Construct_UClass_AVR_Player, &AVR_Player::StaticClass, TEXT("/Script/Wooga"), TEXT("AVR_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVR_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
