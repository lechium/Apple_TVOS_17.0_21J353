//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SSRemoteNotification;

@interface PushNotificationDisplayOperation : ISOperation
{
    SSRemoteNotification *_notification;	// 96 = 0x60
}

+ (_Bool)_shouldUseBulletinBoardForNotification:(id)arg1;	// IMP=0x004000000009c0b8
- (void).cxx_destruct;	// IMP=0x002000000009c27a
- (_Bool)_URLHandlerExists;	// IMP=0x001000000009c193
- (void)_performNotificationAction:(_Bool)arg1;	// IMP=0x001000000009acf1
- (void)_openNotificationURL;	// IMP=0x001000000009abc2
- (long long)_notificationClass;	// IMP=0x001000000009ab69
- (void)_loadNotificationDownloadManifest;	// IMP=0x001000000009aa12
- (void)_displayBadge;	// IMP=0x001000000009a956
- (void)_displayAlert;	// IMP=0x001000000009a221
- (id)_clientIdentifierForDownloadKinds:(id)arg1;	// IMP=0x001000000009a06f
- (_Bool)_clientExistsWithIdentifier:(id)arg1;	// IMP=0x001000000009a022
- (void)run;	// IMP=0x001000000009987a
@property(readonly) _Bool requiresClientIdentifier;
@property(readonly) NSDictionary *notificationUserInfo;
- (id)initWithNotificationUserInfo:(id)arg1;	// IMP=0x0010000000099730
- (id)init;	// IMP=0x001000000009971c

@end
