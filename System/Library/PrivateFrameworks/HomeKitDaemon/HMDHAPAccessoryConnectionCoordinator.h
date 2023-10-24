//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, NSNotificationCenter, NSString;

__attribute__((visibility("hidden")))
@interface HMDHAPAccessoryConnectionCoordinator : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000002f297c
- (void).cxx_destruct;	// IMP=0x00000000002f2956
- (id)logIdentifier;	// IMP=0x00000000002f28dc
- (void)_enableDisconnectOnIdleWithAccessories;	// IMP=0x00000000002f26fa
- (void)_disableDisconnectOnIdleWithAccessoriesAndConnect:(_Bool)arg1;	// IMP=0x00000000002f237f
- (void)evaluateAccessoryConnectionStatus;	// IMP=0x00000000002f208a
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x00000000002f1fb3
- (void)handleResidentChangedOnNonResident;	// IMP=0x00000000002f1de4
- (void)handleCurrentResidentChanged:(id)arg1;	// IMP=0x00000000002f1c4d
- (void)handleIsResidentFirstAccessoryCommunicationEnabledDidChangeNotification:(id)arg1;	// IMP=0x00000000002f1b76
- (void)handleResidentUpdated:(id)arg1;	// IMP=0x00000000002f1aa0
- (void)handleResidentAddRemove:(id)arg1;	// IMP=0x00000000002f195b
- (void)handleResidentStatusChanged:(id)arg1;	// IMP=0x00000000002f1849
- (void)configureWithIsResidentCapable:(_Bool)arg1;	// IMP=0x00000000002f15f2
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x00000000002f1556

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
