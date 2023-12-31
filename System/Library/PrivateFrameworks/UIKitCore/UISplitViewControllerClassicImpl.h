//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIBarButtonItem, UIFocusContainerGuide, UIGestureRecognizer, UIPopoverController, UIResponder, UISnapshotView, UISplitViewController, UISplitViewControllerDisplayModeBarButtonItem, UITapGestureRecognizer, UITraitCollection, UIView, UIViewController;
@protocol UISplitViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UISplitViewControllerClassicImpl : NSObject
{
    UISplitViewController *_svc;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    UIBarButtonItem *_barButtonItem;	// 24 = 0x18
    UISplitViewControllerDisplayModeBarButtonItem *_displayModeButtonItem;	// 32 = 0x20
    NSString *_buttonTitle;	// 40 = 0x28
    UIPopoverController *_hiddenPopoverController;	// 48 = 0x30
    UIView *_rotationSnapshotView;	// 56 = 0x38
    UIResponder *_postTransitionResponder;	// 64 = 0x40
    UISnapshotView *_collapsingMasterSnapshotView;	// 72 = 0x48
    UISnapshotView *_collapsingDetailSnapshotView;	// 80 = 0x50
    float _gutterWidth;	// 88 = 0x58
    long long _rotatingFromOrientation;	// 96 = 0x60
    long long _lastPresentedOrientation;	// 104 = 0x68
    struct CGRect _rotatingFromMasterViewFrame;	// 112 = 0x70
    struct CGRect _rotatingToMasterViewFrame;	// 144 = 0x90
    UIView *_underBarSeparatorView;	// 176 = 0xb0
    UITraitCollection *_traitCollectionWhenRemovedFromWindow;	// 184 = 0xb8
    _Bool _presentsWithGesture;	// 192 = 0xc0
    UIGestureRecognizer *_popoverPresentationGestureRecognizer;	// 200 = 0xc8
    UITapGestureRecognizer *_menuGestureRecognizer;	// 208 = 0xd0
    long long _preferredDisplayMode;	// 216 = 0xd8
    long long _effectiveTargetDisplayMode;	// 224 = 0xe0
    long long _pendingDisplayModeChangeCount;	// 232 = 0xe8
    long long _rotatingMasterChange;	// 240 = 0xf0
    _Bool _useChangingBoundsLayout;	// 248 = 0xf8
    long long _transitioningMasterChange;	// 256 = 0x100
    UITraitCollection *_transitioningToTraitCollection;	// 264 = 0x108
    long long _transitioningToInternalMode;	// 272 = 0x110
    long long _lastNotifiedDisplayMode;	// 280 = 0x118
    struct CGRect _viewBoundsBeforeCollapse;	// 288 = 0x120
    long long _suspendedState;	// 320 = 0x140
    long long _primaryEdge;	// 328 = 0x148
    struct {
        unsigned int invalidDelegateHiddenMasterAspectRatios:2;
        unsigned int delegateHiddenMasterAspectRatios:2;
        unsigned int delegateImplementsShouldHide:1;
        unsigned int hidden:3;
        unsigned int masterOnSlide:1;
        unsigned int delegateWantsWillShowCallback:1;
        unsigned int delegateWantsWillHideCallback:1;
        unsigned int delegateWantsWillPresentCallback:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int delegateWantsShowViewController:1;
        unsigned int delegateWantsShowDetailViewController:1;
        unsigned int delegateWantsCollapseSecondaryViewController:1;
        unsigned int delegateWantsSeparateSecondaryViewController:1;
        unsigned int delegateWantsPrimaryViewControllerForCollapse:1;
        unsigned int delegateWantsPrimaryViewControllerForExpanding:1;
        unsigned int collapsedState:2;
        unsigned int primaryHidingState:2;
        unsigned int primaryHidingStateForCurrentOrientation:2;
        unsigned int delegateWantsWillChangeToDisplayMode:1;
        unsigned int delegateWantsTargetDisplayModeForAction:1;
        unsigned int delegateCanModifyFirstResponderOnTraitCollectionTransition:1;
        unsigned int pendingPresentMasterViewController:1;
        unsigned int pendingUpdateTargetDisplayMode:1;
        unsigned int collapsingClockwise:1;
        unsigned int firstResponderChangedFromPostTransitionResponder:1;
        unsigned int firstResponderChangedFromPostTransitionResponderToNil:1;
        unsigned int inWillTransitionToSize:1;
        unsigned int hasTransitioningToInternalMode:1;
        unsigned int delegateImplementsPrivateIsPrimaryVisible:1;
        unsigned int delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended:1;
        unsigned int usesExtraWidePrimaryColumn:1;
        unsigned int usesDeviceOverlayPreferences:1;
        unsigned int prefersOverlayInRegularWidthPhone:1;
    } _splitViewControllerFlags;	// 336 = 0x150
    NSString *_displayModeButtonItemTitle;	// 344 = 0x158
    double _preferredPrimaryColumnWidthFraction;	// 352 = 0x160
    double _minimumPrimaryColumnWidth;	// 360 = 0x168
    double _maximumPrimaryColumnWidth;	// 368 = 0x170
    unsigned long long _lastFocusedChildViewControllerIndex;	// 376 = 0x178
    UIViewController *__preservedDetailController;	// 384 = 0x180
    CDUnknownBlockType __clearPreventRotationHook;	// 392 = 0x188
    UIFocusContainerGuide *_masterFocusContainerGuide;	// 400 = 0x190
    UIFocusContainerGuide *_detailFocusContainerGuide;	// 408 = 0x198
}

