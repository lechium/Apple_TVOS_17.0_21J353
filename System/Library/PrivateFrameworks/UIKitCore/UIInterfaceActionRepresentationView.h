//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, NSString, UIInterfaceAction, UIInterfaceActionVisualStyle;
@protocol UIFocusEnvironment, UIFocusItemContainer, UIInterfaceActionVisualBackgroundDisplaying;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionRepresentationView : UIView
{
    _Bool _hasLoadedBackgroundView;	// 128 = 0x80
    _Bool _canKeepContentsInHierarchy;	// 129 = 0x81
    _Bool _hasLoadedContentFirstTime;	// 130 = 0x82
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisible;	// 131 = 0x83
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisibleValue;	// 132 = 0x84
    _Bool _contentsInsertedIntoViewHierarchy;	// 133 = 0x85
    _Bool _ownsActionContent;	// 134 = 0x86
    _Bool _highlighted;	// 135 = 0x87
    _Bool _pressed;	// 136 = 0x88
    _Bool _canRemoveContentFromHierarchyWhenNotVisible;	// 137 = 0x89
    UIInterfaceAction *_action;	// 144 = 0x90
    unsigned long long _visualCornerPosition;	// 152 = 0x98
    id _actionViewStateContext;	// 160 = 0xa0
    UIView<UIInterfaceActionVisualBackgroundDisplaying> *_backgroundHighlightView;	// 168 = 0xa8
    NSLayoutConstraint *_minimumWidthConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_minimumHeightConstraint;	// 184 = 0xb8
    NSArray *_viewsToDisappearWhenHighlighted;	// 192 = 0xc0
    NSString *_sectionID;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000000cb84c
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(nonatomic) _Bool canRemoveContentFromHierarchyWhenNotVisible; // @synthesize canRemoveContentFromHierarchyWhenNotVisible=_canRemoveContentFromHierarchyWhenNotVisible;
@property(retain, nonatomic) NSArray *viewsToDisappearWhenHighlighted; // @synthesize viewsToDisappearWhenHighlighted=_viewsToDisappearWhenHighlighted;
@property(readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property(readonly, nonatomic) UIView<UIInterfaceActionVisualBackgroundDisplaying> *backgroundHighlightView; // @synthesize backgroundHighlightView=_backgroundHighlightView;
@property(retain, nonatomic) id actionViewStateContext; // @synthesize actionViewStateContext=_actionViewStateContext;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(nonatomic) _Bool ownsActionContent; // @synthesize ownsActionContent=_ownsActionContent;
@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
@property(nonatomic, setter=_setContentsInsertedIntoViewHierarchy:) _Bool _contentsInsertedIntoViewHierarchy; // @synthesize _contentsInsertedIntoViewHierarchy;
- (id)_actionViewState;	// IMP=0x00000000000cb6c0
- (void)_clearBackgroundPressedState;	// IMP=0x00000000000cb6a1
- (id)_viewDisplayingBackground;	// IMP=0x00000000000cb68c
- (_Bool)_isVisibleWithinContainmentAncestor;	// IMP=0x00000000000cb593
- (_Bool)_canLoadContentsIntoHierarchy;	// IMP=0x00000000000cb55f
- (void)_removeLoadedContentsFromHierarchyIfNotVisible;	// IMP=0x00000000000cb50c
- (void)_addLoadedContentsToHierarchyIfAllowed;	// IMP=0x00000000000cb4c3
- (void)_addLoadedContentsToHierarchyFirstTime;	// IMP=0x00000000000cb42d
- (void)_updateLoadedContentsHierarchyByInsertingOrRemovingIfNecessary;	// IMP=0x00000000000cb402
- (void)_loadContentsIntoHierarchyAndPrepareIfNecessary;	// IMP=0x00000000000cb3b6
- (void)_updateHighlightAndPressedFeedback;	// IMP=0x00000000000cb0fb
- (_Bool)isFocused;	// IMP=0x00000000000cb081
- (void)_reloadBackgroundHighlightView;	// IMP=0x00000000000cabfa
- (void)_applyVisualStyleToBackgroundViewAndHighlighting;	// IMP=0x00000000000cabe8
- (void)_applyVisualStyleToLayoutMargins;	// IMP=0x00000000000caaf8
- (void)_initializeHorizontalMarginsForAction;	// IMP=0x00000000000caa33
- (void)_setHorizontalMargins:(struct UIEdgeInsets)arg1 preservesSuperviewLayoutMargins:(_Bool)arg2;	// IMP=0x00000000000ca94a
- (_Bool)_fittingContentViewHasItsOwnActiveMinimumSizeConstraintsWithSize:(struct CGSize)arg1;	// IMP=0x00000000000ca8cb
- (void)_applyVisualStyleToMinimumSizeConstraints;	// IMP=0x00000000000ca74a
- (void)_applyVisualStyle;	// IMP=0x00000000000ca70f
- (void)_didScroll;	// IMP=0x00000000000ca6fd
- (void)_showVisualFeedbackForPressed:(_Bool)arg1;	// IMP=0x00000000000ca6da
- (_Bool)_shouldShowPressFeedbackForEventWithPresses:(id)arg1;	// IMP=0x00000000000ca635
- (_Bool)_handleVisualFeedbackForPress:(id)arg1 pressed:(_Bool)arg2;	// IMP=0x00000000000ca5ef
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000ca564
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000ca4d9
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000ca44b
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000ca3bd
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000ca27d
- (_Bool)canBecomeFocused;	// IMP=0x00000000000ca239
- (_Bool)_showsFocusForFocusedView:(id)arg1;	// IMP=0x00000000000ca1c3
- (struct CGRect)_fittingContentSizingViewFrameInBounds:(struct CGRect)arg1;	// IMP=0x00000000000ca166
- (struct CGSize)_fittingContentSizeWithFittingViewSize:(struct CGSize)arg1;	// IMP=0x00000000000ca11d
- (struct UIEdgeInsets)_fittingContentSizingViewMargins;	// IMP=0x00000000000ca0f5
- (id)_fittingContentSizingView;	// IMP=0x00000000000ca0ec
- (id)__fittingContentSizingViewAllowingSelf;	// IMP=0x00000000000ca0a7
- (id)__fittingContentSizingViewIfNotSelf;	// IMP=0x00000000000ca063
- (void)_updateFittingContentSizingViewToFitSize;	// IMP=0x00000000000c9f96
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000c9f84
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000000c9ea6
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000c9df4
- (void)layoutMarginsDidChange;	// IMP=0x00000000000c9db3
- (void)invalidateIntrinsicContentSize;	// IMP=0x00000000000c9d46
- (void)layoutSubviews;	// IMP=0x00000000000c9c43
- (void)updateConstraints;	// IMP=0x00000000000c9c05
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;	// IMP=0x00000000000c9bf3
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;	// IMP=0x00000000000c9b0a
- (void)_enforceActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisible:(_Bool)arg1;	// IMP=0x00000000000c9ac2
- (_Bool)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1;	// IMP=0x00000000000c9aba
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
- (void)invokeInterfaceAction;	// IMP=0x00000000000c9973
- (void)updateContentsInsertedIntoHierarchy;	// IMP=0x00000000000c994a
- (void)loadContents;	// IMP=0x00000000000c9944
- (void)dealloc;	// IMP=0x00000000000c98f8
@property(readonly, copy) NSString *description;
- (id)initWithAction:(id)arg1;	// IMP=0x00000000000c96b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

