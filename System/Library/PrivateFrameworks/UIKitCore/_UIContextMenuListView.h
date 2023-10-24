//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSIndexPath, NSMutableArray, NSString, UIBezierPath, UICollectionView, UICollectionViewDiffableDataSource, UIMenu, UIVisualEffectView, _UICutoutShadowView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuListView : UIView
{
    _Bool _reversesActionOrder;	// 128 = 0x80
    _Bool _emphasized;	// 129 = 0x81
    _Bool _allowsFocus;	// 130 = 0x82
    _Bool _allowsBackgroundViewInteraction;	// 131 = 0x83
    _Bool _hasValidContentSize;	// 132 = 0x84
    _Bool _portalingFocusedView;	// 133 = 0x85
    NSString *_backgroundMaterialGroupName;	// 136 = 0x88
    UICollectionView *_collectionView;	// 144 = 0x90
    UIMenu *_displayedMenu;	// 152 = 0x98
    unsigned long long _parentHierarchyStyle;	// 160 = 0xa0
    unsigned long long _position;	// 168 = 0xa8
    NSIndexPath *_highlightedIndexPath;	// 176 = 0xb0
    unsigned long long _roundedEdges;	// 184 = 0xb8
    double _shadowAlpha;	// 192 = 0xc0
    double _collectionViewAlpha;	// 200 = 0xc8
    _UICutoutShadowView *_shadowView;	// 208 = 0xd0
    UIView *_clippingView;	// 216 = 0xd8
    UIVisualEffectView *_backgroundView;	// 224 = 0xe0
    UICollectionViewDiffableDataSource *_collectionViewDataSource;	// 232 = 0xe8
    UICollectionView *_outgoingCollectionView;	// 240 = 0xf0
    UICollectionViewDiffableDataSource *_outgoingCollectionViewDataSource;	// 248 = 0xf8
    double _emphasisAlphaMultiplier;	// 256 = 0x100
    UIBezierPath *_hoverZone;	// 264 = 0x108
    NSMutableArray *_portals;	// 272 = 0x110
    UIView *_portalContainerView;	// 280 = 0x118
    UIView *_cvBackgroundView;	// 288 = 0x120
    UIView *_borderView;	// 296 = 0x128
    struct CGSize _nativeContentSize;	// 304 = 0x130
    struct CGSize _visibleContentSize;	// 320 = 0x140
    struct NSDirectionalEdgeInsets _contentMargins;	// 336 = 0x150
    struct NSDirectionalEdgeInsets _headerMargins;	// 368 = 0x170
    struct NSDirectionalEdgeInsets _menuTitleMargins;	// 400 = 0x190
}

