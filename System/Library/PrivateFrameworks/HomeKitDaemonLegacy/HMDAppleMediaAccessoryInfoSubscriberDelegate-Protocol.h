//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDAppleMediaAccessoryInfoSubscriber, HMFWiFiNetworkInfo;

@protocol HMDAppleMediaAccessoryInfoSubscriberDelegate <NSObject>

@optional
- (void)infoSubscriber:(HMDAppleMediaAccessoryInfoSubscriber *)arg1 didReceiveWiFiInfoUpdate:(HMFWiFiNetworkInfo *)arg2;
@end

