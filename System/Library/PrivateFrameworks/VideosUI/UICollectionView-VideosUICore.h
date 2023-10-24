//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@class NSArray;

@interface UICollectionView (VideosUICore)
+ (id)collectionViewWithFrame:(struct CGRect)arg1 parentView:(id)arg2 collectionViewLayout:(id)arg3;	// IMP=0x0020000000040159
+ (id)_vui_indexPathsWithIndexSet:(id)arg1 andSection:(unsigned long long)arg2;	// IMP=0x00200000000e7818
- (id)vui_cellForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000040a7f
- (id)vui_indexPathForCell:(id)arg1;	// IMP=0x0010000000040a6d
- (_Bool)vui_isIndexPathValid:(id)arg1;	// IMP=0x00100000000409d4
- (id)_preciseIndexPathsForVisibleItems:(_Bool)arg1;	// IMP=0x001000000004060d
@property(readonly, nonatomic) NSArray *vuiPreciseIndexPathsForFullyVisibleItems;
@property(readonly, nonatomic) NSArray *vuiPreciseIndexPathsForVisibleItems;
@property(readonly, nonatomic) NSArray *vuiIndexPathsForVisibleItems;
@property(readonly, nonatomic) NSArray *vuiVisibleCells;
- (void)vui_setLayout:(id)arg1;	// IMP=0x00100000000405ac
- (id)vui_dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x001000000004059a
- (id)vui_dequeueReusableCellWithIdentifier:(id)arg1 indexPath:(id)arg2;	// IMP=0x0010000000040588
- (void)vui_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000040576
- (void)vui_registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;	// IMP=0x0010000000040564
- (void)vui_registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;	// IMP=0x0010000000040552
- (void)setVuiContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000040540
@property(nonatomic) struct CGPoint vuiContentOffset;
@property(nonatomic) struct UIEdgeInsets vuiContentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets vuiSafeAreaInsets;
@property(readonly, nonatomic) struct CGSize vuiContentSize;
@property(readonly, nonatomic) struct CGRect vuiBounds;
@property(readonly, nonatomic) struct CGSize vuiSize;
- (void)_vui_applyItemUpdateChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e74f6
- (void)_vui_applySectionUpdateChanges:(id)arg1 applyChangeBlock:(CDUnknownBlockType)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e71f5
- (void)_vui_applyUpdateChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3 updateDataSourceBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e70ec
- (void)_vui_applyMoveChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e6cf9
- (void)_vui_applyInsertChange:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e6a3d
- (void)_vui_applyDeleteChange:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e677d
- (void)_vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3 applyChangeBlock:(CDUnknownBlockType)arg4 shouldWrapInUpdate:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000e614f
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3 applyChangeBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000e6133
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e6111
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e60f9
- (void)vui_applyChangeSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e60e2
@end
