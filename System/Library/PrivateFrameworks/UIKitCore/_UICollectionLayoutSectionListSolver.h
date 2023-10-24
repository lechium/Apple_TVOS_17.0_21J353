//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCollectionLayoutSection, NSIndexSet, NSString, UITraitCollection, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutItemSolver, _UICollectionLayoutSectionGeometryTranslator, _UICollectionLayoutSupplementaryEnroller, _UICollectionPreferredSizes;
@protocol NSCollectionLayoutContainer;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSectionListSolver : NSObject
{
    struct vector<_UIRegionSolveResult, std::allocator<_UIRegionSolveResult>> _regions;	// 8 = 0x8
    struct unique_ptr<_UIItemSolveResult, std::default_delete<_UIItemSolveResult>> _templateItemSolveResult;	// 32 = 0x20
    _Bool _shouldAdjustContentSizeForPartialLastGroupSolution;	// 40 = 0x28
    _Bool _layoutRTL;	// 41 = 0x29
    NSString *_errorDescription;	// 48 = 0x30
    _UICollectionLayoutItemSolver *_solution;	// 56 = 0x38
    _UICollectionLayoutAuxillaryItemSolver *_sectionAuxillarySolution;	// 64 = 0x40
    _UICollectionLayoutSupplementaryEnroller *_sectionSupplementaryEnroller;	// 72 = 0x48
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;	// 80 = 0x50
    id <NSCollectionLayoutContainer> _memoizedAuxillaryHostContainer;	// 88 = 0x58
    _UICollectionPreferredSizes *_preferredSizes;	// 96 = 0x60
    NSCollectionLayoutSection *_layoutSection;	// 104 = 0x68
    id <NSCollectionLayoutContainer> _container;	// 112 = 0x70
    id <NSCollectionLayoutContainer> _supplementaryContainer;	// 120 = 0x78
    UITraitCollection *_traitCollection;	// 128 = 0x80
    unsigned long long _layoutAxis;	// 136 = 0x88
    unsigned long long _containerLayoutAxis;	// 144 = 0x90
    long long _frameCount;	// 152 = 0x98
    struct CGPoint _orthogonalOffset;	// 160 = 0xa0
    struct CGVector _orthogonalScrollingPrefetchingUnitVector;	// 176 = 0xb0
    struct CGRect _overrideContentRectForPinning;	// 192 = 0xc0
}

- (id).cxx_construct;	// IMP=0x00000000000ec6bb
- (void).cxx_destruct;	// IMP=0x00000000000ec5d1
@property(nonatomic) struct CGVector orthogonalScrollingPrefetchingUnitVector; // @synthesize orthogonalScrollingPrefetchingUnitVector=_orthogonalScrollingPrefetchingUnitVector;
@property(nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) unsigned long long containerLayoutAxis; // @synthesize containerLayoutAxis=_containerLayoutAxis;
@property(nonatomic) unsigned long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(nonatomic) _Bool layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) id <NSCollectionLayoutContainer> supplementaryContainer; // @synthesize supplementaryContainer=_supplementaryContainer;
@property(retain, nonatomic) id <NSCollectionLayoutContainer> container; // @synthesize container=_container;
@property(retain, nonatomic) NSCollectionLayoutSection *layoutSection; // @synthesize layoutSection=_layoutSection;
@property(readonly, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) struct CGPoint orthogonalOffset; // @synthesize orthogonalOffset=_orthogonalOffset;
@property(nonatomic) _Bool shouldAdjustContentSizeForPartialLastGroupSolution; // @synthesize shouldAdjustContentSizeForPartialLastGroupSolution=_shouldAdjustContentSizeForPartialLastGroupSolution;
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1;	// IMP=0x00000000000ec412
- (double)auxillaryHostPaddingBeforeBoundarySupplementaries;	// IMP=0x00000000000ec317
- (id)auxillaryHostTraitCollection;	// IMP=0x00000000000ec305
- (id)auxillaryHostPreferredSizes;	// IMP=0x00000000000ec2eb
- (id)auxillaryHostSupplementaryEnroller;	// IMP=0x00000000000ec2d1
- (long long)auxillaryHostAuxillaryKind;	// IMP=0x00000000000ec2c6
- (unsigned long long)auxillaryHostLayoutAxis;	// IMP=0x00000000000ec2b4
- (_Bool)auxillaryHostShouldLayoutRTL;	// IMP=0x00000000000ec2a2
- (id)auxillaryHostAuxillaryItems;	// IMP=0x00000000000ec23e
- (id)auxillaryHostContainer;	// IMP=0x00000000000ec09b
- (_Bool)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;	// IMP=0x00000000000ec06f
- (struct CGRect)auxillaryHostPinningRect;	// IMP=0x00000000000ebfbf
- (struct CGSize)auxillaryHostContentSize;	// IMP=0x00000000000ebe7f
- (struct _NSRange)preferredSizeGroupingRangeForItemAtIndex:(long long)arg1;	// IMP=0x00000000000ea75c
@property(readonly, nonatomic) unsigned long long containerSizeDependentAxes;
- (id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2;	// IMP=0x00000000000ea54f
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1;	// IMP=0x00000000000ea488
- (id)unpinnedSectionSupplementaryFrameForIndex:(long long)arg1;	// IMP=0x00000000000ea265
- (id)sectionSupplementaryFrameForIndex:(long long)arg1;	// IMP=0x00000000000ea070
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;	// IMP=0x00000000000e9be2
- (id)frameForIndex:(long long)arg1;	// IMP=0x00000000000e98e1
@property(readonly, nonatomic) struct CGRect primaryContentFrame;
@property(readonly, nonatomic) struct CGRect contentFrameIncludingAuxiliaries;
@property(readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
- (id)visualDescription;	// IMP=0x00000000000e93ef
- (id)queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;	// IMP=0x00000000000e93e5
- (id)queryFramesIntersectingRect:(struct CGRect)arg1;	// IMP=0x00000000000e877d
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1 overrideContentRectForPinning:(struct CGRect)arg2;	// IMP=0x00000000000e871a
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1;	// IMP=0x00000000000e86cd
- (id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2;	// IMP=0x00000000000e86a9
- (void)solveForContainer:(id)arg1 supplementaryContainer:(id)arg2 traitCollection:(id)arg3 layoutAxis:(unsigned long long)arg4 frameCount:(long long)arg5 preferredSizes:(id)arg6 layoutRTL:(_Bool)arg7;	// IMP=0x00000000000e6551
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5;	// IMP=0x00000000000e6525
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4;	// IMP=0x00000000000e64fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

