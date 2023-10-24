//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UITextCompletionView : UIView
{
    NSString *_string;	// 128 = 0x80
    int _type;	// 136 = 0x88
    int _edgeType;	// 140 = 0x8c
    UIFont *_textFont;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000967d77
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000967d28
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x0000000000967ca8
- (struct CGRect)_calculateRectForExpandedHitRegion;	// IMP=0x0000000000967bcb
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000967638
- (id)initWithFrame:(struct CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;	// IMP=0x0000000000967268

@end
