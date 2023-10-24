//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVNPGroupableRoutingController, TVSMAirPodsModuleMainViewController;
@protocol TVSMModuleOverlayContentViewControllerDelegate;

@interface TVSMAirPodsModuleOverlayViewController : UIViewController
{
    id <TVSMModuleOverlayContentViewControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_foregroundAppBundleID;	// 16 = 0x10
    TVSMAirPodsModuleMainViewController *_airpodsSettingsViewController;	// 24 = 0x18
    TVNPGroupableRoutingController *_routeController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002e030
@property(retain, nonatomic) TVNPGroupableRoutingController *routeController; // @synthesize routeController=_routeController;
@property(retain, nonatomic) TVSMAirPodsModuleMainViewController *airpodsSettingsViewController; // @synthesize airpodsSettingsViewController=_airpodsSettingsViewController;
@property(retain, nonatomic) NSString *foregroundAppBundleID; // @synthesize foregroundAppBundleID=_foregroundAppBundleID;
@property(nonatomic) __weak id <TVSMModuleOverlayContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x000000000002de80
- (id)preferredFocusEnvironments;	// IMP=0x000000000002de00
- (void)viewDidLoad;	// IMP=0x000000000002d9d0
- (id)initWithRouteController:(id)arg1;	// IMP=0x000000000002d850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
