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

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000054e1f0
- (void).cxx_destruct;	// IMP=0x000000000054df88
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDMediaProfile *mediaProfile; // @synthesize mediaProfile=_mediaProfile;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000054deb7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000054ddf6
- (id)dumpSimpleState;	// IMP=0x000000000054dcf1
- (id)dumpState;	// IMP=0x000000000054dbec
- (void)removeHostedAccessory:(id)arg1;	// IMP=0x000000000054dbe6
- (void)addHostedAccessory:(id)arg1;	// IMP=0x000000000054dbe0
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000054d774
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x000000000054d6b9
- (void)handleUpdatedPassword:(id)arg1;	// IMP=0x000000000054d6b3
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;	// IMP=0x000000000054d6ad
- (long long)reachableTransports;	// IMP=0x000000000054d5f6
- (void)setRemotelyReachable:(_Bool)arg1;	// IMP=0x000000000054d55f
- (void)notifyConnectivityChangedWithReachabilityState:(_Bool)arg1;	// IMP=0x000000000054d4e5
- (void)handleUpdatedAdvertisement:(id)arg1;	// IMP=0x000000000054d3fc
- (void)setAdvertisement:(id)arg1;	// IMP=0x000000000054d354
@property(readonly, copy) HMDMediaAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void)handleRoomChanged:(id)arg1;	// IMP=0x000000000054d13e
- (void)handleRoomNameChanged:(id)arg1;	// IMP=0x000000000054cf9c
- (id)transportReports;	// IMP=0x000000000054cf94
- (id)name;	// IMP=0x000000000054cf0d
- (_Bool)providesHashRouteID;	// IMP=0x000000000054cf05
- (void)removeAdvertisement:(id)arg1;	// IMP=0x000000000054cd4e
- (void)addAdvertisement:(id)arg1;	// IMP=0x000000000054cbc3
- (id)_createMediaProfile;	// IMP=0x000000000054cb8d
- (_Bool)_shouldFilterAccessoryProfile:(id)arg1;	// IMP=0x000000000054cb4b
- (void)_registerForMessages;	// IMP=0x000000000054ca7f
- (unsigned long long)supportedTransports;	// IMP=0x000000000054ca74
- (id)init;	// IMP=0x000000000054c9cc
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x000000000054c734
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
