//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SRCompactKeyboardAnimation : NSObject
{
    double _duration;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    struct CGRect _beginningFrame;	// 24 = 0x18
    struct CGRect _endingFrame;	// 56 = 0x38
}

@property(readonly, nonatomic) struct CGRect endingFrame; // @synthesize endingFrame=_endingFrame;
@property(readonly, nonatomic) struct CGRect beginningFrame; // @synthesize beginningFrame=_beginningFrame;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002ca7e
- (id)initWithKeyboardNotification:(id)arg1;	// IMP=0x001000000002c809
- (id)initWithDuration:(double)arg1 curve:(long long)arg2 beginningFrame:(struct CGRect)arg3 endingFrame:(struct CGRect)arg4;	// IMP=0x001000000002c77c

@end

