//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAnalyticsFuzzingInterval, ADAnalyticsStore, ADInstrumentationResolver, AFQueue, MISSING_TYPE, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ADAnalyticsService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_houseKeepingTimer;	// 16 = 0x10
    NSMutableSet *_stagedEvents;	// 24 = 0x18
    NSMutableSet *_connections;	// 32 = 0x20
    long long _depthOfEventsGrouping;	// 40 = 0x28
    ADAnalyticsStore *_store;	// 48 = 0x30
    NSString *_streamUID;	// 56 = 0x38
    ADInstrumentationResolver *_instrumentationResolver;	// 64 = 0x40
    NSString *_speechId;	// 72 = 0x48
    CDUnknownBlockType _observationCompletion;	// 80 = 0x50
    NSXPCConnection *_observerConnection;	// 88 = 0x58
    _Bool _isSuspended;	// 96 = 0x60
    _Bool _isFuzzing;	// 97 = 0x61
    _Bool _isBoostingEventProducers;	// 98 = 0x62
    ADAnalyticsFuzzingInterval *_currentFuzzingInterval;	// 104 = 0x68
    AFQueue *_fuzzingIntervals;	// 112 = 0x70
    NSMutableDictionary *_connectionDisruptedObservers;	// 120 = 0x78
}

+ (id)sharedService;	// IMP=0x0020000000293a8f
- (void).cxx_destruct;	// IMP=0x0020000000291f33
- (void)_unlinkStoreForSysdiagnose;	// IMP=0x0010000000291cd8
- (void)_linkStoreForSysdiagnose;	// IMP=0x00100000002919f2
- (void)_endEventsFuzzingWithEndTime:(unsigned long long)arg1;	// IMP=0x001000000029181e
- (void)_beginEventsFuzzingWithStartTime:(unsigned long long)arg1;	// IMP=0x0010000000291671
- (void)_houseKeeperArrived;	// IMP=0x0010000000291643
- (void)_stopHouseKeepingTimer;	// IMP=0x001000000029160d
- (void)_startHouseKeepingTimer;	// IMP=0x001000000029150e
- (void)_resumeEventsStaging;	// IMP=0x001000000029147b
- (void)_suspendEventsStaging;	// IMP=0x00100000002913ea
- (void)_endEventsGrouping;	// IMP=0x00100000002913b1
- (void)_beginEventsGrouping;	// IMP=0x001000000029136d
- (void)_processStagedEvents;	// IMP=0x00100000002908af
- (id)_unstageEvents;	// IMP=0x0010000000290872
- (void)_stageEvents:(id)arg1;	// IMP=0x0010000000290840
- (void)_stageEvent:(id)arg1;	// IMP=0x001000000029080e
- (MISSING_TYPE *)_executeDelegateBlockOnAllConnections:completion: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000290653
- (void)_enumerateConnectionsAsServiceDelegates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000290568
- (void)_stopObservingConnectionDisrupted:(int)arg1 referenceId:(id)arg2;	// IMP=0x0010000000290459
- (void)_observeConnectionDisrupted:(int)arg1 observer:(CDUnknownBlockType)arg2 referenceId:(id)arg3;	// IMP=0x00100000002902fd
- (void)_removeConnection:(id)arg1;	// IMP=0x00100000002902e7
- (void)_signalConnectionDisruption:(id)arg1;	// IMP=0x0010000000290150
- (void)_addConnection:(id)arg1;	// IMP=0x001000000029013a
- (id)_store;	// IMP=0x0010000000290003
- (oneway void)flushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000028ffe7
- (oneway void)observeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000028ff5a
- (void)_publishEventsToObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000028fdca
- (void)storeGenericInstrumentation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000028fc42
- (void)boostAllConnections:(CDUnknownBlockType)arg1;	// IMP=0x001000000028fae5
- (oneway void)stageUEIEventData:(id)arg1 timestamp:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000028fa2b
- (void)endEventsFuzzingWithEndTime:(unsigned long long)arg1;	// IMP=0x001000000028f9dc
- (void)beginEventsFuzzingWithStartTime:(unsigned long long)arg1;	// IMP=0x001000000028f98d
- (oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x001000000028f8ca
- (oneway void)endEventsGrouping;	// IMP=0x001000000028f87f
- (oneway void)beginEventsGrouping;	// IMP=0x001000000028f834
- (oneway void)stageEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000028f700
- (void)checkForMetricsUploadProblem;	// IMP=0x001000000028f4dd
- (void)managedConfigurationEffectiveSettingsChanged;	// IMP=0x001000000028f417
- (void)resumeEventsStaging;	// IMP=0x001000000028f3cc
- (void)suspendEventsStaging;	// IMP=0x001000000028f381
- (void)setObserverConnection:(id)arg1;	// IMP=0x001000000028f2f4
- (void)accessStoreUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000028f25d
- (void)connectionDisconnected:(id)arg1;	// IMP=0x001000000028f1c6
- (void)connectionInterrupted:(id)arg1;	// IMP=0x001000000028f12f
- (void)connectionConnected:(id)arg1;	// IMP=0x001000000028f098
@property(readonly, copy, nonatomic) NSString *currentEventStreamUID;
- (void)dealloc;	// IMP=0x001000000028f04c
- (id)init;	// IMP=0x001000000028ed3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

