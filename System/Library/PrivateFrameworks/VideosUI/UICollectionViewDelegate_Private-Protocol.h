//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/UICollectionViewDelegate-Protocol.h>
#import <VideosUI/UICollectionViewFocusDelegate_Legacy-Protocol.h>

@class NSArray, NSIndexPath, UICollectionView, UIContextMenuConfiguration, UITargetedPreview, _UIContextMenuStyle, _UIFocusFastScrollingIndexBarEntry, _UIHorizontalIndexTitleBar, _UIWindowSceneActivationConfiguration;
@protocol _UICollectionViewOrthogonalScrollView;

@protocol UICollectionViewDelegate_Private <UICollectionViewDelegate, UICollectionViewFocusDelegate_Legacy>

@optional
- (void)_collectionView:(UICollectionView *)arg1 orthogonalScrollViewDidScroll:(id <_UICollectionViewOrthogonalScrollView>)arg2 section:(long long)arg3;
- (_UIWindowSceneActivationConfiguration *)_collectionView:(UICollectionView *)arg1 sceneActivationConfigurationForItemAtIndexPath:(NSIndexPath *)arg2 point:(struct CGPoint)arg3;
- (UIContextMenuConfiguration *)_dci_collectionView:(UICollectionView *)arg1 contextMenuConfigurationForSelectedItemsAtIndexPaths:(NSArray *)arg2 point:(struct CGPoint)arg3;
- (UITargetedPreview *)_dci_collectionView:(UICollectionView *)arg1 contextMenuConfiguration:(UIContextMenuConfiguration *)arg2 previewForDismissingToItemAtIndexPath:(NSIndexPath *)arg3;
- (UITargetedPreview *)_dci_collectionView:(UICollectionView *)arg1 contextMenuConfiguration:(UIContextMenuConfiguration *)arg2 previewForHighlightingItemAtIndexPath:(NSIndexPath *)arg3;
- (UIContextMenuConfiguration *)_dci_collectionView:(UICollectionView *)arg1 contextMenuConfigurationForItemsAtIndexPaths:(NSArray *)arg2 point:(struct CGPoint)arg3;
- (NSArray *)_collectionView:(UICollectionView *)arg1 accessoriesForContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 layoutAnchor:(CDStruct_96a80611)arg3;
- (_UIContextMenuStyle *)_collectionView:(UICollectionView *)arg1 styleForContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (NSIndexPath *)_collectionView:(UICollectionView *)arg1 indexPathOfReferenceItemToPreserveContentOffsetWithProposedReference:(NSIndexPath *)arg2;
- (void)_collectionView:(UICollectionView *)arg1 horizontalIndexTitleBar:(_UIHorizontalIndexTitleBar *)arg2 selectedEntry:(_UIFocusFastScrollingIndexBarEntry *)arg3;
- (NSIndexPath *)_collectionView:(UICollectionView *)arg1 targetIndexPathForMoveFromItemAtIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
- (_Bool)_collectionView:(UICollectionView *)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (struct CGPoint)_collectionView:(UICollectionView *)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (NSIndexPath *)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(UICollectionView *)arg1;
@end