- (void).cxx_destruct;	// IMP=0x0000000000d6098a
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *cvBackgroundView; // @synthesize cvBackgroundView=_cvBackgroundView;
@property(retain, nonatomic) UIView *portalContainerView; // @synthesize portalContainerView=_portalContainerView;
@property(retain, nonatomic) NSMutableArray *portals; // @synthesize portals=_portals;
@property(nonatomic) _Bool portalingFocusedView; // @synthesize portalingFocusedView=_portalingFocusedView;
@property(nonatomic) struct NSDirectionalEdgeInsets menuTitleMargins; // @synthesize menuTitleMargins=_menuTitleMargins;
@property(nonatomic) struct NSDirectionalEdgeInsets headerMargins; // @synthesize headerMargins=_headerMargins;
@property(nonatomic) struct NSDirectionalEdgeInsets contentMargins; // @synthesize contentMargins=_contentMargins;
@property(retain, nonatomic) UIBezierPath *hoverZone; // @synthesize hoverZone=_hoverZone;
@property(nonatomic) _Bool hasValidContentSize; // @synthesize hasValidContentSize=_hasValidContentSize;
@property(nonatomic) double emphasisAlphaMultiplier; // @synthesize emphasisAlphaMultiplier=_emphasisAlphaMultiplier;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *outgoingCollectionViewDataSource; // @synthesize outgoingCollectionViewDataSource=_outgoingCollectionViewDataSource;
@property(retain, nonatomic) UICollectionView *outgoingCollectionView; // @synthesize outgoingCollectionView=_outgoingCollectionView;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource; // @synthesize collectionViewDataSource=_collectionViewDataSource;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(retain, nonatomic) _UICutoutShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) struct CGSize visibleContentSize; // @synthesize visibleContentSize=_visibleContentSize;
@property(nonatomic) struct CGSize nativeContentSize; // @synthesize nativeContentSize=_nativeContentSize;
@property(nonatomic) double collectionViewAlpha; // @synthesize collectionViewAlpha=_collectionViewAlpha;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) unsigned long long roundedEdges; // @synthesize roundedEdges=_roundedEdges;
@property(copy, nonatomic) NSIndexPath *highlightedIndexPath; // @synthesize highlightedIndexPath=_highlightedIndexPath;
@property(nonatomic) _Bool allowsBackgroundViewInteraction; // @synthesize allowsBackgroundViewInteraction=_allowsBackgroundViewInteraction;
@property(nonatomic) _Bool allowsFocus; // @synthesize allowsFocus=_allowsFocus;
@property(nonatomic) _Bool emphasized; // @synthesize emphasized=_emphasized;
@property(nonatomic) _Bool reversesActionOrder; // @synthesize reversesActionOrder=_reversesActionOrder;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long parentHierarchyStyle; // @synthesize parentHierarchyStyle=_parentHierarchyStyle;
@property(retain, nonatomic) UIMenu *displayedMenu; // @synthesize displayedMenu=_displayedMenu;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_removeAllPortals;	// IMP=0x0000000000d6040b
- (void)_portalCellIfNeeded:(id)arg1;	// IMP=0x0000000000d600d5
- (void)_updateCellPortalingWithUpdateFocusInContext:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x0000000000d6000b
- (void)_updateCellPortalingWithCell:(id)arg1;	// IMP=0x0000000000d5ffad
- (void)_tearDownCellPortalingIfNeeded;	// IMP=0x0000000000d5ff25
- (void)_setupCellPortalingIfNeeded;	// IMP=0x0000000000d5fcc7
- (void)_updatePlatterHairline;	// IMP=0x0000000000d5fb1d
- (void)_updateContentMargins;	// IMP=0x0000000000d5f797
- (id)_platformMetrics;	// IMP=0x0000000000d5f73f
- (double)_clampedCornerRadius;	// IMP=0x0000000000d5f61e
@property(readonly, nonatomic) NSString *backgroundMaterialGroupName; // @synthesize backgroundMaterialGroupName=_backgroundMaterialGroupName;
- (void)_configureCell:(id)arg1 forElement:(id)arg2 section:(id)arg3 size:(long long)arg4;	// IMP=0x0000000000d5ed20
- (id)_dataSourceForCollectionView:(id)arg1;	// IMP=0x0000000000d5e003
- (id)_headerIndexPath;	// IMP=0x0000000000d5dfc1
- (id)_viewAtIndexPath:(id)arg1;	// IMP=0x0000000000d5dee1
- (void)highlightItemAtIndexPath:(id)arg1 forHover:(_Bool)arg2;	// IMP=0x0000000000d5dcf9
- (void)highlightItemAtIndexPath:(id)arg1;	// IMP=0x0000000000d5dce5
- (void)unHighlightItemAtIndexPath:(id)arg1;	// IMP=0x0000000000d5dc02
- (id)cellForElement:(id)arg1;	// IMP=0x0000000000d5db29
- (id)indexPathForElement:(id)arg1;	// IMP=0x0000000000d5da54
- (id)elementAtIndexPath:(id)arg1;	// IMP=0x0000000000d5d97f
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000d5d7c6
- (_Bool)_shouldScrollToSelectedAction;	// IMP=0x0000000000d5d74a
- (void)scrollToFirstSignificantAction;	// IMP=0x0000000000d5d444
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000d5d30e
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000d5d1b4
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000d5d19f
- (id)preferredFocusEnvironments;	// IMP=0x0000000000d5cfab
- (void)didCompleteInPlaceMenuTransition;	// IMP=0x0000000000d5cf6c
- (void)willStartInPlaceMenuTransition;	// IMP=0x0000000000d5cf11
- (void)didCompleteMenuAppearanceAnimation;	// IMP=0x0000000000d5c250
- (void)_updateShadowAlpha;	// IMP=0x0000000000d5c1da
- (void)_updateCollectionViewAlpha;	// IMP=0x0000000000d5c164
- (void)_updateCornerRadius;	// IMP=0x0000000000d5bdd8
- (void)_updateScrollInsets;	// IMP=0x0000000000d5bc01
- (void)_sizeClippingAndCollectionViews;	// IMP=0x0000000000d5b855
- (void)layoutSubviews;	// IMP=0x0000000000d5b727
- (struct CGSize)preferredContentSizeWithinContainerSize:(struct CGSize)arg1;	// IMP=0x0000000000d5b342
- (void)setSubmenuTitleViewExpanded:(_Bool)arg1 withMaterialGroupName:(id)arg2 numberOfTitleLines:(unsigned long long)arg3 highlighted:(_Bool)arg4;	// IMP=0x0000000000d5af9d
- (struct CGVector)selectionGestureAllowableMovementForGestureBeginningAtIndexPath:(id)arg1;	// IMP=0x0000000000d5ab57
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000d5a1ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
