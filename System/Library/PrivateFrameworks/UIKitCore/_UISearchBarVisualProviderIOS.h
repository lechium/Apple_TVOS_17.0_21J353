//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UIBarButtonItem, UIButton, UIColor, UIDictationSearchButton, UIImageView, UILabel, UINavigationButton, UINavigationItem, UISearchBarBackground, UISearchBarTextField, UISegmentedControl, UIView, UIVisualEffectView, _UIBackdropView, _UINavigationBarTitleViewOverlayRects, _UISearchBarAppearanceStorage, _UISearchBarLayout, _UISearchBarPromptContainerView, _UISearchBarScopeBarBackground, _UISearchBarScopeContainerView, _UISearchBarSearchContainerView, _UISearchBarTransitionerBase;
@protocol _UINavigationBarTitleViewDataSource;

__attribute__((visibility("hidden")))
@interface _UISearchBarVisualProviderIOS
{
    UIDictationSearchButton *_dictationButton;	// 8 = 0x8
    _UISearchBarSearchContainerView *_searchFieldContainerView;	// 16 = 0x10
    _UISearchBarPromptContainerView *_promptContainerView;	// 24 = 0x18
    _UISearchBarScopeContainerView *_scopeBarContainerView;	// 32 = 0x20
    UIImageView *_floatingSearchIconView;	// 40 = 0x28
    struct UIEdgeInsets _effectiveContentInset;	// 48 = 0x30
    unsigned long long _overriddenContentInsetEdges;	// 80 = 0x50
    _UISearchBarAppearanceStorage *_appearanceStorage;	// 88 = 0x58
    UIBarButtonItem *_animatedAppearanceBarButtonItem;	// 96 = 0x60
    UINavigationItem *_searchNavigationItem;	// 104 = 0x68
    NSArray *_inlineWidthConstraints;	// 112 = 0x70
    struct {
        unsigned int barStyle:3;
        unsigned int searchBarStyle:3;
        unsigned int barTranslucence:3;
        unsigned int searchFieldLeftViewMode:2;
        unsigned int centerPlaceholder:1;
        unsigned int disabled:1;
        unsigned int reliesOnNavigationBarBackdrop:1;
        unsigned int hideBackground:1;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int isFrozenForDismissalCrossfade:1;
        unsigned int usesEmbeddedAppearance:1;
        unsigned int showsCancelButton:1;
        unsigned int autoDisableCancelButton:1;
        unsigned int showsDeleteButton:1;
        unsigned int showsSearchResultsButton:1;
        unsigned int searchResultsButtonSelected:1;
        unsigned int showsBookmarkButton:1;
        unsigned int isPlacedInNavigationBar:1;
        unsigned int isPlacedInToolbar:1;
        unsigned int isHostedByNavigationBar:1;
        unsigned int isHostedInlineByNavigationBar:1;
        unsigned int isTextFieldManagedInNSToolbar:1;
        unsigned int providesRestingMeasurementValues:1;
        unsigned int showsScopeBar:1;
        unsigned int activeSearchDeferringScopeBar:1;
        unsigned int showDictationButton:1;
        unsigned int allowedToShowDictationButton:1;
        unsigned int dictationButtonSetupComplete:1;
        unsigned int hasSearchFieldContainerLayoutCustomizationDelegate:1;
        unsigned int floatingSearchIconViewHasBeenSetUp:1;
        unsigned int requiresSearchTextField:1;
    } _searchBarVisualProviderFlags;	// 120 = 0x78
    UISearchBarTextField *_searchField;	// 128 = 0x80
    UISearchBarBackground *_searchBarBackground;	// 136 = 0x88
    _UIBackdropView *_backdrop;	// 144 = 0x90
    UIVisualEffectView *_backdropVisualEffectView;	// 152 = 0x98
    UIView *_searchBarClippingView;	// 160 = 0xa0
    UIButton *_cancelButton;	// 168 = 0xa8
    UIBarButtonItem *_cancelBarButtonItem;	// 176 = 0xb0
    NSString *_cancelButtonText;	// 184 = 0xb8
    UINavigationButton *_leftButton;	// 192 = 0xc0
    UILabel *_promptLabel;	// 200 = 0xc8
    UIImageView *_separator;	// 208 = 0xd0
    UISegmentedControl *_scopeBar;	// 216 = 0xd8
    _UISearchBarScopeBarBackground *_scopeBarBackgroundView;	// 224 = 0xe0
    NSArray *_scopeTitles;	// 232 = 0xe8
    long long _selectedScope;	// 240 = 0xf0
    long long _backdropStyle;	// 248 = 0xf8
    UIColor *_barTintColor;	// 256 = 0x100
    long long _barPosition;	// 264 = 0x108
    unsigned long long _scopeBarPosition;	// 272 = 0x110
    double _tableViewIndexWidth;	// 280 = 0x118
    long long _navBarTitleViewLocation;	// 288 = 0x120
    _UINavigationBarTitleViewOverlayRects *_navBarTitleViewOverlayRects;	// 296 = 0x128
    id <_UINavigationBarTitleViewDataSource> _navBarTitleViewDataSource;	// 304 = 0x130
    long long _layoutState;	// 312 = 0x138
    UIBarButtonItem *_searchIconBarButtonItem;	// 320 = 0x140
    double _leftInsetForInlineSearch;	// 328 = 0x148
    double _rightInsetForInlineSearch;	// 336 = 0x150
    long long _previousLayoutState;	// 344 = 0x158
    double _backgroundExtension;	// 352 = 0x160
    _UISearchBarLayout *_currentLayout;	// 360 = 0x168
    _UISearchBarLayout *_prospectiveLayout;	// 368 = 0x170
    _UISearchBarTransitionerBase *_transitioner;	// 376 = 0x178
    struct UIEdgeInsets _contentInsetPrivateMinOrOverride;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x00000000002784b3
@property(retain, nonatomic) _UISearchBarTransitionerBase *transitioner; // @synthesize transitioner=_transitioner;
@property(retain, nonatomic) _UISearchBarLayout *prospectiveLayout; // @synthesize prospectiveLayout=_prospectiveLayout;
@property(retain, nonatomic) _UISearchBarLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) double backgroundExtension; // @synthesize backgroundExtension=_backgroundExtension;
@property(readonly, nonatomic) long long previousLayoutState; // @synthesize previousLayoutState=_previousLayoutState;
- (double)rightInsetForInlineSearch;	// IMP=0x000000000027840f
- (double)leftInsetForInlineSearch;	// IMP=0x00000000002783fd
- (long long)layoutState;	// IMP=0x00000000002783ec
- (id)animatedAppearanceBarButtonItem;	// IMP=0x00000000002783db
- (void)setNavBarTitleViewDataSource:(id)arg1;	// IMP=0x00000000002783c7
- (id)navBarTitleViewDataSource;	// IMP=0x00000000002783ae
- (void)setNavBarTitleViewOverlayRects:(id)arg1;	// IMP=0x000000000027839a
- (id)navBarTitleViewOverlayRects;	// IMP=0x0000000000278389
- (void)setNavBarTitleViewLocation:(long long)arg1;	// IMP=0x0000000000278378
- (long long)navBarTitleViewLocation;	// IMP=0x0000000000278367
- (void)setTableViewIndexWidth:(double)arg1;	// IMP=0x0000000000278355
- (double)tableViewIndexWidth;	// IMP=0x0000000000278343
- (struct UIEdgeInsets)minimumContentInset;	// IMP=0x0000000000278323
- (struct UIEdgeInsets)effectiveContentInset;	// IMP=0x0000000000278303
- (void)setScopeBarPosition:(unsigned long long)arg1;	// IMP=0x00000000002782f2
- (unsigned long long)scopeBarPosition;	// IMP=0x00000000002782e1
- (void)setBarTintColor:(id)arg1;	// IMP=0x00000000002782cd
- (id)barTintColor;	// IMP=0x00000000002782bc
- (long long)backdropStyle;	// IMP=0x00000000002782ab
- (void)setSelectedScope:(long long)arg1;	// IMP=0x000000000027829a
- (long long)selectedScope;	// IMP=0x0000000000278289
- (id)scopeTitles;	// IMP=0x0000000000278278
- (void)setScopeBarBackgroundView:(id)arg1;	// IMP=0x0000000000278264
- (id)scopeBarBackgroundView;	// IMP=0x0000000000278253
- (id)scopeBarContainerView;	// IMP=0x0000000000278242
- (void)setScopeBar:(id)arg1;	// IMP=0x000000000027822e
- (id)scopeBar;	// IMP=0x000000000027821d
- (void)setSeparator:(id)arg1;	// IMP=0x0000000000278209
- (id)separator;	// IMP=0x00000000002781f8
- (void)setPromptLabel:(id)arg1;	// IMP=0x00000000002781e4
- (id)promptLabel;	// IMP=0x00000000002781d3
- (void)setCancelButtonText:(id)arg1;	// IMP=0x00000000002781c2
- (id)cancelButtonText;	// IMP=0x00000000002781b1
- (id)cancelButton;	// IMP=0x00000000002781a0
- (id)searchBarClippingView;	// IMP=0x000000000027818f
- (void)setBackdropVisualEffectView:(id)arg1;	// IMP=0x000000000027817b
- (id)backdropVisualEffectView;	// IMP=0x000000000027816a
- (void)setBackdrop:(id)arg1;	// IMP=0x0000000000278156
- (id)backdrop;	// IMP=0x0000000000278145
- (void)setSearchBarBackground:(id)arg1;	// IMP=0x0000000000278131
- (id)searchBarBackground;	// IMP=0x0000000000278120
- (void)setSearchField:(id)arg1;	// IMP=0x000000000027810c
- (void)setHelperPlaceholderHidden:(_Bool)arg1;	// IMP=0x0000000000278106
- (void)setHelperPlaceholderOverride:(id)arg1;	// IMP=0x0000000000278100
- (void)setHelperPlaceholder:(id)arg1;	// IMP=0x00000000002780fa
- (void)setUpSearchNavigationItem;	// IMP=0x0000000000277f8e
- (id)searchNavigationItem;	// IMP=0x0000000000277ec6
- (id)searchDisplayController;	// IMP=0x0000000000277ebe
- (void)setSearchDisplayController:(id)arg1;	// IMP=0x0000000000277de6
- (void)setSearchDisplayControllerShowsCancelButton:(_Bool)arg1;	// IMP=0x0000000000277d0e
- (void)setShadowVisibleIfNecessary:(_Bool)arg1;	// IMP=0x0000000000277c36
- (id)makeShadowView;	// IMP=0x0000000000277b5c
- (id)shadowView;	// IMP=0x0000000000277a82
- (void)setBackgroundLayoutNeedsUpdate;	// IMP=0x0000000000277997
- (void)updateBackgroundToBackdropStyle:(long long)arg1;	// IMP=0x00000000002778bf
@property(nonatomic) double additionalPaddingForSearchFieldAtLeadingEdge;
@property(nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge;
- (void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000002776d0
- (void)setDelegateSearchFieldFrameManipulationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000277663
- (id)description;	// IMP=0x00000000002771ce
- (void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(_Bool)arg1;	// IMP=0x0000000000276ffa
- (_Bool)isAtTop;	// IMP=0x0000000000276d61
- (void)layoutSubviewsInBounds:(struct CGRect)arg1;	// IMP=0x0000000000276988
- (struct CGRect)boundsForSearchBarAndUpdateIfNecessaryFromSuggestedBounds:(struct CGRect)arg1;	// IMP=0x00000000002766bd
- (void)layoutSubviews;	// IMP=0x0000000000276644
- (void)configureLayout:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000000275be3
- (void)setRightInsetForInlineSearch:(double)arg1;	// IMP=0x0000000000275b63
- (void)setLeftInsetForInlineSearch:(double)arg1;	// IMP=0x0000000000275ae3
- (double)effectiveBackgroundExtension;	// IMP=0x00000000002755f5
- (void)configureLayout:(id)arg1;	// IMP=0x00000000002755d8
- (void)invalidateLayout;	// IMP=0x00000000002755bb
- (double)idealInlineWidthForLayoutState:(long long)arg1;	// IMP=0x00000000002754c7
- (_Bool)requiresSearchTextField;	// IMP=0x0000000000275492
- (void)setRequiresSearchTextField:(_Bool)arg1;	// IMP=0x00000000002753c7
- (id)existingSearchIconBarButtonItem;	// IMP=0x00000000002753b2
- (id)searchIconBarButtonItem;	// IMP=0x00000000002752c6
- (id)viewStackedInNavigationBar;	// IMP=0x0000000000275256
- (_Bool)isFrozenForDismissalCrossfade;	// IMP=0x0000000000275243
- (_Bool)wouldCombineLandscapeBarsForSize:(struct CGSize)arg1;	// IMP=0x000000000027523b
- (_Bool)shouldCombineLandscapeBarsForOrientation:(long long)arg1;	// IMP=0x0000000000275233
- (double)availableBoundsWidthForSize:(struct CGSize)arg1;	// IMP=0x0000000000275072
- (double)availableBoundsWidth;	// IMP=0x0000000000274ff0
- (void)displayNavBarCancelButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000274e78
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000274cdb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000274a57
- (void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3;	// IMP=0x000000000027487e
- (double)navigationBarContentHeight;	// IMP=0x0000000000274848
- (double)defaultHeightForOrientation:(long long)arg1;	// IMP=0x0000000000274693
- (long long)barMetricsForOrientation:(long long)arg1;	// IMP=0x0000000000274541
- (double)allowedHeightInNavigationContentView;	// IMP=0x0000000000274533
- (double)barHeightForBarMetrics:(long long)arg1;	// IMP=0x00000000002744ff
- (double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;	// IMP=0x0000000000274451
- (double)searchFieldHeight;	// IMP=0x000000000027440e
- (double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000002742a7
- (_Bool)scopeBarIsVisible;	// IMP=0x0000000000274264
- (_Bool)containsScopeBar;	// IMP=0x0000000000274209
- (double)scopeBarHeight;	// IMP=0x00000000002741c6
- (struct UIEdgeInsets)scopeBarInsets;	// IMP=0x0000000000274169
- (struct UIEdgeInsets)recalculatedEffectiveContentInsetForLayoutState:(long long)arg1 forcingInlineCalculation:(_Bool)arg2;	// IMP=0x0000000000273d58
- (struct UIEdgeInsets)recalculatedEffectiveContentInsetForLayoutState:(long long)arg1;	// IMP=0x0000000000273d36
- (void)getOverrideContentInsets:(struct UIEdgeInsets *)arg1 overriddenEdges:(unsigned long long *)arg2;	// IMP=0x0000000000273cec
- (void)setOverrideContentInsets:(struct UIEdgeInsets)arg1 forRectEdges:(unsigned long long)arg2;	// IMP=0x0000000000273aa6
- (void)updateEffectiveContentInset;	// IMP=0x0000000000273936
- (_Bool)alwaysUsesLayoutMarginsForHorizontalContentInset;	// IMP=0x0000000000273922
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 layoutState:(long long)arg5 forcingInlineCalculation:(_Bool)arg6;	// IMP=0x00000000002736fc
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 layoutState:(long long)arg5;	// IMP=0x00000000002736e0
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4;	// IMP=0x000000000027361a
- (void)getDefaultTopInset:(double *)arg1 bottomInset:(double *)arg2;	// IMP=0x0000000000273604
- (void)getTopAttachedTopInset:(double *)arg1 bottomInset:(double *)arg2 isCompact:(_Bool)arg3;	// IMP=0x00000000002734fc
- (void)getNavigationBarHostedTopInset:(double *)arg1 bottomInset:(double *)arg2 forActive:(_Bool)arg3 isCompact:(_Bool)arg4;	// IMP=0x0000000000273477
- (_Bool)_getNavigationTitleLeadingInset:(double *)arg1 trailingInset:(double *)arg2 isRTL:(_Bool)arg3;	// IMP=0x0000000000272f0f
- (void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;	// IMP=0x0000000000272e41
- (void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;	// IMP=0x0000000000272cd3
- (_Bool)isInBarButNotHosted;	// IMP=0x0000000000272c85
- (void)setClippingViewBounds:(struct CGRect)arg1;	// IMP=0x0000000000272b66
- (void)setClippingViewActive:(_Bool)arg1;	// IMP=0x0000000000272ac6
- (void)setShowsDeleteButton:(_Bool)arg1;	// IMP=0x0000000000272890
- (void)setShowsSeparator:(_Bool)arg1;	// IMP=0x0000000000272784
- (void)navigationBarSlideTransitionDidEnd;	// IMP=0x0000000000272765
- (void)navigationBarSlideTransitionWillBegin;	// IMP=0x0000000000272648
- (void)shrinkToButtonIfNecessary;	// IMP=0x00000000002725b9
- (void)growToSearchFieldIfNecessary;	// IMP=0x0000000000272529
- (void)cancelTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x000000000027243a
- (void)completeTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x00000000002722a9
- (_Bool)searchFieldContainerViewNeedsLayoutForTransitionFromLayoutState:(id)arg1 toLayout:(id)arg2;	// IMP=0x0000000000272147
- (void)animateTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x0000000000271fcc
- (void)freezeForAnimatedTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x0000000000271d69
- (void)prepareForTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x0000000000271692
- (void)driveTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x00000000002714ce
- (void)resetLayoutState;	// IMP=0x0000000000271485
- (void)setUpFloatingSearchIconView;	// IMP=0x0000000000271397
- (id)floatingSearchIconViewSuitableForMeasuring;	// IMP=0x00000000002712eb
- (void)setUpSearchField;	// IMP=0x0000000000270e67
- (void)setUpSearchBarSearchContainerIfNecessary;	// IMP=0x0000000000270d7c
- (void)setUpScopeBar;	// IMP=0x0000000000270a42
- (void)setUpPromptLabel;	// IMP=0x0000000000270586
- (void)setUpLeftButton;	// IMP=0x0000000000270432
- (void)setUpCancelButtonWithAppearance:(id)arg1;	// IMP=0x00000000002701bf
- (void)setUpCancelButton;	// IMP=0x00000000002701ab
- (void)setShowDictationButton:(_Bool)arg1 shouldUpdateView:(_Bool)arg2;	// IMP=0x0000000000270145
- (_Bool)wantsDictationButton;	// IMP=0x0000000000270132
- (void)updateForAllowedToShowDictationChange;	// IMP=0x000000000026ffff
- (void)updateDictationButtonActiveState;	// IMP=0x000000000026ff6d
- (_Bool)canShowDictationButton;	// IMP=0x000000000026ff0b
- (void)setDisableDictationButton:(_Bool)arg1;	// IMP=0x000000000026feee
- (void)cleanUpDictationMicsWithSearchField:(id)arg1;	// IMP=0x000000000026fe28
- (void)setUpDictationMicWithSearchField:(id)arg1;	// IMP=0x000000000026fcc7
- (void)dictationButtonPressed:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000026fad0
- (void)dictationControllerDidFinish:(id)arg1;	// IMP=0x000000000026fa09
- (void)dictationAvailabilityDidChange:(id)arg1;	// IMP=0x000000000026f97f
- (void)updateSearchFieldArt;	// IMP=0x000000000026f668
- (void)updateSearchBarOpacity;	// IMP=0x000000000026f605
- (void)updateScopeBarForSelectedScope;	// IMP=0x000000000026f5da
- (void)updateScopeBarBackground;	// IMP=0x000000000026f3cb
- (void)updateRightView;	// IMP=0x000000000026ed67
- (void)updatePlaceholderColor;	// IMP=0x000000000026ec19
- (void)updateNeedForBackdrop;	// IMP=0x000000000026eaf5
- (_Bool)usesBackdrop;	// IMP=0x000000000026ea95
- (void)removeBackdropVisualEffectView;	// IMP=0x000000000026ea5d
- (void)removeLegacyBackdropView;	// IMP=0x000000000026ea25
- (void)updateDictationButton;	// IMP=0x000000000026ea13
- (void)updateMagnifyingGlassView;	// IMP=0x000000000026e958
- (void)updateIfNecessaryForOldSize:(struct CGSize)arg1;	// IMP=0x000000000026e80f
- (void)updateForDrawsBackgroundInPalette;	// IMP=0x000000000026e737
- (void)updateForSemanticContext;	// IMP=0x000000000026e725
- (void)updateForDynamicType;	// IMP=0x000000000026e6aa
- (void)updateDictationButtonForDynamicTypeWithSearchField:(id)arg1;	// IMP=0x000000000026e465
- (void)updateSearchFieldControlSize;	// IMP=0x000000000026e3c8
- (void)updateSearchFieldForDynamicType;	// IMP=0x000000000026e2ec
- (_Bool)supportsDynamicType;	// IMP=0x000000000026e2a8
- (void)applySearchBarStyle;	// IMP=0x000000000026dfea
- (id)effectiveBarTintColor;	// IMP=0x000000000026dfd5
- (void)effectiveBarTintColorDidChange:(_Bool)arg1;	// IMP=0x000000000026de55
- (void)setBarTintColor:(id)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x000000000026de09
- (void)_setBarTintColor:(id)arg1;	// IMP=0x000000000026dd82
- (id)textColor;	// IMP=0x000000000026dc3d
- (id)colorForComponent:(unsigned long long)arg1 disabled:(_Bool)arg2;	// IMP=0x000000000026da58
- (_Bool)hasDarkUIAppearance;	// IMP=0x000000000026d9a2
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;	// IMP=0x000000000026d985
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000026d94c
- (struct UIOffset)searchFieldBackgroundPositionAdjustment;	// IMP=0x000000000026d8d5
- (void)setSearchFieldBackgroundPositionAdjustment:(struct UIOffset)arg1;	// IMP=0x000000000026d772
- (id)scopeBarBackgroundImage;	// IMP=0x000000000026d755
- (void)setScopeBarBackgroundImage:(id)arg1;	// IMP=0x000000000026d69f
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;	// IMP=0x000000000026d675
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;	// IMP=0x000000000026d4f9
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(_Bool *)arg3;	// IMP=0x000000000026d404
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;	// IMP=0x000000000026d3ef
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;	// IMP=0x000000000026d3c4
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000026d2fa
- (void)setSeparatorImage:(id)arg1;	// IMP=0x000000000026d21b
- (id)separatorImage;	// IMP=0x000000000026d1fe
- (id)currentSeparatorImage;	// IMP=0x000000000026d0f7
- (void)destroyPromptLabel;	// IMP=0x000000000026d085
- (void)destroyCancelButton;	// IMP=0x000000000026d011
- (void)revertViewHierarchyIfNecessary;	// IMP=0x000000000026ce3d
- (void)teardown;	// IMP=0x000000000026cc82
- (id)runtimeOnlyViews;	// IMP=0x000000000026cb4c
- (void)prepare;	// IMP=0x000000000026c848
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000026c7ab
- (id)cancelBarButtonItemIfExists;	// IMP=0x000000000026c796
- (id)cancelBarButtonItem;	// IMP=0x000000000026c6a8
- (id)leftButtonIfExists;	// IMP=0x000000000026c693
- (id)leftButton;	// IMP=0x000000000026c667
- (id)floatingSearchIconViewIfExists;	// IMP=0x000000000026c652
- (id)floatingSearchIconView;	// IMP=0x000000000026c60d
- (id)searchFieldIfExists;	// IMP=0x000000000026c5f8
- (id)searchField;	// IMP=0x000000000026c5c1
- (id)prompt;	// IMP=0x000000000026c527
- (void)setPrompt:(id)arg1;	// IMP=0x000000000026c39d
- (long long)barPosition;	// IMP=0x000000000026c36b
- (void)setBarPosition:(long long)arg1;	// IMP=0x000000000026c25c
- (void)setBackdropStyle:(long long)arg1;	// IMP=0x000000000026c039
- (void)setMinimumContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000026bfe1
- (void)setScopeTitles:(id)arg1;	// IMP=0x000000000026bd71
- (void)setCancelButton:(id)arg1;	// IMP=0x000000000026bd17
- (_Bool)isInNavigationPalette;	// IMP=0x000000000026bd0f
- (void)setInNavigationPalette:(_Bool)arg1;	// IMP=0x000000000026bc25
- (_Bool)backgroundLayoutNeedsUpdate;	// IMP=0x000000000026bc11
- (_Bool)allowsInlineScopeBar;	// IMP=0x000000000026bc09
- (void)setAllowsInlineScopeBar:(_Bool)arg1;	// IMP=0x000000000026bc03
- (_Bool)showsScopeBar;	// IMP=0x000000000026baef
- (void)setDeferredAutomaticShowsScopeBarInNavigationBar:(id)arg1;	// IMP=0x000000000026b8a7
- (void)_setShowsScopeBar:(_Bool)arg1;	// IMP=0x000000000026b882
- (void)setShowsScopeBar:(_Bool)arg1;	// IMP=0x000000000026b86e
- (void)setShowsScopeBar:(_Bool)arg1 animateOpacity:(_Bool)arg2;	// IMP=0x000000000026b65e
- (void)setShowsBookmarkButton:(_Bool)arg1;	// IMP=0x000000000026b139
- (void)setSearchResultsButtonSelected:(_Bool)arg1;	// IMP=0x000000000026b0f8
- (void)setShowsSearchResultsButton:(_Bool)arg1;	// IMP=0x000000000026b0b7
- (void)setAutoDisableCancelButton:(_Bool)arg1;	// IMP=0x000000000026b070
- (_Bool)showsCancelButton;	// IMP=0x000000000026afd5
- (void)_setShowsCancelButton:(_Bool)arg1;	// IMP=0x000000000026afb0
- (void)setShowsCancelButton:(_Bool)arg1;	// IMP=0x000000000026af9c
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000026aa63
- (void)allowCursorToAppear:(_Bool)arg1;	// IMP=0x000000000026a991
- (_Bool)usesEmbeddedAppearance;	// IMP=0x000000000026a97c
- (void)setUsesEmbeddedAppearance:(_Bool)arg1;	// IMP=0x000000000026a8bf
- (_Bool)drawsBackground;	// IMP=0x000000000026a8aa
- (void)_setHideBackground:(_Bool)arg1;	// IMP=0x000000000026a885
- (void)setDrawsBackground:(_Bool)arg1;	// IMP=0x000000000026a832
- (_Bool)drawsBackgroundInPalette;	// IMP=0x000000000026a82a
- (void)setDrawsBackgroundInPalette:(_Bool)arg1;	// IMP=0x000000000026a740
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000026a301
- (_Bool)isEnabled;	// IMP=0x000000000026a2ec
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000026a2d8
- (_Bool)centerPlaceholder;	// IMP=0x000000000026a2c2
- (void)setCenterPlaceholder:(_Bool)arg1;	// IMP=0x000000000026a21b
- (long long)searchFieldLeftViewMode;	// IMP=0x000000000026a1e4
- (void)setSearchFieldLeftViewMode:(long long)arg1;	// IMP=0x000000000026a19b
- (long long)barTranslucence;	// IMP=0x000000000026a185
- (void)_setBarTranslucence:(long long)arg1;	// IMP=0x000000000026a15f
- (void)setBarTranslucence:(long long)arg1;	// IMP=0x000000000026a0e7
- (_Bool)isTranslucent;	// IMP=0x000000000026a0cc
- (unsigned long long)searchBarStyle;	// IMP=0x000000000026a0b6
- (void)setSearchBarStyle:(unsigned long long)arg1;	// IMP=0x000000000026a037
- (long long)barStyle;	// IMP=0x000000000026a023
- (void)_setBarStyle:(long long)arg1;	// IMP=0x000000000026a004
- (void)setBarStyle:(long long)arg1;	// IMP=0x0000000000269d7d
- (_Bool)isActiveSearchDeferringScopeBar;	// IMP=0x0000000000269d69
- (void)setActiveSearchDeferringScopeBar:(_Bool)arg1;	// IMP=0x0000000000269d41
- (_Bool)reliesOnNavigationBarBackdrop;	// IMP=0x0000000000269d2b
- (void)setReliesOnNavigationBarBackdrop:(_Bool)arg1;	// IMP=0x0000000000269d06
- (_Bool)autoDisableCancelButton;	// IMP=0x0000000000269cf0
- (void)_setAutoDisableCancelButton:(_Bool)arg1;	// IMP=0x0000000000269ccb
- (_Bool)showsSearchResultsButton;	// IMP=0x0000000000269cb5
- (void)_setShowsSearchResultsButton:(_Bool)arg1;	// IMP=0x0000000000269c90
- (_Bool)showsBookmarkButton;	// IMP=0x0000000000269c7c
- (void)_setShowsBookmarkButton:(_Bool)arg1;	// IMP=0x0000000000269c57
- (_Bool)isSearchResultsButtonSelected;	// IMP=0x0000000000269c41
- (void)_setSearchResultsButtonSelected:(_Bool)arg1;	// IMP=0x0000000000269c1c
- (_Bool)isPlacedInToolbar;	// IMP=0x0000000000269c07
- (void)setPlacedInToolbar:(_Bool)arg1;	// IMP=0x0000000000269be2
- (_Bool)isPlacedInNavigationBar;	// IMP=0x0000000000269bcf
- (void)setPlacedInNavigationBar:(_Bool)arg1;	// IMP=0x0000000000269baa
- (_Bool)providesRestingMeasurementValues;	// IMP=0x0000000000269b94
- (void)setProvidesRestingMeasurementValues:(_Bool)arg1;	// IMP=0x0000000000269b6f
- (_Bool)isTextFieldManagedInNSToolbar;	// IMP=0x0000000000269b59
- (void)setTextFieldManagedInNSToolbar:(_Bool)arg1;	// IMP=0x0000000000269af6
- (_Bool)isHostedInlineByNavigationBar;	// IMP=0x0000000000269ae0
- (void)setHostedInlineByNavigationBar:(_Bool)arg1;	// IMP=0x00000000002699b0
- (_Bool)isHostedByNavigationBar;	// IMP=0x00000000002698f3
- (void)setHostedByNavigationBar:(_Bool)arg1;	// IMP=0x00000000002698ce

@end

