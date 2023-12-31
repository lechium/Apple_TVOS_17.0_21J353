//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CPLEngineLibrary, CPLInMemoryResourceDownloadTask, NSCountedSet, NSObject, NSString;
@protocol CPLEngineTransportRampingRequestTask, OS_dispatch_queue;

@interface CPLDirectLibraryManager : CPLPlatformObject
{
    _Bool _ownsLibrary;	// 8 = 0x8
    _Bool _closing;	// 9 = 0x9
    unsigned long long _foregroundCalls;	// 16 = 0x10
    _Bool _foregroundCallsHaveBeenQuiet;	// 24 = 0x18
    unsigned long long _significantWorkCalls;	// 32 = 0x20
    NSCountedSet *_disablingReasons;	// 40 = 0x28
    unsigned long long _disablingMinglingCount;	// 48 = 0x30
    id <CPLEngineTransportRampingRequestTask> _currentRampingRequest;	// 56 = 0x38
    CPLInMemoryResourceDownloadTask *_currentInMemoryDownloadTask;	// 64 = 0x40
    CPLEngineLibrary *_engineLibrary;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_clientQueue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000a54c8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
- (void)engineLibrary:(id)arg1 getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a53e0
- (void)engineLibrary:(id)arg1 getStatusWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a5342
- (id)ownerNameForEngineLibrary:(id)arg1;	// IMP=0x00100000000a52c5
- (void)engineLibrary:(id)arg1 noteClientIsInForeground:(_Bool)arg2;	// IMP=0x00100000000a5256
- (void)barrier;	// IMP=0x00100000000a5250
- (void)unblockEngineElementOnce:(id)arg1;	// IMP=0x00100000000a51d9
- (void)unblockEngineElement:(id)arg1;	// IMP=0x00100000000a5162
- (void)blockEngineElement:(id)arg1;	// IMP=0x00100000000a50eb
- (void)reportMiscInformation:(id)arg1;	// IMP=0x00100000000a4a0b
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;	// IMP=0x00100000000a4978
- (_Bool)isLibraryManagerForEngineLibrary:(id)arg1;	// IMP=0x00100000000a48c1
- (id)displayableNameForEngineLibrary:(id)arg1;	// IMP=0x00100000000a47c0
- (void)addDropDerivativesRecipe:(id)arg1 writeToUserDefaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a472e
- (void)provideCloudResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a4711
- (void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a46f4
- (void)provideScopeChangeForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a46d7
- (void)requestClientToPushAllChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a466e
- (void)forceBackupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a45fe
- (void)addInfoToLog:(id)arg1;	// IMP=0x00100000000a4552
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a3aa7
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a341c
- (void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a280c
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a27ef
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a27d2
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a27b5
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a1f72
- (_Bool)_resetStore:(id)arg1 reason:(id)arg2 resetSelector:(SEL)arg3 error:(id *)arg4;	// IMP=0x00100000000a1efb
@property(readonly, copy) NSString *description;
- (void)engineLibrary:(id)arg1 pushAllChangesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1baf
- (void)engineLibrary:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a18df
- (void)engineLibrary:(id)arg1 sizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg2 sizeOfOriginalResourcesToUpload:(unsigned long long)arg3 numberOfImages:(unsigned long long)arg4 numberOfVideos:(unsigned long long)arg5 numberOfOtherItems:(unsigned long long)arg6;	// IMP=0x00100000000a1796
- (void)engineLibrary:(id)arg1 uploadTask:(id)arg2 didFinishWithError:(id)arg3;	// IMP=0x00100000000a15b9
- (void)engineLibrary:(id)arg1 uploadTask:(id)arg2 didProgress:(float)arg3;	// IMP=0x00100000000a13f7
- (void)engineLibrary:(id)arg1 didStartUploadTask:(id)arg2;	// IMP=0x00100000000a1256
- (void)engineLibrary:(id)arg1 didFailBackgroundDownloadOfResource:(id)arg2;	// IMP=0x00100000000a0fb8
- (void)engineLibrary:(id)arg1 didDownloadResourceInBackground:(id)arg2;	// IMP=0x00100000000a0d2c
- (void)engineLibraryHasStatusChanges:(id)arg1;	// IMP=0x00100000000a0ad4
- (void)engineLibraryHasChangesInPullQueue:(id)arg1;	// IMP=0x00100000000a0893
- (void)engineLibrary:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x00100000000a07df
- (void)getTargetsForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a0443
- (void)testKey:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a006b
- (void)markLibraryManagerAsInvalid;	// IMP=0x001000000009ff53
- (void)compactFileCacheWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009fd48
- (void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009f11f
- (void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009f102
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009f0e8
- (void)_deleteResources:(id)arg1 dryRun:(_Bool)arg2 checkServerIfNecessary:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009c6cd
- (id)safeResourcesToDeleteFromProposedResources:(id)arg1 realPrune:(_Bool)arg2 checkServerIfNecessary:(_Bool)arg3 allowUnconfirmed:(_Bool)arg4 resourcesToCheckOnServer:(id *)arg5 targetScopeMapping:(id)arg6 unsafeResources:(id)arg7;	// IMP=0x001000000009ad96
- (void)checkServerForResources:(id)arg1 targetMapping:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009ab02
- (id)_localResourceFromCloudResourcesAndErrors:(id)arg1 usingMapping:(id)arg2;	// IMP=0x001000000009a949
- (id)_localResourceFromCloudResources:(id)arg1 usingMapping:(id)arg2;	// IMP=0x001000000009a72c
- (id)_cloudResourcesToLocalResourcesWithLocalResources:(id)arg1 targetMapping:(id)arg2;	// IMP=0x001000000009a328
- (void)getScopeStatusCountsForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000099d21
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(_Bool)arg2;	// IMP=0x00100000000997f1
- (void)acknowledgeChangedStatuses:(id)arg1;	// IMP=0x001000000009949e
- (void)getChangedStatusesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000099233
- (void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000098f96
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000098e22
- (void)enableMingling;	// IMP=0x0010000000098cf0
- (void)disableMingling;	// IMP=0x0010000000098c81
- (void)noteClientIsEndingSignificantWork;	// IMP=0x0010000000098b4f
- (void)noteClientIsBeginningSignificantWork;	// IMP=0x0010000000098aea
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x0010000000098992
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000988c3
- (void)enableSynchronizationWithReason:(id)arg1;	// IMP=0x001000000009874b
- (void)disableSynchronizationWithReason:(id)arg1;	// IMP=0x00100000000986b1
- (void)noteClientReceivedNotificationOfServerChanges;	// IMP=0x00100000000985fc
- (void)noteClientIsInBackground;	// IMP=0x00100000000984cf
- (void)noteClientIsInForegroundQuietly:(_Bool)arg1;	// IMP=0x00100000000983df
- (void)startSyncSession;	// IMP=0x00100000000983c2
- (void)resetStatus;	// IMP=0x0010000000098306
- (void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000972a7
- (void)_dispatchForceSyncForScopeIdentifiers:(id)arg1 errors:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000097035
- (void)queryUserDetailsForShareParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000096b0a
- (void)sharedLibraryRampCheckWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000096650
- (void)getStatusForPendingRecordsSharedToScopeWithIdentifier:(id)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000095941
- (void)removeParticipants:(id)arg1 fromSharedScopeWithIdentifier:(id)arg2 retentionPolicy:(long long)arg3 exitSource:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000932ea
- (void)startExitFromSharedScopeWithIdentifier:(id)arg1 retentionPolicy:(long long)arg2 exitSource:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000091f1a
- (void)fetchExistingSharedLibraryScopeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009137a
- (void)_fetchExistingSharedLibraryScopeWithProgress:(id)arg1 blocker:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000090b7b
- (void)acceptSharedScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008fa83
- (void)fetchSharedScopeFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008ec8f
- (void)refreshScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008d66d
- (void)deleteScopeWithIdentifier:(id)arg1 forced:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c973
- (void)updateShareForScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008b53b
- (void)createScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089f5d
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000089b9a
- (void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089719
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000887d8
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000088198
- (void)getStreamingURLForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 clientBundleID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000087385
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 options:(id)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000086552
- (void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000086229
- (void)deactivateScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000085b28
- (void)activateScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000853dd
- (void);	// IMP=0x0010000000084fc3
- (void)enableMainScopeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000084ba9
- (_Bool)_isManagementLibraryManager;	// IMP=0x0010000000084b19
- (void)deactivateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000084867
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000083f5a
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000082574
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000000824d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

