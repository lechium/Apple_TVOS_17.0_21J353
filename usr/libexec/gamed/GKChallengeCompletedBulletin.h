//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKChallengeCompletedBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00400000001baa3e
- (void)handleAction:(id)arg1;	// IMP=0x00400000001bcb4b
- (unsigned long long)launchEventType;	// IMP=0x00100000001bcb40
- (void)assembleBulletin;	// IMP=0x00100000001bc6dd
- (void)notifyClient:(id)arg1;	// IMP=0x00100000001bc535
- (id)init;	// IMP=0x00100000001baa0f

@end

