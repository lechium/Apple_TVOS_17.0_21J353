//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKFairPlaySessionProvider, GKNetworkRequestManagerSessionDelegate, MISSING_TYPE, NSDictionary, NSMutableDictionary, NSOperationQueue, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface GKNetworkRequestManager : NSObject
{
    _Bool _firstUnlockedState;	// 8 = 0x8
    _Bool _reportedExessiveRequests;	// 9 = 0x9
    _Bool _fairPlaySessionReady;	// 10 = 0xa
    struct os_unfair_lock_s _pendingCallbacksLock;	// 12 = 0xc
    struct os_unfair_lock_s _waitListCallbacksLock;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    NSURLSessionConfiguration *_backgroundConfig;	// 32 = 0x20
    NSURLSession *_backgroundSession;	// 40 = 0x28
    GKNetworkRequestManagerSessionDelegate *_sessionDelegate;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_stateQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 64 = 0x40
    long long _currentState;	// 72 = 0x48
    NSDictionary *_serviceDependancyMappings;	// 80 = 0x50
    NSMutableDictionary *_existingTasks;	// 88 = 0x58
    NSMutableDictionary *_pendingCallbacks;	// 96 = 0x60
    MISSING_TYPE *_inProcessSession;	// 104 = 0x68
    NSURLSessionConfiguration *_inProcessConfig;	// 112 = 0x70
    GKFairPlaySessionProvider *_fairPlaySessionProvider;	// 120 = 0x78
}

+ (id)taskWithRequest:(id)arg1 description:(id)arg2 session:(id)arg3;	// IMP=0x00400000000ef511
+ (id)uuidFromTask:(id)arg1;	// IMP=0x00100000000ef4b3
+ (id)networkRequestFromNsurlTask:(id)arg1;	// IMP=0x00100000000ea5a3
+ (Class)networkRequestClass:(id)arg1;	// IMP=0x00100000000ea2e4
+ (id)commonNetworkRequestManager;	// IMP=0x00100000000e948b
+ (id)dictionaryFromTaskDescription:(id)arg1;	// IMP=0x00100000000e8830
- (void).cxx_destruct;	// IMP=0x00200000000f0461
@property(retain, nonatomic) GKFairPlaySessionProvider *fairPlaySessionProvider; // @synthesize fairPlaySessionProvider=_fairPlaySessionProvider;
@property _Bool fairPlaySessionReady; // @synthesize fairPlaySessionReady=_fairPlaySessionReady;
@property(retain, nonatomic) NSURLSessionConfiguration *inProcessConfig; // @synthesize inProcessConfig=_inProcessConfig;
@property(retain, nonatomic) NSURLSession *inProcessSession; // @synthesize inProcessSession=_inProcessSession;
@property(retain, nonatomic) NSMutableDictionary *pendingCallbacks; // @synthesize pendingCallbacks=_pendingCallbacks;
@property(nonatomic) struct os_unfair_lock_s waitListCallbacksLock; // @synthesize waitListCallbacksLock=_waitListCallbacksLock;
@property(nonatomic) struct os_unfair_lock_s pendingCallbacksLock; // @synthesize pendingCallbacksLock=_pendingCallbacksLock;
@property(nonatomic) _Bool reportedExessiveRequests; // @synthesize reportedExessiveRequests=_reportedExessiveRequests;
@property(retain, nonatomic) NSMutableDictionary *existingTasks; // @synthesize existingTasks=_existingTasks;
@property(retain, nonatomic) NSDictionary *serviceDependancyMappings; // @synthesize serviceDependancyMappings=_serviceDependancyMappings;
@property(nonatomic) _Bool firstUnlockedState; // @synthesize firstUnlockedState=_firstUnlockedState;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) GKNetworkRequestManagerSessionDelegate *sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) NSURLSessionConfiguration *backgroundConfig; // @synthesize backgroundConfig=_backgroundConfig;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (id)networkRequestManagerStateQueue;	// IMP=0x00100000000f02ac
- (void)issuePending;	// IMP=0x00100000000efa96
- (id)taskFromIdentifier:(id)arg1;	// IMP=0x00100000000ef8b3
- (id)pendingLocation;	// IMP=0x00100000000ef818
- (id)resultsLocation;	// IMP=0x00100000000ef77d
- (void)issueRequest:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 locale:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ee45e
- (void)issueRequest:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ee43c
- (id)canSafelyIssueRequest:(id)arg1;	// IMP=0x00100000000ee2c4
- (id)existingWaitListDate:(id)arg1;	// IMP=0x00100000000ee202
- (void)handleRetryAfter:(id)arg1;	// IMP=0x00100000000ede28
- (void)setWaitPeriod:(id)arg1 waitPeriod:(double)arg2;	// IMP=0x00100000000edb3b
- (id)waitListLocation;	// IMP=0x00100000000edaba
- (void)writeToNetwork:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ed235
- (void)assembleRequest:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 sapSession:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ecae7
- (_Bool)useJSONforBagKey:(id)arg1;	// IMP=0x00100000000eca4b
- (void)setupSessionsAsync;	// IMP=0x00100000000eb947
- (void)handleTaskFinished:(id)arg1;	// IMP=0x00100000000eb231
- (void)addNetworkRequest:(id)arg1 description:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00100000000eacb7
- (_Bool)managerReady;	// IMP=0x00100000000eac0f
- (id)dictionaryForBagAndPlayer:(id)arg1 createIfNotPresent:(_Bool)arg2 description:(id)arg3;	// IMP=0x00100000000ea83a
- (long long)relatedTasksExistForBagKey:(id)arg1;	// IMP=0x00100000000e9c3f
- (void)cancelCurrentTasks;	// IMP=0x00100000000e96dd
- (id)init;	// IMP=0x00100000000e94f4
- (_Bool)beforeFirstUnlock;	// IMP=0x00100000000e9479
- (void)writeToPendingStore:(id)arg1 fileName:(id)arg2;	// IMP=0x00100000000e8ec6
- (id)contentsOfPendingStore:(id)arg1;	// IMP=0x00100000000e8dc4
- (void)cleanUpPendingStore:(id)arg1;	// IMP=0x00100000000e8bbb
- (id)pathToTempFile:(id)arg1 fileName:(id)arg2;	// IMP=0x00100000000e8b52
- (id)filePathToTempFile:(id)arg1 fileName:(id)arg2;	// IMP=0x00100000000e8ab0
- (void)getFairPlaySession:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e8a9a
- (id)retrieveAndClearCallbacks:(id)arg1 parameters:(id)arg2;	// IMP=0x00100000000e8578
- (_Bool)doesCallbackListExistFor:(id)arg1 parameters:(id)arg2 callback:(id)arg3;	// IMP=0x00100000000e823b

@end

