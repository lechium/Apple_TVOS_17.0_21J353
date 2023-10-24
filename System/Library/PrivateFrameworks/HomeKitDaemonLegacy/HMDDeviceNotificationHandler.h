//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFMessageDispatcher, HMFTimer, NSMutableOrderedSet, NSObject, NSString;
@protocol HMDDeviceNotificationHandlerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDeviceNotificationHandler : HMFObject
{
    _Bool _delaySupported;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSString *_destination;	// 32 = 0x20
    HMFTimer *_coalesceTimer;	// 40 = 0x28
    HMFTimer *_delayTimer;	// 48 = 0x30
    HMFMessageDispatcher *_messageDispatcher;	// 56 = 0x38
    id <HMDDeviceNotificationHandlerDataSource> _dataSource;	// 64 = 0x40
    NSMutableOrderedSet *_deviceNotificationsByRequestIDs;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00100000001d00ec
- (void).cxx_destruct;	// IMP=0x00000000001cf186
@property(retain) NSMutableOrderedSet *deviceNotificationsByRequestIDs; // @synthesize deviceNotificationsByRequestIDs=_deviceNotificationsByRequestIDs;
@property(readonly, nonatomic) id <HMDDeviceNotificationHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(nonatomic) _Bool delaySupported; // @synthesize delaySupported=_delaySupported;
@property(retain, nonatomic) HMFTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(retain, nonatomic) HMFTimer *coalesceTimer; // @synthesize coalesceTimer=_coalesceTimer;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x00000000001cefa2
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000001cedf4
- (void)_dispatchNotificationUpdate:(id)arg1;	// IMP=0x00000000001ce2d3
- (void)_dispatchNotification;	// IMP=0x00000000001ce095
- (void)_beginCoalesce:(_Bool)arg1;	// IMP=0x00000000001cdc64
- (void)sendNotificationForMediaProperties:(id)arg1 withRequestIdentifier:(id)arg2 notificationUpdateIdentifier:(id)arg3;	// IMP=0x00000000001cd8e2
- (id)_notificationUpdateWithRequestID:(id)arg1 allowAdd:(_Bool)arg2;	// IMP=0x00000000001cd6ba
- (void)sendCoalescedRemoteNotificationForAccessories:(id)arg1;	// IMP=0x00000000001cd426
- (void)sendNotificationForCharacteristicUpdates:(id)arg1 withRequestIdentifier:(id)arg2 notificationUpdateIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001ccc5b
- (id)initWithDestination:(id)arg1 watchDevice:(_Bool)arg2 withRequestIdentifier:(id)arg3 messageDispatcher:(id)arg4 home:(id)arg5 dataSource:(id)arg6;	// IMP=0x00000000001ccafb
- (id)initWithDestination:(id)arg1 watchDevice:(_Bool)arg2 withRequestIdentifier:(id)arg3 messageDispatcher:(id)arg4 home:(id)arg5;	// IMP=0x00000000001cca16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

