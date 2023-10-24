//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UITextRangeAdjustmentInteraction, UIView;
@protocol UICoordinateSpace, _UITextSelectionWidgetAnimating;

@protocol UITextRangeAdjustmentInteractionDelegate <NSObject>
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (id <UICoordinateSpace>)containerCoordinateSpaceForTextRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1;
- (struct CGRect)caretRectForTextRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1;
- (void)textRangeAdjustmentInteractionWasCancelled:(UITextRangeAdjustmentInteraction *)arg1;
- (void)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 didEndAtPoint:(struct CGPoint)arg2;
- (void)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 selectionMoved:(struct CGPoint)arg2 withTouchPoint:(struct CGPoint)arg3;
- (void)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 didBeginAtPoint:(struct CGPoint)arg2;
- (_Bool)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)loupeOrientationForTextRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1;
- (_Bool)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 shouldDisplayLoupeForTouchType:(long long)arg2;
- (_Bool)textRangeAdjustmentInteractionShouldApplyTouchOffset:(UITextRangeAdjustmentInteraction *)arg1;
- (UIView<_UITextSelectionWidgetAnimating> *)textRangeAdjustmentViewForEdge:(unsigned long long)arg1;
- (struct CGRect)paddedTextRangeAdjustmentHitRegionForEdge:(unsigned long long)arg1 precision:(unsigned long long)arg2;
- (struct CGRect)textRangeAdjustmentRectForEdge:(unsigned long long)arg1;
@end

