//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIMotionEffectFocusChangeEvent
{
    struct CGPoint _focusPosition;	// 8 = 0x8
}

@property(readonly, nonatomic) struct CGPoint focusPosition; // @synthesize focusPosition=_focusPosition;
- (double)velocityRelativeToPreviousEvent:(id)arg1;	// IMP=0x0000000000d28215
- (id)copyWithTimestamp:(double)arg1;	// IMP=0x0000000000d281b5
- (id)initWithTimestamp:(double)arg1 focusPosition:(struct CGPoint)arg2;	// IMP=0x0000000000d2815b

@end

