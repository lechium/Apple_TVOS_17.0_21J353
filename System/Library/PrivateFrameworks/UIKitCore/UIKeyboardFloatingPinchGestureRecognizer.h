//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPinchGestureRecognizer.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIKeyboardFloatingPinchGestureRecognizer : UIPinchGestureRecognizer
{
    NSMutableSet *_activeTouches;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000feb714
- (void)reset;	// IMP=0x0000000000feb6cb
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000feb637
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000feb5a3
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000feb4aa
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000feb438

@end

