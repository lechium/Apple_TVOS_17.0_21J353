//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSArray, NSMutableDictionary, UIColor, UIImage, UIImageView, UITabBar, UITabBarButtonLabel, UITabBarSwappableImageView, UIVibrancyEffect, UIView, UIVisualEffectView, _UIBadgeView, _UITabBarItemData;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl
{
    struct CGRect _hitRect;	// 128 = 0x80
    UITabBarSwappableImageView *_imageView;	// 160 = 0xa0
    UIVisualEffectView *_vibrancyEffectView;	// 168 = 0xa8
    UITabBarButtonLabel *_label;	// 176 = 0xb0
    _UIBadgeView *_badge;	// 184 = 0xb8
    UIImageView *_selectedIndicator;	// 192 = 0xc0
    struct UIEdgeInsets _imageInsets;	// 200 = 0xc8
    struct UIEdgeInsets _imageLandscapeInsets;	// 232 = 0xe8
    UIImage *_customSelectedIndicatorImage;	// 264 = 0x108
    struct UIOffset _labelOffset;	// 272 = 0x110
    NSMutableDictionary *_buttonTintColorsForState;	// 288 = 0x120
    NSMutableDictionary *_contentTintColorsForState;	// 296 = 0x128
    UIColor *_defaultUnselectedLabelTintColor;	// 304 = 0x130
    UIColor *_badgeColor;	// 312 = 0x138
    NSMutableDictionary *_badgeTextAttributesForState;	// 320 = 0x140
    struct UIOffset _badgeOffset;	// 328 = 0x148
    UIView *_highContrastFocusIndicator;	// 344 = 0x158
    _Bool _selected;	// 352 = 0x160
    _Bool _accessibilityButtonShapesEnabled;	// 353 = 0x161
    _Bool _accessibilityHighContractFocusIndicatorEnabled;	// 354 = 0x162
    _Bool _accessibilityGrayStatusEnabled;	// 355 = 0x163
    _Bool _showsHighlightedState;	// 356 = 0x164
    UIView *_focusView;	// 360 = 0x168
    Class _appearanceGuideClass;	// 368 = 0x170
    long long _layoutStyle;	// 376 = 0x178
    _UITabBarItemData *_itemAppearanceData;	// 384 = 0x180
    UIVibrancyEffect *_itemVibrantEffect;	// 392 = 0x188
    UITabBar *_tabBar;	// 400 = 0x190
    NSArray *_carplayConstraints;	// 408 = 0x198
}

