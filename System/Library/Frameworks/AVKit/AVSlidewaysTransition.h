//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISpringTimingParameters;

__attribute__((visibility("hidden")))
@interface AVSlidewaysTransition : NSObject
{
    UISpringTimingParameters *_springTimingParameters;	// 8 = 0x8
    _Bool _shouldMovePresentingViewInParallel;	// 16 = 0x10
    long long _transitionDirection;	// 24 = 0x18
}

+ (id)viewPropertyAnimatorWithParameters:(id)arg1;	// IMP=0x00100000000e8286
+ (id)springTimingParameters;	// IMP=0x00100000000e823f
- (void).cxx_destruct;	// IMP=0x00000000000e8b28
@property(nonatomic) _Bool shouldMovePresentingViewInParallel; // @synthesize shouldMovePresentingViewInParallel=_shouldMovePresentingViewInParallel;
@property(nonatomic) long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
- (void)animationEnded:(_Bool)arg1;	// IMP=0x00000000000e8afc
- (void)animateTransition:(id)arg1;	// IMP=0x00000000000e85ec
- (struct CGRect)finalFrameForViewController:(id)arg1;	// IMP=0x00000000000e858f
- (struct CGRect)initialFrameForViewController:(id)arg1;	// IMP=0x00000000000e8497
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000000e8414
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000000e83ef
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000000e83b1
- (void)prepareViewController:(id)arg1 forTransitionInDirection:(long long)arg2;	// IMP=0x00000000000e8317

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

