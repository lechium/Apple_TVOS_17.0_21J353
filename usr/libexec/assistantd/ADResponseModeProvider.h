//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFModesConfiguration, AFNotifyObserver, AVOutputContext, MISSING_TYPE, NSString;
@protocol OS_dispatch_queue;

@interface ADResponseModeProvider : NSObject
{
    AFNotifyObserver *_connectedOutputDevicesObserver;	// 8 = 0x8
    AFNotifyObserver *_ringerStateObserver;	// 16 = 0x10
    AVOutputContext *_sharedSystemAudioContext;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_accessQueue;	// 40 = 0x28
    AFModesConfiguration *_currentModesConfiguration;	// 48 = 0x30
    NSString *_currentMode;	// 56 = 0x38
    _Bool _isConnectedToAudioAccessory;	// 64 = 0x40
    _Bool _isConnectedToThirdPartyBT;	// 65 = 0x41
    _Bool _isConnectedToAppleBTHeadphones;	// 66 = 0x42
    long long _previousDeviceMotion;	// 72 = 0x48
    _Bool _previousScreenOnState;	// 80 = 0x50
    _Bool _previousScreenEngagement;	// 81 = 0x51
    MISSING_TYPE *_voiceFeedbackSetting;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000007a755
- (void)_connectedOutputDevicesDidChange:(id)arg1;	// IMP=0x001000000007a6b9
- (void)_fetchConnectedAudioAccessoryState;	// IMP=0x001000000007a636
- (id)internalModeOverride:(id)arg1;	// IMP=0x001000000007a487
- (id)_computeModeForMacOS;	// IMP=0x001000000007a24f
- (id)_computeModeForWatchOS;	// IMP=0x0010000000079e99
- (id)_computeModeForiOS;	// IMP=0x001000000007975f
- (void)_computeMode;	// IMP=0x0010000000079714
- (long long)_isVoiceOverEnabled;	// IMP=0x001000000007969f
- (_Bool)_isNavigationActive;	// IMP=0x0010000000079697
- (_Bool)_isSticky;	// IMP=0x00100000000794c1
- (_Bool)_isScreenEngaged;	// IMP=0x0010000000079139
- (long long)_voiceFeedbackSetting;	// IMP=0x00100000000790da
- (_Bool)_overrideModeWhenInAmbient;	// IMP=0x0010000000078ff7
- (_Bool)_isThirdPartyBTConnected;	// IMP=0x0010000000078fee
- (_Bool)_isAudioAccessoryConnected;	// IMP=0x0010000000078fe5
- (_Bool)_isDeviceSilent;	// IMP=0x0010000000078efe
- (id)fetchCurrentMode;	// IMP=0x0010000000078e2e
- (void)updateModesConfiguration:(id)arg1;	// IMP=0x0010000000078d93
- (id)init;	// IMP=0x0010000000078bba

@end