+ (id)_defaultLabelColor;	// IMP=0x00600000002a4109
- (void).cxx_destruct;	// IMP=0x00000000002ab09e
@property(retain, nonatomic) NSArray *carplayConstraints; // @synthesize carplayConstraints=_carplayConstraints;
@property(readonly, nonatomic) __weak UITabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) UIVibrancyEffect *itemVibrantEffect; // @synthesize itemVibrantEffect=_itemVibrantEffect;
@property(retain, nonatomic) _UITabBarItemData *itemAppearanceData; // @synthesize itemAppearanceData=_itemAppearanceData;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(nonatomic, setter=_setShowsHighlightedState:) _Bool _showsHighlightedState; // @synthesize _showsHighlightedState;
- (void)set_info:(id)arg1;	// IMP=0x00000000002aafef
- (id)_info;	// IMP=0x00000000002aafcf
@property(readonly, nonatomic) UIColor *_defaultUnselectedLabelTintColor;
- (id)_contentTintColorForState:(unsigned long long)arg1;	// IMP=0x00000000002aaf29
- (void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002aad9b
- (id)_buttonTintColorForState:(unsigned long long)arg1;	// IMP=0x00000000002aad2d
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002aabc8
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x00000000002aaa8c
- (struct UIOffset)_titlePositionAdjustment;	// IMP=0x00000000002aaa74
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x00000000002aaa62
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x00000000002aaa21
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002aaa1b
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002aaa15
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002aaa03
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002aa89f
- (void)_setBadgeColor:(id)arg1;	// IMP=0x00000000002aa88d
- (void)_UIAppearance_setBadgeColor:(id)arg1;	// IMP=0x00000000002aa834
- (_Bool)labelShouldUseVibrancyForState:(long long)arg1;	// IMP=0x00000000002aa72a
- (_Bool)iconShouldUseVibrancyForState:(long long)arg1;	// IMP=0x00000000002aa5e3
- (struct UIOffset)badgeTitlePositionAdjustmentForState:(long long)arg1;	// IMP=0x00000000002aa5b8
- (id)badgeTextAttributesForState:(long long)arg1;	// IMP=0x00000000002aa420
- (id)badgeBackgroundColorForState:(long long)arg1;	// IMP=0x00000000002aa3d8
- (struct UIOffset)badgePositionAdjustmentForState:(long long)arg1;	// IMP=0x00000000002aa2fa
- (_Bool)isDefaultColor:(id)arg1 forState:(long long)arg2;	// IMP=0x00000000002aa251
- (id)iconColorForState:(long long)arg1;	// IMP=0x00000000002aa0aa
- (long long)defaultCompositingModeForState:(long long)arg1;	// IMP=0x00000000002aa00b
- (double)defaultAlphaForState:(long long)arg1;	// IMP=0x00000000002a9f46
- (id)defaultColorForState:(long long)arg1;	// IMP=0x00000000002a9e6f
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;	// IMP=0x00000000002a9e35
- (id)titleTextAttributesForState:(long long)arg1;	// IMP=0x00000000002a9d4d
- (long long)_currentItemState;	// IMP=0x00000000002a9cd6
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002a9be3
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002a9af0
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002a99fd
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002a98d2
- (long long)_focusTouchSensitivityStyle;	// IMP=0x00000000002a98c7
- (struct CGRect)_responderSelectionRect;	// IMP=0x00000000002a981c
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;	// IMP=0x00000000002a9794
- (id)_tabBar;	// IMP=0x00000000002a9710
- (struct CGRect)_defaultFocusRegionFrame;	// IMP=0x00000000002a96f1
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000002a962d
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000002a9354
- (void)_sendFocusAction:(id)arg1;	// IMP=0x00000000002a92b8
- (_Bool)_isEligibleForFocusInteraction;	// IMP=0x00000000002a92b0
- (_Bool)canBecomeFocused;	// IMP=0x00000000002a9251
- (id)_systemDefaultFocusGroupIdentifier;	// IMP=0x00000000002a91ca
- (void)_setCustomSelectedIndicatorImage:(id)arg1;	// IMP=0x00000000002a9125
- (void)layoutSubviews;	// IMP=0x00000000002a8dee
- (void)_ios_layoutSubviews;	// IMP=0x00000000002a84e1
- (void)_showBoundsViewAt:(struct CGRect)arg1 alignmentViewAt:(double)arg2 forSymbolImage:(_Bool)arg3;	// IMP=0x00000000002a808b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002a8079
- (struct CGSize)_horizontalLayout_sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002a7fe3
- (void)_appleTV_layoutSubviews;	// IMP=0x00000000002a7c34
@property(readonly, nonatomic) UIView *focusView; // @synthesize focusView=_focusView;
- (void)_removeCarplayConstraints;	// IMP=0x00000000002a7a3a
- (void)_setupCarplayConstraints;	// IMP=0x00000000002a700b
- (struct CGSize)_appleTV_sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002a6ea3
- (void)_setupSymbolConfigurationsForIdiom:(long long)arg1;	// IMP=0x00000000002a6bdc
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x00000000002a6b48
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000002a6b1c
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x00000000002a6af0
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000002a6a61
- (void)_updateBadgeAppearanceAndLayoutNow:(_Bool)arg1;	// IMP=0x00000000002a68fa
- (void)_setBadgeValue:(id)arg1;	// IMP=0x00000000002a67c1
- (void)_setBadgeOffset:(struct UIOffset)arg1;	// IMP=0x00000000002a679d
- (void)_positionBadgeAfterChangesIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a66e4
- (void)_positionBadge;	// IMP=0x00000000002a6337
@property(nonatomic, getter=_isSelected, setter=_setSelected:) _Bool _selected;
@property(retain, nonatomic, getter=_unselectedTintColor, setter=_setUnselectedTintColor:) UIColor *unselectedTintColor;
- (void)_updateToMatchCurrentState;	// IMP=0x00000000002a5ebe
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000002a5e7d
- (void)_showSelectedIndicator:(_Bool)arg1 changeSelection:(_Bool)arg2;	// IMP=0x00000000002a5cc7
- (void)_updateSelectedIndicatorFrame;	// IMP=0x00000000002a5732
- (void)_updateSelectedIndicatorView;	// IMP=0x00000000002a52d9
- (id)_selectedIndicatorImage;	// IMP=0x00000000002a513f
- (_Bool)_areTabBarButtonAccessibilityButtonShapesEnabled;	// IMP=0x00000000002a50e4
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;	// IMP=0x00000000002a509c
- (void)_accessibilityHighContractFocusIndicatorDidChangeNotification:(id)arg1;	// IMP=0x00000000002a5054
- (void)_accessibilityGrayStatusDidChangeNotification:(id)arg1;	// IMP=0x00000000002a500c
- (struct CGRect)_tabBarHitRect;	// IMP=0x00000000002a4fec
- (void)_setTabBarHitRect:(struct CGRect)arg1;	// IMP=0x00000000002a4fce
- (void)setImage:(id)arg1;	// IMP=0x00000000002a4fb6
- (void)_reducedTransparencyDidChange:(id)arg1;	// IMP=0x00000000002a4fa4
- (void)_updateVibrancyEffectView;	// IMP=0x00000000002a4dff
- (void)_updateAfterTraitCollectionOrAccessibilityDidChangeTV;	// IMP=0x00000000002a4c48
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002a4aec
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000002a4a7a
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets)arg4 tabBar:(id)arg5;	// IMP=0x00000000002a4a21
- (void)dealloc;	// IMP=0x00000000002a48de
- (id)initWithImage:(id)arg1 landscapeImage:(id)arg2 selectedImage:(id)arg3 landscapeSelectedImage:(id)arg4 label:(id)arg5 withInsets:(struct UIEdgeInsets)arg6 landscapeInsets:(struct UIEdgeInsets)arg7 tabBar:(id)arg8;	// IMP=0x00000000002a4166
- (id)_selectedIndicatorView;	// IMP=0x00000000002a40f4
@property(readonly, nonatomic, getter=isDefaultTVLayout) _Bool _defaultTVLayout;
@property(readonly, nonatomic) struct CGRect _contentRect;

@end

