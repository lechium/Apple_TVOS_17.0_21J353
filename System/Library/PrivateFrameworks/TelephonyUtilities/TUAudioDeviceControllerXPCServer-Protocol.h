//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString;

@protocol TUAudioDeviceControllerXPCServer <NSObject>
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(NSString *)arg1;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(NSString *)arg1;
@end
