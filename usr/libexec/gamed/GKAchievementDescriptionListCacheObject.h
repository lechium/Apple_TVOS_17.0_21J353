//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject;

@interface GKAchievementDescriptionListCacheObject
{
}

+ (id)entityName;	// IMP=0x00400000001260b5
- (_Bool)isValid;	// IMP=0x00200000001261c1
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00100000001260c2

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end
