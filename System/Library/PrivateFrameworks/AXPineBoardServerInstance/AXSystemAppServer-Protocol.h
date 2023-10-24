//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXPineBoardServerInstance/NSObject-Protocol.h>

@class NSString;
@protocol AXSystemAppServer;

@protocol AXSystemAppServer <NSObject>
+ (id <AXSystemAppServer>)server;
- (_Bool)showControlCenter:(_Bool)arg1;
- (void)wakeUpDeviceIfNecessary;
- (_Bool)isSystemSleeping;
- (_Bool)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(_Bool)arg1;
- (void)rebootDevice;
- (void)isMediaPlayingForApp:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (_Bool)isReceivingAirPlay;
- (_Bool)isSiriTalkingOrListening;
- (_Bool)isSoftwareUpdateUIVisible;
- (_Bool)isNowPlayingUIVisible;
- (_Bool)isNotificationVisible;
- (_Bool)isScreenSaverVisible;
- (_Bool)isControlCenterVisible;
- (_Bool)isNotificationCenterVisible;
- (_Bool)isStageManagerSwitcherVisible;
- (_Bool)isDockVisible;
- (_Bool)isAppSwitcherVisible;
- (_Bool)isSiriVisible;
- (_Bool)dismissSiri;
- (void)activeInterfaceOrientation:(void (^)(long long))arg1;
- (long long)activeInterfaceOrientation;
- (void)pid:(void (^)(int))arg1;
- (int)pid;
@end

