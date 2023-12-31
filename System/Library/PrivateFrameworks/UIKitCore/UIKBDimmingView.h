//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIKBScreenTraits, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBDimmingView : UIView
{
    UIKBTree *_keyplane;	// 128 = 0x80
    UIKBScreenTraits *_screenTraits;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000a943b7
@property(retain, nonatomic) UIKBScreenTraits *screenTraits; // @synthesize screenTraits=_screenTraits;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000a9416a
- (void)refreshStyleForKeyplane:(id)arg1;	// IMP=0x0000000000a94156
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a940ce

@end

