//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomePresenceRemote : HMFObject
{
    NSDictionary *_userPresenceMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000096fe95
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
- (_Bool)isAnyUserAtHome;	// IMP=0x000000000096fd17
- (_Bool)isNoUserAtHome;	// IMP=0x000000000096fba0
- (_Bool)areUsersNotAtHome:(id)arg1;	// IMP=0x000000000096f9c6
- (_Bool)areUsersAtHome:(id)arg1;	// IMP=0x000000000096f7ec
- (_Bool)isUserNotAtHome:(id)arg1;	// IMP=0x000000000096f7a3
- (_Bool)isUserAtHome:(id)arg1;	// IMP=0x000000000096f75a
- (id)regionForUser:(id)arg1;	// IMP=0x000000000096f631
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000096f51e
@property(readonly, copy) NSString *description;
- (id)initWithPresenceByPairingIdentity:(id)arg1;	// IMP=0x000000000096f22b
- (id)initWithPresenceByUserId:(id)arg1;	// IMP=0x000000000096efa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

