//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextSelectionRect.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UITextUnderlineRect : UITextSelectionRect
{
    UIColor *_underlineColor;	// 24 = 0x18
    long long _underlineType;	// 32 = 0x20
    struct CGRect _rect;	// 40 = 0x28
}

+ (id)underlineRectWithRect:(struct CGRect)arg1 offset:(double)arg2;	// IMP=0x0060000000cf9cfd
- (void).cxx_destruct;	// IMP=0x0000000000cf9ec2
@property(nonatomic) long long underlineType; // @synthesize underlineType=_underlineType;
@property(retain, nonatomic) UIColor *underlineColor; // @synthesize underlineColor=_underlineColor;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)description;	// IMP=0x0000000000cf9d83
@property(readonly, nonatomic) struct CGRect fullRect;

@end

