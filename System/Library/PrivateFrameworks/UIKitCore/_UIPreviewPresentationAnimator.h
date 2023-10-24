//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationAnimator : NSObject
{
    double _duration;	// 8 = 0x8
    CAMediaTimingFunction *_mediaTimingFunction;	// 16 = 0x10
    double _startMediaTime;	// 24 = 0x18
    CDUnknownBlockType _advanceBlock;	// 32 = 0x20
    CADisplayLink *_displayLink;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000d76a32
@property(nonatomic) __weak CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType advanceBlock; // @synthesize advanceBlock=_advanceBlock;
@property(nonatomic) double startMediaTime; // @synthesize startMediaTime=_startMediaTime;
@property(retain, nonatomic) CAMediaTimingFunction *mediaTimingFunction; // @synthesize mediaTimingFunction=_mediaTimingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)_advanceFromDisplayLink:(id)arg1;	// IMP=0x0000000000d76881
- (void)stopAnimation;	// IMP=0x0000000000d76818
- (id)initWithDuration:(double)arg1 advanceBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000d7669f
- (id)init;	// IMP=0x0000000000d76691

@end

