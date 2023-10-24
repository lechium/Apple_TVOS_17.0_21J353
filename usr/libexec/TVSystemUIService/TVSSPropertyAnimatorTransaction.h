//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class UIViewPropertyAnimator;
@protocol UITimingCurveProvider;

@interface TVSSPropertyAnimatorTransaction : BSTransaction
{
    id <UITimingCurveProvider> _timingParameters;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    double _delay;	// 24 = 0x18
    CDUnknownBlockType _animations;	// 32 = 0x20
    UIViewPropertyAnimator *_animator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000012dbf0
@property(readonly, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(readonly, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) id <UITimingCurveProvider> timingParameters; // @synthesize timingParameters=_timingParameters;
- (void)_willFailWithReason:(id)arg1;	// IMP=0x001000000012daa0
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x001000000012da10
- (void)_begin;	// IMP=0x001000000012d7c0
- (_Bool)_canBeInterrupted;	// IMP=0x001000000012d7a0
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x001000000012d520
- (id)initWithTimingParameters:(id)arg1 duration:(double)arg2 delay:(double)arg3;	// IMP=0x001000000012d170
- (id)initWithTimingParameters:(id)arg1 duration:(double)arg2;	// IMP=0x001000000012d0d0
- (id)initWithSpringTimingParameters:(id)arg1 delay:(double)arg2;	// IMP=0x001000000012d010
- (id)initWithSpringTimingParameters:(id)arg1;	// IMP=0x001000000012cf80

@end