+ (double)_defaultGutterWidthInView:(id)arg1;	// IMP=0x001000000054ec14
- (void).cxx_destruct;	// IMP=0x000000000055926c
@property(readonly, nonatomic, getter=_detailFocusContainerGuide) UIFocusContainerGuide *detailFocusContainerGuide; // @synthesize detailFocusContainerGuide=_detailFocusContainerGuide;
@property(readonly, nonatomic, getter=_masterFocusContainerGuide) UIFocusContainerGuide *masterFocusContainerGuide; // @synthesize masterFocusContainerGuide=_masterFocusContainerGuide;
@property(copy, nonatomic, setter=_setClearPreventRotationHook:) CDUnknownBlockType _clearPreventRotationHook; // @synthesize _clearPreventRotationHook=__clearPreventRotationHook;
@property(retain, nonatomic, setter=_setPreservedDetailController:) UIViewController *_preservedDetailController; // @synthesize _preservedDetailController=__preservedDetailController;
@property(nonatomic) double maximumPrimaryColumnWidth; // @synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth;
@property(nonatomic) double minimumPrimaryColumnWidth; // @synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth;
@property(nonatomic) double preferredPrimaryColumnWidthFraction; // @synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction;
@property(copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle; // @synthesize _displayModeButtonItemTitle;
@property(nonatomic) _Bool presentsWithGesture; // @synthesize presentsWithGesture=_presentsWithGesture;
@property(nonatomic) __weak id <UISplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)arg1;	// IMP=0x000000000055912b
- (id)_deepestActionResponder;	// IMP=0x00000000005590db
- (double)_supplementaryDividerPosition;	// IMP=0x00000000005590d2
- (double)_primaryDividerPosition;	// IMP=0x00000000005590c9
- (_Bool)_isAnimating;	// IMP=0x00000000005590c1
@property(readonly, nonatomic) _Bool lockedForDelegateCallback;
@property(readonly, nonatomic) long long style;
- (id)sidebarBlurEffect;	// IMP=0x00000000005590a9
- (_Bool)_shouldShowNSToolbarSidebarToggle;	// IMP=0x00000000005590a1
@property(nonatomic) long long primaryBackgroundStyle;
- (id)_traitCollectionForChildEnvironment:(id)arg1;	// IMP=0x000000000055908b
- (id)_additionalViewControllersToCheckForUserActivity;	// IMP=0x0000000000558f03
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000000558a1a
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x000000000055875d
- (id)_allContainedViewControllers;	// IMP=0x000000000055871a
- (long long)_medusaStateForOrientation:(long long)arg1 viewWidth:(double)arg2;	// IMP=0x00000000005582f0
- (long long)_medusaState;	// IMP=0x000000000055821e
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;	// IMP=0x00000000005581bb
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000558095
- (void)viewWillLayoutSubviews;	// IMP=0x000000000055808f
- (void)__viewWillLayoutSubviews;	// IMP=0x0000000000557589
- (void)_setDetailViewFrame:(struct CGRect)arg1;	// IMP=0x00000000005574f2
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// IMP=0x00000000005574e0
- (void)_updateMasterViewControllerFrame;	// IMP=0x00000000005566da
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x00000000005564b3
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000055633a
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000005560a8
- (void)snapshotForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 masterChange:(long long)arg3;	// IMP=0x0000000000555beb
- (void)snapshotAllViews;	// IMP=0x000000000055597d
- (void)snapshotMasterView;	// IMP=0x00000000005553d9
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000554def
- (id)_childViewControllersToSendViewWillTransitionToSize;	// IMP=0x0000000000554c8d
- (_Bool)_isTransitioningFromCollapsedToSeparated;	// IMP=0x0000000000554c3f
- (void)_completeTransitionFromOrientation:(long long)arg1 masterChange:(long long)arg2;	// IMP=0x0000000000553f45
- (void)_animateTransitionToOrientation:(long long)arg1 duration:(double)arg2 masterChange:(long long)arg3;	// IMP=0x0000000000553c84
- (long long)_prepareToTransitionToViewSize:(struct CGSize)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 duration:(double)arg4;	// IMP=0x00000000005531b3
- (long long)_internalModeForTraitCollection:(id)arg1 orientation:(long long)arg2 viewSize:(struct CGSize)arg3 medusaState:(long long)arg4;	// IMP=0x0000000000553054
- (_Bool)_isRotating;	// IMP=0x0000000000553046
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x0000000000552fbb
- (_Bool)_handlesCounterRotationForPresentation;	// IMP=0x0000000000552fa7
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;	// IMP=0x0000000000552f75
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000552ed6
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000552d68
- (long long)preferredCenterStatusBarStyle;	// IMP=0x0000000000552c83
- (long long)preferredTrailingStatusBarStyle;	// IMP=0x0000000000552b9e
- (long long)preferredLeadingStatusBarStyle;	// IMP=0x0000000000552a80
- (id)childViewControllerForStatusBarStyle;	// IMP=0x00000000005529a8
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000552963
@property(nonatomic, setter=_setPrimaryOffscreenGestureMode:) long long _primaryOffscreenGestureMode;
- (id)_multitaskingDragExclusionRects;	// IMP=0x0000000000552912
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000552585
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000552429
- (id)_overridingPreferredFocusEnvironment;	// IMP=0x00000000005523e6
- (id)preferredFocusEnvironments;	// IMP=0x0000000000552087
- (id)preferredFocusedView;	// IMP=0x0000000000551d83
@property(readonly, nonatomic, getter=_lastFocusedChildViewControllerIndex) unsigned long long lastFocusedChildViewControllerIndex; // @synthesize lastFocusedChildViewControllerIndex=_lastFocusedChildViewControllerIndex;
- (void)_setUpFocusContainerGuides;	// IMP=0x0000000000551b0e
- (double)_contentMarginForChildViewController:(id)arg1;	// IMP=0x0000000000551ab0
- (void)_updateChildContentMargins;	// IMP=0x000000000055191d
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;	// IMP=0x00000000005518b2
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x0000000000551469
- (_Bool)_shouldUseRelativeInsets;	// IMP=0x000000000055136f
- (void)popoverWillAppear:(id)arg1;	// IMP=0x0000000000551128
- (struct CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;	// IMP=0x000000000055105b
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000550e42
- (void)toggleMasterVisible:(id)arg1;	// IMP=0x0000000000550de6
- (void)_dismissMasterViewController:(_Bool)arg1;	// IMP=0x0000000000550d5a
- (unsigned long long)_targetEdgeForPopover;	// IMP=0x0000000000550d37
- (void)_presentMasterViewController:(_Bool)arg1;	// IMP=0x0000000000550ba5
- (_Bool)_isMasterPopoverVisible;	// IMP=0x0000000000550b82
- (void)_didEndSnapshotSession;	// IMP=0x0000000000550b71
- (void)_willBeginSnapshotSession;	// IMP=0x0000000000550b31
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;	// IMP=0x000000000055073d
- (_Bool)_shouldPreventAutorotation;	// IMP=0x0000000000550735
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;	// IMP=0x0000000000550599
- (_Bool)_optsOutOfPopoverControllerHierarchyCheck;	// IMP=0x0000000000550591
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000005504d0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000055040f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000005502fe
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000055018f
- (void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1;	// IMP=0x0000000000550042
- (id)displayModeButtonItem;	// IMP=0x000000000054ffb9
- (void)_updateDisplayModeButtonItem;	// IMP=0x000000000054fd84
- (void)_triggerDisplayModeAction:(id)arg1;	// IMP=0x000000000054fcd1
- (long long)_effectiveTargetDisplayMode;	// IMP=0x000000000054fcc4
- (void)_cacheEffectiveTargetDisplayMode;	// IMP=0x000000000054fbde
- (void)_popoverController:(id)arg1 didChangeFromVisible:(_Bool)arg2;	// IMP=0x000000000054fb8e
- (void)_popoverController:(id)arg1 willChangeToVisible:(_Bool)arg2;	// IMP=0x000000000054fb34
- (void)_updateTargetDisplayMode;	// IMP=0x000000000054faf9
- (void)_displayModeDidChange;	// IMP=0x000000000054fac6
- (void)_displayModeWillChangeTo:(long long)arg1;	// IMP=0x000000000054fa24
- (void)_changeToDisplayMode:(long long)arg1 forCurrentOrientationOnly:(_Bool)arg2;	// IMP=0x000000000054f59a
- (long long)_defaultTargetDisplayMode;	// IMP=0x000000000054f38c
- (id)_defaultDisplayModes;	// IMP=0x000000000054f303
- (long long)displayMode;	// IMP=0x000000000054f2a6
@property(nonatomic) long long preferredDisplayMode;
- (_Bool)_layoutPrimaryOnRight;	// IMP=0x000000000054f166
@property(nonatomic) long long primaryEdge;
- (_Bool)_effectivePresentsWithGesture;	// IMP=0x000000000054ef0f
@property(nonatomic) float gutterWidth;
- (double)_masterPresentationAnimationDuration;	// IMP=0x000000000054e93c
- (void)_showMasterViewAnimated:(_Bool)arg1;	// IMP=0x000000000054e6e3
@property(nonatomic) _Bool hidesMasterViewInPortrait;
- (_Bool)_hidesMasterViewInOrientation:(long long)arg1 medusaState:(long long)arg2;	// IMP=0x000000000054e45d
- (_Bool)_hidesMasterViewInCurrentOrientation;	// IMP=0x000000000054e3f6
- (_Bool)hidesMasterViewInLandscape;	// IMP=0x000000000054e3ba
- (id)detailViewController;	// IMP=0x000000000054e2d3
- (id)masterViewController;	// IMP=0x000000000054e138
- (_Bool)_hasMasterViewController;	// IMP=0x000000000054e0af
- (void)_setupUnderBarSeparatorView;	// IMP=0x000000000054db04
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000054da46
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000054c9ea
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x000000000054c625
- (void)_removeCollapsingSnapshotViews;	// IMP=0x000000000054c5c2
- (id)_deepestUnambiguousResponder;	// IMP=0x000000000054c57f
- (_Bool)_disableAutomaticKeyboardBehavior;	// IMP=0x000000000054c53d
- (void)_didChangeToFirstResponder:(id)arg1;	// IMP=0x000000000054c509
- (void)_didTransitionTraitCollection;	// IMP=0x000000000054c2bd
- (void)_collapseMaster:(id)arg1 andDetail:(id)arg2 withTransitionCoordinator:(id)arg3;	// IMP=0x000000000054b8dc
- (void)_collapseMasterAndDetailWithTransitionCoordinator:(id)arg1;	// IMP=0x000000000054b5aa
- (void)_separateMasterAndDetailWithTransitionCoordinator:(id)arg1;	// IMP=0x000000000054adc0
- (void)_animateTransitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000054acbd
- (void)_prepareForCompactLayout;	// IMP=0x000000000054a85c
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;	// IMP=0x000000000054a7a1
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;	// IMP=0x000000000054a3ac
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x000000000054a0c0
- (id)_primaryContentResponder;	// IMP=0x000000000054a07d
- (id)_childContainingSender:(id)arg1;	// IMP=0x0000000000549e70
- (void)_setMasterOverrideTraitCollectionActive:(_Bool)arg1;	// IMP=0x0000000000549da4
@property(copy, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) _Bool inExpandingToProposedDisplayModeCallback;
@property(readonly, nonatomic) _Bool inCollapsingToProposedTopColumnCallback;
- (_Bool)_isBasicallyHorizontallyCompact;	// IMP=0x0000000000548c89
- (_Bool)_canDisplayHostedMaster;	// IMP=0x0000000000548c41
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1;	// IMP=0x00000000005481e8
- (void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2;	// IMP=0x0000000000547f52
- (id)_secondaryViewControllerForCollapsing;	// IMP=0x0000000000547f0f
- (id)_primaryViewControllerForExpanding;	// IMP=0x0000000000547e5e
- (id)_primaryViewControllerForCollapsing;	// IMP=0x0000000000547dad
- (void)_setCollapsedState:(long long)arg1;	// IMP=0x0000000000547ca5
- (_Bool)_isCollapsed;	// IMP=0x0000000000547c89
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
- (_Bool)_isExpanding;	// IMP=0x0000000000547c5a
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1 isCompact:(_Bool)arg2;	// IMP=0x000000000054798d
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1;	// IMP=0x0000000000547940
- (double)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize)arg1;	// IMP=0x00000000005476bc
- (struct CGSize)_preferredContentSize;	// IMP=0x0000000000547673
@property(nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) _Bool usesExtraWidePrimaryColumn;
- (struct CGSize)_screenSizeInMainScene:(_Bool)arg1;	// IMP=0x0000000000547529
- (double)primaryColumnWidth;	// IMP=0x0000000000547491
- (void)_viewControllerHiding:(id)arg1;	// IMP=0x0000000000547314
- (void)_setupHiddenPopoverControllerWithViewController:(id)arg1;	// IMP=0x00000000005471aa
- (struct CGRect)_detailViewFrame;	// IMP=0x0000000000547103
- (struct CGRect)_detailViewFrame:(struct CGRect)arg1;	// IMP=0x0000000000546fa3
- (struct CGRect)_masterViewFrame;	// IMP=0x0000000000546efc
- (struct CGRect)_masterViewFrame:(struct CGRect)arg1;	// IMP=0x0000000000546e0d
- (void)_addOrRemovePopoverPresentationGestureRecognizer;	// IMP=0x00000000005466d4
- (void)_updateDelegateHiddenMasterAspectRatios;	// IMP=0x0000000000546422
- (_Bool)_defersUpdateDelegateHiddenMasterAspectRatios;	// IMP=0x0000000000546401
- (void)_setDelegateHidesMaster:(_Bool)arg1 inAspectRatio:(long long)arg2;	// IMP=0x000000000054639b
- (_Bool)_isHidesMasterInLandscapeInvalid;	// IMP=0x000000000054638d
- (_Bool)_isHidesMasterInPortraitInvalid;	// IMP=0x000000000054637d
- (void)_invalidateHidesMasterViewForAspectRatio:(long long)arg1;	// IMP=0x000000000054635a
- (id)_primaryDimmingView;	// IMP=0x0000000000546344
- (_Bool)_isMasterViewShown;	// IMP=0x000000000054628f
- (long long)_currentInterfaceIdiom;	// IMP=0x00000000005461e3
- (_Bool)_iPhoneShouldUseOverlayIfRegularWidth;	// IMP=0x00000000005461aa
- (_Bool)_iPhoneShouldUseOverlayInCurrentEnvironment;	// IMP=0x000000000054610f
@property(nonatomic) _Bool usesDeviceOverlayPreferences;
@property(nonatomic) _Bool prefersOverlayInRegularWidthPhone;
- (void)_setPrimaryHidingStateForCurrentOrientation:(long long)arg1;	// IMP=0x0000000000546083
- (long long)_primaryHidingStateForCurrentOrientation;	// IMP=0x0000000000546073
- (void)_setPrimaryHidingState:(long long)arg1;	// IMP=0x000000000054604e
- (long long)_primaryHidingState;	// IMP=0x000000000054603c
- (long long)_effectivePrimaryHidingState;	// IMP=0x0000000000546004
- (void)unloadViewForced:(_Bool)arg1;	// IMP=0x0000000000545eb6
- (void)loadView;	// IMP=0x0000000000545cff
- (_Bool)_shouldPersistViewWhenCoding;	// IMP=0x0000000000545cf7
- (void)_loadNewSubviews:(id)arg1;	// IMP=0x00000000005457e3
- (void)dealloc;	// IMP=0x000000000054569e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000545572
- (void)_initWithCoder:(id)arg1;	// IMP=0x0000000000545394
- (void)_commonInit;	// IMP=0x000000000054521a
- (struct CGRect)_frameForChildContentContainer:(id)arg1;	// IMP=0x0000000000545094
- (id)initWithSplitViewController:(id)arg1;	// IMP=0x0000000000545030

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

