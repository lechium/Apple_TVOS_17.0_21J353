//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@protocol _UIPassthroughGestureDelegate;

__attribute__((visibility("hidden")))
@interface _UIPassthroughGateGestureRecognizer : UIGestureRecognizer
{
}

+ (_Bool)_supportsTouchContinuation;	// IMP=0x00600000009b49f4
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009b4a3c
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009b4a2a
- (void)endClosed;	// IMP=0x00000000009b4a13
- (void)open;	// IMP=0x00000000009b49fc
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000009b498c

// Remaining properties
@property(nonatomic) __weak id <_UIPassthroughGestureDelegate> delegate; // @dynamic delegate;

@end

