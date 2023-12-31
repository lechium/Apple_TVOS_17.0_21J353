//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKeyboardEmojiGraphicsTraits, UIResponder, UIView;
@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryBar
{
    unsigned long long _selectedIndex;	// 128 = 0x80
    UIView *_scrubView;	// 136 = 0x88
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;	// 144 = 0x90
    _Bool _isScrubbing;	// 152 = 0x98
    double _scrubStartXLocation;	// 160 = 0xa0
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;	// 168 = 0xa8
}

+ (_Bool)wantsScreenTraits;	// IMP=0x0060000000b27551
- (void).cxx_destruct;	// IMP=0x0000000000b29092
@property(nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(retain, nonatomic) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
@property(retain, nonatomic) UIView *scrubView; // @synthesize scrubView=_scrubView;
@property unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b28eb7
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b28d0a
- (unsigned long long)selectedIndexForTouches:(id)arg1;	// IMP=0x0000000000b28bcb
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b2883d
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b2875f
- (void)removeFromSuperview;	// IMP=0x0000000000b28710
- (struct CGRect)categorySelectedCircleRect:(long long)arg1;	// IMP=0x0000000000b285a9
- (void)animateScrubberToRect:(struct CGRect)arg1;	// IMP=0x0000000000b283bd
- (struct CGRect)frameForDivider:(int)arg1;	// IMP=0x0000000000b28299
- (struct CGRect)paddedFrame;	// IMP=0x0000000000b281b5
- (unsigned long long)flippedIndexForIndex:(unsigned long long)arg1;	// IMP=0x0000000000b28140
- (void)updateCategory;	// IMP=0x0000000000b280cb
- (void)updateCategoryOnBar:(unsigned long long)arg1;	// IMP=0x0000000000b27fd3
- (void)updateToCategory:(long long)arg1;	// IMP=0x0000000000b27f9b
- (void)dimKeys:(id)arg1;	// IMP=0x0000000000b27cd7
- (void)layoutSubviews;	// IMP=0x0000000000b27c24
- (void)didMoveToWindow;	// IMP=0x0000000000b27b87
- (void)dealloc;	// IMP=0x0000000000b27b08
- (void)prepareForDisplay;	// IMP=0x0000000000b27908
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000000b278f3
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;	// IMP=0x0000000000b27559

@end

