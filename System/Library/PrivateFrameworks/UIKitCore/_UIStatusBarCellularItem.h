//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class NSString, _UIStatusBarCellularSignalView, _UIStatusBarImageView, _UIStatusBarStringView;
@protocol _UIStatusBarCellularItemTypeStringProvider;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularItem : _UIStatusBarItem
{
    _Bool _showsDisabledSignalBars;	// 8 = 0x8
    _Bool _marqueeServiceName;	// 9 = 0x9
    id <_UIStatusBarCellularItemTypeStringProvider> _typeStringProvider;	// 16 = 0x10
    _UIStatusBarStringView *_serviceNameView;	// 24 = 0x18
    _UIStatusBarCellularSignalView *_signalView;	// 32 = 0x20
    _UIStatusBarStringView *_networkTypeView;	// 40 = 0x28
    _UIStatusBarImageView *_warningView;	// 48 = 0x30
    _UIStatusBarImageView *_callForwardingView;	// 56 = 0x38
    _UIStatusBarStringView *_rawStringView;	// 64 = 0x40
}

+ (id)rawDisplayIdentifier;	// IMP=0x0040000000efeefd
+ (id)callForwardingDisplayIdentifier;	// IMP=0x0040000000efeee4
+ (id)typeDisplayIdentifier;	// IMP=0x0040000000efeecb
+ (id)nameDisplayIdentifier;	// IMP=0x0040000000efeeb2
+ (id)warningDisplayIdentifier;	// IMP=0x0040000000efee99
+ (id)signalStrengthDisplayIdentifier;	// IMP=0x0040000000efee80
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(_Bool)arg4;	// IMP=0x0040000000f31312
- (void).cxx_destruct;	// IMP=0x0000000000f00820
@property(retain, nonatomic) _UIStatusBarStringView *rawStringView; // @synthesize rawStringView=_rawStringView;
@property(retain, nonatomic) _UIStatusBarImageView *callForwardingView; // @synthesize callForwardingView=_callForwardingView;
@property(retain, nonatomic) _UIStatusBarImageView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) _UIStatusBarStringView *networkTypeView; // @synthesize networkTypeView=_networkTypeView;
@property(retain, nonatomic) _UIStatusBarCellularSignalView *signalView; // @synthesize signalView=_signalView;
@property(retain, nonatomic) _UIStatusBarStringView *serviceNameView; // @synthesize serviceNameView=_serviceNameView;
@property(nonatomic) __weak id <_UIStatusBarCellularItemTypeStringProvider> typeStringProvider; // @synthesize typeStringProvider=_typeStringProvider;
@property(nonatomic) _Bool marqueeServiceName; // @synthesize marqueeServiceName=_marqueeServiceName;
@property(nonatomic) _Bool showsDisabledSignalBars; // @synthesize showsDisabledSignalBars=_showsDisabledSignalBars;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000f00557
- (void)setmarqueeServiceName:(_Bool)arg1;	// IMP=0x0000000000f004d5
- (void)_create_rawStringView;	// IMP=0x0000000000f0047b
- (void)_create_callForwardingView;	// IMP=0x0000000000f003ea
- (void)_create_warningView;	// IMP=0x0000000000f00359
- (void)_create_networkTypeView;	// IMP=0x0000000000f002a7
- (void)_create_serviceNameView;	// IMP=0x0000000000f00195
- (void)_create_signalView;	// IMP=0x0000000000f000e3
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;	// IMP=0x0000000000efff1d
- (_Bool)_showCallFowardingForEntry:(id)arg1;	// IMP=0x0000000000efff08
- (id)_stringForCellularType:(long long)arg1;	// IMP=0x0000000000effd95
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000eff4d7
- (id)entryForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000eff430
- (_Bool)_updateSignalView:(id)arg1 withUpdate:(id)arg2 entry:(id)arg3 forceShowingDisabledSignalBars:(_Bool)arg4;	// IMP=0x0000000000eff19c
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;	// IMP=0x0000000000eff0d2
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;	// IMP=0x0000000000efeff7
- (id)dependentEntryKeys;	// IMP=0x0000000000efef90
@property(readonly, nonatomic) NSString *cellularDataEntryKey;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;	// IMP=0x0000000000efef16

@end

