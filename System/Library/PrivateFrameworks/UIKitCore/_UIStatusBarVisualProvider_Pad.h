//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarVisualProvider_iOS.h"

@class NSDictionary, NSLayoutConstraint, _UIStatusBarDisplayItemPlacement;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS
{
    NSDictionary *_orderedDisplayItemPlacements;	// 8 = 0x8
    NSLayoutConstraint *_trailingRegionLeadingAnchorConstraint;	// 16 = 0x10
    NSLayoutConstraint *_leadingRegionTrailingAnchorConstraint;	// 24 = 0x18
    _UIStatusBarDisplayItemPlacement *_datePlacement;	// 32 = 0x20
    _UIStatusBarDisplayItemPlacement *_timePlacement;	// 40 = 0x28
}

+ (double)baselineOffset;	// IMP=0x0060000000f692c3
+ (struct NSDirectionalEdgeInsets)edgeInsets;	// IMP=0x0060000000f6927b
+ (double)height;	// IMP=0x0060000000f6925f
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;	// IMP=0x0060000000f6919d
- (void).cxx_destruct;	// IMP=0x0000000000f6dc87
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *timePlacement; // @synthesize timePlacement=_timePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *datePlacement; // @synthesize datePlacement=_datePlacement;
@property(retain, nonatomic) NSLayoutConstraint *leadingRegionTrailingAnchorConstraint; // @synthesize leadingRegionTrailingAnchorConstraint=_leadingRegionTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingRegionLeadingAnchorConstraint; // @synthesize trailingRegionLeadingAnchorConstraint=_trailingRegionLeadingAnchorConstraint;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;	// IMP=0x0000000000f6db78
- (double)airplaneSpeedForAnimationType:(long long)arg1;	// IMP=0x0000000000f6db08
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)arg1 animationType:(long long)arg2;	// IMP=0x0000000000f6d8a9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000f6d7e6
- (void)_dateTimePreferencesUpdated;	// IMP=0x0000000000f6d786
- (_Bool)_updateDateAndTimePlacements;	// IMP=0x0000000000f6d69a
- (void)itemCreated:(id)arg1;	// IMP=0x0000000000f6d506
- (void)sizeUpdatedFromSize:(struct CGSize)arg1;	// IMP=0x0000000000f6d3c0
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect)arg1 withAnimationSettings:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000f6d342
- (void)_updateConstraintsForAvoidanceFrame:(struct CGRect)arg1;	// IMP=0x0000000000f6ce50
- (void)statusBarEnabledPartsUpdated;	// IMP=0x0000000000f6c7f5
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;	// IMP=0x0000000000f6c54d
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000f6c359
- (id)styleAttributesForStyle:(long long)arg1;	// IMP=0x0000000000f6c15e
- (struct CGRect)clockBoundsForLayoutItem:(id)arg1;	// IMP=0x0000000000f6bf73
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000f6bd2b
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000f6bb7b
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;	// IMP=0x0000000000f6ac69
- (id)setupInContainerView:(id)arg1;	// IMP=0x0000000000f6974f
- (void)dealloc;	// IMP=0x0000000000f696c5
- (id)init;	// IMP=0x0000000000f69629
- (_Bool)wantsPillInExpandedTrailingPlacements;	// IMP=0x0000000000f69621
- (id)clockFont;	// IMP=0x0000000000f69566
- (id)expandedPillFont;	// IMP=0x0000000000f694ee
- (id)pillSmallFont;	// IMP=0x0000000000f69476
- (id)pillFont;	// IMP=0x0000000000f693fe
- (id)expandedFont;	// IMP=0x0000000000f69386
- (id)normalFont;	// IMP=0x0000000000f6930e
- (struct CGSize)expandedPillSize;	// IMP=0x0000000000f692f8
- (struct CGSize)smallPillSize;	// IMP=0x0000000000f692e7
- (struct CGSize)pillSize;	// IMP=0x0000000000f692d1
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets expandedEdgeInsets;
- (double)regionSpacing;	// IMP=0x0000000000f6926d

@end

