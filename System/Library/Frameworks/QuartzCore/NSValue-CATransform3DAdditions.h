//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (CATransform3DAdditions)
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1;	// IMP=0x002000000000cd17
+ (id)valueWithCAColorMatrix:(struct CAColorMatrix)arg1;	// IMP=0x00200000000a7515
+ (id)valueWithCAPoint3D:(struct CAPoint3D)arg1;	// IMP=0x002000000014f38a
+ (id)valueWithCACornerRadii:(struct CACornerRadii)arg1;	// IMP=0x0020000000236666
@property(readonly) struct CATransform3D CATransform3DValue;
- (unsigned long long)CA_copyNumericValue:(double *)arg1;	// IMP=0x0010000000051ce8
- (unsigned long long)CA_numericValueCount;	// IMP=0x0010000000051c0b
- (struct Object *)CA_copyRenderValue;	// IMP=0x001000000005179b
- (struct CAColorMatrix)CAColorMatrixValue;	// IMP=0x00100000000a74d1
- (struct CAPoint3D)CAPoint3DValue;	// IMP=0x001000000014f34e
- (double)CA_distanceToValue:(id)arg1;	// IMP=0x001000000021c090
- (id)CA_roundToIntegerFromValue:(id)arg1;	// IMP=0x001000000021bf2a
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;	// IMP=0x001000000021b953
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;	// IMP=0x001000000021b2c6
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;	// IMP=0x001000000021ab55
- (struct CACornerRadii)CACornerRadiiValue;	// IMP=0x0010000000236626
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x0010000000273f09
- (id)CAMLType;	// IMP=0x0010000000273df0
- (struct CGAffineTransform)CA_CGAffineTransformValue;	// IMP=0x0010000000275170
@end

