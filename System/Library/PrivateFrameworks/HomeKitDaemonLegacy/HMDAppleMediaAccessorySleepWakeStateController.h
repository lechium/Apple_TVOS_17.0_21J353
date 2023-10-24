//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessageDispatcher, NAFuture, NSObject, NSString, NSUUID;
@protocol HMDAppleMediaAccessorySleepWakeStateControllerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessorySleepWakeStateController : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NAFuture *_fetchSleepWakeFuture;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSUUID *_accessoryUUID;	// 32 = 0x20
    HMFMessageDispatcher *_messageDispatcher;	// 40 = 0x28
    id <HMDAppleMediaAccessorySleepWakeStateControllerDataSource> _dataSource;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000b15899
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleFetchSleepWakeStateMessage:(id)arg1;	// IMP=0x0000000000b14f6d
- (void)fetchSleepWakeStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b14a8d
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000b1484f
- (id)initWithAccessoryUUID:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000b14792

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

