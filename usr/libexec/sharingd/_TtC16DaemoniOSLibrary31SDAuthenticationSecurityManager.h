//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16DaemoniOSLibrary31SDAuthenticationSecurityManager : NSObject
{
    MISSING_TYPE *lastUnlockDate;	// 6 = 0x6
    MISSING_TYPE *lastLockDate;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *wristDetectionGenerator;	// 1852339301 = 0x6e687465
    MISSING_TYPE *deviceUnlockedGenerator;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *deviceBiolockedGenerator;	// 0 = 0x0
    MISSING_TYPE *deviceHasPasscodeGenerator;	// 3852320 = 0x3ac820
    MISSING_TYPE *sleepModeGenerator;	// 201393 = 0x312b1
    MISSING_TYPE *motionGenerator;	// 3852320 = 0x3ac820
    MISSING_TYPE *faceIDEnabledGenerator;	// 0 = 0x0
    MISSING_TYPE *raiseToWakeHandler;	// 2 = 0x2
    MISSING_TYPE *lastUnlockedByPairedUnlockGenerator;	// 0 = 0x0
    MISSING_TYPE *deviceIsBioUnarmedGenerator;	// 1935892319 = 0x73635f5f
    MISSING_TYPE *deviceIsInClassDGenerator;	// 103 = 0x67
    MISSING_TYPE *deviceIsInBiolockoutGenerator;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *queue;	// 0 = 0x0
    MISSING_TYPE *raiseToWakeTimes;	// 0 = 0x0
    MISSING_TYPE *allowsLenientMotionConditions;	// 0 = 0x0
    MISSING_TYPE *lastUnlockedAndOnWristDate;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000020afb0
- (id)init;	// IMP=0x001000000020af50
- (void)handleOnWristStateChanged;	// IMP=0x001000000020aec0
- (void)handleKeyBagStateChanged;	// IMP=0x001000000020ad70

@end

