//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class AKAnisetteProvisioningController, HMDAppleMediaAccessory, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginAnisetteDataHandler : HMFObject
{
    HMDAppleMediaAccessory *_accessory;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMFMessageDispatcher *_msgDispatcher;	// 32 = 0x20
    AKAnisetteProvisioningController *_provisioningController;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000007f8ccd
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00100000007f8cc5
- (void).cxx_destruct;	// IMP=0x00000000007f8801
@property(readonly, nonatomic) AKAnisetteProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
- (id)logIdentifier;	// IMP=0x00000000007f872c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleLegacyAnisetteDataRequestMessage:(id)arg1;	// IMP=0x00000000007f8525
- (void)_handleFetchAnisetteDataRequestMessage:(id)arg1;	// IMP=0x00000000007f8374
- (void)_handleEraseAnisetteDataRequestMessage:(id)arg1;	// IMP=0x00000000007f81c3
- (void)_handleSyncAnisetteDataRequestMessage:(id)arg1;	// IMP=0x00000000007f7fe0
- (void)_handleProvisionAnisetteDataRequestMessage:(id)arg1;	// IMP=0x00000000007f7e2f
- (void)registerForMessages;	// IMP=0x00000000007f79e7
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x00000000007f7986
- (id)initWithUUID:(id)arg1 accessory:(id)arg2;	// IMP=0x00000000007f78c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

