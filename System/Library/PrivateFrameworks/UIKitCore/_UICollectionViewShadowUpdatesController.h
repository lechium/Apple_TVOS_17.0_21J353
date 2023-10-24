//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPointerArray, UICollectionView, _UIDataSourceSnapshotter, _UIDataSourceUpdateMap;

__attribute__((visibility("hidden")))
@interface _UICollectionViewShadowUpdatesController : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    _UIDataSourceSnapshotter *_initialSnapshot;	// 16 = 0x10
    _UIDataSourceUpdateMap *_updateMap;	// 24 = 0x18
    NSMutableArray *__shadowUpdates;	// 32 = 0x20
    NSPointerArray *_rebaseObservers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000431749
@property(retain, nonatomic) NSPointerArray *rebaseObservers; // @synthesize rebaseObservers=_rebaseObservers;
@property(retain, nonatomic) NSMutableArray *_shadowUpdates; // @synthesize _shadowUpdates=__shadowUpdates;
@property(retain, nonatomic) _UIDataSourceUpdateMap *updateMap; // @synthesize updateMap=_updateMap;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_pruneAndRebaseShadowUpdatesForShadowInsertWithIdentifier:(id)arg1;	// IMP=0x00000000004315b8
- (id)_findInsertShadowUpdateForFinalIndexPath:(id)arg1;	// IMP=0x0000000000431337
- (id)_findShadowUpdateForIdentifier:(id)arg1 inShadowUpdates:(id)arg2;	// IMP=0x0000000000431158
- (void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000431152
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1;	// IMP=0x0000000000431145
- (id)_supplementaryIndexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x000000000043112f
- (id)_indexPathsBeforeShadowUpdates:(id)arg1;	// IMP=0x0000000000430f7e
- (long long)sectionIndexAfterShadowUpdates:(long long)arg1 allowingAppendingInserts:(_Bool)arg2;	// IMP=0x0000000000430e4a
- (long long)sectionIndexAfterShadowUpdates:(long long)arg1;	// IMP=0x0000000000430e36
- (long long)sectionIndexBeforeShadowUpdates:(long long)arg1;	// IMP=0x0000000000430dc7
- (id)indexPathAfterShadowUpdates:(id)arg1 allowingAppendingInserts:(_Bool)arg2;	// IMP=0x0000000000430c43
- (id)indexPathAfterShadowUpdates:(id)arg1;	// IMP=0x0000000000430c2f
- (id)indexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x0000000000430b95
- (id)_coalesceUpdatesIfPossible:(id)arg1;	// IMP=0x00000000004308f0
- (id)_snapshotForShadowUpdatePreceedingShadowUpdate:(id)arg1 shadowUpdates:(id)arg2;	// IMP=0x0000000000430793
- (id)_rebasedUpdateMapForUpdate:(id)arg1;	// IMP=0x0000000000430640
- (void)_regenerateUpdateMap;	// IMP=0x0000000000430573
- (id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2 shadowUpdates:(id)arg3;	// IMP=0x000000000042fe25
- (_Bool)_shadowUpdatesAreSimpleInsertWithOptionalMoveSequenceForIndexPath:(id)arg1;	// IMP=0x000000000042fc2b
- (_Bool)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;	// IMP=0x000000000042fc23
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000042f9f3
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000042f7c3
- (id)_collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000000042f6a9
- (id)_collectionView:(id)arg1 indexPathOfReferenceItemToPreserveContentOffsetWithProposedReference:(id)arg2;	// IMP=0x000000000042f582
- (void)_collectionView:(id)arg1 orthogonalScrollViewDidScroll:(id)arg2 section:(long long)arg3;	// IMP=0x000000000042f4e6
- (_Bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;	// IMP=0x000000000042f426
- (struct CGPoint)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x000000000042f370
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1;	// IMP=0x000000000042f2cf
- (void)collectionView:(id)arg1 performPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x000000000042f237
- (_Bool)collectionView:(id)arg1 canPerformPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x000000000042f195
- (void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000042f0f8
- (void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000042f05b
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 dismissalPreviewForItemAtIndexPath:(id)arg3;	// IMP=0x000000000042efab
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 highlightPreviewForItemAtIndexPath:(id)arg3;	// IMP=0x000000000042eefb
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x000000000042ee4b
- (void)_collectionView:(id)arg1 horizontalIndexTitleBar:(id)arg2 selectedEntry:(id)arg3;	// IMP=0x000000000042ed86
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusFromItemAtIndexPath:(id)arg2 toView:(id)arg3 heading:(unsigned long long)arg4;	// IMP=0x000000000042ec9c
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000042ebd9
- (void)_collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000042eb16
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000042ea53
- (id)indexPathForPreferredFocusedItemForCollectionView:(id)arg1;	// IMP=0x000000000042e986
- (_Bool)_collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000042e8b7
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000000042e7e8
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000042e724
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x000000000042e66e
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000042e59f
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x000000000042e4e9
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000000042e412
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;	// IMP=0x000000000042e317
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;	// IMP=0x000000000042e240
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x000000000042e15a
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x000000000042e070
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;	// IMP=0x000000000042dfa1
- (_Bool)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;	// IMP=0x000000000042debc
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000000042ddce
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000042dcf0
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000000042dc02
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000042db24
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000000042da61
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000042d99e
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000000042d8cf
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000042d800
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000042d73d
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000042d67a
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000042d5ab
- (void)_collectionView:(id)arg1 willPerformUpdates:(id)arg2;	// IMP=0x000000000042d28b
- (id)_collectionView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000042d1d1
- (id)_collectionView:(id)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;	// IMP=0x000000000042d12a
- (id)_sectionIndexTitlesForCollectionView:(id)arg1;	// IMP=0x000000000042d089
- (_Bool)_collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;	// IMP=0x000000000042cfba
- (void)_collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000000042ceb6
- (_Bool)_collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x000000000042cde2
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;	// IMP=0x000000000042ccff
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;	// IMP=0x000000000042cc24
- (id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000042cb58
- (id)indexTitlesForCollectionView:(id)arg1;	// IMP=0x000000000042cab2
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000000042c9ae
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x000000000042c8df
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000042c7e3
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000042c656
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000042c541
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000042c422
- (void)addRebaseObserver:(id)arg1;	// IMP=0x000000000042c37b
- (id)computeRevertShadowUpdates;	// IMP=0x000000000042c1d8
- (id)shadowUpdates;	// IMP=0x000000000042c1c6
- (void)appendShadowUpdate:(id)arg1;	// IMP=0x000000000042be46
- (void)didRebaseWithNewBaseUpdateMap:(id)arg1;	// IMP=0x000000000042be40
- (void)rebaseForUpdates:(id)arg1 notifyRebaseObservers:(_Bool)arg2;	// IMP=0x000000000042b9ce
- (_Bool)shouldRebaseForUpdates;	// IMP=0x000000000042b986
- (void)reset;	// IMP=0x000000000042b91d
- (id)initWithCollectionView:(id)arg1;	// IMP=0x000000000042b83c

@end
