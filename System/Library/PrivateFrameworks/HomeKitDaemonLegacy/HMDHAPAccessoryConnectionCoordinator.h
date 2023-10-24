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

+ (id)logCategory;	// IMP=0x00100000002ae5db
- (void).cxx_destruct;	// IMP=0x00000000002ae5b5
- (id)logIdentifier;	// IMP=0x00000000002ae53b
- (void)_enableDisconnectOnIdleWithAccessories;	// IMP=0x00000000002ae359
- (void)_disableDisconnectOnIdleWithAccessoriesAndConnect:(_Bool)arg1;	// IMP=0x00000000002adfde
- (void)evaluateAccessoryConnectionStatus;	// IMP=0x00000000002adce9
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x00000000002adbb1
- (void)handleResidentChangedOnNonResident;	// IMP=0x00000000002ad9e2
- (void)handleCurrentResidentChanged:(id)arg1;	// IMP=0x00000000002ad84b
- (void)handleIsResidentFirstAccessoryCommunicationEnabledDidChangeNotification:(id)arg1;	// IMP=0x00000000002ad774
- (void)handleResidentUpdated:(id)arg1;	// IMP=0x00000000002ad663
- (void)handleResidentAddRemove:(id)arg1;	// IMP=0x00000000002ad51e
- (void)handleResidentStatusChanged:(id)arg1;	// IMP=0x00000000002ad40c
- (void)configureWithIsResidentCapable:(_Bool)arg1;	// IMP=0x00000000002ad12d
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x00000000002ad091

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

