//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIKeyboardCameraGrabberView, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIKeyboardCameraOverlayPresentationController
{
    NSLayoutConstraint *_topLayoutConstraint;	// 8 = 0x8
    UIPanGestureRecognizer *_panGestureRecognizer;	// 16 = 0x10
    UIKeyboardCameraGrabberView *_grabberView;	// 24 = 0x18
    double _keyboardCameraNormalHeight;	// 32 = 0x20
    double _keyboardCameraFullScreenHeight;	// 40 = 0x28
    double _keyboardCameraHeight;	// 48 = 0x30
    double _panningStartingHeight;	// 56 = 0x38
    _Bool _isLandscape;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000053e63e
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000053e297
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x000000000053e165
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000053e127
- (void)dismissalTransitionWillBegin;	// IMP=0x000000000053e0e6
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000053e088
- (void)presentationTransitionWillBegin;	// IMP=0x000000000053dfe2
- (void)_installGrabber;	// IMP=0x000000000053db94
- (void)_handlePan:(id)arg1;	// IMP=0x000000000053d851
- (void)_determinePortraitHeights;	// IMP=0x000000000053d553
- (_Bool)updatesGuideDuringRotation;	// IMP=0x000000000053d53e

@end

