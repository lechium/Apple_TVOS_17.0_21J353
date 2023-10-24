//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _UIDataSourceBatchUpdateMapHelper, _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceUpdateMap : NSObject
{
    _UIDataSourceSnapshotter *_initialSnapshot;	// 8 = 0x8
    _UIDataSourceSnapshotter *_finalSnapshot;	// 16 = 0x10
    NSArray *_originalUpdateItems;	// 24 = 0x18
    NSArray *_updateItems;	// 32 = 0x20
    NSArray *_reverseUpdateItems;	// 40 = 0x28
    _UIDataSourceBatchUpdateMapHelper *_batchUpdateMapHelper;	// 48 = 0x30
}

+ (id)mapForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 batchUpdateItems:(id)arg3;	// IMP=0x0060000000436ed1
+ (id)mapForInitialSnapshot:(id)arg1 orderedUpdateItems:(id)arg2;	// IMP=0x0060000000436e61
- (void).cxx_destruct;	// IMP=0x000000000043c1df
@property(retain, nonatomic) _UIDataSourceBatchUpdateMapHelper *batchUpdateMapHelper; // @synthesize batchUpdateMapHelper=_batchUpdateMapHelper;
@property(retain, nonatomic) NSArray *reverseUpdateItems; // @synthesize reverseUpdateItems=_reverseUpdateItems;
@property(retain, nonatomic) NSArray *updateItems; // @synthesize updateItems=_updateItems;
@property(copy, nonatomic) NSArray *originalUpdateItems; // @synthesize originalUpdateItems=_originalUpdateItems;
@property(retain, nonatomic) _UIDataSourceSnapshotter *finalSnapshot; // @synthesize finalSnapshot=_finalSnapshot;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
- (id)updates;	// IMP=0x000000000043c12d
- (void)_updateSnapshot:(id)arg1 forUpdateItem:(id)arg2;	// IMP=0x000000000043bf32
- (long long)_transformSectionIndex:(long long)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x000000000043bcdd
- (id)_transformIndexPath:(id)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x000000000043b7f9
- (id)_mapUpdateForCollectionUpdateItem:(id)arg1 snapshot:(id)arg2;	// IMP=0x000000000043b30f
- (void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)arg1;	// IMP=0x000000000043b026
- (id)_rebasedUpdatesForUpdate:(id)arg1;	// IMP=0x000000000043aae2
- (id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)arg1;	// IMP=0x000000000043a5c3
- (id)submapAfterUpdate:(id)arg1;	// IMP=0x000000000043a234
- (id)submapBeforeUpdate:(id)arg1;	// IMP=0x0000000000439fe7
- (id)_findUpdateForIdentifier:(id)arg1;	// IMP=0x0000000000439df9
- (void)_performAppendingInsertsFixups;	// IMP=0x0000000000439b54
- (_Bool)_mapIsSimpleInsertMoveSequence;	// IMP=0x00000000004399ea
- (_Bool)_isSectionOnlyIndexPath:(id)arg1;	// IMP=0x000000000043998c
- (id)_sectionIndexPathForSection:(long long)arg1;	// IMP=0x0000000000439966
- (id)_newGlobalItemMapDescription;	// IMP=0x00000000004397e1
- (id)_oldGlobalItemMapDescription;	// IMP=0x0000000000439658
- (id)_newSectionMapDescription;	// IMP=0x0000000000439585
- (id)_oldSectionMapDescription;	// IMP=0x00000000004393a9
- (id)description;	// IMP=0x00000000004392b7
- (id)initialUpdateForFinalUpdate:(id)arg1;	// IMP=0x000000000043914e
- (id)finalUpdateForInitialUpdate:(id)arg1;	// IMP=0x0000000000438ed2
- (id)initialIndexPathForIndexPath:(id)arg1 beforeUpdateWithIdentifier:(id)arg2;	// IMP=0x0000000000438cf2
- (id)finalIndexPathForIndexPath:(id)arg1 startingAtUpdateWithIdentifier:(id)arg2;	// IMP=0x0000000000438c35
- (id)initialUpdateForUpdateIdentifier:(id)arg1;	// IMP=0x0000000000438a7d
- (id)updateMapByRevertingUpdateWithIdentifier:(id)arg1;	// IMP=0x0000000000438542
@property(readonly, nonatomic) _Bool isBatchUpdateMap;
- (id)rebasedMapFromNewBaseMap:(id)arg1;	// IMP=0x0000000000437a99
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;	// IMP=0x00000000004377ec
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;	// IMP=0x000000000043753f
- (id)initialIndexPathForFinalIndexPath:(id)arg1;	// IMP=0x000000000043724e
- (id)finalIndexPathForInitialIndexPath:(id)arg1;	// IMP=0x0000000000436f5d
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updateItems:(id)arg3;	// IMP=0x0000000000436d35

@end
