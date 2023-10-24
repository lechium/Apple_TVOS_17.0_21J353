//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSEthernetInterface;

@interface TVSettingsNetworkConfigurationViewController : TSKViewController
{
}

- (void)_updateDNSItem:(id)arg1 value:(id)arg2;	// IMP=0x00200000000e985b
- (void)_updateIPItem:(id)arg1 value:(id)arg2;	// IMP=0x00100000000e97b1
- (void)_configureInterfaceForDHCP:(id)arg1;	// IMP=0x00100000000e974b
- (id)_autoConfigureViewControllerWithTitle:(id)arg1 message:(id)arg2 interface:(id)arg3 dnsOnly:(_Bool)arg4;	// IMP=0x00100000000e9471
- (id)_configureItemFormatter;	// IMP=0x00100000000e93ed
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00100000000e91ae
@property(readonly, nonatomic) TVSEthernetInterface *interface;
- (id)loadSettingGroups;	// IMP=0x00100000000e84fa

@end
