// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/OnlineSubsystemPicoNames.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSubsystemPicoNames() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardFilterType();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardStartAt();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EChallengeViewerFilter();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EChallengeVisibility();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EChallengeCreationType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EShareAppTyp();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EShareMediaType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EAssetFileDownloadCompleteStatus();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EAchievementWritePolicy();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EAchievementType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ESportTarget();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardUpdateMethodPicoType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EPicoOnlineKeyValuePairDataType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EOnlineSessionStatePicoType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EOnJoinSessionCompleteResultPicoType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EOnlineAsyncTaskStatePicoType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinabilit();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELaunchResult();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELaunchType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EUserGender();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EUserPresenceStatus();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoSupplementaryMetric();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineStatsRow();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoColumnMetaData();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FVariantDataPico();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineSessionSearch();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineSession();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoNamedOnlineSession();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineSessionSettings();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoApplicationInvite();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoUserInfo();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoDestination();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchDetails();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_UserArray_NoRegister();
// End Cross Module References
	static UEnum* ELeaderboardFilterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardFilterType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("ELeaderboardFilterType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<ELeaderboardFilterType>()
	{
		return ELeaderboardFilterType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeaderboardFilterType(ELeaderboardFilterType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("ELeaderboardFilterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardFilterType_Hash() { return 131235360U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardFilterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeaderboardFilterType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardFilterType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeaderboardFilterType::None", (int64)ELeaderboardFilterType::None },
				{ "ELeaderboardFilterType::Friends", (int64)ELeaderboardFilterType::Friends },
				{ "ELeaderboardFilterType::Unknown", (int64)ELeaderboardFilterType::Unknown },
				{ "ELeaderboardFilterType::UserIds", (int64)ELeaderboardFilterType::UserIds },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>The type of filter to use when using leaderboards or challenges.</summary>\n" },
				{ "Friends.Comment", "/**< Returns all entries */" },
				{ "Friends.Name", "ELeaderboardFilterType::Friends" },
				{ "Friends.ToolTip", "< Returns all entries" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "None.Name", "ELeaderboardFilterType::None" },
				{ "ToolTip", "<summary>The type of filter to use when using leaderboards or challenges.</summary>" },
				{ "Unknown.Comment", "/**< Returns your and your friends' entries */" },
				{ "Unknown.Name", "ELeaderboardFilterType::Unknown" },
				{ "Unknown.ToolTip", "< Returns your and your friends' entries" },
				{ "UserIds.Comment", "/**< Returns no entry */" },
				{ "UserIds.Name", "ELeaderboardFilterType::UserIds" },
				{ "UserIds.ToolTip", "< Returns no entry" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"ELeaderboardFilterType",
				"ELeaderboardFilterType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELeaderboardStartAt_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardStartAt, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("ELeaderboardStartAt"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<ELeaderboardStartAt>()
	{
		return ELeaderboardStartAt_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeaderboardStartAt(ELeaderboardStartAt_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("ELeaderboardStartAt"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardStartAt_Hash() { return 2922253292U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardStartAt()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeaderboardStartAt"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardStartAt_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeaderboardStartAt::Top", (int64)ELeaderboardStartAt::Top },
				{ "ELeaderboardStartAt::CenteredOnViewer", (int64)ELeaderboardStartAt::CenteredOnViewer },
				{ "ELeaderboardStartAt::CenteredOnViewerOrTop", (int64)ELeaderboardStartAt::CenteredOnViewerOrTop },
				{ "ELeaderboardStartAt::Unknown", (int64)ELeaderboardStartAt::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CenteredOnViewer.Comment", "/**< Return entries from top 1 */" },
				{ "CenteredOnViewer.Name", "ELeaderboardStartAt::CenteredOnViewer" },
				{ "CenteredOnViewer.ToolTip", "< Return entries from top 1" },
				{ "CenteredOnViewerOrTop.Comment", "/**< Place the current logged-in user's entry in the middle of the list on the first page.\n    For example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5, the ranks displayed\n    on the first page will be top 3, 4, 5, 6, and 7. Top 1 and 2 will not be displayed, and top 8, 9, and 10 will be\n    displayed on the second page */" },
				{ "CenteredOnViewerOrTop.Name", "ELeaderboardStartAt::CenteredOnViewerOrTop" },
				{ "CenteredOnViewerOrTop.ToolTip", "< Place the current logged-in user's entry in the middle of the list on the first page.\n    For example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5, the ranks displayed\n    on the first page will be top 3, 4, 5, 6, and 7. Top 1 and 2 will not be displayed, and top 8, 9, and 10 will be\n    displayed on the second page" },
				{ "Comment", "/// <summary>The type of sorting to use when getting leaderboard or challenge entries. </summary>\n" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "ToolTip", "<summary>The type of sorting to use when getting leaderboard or challenge entries. </summary>" },
				{ "Top.Name", "ELeaderboardStartAt::Top" },
				{ "Unknown.Comment", "/**< Place the current logged-in user's entry on the top of the list on the first page.\n    For example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5,\n    the ranks displayed on the first page will be top 5, 6, 7, 8, and 9. Top 1, 2, 3, and 4 will not be displayed,\n    and top 10 will be displayed on the second page */" },
				{ "Unknown.Name", "ELeaderboardStartAt::Unknown" },
				{ "Unknown.ToolTip", "< Place the current logged-in user's entry on the top of the list on the first page.\n    For example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5,\n    the ranks displayed on the first page will be top 5, 6, 7, 8, and 9. Top 1, 2, 3, and 4 will not be displayed,\n    and top 10 will be displayed on the second page" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"ELeaderboardStartAt",
				"ELeaderboardStartAt",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EChallengeViewerFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EChallengeViewerFilter, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EChallengeViewerFilter"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EChallengeViewerFilter>()
	{
		return EChallengeViewerFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChallengeViewerFilter(EChallengeViewerFilter_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EChallengeViewerFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EChallengeViewerFilter_Hash() { return 2558906541U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EChallengeViewerFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChallengeViewerFilter"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EChallengeViewerFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChallengeViewerFilter::Unknown", (int64)EChallengeViewerFilter::Unknown },
				{ "EChallengeViewerFilter::AllVisible", (int64)EChallengeViewerFilter::AllVisible },
				{ "EChallengeViewerFilter::Participating", (int64)EChallengeViewerFilter::Participating },
				{ "EChallengeViewerFilter::Invited", (int64)EChallengeViewerFilter::Invited },
				{ "EChallengeViewerFilter::ParticipatingOrInvited", (int64)EChallengeViewerFilter::ParticipatingOrInvited },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllVisible.Comment", "/**< Unknown */" },
				{ "AllVisible.Name", "EChallengeViewerFilter::AllVisible" },
				{ "AllVisible.ToolTip", "< Unknown" },
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>The challenge viewer filter.</summary>\n" },
				{ "Invited.Comment", "/**< Challenges that you are participating in  */" },
				{ "Invited.Name", "EChallengeViewerFilter::Invited" },
				{ "Invited.ToolTip", "< Challenges that you are participating in" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "Participating.Comment", "/**< Challenges that are visible to all users */" },
				{ "Participating.Name", "EChallengeViewerFilter::Participating" },
				{ "Participating.ToolTip", "< Challenges that are visible to all users" },
				{ "ParticipatingOrInvited.Comment", "/**< Challenge that you have been invited to */" },
				{ "ParticipatingOrInvited.Name", "EChallengeViewerFilter::ParticipatingOrInvited" },
				{ "ParticipatingOrInvited.ToolTip", "< Challenge that you have been invited to" },
				{ "ToolTip", "<summary>The challenge viewer filter.</summary>" },
				{ "Unknown.Name", "EChallengeViewerFilter::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EChallengeViewerFilter",
				"EChallengeViewerFilter",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EChallengeVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EChallengeVisibility, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EChallengeVisibility"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EChallengeVisibility>()
	{
		return EChallengeVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChallengeVisibility(EChallengeVisibility_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EChallengeVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EChallengeVisibility_Hash() { return 171282154U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EChallengeVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChallengeVisibility"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EChallengeVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChallengeVisibility::Unknown", (int64)EChallengeVisibility::Unknown },
				{ "EChallengeVisibility::InviteOnly", (int64)EChallengeVisibility::InviteOnly },
				{ "EChallengeVisibility::Public", (int64)EChallengeVisibility::Public },
				{ "EChallengeVisibility::Private", (int64)EChallengeVisibility::Private },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>The visibility type of the challenge.</summary>\n" },
				{ "InviteOnly.Comment", "/**< Unknown */" },
				{ "InviteOnly.Name", "EChallengeVisibility::InviteOnly" },
				{ "InviteOnly.ToolTip", "< Unknown" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "Private.Comment", "/**< Visible to all users */" },
				{ "Private.Name", "EChallengeVisibility::Private" },
				{ "Private.ToolTip", "< Visible to all users" },
				{ "Public.Comment", "/**< Visible to invited users only */" },
				{ "Public.Name", "EChallengeVisibility::Public" },
				{ "Public.ToolTip", "< Visible to invited users only" },
				{ "ToolTip", "<summary>The visibility type of the challenge.</summary>" },
				{ "Unknown.Name", "EChallengeVisibility::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EChallengeVisibility",
				"EChallengeVisibility",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EChallengeCreationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EChallengeCreationType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EChallengeCreationType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EChallengeCreationType>()
	{
		return EChallengeCreationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChallengeCreationType(EChallengeCreationType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EChallengeCreationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EChallengeCreationType_Hash() { return 2300994736U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EChallengeCreationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChallengeCreationType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EChallengeCreationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChallengeCreationType::Unknown", (int64)EChallengeCreationType::Unknown },
				{ "EChallengeCreationType::UserCreated", (int64)EChallengeCreationType::UserCreated },
				{ "EChallengeCreationType::DeveloperCreated", (int64)EChallengeCreationType::DeveloperCreated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>The creator of the challenge.</summary>\n" },
				{ "DeveloperCreated.Comment", "/**< User */" },
				{ "DeveloperCreated.Name", "EChallengeCreationType::DeveloperCreated" },
				{ "DeveloperCreated.ToolTip", "< User" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "ToolTip", "<summary>The creator of the challenge.</summary>" },
				{ "Unknown.Name", "EChallengeCreationType::Unknown" },
				{ "UserCreated.Comment", "/**< Unknown */" },
				{ "UserCreated.Name", "EChallengeCreationType::UserCreated" },
				{ "UserCreated.ToolTip", "< Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EChallengeCreationType",
				"EChallengeCreationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EShareAppTyp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EShareAppTyp, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EShareAppTyp"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EShareAppTyp>()
	{
		return EShareAppTyp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShareAppTyp(EShareAppTyp_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EShareAppTyp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EShareAppTyp_Hash() { return 3399747582U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EShareAppTyp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShareAppTyp"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EShareAppTyp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShareAppTyp::Douyin", (int64)EShareAppTyp::Douyin },
				{ "EShareAppTyp::None", (int64)EShareAppTyp::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>Share to app type.</summary>\n" },
				{ "Douyin.Name", "EShareAppTyp::Douyin" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "None.Comment", "/**< Douyin */" },
				{ "None.Name", "EShareAppTyp::None" },
				{ "None.ToolTip", "< Douyin" },
				{ "ToolTip", "<summary>Share to app type.</summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EShareAppTyp",
				"EShareAppTyp",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EShareMediaType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EShareMediaType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EShareMediaType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EShareMediaType>()
	{
		return EShareMediaType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShareMediaType(EShareMediaType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EShareMediaType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EShareMediaType_Hash() { return 675733294U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EShareMediaType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShareMediaType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EShareMediaType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShareMediaType::Video", (int64)EShareMediaType::Video },
				{ "EShareMediaType::Image", (int64)EShareMediaType::Image },
				{ "EShareMediaType::None", (int64)EShareMediaType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>Share media type.</summary>\n" },
				{ "Image.Comment", "/**< Video */" },
				{ "Image.Name", "EShareMediaType::Image" },
				{ "Image.ToolTip", "< Video" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "None.Comment", "/**< Image */" },
				{ "None.Name", "EShareMediaType::None" },
				{ "None.ToolTip", "< Image" },
				{ "ToolTip", "<summary>Share media type.</summary>" },
				{ "Video.Name", "EShareMediaType::Video" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EShareMediaType",
				"EShareMediaType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAssetFileDownloadCompleteStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EAssetFileDownloadCompleteStatus, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EAssetFileDownloadCompleteStatus"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EAssetFileDownloadCompleteStatus>()
	{
		return EAssetFileDownloadCompleteStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAssetFileDownloadCompleteStatus(EAssetFileDownloadCompleteStatus_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EAssetFileDownloadCompleteStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EAssetFileDownloadCompleteStatus_Hash() { return 888060565U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EAssetFileDownloadCompleteStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAssetFileDownloadCompleteStatus"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EAssetFileDownloadCompleteStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAssetFileDownloadCompleteStatus::Downloading", (int64)EAssetFileDownloadCompleteStatus::Downloading },
				{ "EAssetFileDownloadCompleteStatus::Succeed", (int64)EAssetFileDownloadCompleteStatus::Succeed },
				{ "EAssetFileDownloadCompleteStatus::Failed", (int64)EAssetFileDownloadCompleteStatus::Failed },
				{ "EAssetFileDownloadCompleteStatus::Unkonw", (int64)EAssetFileDownloadCompleteStatus::Unkonw },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>The status of the file in the file download process.</summary>\n" },
				{ "Downloading.Name", "EAssetFileDownloadCompleteStatus::Downloading" },
				{ "Failed.Comment", "/**< The file has been downloaded successfully */" },
				{ "Failed.Name", "EAssetFileDownloadCompleteStatus::Failed" },
				{ "Failed.ToolTip", "< The file has been downloaded successfully" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "Succeed.Comment", "/**< File is downloading */" },
				{ "Succeed.Name", "EAssetFileDownloadCompleteStatus::Succeed" },
				{ "Succeed.ToolTip", "< File is downloading" },
				{ "ToolTip", "<summary>The status of the file in the file download process.</summary>" },
				{ "Unkonw.Comment", "/**< File download failed */" },
				{ "Unkonw.Name", "EAssetFileDownloadCompleteStatus::Unkonw" },
				{ "Unkonw.ToolTip", "< File download failed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EAssetFileDownloadCompleteStatus",
				"EAssetFileDownloadCompleteStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAchievementWritePolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EAchievementWritePolicy, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EAchievementWritePolicy"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EAchievementWritePolicy>()
	{
		return EAchievementWritePolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAchievementWritePolicy(EAchievementWritePolicy_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EAchievementWritePolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EAchievementWritePolicy_Hash() { return 2792363456U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EAchievementWritePolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAchievementWritePolicy"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EAchievementWritePolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAchievementWritePolicy::Unknown", (int64)EAchievementWritePolicy::Unknown },
				{ "EAchievementWritePolicy::Client", (int64)EAchievementWritePolicy::Client },
				{ "EAchievementWritePolicy::Server", (int64)EAchievementWritePolicy::Server },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Client.Comment", "/**< Unknown */" },
				{ "Client.Name", "EAchievementWritePolicy::Client" },
				{ "Client.ToolTip", "< Unknown" },
				{ "Comment", "/// <summary>The write policy of the achievement.</summary>\n" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "Server.Comment", "/**< Both the client and server can write data to the leaderboard */" },
				{ "Server.Name", "EAchievementWritePolicy::Server" },
				{ "Server.ToolTip", "< Both the client and server can write data to the leaderboard" },
				{ "ToolTip", "<summary>The write policy of the achievement.</summary>" },
				{ "Unknown.Name", "EAchievementWritePolicy::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EAchievementWritePolicy",
				"EAchievementWritePolicy",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAchievementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EAchievementType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EAchievementType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EAchievementType>()
	{
		return EAchievementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAchievementType(EAchievementType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EAchievementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EAchievementType_Hash() { return 1825163515U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EAchievementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAchievementType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EAchievementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAchievementType::Unknown", (int64)EAchievementType::Unknown },
				{ "EAchievementType::Simple", (int64)EAchievementType::Simple },
				{ "EAchievementType::Count", (int64)EAchievementType::Count },
				{ "EAchievementType::Bitfield", (int64)EAchievementType::Bitfield },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitfield.Name", "EAchievementType::Bitfield" },
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>The type of the achievement.</summary>\n" },
				{ "Count.Name", "EAchievementType::Count" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "Simple.Name", "EAchievementType::Simple" },
				{ "ToolTip", "<summary>The type of the achievement.</summary>" },
				{ "Unknown.Name", "EAchievementType::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EAchievementType",
				"EAchievementType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESportTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_ESportTarget, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("ESportTarget"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<ESportTarget>()
	{
		return ESportTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESportTarget(ESportTarget_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("ESportTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_ESportTarget_Hash() { return 306496106U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ESportTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESportTarget"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_ESportTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESportTarget::None", (int64)ESportTarget::None },
				{ "ESportTarget::LoseFat", (int64)ESportTarget::LoseFat },
				{ "ESportTarget::KeepFit", (int64)ESportTarget::KeepFit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>User's exercise goals.</summary>\n" },
				{ "KeepFit.Comment", "/**< Lose fat */" },
				{ "KeepFit.Name", "ESportTarget::KeepFit" },
				{ "KeepFit.ToolTip", "< Lose fat" },
				{ "LoseFat.Comment", "/**< None */" },
				{ "LoseFat.Name", "ESportTarget::LoseFat" },
				{ "LoseFat.ToolTip", "< None" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "None.Name", "ESportTarget::None" },
				{ "ToolTip", "<summary>User's exercise goals.</summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"ESportTarget",
				"ESportTarget",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELeaderboardUpdateMethodPicoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardUpdateMethodPicoType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("ELeaderboardUpdateMethodPicoType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<ELeaderboardUpdateMethodPicoType>()
	{
		return ELeaderboardUpdateMethodPicoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeaderboardUpdateMethodPicoType(ELeaderboardUpdateMethodPicoType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("ELeaderboardUpdateMethodPicoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardUpdateMethodPicoType_Hash() { return 3922661738U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardUpdateMethodPicoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeaderboardUpdateMethodPicoType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardUpdateMethodPicoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeaderboardUpdateMethodPicoType::KeepBest", (int64)ELeaderboardUpdateMethodPicoType::KeepBest },
				{ "ELeaderboardUpdateMethodPicoType::Force", (int64)ELeaderboardUpdateMethodPicoType::Force },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>The update method type used in `FOnlineLeaderboardPico`.</summary>\n" },
				{ "Force.Comment", "/**< Keep the best score */" },
				{ "Force.Name", "ELeaderboardUpdateMethodPicoType::Force" },
				{ "Force.ToolTip", "< Keep the best score" },
				{ "KeepBest.Name", "ELeaderboardUpdateMethodPicoType::KeepBest" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "ToolTip", "<summary>The update method type used in `FOnlineLeaderboardPico`.</summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"ELeaderboardUpdateMethodPicoType",
				"ELeaderboardUpdateMethodPicoType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPicoOnlineKeyValuePairDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EPicoOnlineKeyValuePairDataType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EPicoOnlineKeyValuePairDataType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EPicoOnlineKeyValuePairDataType>()
	{
		return EPicoOnlineKeyValuePairDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPicoOnlineKeyValuePairDataType(EPicoOnlineKeyValuePairDataType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EPicoOnlineKeyValuePairDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EPicoOnlineKeyValuePairDataType_Hash() { return 1281869113U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EPicoOnlineKeyValuePairDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPicoOnlineKeyValuePairDataType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EPicoOnlineKeyValuePairDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPicoOnlineKeyValuePairDataType::Empty", (int64)EPicoOnlineKeyValuePairDataType::Empty },
				{ "EPicoOnlineKeyValuePairDataType::Int32", (int64)EPicoOnlineKeyValuePairDataType::Int32 },
				{ "EPicoOnlineKeyValuePairDataType::UInt32", (int64)EPicoOnlineKeyValuePairDataType::UInt32 },
				{ "EPicoOnlineKeyValuePairDataType::Int64", (int64)EPicoOnlineKeyValuePairDataType::Int64 },
				{ "EPicoOnlineKeyValuePairDataType::UInt64", (int64)EPicoOnlineKeyValuePairDataType::UInt64 },
				{ "EPicoOnlineKeyValuePairDataType::Double", (int64)EPicoOnlineKeyValuePairDataType::Double },
				{ "EPicoOnlineKeyValuePairDataType::String", (int64)EPicoOnlineKeyValuePairDataType::String },
				{ "EPicoOnlineKeyValuePairDataType::Float", (int64)EPicoOnlineKeyValuePairDataType::Float },
				{ "EPicoOnlineKeyValuePairDataType::Blob", (int64)EPicoOnlineKeyValuePairDataType::Blob },
				{ "EPicoOnlineKeyValuePairDataType::Bool", (int64)EPicoOnlineKeyValuePairDataType::Bool },
				{ "EPicoOnlineKeyValuePairDataType::Json", (int64)EPicoOnlineKeyValuePairDataType::Json },
				{ "EPicoOnlineKeyValuePairDataType::MAX", (int64)EPicoOnlineKeyValuePairDataType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blob.Name", "EPicoOnlineKeyValuePairDataType::Blob" },
				{ "BlueprintType", "true" },
				{ "Bool.Name", "EPicoOnlineKeyValuePairDataType::Bool" },
				{ "Comment", "/// <summary>The score type used in `FOnlineLeaderboardPico`.</summary>\n" },
				{ "Double.Name", "EPicoOnlineKeyValuePairDataType::Double" },
				{ "Empty.Name", "EPicoOnlineKeyValuePairDataType::Empty" },
				{ "Float.Name", "EPicoOnlineKeyValuePairDataType::Float" },
				{ "Int32.Name", "EPicoOnlineKeyValuePairDataType::Int32" },
				{ "Int64.Name", "EPicoOnlineKeyValuePairDataType::Int64" },
				{ "Json.Name", "EPicoOnlineKeyValuePairDataType::Json" },
				{ "MAX.Name", "EPicoOnlineKeyValuePairDataType::MAX" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "String.Name", "EPicoOnlineKeyValuePairDataType::String" },
				{ "ToolTip", "<summary>The score type used in `FOnlineLeaderboardPico`.</summary>" },
				{ "UInt32.Name", "EPicoOnlineKeyValuePairDataType::UInt32" },
				{ "UInt64.Name", "EPicoOnlineKeyValuePairDataType::UInt64" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EPicoOnlineKeyValuePairDataType",
				"EPicoOnlineKeyValuePairDataType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOnlineSessionStatePicoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EOnlineSessionStatePicoType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EOnlineSessionStatePicoType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EOnlineSessionStatePicoType>()
	{
		return EOnlineSessionStatePicoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineSessionStatePicoType(EOnlineSessionStatePicoType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EOnlineSessionStatePicoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EOnlineSessionStatePicoType_Hash() { return 4174599453U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EOnlineSessionStatePicoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineSessionStatePicoType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EOnlineSessionStatePicoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlineSessionStatePicoType::NoSession", (int64)EOnlineSessionStatePicoType::NoSession },
				{ "EOnlineSessionStatePicoType::Creating", (int64)EOnlineSessionStatePicoType::Creating },
				{ "EOnlineSessionStatePicoType::Pending", (int64)EOnlineSessionStatePicoType::Pending },
				{ "EOnlineSessionStatePicoType::Starting", (int64)EOnlineSessionStatePicoType::Starting },
				{ "EOnlineSessionStatePicoType::InProgress", (int64)EOnlineSessionStatePicoType::InProgress },
				{ "EOnlineSessionStatePicoType::Ending", (int64)EOnlineSessionStatePicoType::Ending },
				{ "EOnlineSessionStatePicoType::Ended", (int64)EOnlineSessionStatePicoType::Ended },
				{ "EOnlineSessionStatePicoType::Destroying", (int64)EOnlineSessionStatePicoType::Destroying },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>The state of the session.</summary>\n" },
				{ "Creating.Comment", "/**< Not in the session */" },
				{ "Creating.Name", "EOnlineSessionStatePicoType::Creating" },
				{ "Creating.ToolTip", "< Not in the session" },
				{ "Destroying.Comment", "/**< After calling `EndSession`, the state of an in-progress session will turn to 'ended' */" },
				{ "Destroying.Name", "EOnlineSessionStatePicoType::Destroying" },
				{ "Destroying.ToolTip", "< After calling `EndSession`, the state of an in-progress session will turn to 'ended'" },
				{ "Ended.Comment", "/**< Not used */" },
				{ "Ended.Name", "EOnlineSessionStatePicoType::Ended" },
				{ "Ended.ToolTip", "< Not used" },
				{ "Ending.Comment", "/**< The session is in progress, which means the user has joined a session */" },
				{ "Ending.Name", "EOnlineSessionStatePicoType::Ending" },
				{ "Ending.ToolTip", "< The session is in progress, which means the user has joined a session" },
				{ "InProgress.Comment", "/**< Not used */" },
				{ "InProgress.Name", "EOnlineSessionStatePicoType::InProgress" },
				{ "InProgress.ToolTip", "< Not used" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "NoSession.Name", "EOnlineSessionStatePicoType::NoSession" },
				{ "Pending.Comment", "/**< The session is being created */" },
				{ "Pending.Name", "EOnlineSessionStatePicoType::Pending" },
				{ "Pending.ToolTip", "< The session is being created" },
				{ "Starting.Comment", "/**< The session has been created */" },
				{ "Starting.Name", "EOnlineSessionStatePicoType::Starting" },
				{ "Starting.ToolTip", "< The session has been created" },
				{ "ToolTip", "<summary>The state of the session.</summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EOnlineSessionStatePicoType",
				"EOnlineSessionStatePicoType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOnJoinSessionCompleteResultPicoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EOnJoinSessionCompleteResultPicoType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EOnJoinSessionCompleteResultPicoType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EOnJoinSessionCompleteResultPicoType>()
	{
		return EOnJoinSessionCompleteResultPicoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnJoinSessionCompleteResultPicoType(EOnJoinSessionCompleteResultPicoType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EOnJoinSessionCompleteResultPicoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EOnJoinSessionCompleteResultPicoType_Hash() { return 3958870169U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EOnJoinSessionCompleteResultPicoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnJoinSessionCompleteResultPicoType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EOnJoinSessionCompleteResultPicoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnJoinSessionCompleteResultPicoType::Success", (int64)EOnJoinSessionCompleteResultPicoType::Success },
				{ "EOnJoinSessionCompleteResultPicoType::SessionIsFull", (int64)EOnJoinSessionCompleteResultPicoType::SessionIsFull },
				{ "EOnJoinSessionCompleteResultPicoType::SessionDoesNotExist", (int64)EOnJoinSessionCompleteResultPicoType::SessionDoesNotExist },
				{ "EOnJoinSessionCompleteResultPicoType::CouldNotRetrieveAddress", (int64)EOnJoinSessionCompleteResultPicoType::CouldNotRetrieveAddress },
				{ "EOnJoinSessionCompleteResultPicoType::AlreadyInSession", (int64)EOnJoinSessionCompleteResultPicoType::AlreadyInSession },
				{ "EOnJoinSessionCompleteResultPicoType::UnknownError", (int64)EOnJoinSessionCompleteResultPicoType::UnknownError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlreadyInSession.Comment", "/**< Not used */" },
				{ "AlreadyInSession.Name", "EOnJoinSessionCompleteResultPicoType::AlreadyInSession" },
				{ "AlreadyInSession.ToolTip", "< Not used" },
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>Error message for joining a session.</summary>\n" },
				{ "CouldNotRetrieveAddress.Comment", "/**< The session does not exist. When use `JoinSession` with invalid `sessionInfo` */" },
				{ "CouldNotRetrieveAddress.Name", "EOnJoinSessionCompleteResultPicoType::CouldNotRetrieveAddress" },
				{ "CouldNotRetrieveAddress.ToolTip", "< The session does not exist. When use `JoinSession` with invalid `sessionInfo`" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "SessionDoesNotExist.Comment", "/**< The session is full. When `ppf_Room_GetJoinability` return `ppfRoom_JoinabilityIsFull` */" },
				{ "SessionDoesNotExist.Name", "EOnJoinSessionCompleteResultPicoType::SessionDoesNotExist" },
				{ "SessionDoesNotExist.ToolTip", "< The session is full. When `ppf_Room_GetJoinability` return `ppfRoom_JoinabilityIsFull`" },
				{ "SessionIsFull.Comment", "/**< Success */" },
				{ "SessionIsFull.Name", "EOnJoinSessionCompleteResultPicoType::SessionIsFull" },
				{ "SessionIsFull.ToolTip", "< Success" },
				{ "Success.Name", "EOnJoinSessionCompleteResultPicoType::Success" },
				{ "ToolTip", "<summary>Error message for joining a session.</summary>" },
				{ "UnknownError.Comment", "/**< Already in the session. When `ppf_Room_GetJoinability` return `ppfRoom_JoinabilityAreIn` */" },
				{ "UnknownError.Name", "EOnJoinSessionCompleteResultPicoType::UnknownError" },
				{ "UnknownError.ToolTip", "< Already in the session. When `ppf_Room_GetJoinability` return `ppfRoom_JoinabilityAreIn`" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EOnJoinSessionCompleteResultPicoType",
				"EOnJoinSessionCompleteResultPicoType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOnlineAsyncTaskStatePicoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EOnlineAsyncTaskStatePicoType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EOnlineAsyncTaskStatePicoType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EOnlineAsyncTaskStatePicoType>()
	{
		return EOnlineAsyncTaskStatePicoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineAsyncTaskStatePicoType(EOnlineAsyncTaskStatePicoType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EOnlineAsyncTaskStatePicoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EOnlineAsyncTaskStatePicoType_Hash() { return 2643851260U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EOnlineAsyncTaskStatePicoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineAsyncTaskStatePicoType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EOnlineAsyncTaskStatePicoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlineAsyncTaskStatePicoType::NotStarted", (int64)EOnlineAsyncTaskStatePicoType::NotStarted },
				{ "EOnlineAsyncTaskStatePicoType::InProgress", (int64)EOnlineAsyncTaskStatePicoType::InProgress },
				{ "EOnlineAsyncTaskStatePicoType::Done", (int64)EOnlineAsyncTaskStatePicoType::Done },
				{ "EOnlineAsyncTaskStatePicoType::Failed", (int64)EOnlineAsyncTaskStatePicoType::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Done.Name", "EOnlineAsyncTaskStatePicoType::Done" },
				{ "Failed.Name", "EOnlineAsyncTaskStatePicoType::Failed" },
				{ "InProgress.Name", "EOnlineAsyncTaskStatePicoType::InProgress" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "NotStarted.Name", "EOnlineAsyncTaskStatePicoType::NotStarted" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EOnlineAsyncTaskStatePicoType",
				"EOnlineAsyncTaskStatePicoType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERoomJoinabilit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinabilit, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("ERoomJoinabilit"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<ERoomJoinabilit>()
	{
		return ERoomJoinabilit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERoomJoinabilit(ERoomJoinabilit_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("ERoomJoinabilit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinabilit_Hash() { return 795366357U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinabilit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERoomJoinabilit"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinabilit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERoomJoinabilit::JoinabilityUnknown", (int64)ERoomJoinabilit::JoinabilityUnknown },
				{ "ERoomJoinabilit::JoinabilityAreIn", (int64)ERoomJoinabilit::JoinabilityAreIn },
				{ "ERoomJoinabilit::JoinabilityAreKicked", (int64)ERoomJoinabilit::JoinabilityAreKicked },
				{ "ERoomJoinabilit::JoinabilityCanJoin", (int64)ERoomJoinabilit::JoinabilityCanJoin },
				{ "ERoomJoinabilit::JoinabilityIsFull", (int64)ERoomJoinabilit::JoinabilityIsFull },
				{ "ERoomJoinabilit::JoinabilityNoViewer", (int64)ERoomJoinabilit::JoinabilityNoViewer },
				{ "ERoomJoinabilit::JoinabilityPolicyPrevents", (int64)ERoomJoinabilit::JoinabilityPolicyPrevents },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>The joinability of a room.</summary>\n" },
				{ "DisplayName", "RoomJoinabilit" },
				{ "JoinabilityAreIn.Comment", "/**< Unknown */" },
				{ "JoinabilityAreIn.Name", "ERoomJoinabilit::JoinabilityAreIn" },
				{ "JoinabilityAreIn.ToolTip", "< Unknown" },
				{ "JoinabilityAreKicked.Comment", "/**< The user is already in the room */" },
				{ "JoinabilityAreKicked.Name", "ERoomJoinabilit::JoinabilityAreKicked" },
				{ "JoinabilityAreKicked.ToolTip", "< The user is already in the room" },
				{ "JoinabilityCanJoin.Comment", "/**< The user has been kicked out of the room */" },
				{ "JoinabilityCanJoin.Name", "ERoomJoinabilit::JoinabilityCanJoin" },
				{ "JoinabilityCanJoin.ToolTip", "< The user has been kicked out of the room" },
				{ "JoinabilityIsFull.Comment", "/**< The user is able to join the room */" },
				{ "JoinabilityIsFull.Name", "ERoomJoinabilit::JoinabilityIsFull" },
				{ "JoinabilityIsFull.ToolTip", "< The user is able to join the room" },
				{ "JoinabilityNoViewer.Comment", "/**< The room is full */" },
				{ "JoinabilityNoViewer.Name", "ERoomJoinabilit::JoinabilityNoViewer" },
				{ "JoinabilityNoViewer.ToolTip", "< The room is full" },
				{ "JoinabilityPolicyPrevents.Comment", "/**< Not used */" },
				{ "JoinabilityPolicyPrevents.Name", "ERoomJoinabilit::JoinabilityPolicyPrevents" },
				{ "JoinabilityPolicyPrevents.ToolTip", "< Not used" },
				{ "JoinabilityUnknown.Name", "ERoomJoinabilit::JoinabilityUnknown" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "ToolTip", "<summary>The joinability of a room.</summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"ERoomJoinabilit",
				"ERoomJoinabilit",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERoomJoinPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("ERoomJoinPolicy"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<ERoomJoinPolicy>()
	{
		return ERoomJoinPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERoomJoinPolicy(ERoomJoinPolicy_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("ERoomJoinPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy_Hash() { return 2488894444U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERoomJoinPolicy"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERoomJoinPolicy::JoinPolicyNone", (int64)ERoomJoinPolicy::JoinPolicyNone },
				{ "ERoomJoinPolicy::JoinPolicyEveryone", (int64)ERoomJoinPolicy::JoinPolicyEveryone },
				{ "ERoomJoinPolicy::JoinPolicyFriendsOfMembers", (int64)ERoomJoinPolicy::JoinPolicyFriendsOfMembers },
				{ "ERoomJoinPolicy::JoinPolicyFriendsOfOwner", (int64)ERoomJoinPolicy::JoinPolicyFriendsOfOwner },
				{ "ERoomJoinPolicy::JoinPolicyInvitedUsers", (int64)ERoomJoinPolicy::JoinPolicyInvitedUsers },
				{ "ERoomJoinPolicy::JoinPolicyUnknown", (int64)ERoomJoinPolicy::JoinPolicyUnknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>The join policy type of a room.</summary>\n" },
				{ "DisplayName", "RoomJoinPolicy" },
				{ "JoinPolicyEveryone.Comment", "/**< None */" },
				{ "JoinPolicyEveryone.Name", "ERoomJoinPolicy::JoinPolicyEveryone" },
				{ "JoinPolicyEveryone.ToolTip", "< None" },
				{ "JoinPolicyFriendsOfMembers.Comment", "/**< Everyone */" },
				{ "JoinPolicyFriendsOfMembers.Name", "ERoomJoinPolicy::JoinPolicyFriendsOfMembers" },
				{ "JoinPolicyFriendsOfMembers.ToolTip", "< Everyone" },
				{ "JoinPolicyFriendsOfOwner.Comment", "/**< Friends of room members */" },
				{ "JoinPolicyFriendsOfOwner.Name", "ERoomJoinPolicy::JoinPolicyFriendsOfOwner" },
				{ "JoinPolicyFriendsOfOwner.ToolTip", "< Friends of room members" },
				{ "JoinPolicyInvitedUsers.Comment", "/**< Friends of the room owner */" },
				{ "JoinPolicyInvitedUsers.Name", "ERoomJoinPolicy::JoinPolicyInvitedUsers" },
				{ "JoinPolicyInvitedUsers.ToolTip", "< Friends of the room owner" },
				{ "JoinPolicyNone.Name", "ERoomJoinPolicy::JoinPolicyNone" },
				{ "JoinPolicyUnknown.Comment", "/**< Invited users */" },
				{ "JoinPolicyUnknown.Name", "ERoomJoinPolicy::JoinPolicyUnknown" },
				{ "JoinPolicyUnknown.ToolTip", "< Invited users" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "ToolTip", "<summary>The join policy type of a room.</summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"ERoomJoinPolicy",
				"ERoomJoinPolicy",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERoomType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_ERoomType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("ERoomType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<ERoomType>()
	{
		return ERoomType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERoomType(ERoomType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("ERoomType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_ERoomType_Hash() { return 3808747910U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERoomType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_ERoomType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERoomType::TypeUnknown", (int64)ERoomType::TypeUnknown },
				{ "ERoomType::TypeMatchmaking", (int64)ERoomType::TypeMatchmaking },
				{ "ERoomType::TypeModerated", (int64)ERoomType::TypeModerated },
				{ "ERoomType::TypePrivate", (int64)ERoomType::TypePrivate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>The type of room you can create.</summary>\n" },
				{ "DisplayName", "RoomType" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "ToolTip", "<summary>The type of room you can create.</summary>" },
				{ "TypeMatchmaking.Comment", "/**< Unknown */" },
				{ "TypeMatchmaking.Name", "ERoomType::TypeMatchmaking" },
				{ "TypeMatchmaking.ToolTip", "< Unknown" },
				{ "TypeModerated.Comment", "/**< Matchmaking room */" },
				{ "TypeModerated.Name", "ERoomType::TypeModerated" },
				{ "TypeModerated.ToolTip", "< Matchmaking room" },
				{ "TypePrivate.Comment", "/**< Moderated room */" },
				{ "TypePrivate.Name", "ERoomType::TypePrivate" },
				{ "TypePrivate.ToolTip", "< Moderated room" },
				{ "TypeUnknown.Name", "ERoomType::TypeUnknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"ERoomType",
				"ERoomType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELaunchResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_ELaunchResult, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("ELaunchResult"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<ELaunchResult>()
	{
		return ELaunchResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELaunchResult(ELaunchResult_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("ELaunchResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_ELaunchResult_Hash() { return 389705450U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELaunchResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELaunchResult"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_ELaunchResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELaunchResult::Unknown", (int64)ELaunchResult::Unknown },
				{ "ELaunchResult::Success", (int64)ELaunchResult::Success },
				{ "ELaunchResult::FailedRoomFull", (int64)ELaunchResult::FailedRoomFull },
				{ "ELaunchResult::FailedGameAlreadyStarted", (int64)ELaunchResult::FailedGameAlreadyStarted },
				{ "ELaunchResult::FailedRoomNotFound", (int64)ELaunchResult::FailedRoomNotFound },
				{ "ELaunchResult::FailedUserDeclined", (int64)ELaunchResult::FailedUserDeclined },
				{ "ELaunchResult::FailedOtherReason", (int64)ELaunchResult::FailedOtherReason },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* ppf_LaunchResult.h *//// <summary>App launch result.</summary>\n" },
				{ "DisplayName", "LaunchResult" },
				{ "FailedGameAlreadyStarted.Name", "ELaunchResult::FailedGameAlreadyStarted" },
				{ "FailedOtherReason.Name", "ELaunchResult::FailedOtherReason" },
				{ "FailedRoomFull.Name", "ELaunchResult::FailedRoomFull" },
				{ "FailedRoomNotFound.Name", "ELaunchResult::FailedRoomNotFound" },
				{ "FailedUserDeclined.Name", "ELaunchResult::FailedUserDeclined" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "Success.Name", "ELaunchResult::Success" },
				{ "ToolTip", "ppf_LaunchResult.h /// <summary>App launch result.</summary>" },
				{ "Unknown.Name", "ELaunchResult::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"ELaunchResult",
				"ELaunchResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELaunchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_ELaunchType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("ELaunchType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<ELaunchType>()
	{
		return ELaunchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELaunchType(ELaunchType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("ELaunchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_ELaunchType_Hash() { return 3889866324U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELaunchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELaunchType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_ELaunchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELaunchType::Unknown", (int64)ELaunchType::Unknown },
				{ "ELaunchType::Normal", (int64)ELaunchType::Normal },
				{ "ELaunchType::Invite", (int64)ELaunchType::Invite },
				{ "ELaunchType::Coordinated", (int64)ELaunchType::Coordinated },
				{ "ELaunchType::Deeplink", (int64)ELaunchType::Deeplink },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* ppf_LaunchType.h *//// <summary>App launch type.</summary>\n" },
				{ "Coordinated.Comment", "/**< Invite */" },
				{ "Coordinated.Name", "ELaunchType::Coordinated" },
				{ "Coordinated.ToolTip", "< Invite" },
				{ "Deeplink.Comment", "/**< Not used */" },
				{ "Deeplink.Name", "ELaunchType::Deeplink" },
				{ "Deeplink.ToolTip", "< Not used" },
				{ "DisplayName", "LaunchType" },
				{ "Invite.Comment", "/**< Normal */" },
				{ "Invite.Name", "ELaunchType::Invite" },
				{ "Invite.ToolTip", "< Normal" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "Normal.Comment", "/**< Unknown */" },
				{ "Normal.Name", "ELaunchType::Normal" },
				{ "Normal.ToolTip", "< Unknown" },
				{ "ToolTip", "ppf_LaunchType.h /// <summary>App launch type.</summary>" },
				{ "Unknown.Name", "ELaunchType::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"ELaunchType",
				"ELaunchType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUserGender_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EUserGender, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EUserGender"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EUserGender>()
	{
		return EUserGender_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUserGender(EUserGender_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EUserGender"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EUserGender_Hash() { return 2941949429U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EUserGender()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUserGender"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EUserGender_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUserGender::Unknow", (int64)EUserGender::Unknow },
				{ "EUserGender::Male", (int64)EUserGender::Male },
				{ "EUserGender::Female", (int64)EUserGender::Female },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>User's gender.</summary>\n" },
				{ "Female.Comment", "/**< Male */" },
				{ "Female.Name", "EUserGender::Female" },
				{ "Female.ToolTip", "< Male" },
				{ "Male.Comment", "/**< Unknown */" },
				{ "Male.Name", "EUserGender::Male" },
				{ "Male.ToolTip", "< Unknown" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "ToolTip", "<summary>User's gender.</summary>" },
				{ "Unknow.Name", "EUserGender::Unknow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EUserGender",
				"EUserGender",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUserPresenceStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_EUserPresenceStatus, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("EUserPresenceStatus"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<EUserPresenceStatus>()
	{
		return EUserPresenceStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUserPresenceStatus(EUserPresenceStatus_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("EUserPresenceStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_EUserPresenceStatus_Hash() { return 1457361504U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EUserPresenceStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUserPresenceStatus"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_EUserPresenceStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUserPresenceStatus::Unknow", (int64)EUserPresenceStatus::Unknow },
				{ "EUserPresenceStatus::OnLine", (int64)EUserPresenceStatus::OnLine },
				{ "EUserPresenceStatus::OffLine", (int64)EUserPresenceStatus::OffLine },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>User's current online status.</summary>\n" },
				{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
				{ "OffLine.Comment", "/**< Online */" },
				{ "OffLine.Name", "EUserPresenceStatus::OffLine" },
				{ "OffLine.ToolTip", "< Online" },
				{ "OnLine.Comment", "/**< Unknown */" },
				{ "OnLine.Name", "EUserPresenceStatus::OnLine" },
				{ "OnLine.ToolTip", "< Unknown" },
				{ "ToolTip", "<summary>User's current online status.</summary>" },
				{ "Unknow.Name", "EUserPresenceStatus::Unknow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"EUserPresenceStatus",
				"EUserPresenceStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPicoSupplementaryMetric::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoSupplementaryMetric, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoSupplementaryMetric"), sizeof(FPicoSupplementaryMetric), Get_Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoSupplementaryMetric>()
{
	return FPicoSupplementaryMetric::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoSupplementaryMetric(FPicoSupplementaryMetric::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoSupplementaryMetric"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoSupplementaryMetric
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoSupplementaryMetric()
	{
		UScriptStruct::DeferCppStructOps<FPicoSupplementaryMetric>(FName(TEXT("PicoSupplementaryMetric")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoSupplementaryMetric;
	struct Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metric_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metric;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>Supplementary metrics for leaderboards.</summary>\n" },
		{ "DisplayName", "PicoSupplementaryMetric" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>Supplementary metrics for leaderboards.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoSupplementaryMetric>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "SupplementaryMetric" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoSupplementaryMetric, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::NewProp_Metric_MetaData[] = {
		{ "Category", "SupplementaryMetric" },
		{ "Comment", "/*!< The ID of the supplementary metric */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The ID of the supplementary metric" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::NewProp_Metric = { "Metric", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoSupplementaryMetric, Metric), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::NewProp_Metric_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::NewProp_Metric_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::NewProp_Metric,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoSupplementaryMetric",
		sizeof(FPicoSupplementaryMetric),
		alignof(FPicoSupplementaryMetric),
		Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoSupplementaryMetric()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoSupplementaryMetric"), sizeof(FPicoSupplementaryMetric), Get_Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoSupplementaryMetric_Hash() { return 4184041333U; }
class UScriptStruct* FPicoOnlineLeaderboardWrite::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoOnlineLeaderboardWrite"), sizeof(FPicoOnlineLeaderboardWrite), Get_Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoOnlineLeaderboardWrite>()
{
	return FPicoOnlineLeaderboardWrite::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoOnlineLeaderboardWrite(FPicoOnlineLeaderboardWrite::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoOnlineLeaderboardWrite"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineLeaderboardWrite
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineLeaderboardWrite()
	{
		UScriptStruct::DeferCppStructOps<FPicoOnlineLeaderboardWrite>(FName(TEXT("PicoOnlineLeaderboardWrite")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineLeaderboardWrite;
	struct Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateMethod;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeaderboardNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RatedStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RatedStat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueToWrite_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValueToWrite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>Interface for writing data to a leaderboard. Similar to `FOnlineLeaderboardWrite`.</summary>\n" },
		{ "DisplayName", "PicoOnlineLeaderboardWrite" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>Interface for writing data to a leaderboard. Similar to `FOnlineLeaderboardWrite`.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoOnlineLeaderboardWrite>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_UpdateMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_UpdateMethod_MetaData[] = {
		{ "Category", "PicoOnlineLeaderboardWrite" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_UpdateMethod = { "UpdateMethod", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineLeaderboardWrite, UpdateMethod), Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardUpdateMethodPicoType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_UpdateMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_UpdateMethod_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_LeaderboardNames_Inner = { "LeaderboardNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_LeaderboardNames_MetaData[] = {
		{ "Category", "PicoOnlineLeaderboardWrite" },
		{ "Comment", "/*!< Update method */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Update method" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_LeaderboardNames = { "LeaderboardNames", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineLeaderboardWrite, LeaderboardNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_LeaderboardNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_LeaderboardNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_RatedStat_MetaData[] = {
		{ "Category", "PicoOnlineLeaderboardWrite" },
		{ "Comment", "/*!< Names of the leaderboards to write data to */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Names of the leaderboards to write data to" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_RatedStat = { "RatedStat", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineLeaderboardWrite, RatedStat), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_RatedStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_RatedStat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_ValueToWrite_MetaData[] = {
		{ "Category", "PicoOnlineLeaderboardWrite" },
		{ "Comment", "/*!< Name of the stat that the leaderboard is rated by */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Name of the stat that the leaderboard is rated by" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_ValueToWrite = { "ValueToWrite", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineLeaderboardWrite, ValueToWrite), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_ValueToWrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_ValueToWrite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_UpdateMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_UpdateMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_LeaderboardNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_LeaderboardNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_RatedStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::NewProp_ValueToWrite,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoOnlineLeaderboardWrite",
		sizeof(FPicoOnlineLeaderboardWrite),
		alignof(FPicoOnlineLeaderboardWrite),
		Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoOnlineLeaderboardWrite"), sizeof(FPicoOnlineLeaderboardWrite), Get_Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineLeaderboardWrite_Hash() { return 453547302U; }
class UScriptStruct* FPicoOnlineLeaderboardRead::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoOnlineLeaderboardRead"), sizeof(FPicoOnlineLeaderboardRead), Get_Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoOnlineLeaderboardRead>()
{
	return FPicoOnlineLeaderboardRead::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoOnlineLeaderboardRead(FPicoOnlineLeaderboardRead::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoOnlineLeaderboardRead"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineLeaderboardRead
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineLeaderboardRead()
	{
		UScriptStruct::DeferCppStructOps<FPicoOnlineLeaderboardRead>(FName(TEXT("PicoOnlineLeaderboardRead")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineLeaderboardRead;
	struct Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedColumn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SortedColumn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rows_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rows;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReadState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReadState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColumnMetadata_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnMetadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColumnMetadata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>Interface for reading data from a leaderboard service. Similar to `FOnlineLeaderboardRead`.</summary>\n" },
		{ "DisplayName", "PicoOnlineLeaderboardRead" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>Interface for reading data from a leaderboard service. Similar to `FOnlineLeaderboardRead`.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoOnlineLeaderboardRead>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "PicoOnlineLeaderboardRead" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineLeaderboardRead, LeaderboardName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_LeaderboardName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_SortedColumn_MetaData[] = {
		{ "Category", "PicoOnlineLeaderboardRead" },
		{ "Comment", "/*!< The name of the leaderboard to read */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The name of the leaderboard to read" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_SortedColumn = { "SortedColumn", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineLeaderboardRead, SortedColumn), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_SortedColumn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_SortedColumn_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_Rows_Inner = { "Rows", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPicoOnlineStatsRow, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_Rows_MetaData[] = {
		{ "Category", "PicoOnlineLeaderboardRead" },
		{ "Comment", "/*!< The column this leaderboard is sorted by */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The column this leaderboard is sorted by" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineLeaderboardRead, Rows), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_Rows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_Rows_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ReadState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ReadState_MetaData[] = {
		{ "Category", "PicoOnlineLeaderboardRead" },
		{ "Comment", "/*!< The array of ranked users retrieved */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The array of ranked users retrieved" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ReadState = { "ReadState", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineLeaderboardRead, ReadState), Z_Construct_UEnum_OnlineSubsystemPico_EOnlineAsyncTaskStatePicoType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ReadState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ReadState_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ColumnMetadata_Inner = { "ColumnMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPicoColumnMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ColumnMetadata_MetaData[] = {
		{ "Category", "PicoOnlineLeaderboardRead" },
		{ "Comment", "/*!< Indicates an error reading data occurred while processing */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Indicates an error reading data occurred while processing" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ColumnMetadata = { "ColumnMetadata", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineLeaderboardRead, ColumnMetadata), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ColumnMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ColumnMetadata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_PageIndex_MetaData[] = {
		{ "Category", "PicoOnlineLeaderboardRead" },
		{ "Comment", "/*!< Column metadata for this leaderboard */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Column metadata for this leaderboard" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineLeaderboardRead, PageIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_PageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_PageIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_PageSize_MetaData[] = {
		{ "Category", "PicoOnlineLeaderboardRead" },
		{ "Comment", "/*!< The page number where the leaderboard you want to read begins. Start from `0` */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The page number where the leaderboard you want to read begins. Start from `0`" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineLeaderboardRead, PageSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_PageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_PageSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_SortedColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_Rows_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_Rows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ReadState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ReadState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ColumnMetadata_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_ColumnMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_PageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::NewProp_PageSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoOnlineLeaderboardRead",
		sizeof(FPicoOnlineLeaderboardRead),
		alignof(FPicoOnlineLeaderboardRead),
		Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoOnlineLeaderboardRead"), sizeof(FPicoOnlineLeaderboardRead), Get_Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineLeaderboardRead_Hash() { return 2113895904U; }
class UScriptStruct* FPicoOnlineStatsRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoOnlineStatsRow, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoOnlineStatsRow"), sizeof(FPicoOnlineStatsRow), Get_Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoOnlineStatsRow>()
{
	return FPicoOnlineStatsRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoOnlineStatsRow(FPicoOnlineStatsRow::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoOnlineStatsRow"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineStatsRow
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineStatsRow()
	{
		UScriptStruct::DeferCppStructOps<FPicoOnlineStatsRow>(FName(TEXT("PicoOnlineStatsRow")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineStatsRow;
	struct Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NickName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NickName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Columns_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Columns_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Columns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>Representation of a single row in a retrieved leaderboard. Similar to `FOnlineStatsRow`.</summary>\n" },
		{ "DisplayName", "FPicoOnlineStatsRow" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>Representation of a single row in a retrieved leaderboard. Similar to `FOnlineStatsRow`.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoOnlineStatsRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_NickName_MetaData[] = {
		{ "Category", "FPicoOnlineStatsRow" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_NickName = { "NickName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineStatsRow, NickName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_NickName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_NickName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_PlayerId_MetaData[] = {
		{ "Category", "FPicoOnlineStatsRow" },
		{ "Comment", "/*!< Name of the player in this row. It will be the result of `ppf_User_GetDisplayName` */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Name of the player in this row. It will be the result of `ppf_User_GetDisplayName`" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineStatsRow, PlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Rank_MetaData[] = {
		{ "Category", "FPicoOnlineStatsRow" },
		{ "Comment", "/*!< Unique ID for the player in this row */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Unique ID for the player in this row" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineStatsRow, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Rank_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Columns_ValueProp = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVariantDataPico, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Columns_Key_KeyProp = { "Columns_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Columns_MetaData[] = {
		{ "Category", "PicoOnlineStatsRow" },
		{ "Comment", "/*!< Player's rank in this leaderboard */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Player's rank in this leaderboard" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineStatsRow, Columns), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Columns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Columns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_NickName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Columns_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Columns_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::NewProp_Columns,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoOnlineStatsRow",
		sizeof(FPicoOnlineStatsRow),
		alignof(FPicoOnlineStatsRow),
		Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineStatsRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoOnlineStatsRow"), sizeof(FPicoOnlineStatsRow), Get_Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineStatsRow_Hash() { return 3339805634U; }
class UScriptStruct* FPicoColumnMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoColumnMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoColumnMetaData, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoColumnMetaData"), sizeof(FPicoColumnMetaData), Get_Z_Construct_UScriptStruct_FPicoColumnMetaData_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoColumnMetaData>()
{
	return FPicoColumnMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoColumnMetaData(FPicoColumnMetaData::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoColumnMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoColumnMetaData
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoColumnMetaData()
	{
		UScriptStruct::DeferCppStructOps<FPicoColumnMetaData>(FName(TEXT("PicoColumnMetaData")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoColumnMetaData;
	struct Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>Column metadata for this leaderboard.</summary>\n" },
		{ "DisplayName", "FPicoColumnMetaData" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>Column metadata for this leaderboard.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoColumnMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "FPicoColumnMetaData" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoColumnMetaData, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_ColumnName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "FPicoColumnMetaData" },
		{ "Comment", "/*!< The name of the column */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The name of the column" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoColumnMetaData, DataType), Z_Construct_UEnum_OnlineSubsystemPico_EPicoOnlineKeyValuePairDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_ColumnName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::NewProp_DataType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoColumnMetaData",
		sizeof(FPicoColumnMetaData),
		alignof(FPicoColumnMetaData),
		Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoColumnMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoColumnMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoColumnMetaData"), sizeof(FPicoColumnMetaData), Get_Z_Construct_UScriptStruct_FPicoColumnMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoColumnMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoColumnMetaData_Hash() { return 3666566918U; }
class UScriptStruct* FVariantDataPico::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FVariantDataPico_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVariantDataPico, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("VariantDataPico"), sizeof(FVariantDataPico), Get_Z_Construct_UScriptStruct_FVariantDataPico_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FVariantDataPico>()
{
	return FVariantDataPico::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVariantDataPico(FVariantDataPico::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("VariantDataPico"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFVariantDataPico
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFVariantDataPico()
	{
		UScriptStruct::DeferCppStructOps<FVariantDataPico>(FName(TEXT("VariantDataPico")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFVariantDataPico;
	struct Z_Construct_UScriptStruct_FVariantDataPico_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariantDataPico_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>Container for storing data of variable type. Similar to `FVariantData`.</summary>\n" },
		{ "DisplayName", "FVariantDataPico" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>Container for storing data of variable type. Similar to `FVariantData`.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVariantDataPico>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "PicoOnlineStatsRow" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVariantDataPico, Type), Z_Construct_UEnum_OnlineSubsystemPico_EPicoOnlineKeyValuePairDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "PicoOnlineStatsRow" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVariantDataPico, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVariantDataPico_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDataPico_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVariantDataPico_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"VariantDataPico",
		sizeof(FVariantDataPico),
		alignof(FVariantDataPico),
		Z_Construct_UScriptStruct_FVariantDataPico_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataPico_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVariantDataPico_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataPico_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVariantDataPico()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVariantDataPico_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VariantDataPico"), sizeof(FVariantDataPico), Get_Z_Construct_UScriptStruct_FVariantDataPico_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVariantDataPico_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVariantDataPico_Hash() { return 2439299828U; }
class UScriptStruct* FPicoOnlineSessionSearch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoOnlineSessionSearch"), sizeof(FPicoOnlineSessionSearch), Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoOnlineSessionSearch>()
{
	return FPicoOnlineSessionSearch::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoOnlineSessionSearch(FPicoOnlineSessionSearch::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoOnlineSessionSearch"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSessionSearch
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSessionSearch()
	{
		UScriptStruct::DeferCppStructOps<FPicoOnlineSessionSearch>(FName(TEXT("PicoOnlineSessionSearch")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSessionSearch;
	struct Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SearchResults;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSearchResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSearchResults;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuerySettingsKeyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuerySettingsKeyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuerySettingsKeyArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuerySettingsValueArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuerySettingsValueArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuerySettingsValueArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLanQuery_MetaData[];
#endif
		static void NewProp_bIsLanQuery_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLanQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingBucketSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PingBucketSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlatformHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeoutInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeoutInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>Representation of a single search result. Similar to FOnlineSessionSearch.</summary>\n" },
		{ "DisplayName", "PicoOnlineSessionSearch" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>Representation of a single search result. Similar to FOnlineSessionSearch.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoOnlineSessionSearch>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchResults_Inner = { "SearchResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchResults_MetaData[] = {
		{ "Category", "PicoOnlineSessionSearch" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchResults = { "SearchResults", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSearch, SearchResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchResults_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchState_MetaData[] = {
		{ "Category", "PicoOnlineSessionSearch" },
		{ "Comment", "/*!< Array of all sessions found when searching by the given criteria */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Array of all sessions found when searching by the given criteria" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchState = { "SearchState", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSearch, SearchState), Z_Construct_UEnum_OnlineSubsystemPico_EOnlineAsyncTaskStatePicoType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_MaxSearchResults_MetaData[] = {
		{ "Category", "PicoOnlineSessionSearch" },
		{ "Comment", "/*!< State of the search */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< State of the search" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_MaxSearchResults = { "MaxSearchResults", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSearch, MaxSearchResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_MaxSearchResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_MaxSearchResults_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsKeyArray_Inner = { "QuerySettingsKeyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsKeyArray_MetaData[] = {
		{ "Category", "PicoOnlineSessionSearch" },
		{ "Comment", "/*!< The number of query results will be limited by the maximum number of searches */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The number of query results will be limited by the maximum number of searches" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsKeyArray = { "QuerySettingsKeyArray", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSearch, QuerySettingsKeyArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsKeyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsKeyArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsValueArray_Inner = { "QuerySettingsValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsValueArray_MetaData[] = {
		{ "Category", "PicoOnlineSessionSearch" },
		{ "Comment", "/*!< Key for query.\n    If you need to query matchmaking rooms, you need to add a key: `PICOPOOL`.\n    If you need to query the moderated rooms, you need to add three keys: `PICOMODERATEDROOMSONLY`, `GETMODERATEDROOMSPAGEINDEX`, `GETMODERATEDROOMSPAGESIZE`\n    */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Key for query.\n    If you need to query matchmaking rooms, you need to add a key: `PICOPOOL`.\n    If you need to query the moderated rooms, you need to add three keys: `PICOMODERATEDROOMSONLY`, `GETMODERATEDROOMSPAGEINDEX`, `GETMODERATEDROOMSPAGESIZE`" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsValueArray = { "QuerySettingsValueArray", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSearch, QuerySettingsValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsValueArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsValueArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_bIsLanQuery_MetaData[] = {
		{ "Category", "PicoOnlineSessionSearch" },
		{ "Comment", "/*!< Value for query. Need to exist in pair with keys */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Value for query. Need to exist in pair with keys" },
	};
#endif
	void Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_bIsLanQuery_SetBit(void* Obj)
	{
		((FPicoOnlineSessionSearch*)Obj)->bIsLanQuery = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_bIsLanQuery = { "bIsLanQuery", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPicoOnlineSessionSearch), &Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_bIsLanQuery_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_bIsLanQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_bIsLanQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_PingBucketSize_MetaData[] = {
		{ "Category", "PicoOnlineSessionSearch" },
		{ "Comment", "/*!< Not used */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Not used" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_PingBucketSize = { "PingBucketSize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSearch, PingBucketSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_PingBucketSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_PingBucketSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_PlatformHash_MetaData[] = {
		{ "Category", "PicoOnlineSessionSearch" },
		{ "Comment", "/*!< Not used */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Not used" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_PlatformHash = { "PlatformHash", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSearch, PlatformHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_PlatformHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_PlatformHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_TimeoutInSeconds_MetaData[] = {
		{ "Category", "PicoOnlineSessionSearch" },
		{ "Comment", "/*!< Not used */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Not used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_TimeoutInSeconds = { "TimeoutInSeconds", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSearch, TimeoutInSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_TimeoutInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_TimeoutInSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_SearchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_MaxSearchResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsKeyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsKeyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_QuerySettingsValueArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_bIsLanQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_PingBucketSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_PlatformHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::NewProp_TimeoutInSeconds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoOnlineSessionSearch",
		sizeof(FPicoOnlineSessionSearch),
		alignof(FPicoOnlineSessionSearch),
		Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineSessionSearch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoOnlineSessionSearch"), sizeof(FPicoOnlineSessionSearch), Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSearch_Hash() { return 601184818U; }
class UScriptStruct* FPicoOnlineSessionSearchResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoOnlineSessionSearchResult"), sizeof(FPicoOnlineSessionSearchResult), Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoOnlineSessionSearchResult>()
{
	return FPicoOnlineSessionSearchResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoOnlineSessionSearchResult(FPicoOnlineSessionSearchResult::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoOnlineSessionSearchResult"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSessionSearchResult
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSessionSearchResult()
	{
		UScriptStruct::DeferCppStructOps<FPicoOnlineSessionSearchResult>(FName(TEXT("PicoOnlineSessionSearchResult")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSessionSearchResult;
	struct Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Session;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingInMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PingInMs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>Representation of a single search result. Similar to `FOnlineSessionSearchResult`.</summary>\n" },
		{ "DisplayName", "PicoOnlineSessionSearchResult" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>Representation of a single search result. Similar to `FOnlineSessionSearchResult`.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoOnlineSessionSearchResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::NewProp_Session_MetaData[] = {
		{ "Category", "PicoOnlineSessionSearchResult" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSearchResult, Session), Z_Construct_UScriptStruct_FPicoOnlineSession, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::NewProp_Session_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::NewProp_Session_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::NewProp_PingInMs_MetaData[] = {
		{ "Category", "PicoOnlineSessionSearchResult" },
		{ "Comment", "/*!< Searched room information */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Searched room information" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::NewProp_PingInMs = { "PingInMs", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSearchResult, PingInMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::NewProp_PingInMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::NewProp_PingInMs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::NewProp_Session,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::NewProp_PingInMs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoOnlineSessionSearchResult",
		sizeof(FPicoOnlineSessionSearchResult),
		alignof(FPicoOnlineSessionSearchResult),
		Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoOnlineSessionSearchResult"), sizeof(FPicoOnlineSessionSearchResult), Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSearchResult_Hash() { return 3878792950U; }
class UScriptStruct* FPicoNamedOnlineSession::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoNamedOnlineSession, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoNamedOnlineSession"), sizeof(FPicoNamedOnlineSession), Get_Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoNamedOnlineSession>()
{
	return FPicoNamedOnlineSession::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoNamedOnlineSession(FPicoNamedOnlineSession::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoNamedOnlineSession"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoNamedOnlineSession
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoNamedOnlineSession()
	{
		UScriptStruct::DeferCppStructOps<FPicoNamedOnlineSession>(FName(TEXT("PicoNamedOnlineSession")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoNamedOnlineSession;
	struct Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostingPlayerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HostingPlayerNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHosting_MetaData[];
#endif
		static void NewProp_bHosting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHosting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalOwnerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalOwnerId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegisteredPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredPlayers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwningUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwningUserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionInfoRoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionInfoRoomID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOpenPrivateConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOpenPrivateConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOpenPublicConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOpenPublicConnections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>Holds the per session information for named sessions. Similar to `FNamedOnlineSession`.</summary>\n" },
		{ "DisplayName", "PicoNamedOnlineSession" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>Holds the per session information for named sessions. Similar to `FNamedOnlineSession`.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoNamedOnlineSession>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionName_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoNamedOnlineSession, SessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_HostingPlayerNum_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "Comment", "/*!< The name of the session */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The name of the session" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_HostingPlayerNum = { "HostingPlayerNum", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoNamedOnlineSession, HostingPlayerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_HostingPlayerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_HostingPlayerNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_bHosting_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "Comment", "/*!< The number when you use `PicoSubsystem.GetIdentityInterface()` -> `GetUniquePlayerId` */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The number when you use `PicoSubsystem.GetIdentityInterface()` -> `GetUniquePlayerId`" },
	};
#endif
	void Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_bHosting_SetBit(void* Obj)
	{
		((FPicoNamedOnlineSession*)Obj)->bHosting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_bHosting = { "bHosting", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPicoNamedOnlineSession), &Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_bHosting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_bHosting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_bHosting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_LocalOwnerId_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "Comment", "/*!< Not used */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Not used" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_LocalOwnerId = { "LocalOwnerId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoNamedOnlineSession, LocalOwnerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_LocalOwnerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_LocalOwnerId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_RegisteredPlayers_Inner = { "RegisteredPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_RegisteredPlayers_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "Comment", "/*!< NetId of the local player that created this named session. */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< NetId of the local player that created this named session." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_RegisteredPlayers = { "RegisteredPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoNamedOnlineSession, RegisteredPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_RegisteredPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_RegisteredPlayers_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionState_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "Comment", "/*!< The players in the room */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The players in the room" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionState = { "SessionState", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoNamedOnlineSession, SessionState), Z_Construct_UEnum_OnlineSubsystemPico_EOnlineSessionStatePicoType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_OwningUserId_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "Comment", "/*!< State of the session */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< State of the session" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_OwningUserId = { "OwningUserId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoNamedOnlineSession, OwningUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_OwningUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_OwningUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_OwningUserName_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "Comment", "/*!< The ID of the session owner */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The ID of the session owner" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_OwningUserName = { "OwningUserName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoNamedOnlineSession, OwningUserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_OwningUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_OwningUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionSettings_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "Comment", "/*!< The name of the session owner */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The name of the session owner" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoNamedOnlineSession, SessionSettings), Z_Construct_UScriptStruct_FPicoOnlineSessionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionInfoRoomID_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "Comment", "/*!< The settings associated with this session */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The settings associated with this session" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionInfoRoomID = { "SessionInfoRoomID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoNamedOnlineSession, SessionInfoRoomID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionInfoRoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionInfoRoomID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_NumOpenPrivateConnections_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "Comment", "/*!< The ID of the room of this session */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The ID of the room of this session" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_NumOpenPrivateConnections = { "NumOpenPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoNamedOnlineSession, NumOpenPrivateConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_NumOpenPrivateConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_NumOpenPrivateConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_NumOpenPublicConnections_MetaData[] = {
		{ "Category", "PicoNamedOnlineSession" },
		{ "Comment", "/*!< Zero, you don't need to use this field */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Zero, you don't need to use this field" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_NumOpenPublicConnections = { "NumOpenPublicConnections", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoNamedOnlineSession, NumOpenPublicConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_NumOpenPublicConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_NumOpenPublicConnections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_HostingPlayerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_bHosting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_LocalOwnerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_RegisteredPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_RegisteredPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_OwningUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_OwningUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_SessionInfoRoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_NumOpenPrivateConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::NewProp_NumOpenPublicConnections,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoNamedOnlineSession",
		sizeof(FPicoNamedOnlineSession),
		alignof(FPicoNamedOnlineSession),
		Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoNamedOnlineSession()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoNamedOnlineSession"), sizeof(FPicoNamedOnlineSession), Get_Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoNamedOnlineSession_Hash() { return 659702383U; }
class UScriptStruct* FPicoOnlineSession::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSession_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoOnlineSession, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoOnlineSession"), sizeof(FPicoOnlineSession), Get_Z_Construct_UScriptStruct_FPicoOnlineSession_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoOnlineSession>()
{
	return FPicoOnlineSession::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoOnlineSession(FPicoOnlineSession::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoOnlineSession"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSession
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSession()
	{
		UScriptStruct::DeferCppStructOps<FPicoOnlineSession>(FName(TEXT("PicoOnlineSession")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSession;
	struct Z_Construct_UScriptStruct_FPicoOnlineSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwningUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwningUserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionInfoRoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionInfoRoomID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOpenPrivateConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOpenPrivateConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOpenPublicConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOpenPublicConnections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>Basic session information. Similar to `FOnlineSession`.</summary>\n" },
		{ "DisplayName", "PicoOnlineSession" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>Basic session information. Similar to `FOnlineSession`.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoOnlineSession>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_OwningUserId_MetaData[] = {
		{ "Category", "PicoOnlineSession" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_OwningUserId = { "OwningUserId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSession, OwningUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_OwningUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_OwningUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_OwningUserName_MetaData[] = {
		{ "Category", "PicoOnlineSession" },
		{ "Comment", "/*!< The ID of the session owner */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The ID of the session owner" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_OwningUserName = { "OwningUserName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSession, OwningUserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_OwningUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_OwningUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_SessionSettings_MetaData[] = {
		{ "Category", "PicoOnlineSession" },
		{ "Comment", "/*!< The name of the session owner */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The name of the session owner" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSession, SessionSettings), Z_Construct_UScriptStruct_FPicoOnlineSessionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_SessionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_SessionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_SessionInfoRoomID_MetaData[] = {
		{ "Category", "PicoOnlineSession" },
		{ "Comment", "/*!< The settings associated with this session */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The settings associated with this session" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_SessionInfoRoomID = { "SessionInfoRoomID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSession, SessionInfoRoomID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_SessionInfoRoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_SessionInfoRoomID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_NumOpenPrivateConnections_MetaData[] = {
		{ "Category", "PicoOnlineSession" },
		{ "Comment", "/*!< The ID of the room of this session */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The ID of the room of this session" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_NumOpenPrivateConnections = { "NumOpenPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSession, NumOpenPrivateConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_NumOpenPrivateConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_NumOpenPrivateConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_NumOpenPublicConnections_MetaData[] = {
		{ "Category", "PicoOnlineSession" },
		{ "Comment", "/*!< Zero, you don't need to use this field */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Zero, you don't need to use this field" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_NumOpenPublicConnections = { "NumOpenPublicConnections", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSession, NumOpenPublicConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_NumOpenPublicConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_NumOpenPublicConnections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_OwningUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_OwningUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_SessionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_SessionInfoRoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_NumOpenPrivateConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::NewProp_NumOpenPublicConnections,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoOnlineSession",
		sizeof(FPicoOnlineSession),
		alignof(FPicoOnlineSession),
		Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineSession()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSession_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoOnlineSession"), sizeof(FPicoOnlineSession), Get_Z_Construct_UScriptStruct_FPicoOnlineSession_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoOnlineSession_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSession_Hash() { return 1119336907U; }
class UScriptStruct* FPicoOnlineSessionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoOnlineSessionSettings"), sizeof(FPicoOnlineSessionSettings), Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoOnlineSessionSettings>()
{
	return FPicoOnlineSessionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoOnlineSessionSettings(FPicoOnlineSessionSettings::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoOnlineSessionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSessionSettings
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSessionSettings()
	{
		UScriptStruct::DeferCppStructOps<FPicoOnlineSessionSettings>(FName(TEXT("PicoOnlineSessionSettings")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoOnlineSessionSettings;
	struct Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPublicConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumPublicConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPrivateConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumPrivateConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAdvertise_MetaData[];
#endif
		static void NewProp_bShouldAdvertise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowInvites_MetaData[];
#endif
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesPresence_MetaData[];
#endif
		static void NewProp_bUsesPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesPresence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinViaPresence_MetaData[];
#endif
		static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData[];
#endif
		static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildUniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BuildUniqueId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValueArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValueArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>The settings of a session. Similar to `FOnlineSessionSettings`.\n/// @note\n/// | Private Room's Join Policy | Settings |\n/// |--|--|\n/// | `InvitedUsers` | <ul><li>(Default) `bShouldAdvertise`=`false`</li><br>or</br><li>\xef\xbc\x88`bShouldAdvertise` & `bAllowInvites`=`true`) and (`bAllowJoinViaPresence` & `bAllowJoinViaPresenceFriendsOnly`=`false`)</li></ul> |\n/// | `FriendsOfMembers` | `bShouldAdvertise` & `bAllowJoinViaPresenceFriendsOnly`=`true` |\n/// | `Everyone` | `bShouldAdvertise`=`true` and (`bAllowJoinViaPresence`=`true` or `bAllowInvites`=`false`) |\n/// </summary>\n" },
		{ "DisplayName", "PicoOnlineSessionSettings" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>The settings of a session. Similar to `FOnlineSessionSettings`.\n@note\n| Private Room's Join Policy | Settings |\n|--|--|\n| `InvitedUsers` | <ul><li>(Default) `bShouldAdvertise`=`false`</li><br>or</br><li>\xef\xbc\x88`bShouldAdvertise` & `bAllowInvites`=`true`) and (`bAllowJoinViaPresence` & `bAllowJoinViaPresenceFriendsOnly`=`false`)</li></ul> |\n| `FriendsOfMembers` | `bShouldAdvertise` & `bAllowJoinViaPresenceFriendsOnly`=`true` |\n| `Everyone` | `bShouldAdvertise`=`true` and (`bAllowJoinViaPresence`=`true` or `bAllowInvites`=`false`) |\n</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoOnlineSessionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_NumPublicConnections_MetaData[] = {
		{ "Category", "PicoOnlineSessionSettings" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_NumPublicConnections = { "NumPublicConnections", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSettings, NumPublicConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_NumPublicConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_NumPublicConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_NumPrivateConnections_MetaData[] = {
		{ "Category", "PicoOnlineSessionSettings" },
		{ "Comment", "/*!< The maximum number of users allowed for the session */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The maximum number of users allowed for the session" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_NumPrivateConnections = { "NumPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSettings, NumPrivateConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_NumPrivateConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_NumPrivateConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bShouldAdvertise_MetaData[] = {
		{ "Category", "PicoOnlineSessionSettings" },
		{ "Comment", "/*!< Need to be zero */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Need to be zero" },
	};
#endif
	void Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
	{
		((FPicoOnlineSessionSettings*)Obj)->bShouldAdvertise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPicoOnlineSessionSettings), &Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bShouldAdvertise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bShouldAdvertise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowInvites_MetaData[] = {
		{ "Category", "PicoOnlineSessionSettings" },
		{ "Comment", "/*!< When creating a private room, this field will affect the room's join policy. */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< When creating a private room, this field will affect the room's join policy." },
	};
#endif
	void Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((FPicoOnlineSessionSettings*)Obj)->bAllowInvites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPicoOnlineSessionSettings), &Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowInvites_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowInvites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bUsesPresence_MetaData[] = {
		{ "Category", "PicoOnlineSessionSettings" },
		{ "Comment", "/*!< When creating a private room, this field will affect the room's join policy */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< When creating a private room, this field will affect the room's join policy" },
	};
#endif
	void Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bUsesPresence_SetBit(void* Obj)
	{
		((FPicoOnlineSessionSettings*)Obj)->bUsesPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bUsesPresence = { "bUsesPresence", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPicoOnlineSessionSettings), &Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bUsesPresence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bUsesPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bUsesPresence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresence_MetaData[] = {
		{ "Category", "PicoOnlineSessionSettings" },
		{ "Comment", "/*!< When creating a private room, this field will affect the room's join policy */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< When creating a private room, this field will affect the room's join policy" },
	};
#endif
	void Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
	{
		((FPicoOnlineSessionSettings*)Obj)->bAllowJoinViaPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPicoOnlineSessionSettings), &Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData[] = {
		{ "Category", "PicoOnlineSessionSettings" },
		{ "Comment", "/*!< When creating a private room, this field will affect the room's join policy */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< When creating a private room, this field will affect the room's join policy" },
	};
#endif
	void Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
	{
		((FPicoOnlineSessionSettings*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPicoOnlineSessionSettings), &Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_BuildUniqueId_MetaData[] = {
		{ "Category", "PicoOnlineSessionSettings" },
		{ "Comment", "/*!< When creating a private room, this field will affect the room's join policy */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< When creating a private room, this field will affect the room's join policy" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_BuildUniqueId = { "BuildUniqueId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSettings, BuildUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_BuildUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_BuildUniqueId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_KeyArray_Inner = { "KeyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_KeyArray_MetaData[] = {
		{ "Category", "PicoOnlineSessionSettings" },
		{ "Comment", "/*!< Will be saved in datastore with the key `PICOSESSIONBUILDUNIQUEID`. You don't need to use this field */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Will be saved in datastore with the key `PICOSESSIONBUILDUNIQUEID`. You don't need to use this field" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_KeyArray = { "KeyArray", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSettings, KeyArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_KeyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_KeyArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_ValueArray_Inner = { "ValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_ValueArray_MetaData[] = {
		{ "Category", "PicoOnlineSessionSettings" },
		{ "Comment", "/*!< Datastore keys. When creating a matchmaking room, you need to add the key `PICOPOOL` */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Datastore keys. When creating a matchmaking room, you need to add the key `PICOPOOL`" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_ValueArray = { "ValueArray", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoOnlineSessionSettings, ValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_ValueArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_ValueArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_NumPublicConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_NumPrivateConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bShouldAdvertise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bUsesPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_BuildUniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_KeyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_KeyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_ValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::NewProp_ValueArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoOnlineSessionSettings",
		sizeof(FPicoOnlineSessionSettings),
		alignof(FPicoOnlineSessionSettings),
		Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoOnlineSessionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoOnlineSessionSettings"), sizeof(FPicoOnlineSessionSettings), Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoOnlineSessionSettings_Hash() { return 2889285305U; }
class UScriptStruct* FPicoApplicationInvite::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoApplicationInvite_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoApplicationInvite, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoApplicationInvite"), sizeof(FPicoApplicationInvite), Get_Z_Construct_UScriptStruct_FPicoApplicationInvite_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoApplicationInvite>()
{
	return FPicoApplicationInvite::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoApplicationInvite(FPicoApplicationInvite::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoApplicationInvite"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoApplicationInvite
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoApplicationInvite()
	{
		UScriptStruct::DeferCppStructOps<FPicoApplicationInvite>(FName(TEXT("PicoApplicationInvite")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoApplicationInvite;
	struct Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recipent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Recipent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbySessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbySessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchSessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>The app's invite information.</summary>\n" },
		{ "DisplayName", "PicoApplicationInvite" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>The app's invite information.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoApplicationInvite>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_Recipent_MetaData[] = {
		{ "Category", "Destination" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_Recipent = { "Recipent", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoApplicationInvite, Recipent), Z_Construct_UScriptStruct_FPicoUserInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_Recipent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_Recipent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_Destination_MetaData[] = {
		{ "Category", "Destination" },
		{ "Comment", "/*!< Information about the person who accepted the invitation */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Information about the person who accepted the invitation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoApplicationInvite, Destination), Z_Construct_UScriptStruct_FPicoDestination, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_Destination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Destination" },
		{ "Comment", "/*!< The destination information */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The destination information" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoApplicationInvite, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "Destination" },
		{ "Comment", "/*!< The app's invite ID */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The app's invite ID" },
	};
#endif
	void Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((FPicoApplicationInvite*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPicoApplicationInvite), &Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_LobbySessionId_MetaData[] = {
		{ "Category", "Destination" },
		{ "Comment", "/*!< Whether the app invite is active */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< Whether the app invite is active" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_LobbySessionId = { "LobbySessionId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoApplicationInvite, LobbySessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_LobbySessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_LobbySessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_MatchSessionId_MetaData[] = {
		{ "Category", "Destination" },
		{ "Comment", "/*!< The lobby session ID */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The lobby session ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_MatchSessionId = { "MatchSessionId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoApplicationInvite, MatchSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_MatchSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_MatchSessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_Recipent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_LobbySessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::NewProp_MatchSessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoApplicationInvite",
		sizeof(FPicoApplicationInvite),
		alignof(FPicoApplicationInvite),
		Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoApplicationInvite()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoApplicationInvite_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoApplicationInvite"), sizeof(FPicoApplicationInvite), Get_Z_Construct_UScriptStruct_FPicoApplicationInvite_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoApplicationInvite_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoApplicationInvite_Hash() { return 1637410195U; }
class UScriptStruct* FPicoDestination::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoDestination_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoDestination, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoDestination"), sizeof(FPicoDestination), Get_Z_Construct_UScriptStruct_FPicoDestination_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoDestination>()
{
	return FPicoDestination::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoDestination(FPicoDestination::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoDestination"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoDestination
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoDestination()
	{
		UScriptStruct::DeferCppStructOps<FPicoDestination>(FName(TEXT("PicoDestination")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoDestination;
	struct Z_Construct_UScriptStruct_FPicoDestination_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApiName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApiName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeepLinkMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeepLinkMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoDestination_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>The destination information.</summary>\n" },
		{ "DisplayName", "PicoDestination" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>The destination information.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoDestination_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoDestination>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_ApiName_MetaData[] = {
		{ "Category", "Destination" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_ApiName = { "ApiName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoDestination, ApiName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_ApiName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_ApiName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_DeepLinkMessage_MetaData[] = {
		{ "Category", "Destination" },
		{ "Comment", "/*!< The destination's API name */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The destination's API name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_DeepLinkMessage = { "DeepLinkMessage", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoDestination, DeepLinkMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_DeepLinkMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_DeepLinkMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Destination" },
		{ "Comment", "/*!< The destination's deeplink message */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The destination's deeplink message" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoDestination, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_ApiName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_DeepLinkMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoDestination_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoDestination_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoDestination",
		sizeof(FPicoDestination),
		alignof(FPicoDestination),
		Z_Construct_UScriptStruct_FPicoDestination_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoDestination_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoDestination_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoDestination_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoDestination()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoDestination_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoDestination"), sizeof(FPicoDestination), Get_Z_Construct_UScriptStruct_FPicoDestination_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoDestination_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoDestination_Hash() { return 2804734299U; }
class UScriptStruct* FLaunchDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FLaunchDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchDetails, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("LaunchDetails"), sizeof(FLaunchDetails), Get_Z_Construct_UScriptStruct_FLaunchDetails_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FLaunchDetails>()
{
	return FLaunchDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLaunchDetails(FLaunchDetails::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("LaunchDetails"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFLaunchDetails
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFLaunchDetails()
	{
		UScriptStruct::DeferCppStructOps<FLaunchDetails>(FName(TEXT("LaunchDetails")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFLaunchDetails;
	struct Z_Construct_UScriptStruct_FLaunchDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeeplinkMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeeplinkMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationApiName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationApiName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LaunchSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbySessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbySessionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchSessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchSessionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extra_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extra;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LaunchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LaunchType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* ppf_LaunchDetails.h *//// <summary>App launch details when succeeded.</summary>\n" },
		{ "DisplayName", "LaunchDetails" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "ppf_LaunchDetails.h /// <summary>App launch details when succeeded.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_DeeplinkMessage_MetaData[] = {
		{ "Category", "ApplicationLifecycle" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_DeeplinkMessage = { "DeeplinkMessage", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchDetails, DeeplinkMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_DeeplinkMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_DeeplinkMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_DestinationApiName_MetaData[] = {
		{ "Category", "ApplicationLifecycle" },
		{ "Comment", "/*!< The deeplink message */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The deeplink message" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_DestinationApiName = { "DestinationApiName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchDetails, DestinationApiName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_DestinationApiName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_DestinationApiName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchSource_MetaData[] = {
		{ "Category", "ApplicationLifecycle" },
		{ "Comment", "/*!< The destination's API name */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The destination's API name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchSource = { "LaunchSource", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchDetails, LaunchSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LobbySessionID_MetaData[] = {
		{ "Category", "ApplicationLifecycle" },
		{ "Comment", "/*!< The launch source */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The launch source" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LobbySessionID = { "LobbySessionID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchDetails, LobbySessionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LobbySessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LobbySessionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_MatchSessionID_MetaData[] = {
		{ "Category", "ApplicationLifecycle" },
		{ "Comment", "/*!< The lobby session ID */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The lobby session ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_MatchSessionID = { "MatchSessionID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchDetails, MatchSessionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_MatchSessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_MatchSessionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_Extra_MetaData[] = {
		{ "Category", "ApplicationLifecycle" },
		{ "Comment", "/*!< The match session ID */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The match session ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_Extra = { "Extra", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchDetails, Extra), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_Extra_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_Extra_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_RoomID_MetaData[] = {
		{ "Category", "ApplicationLifecycle" },
		{ "Comment", "/*!< The extra presence info */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The extra presence info" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchDetails, RoomID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_RoomID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_TrackingID_MetaData[] = {
		{ "Category", "ApplicationLifecycle" },
		{ "Comment", "/*!< The room ID */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The room ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_TrackingID = { "TrackingID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchDetails, TrackingID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_TrackingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_TrackingID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchType_MetaData[] = {
		{ "Category", "ApplicationLifecycle" },
		{ "Comment", "/*!< The tracking ID */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The tracking ID" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchType = { "LaunchType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchDetails, LaunchType), Z_Construct_UEnum_OnlineSubsystemPico_ELaunchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_UserArray_MetaData[] = {
		{ "Category", "ApplicationLifecycle" },
		{ "Comment", "/*!< The launch type */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The launch type" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_UserArray = { "UserArray", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchDetails, UserArray), Z_Construct_UClass_UPico_UserArray_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_UserArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_UserArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_DeeplinkMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_DestinationApiName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LobbySessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_MatchSessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_Extra,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_TrackingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_LaunchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchDetails_Statics::NewProp_UserArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"LaunchDetails",
		sizeof(FLaunchDetails),
		alignof(FLaunchDetails),
		Z_Construct_UScriptStruct_FLaunchDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLaunchDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LaunchDetails"), sizeof(FLaunchDetails), Get_Z_Construct_UScriptStruct_FLaunchDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLaunchDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLaunchDetails_Hash() { return 228599672U; }
class UScriptStruct* FPicoUserInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMPICO_API uint32 Get_Z_Construct_UScriptStruct_FPicoUserInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoUserInfo, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("PicoUserInfo"), sizeof(FPicoUserInfo), Get_Z_Construct_UScriptStruct_FPicoUserInfo_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<FPicoUserInfo>()
{
	return FPicoUserInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoUserInfo(FPicoUserInfo::StaticStruct, TEXT("/Script/OnlineSubsystemPico"), TEXT("PicoUserInfo"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoUserInfo
{
	FScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoUserInfo()
	{
		UScriptStruct::DeferCppStructOps<FPicoUserInfo>(FName(TEXT("PicoUserInfo")));
	}
} ScriptStruct_OnlineSubsystemPico_StaticRegisterNativesFPicoUserInfo;
	struct Z_Construct_UScriptStruct_FPicoUserInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UserPresenceStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserPresenceStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UserPresenceStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InviteToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InviteToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallImageUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SmallImageUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresencePackage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresencePackage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresenceStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceDeeplinkMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresenceDeeplinkMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceDestinationApiName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresenceDestinationApiName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceLobbySessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresenceLobbySessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceMatchSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresenceMatchSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceExtra_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresenceExtra;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>User's information.</summary>\n" },
		{ "DisplayName", "OnlinePicoUserInfo" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "<summary>User's information.</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoUserInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< User's ID */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< User's ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserPresenceStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserPresenceStatus_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< User's display name */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< User's display name" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserPresenceStatus = { "UserPresenceStatus", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, UserPresenceStatus), Z_Construct_UEnum_OnlineSubsystemPico_EUserPresenceStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserPresenceStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserPresenceStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_InviteToken_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< User's current online status */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< User's current online status" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_InviteToken = { "InviteToken", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, InviteToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_InviteToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_InviteToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_ImageUrl_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< User's invite token */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< User's invite token" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_ImageUrl = { "ImageUrl", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, ImageUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_ImageUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_ImageUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_SmallImageUrl_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< User's image URL */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< User's image URL" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_SmallImageUrl = { "SmallImageUrl", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, SmallImageUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_SmallImageUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_SmallImageUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresencePackage_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< User's small image URL */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< User's small image URL" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresencePackage = { "PresencePackage", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, PresencePackage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresencePackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresencePackage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceStr_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< The package name of the app corresponding to the presence */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The package name of the app corresponding to the presence" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceStr = { "PresenceStr", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, PresenceStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceStr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceDeeplinkMessage_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< The name of the user's current presence */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< The name of the user's current presence" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceDeeplinkMessage = { "PresenceDeeplinkMessage", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, PresenceDeeplinkMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceDeeplinkMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceDeeplinkMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceDestinationApiName_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< User's presence deeplink message */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< User's presence deeplink message" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceDestinationApiName = { "PresenceDestinationApiName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, PresenceDestinationApiName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceDestinationApiName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceDestinationApiName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceLobbySessionId_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< User's presence destination API name */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< User's presence destination API name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceLobbySessionId = { "PresenceLobbySessionId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, PresenceLobbySessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceLobbySessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceLobbySessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceMatchSessionId_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< User's presence lobby session ID */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< User's presence lobby session ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceMatchSessionId = { "PresenceMatchSessionId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, PresenceMatchSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceMatchSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceMatchSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceExtra_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< User's presence match session ID */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< User's presence match session ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceExtra = { "PresenceExtra", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, PresenceExtra), METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceExtra_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceExtra_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "OnlinePicoUserInfo" },
		{ "Comment", "/*!< User's extra presence info */" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemPicoNames.h" },
		{ "ToolTip", "!< User's extra presence info" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoUserInfo, Gender), Z_Construct_UEnum_OnlineSubsystemPico_EUserGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserPresenceStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_UserPresenceStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_InviteToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_ImageUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_SmallImageUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresencePackage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceDeeplinkMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceDestinationApiName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceLobbySessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceMatchSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_PresenceExtra,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoUserInfo_Statics::NewProp_Gender,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
		nullptr,
		&NewStructOps,
		"PicoUserInfo",
		sizeof(FPicoUserInfo),
		alignof(FPicoUserInfo),
		Z_Construct_UScriptStruct_FPicoUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoUserInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoUserInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoUserInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoUserInfo"), sizeof(FPicoUserInfo), Get_Z_Construct_UScriptStruct_FPicoUserInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoUserInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoUserInfo_Hash() { return 3514917580U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
