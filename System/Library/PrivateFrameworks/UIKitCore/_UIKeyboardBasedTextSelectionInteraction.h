//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITextGestureTuning;

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionInteraction
{
    UITextGestureTuning *_gestureTuning;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000cab424
@property(readonly, nonatomic) UITextGestureTuning *gestureTuning; // @synthesize gestureTuning=_gestureTuning;
- (void)oneFingerForcePress:(id)arg1;	// IMP=0x0000000000caa9df
- (void)oneFingerForcePan:(id)arg1;	// IMP=0x0000000000ca9524
- (void)endOneFingerSelectWithExecutionContext:(id)arg1;	// IMP=0x0000000000ca94b1
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000ca942c
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000ca927d
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(_Bool)arg2;	// IMP=0x0000000000ca8c6f
- (_Bool)enclosingScrollViewIsScrolling;	// IMP=0x0000000000ca8b5f
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000ca8b45
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000ca8aab
- (id)owner;	// IMP=0x0000000000ca8a6d
- (void)_processGestureForCustomHighlighter:(id)arg1;	// IMP=0x0000000000ca8539
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000ca84c3
- (void)_createGestureTuningIfNecessary;	// IMP=0x0000000000ca8388
- (void)dealloc;	// IMP=0x0000000000ca833e

@end
