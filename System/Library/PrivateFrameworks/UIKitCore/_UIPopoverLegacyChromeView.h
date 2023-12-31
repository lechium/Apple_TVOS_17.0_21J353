//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIPopoverLegacyChromeView
{
    UIView *_arrowBackgroundView;	// 128 = 0x80
    UIVisualEffectView *_blurView;	// 136 = 0x88
    UIView *_maskView;	// 144 = 0x90
    long long _requestedBackgroundStyle;	// 152 = 0x98
    long long _backgroundStyle;	// 160 = 0xa0
    _Bool _popoverBackgroundColorIsOpaque;	// 168 = 0xa8
    _Bool _arrowVisible;	// 169 = 0xa9
    _Bool _wasPinned;	// 170 = 0xaa
    UIView *_arrowView;	// 176 = 0xb0
    UIView *_leftCapView;	// 184 = 0xb8
    UIView *_rightCapView;	// 192 = 0xc0
}

+ (double)arrowBase;	// IMP=0x0060000001048146
+ (double)arrowHeight;	// IMP=0x0060000001048138
- (void).cxx_destruct;	// IMP=0x000000000104aa44
@property(readonly, nonatomic) UIView *rightCapView; // @synthesize rightCapView=_rightCapView;
@property(readonly, nonatomic) UIView *leftCapView; // @synthesize leftCapView=_leftCapView;
@property(readonly, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
- (void)setArrowBackgroundColor:(id)arg1;	// IMP=0x000000000104a9a4
- (void)setPopoverBackgroundColor:(id)arg1;	// IMP=0x000000000104a8a6
- (_Bool)isPinned;	// IMP=0x000000000104a833
@property(readonly, nonatomic) _Bool hasComponentViews;
- (void)_loadNecessaryViews;	// IMP=0x0000000001049ee2
- (void)_resetComponentViews;	// IMP=0x0000000001049e53
- (void)_updateBackgroundStyle;	// IMP=0x0000000001049aa0
- (long long)_resolvedBackgroundStyle;	// IMP=0x0000000001049a1d
- (void)setBackgroundStyle:(long long)arg1;	// IMP=0x0000000001049a00
- (long long)backgroundStyle;	// IMP=0x00000000010499ef
- (id)backgroundEffect;	// IMP=0x00000000010498ff
- (void)_removeEffectView;	// IMP=0x00000000010498c7
- (void)_configureEffectView;	// IMP=0x0000000001049788
- (_Bool)useShortMode;	// IMP=0x0000000001049727
- (void)_updateChrome;	// IMP=0x00000000010496aa
- (id)_shadowPath;	// IMP=0x00000000010496a2
- (struct CGSize)_shadowOffset;	// IMP=0x000000000104968c
- (double)_shadowRadius;	// IMP=0x0000000001049683
- (double)_shadowOpacity;	// IMP=0x000000000104967a
- (struct UIEdgeInsets)_shadowInsets;	// IMP=0x0000000001049667
- (void)setArrowOffset:(double)arg1;	// IMP=0x000000000104960b
- (double)arrowOffset;	// IMP=0x00000000010495c6
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;	// IMP=0x00000000010495c0
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;	// IMP=0x00000000010495ba
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;	// IMP=0x00000000010495b4
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000010495ae
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000010495a8
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000010495a2
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000104959c
- (void)layoutSubviews;	// IMP=0x00000000010492ba
- (void)_layoutArrowViewsNone;	// IMP=0x0000000001049171
- (void)_layoutArrowViewsLeftOrRight;	// IMP=0x0000000001048a3f
- (void)_layoutArrowViewsUpOrDown;	// IMP=0x00000000010483fc
- (void)didMoveToWindow;	// IMP=0x0000000001048319
- (double)maxNonPinnedOffset;	// IMP=0x0000000001048247
- (double)minNonPinnedOffset;	// IMP=0x0000000001048154

@end

