//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CKAccountInfo, CKRecordZoneID, CPLCloudKitCoordinator, CPLCloudKitOperationsTracker, CPLCloudKitSimpleCache, CPLCloudKitTaskGroupThrottler, CPLDuetTicketProvider, NSArray, NSDate, NSDictionary, NSError, NSIndexSet, NSMutableSet, NSObject, NSOperationQueue, NSString;
@protocol CPLSharedRecordPropertyMapping, NSObject, OS_dispatch_queue;

@interface CPLCloudKitTransport : CPLPlatformObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSOperationQueue *_workOperationQueue;	// 16 = 0x10
    CPLCloudKitOperationsTracker *_operationTracker;	// 24 = 0x18
    _Bool _mightRejectVideoStreaming;	// 32 = 0x20
    NSIndexSet *_rejectedVideoStreamingIntents;	// 40 = 0x28
    _Bool _rejectVideoStreamingAtContentLevel;	// 48 = 0x30
    NSArray *_rejectedVideoStreamingIntentNames;	// 56 = 0x38
    NSDictionary *_operationGroupMapping;	// 64 = 0x40
    NSMutableSet *_invalidaOperationGroupMappingEntries;	// 72 = 0x48
    CPLCloudKitSimpleCache *_streamingContentItemCache;	// 80 = 0x50
    CPLCloudKitTaskGroupThrottler *_resourceDownloadGate;	// 88 = 0x58
    CPLCloudKitTaskGroupThrottler *_streamingGate;	// 96 = 0x60
    CKRecordZoneID *_overridePrimarySyncZoneID;	// 104 = 0x68
    Class _overrideZoneIdentificationClass;	// 112 = 0x70
    NSString *_overrideNormalScopeIdentifier;	// 120 = 0x78
    CKRecordZoneID *_overrideNormalZoneID;	// 128 = 0x80
    id <NSObject> _identityChangeWatcher;	// 136 = 0x88
    id <NSObject> _accountInfoWatcher;	// 144 = 0x90
    unsigned long long _accountInfoFetchGeneration;	// 152 = 0x98
    NSDate *_lastAccountInfoUpdateDate;	// 160 = 0xa0
    NSString *_lastDisablingReasonBecauseOfAccountStatus;	// 168 = 0xa8
    NSString *_universeName;	// 176 = 0xb0
    CKAccountInfo *_accountInfo;	// 184 = 0xb8
    NSDate *_lastAccountInfoUpdateRequestDate;	// 192 = 0xc0
    _Bool _opened;	// 200 = 0xc8
    CDUnknownBlockType _shouldIgnoreZoneWithZoneID;	// 208 = 0xd0
    CPLCloudKitCoordinator *_coordinator;	// 216 = 0xd8
    CPLDuetTicketProvider *_duetTicketProvider;	// 224 = 0xe0
    NSDate *_significantWorkBeginDate;	// 232 = 0xe8
    NSError *_errorForAllOperations;	// 240 = 0xf0
}

