//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray, NSString, UIKeyboardEmojiVariantDivider;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiVariantView : UIView
{
    UIKeyboardEmojiVariantDivider *_divider;	// 8 = 0x8
    NSMutableArray *_cells;	// 16 = 0x10
    UIView *_touchForwardingView;	// 24 = 0x18
}

+ (struct CGSize)preferredContentViewSizeForKey:(id)arg1 withTraits:(id)arg2;	// IMP=0x001000000066db70
- (void).cxx_destruct;	// IMP=0x000000000066e51e
@property(retain, nonatomic) UIView *touchForwardingView; // @synthesize touchForwardingView=_touchForwardingView;
- (id)nextResponder;	// IMP=0x000000000066e481
- (void)updateRenderConfig:(id)arg1;	// IMP=0x000000000066e3ad
- (_Bool)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2 phase:(long long)arg3;	// IMP=0x000000000066e39b
- (_Bool)updateSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x000000000066e145
- (void)updateHighlightForSelectedVariantIndex:(long long)arg1;	// IMP=0x000000000066e088
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x000000000066dbf0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000066db02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

