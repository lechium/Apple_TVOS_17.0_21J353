//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface PXViewControllerSwipeDownDismissalController : NSObject
{
    MISSING_TYPE *state;	// 8 = 0x8
    MISSING_TYPE *viewControllerTransitionObservation;	// 16 = 0x10
    MISSING_TYPE *viewControllerTransition;	// 32 = 0x20
    MISSING_TYPE *referenceView;	// 40 = 0x28
    MISSING_TYPE *initialGestureLocation;	// 48 = 0x30
    MISSING_TYPE *currentGestureLocation;	// 72 = 0x48
    MISSING_TYPE *currentGestureVelocity;	// 96 = 0x60
    MISSING_TYPE *initialItemPlacement;	// 112 = 0x70
    MISSING_TYPE *swipeDownTracker;	// 120 = 0x78
    MISSING_TYPE *releaseAnimationProgressAnimator;	// 128 = 0x80
    MISSING_TYPE *releaseAnimationDismissalProgressAnimator;	// 136 = 0x88
    MISSING_TYPE *centerOffsetAnimatorObservation;	// 144 = 0x90
    MISSING_TYPE *centerOffsetAnimator;	// 160 = 0xa0
    MISSING_TYPE *targetCenter;	// 168 = 0xa8
    MISSING_TYPE *sourceSize;	// 192 = 0xc0
    MISSING_TYPE *targetSize;	// 216 = 0xd8
    MISSING_TYPE *targetCancelled;	// 233 = 0xe9
    MISSING_TYPE *updater;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00000000000450a0
- (id)init;	// IMP=0x0000000000045040
- (void)updateCurrentPlacement;	// IMP=0x0000000000045010
- (void)updateSwipeDownTracker;	// IMP=0x00000000000443d0
- (void)updateInitialPlacement;	// IMP=0x0000000000043140
- (void)setNeedsUpdate;	// IMP=0x0000000000043110

@end
