// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStrixRoomMember;
struct FStrixRoom;
#ifdef STRIXSDK_StrixNotificationListener_generated_h
#error "StrixNotificationListener.generated.h already included, missing '#pragma once' in StrixNotificationListener.h"
#endif
#define STRIXSDK_StrixNotificationListener_generated_h

#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_54_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomOwnerChangedNotificationDelegate_Parms \
{ \
	int32 channelId; \
	FStrixRoomMember newOwner; \
	FStrixRoomMember previousOwner; \
}; \
static inline void FStrixNotifierRoomOwnerChangedNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomOwnerChangedNotificationDelegate, int32 channelId, FStrixRoomMember const& newOwner, FStrixRoomMember const& previousOwner) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomOwnerChangedNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.newOwner=newOwner; \
	Parms.previousOwner=previousOwner; \
	StrixNotifierRoomOwnerChangedNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_53_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomContextClosedDelegate_Parms \
{ \
	int32 channelId; \
}; \
static inline void FStrixNotifierRoomContextClosedDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomContextClosedDelegate, int32 channelId) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomContextClosedDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	StrixNotifierRoomContextClosedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_52_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomDeleteNotificationDelegate_Parms \
{ \
	int32 channelId; \
}; \
static inline void FStrixNotifierRoomDeleteNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomDeleteNotificationDelegate, int32 channelId) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomDeleteNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	StrixNotifierRoomDeleteNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_51_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomKickNotificationDelegate_Parms \
{ \
	int32 channelId; \
}; \
static inline void FStrixNotifierRoomKickNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomKickNotificationDelegate, int32 channelId) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomKickNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	StrixNotifierRoomKickNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_50_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomSetMemberNotificationDelegate_Parms \
{ \
	int32 channelId; \
	FStrixRoomMember roomMember; \
}; \
static inline void FStrixNotifierRoomSetMemberNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomSetMemberNotificationDelegate, int32 channelId, FStrixRoomMember const& roomMember) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomSetMemberNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.roomMember=roomMember; \
	StrixNotifierRoomSetMemberNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_49_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomSetNotificationDelegate_Parms \
{ \
	int32 channelId; \
	FStrixRoom roomMember; \
}; \
static inline void FStrixNotifierRoomSetNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomSetNotificationDelegate, int32 channelId, FStrixRoom const& roomMember) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomSetNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.roomMember=roomMember; \
	StrixNotifierRoomSetNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_48_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomLeaveNotificationDelegate_Parms \
{ \
	int32 channelId; \
	FStrixRoomMember roomMember; \
}; \
static inline void FStrixNotifierRoomLeaveNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomLeaveNotificationDelegate, int32 channelId, FStrixRoomMember const& roomMember) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomLeaveNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.roomMember=roomMember; \
	StrixNotifierRoomLeaveNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_47_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomJoinNotificationDelegate_Parms \
{ \
	int32 channelId; \
	FStrixRoomMember roomMember; \
}; \
static inline void FStrixNotifierRoomJoinNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomJoinNotificationDelegate, int32 channelId, FStrixRoomMember const& roomMember) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomJoinNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.roomMember=roomMember; \
	StrixNotifierRoomJoinNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_46_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomContextOpenDelegate_Parms \
{ \
	int32 channelId; \
}; \
static inline void FStrixNotifierRoomContextOpenDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomContextOpenDelegate, int32 channelId) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomContextOpenDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	StrixNotifierRoomContextOpenDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopNotificationListener) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopNotificationListener(); \
		P_NATIVE_END; \
	}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopNotificationListener) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopNotificationListener(); \
		P_NATIVE_END; \
	}


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStrixNotificationListener(); \
	friend struct Z_Construct_UClass_UStrixNotificationListener_Statics; \
public: \
	DECLARE_CLASS(UStrixNotificationListener, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixNotificationListener)


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUStrixNotificationListener(); \
	friend struct Z_Construct_UClass_UStrixNotificationListener_Statics; \
public: \
	DECLARE_CLASS(UStrixNotificationListener, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixNotificationListener)


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixNotificationListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixNotificationListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixNotificationListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixNotificationListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixNotificationListener(UStrixNotificationListener&&); \
	NO_API UStrixNotificationListener(const UStrixNotificationListener&); \
public:


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixNotificationListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixNotificationListener(UStrixNotificationListener&&); \
	NO_API UStrixNotificationListener(const UStrixNotificationListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixNotificationListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixNotificationListener); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixNotificationListener)


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_PRIVATE_PROPERTY_OFFSET
#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_62_PROLOG
#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_PRIVATE_PROPERTY_OFFSET \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_RPC_WRAPPERS \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_INCLASS \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_PRIVATE_PROPERTY_OFFSET \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_INCLASS_NO_PURE_DECLS \
	Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRIXSDK_API UClass* StaticClass<class UStrixNotificationListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sample_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
