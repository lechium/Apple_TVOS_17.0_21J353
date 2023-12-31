//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableSet, NSNotificationCenter, NSObject, NSString;
@protocol HMDSiriEndpointSettingsSyncManagerDataSource, HMESubscriptionProviding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointSettingsSyncManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMDSiriEndpointSettingsSyncManagerDataSource> _dataSource;	// 16 = 0x10
    id <HMESubscriptionProviding> _subscriptionProvider;	// 24 = 0x18
    NSMutableSet *_homeUUIDsManagedByCurrentDevice;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000007e622d
+ (id)siriEndPointHomeKitBackedKeyPaths;	// IMP=0x00100000007e61fd
- (void).cxx_destruct;	// IMP=0x00000000007e4406
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSMutableSet *homeUUIDsManagedByCurrentDevice; // @synthesize homeUUIDsManagedByCurrentDevice=_homeUUIDsManagedByCurrentDevice;
@property(readonly) id <HMESubscriptionProviding> subscriptionProvider; // @synthesize subscriptionProvider=_subscriptionProvider;
@property(readonly) __weak id <HMDSiriEndpointSettingsSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (long long)siriEndpointCertificationReasonForAccessoryUUID:(id)arg1 homeUUID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000007e41e2
- (id)readValueValueForAccessoryUUID:(id)arg1 homeUUID:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x00000000007e3c86
- (void)_matchingHomeforUUID:(id)arg1 accessoryUUID:(id)arg2 home:(id *)arg3 accessory:(id *)arg4;	// IMP=0x00000000007e395b
- (void)writeSettingValue:(id)arg1 accessoryUUID:(id)arg2 homeUUID:(id)arg3 forKeyPath:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000007e35a3
- (void)_writeSettingValue:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000007e25e5
- (void)_writeSettingValue:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x00000000007e25d0
- (void)_writeSetting:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x00000000007e2418
- (void)_synchronizeSettingsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00000000007e1f25
- (void)handleAccessoryIsReachableNotification:(id)arg1;	// IMP=0x00000000007e1ae5
- (void)handleHAPMediaProfileAddedNotification:(id)arg1;	// IMP=0x00000000007e16a5
- (void)handleCompositeSettingsControllerDidConfigureNotification:(id)arg1;	// IMP=0x00000000007e1254
- (void)handleSiriEndPointAddedNotification:(id)arg1;	// IMP=0x00000000007e0edc
- (void)handleHomeAddedNotification:(id)arg1;	// IMP=0x00000000007e0d93
- (void)handleHomeRemovedNotification:(id)arg1;	// IMP=0x00000000007e09e6
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x00000000007e086b
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x00000000007dfe9f
- (void)_updateManagedHomes;	// IMP=0x00000000007df6df
- (void)unregisterFromAccessoryNotificationsOnHapAccessory:(id)arg1;	// IMP=0x00000000007df62c
- (void)registerForAccessoryNotificationsOnHapAccessory:(id)arg1;	// IMP=0x00000000007df56b
- (void)_stopManagingAccessory:(id)arg1 forHome:(id)arg2;	// IMP=0x00000000007df3a8
- (void)_beginManagingAccessory:(id)arg1 forHome:(id)arg2;	// IMP=0x00000000007df19b
- (void)_stopManagingHome:(id)arg1;	// IMP=0x00000000007defb8
- (void)_beginManagingHome:(id)arg1;	// IMP=0x00000000007dedd5
- (void)configure;	// IMP=0x00000000007deb23
- (id)initWithDataSource:(id)arg1 subscriptionProvider:(id)arg2 notificationCenter:(id)arg3 workQueue:(id)arg4;	// IMP=0x00000000007de9f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

