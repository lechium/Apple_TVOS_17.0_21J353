//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraStreamSnapshotHandler : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _streamAvailable;	// 12 = 0xc
    _Bool _streamSetupInProgress;	// 13 = 0xd
    NSMutableSet *_streamSnapshotCaptures;	// 16 = 0x10
    NSMutableSet *_retiredStreamSnapshotCaptures;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_propertyQueue;	// 40 = 0x28
    NSMutableDictionary *_serviceInstanceStreamStatus;	// 48 = 0x30
    NSMapTable *_delegateTable;	// 56 = 0x38
    NSString *_logIdentifier;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000003a1631
- (void).cxx_destruct;	// IMP=0x00000000003a0361
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)streamSnapshotCapture:(id)arg1 didGetLastSnapshot:(id)arg2;	// IMP=0x000000000039fdea
- (void)streamSnapshotCapture:(id)arg1 didGetNewSnapshot:(id)arg2;	// IMP=0x000000000039fddd
- (void)getSnapshot:(unsigned long long)arg1;	// IMP=0x000000000039fd74
- (void)removeVideoStreamInterface:(id)arg1;	// IMP=0x000000000039fcbd
- (void)addVideoStreamInterface:(id)arg1;	// IMP=0x000000000039fc06
- (void)setStreamSetupStatusForService:(id)arg1 inProgress:(_Bool)arg2;	// IMP=0x000000000039fb4b
@property(readonly, getter=isStreamSetupInProgress) _Bool streamSetupInProgress; // @synthesize streamSetupInProgress=_streamSetupInProgress;
@property(readonly, getter=isStreamAvailable) _Bool streamAvailable; // @synthesize streamAvailable=_streamAvailable;
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000039fa26
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x000000000039f938
- (id)initWithWorkQueue:(id)arg1 services:(id)arg2 logID:(id)arg3;	// IMP=0x000000000039f606

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

