//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMDistributedSyncMultiStreamManager, BMRapportManager, BMSyncDatabase, BMSyncDevicePeerStatusTracker, BMSyncSessionMetricsCollector, MISSING_TYPE, NSMutableDictionary, NSString;
@protocol BMAtomBatchChunkerPolicy, OS_dispatch_queue;

@interface BMRapportSyncEngine : NSObject
{
    BMDistributedSyncMultiStreamManager *_syncManager;	// 8 = 0x8
    BMRapportManager *_rapportManager;	// 16 = 0x10
    NSMutableDictionary *_requestQueue;	// 24 = 0x18
    NSString *_localDeviceIdentifier;	// 32 = 0x20
    NSObject<BMAtomBatchChunkerPolicy> *_atomBatchChunkerPolicy;	// 40 = 0x28
    BMSyncDevicePeerStatusTracker *_peerStatusTracker;	// 48 = 0x30
    BMSyncSessionMetricsCollector *_metricsCollector;	// 56 = 0x38
    CDUnknownBlockType _reciprocalCompletionBlock;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    BMSyncDatabase *_database;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000000c8c6
@property(readonly, nonatomic) BMSyncDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType reciprocalCompletionBlock; // @synthesize reciprocalCompletionBlock=_reciprocalCompletionBlock;
@property(retain, nonatomic) BMSyncSessionMetricsCollector *metricsCollector; // @synthesize metricsCollector=_metricsCollector;
@property(readonly, nonatomic) BMSyncDevicePeerStatusTracker *peerStatusTracker; // @synthesize peerStatusTracker=_peerStatusTracker;
- (id)siteSuffix;	// IMP=0x001000000000c867
- (unsigned int)protocolVersion;	// IMP=0x001000000000c85c
- (id)localDeviceUpdatingIfNecessary;	// IMP=0x001000000000c82b
- (void)finishRequest:(id)arg1 toDevice:(id)arg2 withError:(id)arg3 peerInfo:(id)arg4;	// IMP=0x001000000000c705
- (MISSING_TYPE *)handleFetchAtomBatchesResponse:options:error:fromDevice:forRequest:isReciprocal: /* Error: Ran out of types for this method. */;	// IMP=0x001000000000be0f
- (CDUnknownBlockType)fetchAtomBatchesRequestHandler;	// IMP=0x001000000000b206
- (void)rapportManagerDiscoveryTimedOut:(id)arg1;	// IMP=0x001000000000af78
- (void)rapportManager:(id)arg1 didLoseNearbyBMRapportDevice:(id)arg2;	// IMP=0x001000000000af72
- (void)rapportManager:(id)arg1 localDeviceUpdated:(id)arg2;	// IMP=0x001000000000af6c
- (void)rapportManager:(id)arg1 didDiscoverBMRapportDevice:(id)arg2;	// IMP=0x001000000000adfd
- (_Bool)rapportManager:(id)arg1 isDeviceSupported:(id)arg2;	// IMP=0x001000000000aafe
- (void)registerRequests;	// IMP=0x001000000000aa9b
- (id)buildAtomBatchRequestWithIsReciprocal:(_Bool)arg1 sequenceNumber:(unsigned long long)arg2 transportType:(unsigned long long)arg3 device:(id)arg4;	// IMP=0x001000000000a94e
- (void)sendFetchAtomBatchesRequest:(id)arg1 toDevice:(id)arg2 forRequest:(id)arg3;	// IMP=0x001000000000a73d
- (void)fetchAtomBatchesFromDevices:(id)arg1 isReciprocal:(_Bool)arg2 reason:(unsigned long long)arg3 activity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000009e05
- (void)fetchAtomBatchesIsReciprocal:(_Bool)arg1 reason:(unsigned long long)arg2 activity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009583
- (void)runRequest:(id)arg1 onDevice:(id)arg2;	// IMP=0x00100000000094a4
- (void)completeRequest:(id)arg1 deliveredToDevices:(id)arg2 withErrors:(id)arg3;	// IMP=0x0010000000009172
- (void)completeRequestIfDeliveredToAllNearbyDevices:(id)arg1;	// IMP=0x0010000000008bf3
- (void)syncNowWithDevices:(id)arg1 reason:(unsigned long long)arg2 activity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008a4f
- (void)syncNowWithReason:(unsigned long long)arg1 activity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008965
- (void)startServer;	// IMP=0x00100000000088e3
- (void)startClient;	// IMP=0x0010000000008873
- (id)initWithQueue:(id)arg1 multiStreamManager:(id)arg2 rapportManager:(id)arg3 atomBatchChunkerPolicy:(id)arg4 database:(id)arg5;	// IMP=0x0010000000008699
- (id)initWithQueue:(id)arg1 multiStreamManager:(id)arg2 database:(id)arg3;	// IMP=0x00100000000084af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
