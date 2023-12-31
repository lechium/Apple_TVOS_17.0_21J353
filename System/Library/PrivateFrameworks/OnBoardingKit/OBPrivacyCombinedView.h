//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, OBPrivacyCombinedViewConfiguration, OBSupplementaryTextView, UICollectionView, UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface OBPrivacyCombinedView : UIView
{
    UIStackView *_dialogueColumnStackView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    UICollectionView *_buttonsCollectionView;	// 32 = 0x20
    double _maxButtonCellWidth;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    NSMutableArray *_volatileConstraints;	// 56 = 0x38
    OBSupplementaryTextView *_sizingSupplementaryView;	// 64 = 0x40
    OBPrivacyCombinedViewConfiguration *_configuration;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000006225
@property(copy, nonatomic) OBPrivacyCombinedViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_updateCompositingEffects;	// IMP=0x0000000000006111
- (double)_buttonsCollectionViewWidth;	// IMP=0x000000000000604a
- (double)_descriptionLabelToButtonsCollectionViewSpacing;	// IMP=0x000000000000601c
- (void)_configureFooterView:(id)arg1 atSectionIndex:(unsigned long long)arg2;	// IMP=0x0000000000005e13
- (void)_configureHeaderView:(id)arg1 atSectionIndex:(unsigned long long)arg2;	// IMP=0x0000000000005bf9
- (void)_configureListCell:(id)arg1 withTitle:(id)arg2;	// IMP=0x0000000000005ab2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000059f3
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x00000000000058ab
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000005763
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000005741
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000005605
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000005498
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000053a5
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000005308
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000000052b9
- (void)updateConstraints;	// IMP=0x00000000000050dc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000003d44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

