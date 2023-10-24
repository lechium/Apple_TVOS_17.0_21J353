//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UNNotification;

@interface ADAnnounceNotificationRequest
{
    UNNotification *_notification;	// 8 = 0x8
    NSString *_appID;	// 16 = 0x10
    long long _announcementType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000895e9
@property(nonatomic) long long announcementType; // @synthesize announcementType=_announcementType;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) UNNotification *notification; // @synthesize notification=_notification;
- (_Bool)_supportsBargeInForAnnounceNotificationType:(long long)arg1;	// IMP=0x0010000000089566
- (long long)_announceNotificationRequestTypeForNotification:(id)arg1 appID:(id)arg2 platform:(long long)arg3;	// IMP=0x00100000000893a8
- (id)initWithNotification:(id)arg1 appID:(id)arg2 platform:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008926e

@end

