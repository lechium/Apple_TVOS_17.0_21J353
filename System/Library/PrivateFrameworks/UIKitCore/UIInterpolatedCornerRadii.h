//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedCornerRadii : NSObject
{
    struct CACornerRadii _cornerRadii;	// 8 = 0x8
}

+ (id)zeroCompatibleWithVector:(id)arg1;	// IMP=0x0010000001003931
+ (id)epsilonCompatibleWithVector:(id)arg1;	// IMP=0x0010000001003884
+ (id)valueWithCornerRadii:(struct CACornerRadii)arg1;	// IMP=0x00100000010034ca
@property(readonly, copy) NSString *debugDescription;
- (id)multiplyByVector:(id)arg1;	// IMP=0x0000000001004591
- (id)multiplyByScalar:(double)arg1;	// IMP=0x000000000100454c
- (id)addVector:(id)arg1;	// IMP=0x00000000010044f7
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_500c0369)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;	// IMP=0x0000000001003a3d
- (void)reinitWithVector:(id)arg1;	// IMP=0x0000000001003a17
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010039c7
- (id)getValue;	// IMP=0x00000000010037fe
- (_Bool)isUndefined;	// IMP=0x00000000010036da
- (_Bool)isCompatibleWith:(id)arg1;	// IMP=0x00000000010036d2
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;	// IMP=0x000000000100358d
- (id)interpolateTo:(id)arg1 progress:(double)arg2;	// IMP=0x00000000010034fc

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

