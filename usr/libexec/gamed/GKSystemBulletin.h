//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKSystemBulletin
{
}

+ (void)_expireCachesForKey:(id)arg1 payload:(id)arg2 context:(id)arg3;	// IMP=0x0040000000192c62
+ (void)expireFriendCodeDetails:(id)arg1 payload:(id)arg2 context:(id)arg3;	// IMP=0x001000000019280b
+ (void)expireGetPerGameFriendPlayerIDsCache:(id)arg1 payload:(id)arg2 context:(id)arg3;	// IMP=0x00100000001923b4
+ (void)expireGetPerGameSettingsCaches:(id)arg1 payload:(id)arg2 context:(id)arg3;	// IMP=0x0010000000191e54
+ (void)presentGameCenterInviteUpdate:(id)arg1 playerAlias:(id)arg2;	// IMP=0x0010000000191bce
+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001910b4
- (void)handleAction:(id)arg1;	// IMP=0x0040000000193817

@end

