//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCMotion.h"

@class CMMotionManager, GCController;

__attribute__((visibility("hidden")))
@interface _GCAppleTVRemoteMotionProfile : GCMotion
{
    CDStruct_31142d93 _gravity;	// 8 = 0x8
    CDStruct_31142d93 _prevGravity;	// 32 = 0x20
    CDStruct_31142d93 _userAcceleration;	// 56 = 0x38
    struct GCQuaternion _attitude;	// 80 = 0x50
    struct GCQuaternion _prevAttitude;	// 112 = 0x70
    CDStruct_27cd59c8 _eulerAngles;	// 144 = 0x90
    CDStruct_27cd59c8 _prevEulerAngles;	// 168 = 0xa8
    CDStruct_31142d93 _rotationRate;	// 192 = 0xc0
    float _tip;	// 216 = 0xd8
    float _tilt;	// 220 = 0xdc
    CMMotionManager *_motionMgr;	// 224 = 0xe0
    _Bool _linkedOnOrAfterCompassFeature;	// 232 = 0xe8
    _Bool _motionLite;	// 233 = 0xe9
    _Bool _compassEnabled;	// 234 = 0xea
    CDUnknownBlockType _valueChangedHandler;	// 240 = 0xf0
    CDUnknownBlockType _internalValueChangedHandler;	// 248 = 0xf8
    _Bool _emulatedMotionEnabled;	// 256 = 0x100
    _Bool _motionUpdatedEnabled;	// 257 = 0x101
    _Bool _paused;	// 258 = 0x102
    GCController *_controller;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00000000000f0076
- (id)controller;	// IMP=0x00000000000f005d
- (void)_setRotationRate:(CDStruct_39925896)arg1;	// IMP=0x00000000000f003d
- (void)_setAttitude:(struct GCQuaternion)arg1;	// IMP=0x00000000000f001f
- (void)_setUserAcceleration:(CDStruct_39925896)arg1;	// IMP=0x00000000000effff
- (void)_setGravity:(CDStruct_39925896)arg1;	// IMP=0x00000000000effdf
- (_Bool)_isUpdatingDeviceMotion;	// IMP=0x00000000000effca
- (void)_pauseMotionUpdates:(_Bool)arg1;	// IMP=0x00000000000efecb
- (void)_stopDeviceMotionUpdates;	// IMP=0x00000000000efc2d
- (void)_stopDeviceMotionUpdatesHelper;	// IMP=0x00000000000efbcc
- (void)_startDeviceMotionUpdates;	// IMP=0x00000000000ef92e
- (void)_startDeviceMotionUpdatesHelper;	// IMP=0x00000000000ef7aa
- (CDUnknownBlockType)_motionLiteFusedHandler;	// IMP=0x00000000000eefa1
- (_Bool)isEmulatedMicroGamepad;	// IMP=0x00000000000eeee7
- (void)setInternalValueChangedHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eec5e
- (CDUnknownBlockType)internalValueChangedHandler;	// IMP=0x00000000000eec41
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ee9b8
- (CDUnknownBlockType)valueChangedHandler;	// IMP=0x00000000000ee99b
- (float)_tilt;	// IMP=0x00000000000ee989
- (float)_tip;	// IMP=0x00000000000ee977
- (CDStruct_39925896)rotationRate;	// IMP=0x00000000000ee915
- (struct GCQuaternion)attitude;	// IMP=0x00000000000ee8b2
- (_Bool)hasRotationRate;	// IMP=0x00000000000ee8a2
- (_Bool)hasAttitude;	// IMP=0x00000000000ee892
- (_Bool)hasAttitudeAndRotationRate;	// IMP=0x00000000000ee844
- (void)_setCompassEnabled:(_Bool)arg1;	// IMP=0x00000000000ee834
- (_Bool)hasGravityAndUserAcceleration;	// IMP=0x00000000000ee82c
- (CDStruct_39925896)userAcceleration;	// IMP=0x00000000000ee7ca
- (CDStruct_39925896)gravity;	// IMP=0x00000000000ee768
- (void)_setMotionLite:(_Bool)arg1;	// IMP=0x00000000000ee758
- (id)initWithController:(id)arg1;	// IMP=0x00000000000ee4d8

@end

