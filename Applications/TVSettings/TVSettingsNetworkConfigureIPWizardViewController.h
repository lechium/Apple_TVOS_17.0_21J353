//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, TVSEthernetInterface, TVSettingsIPEntryViewController;

@interface TVSettingsNetworkConfigureIPWizardViewController : UIViewController
{
    NSString *_ipAddress;	// 8 = 0x8
    NSString *_subnetMask;	// 16 = 0x10
    NSString *_routerAddress;	// 24 = 0x18
    NSString *_primaryDNSAddress;	// 32 = 0x20
    TVSEthernetInterface *_interface;	// 40 = 0x28
    long long _currentState;	// 48 = 0x30
    TVSettingsIPEntryViewController *_currentViewController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000008454b
@property(retain, nonatomic) TVSettingsIPEntryViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) TVSEthernetInterface *interface; // @synthesize interface=_interface;
- (void)_transitionFrom:(id)arg1 to:(id)arg2;	// IMP=0x0010000000084181
- (id)_configureDNSAddressVC;	// IMP=0x00100000000840bb
- (id)_configureRouterAddressVC;	// IMP=0x0010000000083ff5
- (id)_configureSubnetMaskVC;	// IMP=0x0010000000083f2f
- (id)_configureIPAddressVC;	// IMP=0x0010000000083e69
- (id)_viewControllerForState:(long long)arg1;	// IMP=0x0010000000083e33
- (void)_setAutomaticConfigurationEnabled:(_Bool)arg1;	// IMP=0x0010000000083c3a
- (long long)_initialState;	// IMP=0x0010000000083c32
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0010000000083bf3
- (void)_menuPressed:(id)arg1;	// IMP=0x0010000000083b29
- (void)ipEntryViewControllerDidFinish:(id)arg1;	// IMP=0x00100000000839bb
- (id)preferredFocusEnvironments;	// IMP=0x001000000008399e
- (_Bool)becomeFirstResponder;	// IMP=0x0010000000083981
- (void)viewDidLoad;	// IMP=0x001000000008377f
- (id)initWithInterface:(id)arg1;	// IMP=0x00100000000835c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

