//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSyncOperation, HMDSyncOperationQueue, HMFExponentialBackoffTimer, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol HMDSyncOperationManagerDataSource, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDSyncOperationManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_cloudVerifyAccountOperations;	// 16 = 0x10
    NSMutableArray *_cloudZonePushOperationQueues;	// 24 = 0x18
    NSMutableArray *_cloudZoneFetchOperationQueues;	// 32 = 0x20
    NSMutableArray *_cloudCancelPauseOperations;	// 40 = 0x28
    NSMutableArray *_cloudQueryDatabaseOperations;	// 48 = 0x30
    NSMutableArray *_cloudPostFetchOperations;	// 56 = 0x38
    NSMutableDictionary *_cloudZonePushOperationQueuesMap;	// 64 = 0x40
    NSMutableDictionary *_cloudZoneFetchOperationQueuesMap;	// 72 = 0x48
    NSObject<OS_os_log> *_logger;	// 80 = 0x50
    _Bool _pauseQueue;	// 88 = 0x58
    _Bool _syncLoopDialogDisplayed;	// 89 = 0x59
    HMDSyncOperationQueue *_cloudPushOperations;	// 96 = 0x60
    HMDSyncOperationQueue *_cloudFetchOperations;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_workQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_clientQueue;	// 120 = 0x78
    long long _pauseCloudPushLevel;	// 128 = 0x80
    HMFExponentialBackoffTimer *_cloudPushDelayTimer;	// 136 = 0x88
    HMDSyncOperation *_currentOperation;	// 144 = 0x90
    id <HMDSyncOperationManagerDataSource> _dataSource;	// 152 = 0x98
    CDUnknownBlockType _timerFactory;	// 160 = 0xa0
}

+ (id)logCategory;	// IMP=0x0010000000743627
- (void).cxx_destruct;	// IMP=0x000000000073f16f
@property(readonly) CDUnknownBlockType timerFactory; // @synthesize timerFactory=_timerFactory;
@property(readonly, nonatomic) __weak id <HMDSyncOperationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) HMDSyncOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(nonatomic, getter=wasSyncLoopDialogDisplayed) _Bool syncLoopDialogDisplayed; // @synthesize syncLoopDialogDisplayed=_syncLoopDialogDisplayed;
@property(retain, nonatomic) HMFExponentialBackoffTimer *cloudPushDelayTimer; // @synthesize cloudPushDelayTimer=_cloudPushDelayTimer;
@property(nonatomic) long long pauseCloudPushLevel; // @synthesize pauseCloudPushLevel=_pauseCloudPushLevel;
@property(nonatomic) _Bool pauseQueue; // @synthesize pauseQueue=_pauseQueue;
@property(readonly, copy) NSArray *cloudZoneFetchOperationQueues; // @synthesize cloudZoneFetchOperationQueues=_cloudZoneFetchOperationQueues;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000073efa4
- (void)resetCloudPushTimer:(id)arg1;	// IMP=0x000000000073eeec
- (void)killCloudPushAndResume;	// IMP=0x000000000073ee7b
- (void)resumeCloudPush;	// IMP=0x000000000073ee0a
- (void)pauseCloudPush;	// IMP=0x000000000073ed99
- (void)kick;	// IMP=0x000000000073ed28
- (void)resume;	// IMP=0x000000000073ecb7
- (void)pause;	// IMP=0x000000000073ec46
- (void)_handleCancelledOperations:(id)arg1;	// IMP=0x000000000073eb8e
- (void)_handleNextOperation;	// IMP=0x000000000073e78d
- (id)_dequeueNextOperation;	// IMP=0x000000000073e134
- (void)cancelOperations;	// IMP=0x000000000073e0c3
- (void)pauseAndWaitForCurrentOperationCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000073dfad
- (void)addOperationRespectingOptions:(id)arg1 withDelay:(double)arg2;	// IMP=0x000000000073dee0
- (void)_dropWithoutAlreadyScheduledOperation:(id)arg1;	// IMP=0x000000000073dd71
- (void)addOperation:(id)arg1 withDelay:(double)arg2;	// IMP=0x000000000073dbbc
- (void)addOperation:(id)arg1;	// IMP=0x000000000073dba7
- (void)_reportPossibleSyncLoop;	// IMP=0x000000000073da20
- (id)dumpState;	// IMP=0x000000000073d234
@property(readonly, copy) NSString *description;
- (id)popCloudPostFetchOperation;	// IMP=0x000000000073d098
- (_Bool)dropCloudPostFetchOperationsIfPresent;	// IMP=0x000000000073ceb0
- (_Bool)addCloudPostFetchOperationIfNonePresent:(id)arg1;	// IMP=0x000000000073ce0e
- (id)popCloudQueryDatabaseOperation;	// IMP=0x000000000073cd6e
- (_Bool)addCloudQueryDatabaseOperationIfNonePresent:(id)arg1;	// IMP=0x000000000073cccc
- (id)popCloudCancelPauseOperation;	// IMP=0x000000000073cc2c
- (void)addCloudCancelPauseOperation:(id)arg1;	// IMP=0x000000000073cbb6
- (_Bool)popCloudZoneFetchOperationAndMoveQueueToEnd:(id *)arg1;	// IMP=0x000000000073c900
- (void)removeCloudZoneFetchOperationQueue:(id)arg1;	// IMP=0x000000000073c844
- (_Bool)addCloudZoneFetchOperation:(id)arg1 delay:(double)arg2;	// IMP=0x000000000073c703
- (id)popCloudZonePushOperationAndMoveQueueToEnd;	// IMP=0x000000000073c466
- (void)removeCloudZonePushOperationQueue:(id)arg1;	// IMP=0x000000000073c3aa
- (_Bool)addCloudZonePushOperation:(id)arg1 delay:(double)arg2;	// IMP=0x000000000073c21a
- (id)popCloudVerifyAccountOperation;	// IMP=0x000000000073c17a
- (void)addCloudVerifyAccountOperation:(id)arg1;	// IMP=0x000000000073c104
@property(readonly, copy) NSArray *cloudPostFetchOperations;
@property(readonly, copy) NSArray *cloudQueryDatabaseOperations;
@property(readonly, copy) NSArray *cloudCancelPauseOperations;
- (id)cloudZoneFetchOperations;	// IMP=0x000000000073bf84
@property(readonly, copy) NSArray *cloudZonePushOperationQueues;
@property(readonly) HMDSyncOperationQueue *cloudFetchOperations; // @synthesize cloudFetchOperations=_cloudFetchOperations;
@property(readonly, copy) NSArray *cloudVerifyAccountOperations;
@property(readonly) HMDSyncOperationQueue *cloudPushOperations; // @synthesize cloudPushOperations=_cloudPushOperations;
- (id)initWithClientQueue:(id)arg1 dataSource:(id)arg2 timerFactory:(CDUnknownBlockType)arg3;	// IMP=0x000000000073ba2d
- (id)initWithClientQueue:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000000073ba14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

