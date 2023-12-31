//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraSnapshotManager, HMDCharacteristicsAvailabilityListener, HMDHAPAccessory, HMDNotificationRegistration, HMFMessageDispatcher, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol HMDCameraBulletinBoard, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotMonitorEvents : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMFMessageDispatcher *_msgDispatcher;	// 16 = 0x10
    HMDCameraSnapshotManager *_snapshotManager;	// 24 = 0x18
    NSMutableSet *_snapShotNotificationResponseTimers;	// 32 = 0x20
    HMDHAPAccessory *_accessory;	// 40 = 0x28
    NSString *_bulletinImagesDirectory;	// 48 = 0x30
    id <HMDCameraBulletinBoard> _bulletinBoard;	// 56 = 0x38
    HMDNotificationRegistration *_notificationRegistration;	// 64 = 0x40
    NSString *_logIdentifier;	// 72 = 0x48
    NSUUID *_uniqueIdentifier;	// 80 = 0x50
    NSSet *_bulletinSnapshotCharacteristics;	// 88 = 0x58
    HMDCharacteristicsAvailabilityListener *_characteristicsAvailabilityListener;	// 96 = 0x60
    NSString *_clientIdentifier;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x001000000077221c
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0010000000772214
- (void).cxx_destruct;	// IMP=0x000000000076dce8
@property(readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener; // @synthesize characteristicsAvailabilityListener=_characteristicsAvailabilityListener;
@property(copy) NSSet *bulletinSnapshotCharacteristics; // @synthesize bulletinSnapshotCharacteristics=_bulletinSnapshotCharacteristics;
@property(readonly) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000076d842
- (void)handleCameraSettingsDidUpdateNotification:(id)arg1;	// IMP=0x000000000076d78b
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x000000000076d6d4
- (void)handleBulletinBoardNotificationDidUpdateNotification:(id)arg1;	// IMP=0x000000000076d61d
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;	// IMP=0x000000000076d4cd
- (void)dealloc;	// IMP=0x000000000076d30d
- (void)registerForMessages;	// IMP=0x000000000076d10d
- (id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;	// IMP=0x000000000076cbc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

