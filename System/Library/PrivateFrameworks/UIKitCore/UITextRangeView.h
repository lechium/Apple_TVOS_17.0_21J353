//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UIResponder, UISelectionGrabber, UISelectionGrabberCustomPath, UITextSelectionView, UITouch;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView
{
    UITextSelectionView *m_selectionView;	// 128 = 0x80
    UIResponder<UITextInput> *m_container;	// 136 = 0x88
    int m_mode;	// 144 = 0x90
    NSArray *m_rects;	// 152 = 0x98
    NSMutableArray *m_rectViews;	// 160 = 0xa0
    UITouch *m_activeTouch;	// 168 = 0xa8
    struct CGRect m_startEdge;	// 176 = 0xb0
    struct CGRect m_endEdge;	// 208 = 0xd0
    UIView *m_rectContainerView;	// 240 = 0xf0
    UISelectionGrabber *m_startGrabber;	// 248 = 0xf8
    UISelectionGrabber *m_endGrabber;	// 256 = 0x100
    _Bool m_animateUpdate;	// 264 = 0x108
    _Bool m_commandsWereShowing;	// 265 = 0x109
    _Bool m_willBeginMagnifying;	// 266 = 0x10a
    _Bool m_inGesture;	// 267 = 0x10b
    _Bool m_magnifying;	// 268 = 0x10c
    _Bool m_scrolling;	// 269 = 0x10d
    _Bool m_scaling;	// 270 = 0x10e
    _Bool m_rotating;	// 271 = 0x10f
    _Bool m_inputViewIsChanging;	// 272 = 0x110
    _Bool m_isClearingRange;	// 273 = 0x111
    _Bool m_shouldStayVisible;	// 274 = 0x112
    _Bool _baseIsStart;	// 275 = 0x113
    UISelectionGrabberCustomPath *_startCustomPath;	// 280 = 0x118
    UISelectionGrabberCustomPath *_endCustomPath;	// 288 = 0x120
    struct CGPoint m_basePoint;	// 296 = 0x128
    struct CGPoint m_extentPoint;	// 312 = 0x138
    struct CGPoint m_initialExtentPoint;	// 328 = 0x148
    struct CGPoint _activeTouchPoint;	// 344 = 0x158
}

