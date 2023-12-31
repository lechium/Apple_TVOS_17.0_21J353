//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextField.h"

@class NSMutableDictionary, NSString, NSValue, UIImage, UIImageView, UISearchBar, _UISearchBarSearchFieldBackgroundView, _UISearchTextFieldVisualStyle;

__attribute__((visibility("hidden")))
@interface UISearchTextField : UITextField
{
    NSMutableDictionary *_customClearButtons;	// 128 = 0x80
    NSMutableDictionary *_iconOffsets;	// 136 = 0x88
    NSValue *_searchTextOffsetValue;	// 144 = 0x90
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundTop;	// 152 = 0x98
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundBottom;	// 160 = 0xa0
    UIImageView *_defaultLeftView;	// 168 = 0xa8
    _Bool _deferringFirstResponder;	// 176 = 0xb0
    _Bool _animatePlaceholderOnResignFirstResponder;	// 177 = 0xb1
    struct {
        unsigned int searchBarWantsShouldSendContentChangedNotificationsIfOnlyMarkedTextChanged:1;
        unsigned int alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:1;
        unsigned int needsDelayedSearchControllerPresentation:1;
    } _searchBarTextFieldFlags;	// 180 = 0xb4
    _UISearchTextFieldVisualStyle *_visualStyle;	// 184 = 0xb8
    UIImage *_magnifyingGlassImage;	// 192 = 0xc0
    _Bool __preventSelectionViewActivation;	// 200 = 0xc8
    UISearchBar *_searchBar;	// 208 = 0xd0
}

