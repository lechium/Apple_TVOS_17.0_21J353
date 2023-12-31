//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class NSString, UITextGestureTuning, UITextLoupeSession, UITextRangeAdjustmentGestureRecognizer, UITouch, UIView;
@protocol UITextRangeAdjustmentInteractionDelegate;

__attribute__((visibility("hidden")))
@interface UITextRangeAdjustmentInteraction : UITextInteraction
{
    UIView *_gestureHostView;	// 8 = 0x8
    UITextGestureTuning *_gestureTuning;	// 16 = 0x10
    UITextLoupeSession *_loupeSession;	// 24 = 0x18
    _Bool _baseIsStart;	// 32 = 0x20
    id <UITextRangeAdjustmentInteractionDelegate> _adjustmentDelegate;	// 40 = 0x28
    UITextRangeAdjustmentGestureRecognizer *_adjustmentGestureRecognizer;	// 48 = 0x30
    double _initialDistance;	// 56 = 0x38
    double _firstMovedTime;	// 64 = 0x40
    UITouch *_activeTouch;	// 72 = 0x48
    struct CGPoint _initialExtentPoint;	// 80 = 0x50
    struct CGPoint _initialPoint;	// 96 = 0x60
    struct CGPoint _basePoint;	// 112 = 0x70
    struct CGPoint _extentPoint;	// 128 = 0x80
    struct CGPoint _initialBasePoint;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000005dc2fe
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
@property(nonatomic) double firstMovedTime; // @synthesize firstMovedTime=_firstMovedTime;
@property(nonatomic) double initialDistance; // @synthesize initialDistance=_initialDistance;
@property(nonatomic) struct CGPoint initialBasePoint; // @synthesize initialBasePoint=_initialBasePoint;
@property(nonatomic) struct CGPoint extentPoint; // @synthesize extentPoint=_extentPoint;
@property(nonatomic) struct CGPoint basePoint; // @synthesize basePoint=_basePoint;
@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(readonly, nonatomic) UITextRangeAdjustmentGestureRecognizer *adjustmentGestureRecognizer; // @synthesize adjustmentGestureRecognizer=_adjustmentGestureRecognizer;
@property(nonatomic) __weak id <UITextRangeAdjustmentInteractionDelegate> adjustmentDelegate; // @synthesize adjustmentDelegate=_adjustmentDelegate;
@property(readonly, nonatomic) struct CGPoint initialExtentPoint; // @synthesize initialExtentPoint=_initialExtentPoint;
@property(nonatomic) _Bool baseIsStart; // @synthesize baseIsStart=_baseIsStart;
- (void)manuallyUpdateInteractionWithGestureState:(long long)arg1 location:(struct CGPoint)arg2 locationOfFirstTouch:(struct CGPoint)arg3 forTouchType:(long long)arg4;	// IMP=0x00000000005dc09f
- (void)_activeTouchEnded;	// IMP=0x00000000005dc047
- (void)_adjustmentInteractionCancelled;	// IMP=0x00000000005dbfec
- (void)_adjustmentInteractionEndedAtLocation:(struct CGPoint)arg1 forTouchType:(long long)arg2;	// IMP=0x00000000005dbeec
- (void)_adjustmentInteractionChangedWithLocation:(struct CGPoint)arg1 forTouchType:(long long)arg2;	// IMP=0x00000000005dbda9
- (void)_adjustmentInteractionBeganWithLocation:(struct CGPoint)arg1 startPoint:(struct CGPoint)arg2 forTouchType:(long long)arg3;	// IMP=0x00000000005db874
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000005db7c0
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000005db638
- (struct CGRect)_activeAdjustmentEdgeRect;	// IMP=0x00000000005db5d0
- (void)_updateAdjustmentInteractionWithState:(long long)arg1 location:(struct CGPoint)arg2 locationOfFirstTouch:(struct CGPoint)arg3 forTouchType:(long long)arg4;	// IMP=0x00000000005db55f
- (_Bool)_shouldDisplayLoupeForTouchType:(long long)arg1;	// IMP=0x00000000005db50f
- (_Bool)_shouldApplyOffsetForTouchType:(long long)arg1;	// IMP=0x00000000005db4ce
- (void)updateBaseAndExtentPointsFromEdges;	// IMP=0x00000000005db351
- (_Bool)_pointCloserToEnd:(struct CGPoint)arg1 startEdge:(struct CGRect)arg2 endEdge:(struct CGRect)arg3;	// IMP=0x00000000005db311
- (struct CGPoint)_convertPointToViewCoordinateSpace:(struct CGPoint)arg1;	// IMP=0x00000000005db192
- (id)_gestureView;	// IMP=0x00000000005db142
- (_Bool)_gestureTuningEnabledForTouches:(id)arg1;	// IMP=0x00000000005db0cf
- (void)_createGestureTuningIfNecessary;	// IMP=0x00000000005dafc1
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000005dafb9
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x00000000005daf5b
- (void)_didRecognizeAdjustmentGesture:(id)arg1;	// IMP=0x00000000005dad5f
- (_Bool)doesControlDelegate;	// IMP=0x00000000005dad57
- (id)gestureRecognizerHostView;	// IMP=0x00000000005dad3e
- (id)initWithAdjustmentDelegate:(id)arg1 gestureHostView:(id)arg2;	// IMP=0x00000000005dac08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

