//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIImageView, UIVisualEffectView, _UICalloutBarVisualStyle;

__attribute__((visibility("hidden")))
@interface UICalloutBarBackground : UIView
{
    UIVisualEffectView *_blurView;	// 128 = 0x80
    UIImageView *_selectionTintView;	// 136 = 0x88
    _UICalloutBarVisualStyle *m_visualStyle;	// 144 = 0x90
    struct CGRect _highlightRect;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000007e501a
@property(nonatomic) struct CGRect highlightRect; // @synthesize highlightRect=_highlightRect;
@property(retain, nonatomic) _UICalloutBarVisualStyle *visualStyle; // @synthesize visualStyle=m_visualStyle;
- (void)setHighlighted:(_Bool)arg1 forFrame:(struct CGRect)arg2;	// IMP=0x00000000007e4f06
- (void)layoutSubviews;	// IMP=0x00000000007e3a8b
- (id)blurViewBackgroundEffects;	// IMP=0x00000000007e3a30
- (_Bool)prefersCustomSelection;	// IMP=0x00000000007e39e1
- (id)containerBackgroundColor;	// IMP=0x00000000007e3986
- (double)cornerRadius;	// IMP=0x00000000007e392b
- (id)initWithVisualStyle:(id)arg1;	// IMP=0x00000000007e3718

@end
