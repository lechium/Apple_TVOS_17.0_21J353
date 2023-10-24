//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraSnapshotSessionID, HMFOSTransaction, NSObject, NSString;
@protocol HMDIDSService, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotIDSStream : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMDCameraSnapshotSessionID *_sessionID;	// 16 = 0x10
    id <HMDIDSService> _idsProxyService;	// 24 = 0x18
    HMFOSTransaction *_snapshotStreamTransaction;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000005cf228
- (void).cxx_destruct;	// IMP=0x00000000005cf1d5
@property(readonly) HMFOSTransaction *snapshotStreamTransaction; // @synthesize snapshotStreamTransaction=_snapshotStreamTransaction;
@property(readonly) id <HMDIDSService> idsProxyService; // @synthesize idsProxyService=_idsProxyService;
@property(readonly) HMDCameraSnapshotSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x00000000005cf12d
- (void)dealloc;	// IMP=0x00000000005cf00f
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 proxyService:(id)arg3;	// IMP=0x00000000005cee43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

