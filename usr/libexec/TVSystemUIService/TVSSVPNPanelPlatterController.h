//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPPlatterController.h>

@class NSDictionary, NSString, PBSSuppressVPNBulletinAssertion, TVSPLayout, TVSSVPNController;

@interface TVSSVPNPanelPlatterController : TVSPPlatterController
{
    TVSSVPNController *_vpnController;	// 8 = 0x8
    NSDictionary *_vpnConfigurationsByIdentifier;	// 16 = 0x10
    TVSPLayout *_currentLayout;	// 24 = 0x18
    PBSSuppressVPNBulletinAssertion *_suppressBulletinAssertion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000065ff0
@property(readonly, nonatomic) PBSSuppressVPNBulletinAssertion *suppressBulletinAssertion; // @synthesize suppressBulletinAssertion=_suppressBulletinAssertion;
@property(retain, nonatomic) TVSPLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(retain, nonatomic) NSDictionary *vpnConfigurationsByIdentifier; // @synthesize vpnConfigurationsByIdentifier=_vpnConfigurationsByIdentifier;
@property(readonly, nonatomic) TVSSVPNController *vpnController; // @synthesize vpnController=_vpnController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000065aa0
- (void)vpnController:(id)arg1 didUpdateConfigurations:(id)arg2;	// IMP=0x0010000000065150
- (void)rendererWasSelected:(id)arg1 context:(id)arg2;	// IMP=0x0010000000064f30
- (void)dealloc;	// IMP=0x0010000000064e80
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000000642d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

