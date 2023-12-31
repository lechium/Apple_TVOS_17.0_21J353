//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class _AVTouchAbsorbingGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface AVTouchAbsorbingGestureRecognizer : UIPanGestureRecognizer
{
    _AVTouchAbsorbingGestureRecognizerDelegate *_absorbingDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000124ab6
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0000000000124aae
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0000000000124aa6
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x0000000000124a9e
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;	// IMP=0x0000000000124a96
@property(nonatomic) _Bool shouldPreventPropagationOfTouchesToSuperViewGestureRecognizers; // @dynamic shouldPreventPropagationOfTouchesToSuperViewGestureRecognizers;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000124905

@end

