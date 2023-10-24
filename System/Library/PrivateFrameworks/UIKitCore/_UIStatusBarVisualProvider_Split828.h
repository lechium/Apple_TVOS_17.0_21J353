//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarVisualProvider_FixedSplit.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Split828 : _UIStatusBarVisualProvider_FixedSplit
{
}

+ (_Bool)shrinksSingleCharacterTypes;	// IMP=0x0010000000f7e0a3
+ (double)LTEAPlusFontSize;	// IMP=0x0010000000f7e095
+ (double)additionalBottomLeadingMargin;	// IMP=0x0010000000f7e031
+ (double)baseFontSize;	// IMP=0x0010000000f7e007
+ (double)pillCenteringOffset;	// IMP=0x0010000000f7dfbc
+ (double)leadingCenteringOffset;	// IMP=0x0010000000f7dfae
+ (double)leadingSmallPillSpacing;	// IMP=0x0010000000f7dfa0
+ (struct CGSize)notchSize;	// IMP=0x0010000000f7df6e
+ (double)nativeDisplayWidth;	// IMP=0x0010000000f7df60
+ (double)height;	// IMP=0x0010000000f7df52
- (double)condensedPointSizeForCellularType:(long long)arg1 defaultPointSize:(double)arg2 baselineOffset:(double *)arg3;	// IMP=0x0000000000f7e0ab
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;	// IMP=0x0000000000f7e069
- (double)expandedIconScale;	// IMP=0x0000000000f7e05b
- (double)normalIconScale;	// IMP=0x0000000000f7e04d
- (double)bottomLeadingTopOffset;	// IMP=0x0000000000f7e03f
- (double)lowerExpandedBaselineOffset;	// IMP=0x0000000000f7e023
- (double)baselineBottomInset;	// IMP=0x0000000000f7e015
- (struct CGSize)expandedPillSize;	// IMP=0x0000000000f7dff1
- (struct CGSize)smallPillSize;	// IMP=0x0000000000f7dfe0
- (struct CGSize)pillSize;	// IMP=0x0000000000f7dfca
- (double)leadingItemSpacing;	// IMP=0x0000000000f7df92
- (double)itemSpacing;	// IMP=0x0000000000f7df84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
