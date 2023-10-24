//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class UISegment;

__attribute__((visibility("hidden")))
@interface UISegmentAccessibilityButton : UIButton
{
    UISegment *_segment;	// 128 = 0x80
}

+ (id)buttonWithSegment:(id)arg1;	// IMP=0x006000000061c16e
- (void).cxx_destruct;	// IMP=0x000000000061c414
@property(retain, nonatomic) UISegment *segment; // @synthesize segment=_segment;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x000000000061c38d
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000061c32b
- (void)layoutSubviews;	// IMP=0x000000000061c2a0

@end
