//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMHome.h>

@class NSArray;

@interface HMHome (Announce)
- (id)_homePodsSupportingAnnounceIncludingCurrentAccessory:(_Bool)arg1;	// IMP=0x0030000000038328
- (id)_homePodsWithAnnounceEnabledIncludingCurrentAccessory:(_Bool)arg1;	// IMP=0x003000000003812b
- (id)_usersWithAnnounceEnabledIncludingCurrentUser:(_Bool)arg1;	// IMP=0x0030000000037f81
- (_Bool)an_announceNotificationsEnabledForCurrentUserWithOverrideHomeLocationStatus:(long long)arg1;	// IMP=0x0030000000037acf
@property(readonly, nonatomic) NSArray *homePodsIncludingCurrentAccessoryWithAnnounceEnabled;
@property(readonly, nonatomic) NSArray *homePodsIncludingCurrentAccessorySupportingAnnounce;
@property(readonly, nonatomic) NSArray *usersIncludingCurrentUserWithAnnounceAndRemoteAccessEnabled;
@property(readonly, nonatomic) NSArray *usersWithAnnounceEnabled;
@property(readonly, nonatomic) NSArray *usersIncludingCurrentUserWithAnnounceEnabled;
- (_Bool)announceAccessAllowedForUser:(id)arg1;	// IMP=0x003000000003756c
@property(readonly, nonatomic) _Bool announceAccessAllowedForCurrentUser;
@property(readonly, nonatomic) _Bool isAnnounceEnabledForAnyAccessoryOrUser;
@property(readonly, nonatomic) _Bool isAnnounceEnabledForAnyAccessory;
@property(readonly, nonatomic) _Bool isAnnounceAvailable;
@property(readonly, nonatomic) _Bool isAnnounceSupported;
@property(readonly, nonatomic) NSArray *an_activeEndpointAccessories;
@end

