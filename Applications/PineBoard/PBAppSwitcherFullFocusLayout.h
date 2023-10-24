//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class NSDictionary, NSIndexPath;
@protocol PBWorkspaceGeometry;

@interface PBAppSwitcherFullFocusLayout : UICollectionViewLayout
{
    id <PBWorkspaceGeometry> _workspaceGeometry;	// 8 = 0x8
    NSIndexPath *_originIndexPath;	// 16 = 0x10
    NSDictionary *_computedAttributes;	// 24 = 0x18
    struct CGSize _focusableCellSize;	// 32 = 0x20
}

+ (Class)layoutAttributesClass;	// IMP=0x00400000000df8d5
- (void).cxx_destruct;	// IMP=0x00200000000e023e
@property(readonly, nonatomic) struct CGSize focusableCellSize; // @synthesize focusableCellSize=_focusableCellSize;
@property(copy, nonatomic) NSDictionary *computedAttributes; // @synthesize computedAttributes=_computedAttributes;
@property(copy, nonatomic) NSIndexPath *originIndexPath; // @synthesize originIndexPath=_originIndexPath;
@property(readonly, nonatomic) id <PBWorkspaceGeometry> workspaceGeometry; // @synthesize workspaceGeometry=_workspaceGeometry;
- (void)prepareLayout;	// IMP=0x00100000000dfbe2
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00100000000dfbb4
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00100000000dfb86
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x00100000000dfa51
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x00100000000dfa2e
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00100000000dfa26
- (struct CGSize)collectionViewContentSize;	// IMP=0x00100000000df971
- (id)initWithWorkspaceGeometry:(id)arg1;	// IMP=0x00100000000df854

@end
