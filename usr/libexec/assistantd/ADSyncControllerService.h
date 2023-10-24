//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ADSyncControllerService
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableOrderedSet *_downloadTaskSet;	// 16 = 0x10
    NSMutableDictionary *_muxSyncStatus;	// 24 = 0x18
    NSMutableDictionary *_sharedUserIdByCompanionAssistantId;	// 32 = 0x20
    NSMutableSet *_syncParamsPendingSyncToken;	// 40 = 0x28
    NSMutableSet *_assistantIdsToBuildSpeechProfile;	// 48 = 0x30
}

+ (void)_logSyncNotificationLatencyFromCompanionSyncMetadata:(id)arg1;	// IMP=0x0020000000105b48
+ (id)_cachedMuxSyncStatus;	// IMP=0x0010000000105aa5
+ (void)_updateCachedMuxSyncStatus:(id)arg1;	// IMP=0x00100000001059e3
+ (id)syncTypes;	// IMP=0x00100000001059b3
+ (id)_getValidatedUserFromNotification:(id)arg1;	// IMP=0x0010000000105692
- (void).cxx_destruct;	// IMP=0x0020000000101f33
@property(retain, nonatomic) NSMutableSet *assistantIdsToBuildSpeechProfile; // @synthesize assistantIdsToBuildSpeechProfile=_assistantIdsToBuildSpeechProfile;
@property(retain, nonatomic) NSMutableSet *syncParamsPendingSyncToken; // @synthesize syncParamsPendingSyncToken=_syncParamsPendingSyncToken;
@property(retain, nonatomic) NSMutableDictionary *sharedUserIdByCompanionAssistantId; // @synthesize sharedUserIdByCompanionAssistantId=_sharedUserIdByCompanionAssistantId;
@property(retain, nonatomic) NSMutableDictionary *muxSyncStatus; // @synthesize muxSyncStatus=_muxSyncStatus;
@property(readonly, nonatomic) NSMutableOrderedSet *downloadTaskSet; // @synthesize downloadTaskSet=_downloadTaskSet;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)syncDownloadTask:(id)arg1 endedWithResult:(id)arg2;	// IMP=0x0010000000101dbf
- (void)_sharedUserCompanionInfoChangedNotification:(id)arg1;	// IMP=0x0010000000101c05
- (void)_sharedUserPersonalDomainsChangedNotification:(id)arg1;	// IMP=0x001000000010187c
- (void)_sharedUserRemovedNotification:(id)arg1;	// IMP=0x00100000001016bd
- (void)_sharedUserAddedNotification:(id)arg1;	// IMP=0x001000000010152b
- (void)_syncInformationUpdatedForUserNotification:(id)arg1;	// IMP=0x00100000001012a8
- (void)_syncTokenReceivedNotification:(id)arg1;	// IMP=0x0010000000101214
- (void)_startDownloading;	// IMP=0x0010000000101083
- (void)_createDownloadTasksForUser:(id)arg1;	// IMP=0x00100000001008f2
- (void)createDownloadTasksForAllUsersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000010085e
- (void)_triggerBuildSpeechProfileIfRequiredForAssistantId:(id)arg1;	// IMP=0x0010000000100384
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001002c6
- (id)commandsForDomain:(id)arg1;	// IMP=0x001000000010023a
- (id)domains;	// IMP=0x00100000001001d0
- (id)handle;	// IMP=0x00100000001001c7
- (void)clearMuxSyncStatus;	// IMP=0x0010000000100175
- (id)currentMuxSyncStatus;	// IMP=0x00100000001000c9
- (_Bool)_syncCompletedForAssistantId:(id)arg1;	// IMP=0x00100000000ffeff
- (id)assistantIdsWithSyncCompleted;	// IMP=0x00100000000ffe21
- (_Bool)syncInProgressForRefId:(id)arg1;	// IMP=0x00100000000ffd44
- (void)_registerNotificationHandlers;	// IMP=0x00100000000ffb95
- (void)_loadSyncStatusAndPopulateUserIdToCompanionAssistantIdMapWithUser:(id)arg1 cachedMuxSyncStatus:(id)arg2;	// IMP=0x00100000000ffa11
- (void)_loadSyncStatusFromCacheAndPopulateUserIdToCompanionAssistantIdMap;	// IMP=0x00100000000ff91c
- (id)init;	// IMP=0x00100000000ff799

@end

