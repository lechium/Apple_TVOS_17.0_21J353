//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HBTopShelfLabeledContentLayout : UICollectionViewFlowLayout
{
    struct {
        unsigned int delegateSizeOfSectionHeader:1;
    } _flags;	// 8 = 0x8
    _Bool _animatingFocusUpdate;	// 12 = 0xc
    NSArray *_headerFrames;	// 16 = 0x10
    unsigned long long _focusAnimationOptions;	// 24 = 0x18
    double _focusingAnimationDuration;	// 32 = 0x20
    double _unfocusingAnimationDuration;	// 40 = 0x28
}

+ (Class)invalidationContextClass;	// IMP=0x0060000000092dad
- (void).cxx_destruct;	// IMP=0x00000000000938be
@property(nonatomic) double unfocusingAnimationDuration; // @synthesize unfocusingAnimationDuration=_unfocusingAnimationDuration;
@property(nonatomic) double focusingAnimationDuration; // @synthesize focusingAnimationDuration=_focusingAnimationDuration;
@property(nonatomic) unsigned long long focusAnimationOptions; // @synthesize focusAnimationOptions=_focusAnimationOptions;
@property(nonatomic, getter=isAnimatingFocusUpdate) _Bool animatingFocusUpdate; // @synthesize animatingFocusUpdate=_animatingFocusUpdate;
@property(copy, nonatomic) NSArray *headerFrames; // @synthesize headerFrames=_headerFrames;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x000000000009380a
- (long long)developmentLayoutDirection;	// IMP=0x0000000000093802
- (double)_widthOfSection:(long long)arg1;	// IMP=0x00000000000937c4
- (struct CGRect)_rectOfSection:(long long)arg1;	// IMP=0x00000000000935f9
- (id)_layoutAttributesForSectionHeaderAtIndexPath:(id)arg1;	// IMP=0x000000000009346c
- (void)_updateIsAboveFocusedItemStateForLayoutAttribute:(id)arg1;	// IMP=0x0000000000092e40
- (void)_updateLabeledContentDelegateFlags;	// IMP=0x0000000000092dbe
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x0000000000092c64
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000092c5c
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000092b9a
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000092785
- (void)prepareLayout;	// IMP=0x00000000000921c4

@end

