//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FMQueueSynchronizer, FMTokenBucket, FMXPCServiceDescription, FMXPCSession, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, SPCBPeripheralManagementXPCProtocol;

__attribute__((visibility("hidden")))
@interface SPCBPeripheralManager : NSObject
{
    _Bool _enableSystemWakes;	// 8 = 0x8
    _Bool _forceUpdateCriteria;	// 9 = 0x9
    CDUnknownBlockType _peripheralsUpdatedCallback;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    FMQueueSynchronizer *_queueSynchronizer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 40 = 0x28
    FMTokenBucket *_tokenBucket;	// 48 = 0x30
    FMXPCServiceDescription *_serviceDescription;	// 56 = 0x38
    FMXPCSession *_session;	// 64 = 0x40
    id <SPCBPeripheralManagementXPCProtocol> _proxy;	// 72 = 0x48
    NSMutableDictionary *_sessionMetadata;	// 80 = 0x50
}

+ (id)remoteInterface;	// IMP=0x0010000000049e8f
- (void).cxx_destruct;	// IMP=0x000000000004ae5d
@property(nonatomic) _Bool forceUpdateCriteria; // @synthesize forceUpdateCriteria=_forceUpdateCriteria;
@property(nonatomic) _Bool enableSystemWakes; // @synthesize enableSystemWakes=_enableSystemWakes;
@property(retain, nonatomic) NSMutableDictionary *sessionMetadata; // @synthesize sessionMetadata=_sessionMetadata;
@property(retain, nonatomic) id <SPCBPeripheralManagementXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
@property(retain, nonatomic) FMTokenBucket *tokenBucket; // @synthesize tokenBucket=_tokenBucket;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) FMQueueSynchronizer *queueSynchronizer; // @synthesize queueSynchronizer=_queueSynchronizer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType peripheralsUpdatedCallback; // @synthesize peripheralsUpdatedCallback=_peripheralsUpdatedCallback;
- (id)_enforceRateLimit;	// IMP=0x000000000004aa95
- (void)fetch;	// IMP=0x000000000004a200
- (void)timerFiredForActivity:(id)arg1;	// IMP=0x000000000004a050
- (double)timeIntervalToNextFireDateFromDate:(id)arg1;	// IMP=0x0000000000049fda
- (id)descriptionForVendorIdentifierList:(id)arg1;	// IMP=0x0000000000049efb
- (void)invalidationHandler:(id)arg1;	// IMP=0x0000000000049aaf
- (void)interruptionHandler:(id)arg1;	// IMP=0x0000000000049a0a
- (void)successfulConnectionForPeripheral:(id)arg1 leMAC:(id)arg2 ltk:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000049412
- (void)enableSystemWakesForUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049227
- (void)stopSessionForUserIdentifier:(id)arg1 bundleId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000048bd5
- (void)startSessionForUserIdentifier:(id)arg1 bundleId:(id)arg2 vendorIdentifierList:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000485f0
- (id)init;	// IMP=0x000000000004829f
- (void)handleDarwinNotificationNamed:(id)arg1;	// IMP=0x00000000000481e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
