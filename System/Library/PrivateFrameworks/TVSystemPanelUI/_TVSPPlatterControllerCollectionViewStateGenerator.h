//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDiffableDataSourceSnapshot, TVSPPlatterController, UICollectionViewCompositionalLayout;
@protocol NSCollectionLayoutEnvironment;

__attribute__((visibility("hidden")))
@interface _TVSPPlatterControllerCollectionViewStateGenerator : NSObject
{
    UICollectionViewCompositionalLayout *_layout;	// 8 = 0x8
    NSArray *_sectionInfos;	// 16 = 0x10
    NSArray *_sectionLayoutResults;	// 24 = 0x18
    TVSPPlatterController *_platterController;	// 32 = 0x20
    id <NSCollectionLayoutEnvironment> _collectionLayoutEnvironment;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000728a0
@property(retain, nonatomic) id <NSCollectionLayoutEnvironment> collectionLayoutEnvironment; // @synthesize collectionLayoutEnvironment=_collectionLayoutEnvironment;
@property(readonly, nonatomic) __weak TVSPPlatterController *platterController; // @synthesize platterController=_platterController;
- (id)rendererForRow:(id)arg1 matchingFormat:(long long)arg2;	// IMP=0x00000000000724e0
- (_Bool)doesRow:(id)arg1 haveSingleItemMatchingRendererFormat:(long long)arg2;	// IMP=0x00000000000723d0
- (_Bool)isSpacerRow:(id)arg1;	// IMP=0x0000000000072360
- (_Bool)isSeparatorRow:(id)arg1;	// IMP=0x00000000000722f0
- (id)identifiersForOrthogonalRow:(id)arg1;	// IMP=0x0000000000072150
- (id)orthogonalRendererForRow:(id)arg1;	// IMP=0x00000000000720d0
- (_Bool)isOrthogonalRow:(id)arg1;	// IMP=0x0000000000072060
- (id)_orthogonalSectionForSectionIndex:(unsigned long long)arg1;	// IMP=0x00000000000711c0
- (id)rendererForIdentifier:(id)arg1;	// IMP=0x0000000000071100
- (id)_computeSectionLayoutResultsFromCurrentState;	// IMP=0x000000000006fc40
- (id)_computeSectionInfosFromCurrentState;	// IMP=0x000000000006f330
- (id)compositionalLayoutSectionForIndex:(unsigned long long)arg1;	// IMP=0x000000000006ec90
- (id)sectionIDForIndex:(unsigned long long)arg1;	// IMP=0x000000000006ec00
- (id)sectionLayoutResultsForIndex:(unsigned long long)arg1;	// IMP=0x000000000006eb30
@property(readonly, nonatomic) NSArray *sectionLayoutResults;
- (id)sectionInfoForIndex:(unsigned long long)arg1;	// IMP=0x000000000006ea00
@property(readonly, nonatomic) NSArray *sectionInfos;
- (void)invalidate;	// IMP=0x000000000006e950
@property(readonly, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property(readonly, nonatomic) UICollectionViewCompositionalLayout *layout;
- (id)initWithPlatterController:(id)arg1;	// IMP=0x000000000006e310

@end