+ (id)_errorsByTaskForTasksByRecordId:(id)arg1 fromUnderlyingError:(id)arg2;	// IMP=0x002000000010a9e5
+ (id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2;	// IMP=0x001000000010a7f3
+ (_Bool)allowsUserInitiatedOperationsOverExpensiveNetwork;	// IMP=0x0010000000109679
+ (_Bool)allowsSyncOverExpensiveNetwork;	// IMP=0x00100000001095ca
+ (_Bool)allowsSyncOverCellular;	// IMP=0x001000000010951b
+ (void)setMainScopeZoneName:(id)arg1;	// IMP=0x0010000000102b12
+ (id)mainScopeZoneName;	// IMP=0x0010000000102af3
+ (void)configureForTestingInUniverseNamed:(id)arg1;	// IMP=0x0010000000102a6b
+ (void)initialize;	// IMP=0x001000000010291c
- (void).cxx_destruct;	// IMP=0x002000000010f260
@property(retain) NSError *errorForAllOperations; // @synthesize errorForAllOperations=_errorForAllOperations;
@property(retain, nonatomic) NSDate *significantWorkBeginDate; // @synthesize significantWorkBeginDate=_significantWorkBeginDate;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) CPLDuetTicketProvider *duetTicketProvider; // @synthesize duetTicketProvider=_duetTicketProvider;
@property(readonly) CPLCloudKitCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(copy, nonatomic) CDUnknownBlockType shouldIgnoreZoneWithZoneID; // @synthesize shouldIgnoreZoneWithZoneID=_shouldIgnoreZoneWithZoneID;
@property _Bool opened; // @synthesize opened=_opened;
@property(readonly, nonatomic) CPLCloudKitOperationsTracker *operationTracker; // @synthesize operationTracker=_operationTracker;
@property(readonly) NSString *cloudKitClientIdentifier;
- (_Bool)shouldIgnoreZoneWithZoneID:(id)arg1;	// IMP=0x001000000010f110
- (id)databaseForOperationType:(long long)arg1 relativeToOperationType:(long long)arg2;	// IMP=0x001000000010f0f0
- (_Bool)shouldRunOperationsWithError:(id *)arg1;	// IMP=0x001000000010f0a3
- (void)processTaskErrorIfNeeded:(id)arg1 forTask:(id)arg2;	// IMP=0x001000000010ea34
- (void)_noteContainerHasBeenWiped;	// IMP=0x001000000010e8db
- (void)_failAllFutureOperationsWithContainerHasBeenWipedError;	// IMP=0x001000000010e72e
@property(readonly, nonatomic) _Bool canBoostBackgroundOperations;
@property(readonly, nonatomic) _Bool canBoostOperations;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic, getter=isNetworkConnected) _Bool networkConnected;
- (void)associateMetric:(id)arg1;	// IMP=0x001000000010e556
- (void)launchOperation:(id)arg1 type:(long long)arg2;	// IMP=0x001000000010e42e
- (id)newOperationConfiguration;	// IMP=0x001000000010e411
- (id)zoneIdentificationForCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x001000000010e2f5
- (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3 currentUserID:(id)arg4;	// IMP=0x001000000010e1ba
- (id)recordsToFetchToIdentifyCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 currentUserID:(id)arg3;	// IMP=0x001000000010e070
- (id)defaultZoneIDForMainScope;	// IMP=0x001000000010e000
- (id)mainScopeZoneIDFromZoneIDs:(id)arg1;	// IMP=0x001000000010df16
- (_Bool)isZoneIDForMainScopeIdentifier:(id)arg1;	// IMP=0x001000000010de6e
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x001000000010de5c
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x001000000010ddb8
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x001000000010dc84
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x001000000010db6b
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x001000000010daed
- (id)concreteScopeFromTransportScope:(id)arg1;	// IMP=0x001000000010dad4
- (id)transportScopeFromConcreteScope:(id)arg1;	// IMP=0x001000000010dabf
- (void)coordinator:(id)arg1 receivedPushNotification:(id)arg2;	// IMP=0x001000000010d8e6
- (void)coordinator:(id)arg1 provideCKAssetWithRecordID:(id)arg2 fieldName:(id)arg3 recordType:(id)arg4 signature:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000010c1ce
- (void)_withTempCKAssetForData:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000010c04c
- (id)_tempDestinationURLForRecoveredDataWithError:(id *)arg1;	// IMP=0x001000000010bf02
- (void)_cleanTempRecoveredDataURL:(id)arg1;	// IMP=0x001000000010bce3
- (void)testKey:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010ba51
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000010b86c
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000010ace6
- (id)componentName;	// IMP=0x001000000010acd9
- (id)tempCKAssetURL;	// IMP=0x001000000010ac53
- (void)_updateWalrusTo:(_Bool)arg1;	// IMP=0x001000000010a787
- (void)_disableSchedulerBecauseAccountIsUnavailableWithReason:(id)arg1;	// IMP=0x001000000010a463
- (void)_enableSchedulerBecauseAccountIsAvailable;	// IMP=0x001000000010a2c0
- (void)_updateStateWithAccountStatus:(long long)arg1;	// IMP=0x001000000010a18d
- (void)_updateStateWithAccountInfo:(id)arg1 walrusEnabledDefault:(id)arg2;	// IMP=0x0010000000109f40
- (void)_updateAccountInfo;	// IMP=0x0010000000109a65
- (void)_forceUpdateAccountInfoWithReason:(id)arg1;	// IMP=0x00100000001098d9
- (void)_stopWatchingAccountInfoChanges;	// IMP=0x00100000001098b8
- (void)_startWatchingAccountInfoChanges;	// IMP=0x0010000000109728
- (id)createReschedulerForSession:(id)arg1;	// IMP=0x0010000000109459
- (void)dropPersistedInitialSyncSession;	// IMP=0x001000000010942d
- (void)findPersistedInitialSyncSession:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000109267
- (id)createGroupForPropagateChanges;	// IMP=0x001000000010918c
- (id)createGroupForQueryUserIdentities;	// IMP=0x00100000001090ab
- (id);	// IMP=0x0010000000108fcd
- (id)createGroupForExitSharedLibrary;	// IMP=0x0010000000108eef
- (id)createGroupForCleanupLibrary;	// IMP=0x0010000000108e11
- (id)createGroupForFetchingExistingSharedScope;	// IMP=0x0010000000108d30
- (id)createGroupForAcceptingLibraryShare;	// IMP=0x0010000000108c4f
- (id)createGroupForFetchingLibraryShare;	// IMP=0x0010000000108b6e
- (id)createGroupForPublishingLibraryShare;	// IMP=0x0010000000108a8d
- (id)createGroupForAcceptingMomentShare;	// IMP=0x00100000001089ac
- (id)createGroupForFetchingMomentShare;	// IMP=0x00100000001088cb
- (id)createGroupForPublishingMomentShare;	// IMP=0x00100000001087ea
- (id)createGroupForPruningCheck;	// IMP=0x0010000000108733
- (id)createGroupForAnalysisDownload;	// IMP=0x0010000000108658
- (id)createGroupForMovieStreamingWithIntent:(unsigned long long)arg1;	// IMP=0x00100000001083f0
- (id)createGroupForDownloadWithIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;	// IMP=0x0010000000108127
- (id)createGroupForWidgetResourcesDownload;	// IMP=0x001000000010810e
- (id)createGroupForResourcesDownload;	// IMP=0x00100000001080f8
- (id)createGroupForThumbnailsDownload;	// IMP=0x001000000010801a
- (id)createGroupForStagedScopeCleanup;	// IMP=0x0010000000107f3f
- (id)createGroupForReshare;	// IMP=0x0010000000107e64
- (id)createGroupForFixUpTasks;	// IMP=0x0010000000107d89
- (id)createGroupForChangeDownload;	// IMP=0x0010000000107cae
- (id)createGroupForChangeUpload;	// IMP=0x0010000000107bd0
- (id)createGroupForLibraryStateCheck;	// IMP=0x0010000000107af5
- (id)createGroupForFetchScopeListChanges;	// IMP=0x0010000000107a1a
- (id)createGroupForTransportScopeRefresh;	// IMP=0x001000000010793c
- (id)createGroupForTransportScopeUpdate;	// IMP=0x0010000000107861
- (id)createGroupForTransportScopeDelete;	// IMP=0x0010000000107786
- (id)createGroupForFeedback;	// IMP=0x00100000001076d2
- (id)createGroupForSetup;	// IMP=0x001000000010761e
- (id)createGroupForWidgetPrefetch;	// IMP=0x0010000000107602
- (id)createGroupForRecoveryDownload;	// IMP=0x00100000001075e6
- (id)createGroupForMemoriesPrefetch;	// IMP=0x00100000001075ca
- (id)createGroupForKeepOriginalsPrefetch;	// IMP=0x00100000001075ae
- (id)createGroupForNonDerivativePrefetch;	// IMP=0x0010000000107592
- (id)createGroupForThumbnailPrefetch;	// IMP=0x00100000001074b7
- (id)createGroupForPrefetch;	// IMP=0x001000000010749b
- (id)createGroupForInitialDownload;	// IMP=0x00100000001073c0
- (id)createGroupForResetSync;	// IMP=0x00100000001072e2
- (id)createGroupForInitialUpload;	// IMP=0x0010000000107204
- (id)createGroupForSendExitStatus;	// IMP=0x0010000000107126
- (id)createGroupAllowsCellular:(_Bool)arg1 allowsExpensiveNetwork:(_Bool)arg2 foreground:(_Bool)arg3 upload:(_Bool)arg4 metadata:(_Bool)arg5;	// IMP=0x001000000010709f
- (void)upgradeFlags:(id)arg1 fromTransportScope:(id)arg2;	// IMP=0x0010000000107012
- (id)transportScopeForUpgradeFromScopeName:(id)arg1;	// IMP=0x0010000000106f70
- (id)scopeNameForTransportScope:(id)arg1;	// IMP=0x0010000000106eef
- (id)descriptionForTransportScope:(id)arg1;	// IMP=0x0010000000106e12
- (id)tentativeConcreteScopeForScope:(id)arg1;	// IMP=0x0010000000106cdf
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;	// IMP=0x0010000000106cc2
- (void)noteClientIsInBackground;	// IMP=0x0010000000106ca0
- (void)noteClientIsInForeground;	// IMP=0x0010000000106c7b
- (void)noteClientIsEndingSignificantWork;	// IMP=0x0010000000106c67
- (void)noteClientIsBeginningSignificantWork;	// IMP=0x0010000000106c50
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x0010000000106bff
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000106a9d
- (void)setIsSignificantWorkPending:(_Bool)arg1;	// IMP=0x001000000010674b
- (id)simpleDescriptionForScopeListSyncAnchor:(id)arg1;	// IMP=0x0010000000106732
- (_Bool)getProposedStagingScopeIdentifier:(id *)arg1 stagingTransportScope:(id *)arg2 forScope:(id)arg3 transportScope:(id)arg4 transportUserIdentifier:(id)arg5;	// IMP=0x0010000000106596
- (id)simpleDescriptionForSyncAnchor:(id)arg1;	// IMP=0x00100000001063ab
- (id)bestErrorForUnderlyingError:(id)arg1;	// IMP=0x0010000000106392
- (_Bool)isResourceDynamic:(id)arg1;	// IMP=0x0010000000106345
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000010628d
- (id)queryUserDetailsTaskForParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001061d5
- (id)cleanupStagedScope:(id)arg1 stagingScope:(id)arg2 destinationScope:(id)arg3 transportScopeMapping:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000001060da
- (id)updateContributorsTaskWithSharedScope:(id)arg1 contributorsUpdates:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000106022
- (id)sharedLibraryServerRampTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000105f88
- (id)fixUpSparseRecordsTaskWithTasks:(id)arg1 transportScopeMapping:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000105ef0
- (id)removeParticipantInSharedLibraryTaskFromSharedScope:(id)arg1 transportScope:(id)arg2 share:(id)arg3 retentionPolicy:(long long)arg4 exitSource:(long long)arg5 userIdentifiersToRemove:(id)arg6 participantIDsToRemove:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x0010000000105dae
- (id)startExitTaskFromSharedScope:(id)arg1 transportScope:(id)arg2 share:(id)arg3 retentionPolicy:(long long)arg4 exitSource:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000105ca2
- (id)fetchExistingSharedLibraryScopeTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000105c08
- (id)acceptTaskForSharedScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000105b23
- (id)fetchTaskForScopeWithShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000105999
- (id)updateShareTaskForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000105895
- (id)createScopeTaskForScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000105785
- (id)inMemoryDownloadTaskForResource:(id)arg1 record:(id)arg2 target:(id)arg3 transportScopeMapping:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000105652
- (id)resourcesDownloadTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001055db
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000105535
- (id)resourceCheckTaskForResources:(id)arg1 targetMapping:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000105433
- (id)getStreamingURLTaskForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 target:(id)arg5 transportScopeMapping:(id)arg6 clientBundleID:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x001000000010529b
- (id)fetchScopeListChangesForScopeListSyncAnchor:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000105203
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 scope:(id)arg2 transportScopeMapping:(id)arg3 currentScopeChange:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000105108
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 scope:(id)arg3 transportScopeMapping:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000105024
- (id)fetchTransportScopeForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000104f37
- (id)getCurrentSyncAnchorWithTransportScope:(id)arg1 scope:(id)arg2 previousScopeChange:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000104e4b
- (id)getScopeInfoWithTransportScope:(id)arg1 scope:(id)arg2 previousScopeChange:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000104d5f
- (id)updateTransportScope:(id)arg1 scope:(id)arg2 scopeChange:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000104c51
- (id)deleteTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000104b5e
- (id)reshareRecordsTaskWithRecords:(id)arg1 sourceScope:(id)arg2 destinationScope:(id)arg3 transportScopeMapping:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000104a83
- (id)uploadBatchTaskForBatch:(id)arg1 scope:(id)arg2 targetMapping:(id)arg3 transportScopeMapping:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000010489f
- (id)fetchRecordsTaskForRecordsWithScopedIdentifiers:(id)arg1 targetMapping:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001047e7
- (id)setupTaskUpdateDisabledFeatures:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000104747
@property(readonly, nonatomic) id <CPLSharedRecordPropertyMapping> propertyMapping;
@property(readonly, nonatomic) Class userIdentifierClass;
@property(readonly, nonatomic) Class transportGroupClass;
@property(readonly, nonatomic) NSString *universeName;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000104483
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001038e6
- (id)duetIdentifier;	// IMP=0x00100000001038d4
- (void)duetTicketProviderBlockedStatusDidChange;	// IMP=0x00100000001037cb
- (void)_updateBudgets;	// IMP=0x0010000000103315
- (id)engineLibrary;	// IMP=0x00100000001032c5
- (void)_configureUniverse;	// IMP=0x0010000000102f31
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000102d61
@property(readonly) _Bool isSystemLibrary;
- (id)_operationGroupNameForName:(id)arg1;	// IMP=0x0010000000102b7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

