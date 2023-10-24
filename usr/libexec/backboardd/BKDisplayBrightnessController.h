//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKOrientationManager, BSCompoundAssertion, BSMutableIntegerMap, BrightnessSystem, NSDictionary, NSString;
@protocol BSInvalidatable;

@interface BKDisplayBrightnessController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    float _brightnessLevel;	// 12 = 0xc
    int _brightnessLevelCurve;	// 16 = 0x10
    unsigned long long _previousDarwinNotificationBrightnessLevel;	// 24 = 0x18
    unsigned long long _previousBrightnessLevelOptions;	// 32 = 0x20
    NSString *_previousBrightnessLevelKey;	// 40 = 0x28
    NSDictionary *_previousBrightnessLevelValue;	// 48 = 0x30
    id <BSInvalidatable> _systemShellObserving;	// 56 = 0x38
    BKOrientationManager *_orientationManager;	// 64 = 0x40
    id <BSInvalidatable> _orientationManagerObserving;	// 72 = 0x48
    _Bool _didSetBrightnessCurve;	// 80 = 0x50
    int _notificationToken;	// 84 = 0x54
    BSMutableIntegerMap *_backlightClientPerPID;	// 88 = 0x58
    BrightnessSystem *_brightnessSystem;	// 96 = 0x60
    BSCompoundAssertion *_suppressClientNotificationsAssertion;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x00200000000683ea
- (void).cxx_destruct;	// IMP=0x0020000000067a89
- (void)orientationManager:(id)arg1 userInterfaceOrientationMayHaveChanged:(long long)arg2 isDeviceOrientationLocked:(_Bool)arg3;	// IMP=0x0010000000067a21
- (void)systemShellDidFinishLaunching:(id)arg1;	// IMP=0x0010000000067a06
- (void)clientDied:(id)arg1;	// IMP=0x0010000000067976
- (void)setBacklightFeatures:(id)arg1 forPID:(int)arg2;	// IMP=0x001000000006784b
- (void)setBacklightLocked:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0010000000067683
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000006760b
- (id)propertyForKey:(id)arg1;	// IMP=0x00100000000675a4
@property(nonatomic) int displayBrightnessCurve;
- (void)setAutoBrightnessEnabled:(_Bool)arg1;	// IMP=0x00100000000674f5
@property(readonly, nonatomic, getter=isALSSupported) _Bool ALSSupported;
@property(readonly, nonatomic, getter=isBrightnessLevelControlAvailable) _Bool brightnessLevelControlAvailable;
@property(readonly, nonatomic, getter=isAutoBrightnessAvailable) _Bool autoBrightnessAvailable;
- (void)setBrightnessLevel:(float)arg1 reason:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0010000000066f85
@property(readonly, nonatomic) float brightnessLevel;
@property(readonly, nonatomic) float unentitledBrightnessLevel;
- (void)setMinimumBrightnessLevel:(float)arg1 fadeDuration:(float)arg2;	// IMP=0x0010000000066d99
- (unsigned char)backlightArchitectureVersion;	// IMP=0x0010000000066d1b
- (id)suppressBrightnessNotificationsForReason:(id)arg1;	// IMP=0x0010000000066cac
- (void)dealloc;	// IMP=0x0010000000066c44
- (id)_initWithBrightnessSystem:(id)arg1 systemShellSentinel:(id)arg2 orientationManager:(id)arg3;	// IMP=0x0010000000066a27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

