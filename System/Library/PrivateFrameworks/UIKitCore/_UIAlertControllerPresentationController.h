//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPresentationController.h"

@class NSLayoutConstraint, NSString, UIAlertVisualStyleUpdatableConstraints, UIGestureRecognizer, UIView, _UIKeyboardLayoutAlignmentView;
@protocol _UIForcePresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerPresentationController : UIPresentationController
{
    UIView *_dimmingView;	// 8 = 0x8
    _UIKeyboardLayoutAlignmentView *keyboardLayoutAlignmentView;	// 16 = 0x10
    UIView *keyboardLayoutAlignmentAvailableSpaceView;	// 24 = 0x18
    UIAlertVisualStyleUpdatableConstraints *_visualStyleUpdatableConstraints;	// 32 = 0x20
    NSLayoutConstraint *_topAvailableSpaceConstraint;	// 40 = 0x28
    NSLayoutConstraint *_bottomAvailableSpaceConstraint;	// 48 = 0x30
    _Bool constraintsPrepared;	// 56 = 0x38
    _Bool _sourceViewSnapshotAndScaleTransformSuppressed;	// 57 = 0x39
    _Bool _chromeHidden;	// 58 = 0x3a
    _Bool __isCurrentContext;	// 59 = 0x3b
    _Bool __shouldRespectNearestCurrentContextPresenter;	// 60 = 0x3c
    UIGestureRecognizer *_panningGestureRecognizer;	// 64 = 0x40
    CDUnknownBlockType _presentationPhaseCompletionBlock;	// 72 = 0x48
    id <_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;	// 80 = 0x50
    UIView *_revealContainerView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000ee7ac
@property(setter=_setShouldRespectNearestCurrentContextPresenter:) _Bool _shouldRespectNearestCurrentContextPresenter; // @synthesize _shouldRespectNearestCurrentContextPresenter=__shouldRespectNearestCurrentContextPresenter;
@property(setter=_setIsCurrentContext:) _Bool _isCurrentContext; // @synthesize _isCurrentContext=__isCurrentContext;
@property(nonatomic, getter=_isChromeHidden, setter=_setChromeHidden:) _Bool _chromeHidden; // @synthesize _chromeHidden;
@property(nonatomic) _Bool _sourceViewSnapshotAndScaleTransformSuppressed; // @synthesize _sourceViewSnapshotAndScaleTransformSuppressed;
@property(readonly, nonatomic) UIView *_revealContainerView; // @synthesize _revealContainerView;
@property(nonatomic) __weak id <_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate; // @synthesize forcePresentationControllerDelegate=_forcePresentationControllerDelegate;
@property(copy, nonatomic) CDUnknownBlockType presentationPhaseCompletionBlock; // @synthesize presentationPhaseCompletionBlock=_presentationPhaseCompletionBlock;
@property(retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer; // @synthesize panningGestureRecognizer=_panningGestureRecognizer;
@property(readonly) UIView *_dimmingView; // @synthesize _dimmingView;
- (id)_presentedAlertController;	// IMP=0x00000000000ee53e
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;	// IMP=0x00000000000ee536
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x00000000000ee529
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000ee46a
- (id)_createVisualStyleForProvider:(id)arg1;	// IMP=0x00000000000ee3e4
- (void)_presentedAlertControllerDidAdapt;	// IMP=0x00000000000ee380
- (void)_updateConstraintsIfNecessary;	// IMP=0x00000000000ee154
- (void)_prepareConstraintsIfNecessary;	// IMP=0x00000000000edab8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000ed9f0
- (_Bool)_shouldOccludeDuringPresentation;	// IMP=0x00000000000ed982
- (_Bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;	// IMP=0x00000000000ed96d
- (_Bool)_preserveResponderAcrossWindows;	// IMP=0x00000000000ed8ff
- (void)presentationTransitionWillBegin;	// IMP=0x00000000000ed6e5
- (void)_willRunTransitionForCurrentStateDeferred:(_Bool)arg1;	// IMP=0x00000000000ed683
- (void)_prepareDimmingViewIfNecessary;	// IMP=0x00000000000ed461
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;	// IMP=0x00000000000ed42b
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000000ed2ba
- (_Bool)_shouldRespectDefinesPresentationContext;	// IMP=0x00000000000ed2a8
- (_Bool)shouldPresentInFullscreen;	// IMP=0x00000000000ed293
- (void)containerViewDidLayoutSubviews;	// IMP=0x00000000000ed1e4
- (void)containerViewWillLayoutSubviews;	// IMP=0x00000000000ed1a9
- (long long)adaptivePresentationStyle;	// IMP=0x00000000000ed19e
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x00000000000ed08c
- (_Bool)_canCommitPresentation;	// IMP=0x00000000000ed084
- (_Bool)_canDismissPresentation;	// IMP=0x00000000000ecfe3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

