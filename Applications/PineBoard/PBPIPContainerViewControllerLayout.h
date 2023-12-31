//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, PBPIPContainerViewController, PBSplitViewGeometry, PGPictureInPictureApplication, UILayoutGuide;
@protocol OS_dispatch_source, PBPIPContainerViewControllerLayoutDelegate;

@interface PBPIPContainerViewControllerLayout : NSObject
{
    _Bool _isKeyboardFocused;	// 8 = 0x8
    int _keyboardFocusedNotifyToken;	// 12 = 0xc
    PBPIPContainerViewController *_containerViewController;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    id <PBPIPContainerViewControllerLayoutDelegate> _delegate;	// 32 = 0x20
    PBSplitViewGeometry *_splitViewGeometry;	// 40 = 0x28
    NSArray *_constraintsFillingParentView;	// 48 = 0x30
    NSArray *_constraintsFittingParentView;	// 56 = 0x38
    NSLayoutConstraint *_heightConstraint;	// 64 = 0x40
    NSLayoutConstraint *_widthConstraint;	// 72 = 0x48
    NSLayoutConstraint *_topConstraint;	// 80 = 0x50
    NSLayoutConstraint *_bottomConstraint;	// 88 = 0x58
    NSLayoutConstraint *_leftConstraint;	// 96 = 0x60
    NSLayoutConstraint *_rightConstraint;	// 104 = 0x68
    NSLayoutConstraint *_framedTopConstraint;	// 112 = 0x70
    NSLayoutConstraint *_framedLeftConstraint;	// 120 = 0x78
    NSLayoutConstraint *_framedHeightConstraint;	// 128 = 0x80
    NSLayoutConstraint *_framedWidthConstraint;	// 136 = 0x88
    UILayoutGuide *_preferredPositionLayoutGuide;	// 144 = 0x90
    NSLayoutConstraint *_preferredHeightConstraint;	// 152 = 0x98
    NSLayoutConstraint *_preferredWidthConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_preferredTopConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_preferredBottomConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_preferredLeftConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_preferredRightConstraint;	// 192 = 0xc0
    long long _quadrant;	// 200 = 0xc8
    NSObject<OS_dispatch_source> *_focusDodgingTimer;	// 208 = 0xd0
    long long _appearanceStyle;	// 216 = 0xd8
    struct CGRect _lastFocusedFrame;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0020000000204ad0
@property(nonatomic) long long appearanceStyle; // @synthesize appearanceStyle=_appearanceStyle;
@property(readonly, nonatomic) int keyboardFocusedNotifyToken; // @synthesize keyboardFocusedNotifyToken=_keyboardFocusedNotifyToken;
@property(nonatomic) _Bool isKeyboardFocused; // @synthesize isKeyboardFocused=_isKeyboardFocused;
@property(readonly, nonatomic) struct CGRect lastFocusedFrame; // @synthesize lastFocusedFrame=_lastFocusedFrame;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *focusDodgingTimer; // @synthesize focusDodgingTimer=_focusDodgingTimer;
@property(readonly, nonatomic) long long quadrant; // @synthesize quadrant=_quadrant;
@property(readonly, nonatomic) NSLayoutConstraint *preferredRightConstraint; // @synthesize preferredRightConstraint=_preferredRightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredLeftConstraint; // @synthesize preferredLeftConstraint=_preferredLeftConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredBottomConstraint; // @synthesize preferredBottomConstraint=_preferredBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredTopConstraint; // @synthesize preferredTopConstraint=_preferredTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredWidthConstraint; // @synthesize preferredWidthConstraint=_preferredWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredHeightConstraint; // @synthesize preferredHeightConstraint=_preferredHeightConstraint;
@property(readonly, nonatomic) UILayoutGuide *preferredPositionLayoutGuide; // @synthesize preferredPositionLayoutGuide=_preferredPositionLayoutGuide;
@property(readonly, nonatomic) NSLayoutConstraint *framedWidthConstraint; // @synthesize framedWidthConstraint=_framedWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *framedHeightConstraint; // @synthesize framedHeightConstraint=_framedHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *framedLeftConstraint; // @synthesize framedLeftConstraint=_framedLeftConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *framedTopConstraint; // @synthesize framedTopConstraint=_framedTopConstraint;
- (id)rightConstraint;	// IMP=0x00100000002049d0
@property(readonly, nonatomic) NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint=_leftConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(readonly, nonatomic) NSArray *constraintsFittingParentView; // @synthesize constraintsFittingParentView=_constraintsFittingParentView;
@property(readonly, nonatomic) NSArray *constraintsFillingParentView; // @synthesize constraintsFillingParentView=_constraintsFillingParentView;
@property(retain, nonatomic) PBSplitViewGeometry *splitViewGeometry; // @synthesize splitViewGeometry=_splitViewGeometry;
@property(nonatomic) __weak id <PBPIPContainerViewControllerLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) PBPIPContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void)_handleKeyboardNotification;	// IMP=0x00100000002048e6
- (void)_unregisterFromKeyboardNotifications;	// IMP=0x00100000002048c2
- (void)_registerForKeyboardNotifications;	// IMP=0x00100000002047bb
- (void)_layoutIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002045e4
- (void)_notifyDelegateDidUpdateConstraints;	// IMP=0x00100000002045ad
- (id)_allConstraints;	// IMP=0x001000000020444a
- (id)_pipLayoutGuide;	// IMP=0x0010000000204336
- (id)_parentView;	// IMP=0x00100000002042bb
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000002041fb
- (void)updateConstraintsForUnstashedState;	// IMP=0x00100000002041c9
- (void)updateConstraintsForStashedState;	// IMP=0x0010000000204088
- (void)updateConstraintsForPreferredPictureInPictureSize;	// IMP=0x0010000000203ffe
- (_Bool)_shouldDodgeFocusedFrame:(struct CGRect)arg1;	// IMP=0x0010000000203da9
- (void)_updateConstraintsForFocusedFrame:(struct CGRect)arg1 shouldDodge:(_Bool)arg2;	// IMP=0x0010000000203b08
- (void)_cancelUpdateForDodgingFocusedFrame;	// IMP=0x0010000000203acf
- (void)_stageUpdateForDodgingFocusedFrame;	// IMP=0x0010000000203930
- (void)updateConstraintsForFocusedFrame:(struct CGRect)arg1;	// IMP=0x0010000000203892
- (void)updateConstraintsForNestedSplitView;	// IMP=0x0010000000203635
- (void)updateConstraintsFillingWorkspaceApplicationHostingView;	// IMP=0x0010000000203412
- (void)updateConstraintsFittingParentView;	// IMP=0x0010000000203389
- (void)updateConstraintsFillingParentView;	// IMP=0x0010000000203300
- (void)updateConstraintsForPictureInPictureQuadrant:(long long)arg1;	// IMP=0x00100000002030b4
- (struct CGRect)preferredPictureInPictureFrameForQuadrant:(long long)arg1 pipInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0010000000202db8
- (struct CGSize)maxPictureInPictureSizeForAspectRatio:(double)arg1;	// IMP=0x0010000000202c5d
- (struct CGSize)preferredLandscapeBoundingSize;	// IMP=0x0010000000202bff
- (struct CGRect)preferredIntrinsicFrame;	// IMP=0x0010000000202b31
- (struct CGSize)preferredIntrinsicSize;	// IMP=0x0010000000202b01
- (struct CGSize)preferredFullscreenSize;	// IMP=0x0010000000202a74
- (struct CGSize)preferredPictureInPictureInstrisicContentSize;	// IMP=0x0010000000202a5c
- (struct CGSize)_preferredPictureInPictureSizeAllowingPortrait:(_Bool)arg1;	// IMP=0x0010000000202842
- (struct CGSize)preferredPictureInPictureSize;	// IMP=0x001000000020282d
- (double)contentAspectRatio;	// IMP=0x00100000002027cf
@property(readonly, nonatomic) PGPictureInPictureApplication *application;
- (void)_setUpConstraints;	// IMP=0x0010000000201b38
- (void)dealloc;	// IMP=0x0010000000201ae3
- (id)initWithContainerViewController:(id)arg1;	// IMP=0x0010000000201a34

@end

