//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UITextGestureTuning;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UITextPhraseBoundaryInteraction : UITextInteraction
{
    UITextGestureTuning *_gestureTuning;	// 8 = 0x8
    id <UITextCursorAssertion> _blinkAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001127398
- (void)_phraseBoundaryGesture:(id)arg1;	// IMP=0x00000000011267ea
- (id)_phraseBoundaryGestureRecognizer;	// IMP=0x0000000001126712
- (void)updateVisibilityOffsetForGesture:(id)arg1;	// IMP=0x0000000001126675
- (void)_createGestureTuningIfNecessary;	// IMP=0x0000000001126564
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;	// IMP=0x0000000001126541
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;	// IMP=0x000000000112651e
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000011264a8
- (id)initWithTextInput:(id)arg1;	// IMP=0x00000000011263fc

@end

