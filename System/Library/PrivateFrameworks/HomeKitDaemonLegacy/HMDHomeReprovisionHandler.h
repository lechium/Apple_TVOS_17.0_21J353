//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFMessageDispatcher, HMFTimer, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol HMDAccessoryBrowserProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeReprovisionHandler : HMFObject
{
    _Bool _reprovisionBrowsingAllowed;	// 8 = 0x8
    _Bool _reprovisionBrowsingPending;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMFMessageDispatcher *_msgDispatcher;	// 24 = 0x18
    HMDHome *_home;	// 32 = 0x20
    id <HMDAccessoryBrowserProtocol> _accessoryBrowser;	// 40 = 0x28
    HMFTimer *_disableReprovisionBrowsingTimer;	// 48 = 0x30
    NSMutableDictionary *_pendingReprovisionRequests;	// 56 = 0x38
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00100000005a7511
+ (id)logCategory;	// IMP=0x00100000005a74e1
- (void).cxx_destruct;	// IMP=0x00000000005a6661
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005a6384
- (void)handleReprovionedAccessory:(id)arg1 identifier:(id)arg2 error:(id)arg3;	// IMP=0x00000000005a5eb9
- (void)handleFoundAccessoryNeedingReprovisioning:(id)arg1 error:(id)arg2;	// IMP=0x00000000005a5c99
- (void)_handleReprovisionAccessory:(id)arg1;	// IMP=0x00000000005a4e92
- (void)_handleRequestSearchForAccessoriesNeedingReprovisioning:(id)arg1;	// IMP=0x00000000005a49ac
- (id)logIdentifier;	// IMP=0x00000000005a4924
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;	// IMP=0x00000000005a45ac
- (void)dealloc;	// IMP=0x00000000005a44ef
- (id)init;	// IMP=0x00000000005a4477

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

