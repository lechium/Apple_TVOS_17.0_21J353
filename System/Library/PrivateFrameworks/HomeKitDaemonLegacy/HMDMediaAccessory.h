//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaAccessoryAdvertisement, HMDMediaProfile, NSDictionary, NSNotificationCenter, NSString;

__attribute__((visibility("hidden")))
@interface HMDMediaAccessory
{
    HMDMediaAccessoryAdvertisement *_advertisement;	// 32 = 0x20
    HMDMediaProfile *_mediaProfile;	// 40 = 0x28
    NSNotificationCenter *_notificationCenter;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004a0529
- (void).cxx_destruct;	// IMP=0x00000000004a02c1
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDMediaProfile *mediaProfile; // @synthesize mediaProfile=_mediaProfile;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004a01f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004a012f
- (id)dumpSimpleState;	// IMP=0x00000000004a002a
- (id)dumpState;	// IMP=0x000000000049ff25
- (void)removeHostedAccessory:(id)arg1;	// IMP=0x000000000049ff1f
- (void)addHostedAccessory:(id)arg1;	// IMP=0x000000000049ff19
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000049faad
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x000000000049f9f2
- (void)handleUpdatedPassword:(id)arg1;	// IMP=0x000000000049f9ec
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;	// IMP=0x000000000049f9e6
- (long long)reachableTransports;	// IMP=0x000000000049f92f
- (void)setRemotelyReachable:(_Bool)arg1;	// IMP=0x000000000049f898
- (void)notifyConnectivityChangedWithReachabilityState:(_Bool)arg1;	// IMP=0x000000000049f81e
- (void)handleUpdatedAdvertisement:(id)arg1;	// IMP=0x000000000049f735
- (void)setAdvertisement:(id)arg1;	// IMP=0x000000000049f68d
@property(readonly, copy) HMDMediaAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void)handleRoomChanged:(id)arg1;	// IMP=0x000000000049f477
- (void)handleRoomNameChanged:(id)arg1;	// IMP=0x000000000049f2d5
- (id)transportReports;	// IMP=0x000000000049f2cd
- (id)name;	// IMP=0x000000000049f246
- (_Bool)providesHashRouteID;	// IMP=0x000000000049f23e
- (void)removeAdvertisement:(id)arg1;	// IMP=0x000000000049f087
- (void)addAdvertisement:(id)arg1;	// IMP=0x000000000049eefc
- (id)_createMediaProfile;	// IMP=0x000000000049eec6
- (_Bool)_shouldFilterAccessoryProfile:(id)arg1;	// IMP=0x000000000049ee84
- (void)_registerForMessages;	// IMP=0x000000000049edb8
- (unsigned long long)supportedTransports;	// IMP=0x000000000049edad
- (id)init;	// IMP=0x000000000049ed05
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x000000000049ea6d
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

