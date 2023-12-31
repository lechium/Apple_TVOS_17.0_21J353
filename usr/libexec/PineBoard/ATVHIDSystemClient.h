//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ATVHIDSystemClient : NSObject
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
}

+ (_Bool)isVolumeEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00400000000e9c61
+ (_Bool)isLoopbackVolumeEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000e9a55
+ (id)sharedInstance;	// IMP=0x00100000000e97b4
- (void)flashSILMorseCode:(id)arg1;	// IMP=0x00200000000ea20b
- (void)setSILState_Off;	// IMP=0x00100000000ea1f1
- (void)setSILState_On;	// IMP=0x00100000000ea1d7
- (void)_setSILState_On:(id)arg1;	// IMP=0x00100000000ea1d1
- (void)_setSILState_Off:(id)arg1;	// IMP=0x00100000000ea1cb
- (void)_processGenericDesktopEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000e9ec2
- (void)_processBatterySystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000e9eaf
- (void)_processAppleVendorDebugEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000e9e9c
- (void)_processAppleVendorIRRemoteEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000e9e89
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000e9cfe
- (void)setupHIDEventRouters;	// IMP=0x00100000000e9cb4
- (void)dealloc;	// IMP=0x00100000000e99d2
- (int)_init;	// IMP=0x00100000000e9879
- (id)init;	// IMP=0x00100000000e980b

@end