- (void).cxx_destruct;	// IMP=0x00000000011637f9
@property(retain, nonatomic) UISelectionGrabberCustomPath *endCustomPath; // @synthesize endCustomPath=_endCustomPath;
@property(retain, nonatomic) UISelectionGrabberCustomPath *startCustomPath; // @synthesize startCustomPath=_startCustomPath;
@property(readonly, nonatomic) struct CGPoint activeTouchPoint; // @synthesize activeTouchPoint=_activeTouchPoint;
@property(nonatomic) _Bool baseIsStart; // @synthesize baseIsStart=_baseIsStart;
@property(nonatomic) _Bool shouldStayVisible; // @synthesize shouldStayVisible=m_shouldStayVisible;
@property(nonatomic) _Bool isClearingRange; // @synthesize isClearingRange=m_isClearingRange;
@property(nonatomic) _Bool inputViewIsChanging; // @synthesize inputViewIsChanging=m_inputViewIsChanging;
@property(nonatomic) _Bool rotating; // @synthesize rotating=m_rotating;
@property(nonatomic) _Bool scaling; // @synthesize scaling=m_scaling;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=m_scrolling;
@property(nonatomic) _Bool inGesture; // @synthesize inGesture=m_inGesture;
@property(nonatomic) _Bool magnifying; // @synthesize magnifying=m_magnifying;
@property(nonatomic) _Bool willBeginMagnifying; // @synthesize willBeginMagnifying=m_willBeginMagnifying;
@property(nonatomic) _Bool commandsWereShowing; // @synthesize commandsWereShowing=m_commandsWereShowing;
@property(nonatomic) _Bool animateUpdate; // @synthesize animateUpdate=m_animateUpdate;
@property(retain, nonatomic) UISelectionGrabber *endGrabber; // @synthesize endGrabber=m_endGrabber;
@property(retain, nonatomic) UISelectionGrabber *startGrabber; // @synthesize startGrabber=m_startGrabber;
@property(nonatomic) struct CGPoint initialExtentPoint; // @synthesize initialExtentPoint=m_initialExtentPoint;
@property(readonly, nonatomic) struct CGPoint extentPoint; // @synthesize extentPoint=m_extentPoint;
@property(readonly, nonatomic) struct CGPoint basePoint; // @synthesize basePoint=m_basePoint;
@property(nonatomic) struct CGRect endEdge; // @synthesize endEdge=m_endEdge;
@property(nonatomic) struct CGRect startEdge; // @synthesize startEdge=m_startEdge;
@property(readonly, nonatomic) _Bool areSelectionRectsVisible;
- (struct CGPoint)convertFromMagnifierPoint:(struct CGPoint)arg1;	// IMP=0x00000000011632ce
- (struct CGPoint)magnifierPoint;	// IMP=0x00000000011630ad
- (void)_cancelGrabberTransitionOutAnimations:(id)arg1;	// IMP=0x0000000001162fc2
- (void)_setGrabber:(id)arg1 bounds:(struct CGRect)arg2 center:(struct CGPoint)arg3;	// IMP=0x0000000001162f4d
- (void)updateGrabbers;	// IMP=0x0000000001161db1
- (_Bool)shouldShowGrabbers;	// IMP=0x0000000001161d99
- (_Bool)shouldHitTestGrabbers;	// IMP=0x0000000001161d5f
- (_Bool)_endIsHorizontal;	// IMP=0x0000000001161d0a
- (_Bool)_startIsHorizontal;	// IMP=0x0000000001161cb5
@property(readonly, nonatomic, getter=isDisplayingVerticalSelection) _Bool displayingVerticalSelection;
- (void)updateRectViews;	// IMP=0x0000000001160e8e
- (struct CGRect)_selectionClipRect;	// IMP=0x0000000001160e0c
- (void)beginMagnifying;	// IMP=0x0000000001160da7
- (void)animateHighlighterDelayedFadeInOnLayer:(id)arg1;	// IMP=0x0000000001160b57
- (void)animateHighlighterExpanderOnLayer:(id)arg1 withOffset:(struct CGPoint)arg2;	// IMP=0x00000000011605b6
- (void)animateHighlighterExpanderAnimation;	// IMP=0x000000000115ff9a
@property(readonly, nonatomic) _Bool autoscrolled;
- (_Bool)pointCloserToEnd:(struct CGPoint)arg1 startEdge:(struct CGRect)arg2 endEdge:(struct CGRect)arg3;	// IMP=0x000000000115fef2
- (void)cancelDelayedActions;	// IMP=0x000000000115fed6
- (void)_updateGrabbersVisibility:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000115fd97
- (void)stopAnimating;	// IMP=0x000000000115fd12
- (void)startAnimating;	// IMP=0x000000000115fc87
- (void)updateDots;	// IMP=0x000000000115fbaa
- (void)clearRangeAnimated:(_Bool)arg1;	// IMP=0x000000000115f8f8
- (void)inputViewDidChange;	// IMP=0x000000000115f8c8
- (void)inputViewWillChange;	// IMP=0x000000000115f895
- (void)didRotate;	// IMP=0x000000000115f859
- (void)willRotate;	// IMP=0x000000000115f826
- (void)scaleDidChange;	// IMP=0x000000000115f7f6
- (void)scaleWillChange;	// IMP=0x000000000115f7c3
- (void)didScroll;	// IMP=0x000000000115f793
- (void)willScroll;	// IMP=0x000000000115f760
- (void)doneMagnifying;	// IMP=0x000000000115f6b9
- (void)prepareForMagnification;	// IMP=0x000000000115f615
- (void)updateBaseAndExtentPointsFromEdges;	// IMP=0x000000000115f4ac
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x000000000115f396
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x000000000115f31b
@property(retain, nonatomic) NSArray *rects; // @synthesize rects=m_rects;
- (void)updateEdges;	// IMP=0x000000000115e6ab
@property(readonly, nonatomic) UIResponder<UITextInput> *container;
@property(readonly, nonatomic) UITextSelectionView *selectionView;
@property(nonatomic) int mode; // @synthesize mode=m_mode;
- (void)updateAfterEffectiveModeChange;	// IMP=0x000000000115e5e6
- (id)containerCoordinateSpaceForTextRangeAdjustmentInteraction:(id)arg1;	// IMP=0x000000000115e596
- (struct CGRect)caretRectForTextRangeAdjustmentInteraction:(id)arg1;	// IMP=0x000000000115e4ee
- (unsigned long long)loupeOrientationForTextRangeAdjustmentInteraction:(id)arg1;	// IMP=0x000000000115e4d5
- (_Bool)textRangeAdjustmentInteraction:(id)arg1 shouldDisplayLoupeForTouchType:(long long)arg2;	// IMP=0x000000000115e4cd
- (_Bool)textRangeAdjustmentInteractionShouldApplyTouchOffset:(id)arg1;	// IMP=0x000000000115e4b8
- (void)textRangeAdjustmentInteractionWasCancelled:(id)arg1;	// IMP=0x000000000115e41c
- (void)textRangeAdjustmentInteraction:(id)arg1 didEndAtPoint:(struct CGPoint)arg2;	// IMP=0x000000000115e382
- (void)textRangeAdjustmentInteraction:(id)arg1 selectionMoved:(struct CGPoint)arg2 withTouchPoint:(struct CGPoint)arg3;	// IMP=0x000000000115e2f3
- (void)textRangeAdjustmentInteraction:(id)arg1 didBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x000000000115e191
- (_Bool)textRangeAdjustmentInteraction:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x000000000115e189
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000115e009
- (_Bool)_gestureRecognizerShouldReceiveTouch:(id)arg1;	// IMP=0x000000000115dff7
- (void)setMagnifierOrientation;	// IMP=0x000000000115df7b
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000115deb2
- (struct CGRect)paddedTextRangeAdjustmentHitRegionForEdge:(unsigned long long)arg1 precision:(unsigned long long)arg2;	// IMP=0x000000000115de7f
- (id)textRangeAdjustmentViewForEdge:(unsigned long long)arg1;	// IMP=0x000000000115de77
- (struct CGRect)textRangeAdjustmentRectForEdge:(unsigned long long)arg1;	// IMP=0x000000000115ddb0
- (struct CGRect)_endEdgeHitRectWithPrecision:(unsigned long long)arg1;	// IMP=0x000000000115dd21
- (struct CGRect)_startEdgeHitRectWithPrecision:(unsigned long long)arg1;	// IMP=0x000000000115dc92
- (struct CGRect)_edgeHitRectForEdgeRect:(struct CGRect)arg1 grabber:(id)arg2 precision:(unsigned long long)arg3;	// IMP=0x000000000115d959
- (void)removeFromSuperview;	// IMP=0x000000000115d811
- (id)initWithFrame:(struct CGRect)arg1 selectionView:(id)arg2;	// IMP=0x000000000115d64a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

