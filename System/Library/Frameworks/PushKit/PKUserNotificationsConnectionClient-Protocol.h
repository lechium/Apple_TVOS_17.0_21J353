//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PushKit/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol PKUserNotificationsConnectionClient <NSObject>
- (void)remoteUserNotificationPayloadReceived:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)remoteUserNotificationRegistrationSucceededWithDeviceToken:(NSData *)arg1;
@end

