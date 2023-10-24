//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDCameraSnapshotSessionID, HMDDevice, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotSender : HMFObject
{
    NSUUID *_uniqueIdentifier;	// 8 = 0x8
    HMDDevice *_device;	// 16 = 0x10
    HMDAccessory *_accessory;	// 24 = 0x18
    HMDCameraSnapshotSessionID *_sessionID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x001000000044c876
- (void).cxx_destruct;	// IMP=0x000000000044c739
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)_sendImageSendFailure:(id)arg1;	// IMP=0x000000000044c2f1
- (id)logIdentifier;	// IMP=0x000000000044c2a1
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 accessory:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6;	// IMP=0x000000000044c118

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

