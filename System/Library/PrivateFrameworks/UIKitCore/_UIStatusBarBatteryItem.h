//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class _UIStatusBarBatteryView, _UIStatusBarImageView, _UIStatusBarStaticBatteryView, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBatteryItem : _UIStatusBarItem
{
    _Bool _highlighted;	// 8 = 0x8
    _Bool _usesCondensedPercentageDisplay;	// 9 = 0x9
    _UIStatusBarBatteryView *_batteryView;	// 16 = 0x10
    _UIStatusBarStaticBatteryView *_staticBatteryView;	// 24 = 0x18
    _UIStatusBarImageView *_chargingView;	// 32 = 0x20
    _UIStatusBarStringView *_percentView;	// 40 = 0x28
}

+ (id)percentDisplayIdentifier;	// IMP=0x0040000000efd1e0
+ (id)chargingDisplayIdentifier;	// IMP=0x0040000000efd1c7
+ (id)staticIconDisplayIdentifier;	// IMP=0x0040000000efd1ae
+ (id)iconDisplayIdentifier;	// IMP=0x0040000000efd195
- (void).cxx_destruct;	// IMP=0x0000000000efe118
@property(retain, nonatomic) _UIStatusBarStringView *percentView; // @synthesize percentView=_percentView;
@property(retain, nonatomic) _UIStatusBarImageView *chargingView; // @synthesize chargingView=_chargingView;
@property(retain, nonatomic) _UIStatusBarStaticBatteryView *staticBatteryView; // @synthesize staticBatteryView=_staticBatteryView;
@property(retain, nonatomic) _UIStatusBarBatteryView *batteryView; // @synthesize batteryView=_batteryView;
@property(nonatomic) _Bool usesCondensedPercentageDisplay; // @synthesize usesCondensedPercentageDisplay=_usesCondensedPercentageDisplay;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000efdf34
- (void)_create_percentView;	// IMP=0x0000000000efdeda
- (void)_create_chargingView;	// IMP=0x0000000000efddf5
- (void)_create_staticBatteryView;	// IMP=0x0000000000efdd33
- (void)_create_batteryView;	// IMP=0x0000000000efdc71
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000efd21c
- (id)dependentEntryKeys;	// IMP=0x0000000000efd1f9

@end

