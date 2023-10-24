//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class NSString, TVSPPillView, UIViewPropertyAnimator, _TVSPPillViewAnimationContext;

__attribute__((visibility("hidden")))
@interface _TVSPPillViewEmptyAnimationTransaction : BSTransaction
{
    TVSPPillView *_pillView;	// 8 = 0x8
    _TVSPPillViewAnimationContext *_animationContext;	// 16 = 0x10
    UIViewPropertyAnimator *_opacityAnimator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000042690
@property(readonly, nonatomic) UIViewPropertyAnimator *opacityAnimator; // @synthesize opacityAnimator=_opacityAnimator;
@property(readonly, nonatomic) _TVSPPillViewAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property(readonly, nonatomic) TVSPPillView *pillView; // @synthesize pillView=_pillView;
- (void)_didComplete;	// IMP=0x00000000000424f0
- (void)_willFailWithReason:(id)arg1;	// IMP=0x0000000000042380
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x0000000000042210
- (void)_begin;	// IMP=0x0000000000042120
- (_Bool)_canBeInterrupted;	// IMP=0x0000000000042100
- (id)initWithPillView:(id)arg1 animationContext:(id)arg2;	// IMP=0x0000000000042000

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

