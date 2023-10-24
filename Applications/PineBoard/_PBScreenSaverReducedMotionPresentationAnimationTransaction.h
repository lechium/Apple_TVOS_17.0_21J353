//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class PBScreenSaverContentPresentingViewController, UIViewPropertyAnimator;

@interface _PBScreenSaverReducedMotionPresentationAnimationTransaction : BSTransaction
{
    _Bool _animated;	// 8 = 0x8
    PBScreenSaverContentPresentingViewController *_screenSaverViewController;	// 16 = 0x10
    UIViewPropertyAnimator *_alphaAnimator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000017fbbc
@property(readonly, nonatomic) UIViewPropertyAnimator *alphaAnimator; // @synthesize alphaAnimator=_alphaAnimator;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) PBScreenSaverContentPresentingViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
- (void)_didComplete;	// IMP=0x001000000017fa68
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x001000000017f9f0
- (void)_begin;	// IMP=0x001000000017f4ed
- (_Bool)_canBeInterrupted;	// IMP=0x001000000017f4e5

@end

