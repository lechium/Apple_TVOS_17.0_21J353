//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject, NSDate, NSString;

@interface GKInviteCacheObject
{
}

+ (id)fetchSortDescriptors;	// IMP=0x004000000013c351
+ (id)entityName;	// IMP=0x001000000013c2c0
- (void)awakeFromInsert;	// IMP=0x002000000013c2cd

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) NSString *inviteID; // @dynamic inviteID;
@property(retain, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;
@property(nonatomic) int type; // @dynamic type;

@end

