//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSFormatter, NSString, NSURL, TSKSettingItem;

@interface TVSettingsNetworkViewController : TSKViewController
{
    NSURL *_lastDeepLinkURL;	// 8 = 0x8
    TSKSettingItem *_wifiSignalStrengthItem;	// 16 = 0x10
    TSKSettingItem *_secureWiFiItem;	// 24 = 0x18
    TSKSettingItem *_pivotItem;	// 32 = 0x20
    NSFormatter *_emptyValueFormatter;	// 40 = 0x28
    NSFormatter *_dnsValueFormatter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000040428
@property(retain, nonatomic) NSFormatter *dnsValueFormatter; // @synthesize dnsValueFormatter=_dnsValueFormatter;
@property(retain, nonatomic) NSFormatter *emptyValueFormatter; // @synthesize emptyValueFormatter=_emptyValueFormatter;
@property(readonly, nonatomic) TSKSettingItem *pivotItem; // @synthesize pivotItem=_pivotItem;
@property(retain, nonatomic) TSKSettingItem *secureWiFiItem; // @synthesize secureWiFiItem=_secureWiFiItem;
@property(retain, nonatomic) TSKSettingItem *wifiSignalStrengthItem; // @synthesize wifiSignalStrengthItem=_wifiSignalStrengthItem;
@property(copy, nonatomic) NSURL *lastDeepLinkURL; // @synthesize lastDeepLinkURL=_lastDeepLinkURL;
- (void)_handleToggleHiddenRecognizer:(id)arg1;	// IMP=0x001000000004032c
- (void)_updateWiFiItem:(id)arg1 value:(id)arg2;	// IMP=0x001000000004017f
- (void)_updateEthernetItem:(id)arg1 value:(id)arg2;	// IMP=0x0010000000040033
- (void)networkUpdated:(id)arg1;	// IMP=0x001000000003fea8
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x001000000003fd03
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000003fb55
- (void)presentActionForDisplayedDeepLinkURL;	// IMP=0x001000000003fad1
- (void)loadView;	// IMP=0x001000000003fa21
- (id)loadSettingGroups;	// IMP=0x001000000003e05f
- (void)viewDidLoad;	// IMP=0x001000000003df98
- (void)dealloc;	// IMP=0x001000000003df23
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000003de3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

