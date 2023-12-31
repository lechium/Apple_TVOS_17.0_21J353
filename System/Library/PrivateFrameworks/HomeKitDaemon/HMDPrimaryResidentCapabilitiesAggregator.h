//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSNotificationCenter, NSString, NSUUID;
@protocol HMDPrimaryResidentCapabilitiesAggregatorDataSource, HMDPrimaryResidentCapabilitiesAggregatorDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPrimaryResidentCapabilitiesAggregator : NSObject
{
    _Bool _isPrimaryResident;	// 8 = 0x8
    id <HMDPrimaryResidentCapabilitiesAggregatorDataSource> _dataSource;	// 16 = 0x10
    id <HMDPrimaryResidentCapabilitiesAggregatorDelegate> _delegate;	// 24 = 0x18
    NSUUID *_homeUUID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSNotificationCenter *_notificationCenter;	// 48 = 0x30
    NSMutableSet *_accessories;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000c85e5a
- (void).cxx_destruct;	// IMP=0x0000000000c83eee
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;	// IMP=0x0000000000c83ede
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000c83ece
- (void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)arg1;	// IMP=0x0000000000c83e7a
- (id)publicPairingIdentityForAccessory:(id)arg1 ifDifferentFrom:(id)arg2;	// IMP=0x0000000000c83cb6
- (id)residentCapabilitiesForAccessory:(id)arg1 ifDifferentFrom:(id)arg2;	// IMP=0x0000000000c839e3
- (id)accessoryCapabilitiesForAccessory:(id)arg1 ifDifferentFrom:(id)arg2;	// IMP=0x0000000000c83710
- (void)didRemoveAccessory:(id)arg1;	// IMP=0x0000000000c8367e
- (void)didAddAccessory:(id)arg1;	// IMP=0x0000000000c835ec
- (void)startIfPrimaryResident;	// IMP=0x0000000000c83598
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2 queue:(id)arg3 notificationCenter:(id)arg4 homeUUID:(id)arg5 accessories:(id)arg6;	// IMP=0x0000000000c83464
- (id)logIdentifier;	// IMP=0x0000000000c83445

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

