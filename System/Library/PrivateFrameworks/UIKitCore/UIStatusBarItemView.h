//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIStatusBarForegroundStyleAttributes, UIStatusBarItem, UIStatusBarLayoutManager, _UILegibilityImageSet, _UILegibilityView;

__attribute__((visibility("hidden")))
@interface UIStatusBarItemView : UIView
{
    double _currentOverlap;	// 128 = 0x80
    struct CGContext *_imageContext;	// 136 = 0x88
    double _imageContextScale;	// 144 = 0x90
    _UILegibilityView *_legibilityView;	// 152 = 0x98
    _UILegibilityImageSet *_lastGeneratedTextImage;	// 160 = 0xa0
    double _lastGeneratedTextImageLetterSpacing;	// 168 = 0xa8
    NSString *_lastGeneratedTextImageText;	// 176 = 0xb0
    _Bool _visible;	// 184 = 0xb8
    _Bool _allowsUpdates;	// 185 = 0xb9
    _Bool _shouldTintContentImage;	// 186 = 0xba
    UIStatusBarItem *_item;	// 192 = 0xc0
    UIStatusBarLayoutManager *_layoutManager;	// 200 = 0xc8
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;	// 208 = 0xd0
}

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;	// IMP=0x0060000000edf6b1
- (void).cxx_destruct;	// IMP=0x0000000000ee13a0
@property(readonly, nonatomic) _Bool shouldTintContentImage; // @synthesize shouldTintContentImage=_shouldTintContentImage;
@property(nonatomic) _Bool allowsUpdates; // @synthesize allowsUpdates=_allowsUpdates;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
@property(nonatomic) __weak UIStatusBarLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(readonly, nonatomic) UIStatusBarItem *item; // @synthesize item=_item;
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000ee1309
- (_Bool)_shouldReverseLayoutDirection;	// IMP=0x0000000000ee12e8
- (id)description;	// IMP=0x0000000000ee1222
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000ee11c0
- (void)endDisablingRasterization;	// IMP=0x0000000000ee1166
- (void)beginDisablingRasterization;	// IMP=0x0000000000ee110c
- (id)imageWithShadowNamed:(id)arg1;	// IMP=0x0000000000ee1069
- (void)clearCachedTextImage;	// IMP=0x0000000000ee1018
- (id)cachedImageWithText:(id)arg1 truncatedWithEllipsesAtMaxWidth:(double)arg2 letterSpacing:(double)arg3;	// IMP=0x0000000000ee0df6
- (id)imageWithText:(id)arg1 shouldCache:(_Bool)arg2;	// IMP=0x0000000000ee0cae
- (id)imageWithText:(id)arg1;	// IMP=0x0000000000ee0c97
- (void)endImageContext;	// IMP=0x0000000000ee0c4d
- (id)imageFromImageContextClippedToWidth:(double)arg1;	// IMP=0x0000000000ee0ac3
- (void)beginImageContextWithMinimumWidth:(double)arg1;	// IMP=0x0000000000ee0889
- (void)updateForNewStyle:(id)arg1;	// IMP=0x0000000000ee0883
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;	// IMP=0x0000000000ee087d
- (void)performPendedActions;	// IMP=0x0000000000ee0877
- (id)contentsIOSurface;	// IMP=0x0000000000ee086f
- (id)contentsImage;	// IMP=0x0000000000ee0867
- (_Bool)animatesDataChange;	// IMP=0x0000000000ee085f
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000ee0857
- (double)maximumOverlap;	// IMP=0x0000000000ee084e
- (double)addContentOverlap:(double)arg1;	// IMP=0x0000000000ee0845
- (double)resetContentOverlap;	// IMP=0x0000000000ee083c
- (double)extraRightPadding;	// IMP=0x0000000000ee0833
- (double)extraLeftPadding;	// IMP=0x0000000000ee082a
- (double)shadowPadding;	// IMP=0x0000000000ee07da
- (double)standardPadding;	// IMP=0x0000000000ee078a
- (long long)textAlignment;	// IMP=0x0000000000ee0745
- (id)textFont;	// IMP=0x0000000000ee06d9
- (long long)textStyle;	// IMP=0x0000000000ee06ce
- (void)setContentMode:(long long)arg1;	// IMP=0x0000000000ee0678
- (double)updateContentsAndWidth;	// IMP=0x0000000000ee049f
- (void)_tintContentLayerIfNeeded;	// IMP=0x0000000000ee03a8
- (double)neededSizeForImageSet:(id)arg1;	// IMP=0x0000000000ee02b6
- (double)adjustFrameToNewSize:(double)arg1;	// IMP=0x0000000000ee01f7
- (void)setLayerContentsImage:(id)arg1;	// IMP=0x0000000000edfd39
- (double)legibilityStrength;	// IMP=0x0000000000edfd2b
- (long long)legibilityStyle;	// IMP=0x0000000000edfce7
- (double)setStatusBarData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000edfc67
- (double)currentRightOverlap;	// IMP=0x0000000000edfc49
- (double)currentLeftOverlap;	// IMP=0x0000000000edfc2b
- (double)currentOverlap;	// IMP=0x0000000000edfc19
- (void)setCurrentOverlap:(double)arg1;	// IMP=0x0000000000edfc07
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;	// IMP=0x0000000000edfaa0
- (void)setVisible:(_Bool)arg1 settingAlpha:(_Bool)arg2;	// IMP=0x0000000000edfa6d
- (id)foregroundView;	// IMP=0x0000000000edf9dc
- (void)dealloc;	// IMP=0x0000000000edf996
- (_Bool)allowsUserInteraction;	// IMP=0x0000000000edf98e
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;	// IMP=0x0000000000edf7ca
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000edf759

@end

