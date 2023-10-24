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

- (void).cxx_destruct;	// IMP=0x0000000000845ef3
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
- (_Bool)isAnyUserAtHome;	// IMP=0x0000000000845d75
- (_Bool)isNoUserAtHome;	// IMP=0x0000000000845bfe
- (_Bool)areUsersNotAtHome:(id)arg1;	// IMP=0x0000000000845a24
- (_Bool)areUsersAtHome:(id)arg1;	// IMP=0x000000000084584a
- (_Bool)isUserNotAtHome:(id)arg1;	// IMP=0x0000000000845801
- (_Bool)isUserAtHome:(id)arg1;	// IMP=0x00000000008457b8
- (id)regionForUser:(id)arg1;	// IMP=0x000000000084568f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000084557c
@property(readonly, copy) NSString *description;
- (id)initWithPresenceByPairingIdentity:(id)arg1;	// IMP=0x0000000000845289
- (id)initWithPresenceByUserId:(id)arg1;	// IMP=0x0000000000845002

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

