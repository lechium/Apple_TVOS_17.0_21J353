//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, UICollectionView, UICollectionViewLayout, _UICollectionViewDataAttributesMap, _UIMutableFastIndexSet;

__attribute__((visibility("hidden")))
@interface UICollectionViewData : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    UICollectionViewLayout *_layout;	// 16 = 0x10
    _UIMutableFastIndexSet *_globalIndexesOfItemsAwaitingValidation;	// 24 = 0x18
    NSMutableDictionary *_supplementaryLayoutAttributes;	// 32 = 0x20
    NSMutableDictionary *_decorationLayoutAttributes;	// 40 = 0x28
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;	// 48 = 0x30
    NSMutableDictionary *_invalidatedDecorationIndexPaths;	// 56 = 0x38
    long long _lastSectionTestedForNumberOfItemsBeforeSection;	// 64 = 0x40
    long long _lastResultForNumberOfItemsBeforeSection;	// 72 = 0x48
    struct CGSize _contentSize;	// 80 = 0x50
    struct {
        unsigned int contentSizeIsValid:1;
        unsigned int itemCountsAreValid:1;
        unsigned int layoutIsPreparing:1;
        unsigned int layoutIsPrepared:1;
        unsigned int layoutLocked:1;
    } _collectionViewDataFlags;	// 96 = 0x60
    struct vector<long, std::allocator<long>> _sectionItemCounts;	// 104 = 0x68
    struct unordered_map<long, UICollectionViewLayoutAttributes *, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, UICollectionViewLayoutAttributes *>>> _globalItemMap;	// 128 = 0x80
    long long _totalItemCount;	// 168 = 0xa8
    _UICollectionViewDataAttributesMap *_attributesMap;	// 176 = 0xb0
    unsigned long long _preUpdateCachedItemCount;	// 184 = 0xb8
    NSArray *_clonedCellAttributes;	// 192 = 0xc0
    NSArray *_clonedSupplementaryAttributes;	// 200 = 0xc8
    NSArray *_clonedDecorationAttributes;	// 208 = 0xd0
}

- (id).cxx_construct;	// IMP=0x00000000003f8abe
- (void).cxx_destruct;	// IMP=0x00000000003f89ef
- (struct CGRect)_TEST_validLayoutRect;	// IMP=0x00000000003f89a0

@end