+ (id)visualStyleRegistryIdentity;	// IMP=0x00100000002560f6
- (void).cxx_destruct;	// IMP=0x0000000000255f2b
@property(nonatomic, setter=_setPreventSelectionViewActivation:) _Bool _preventSelectionViewActivation; // @synthesize _preventSelectionViewActivation=__preventSelectionViewActivation;
@property(nonatomic, setter=_setSearchBar:) __weak UISearchBar *_searchBar; // @synthesize _searchBar;
@property(nonatomic, setter=_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:) _Bool _alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory;
- (void)_didSetFont:(id)arg1;	// IMP=0x0000000000255d86
- (void)_updateDefaultLeftViewForFont:(id)arg1;	// IMP=0x0000000000255c2c
- (_Bool)_scalesMagnifyingGlassForDynamicTypeWithFont:(id)arg1;	// IMP=0x0000000000255b1e
- (_Bool)_supportsDynamicType;	// IMP=0x0000000000255ae2
- (_Bool)_shouldOverrideEditingFont;	// IMP=0x0000000000255ada
- (_Bool)_textShouldFillFieldEditorHeight;	// IMP=0x0000000000255ad2
- (long long)_blurEffectStyle;	// IMP=0x0000000000255ac0
- (_Bool)_shouldDetermineInterfaceStyleTextColor;	// IMP=0x0000000000255ab8
- (void)insertTextSuggestion:(id)arg1;	// IMP=0x0000000000255a47
- (void)_defaultInsertTextSuggestion:(id)arg1;	// IMP=0x0000000000255961
- (id)textInputTraits;	// IMP=0x00000000002558e0
- (void)_setBottomEffectBackgroundVisible:(_Bool)arg1;	// IMP=0x0000000000255887
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000025569e
- (double)_placeholderLabelAlphaForForegroundViewsAlpha:(double)arg1;	// IMP=0x0000000000255666
- (_Bool)_delegateShouldChangeCharactersInTextStorageRange:(struct _NSRange)arg1 replacementString:(id)arg2 delegateCares:(_Bool *)arg3;	// IMP=0x00000000002555b3
- (_Bool)_delegateShouldClear;	// IMP=0x0000000000255544
- (_Bool)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;	// IMP=0x00000000002554b9
- (_Bool)_delegateShouldEndEditing;	// IMP=0x000000000025542e
- (_Bool)_delegateShouldBeginEditing;	// IMP=0x00000000002553bf
- (void)_resetNeedsDelayedSearchControllerPresentation;	// IMP=0x00000000002553ae
@property(readonly, nonatomic) _Bool _needsDelayedSearchControllerPresentation;
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000002552cc
- (_Bool)canResignFirstResponder;	// IMP=0x000000000025525a
- (_Bool)resignFirstResponder;	// IMP=0x000000000025506b
- (void)_becomeFirstResponder;	// IMP=0x0000000000254c16
- (void)_animateForFirstResponderChangeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000254be4
- (void)_animateForFirstResponderChangeWithAnimations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000254bd0
- (void)layoutSubviews;	// IMP=0x0000000000254b7b
- (void)setText:(id)arg1;	// IMP=0x0000000000254aed
- (void)_activateSelectionView;	// IMP=0x0000000000254aab
- (void)_removeEffectsBackgroundViews;	// IMP=0x0000000000254a39
- (void)_clearBackgroundViews;	// IMP=0x00000000002549f8
- (void)_updateBackgroundViewsAnimated:(_Bool)arg1;	// IMP=0x000000000025488d
- (void)updateForBackdropStyle:(long long)arg1;	// IMP=0x00000000002545a4
- (void)__highlightedDidChangeAnimated:(_Bool)arg1;	// IMP=0x00000000002544c5
- (void)_applyHighlightedAnimated:(_Bool)arg1;	// IMP=0x000000000025447c
- (void)_highlightedDidChangeAnimated:(_Bool)arg1;	// IMP=0x0000000000254433
- (void)_setBackgroundViewsAlpha:(double)arg1;	// IMP=0x00000000002543e0
- (void)_setAnimatesBackgroundCornerRadius:(_Bool)arg1;	// IMP=0x0000000000254394
- (id)_createEffectsBackgroundViewWithStyle:(long long)arg1 applyFilter:(id)arg2;	// IMP=0x0000000000254261
- (void)_updateBackgroundView:(id)arg1 withStyle:(long long)arg2 filter:(id)arg3;	// IMP=0x00000000002541b6
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000253e11
- (id)_placeholderColor;	// IMP=0x0000000000253d7f
- (Class)_placeholderLabelClass;	// IMP=0x0000000000253d6e
- (void)tintColorDidChange;	// IMP=0x0000000000253c79
- (long long)_suffixLabelTextAlignment;	// IMP=0x0000000000253c6e
- (struct CGRect)_suffixFrame;	// IMP=0x0000000000253bae
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(_Bool)arg2;	// IMP=0x0000000000253ae1
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;	// IMP=0x0000000000253a96
- (_Bool)_becomeFirstResponderWhenPossible;	// IMP=0x00000000002539a7
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000253523
- (struct CGSize)_clearButtonSize;	// IMP=0x0000000000253490
- (double)_clearButtonMarginX;	// IMP=0x0000000000253359
- (struct CGRect)_bookmarkViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000253143
- (struct CGRect)_searchIconViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000252e32
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000252de4
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000252d96
- (_Bool)_shouldCenterPlaceholder;	// IMP=0x0000000000252d15
- (struct CGRect)_adjustmentsForSearchIconViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000252bb1
- (_Bool)_shouldHideMagnifyingGlassWhenEditingOrHasContent;	// IMP=0x0000000000252adb
- (_Bool)_isEditingOrHasContent;	// IMP=0x0000000000252aa2
- (double)_maximumAlphaForLeadingView;	// IMP=0x0000000000252a01
- (void)_updateColorForMagnifyingGlass;	// IMP=0x0000000000252988
- (void)_updateAlphaForMagnifyingGlass;	// IMP=0x0000000000252929
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000025289c
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000025280f
- (struct CGRect)_adjustedTextOrEditingRect:(struct CGRect)arg1 forBounds:(struct CGRect)arg2;	// IMP=0x00000000002523ac
- (void)_updateHelpMessageOverrideWithMessage:(id)arg1;	// IMP=0x0000000000252343
- (_Bool)_shouldIgnoreBaseWritingDirectionChanges;	// IMP=0x000000000025233b
- (_Bool)_shouldResignOnEditingDidEndOnExit;	// IMP=0x0000000000252333
@property(retain, nonatomic, setter=_setSearchTextOffetValue:) NSValue *_searchTextOffsetValue;
- (id)_offsetValueForIcon:(long long)arg1;	// IMP=0x000000000025222c
- (void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2;	// IMP=0x00000000002520ff
- (_Bool)_hasCustomClearButtonImage;	// IMP=0x00000000002520db
- (id)_clearButtonImageForState:(unsigned long long)arg1;	// IMP=0x0000000000251d9c
- (void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000251bc7
- (double)_defaultHeightForBarMetrics:(long long)arg1;	// IMP=0x0000000000251baa
@property(nonatomic, setter=_setIgnoresDynamicType:) _Bool _ignoresDynamicType;
- (void)_updateLeftViewForMagnifyingGlassImage;	// IMP=0x00000000002519c9
- (void)_setMagnifyingGlassImage:(id)arg1;	// IMP=0x0000000000251942
- (_Bool)canBecomeFocused;	// IMP=0x00000000002518fe
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000025181c
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000002517ed
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025171d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002516ee
- (id)_initWithFrame:(struct CGRect)arg1 textLayoutManagerEnabled:(_Bool)arg2 defersSearchImageConfiguration:(_Bool)arg3;	// IMP=0x00000000002513d4
- (id)_initWithFrame:(struct CGRect)arg1 textLayoutManagerEnabled:(_Bool)arg2;	// IMP=0x00000000002513c0
- (id)_initWithDeferredSearchIconImageConfiguration;	// IMP=0x0000000000251364
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x0000000000251335
- (void)setDelegate:(id)arg1;	// IMP=0x000000000025125a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

