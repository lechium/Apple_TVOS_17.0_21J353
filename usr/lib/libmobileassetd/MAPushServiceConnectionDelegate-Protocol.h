//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <mobileassetd/NSObject-Protocol.h>

@class MAPushNotification, NSMutableDictionary;

@protocol MAPushServiceConnectionDelegate <NSObject>
- (void)didReceivePushNotification:(MAPushNotification *)arg1;

@optional
- (void)channelSubscriptionsFailedWithReasons:(NSMutableDictionary *)arg1;
@end
