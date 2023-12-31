//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewFullScreenBrowserTransitionLayout : UICollectionViewLayout
{
    NSArray *_transitionLayoutAttributes;	// 8 = 0x8
    NSMutableDictionary *_layoutAttributesByIndexPath;	// 16 = 0x10
    NSArray *_fullscreenBrowserLayoutAttributes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000d7de
@property(copy, nonatomic) NSArray *fullscreenBrowserLayoutAttributes; // @synthesize fullscreenBrowserLayoutAttributes=_fullscreenBrowserLayoutAttributes;
@property(readonly, nonatomic) NSMutableDictionary *layoutAttributesByIndexPath; // @synthesize layoutAttributesByIndexPath=_layoutAttributesByIndexPath;
@property(readonly, copy, nonatomic) NSArray *transitionLayoutAttributes; // @synthesize transitionLayoutAttributes=_transitionLayoutAttributes;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x000000000000d792
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x000000000000d780
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x000000000000d718
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000000d62f
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000000d61d
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000000d566
- (void)prepareLayout;	// IMP=0x000000000000d079
- (id)initWithTransitionLayoutAttributes:(id)arg1;	// IMP=0x000000000000cfc4

@end

