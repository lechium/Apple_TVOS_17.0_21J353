//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIActionSheet, UIColor, UIImageView, UIPopoverBackgroundView, UIPopoverController, _UICutoutShadowView;

__attribute__((visibility("hidden")))
@interface _UIPopoverView : UIView
{
    UIView *_contentView;	// 128 = 0x80
    UIPopoverBackgroundView *_backgroundView;	// 136 = 0x88
    UIView *_clipView;	// 144 = 0x90
    Class _backgroundViewClass;	// 152 = 0x98
    UIImageView *_toolbarShine;	// 160 = 0xa0
    _Bool _showsBackgroundComponentHighlights;	// 168 = 0xa8
    _Bool _showsBackgroundViewHighlight;	// 169 = 0xa9
    _Bool _showsContentViewHighlight;	// 170 = 0xaa
    _Bool _contentExtendsOverArrow;	// 171 = 0xab
    _Bool _chromeHidden;	// 172 = 0xac
    _Bool _chromeHiddenForSizeTransition;	// 173 = 0xad
    UIActionSheet *_presentedActionSheet;	// 176 = 0xb0
    UIPopoverController *_popoverController;	// 184 = 0xb8
    _UICutoutShadowView *_shadowView;	// 192 = 0xc0
    double _animationOvershootHeight;	// 200 = 0xc8
    struct CGSize _contentSize;	// 208 = 0xd0
}

+ (id)popoverViewContainingView:(id)arg1;	// IMP=0x006000000141ae44
- (void).cxx_destruct;	// IMP=0x000000000141cfd8
@property(nonatomic) double animationOvershootHeight; // @synthesize animationOvershootHeight=_animationOvershootHeight;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) _UICutoutShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) _Bool chromeHiddenForSizeTransition; // @synthesize chromeHiddenForSizeTransition=_chromeHiddenForSizeTransition;
@property(nonatomic) _Bool chromeHidden; // @synthesize chromeHidden=_chromeHidden;
@property(readonly, nonatomic) _Bool contentExtendsOverArrow; // @synthesize contentExtendsOverArrow=_contentExtendsOverArrow;
@property(nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIActionSheet *presentedActionSheet; // @synthesize presentedActionSheet=_presentedActionSheet;
@property(nonatomic) _Bool showsContentViewHighlight; // @synthesize showsContentViewHighlight=_showsContentViewHighlight;
@property(nonatomic) _Bool showsBackgroundViewHighlight; // @synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight;
@property(nonatomic) _Bool showsBackgroundComponentHighlights; // @synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights;
- (void)_performBlockCheckingDefinesTintColor:(CDUnknownBlockType)arg1;	// IMP=0x000000000141ce91
- (void)_hideArrow;	// IMP=0x000000000141ce59
- (void)_showArrow;	// IMP=0x000000000141ce21
- (void)_setCornerRadius:(double)arg1;	// IMP=0x000000000141cde0
- (void)_setFrame:(struct CGRect)arg1 arrowOffset:(double)arg2;	// IMP=0x000000000141c934
- (void)setUseToolbarShine:(_Bool)arg1;	// IMP=0x000000000141c837
@property(copy, nonatomic) UIColor *arrowBackgroundColor;
@property(copy, nonatomic) UIColor *popoverBackgroundColor;
@property(nonatomic) long long backgroundStyle;
@property(nonatomic) unsigned long long arrowDirection;
@property(nonatomic) double arrowOffset;
- (void)_updateAlphaForChromeHidden;	// IMP=0x000000000141c1c0
- (_Bool)_allowsCustomizationOfContent;	// IMP=0x000000000141c180
- (void)_setPopoverContentView:(id)arg1;	// IMP=0x000000000141bf60
- (struct CGRect)_snapshotBounds;	// IMP=0x000000000141be6e
- (id)toolbarShine;	// IMP=0x000000000141be59
- (id)standardChromeView;	// IMP=0x000000000141be01
- (id)backgroundView;	// IMP=0x000000000141bdec
- (id)contentView;	// IMP=0x000000000141bdd7
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000141bdd1
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000141bdcb
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000141bdc5
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000141bdbf
- (_Bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect)arg1;	// IMP=0x000000000141bdb7
- (int)_style;	// IMP=0x000000000141bdac
- (void)layoutSubviews;	// IMP=0x000000000141b818
- (struct UIEdgeInsets)safeAreaInsetsForContentView;	// IMP=0x000000000141b79c
- (void)_layoutToolbarShine;	// IMP=0x000000000141b5e6
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000141b3f1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000141b3dd
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(_Bool)arg3 contentExtendsOverArrow:(_Bool)arg4;	// IMP=0x000000000141aed7
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2;	// IMP=0x000000000141aec0

@end

