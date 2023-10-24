//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject, GKLeaderboardSetCacheObject, GKPlayerProfileCacheObject;

@interface GKLeaderboardListCacheObject
{
}

+ (id)entityName;	// IMP=0x004000000012aeb6
- (_Bool)isValid;	// IMP=0x002000000012afc2
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000000012aec3

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;
@property(retain, nonatomic) GKLeaderboardSetCacheObject *set; // @dynamic set;

@end
