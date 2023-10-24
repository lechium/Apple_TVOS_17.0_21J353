//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UITabBarVisualProvider.h"

@class UIMotionEffect, UIScrollView, UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderLegacyTVOS : _UITabBarVisualProvider
{
    _UIBarBackground *_backgroundView;	// 24 = 0x18
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;	// 32 = 0x20
    UIView *_customBackgroundView;	// 40 = 0x28
    UIView *_accessoryView;	// 48 = 0x30
    UIScrollView *_itemsScrollView;	// 56 = 0x38
    UIView *_focusedItemHighlightView;	// 64 = 0x40
    UIMotionEffect *_focusedItemHighlightMotionEffect;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000122f2fc
- (id)_focusedItemHighlightView;	// IMP=0x000000000122f2e7
- (void)_shim_updateTabBarItemView:(id)arg1;	// IMP=0x000000000122f1a5
- (void)_shim_layoutItemsOnly;	// IMP=0x000000000122f193
- (void)_shim_updateFocusHighlightVisibility;	// IMP=0x000000000122efd3
- (void)_shim_setShadowHidden:(_Bool)arg1;	// IMP=0x000000000122ef61
- (_Bool)_shim_shadowHidden;	// IMP=0x000000000122ef44
- (void)_shim_setShadowAlpha:(double)arg1;	// IMP=0x000000000122eecb
- (double)_shim_shadowAlpha;	// IMP=0x000000000122eeae
- (id)_shim_accessoryView;	// IMP=0x000000000122ee99
- (void)_shim_setAccessoryView:(id)arg1;	// IMP=0x000000000122ee09
- (id)_shim_compatibilityBackgroundView;	// IMP=0x000000000122ede1
- (void)_shim_setCustomBackgroundView:(id)arg1;	// IMP=0x000000000122ed8a
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000122eb5a
- (_Bool)_focusedItemHighlightViewIsVisible;	// IMP=0x000000000122eb31
- (void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)arg1 visible:(_Bool)arg2;	// IMP=0x000000000122eaf4
- (void)_setFocusedItemHightlightVisible:(_Bool)arg1;	// IMP=0x000000000122e8bb
- (void)_updateFocusedItemHighlightFrame;	// IMP=0x000000000122e7fe
- (void)_updateHighlightMotionEffect;	// IMP=0x000000000122e686
- (id)preferredFocusedView;	// IMP=0x000000000122e5c6
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000122e2fc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000122e24f
- (void)layoutSubviews;	// IMP=0x000000000122e214
- (void)updateBackgroundGroupName;	// IMP=0x000000000122e1c1
- (void)_updateBackground;	// IMP=0x000000000122db64
- (void)_layoutTabBarItems;	// IMP=0x000000000122c9e8
- (void)_configureItems:(id)arg1;	// IMP=0x000000000122c784
- (id)_parentViewForItems;	// IMP=0x000000000122c747
- (void)_updateAccessoryView;	// IMP=0x000000000122c670
- (struct CGRect)_shadowFrameForBounds:(struct CGRect)arg1 height:(double)arg2;	// IMP=0x000000000122c62b
- (struct CGRect)_layoutRegion;	// IMP=0x000000000122c591
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;	// IMP=0x000000000122c439
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x000000000122c1d1
- (id)createViewForTabBarItem:(id)arg1;	// IMP=0x000000000122bd66
- (void)changeLayout;	// IMP=0x000000000122bd50
- (void)changeAppearance;	// IMP=0x000000000122bd4a
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;	// IMP=0x000000000122bcee
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;	// IMP=0x000000000122ba4a
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;	// IMP=0x000000000122b98b
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(_Bool)arg5;	// IMP=0x000000000122aef2
- (void)teardown;	// IMP=0x000000000122ae0d
- (void)prepare;	// IMP=0x000000000122ad09

@end
