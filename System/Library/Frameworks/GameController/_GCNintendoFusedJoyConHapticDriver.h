//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _GCDriverClientInterface;

__attribute__((visibility("hidden")))
@interface _GCNintendoFusedJoyConHapticDriver : NSObject
{
    id <_GCDriverClientInterface> _leftDriver;	// 8 = 0x8
    id <_GCDriverClientInterface> _rightDriver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002c238
- (void)setHapticMotor:(unsigned long long)arg1 frequency:(float)arg2 amplitude:(float)arg3;	// IMP=0x000000000002c1d8
- (void)enqueueTransient:(id)arg1 hapticMotor:(unsigned long long)arg2;	// IMP=0x000000000002c15e
- (void)enableHaptics;	// IMP=0x000000000002c123
- (id)getDriver:(unsigned long long)arg1;	// IMP=0x000000000002c10b
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000002bfdd

@end
