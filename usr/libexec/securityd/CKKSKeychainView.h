//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSCondition, CKKSIncomingQueueOperation, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSNewTLKOperation, CKKSOperationDependencies, CKKSOutgoingQueueOperation, CKKSProcessReceivedKeysOperation, CKKSReachabilityTracker, CKKSReencryptOutgoingItemsOperation, CKKSResultOperation, CKKSSecDbAdapter, CKKSSynchronizeOperation, CKKSZoneChangeFetcher, NSArray, NSDate, NSDictionary, NSHashTable, NSMutableSet, NSOperation, NSOperationQueue, NSSet, NSString, OctagonStateMachine, OctagonStateMultiStateArrivalWatcher, TPSyncingPolicy;
@protocol OS_dispatch_queue, OTPersonaAdapter;

@interface CKKSKeychainView : NSObject
{
    _Bool _keyStateMachineRefetched;	// 8 = 0x8
    _Bool _keyStateFullRefetchRequested;	// 9 = 0x9
    _Bool _initiatedLocalScan;	// 10 = 0xa
    _Bool _itemModificationsBeforePolicyLoaded;	// 11 = 0xb
    _Bool _halted;	// 12 = 0xc
    _Bool _havoc;	// 13 = 0xd
    long long _accountStatus;	// 16 = 0x10
    CKContainer *_container;	// 24 = 0x18
    CKKSAccountStateTracker *_accountTracker;	// 32 = 0x20
    CKKSReachabilityTracker *_reachabilityTracker;	// 40 = 0x28
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    CKKSCondition *_loggedIn;	// 64 = 0x40
    CKKSCondition *_loggedOut;	// 72 = 0x48
    CKKSCondition *_accountStateKnown;	// 80 = 0x50
    long long _trustStatus;	// 88 = 0x58
    CKKSCondition *_trustStatusKnown;	// 96 = 0x60
    CKKSLockStateTracker *_lockStateTracker;	// 104 = 0x68
    OctagonStateMachine *_stateMachine;	// 112 = 0x70
    id <OTPersonaAdapter> _personaAdapter;	// 120 = 0x78
    CKKSZoneChangeFetcher *_zoneChangeFetcher;	// 128 = 0x80
    CKKSNearFutureScheduler *_suggestTLKUpload;	// 136 = 0x88
    CKKSNearFutureScheduler *_outgoingQueueOperationScheduler;	// 144 = 0x90
    CKKSNearFutureScheduler *_outgoingQueuePriorityOperationScheduler;	// 152 = 0x98
    CKKSIncomingQueueOperation *_lastIncomingQueueOperation;	// 160 = 0xa0
    CKKSNewTLKOperation *_lastNewTLKOperation;	// 168 = 0xa8
    CKKSOutgoingQueueOperation *_lastOutgoingQueueOperation;	// 176 = 0xb0
    CKKSProcessReceivedKeysOperation *_lastProcessReceivedKeysOperation;	// 184 = 0xb8
    CKKSReencryptOutgoingItemsOperation *_lastReencryptOutgoingItemsOperation;	// 192 = 0xc0
    CKKSSynchronizeOperation *_lastSynchronizeOperation;	// 200 = 0xc8
    CKKSResultOperation *_lastFixupOperation;	// 208 = 0xd0
    NSOperation *_holdOutgoingQueueOperation;	// 216 = 0xd8
    NSOperation *_holdIncomingQueueOperation;	// 224 = 0xe0
    NSOperation *_holdLocalSynchronizeOperation;	// 232 = 0xe8
    NSString *_zoneName;	// 240 = 0xf0
    CKKSOperationDependencies *_operationDependencies;	// 248 = 0xf8
    CKKSCondition *_policyLoaded;	// 256 = 0x100
    OctagonStateMultiStateArrivalWatcher *_priorityViewsProcessed;	// 264 = 0x108
    CKKSResultOperation *_resultsOfNextIncomingQueueOperationOperation;	// 272 = 0x110
    NSHashTable *_outgoingQueueOperations;	// 280 = 0x118
    NSMutableSet *_resyncRecordsSeen;	// 288 = 0x120
    CKKSSecDbAdapter *_databaseProvider;	// 296 = 0x128
    NSOperationQueue *_operationQueue;	// 304 = 0x130
    CKKSResultOperation *_accountLoggedInDependency;	// 312 = 0x138
    NSArray *_currentTrustStates;	// 320 = 0x140
    NSSet *_viewAllowList;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x002000000018591c
@property _Bool havoc; // @synthesize havoc=_havoc;
@property(retain) NSSet *viewAllowList; // @synthesize viewAllowList=_viewAllowList;
@property(retain) NSArray *currentTrustStates; // @synthesize currentTrustStates=_currentTrustStates;
@property _Bool halted; // @synthesize halted=_halted;
@property(retain) CKKSResultOperation *accountLoggedInDependency; // @synthesize accountLoggedInDependency=_accountLoggedInDependency;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) CKKSSecDbAdapter *databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(retain) NSMutableSet *resyncRecordsSeen; // @synthesize resyncRecordsSeen=_resyncRecordsSeen;
@property(retain) NSHashTable *outgoingQueueOperations; // @synthesize outgoingQueueOperations=_outgoingQueueOperations;
@property(retain) CKKSResultOperation *resultsOfNextIncomingQueueOperationOperation; // @synthesize resultsOfNextIncomingQueueOperationOperation=_resultsOfNextIncomingQueueOperationOperation;
@property _Bool itemModificationsBeforePolicyLoaded; // @synthesize itemModificationsBeforePolicyLoaded=_itemModificationsBeforePolicyLoaded;
@property(retain) OctagonStateMultiStateArrivalWatcher *priorityViewsProcessed; // @synthesize priorityViewsProcessed=_priorityViewsProcessed;
@property(retain) CKKSCondition *policyLoaded; // @synthesize policyLoaded=_policyLoaded;
@property(readonly) CKKSOperationDependencies *operationDependencies; // @synthesize operationDependencies=_operationDependencies;
@property _Bool initiatedLocalScan; // @synthesize initiatedLocalScan=_initiatedLocalScan;
@property(readonly) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain) NSOperation *holdLocalSynchronizeOperation; // @synthesize holdLocalSynchronizeOperation=_holdLocalSynchronizeOperation;
@property(retain) NSOperation *holdIncomingQueueOperation; // @synthesize holdIncomingQueueOperation=_holdIncomingQueueOperation;
@property(retain) NSOperation *holdOutgoingQueueOperation; // @synthesize holdOutgoingQueueOperation=_holdOutgoingQueueOperation;
@property(retain) CKKSResultOperation *lastFixupOperation; // @synthesize lastFixupOperation=_lastFixupOperation;
@property(retain) CKKSSynchronizeOperation *lastSynchronizeOperation; // @synthesize lastSynchronizeOperation=_lastSynchronizeOperation;
@property(retain) CKKSReencryptOutgoingItemsOperation *lastReencryptOutgoingItemsOperation; // @synthesize lastReencryptOutgoingItemsOperation=_lastReencryptOutgoingItemsOperation;
@property(retain) CKKSProcessReceivedKeysOperation *lastProcessReceivedKeysOperation; // @synthesize lastProcessReceivedKeysOperation=_lastProcessReceivedKeysOperation;
@property(retain) CKKSOutgoingQueueOperation *lastOutgoingQueueOperation; // @synthesize lastOutgoingQueueOperation=_lastOutgoingQueueOperation;
@property(retain) CKKSNewTLKOperation *lastNewTLKOperation; // @synthesize lastNewTLKOperation=_lastNewTLKOperation;
@property(retain) CKKSIncomingQueueOperation *lastIncomingQueueOperation; // @synthesize lastIncomingQueueOperation=_lastIncomingQueueOperation;
@property(retain) CKKSNearFutureScheduler *outgoingQueuePriorityOperationScheduler; // @synthesize outgoingQueuePriorityOperationScheduler=_outgoingQueuePriorityOperationScheduler;
@property(retain) CKKSNearFutureScheduler *outgoingQueueOperationScheduler; // @synthesize outgoingQueueOperationScheduler=_outgoingQueueOperationScheduler;
@property(retain) CKKSNearFutureScheduler *suggestTLKUpload; // @synthesize suggestTLKUpload=_suggestTLKUpload;
@property(retain) CKKSZoneChangeFetcher *zoneChangeFetcher; // @synthesize zoneChangeFetcher=_zoneChangeFetcher;
@property _Bool keyStateFullRefetchRequested; // @synthesize keyStateFullRefetchRequested=_keyStateFullRefetchRequested;
@property _Bool keyStateMachineRefetched; // @synthesize keyStateMachineRefetched=_keyStateMachineRefetched;
@property(retain) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(readonly) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain) CKKSCondition *trustStatusKnown; // @synthesize trustStatusKnown=_trustStatusKnown;
@property long long trustStatus; // @synthesize trustStatus=_trustStatus;
@property(retain) CKKSCondition *accountStateKnown; // @synthesize accountStateKnown=_accountStateKnown;
@property(retain) CKKSCondition *loggedOut; // @synthesize loggedOut=_loggedOut;
@property(retain) CKKSCondition *loggedIn; // @synthesize loggedIn=_loggedIn;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(readonly) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSAccountStateTracker *accountTracker; // @synthesize accountTracker=_accountTracker;
@property(readonly) CKContainer *container; // @synthesize container=_container;
@property long long accountStatus; // @synthesize accountStatus=_accountStatus;
- (id)fastStatus:(id)arg1 zoneStateEntry:(id)arg2;	// IMP=0x00100000001850b4
- (id)intransactionSlowStatus:(id)arg1;	// IMP=0x0010000000183ed4
- (void)rpcStatus:(id)arg1 fast:(_Bool)arg2 waitForNonTransientState:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000183b1e
- (id)viewsForPeerID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018394d
- (_Bool)waitUntilReadyForRPCForOperation:(id)arg1 fast:(_Bool)arg2 errorOnNoCloudKitAccount:(_Bool)arg3 errorOnPolicyMissing:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00100000001835a5
- (id)policyDependentViewStateForName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000183296
- (_Bool)waitForPolicy:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000001830f2
- (void)halt;	// IMP=0x0010000000182c98
- (void)cancelAllOperations;	// IMP=0x0010000000182c4b
- (void)cancelPendingOperations;	// IMP=0x0010000000182a83
- (void)waitForOperationsOfClass:(Class)arg1;	// IMP=0x00100000001828dd
- (_Bool)waitUntilAllOperationsAreFinished;	// IMP=0x0010000000182861
- (_Bool)scheduleOperationWithoutDependencies:(id)arg1;	// IMP=0x001000000018275b
- (void)scheduleOperation:(id)arg1;	// IMP=0x001000000018261f
- (_Bool)waitForKeyHierarchyReadiness;	// IMP=0x0010000000182406
- (_Bool)waitForFetchAndIncomingQueueProcessing;	// IMP=0x00100000001822b4
- (_Bool)outgoingQueueEmpty:(id *)arg1;	// IMP=0x001000000018220e
- (void)trustedPeerSetChanged:(id)arg1;	// IMP=0x0010000000182139
- (void)selfPeerChanged:(id)arg1;	// IMP=0x0010000000182091
- (_Bool)shouldRetryAfterFetchError:(id)arg1 zoneID:(id)arg2;	// IMP=0x0010000000181d45
- (_Bool)ckErrorOrPartialError:(id)arg1 isError:(long long)arg2 zoneID:(id)arg3;	// IMP=0x0010000000181b31
- (void)changesFetched:(id)arg1 deletedRecordIDs:(id)arg2 zoneID:(id)arg3 newChangeToken:(id)arg4 moreComing:(_Bool)arg5 resync:(_Bool)arg6;	// IMP=0x00100000001818cd
- (id)participateInFetch:(id)arg1;	// IMP=0x0010000000181793
- (_Bool)_onQueueZoneIsReadyForFetching:(id)arg1;	// IMP=0x0010000000181297
- (_Bool)zoneIsReadyForFetching:(id)arg1;	// IMP=0x00100000001811ac
- (void)_onqueuePrioritizePriorityViews;	// IMP=0x0010000000180e06
- (id)viewStateForName:(id)arg1;	// IMP=0x0010000000180d8c
- (void)setSyncingViewsAllowList:(id)arg1;	// IMP=0x0010000000180d7a
- (id)createViewState:(id)arg1 contextID:(id)arg2 zoneIsNew:(_Bool)arg3 priorityView:(_Bool)arg4 ckksManagedView:(_Bool)arg5;	// IMP=0x0010000000180a3e
- (void)onqueueCreatePriorityViewsProcessedWatcher;	// IMP=0x00100000001807e4
- (_Bool)setCurrentSyncingPolicy:(id)arg1 policyIsFresh:(_Bool)arg2;	// IMP=0x0010000000180006
- (_Bool)setCurrentSyncingPolicy:(id)arg1;	// IMP=0x001000000017fff2
@property(readonly) TPSyncingPolicy *syncingPolicy;
- (void)endTrustedOperation;	// IMP=0x001000000017ff31
- (void)beginTrustedOperation:(id)arg1 suggestTLKUpload:(id)arg2 requestPolicyCheck:(id)arg3;	// IMP=0x001000000017fd1e
- (void)handleCKLogout;	// IMP=0x001000000017fbec
- (void)handleCKLogin;	// IMP=0x001000000017f9b2
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x001000000017f519
- (long long)accountStatusFromCKAccountInfo:(id)arg1;	// IMP=0x001000000017f4b5
- (id)createAccountLoggedInDependency:(id)arg1;	// IMP=0x001000000017f394
- (void)beginCloudKitOperation;	// IMP=0x001000000017f340
- (_Bool)insideSQLTransaction;	// IMP=0x001000000017f2d2
- (void)dispatchSyncWithReadOnlySQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000017f24b
- (void)dispatchSyncWithSQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000017f1c4
- (_Bool)_onqueueResetAllInflightOQE:(id *)arg1;	// IMP=0x001000000017ebd6
- (id)resyncLocal;	// IMP=0x001000000017eb5b
- (id)resyncWithCloud;	// IMP=0x001000000017eae0
- (void)xpc24HrNotification;	// IMP=0x001000000017ea9c
- (void)pcsMirrorKeysForServices:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000017e94c
- (void)toggleHavoc:(CDUnknownBlockType)arg1;	// IMP=0x001000000017e85a
- (id)updateDeviceState:(_Bool)arg1 waitForKeyHierarchyInitialization:(unsigned long long)arg2 ckoperationGroup:(id)arg3;	// IMP=0x001000000017e678
- (void)scanLocalItems;	// IMP=0x001000000017e634
- (id)rpcWaitForPriorityViewProcessing;	// IMP=0x001000000017e539
- (id)rpcProcessIncomingQueue:(id)arg1 errorOnClassAFailure:(_Bool)arg2;	// IMP=0x001000000017e217
- (id)rpcFetchAndProcessIncomingQueue:(id)arg1 because:(id)arg2 errorOnClassAFailure:(_Bool)arg3;	// IMP=0x001000000017d911
- (id)rpcFetchBecause:(id)arg1;	// IMP=0x001000000017d2a8
- (id)resultsOfNextProcessIncomingQueueOperation;	// IMP=0x001000000017d18c
- (void)_onqueueProcessOutgoingQueue:(id)arg1 priorityRush:(_Bool)arg2;	// IMP=0x001000000017cedc
- (id)rpcProcessOutgoingQueue:(id)arg1 operationGroup:(id)arg2;	// IMP=0x001000000017caf4
- (id)findFirstPendingOperation:(id)arg1 ofClass:(Class)arg2;	// IMP=0x001000000017c92f
- (id)findFirstPendingOperation:(id)arg1;	// IMP=0x001000000017c91b
- (id)viewsRequiringTLKUpload;	// IMP=0x001000000017c820
- (void)receiveTLKUploadRecords:(id)arg1;	// IMP=0x001000000017c6c2
- (id)findKeySets:(_Bool)arg1;	// IMP=0x001000000017c53e
- (void)getCurrentItemForAccessGroup:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x001000000017bfbf
- (void)unsetCurrentItemsForAccessGroup:(id)arg1 identifiers:(id)arg2 viewHint:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x001000000017b98f
- (void)setCurrentItemForAccessGroup:(id)arg1 hash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 replacing:(id)arg6 hash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x001000000017b348
- (void)handleKeychainEventDbConnection:(struct __OpaqueSecDbConnection *)arg1 source:(unsigned long long)arg2 added:(struct SecDbItem *)arg3 deleted:(struct SecDbItem *)arg4 rateLimiter:(id)arg5;	// IMP=0x001000000017a2e9
- (void)notifyPasswordsOrPCSChangedForAddedItem:(struct SecDbItem *)arg1 modified:(struct SecDbItem *)arg2 deleted:(struct SecDbItem *)arg3;	// IMP=0x001000000017a27c
- (void)notifyForItem:(struct SecDbItem *)arg1;	// IMP=0x001000000017a093
- (_Bool)_onqueueOtherDevicesReportHavingTLKs:(id)arg1 trustStates:(id)arg2;	// IMP=0x0010000000178d72
- (id)tlkMissingOperation:(id)arg1;	// IMP=0x0010000000178c5e
@property(readonly) NSDate *earliestFetchTime;
@property(readonly) NSSet *viewList;
- (id)viewsInState:(id)arg1;	// IMP=0x0010000000178654
- (_Bool)anyViewsInState:(id)arg1;	// IMP=0x001000000017847a
- (id)loseTrustOperation:(id)arg1;	// IMP=0x0010000000178366
- (id)becomeReadyOperation:(id)arg1;	// IMP=0x0010000000178252
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x00100000001743da
- (void)_onqueuePokeKeyStateMachine;	// IMP=0x0010000000174366
- (void)keyStateMachineRequestProcess;	// IMP=0x0010000000174322
- (id)rpcResetCloudKit:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000173c40
- (id)rpcResetLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000173795
- (id)performInitializedOperation;	// IMP=0x00100000001736b9
@property(readonly) NSDictionary *stateConditions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithContainer:(id)arg1 contextID:(id)arg2 activeAccount:(id)arg3 accountTracker:(id)arg4 lockStateTracker:(id)arg5 reachabilityTracker:(id)arg6 savedTLKNotifier:(id)arg7 cloudKitClassDependencies:(id)arg8 personaAdapter:(id)arg9;	// IMP=0x0010000000172a04
- (void)modifyTLKSharesForExternallyManagedView:(id)arg1 adding:(id)arg2 deleting:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b3375
- (void)loadKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b3297
- (void)fetchCloudKitExternallyManagedViewKeyHierarchy:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b30ef
- (void)fetchExternallyManagedViewKeyHierarchy:(id)arg1 forceFetch:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b2f7b
- (void)proposeTLKForExternallyManagedView:(id)arg1 proposedTLK:(id)arg2 wrappedOldTLK:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000001b2c0a
- (void)resetExternallyManagedCloudKitView:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b2a7f
- (id)externalManagedViewForRPC:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b26e4

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

