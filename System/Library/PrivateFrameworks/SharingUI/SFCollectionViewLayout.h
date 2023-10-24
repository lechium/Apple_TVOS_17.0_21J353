//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray;
@protocol SFCollectionViewDelegateLayout;

__attribute__((visibility("hidden")))
@interface SFCollectionViewLayout : UICollectionViewLayout
{
    id <SFCollectionViewDelegateLayout> _fallbackDelegate;	// 8 = 0x8
    double _evaluatedHorizontalItemOffset;	// 16 = 0x10
    NSArray *_preparedLayoutAttributes;	// 24 = 0x18
    NSArray *_preparedUpdateItems;	// 32 = 0x20
    struct CGSize _evaluatedItemSize;	// 40 = 0x28
    struct CGSize _evaluatedContentSize;	// 56 = 0x38
    struct UIEdgeInsets _evaluatedInset;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000d748
@property(copy, nonatomic) NSArray *preparedUpdateItems; // @synthesize preparedUpdateItems=_preparedUpdateItems;
@property(copy, nonatomic) NSArray *preparedLayoutAttributes; // @synthesize preparedLayoutAttributes=_preparedLayoutAttributes;
@property(nonatomic) double evaluatedHorizontalItemOffset; // @synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset;
@property(nonatomic) struct CGSize evaluatedContentSize; // @synthesize evaluatedContentSize=_evaluatedContentSize;
@property(nonatomic) struct CGSize evaluatedItemSize; // @synthesize evaluatedItemSize=_evaluatedItemSize;
@property(nonatomic) struct UIEdgeInsets evaluatedInset; // @synthesize evaluatedInset=_evaluatedInset;
@property(nonatomic) __weak id <SFCollectionViewDelegateLayout> fallbackDelegate; // @synthesize fallbackDelegate=_fallbackDelegate;
- (void)invalidateGroupViewLayoutAnimated:(_Bool)arg1;	// IMP=0x000000000000d55e
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;	// IMP=0x000000000000d3d9
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;	// IMP=0x000000000000d3d1
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize)arg1 inset:(struct UIEdgeInsets)arg2 containerWidth:(double)arg3 offscreenPeekInFactor:(float)arg4;	// IMP=0x000000000000d331
- (id)_indexPathsForItemsInSection:(long long)arg1;	// IMP=0x000000000000d221
- (struct UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1;	// IMP=0x000000000000d1f7
- (struct CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;	// IMP=0x000000000000cf82
- (void)finalizeCollectionViewUpdates;	// IMP=0x000000000000cf42
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x000000000000ced4
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;	// IMP=0x000000000000cc2c
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x000000000000c984
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000000c8f1
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000000c78c
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000000c73e
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000000c72c
- (_Bool)shouldReverseLayoutDirection;	// IMP=0x000000000000c6bf
- (void)prepareLayout;	// IMP=0x000000000000c25b
- (void)calculateLayoutValuesForIndexPaths:(id)arg1 containerWidth:(double)arg2;	// IMP=0x000000000000bf89
- (struct CGPoint)firstItemCenterForContainerWidth:(double)arg1;	// IMP=0x000000000000be80
- (id)init;	// IMP=0x000000000000be2f

@end
