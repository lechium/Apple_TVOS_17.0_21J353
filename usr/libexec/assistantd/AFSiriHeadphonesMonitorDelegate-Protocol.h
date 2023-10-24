//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AFBluetoothHeadphoneInEarDetectionState, AFSiriAudioRoute, NSString;

@protocol AFSiriHeadphonesMonitorDelegate <NSObject>

@optional
- (void)inEarDetectionStateDidChangeForBTAddress:(NSString *)arg1 fromState:(AFBluetoothHeadphoneInEarDetectionState *)arg2 toState:(AFBluetoothHeadphoneInEarDetectionState *)arg3;
- (void)inEarDetectionStateDidChangeForBTAddress:(NSString *)arg1 toState:(AFBluetoothHeadphoneInEarDetectionState *)arg2;
- (void)authenticationCapabilityDidChange:(_Bool)arg1 forBTAddress:(NSString *)arg2;
- (void)currentAudioRouteDidChange:(AFSiriAudioRoute *)arg1;
- (void)privateAudioSessionStateDidChange:(unsigned long long)arg1;
@end
