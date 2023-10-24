//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIDynamicAnimation.h"

__attribute__((visibility("hidden")))
@interface _UIDynamicValueConvergenceAnimation : _UIDynamicAnimation
{
    CDUnknownBlockType _applier;	// 24 = 0x18
    double _value;	// 32 = 0x20
    double _targetValue;	// 40 = 0x28
    double _convergenceRate;	// 48 = 0x30
    double _minimumDifference;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000133e3f
@property(nonatomic) double minimumDifference; // @synthesize minimumDifference=_minimumDifference;
@property(nonatomic) double convergenceRate; // @synthesize convergenceRate=_convergenceRate;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (_Bool)_animateForInterval:(double)arg1;	// IMP=0x0000000000133b31
- (void)runWithValueApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000133ac1
- (id)initWithValue:(double)arg1 targetValue:(double)arg2 convergenceRate:(double)arg3 minimumDifference:(double)arg4;	// IMP=0x0000000000133a35

@end

