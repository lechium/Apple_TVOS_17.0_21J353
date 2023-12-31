//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSDate, NSIndexPath, NSString, NSTimer, UICollectionViewDiffableDataSource, _UIContextMenuLinkedList, _UIContextMenuListView, _UIContextMenuNode, _UIContextMenuSelectionDelayGestureRecognizer, _UIContextMenuSelectionGestureRecognizer, _UIVelocityIntegrator;
@protocol _UIContextMenuHierarchyLayout, _UIContextMenuViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIContextMenuView : UIView
{
    _Bool _showsShadow;	// 128 = 0x80
    _Bool _reversesActionOrder;	// 129 = 0x81
    _Bool _scrubbingEnabled;	// 130 = 0x82
    _Bool _allowsBackgroundViewInteraction;	// 131 = 0x83
    _Bool _isComputingPreferredSize;	// 132 = 0x84
    _Bool _retainHighlightOnMenuNavigation;	// 133 = 0x85
    _Bool _shouldAvoidInputViews;	// 134 = 0x86
    _Bool _hasTrackingTouch;	// 135 = 0x87
    id <_UIContextMenuViewDelegate> _delegate;	// 136 = 0x88
    unsigned long long _hierarchyStyle;	// 144 = 0x90
    unsigned long long _attachmentEdge;	// 152 = 0x98
    _UIContextMenuNode *_departingNode;	// 160 = 0xa0
    UICollectionViewDiffableDataSource *_collectionViewDataSource;	// 168 = 0xa8
    _UIContextMenuSelectionGestureRecognizer *_selectionGestureRecognizer;	// 176 = 0xb0
    _UIContextMenuSelectionDelayGestureRecognizer *_selectionDelayGestureRecognizer;	// 184 = 0xb8
    NSDate *_appearanceDate;	// 192 = 0xc0
    _UIContextMenuLinkedList *_submenus;	// 200 = 0xc8
    NSTimer *_autoNavigationTimer;	// 208 = 0xd0
    NSTimer *_autoUnhighlightTimer;	// 216 = 0xd8
    NSIndexPath *_unselectableIndexPath;	// 224 = 0xe0
    id <_UIContextMenuHierarchyLayout> _layout;	// 232 = 0xe8
    _UIContextMenuNode *_hoveredNode;	// 240 = 0xf0
    _UIVelocityIntegrator *_hoverVelocityIntegrator;	// 248 = 0xf8
    NSTimer *_hoverAutoExitTimer;	// 256 = 0x100
    struct CGSize _visibleContentSize;	// 264 = 0x108
    struct CGSize _maxContainerSize;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x00000000000db548
@property(retain, nonatomic) NSTimer *hoverAutoExitTimer; // @synthesize hoverAutoExitTimer=_hoverAutoExitTimer;
@property(retain, nonatomic) _UIVelocityIntegrator *hoverVelocityIntegrator; // @synthesize hoverVelocityIntegrator=_hoverVelocityIntegrator;
@property(retain, nonatomic) _UIContextMenuNode *hoveredNode; // @synthesize hoveredNode=_hoveredNode;
@property(retain, nonatomic) id <_UIContextMenuHierarchyLayout> layout; // @synthesize layout=_layout;
@property(nonatomic) struct CGSize maxContainerSize; // @synthesize maxContainerSize=_maxContainerSize;
@property(nonatomic) _Bool hasTrackingTouch; // @synthesize hasTrackingTouch=_hasTrackingTouch;
@property(copy, nonatomic) NSIndexPath *unselectableIndexPath; // @synthesize unselectableIndexPath=_unselectableIndexPath;
@property(retain, nonatomic) NSTimer *autoUnhighlightTimer; // @synthesize autoUnhighlightTimer=_autoUnhighlightTimer;
@property(retain, nonatomic) NSTimer *autoNavigationTimer; // @synthesize autoNavigationTimer=_autoNavigationTimer;
@property(nonatomic) _Bool shouldAvoidInputViews; // @synthesize shouldAvoidInputViews=_shouldAvoidInputViews;
@property(nonatomic) _Bool retainHighlightOnMenuNavigation; // @synthesize retainHighlightOnMenuNavigation=_retainHighlightOnMenuNavigation;
@property(nonatomic) _Bool isComputingPreferredSize; // @synthesize isComputingPreferredSize=_isComputingPreferredSize;
@property(retain, nonatomic) _UIContextMenuLinkedList *submenus; // @synthesize submenus=_submenus;
@property(retain, nonatomic) NSDate *appearanceDate; // @synthesize appearanceDate=_appearanceDate;
@property(retain, nonatomic) _UIContextMenuSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer; // @synthesize selectionDelayGestureRecognizer=_selectionDelayGestureRecognizer;
@property(retain, nonatomic) _UIContextMenuSelectionGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource; // @synthesize collectionViewDataSource=_collectionViewDataSource;
@property(retain, nonatomic) _UIContextMenuNode *departingNode; // @synthesize departingNode=_departingNode;
@property(nonatomic) unsigned long long attachmentEdge; // @synthesize attachmentEdge=_attachmentEdge;
@property(nonatomic) unsigned long long hierarchyStyle; // @synthesize hierarchyStyle=_hierarchyStyle;
@property(nonatomic) struct CGSize visibleContentSize; // @synthesize visibleContentSize=_visibleContentSize;
@property(nonatomic) _Bool allowsBackgroundViewInteraction; // @synthesize allowsBackgroundViewInteraction=_allowsBackgroundViewInteraction;
@property(nonatomic) _Bool scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property(nonatomic) _Bool reversesActionOrder; // @synthesize reversesActionOrder=_reversesActionOrder;
@property(nonatomic) _Bool showsShadow; // @synthesize showsShadow=_showsShadow;
@property(nonatomic) __weak id <_UIContextMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_testing_tapAnAction;	// IMP=0x00000000000db120
- (struct CGRect)_rectOfNodeParentElement:(id)arg1;	// IMP=0x00000000000daf79
- (void)_performActionForElement:(id)arg1;	// IMP=0x00000000000daef2
- (void)_handleSelectPressGesture:(id)arg1;	// IMP=0x00000000000dae1a
- (void)_handleMenuPressGesture:(id)arg1;	// IMP=0x00000000000dad19
- (void)_handleRightArrowKey:(id)arg1;	// IMP=0x00000000000dab2c
- (void)_handleLeftArrowKey:(id)arg1;	// IMP=0x00000000000dab1a
- (void)_selectPreviousMenuIfPossible;	// IMP=0x00000000000da9ac
- (void)_handleEscapeKey:(id)arg1;	// IMP=0x00000000000da960
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000000000da5db
- (id)keyCommands;	// IMP=0x00000000000da48f
- (_Bool)_allowsChangingFirstResponderForFocusUpdateWithContext:(id)arg1;	// IMP=0x00000000000da487
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000da47f
- (id)preferredFocusEnvironments;	// IMP=0x00000000000da3f6
- (void)_clearHoverAutoExitTimer;	// IMP=0x00000000000da39c
- (void)_setHoverAutoExitTimer;	// IMP=0x00000000000da20f
- (void)_clearAutoNavigationTimer;	// IMP=0x00000000000da1b5
- (void)_setAutoNavigationTimerIfNecessaryForElement:(id)arg1;	// IMP=0x00000000000d9f96
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000d9c99
- (void)_setHighlightedIndexPath:(id)arg1 playFeedback:(_Bool)arg2;	// IMP=0x00000000000d99d3
- (void)_handleSelectionGesture:(id)arg1;	// IMP=0x00000000000d94c5
- (void)_handleSelectionForElement:(id)arg1;	// IMP=0x00000000000d91cb
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000000d9072
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000d8fb4
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000d8eb7
- (void)_updateSelectionGestureAllowableMovementForGestureBeginningAtIndexPath:(id)arg1;	// IMP=0x00000000000d8dd8
- (id)_newListViewWithMenu:(id)arg1 position:(unsigned long long)arg2;	// IMP=0x00000000000d8959
- (void)_displayMenu:(id)arg1 inPlaceOfMenu:(id)arg2 updateType:(unsigned long long)arg3 alongsideAnimations:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d71c5
- (void)displayMenu:(id)arg1 updateType:(unsigned long long)arg2 alongsideAnimations:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d71ab
- (void)replaceVisibleMenu:(id)arg1 withMenu:(id)arg2 alongsideAnimations:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d7187
@property(readonly, nonatomic) NSArray *visibleMenus;
- (id)hoveredListView;	// IMP=0x00000000000d7022
@property(readonly, nonatomic) _UIContextMenuListView *currentListView;
- (void)layoutSubviews;	// IMP=0x00000000000d6eef
- (struct CGSize)preferredContentSizeWithinContainerSize:(struct CGSize)arg1;	// IMP=0x00000000000d6d77
- (struct CGRect)activeSubmenuFrameInCoordinateSpace:(id)arg1;	// IMP=0x00000000000d6cc6
- (void)didCompleteMenuAppearanceAnimation;	// IMP=0x00000000000d6c79
- (void)flashScrollIndicators;	// IMP=0x00000000000d6c0f
- (void)scrollToFirstSignificantAction;	// IMP=0x00000000000d6bd2
- (_Bool)kickstartActionScrubbingWithGesture:(id)arg1;	// IMP=0x00000000000d6b03
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x00000000000d68a3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d6448

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

