//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarCellularNetworkTypeView, _UIStatusBarDualCellularSignalView, _UIStatusBarEmergencySignalView, _UIStatusBarMultilineStringView, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularCondensedItem
{
    _Bool _reducesFontSize;	// 72 = 0x48
    _UIStatusBarDualCellularSignalView *_dualSignalView;	// 80 = 0x50
    _UIStatusBarMultilineStringView *_dualNameView;	// 88 = 0x58
    _UIStatusBarStringView *_dualSingleLineNameView;	// 96 = 0x60
    _UIStatusBarStringView *_dualSingleLineNameAndTypeView;	// 104 = 0x68
    _UIStatusBarEmergencySignalView *_sosSignalView;	// 112 = 0x70
    _UIStatusBarCellularNetworkTypeView *_animatedNetworkTypeView;	// 120 = 0x78
}

+ (id)animatedTypeDisplayIdentifier;	// IMP=0x0040000000f00921
+ (id)sosSignalStrengthDisplayIdentifier;	// IMP=0x0040000000f00908
+ (id)dualSingleLineNameAndTypeDisplayIdentifier;	// IMP=0x0040000000f008ef
+ (id)dualSingleLineNameDisplayIdentifier;	// IMP=0x0040000000f008d6
+ (id)dualNameDisplayIdentifier;	// IMP=0x0040000000f008bd
+ (id)dualSignalStrengthDisplayIdentifier;	// IMP=0x0040000000f008a4
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(_Bool)arg4;	// IMP=0x0040000000f317c7
- (void).cxx_destruct;	// IMP=0x0000000000f043d9
@property(retain, nonatomic) _UIStatusBarCellularNetworkTypeView *animatedNetworkTypeView; // @synthesize animatedNetworkTypeView=_animatedNetworkTypeView;
@property(retain, nonatomic) _UIStatusBarEmergencySignalView *sosSignalView; // @synthesize sosSignalView=_sosSignalView;
@property(retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameAndTypeView; // @synthesize dualSingleLineNameAndTypeView=_dualSingleLineNameAndTypeView;
@property(retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameView; // @synthesize dualSingleLineNameView=_dualSingleLineNameView;
@property(retain, nonatomic) _UIStatusBarMultilineStringView *dualNameView; // @synthesize dualNameView=_dualNameView;
@property(retain, nonatomic) _UIStatusBarDualCellularSignalView *dualSignalView; // @synthesize dualSignalView=_dualSignalView;
@property(nonatomic) _Bool reducesFontSize; // @synthesize reducesFontSize=_reducesFontSize;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000f0415d
- (void)_create_animatedNetworkTypeView;	// IMP=0x0000000000f04103
- (void)_create_sosSignalView;	// IMP=0x0000000000f0402b
- (void)_create_dualSingleLineNameAndTypeView;	// IMP=0x0000000000f03f3e
- (void)_create_dualSingleLineNameView;	// IMP=0x0000000000f03e51
- (void)_create_dualNameView;	// IMP=0x0000000000f03ca5
- (void)_create_dualSignalView;	// IMP=0x0000000000f03b98
- (id)entryForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000f03870
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;	// IMP=0x0000000000f0345e
- (_Bool)_animateServiceType:(long long)arg1 prefixLength:(long long *)arg2 currentType:(long long)arg3;	// IMP=0x0000000000f03426
- (_Bool)_showCallFowardingForEntry:(id)arg1;	// IMP=0x0000000000f03359
- (id)_singleCellularEntryMatching:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f031c5
- (struct _NSRange)_nonCondensedFontRangeForEntry:(id)arg1;	// IMP=0x0000000000f0318f
- (id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double *)arg3;	// IMP=0x0000000000f0308e
- (id)_stringForCellularType:(long long)arg1;	// IMP=0x0000000000f02f79
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000f02db2
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000f00af0
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x0000000000f009b8
- (id)dependentEntryKeys;	// IMP=0x0000000000f00986
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;	// IMP=0x0000000000f0093a

@end

