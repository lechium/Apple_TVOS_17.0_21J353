//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _TVCarouselCollectionViewLayout : UICollectionViewLayout
{
    NSDictionary *_layoutAttributesByIndexPath;	// 8 = 0x8
    double _minimumInteritemSpacing;	// 16 = 0x10
    struct CGSize _itemSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000031fd6
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (long long)_expectedNumberOfCells;	// IMP=0x0000000000031dc9
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000031dc1
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000031da4
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000031b3c
- (struct CGSize)collectionViewContentSize;	// IMP=0x0000000000031a5c
- (void)prepareLayout;	// IMP=0x00000000000317b5

@end

