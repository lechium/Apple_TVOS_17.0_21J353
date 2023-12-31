//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVInfoCollectionViewHorizontalLayout : UICollectionViewLayout
{
    NSMutableArray *_allCellSizes;	// 8 = 0x8
    double _sumOfCellWidths;	// 16 = 0x10
    double _maxCellHeight;	// 24 = 0x18
    NSMutableArray *_allLayoutAttributes;	// 32 = 0x20
    _Bool _isLayoutInProgress;	// 40 = 0x28
    _Bool _centered;	// 41 = 0x29
    double _interitemSpacing;	// 48 = 0x30
    double _minimumItemHeight;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000502d8
@property(nonatomic) double minimumItemHeight; // @synthesize minimumItemHeight=_minimumItemHeight;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic, getter=isCentered) _Bool centered; // @synthesize centered=_centered;
- (void)_buildLayout;	// IMP=0x000000000004fec8
- (struct CGSize)_sizeForCellAtIndexPath:(id)arg1;	// IMP=0x000000000004fe50
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000004fd8b
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000004fd66
- (void)prepareLayout;	// IMP=0x000000000004fcab
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x000000000004fc2f
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000004fb97
- (struct CGSize)_contentSizeUsedByCells;	// IMP=0x000000000004fa80
- (void)_lazilyLoadAllCellSizes;	// IMP=0x000000000004f73e
- (id)init;	// IMP=0x000000000004f697

@end

