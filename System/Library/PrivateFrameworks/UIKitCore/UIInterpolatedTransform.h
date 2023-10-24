//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedTransform : NSObject
{
    CDStruct_e79446ac _transform;	// 8 = 0x8
    long long _rotationDirection;	// 80 = 0x50
}

+ (id)zeroCompatibleWithVector:(id)arg1;	// IMP=0x0010000001311929
+ (id)epsilonCompatibleWithVector:(id)arg1;	// IMP=0x0010000001311809
+ (id)valueWithDecomposedTransform:(CDStruct_e79446ac)arg1 rotationDirection:(long long)arg2;	// IMP=0x00100000013112cc
+ (id)valueWithDecomposedTransform:(CDStruct_e79446ac)arg1;	// IMP=0x00100000013112b8
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1;	// IMP=0x00100000013111e8
- (void)reinitWithVector:(id)arg1;	// IMP=0x0000000001312a7f
- (id)multiplyByVector:(id)arg1;	// IMP=0x0000000001312a1b
- (id)multiplyByScalar:(double)arg1;	// IMP=0x00000000013129cc
- (id)addVector:(id)arg1;	// IMP=0x0000000001312968
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_500c0369)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;	// IMP=0x0000000001311d7b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001311d1e
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isUndefined;	// IMP=0x0000000001311b73
- (_Bool)isCompatibleWith:(id)arg1;	// IMP=0x0000000001311b6b
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;	// IMP=0x0000000001311a00
- (id)interpolateTo:(id)arg1 progress:(double)arg2;	// IMP=0x0000000001311768
- (id)getValue;	// IMP=0x000000000131131b

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
