//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface AVDigitizerTouchGestureRecognizer : UIPanGestureRecognizer
{
    NSPointerArray *_touchTargets;	// 8 = 0x8
    _Bool _touching;	// 16 = 0x10
    _Bool _cancelled;	// 17 = 0x11
    long long _touchPositionAtStart;	// 24 = 0x18
    double _timeIntervalSinceReferenceDateOfMostRecentTouchBeganOrMoved;	// 32 = 0x20
    struct CGPoint _digitizerLocation;	// 40 = 0x28
}

+ (_Bool)_shouldDefaultToTouches;	// IMP=0x006000000007308f
- (void).cxx_destruct;	// IMP=0x000000000007307c
@property(readonly, nonatomic) double timeIntervalSinceReferenceDateOfMostRecentTouchBeganOrMoved; // @synthesize timeIntervalSinceReferenceDateOfMostRecentTouchBeganOrMoved=_timeIntervalSinceReferenceDateOfMostRecentTouchBeganOrMoved;
@property(nonatomic) long long touchPositionAtStart; // @synthesize touchPositionAtStart=_touchPositionAtStart;
@property(nonatomic, getter=wasCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isTouching) _Bool touching; // @synthesize touching=_touching;
@property(readonly, nonatomic) struct CGPoint digitizerLocation; // @synthesize digitizerLocation=_digitizerLocation;
- (void)_updateDigitizerLocationWithEvent:(id)arg1;	// IMP=0x0000000000072f69
- (void)reset;	// IMP=0x0000000000072dfa
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000072d23
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000072bcb
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000072a7c
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000072866
- (void)_forwardToSelector:(SEL)arg1 touches:(id)arg2 event:(id)arg3;	// IMP=0x00000000000726ef
@property(readonly, nonatomic) _Bool isTouchingStatusDubious;
@property(readonly, nonatomic) double timeIntervalSinceMostRecentTouchMovement;
- (id)_viewForTouchEventForwarding;	// IMP=0x00000000000724f4
@property(readonly, nonatomic) long long avTouchPosition; // @dynamic avTouchPosition;
- (void)removeTouchesTarget:(id)arg1;	// IMP=0x0000000000072447
- (void)addTouchesTarget:(id)arg1;	// IMP=0x000000000007234c
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000722e6

@end
