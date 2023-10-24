//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HeadBoardHome/UICollectionViewDelegate-Protocol.h>

@class HBRootCell, HBRootItem, NSString, UICollectionView;

__attribute__((visibility("hidden")))
@interface HBSingleCellHostView : UIView <UICollectionViewDelegate>
{
    _Bool _showsPersistantFocus;	// 8 = 0x8
    HBRootItem *_item;	// 16 = 0x10
    HBRootCell *_cell;	// 24 = 0x18
    UICollectionView *_cellHostCollectionView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000da0f
@property(retain, nonatomic) UICollectionView *cellHostCollectionView; // @synthesize cellHostCollectionView=_cellHostCollectionView;
@property(nonatomic) _Bool showsPersistantFocus; // @synthesize showsPersistantFocus=_showsPersistantFocus;
@property(retain, nonatomic) HBRootCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) HBRootItem *item; // @synthesize item=_item;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000000d89f
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000000d894
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000000d889
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000000000d86c
- (id)preferredFocusEnvironments;	// IMP=0x000000000000d7f3
- (id)initWithItem:(id)arg1;	// IMP=0x000000000000d4c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

