//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UIImageView, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationItemButtonView
{
    long long _style;	// 192 = 0xc0
    _Bool _pressed;	// 200 = 0xc8
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;	// 208 = 0xd0
    _Bool _customBackgroundImageChangedToOrFromNil;	// 216 = 0xd8
    UIImageView *_backgroundImageView;	// 224 = 0xe0
    UIImageView *_imageView;	// 232 = 0xe8
    _Bool _wantsBlendModeForAccessibilityBackgrounds;	// 240 = 0xf0
    unsigned long long _abbreviatedTitleIndex;	// 248 = 0xf8
    UIColor *_accessibilityBackgroundTintColor;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x000000000020e2f5
@property(retain, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor; // @synthesize _accessibilityBackgroundTintColor;
@property(nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) _Bool _wantsBlendModeForAccessibilityBackgrounds; // @synthesize _wantsBlendModeForAccessibilityBackgrounds;
@property(nonatomic, setter=_setAbbreviatedTitleIndex:) unsigned long long _abbreviatedTitleIndex; // @synthesize _abbreviatedTitleIndex;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000020e1da
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000020e1d2
- (void)_backSelectGestureChanged:(id)arg1;	// IMP=0x000000000020e0d6
- (void)_uninstallBackSelectGestureRecognizer;	// IMP=0x000000000020e07a
- (void)_installBackSelectGestureRecognizer;	// IMP=0x000000000020dfb3
- (void)_updateBackSelectGestureRecognizer;	// IMP=0x000000000020ded7
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000020dec5
- (void)didMoveToWindow;	// IMP=0x000000000020de84
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000020dd30
- (_Bool)canBecomeFocused;	// IMP=0x000000000020dd28
- (Class)_appearanceGuideClass;	// IMP=0x000000000020dd17
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x000000000020d7fa
- (struct UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x000000000020d722
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000020d710
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000020d55c
- (double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x000000000020d53f
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000020d52d
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000020d43b
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000020d435
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000020d42f
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x000000000020d41d
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000020d417
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000020d411
- (id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;	// IMP=0x000000000020d383
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000020d371
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000020d09c
- (_Bool)hasCustomBackgroundImage;	// IMP=0x000000000020d05e
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;	// IMP=0x000000000020d04d
- (_Bool)customBackgroundImageChangedToOrFromNil;	// IMP=0x000000000020d03d
- (id)_titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x000000000020d020
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000020d00e
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000020cf55
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
- (void)_UIAppearance_setTintColor:(id)arg1;	// IMP=0x000000000020ceb7
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000020ceb1
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000020ceab
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x000000000020cea5
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x000000000020ce9f
- (void)dealloc;	// IMP=0x000000000020ce1d
- (id)_defaultFont;	// IMP=0x000000000020cbb2
- (_Bool)pressed;	// IMP=0x000000000020cba2
- (void)setPressed:(_Bool)arg1 initialPress:(_Bool)arg2;	// IMP=0x000000000020cadb
- (void)setPressed:(_Bool)arg1;	// IMP=0x000000000020cac4
- (void)setStyle:(long long)arg1;	// IMP=0x000000000020cab0
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000020c798
- (struct CGSize)imageSize;	// IMP=0x000000000020c65d
- (id)image;	// IMP=0x000000000020c5e9
- (id)title;	// IMP=0x000000000020c4a4
- (void)layoutSubviews;	// IMP=0x000000000020bb70
- (id)backgroundImageView;	// IMP=0x000000000020bb5b
- (double)_titleYAdjustmentCustomization;	// IMP=0x000000000020bb52
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000020b7d8
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000020b77a
- (id)_currentCustomBackgroundNeedsDarkening:(_Bool *)arg1;	// IMP=0x000000000020b56a
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;	// IMP=0x000000000020b4d6
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;	// IMP=0x000000000020b3e0
- (id)_currentTextColorForBarStyle:(long long)arg1;	// IMP=0x000000000020b257
- (_Bool)_useSilverLookForBarStyle:(long long)arg1;	// IMP=0x000000000020b24f
- (id)_appearanceStorage;	// IMP=0x000000000020b23a
- (void)tintColorDidChange;	// IMP=0x000000000020b1e4
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x000000000020b14b
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;	// IMP=0x000000000020b139
- (void)_accessibilityButtonShapesParametersDidChange;	// IMP=0x000000000020b102
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000020afdf
- (_Bool)_suppressesBackIndicatorView;	// IMP=0x000000000020af7d
- (_Bool)_wantsAccessibilityButtonShapes;	// IMP=0x000000000020af4c
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;	// IMP=0x000000000020ae93
- (void)_resetRenderingModesForAccessibilityBackgrounds;	// IMP=0x000000000020accf
- (id)initWithNavigationItem:(id)arg1;	// IMP=0x000000000020ac69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

