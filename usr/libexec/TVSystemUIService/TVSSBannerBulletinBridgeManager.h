//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSBulletin, TVHMBannerCameraPresentableViewController, TVSSBannerManager, UIScene, UIViewController;

@interface TVSSBannerBulletinBridgeManager : NSObject
{
    UIScene *_scene;	// 8 = 0x8
    UIViewController *_fullScreenCameraPresenterViewController;	// 16 = 0x10
    TVSSBannerManager *_bannerManager;	// 24 = 0x18
    PBSBulletin *_activeBulletin;	// 32 = 0x20
    TVHMBannerCameraPresentableViewController *_activePresentable;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000624b0
@property(retain, nonatomic) TVHMBannerCameraPresentableViewController *activePresentable; // @synthesize activePresentable=_activePresentable;
@property(retain, nonatomic) PBSBulletin *activeBulletin; // @synthesize activeBulletin=_activeBulletin;
@property(retain, nonatomic) TVSSBannerManager *bannerManager; // @synthesize bannerManager=_bannerManager;
@property(nonatomic) __weak UIViewController *fullScreenCameraPresenterViewController; // @synthesize fullScreenCameraPresenterViewController=_fullScreenCameraPresenterViewController;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (void)_sendObservingActionWithBulletin:(id)arg1 state:(long long)arg2 reason:(id)arg3;	// IMP=0x0010000000062000
- (void)_cleanup;	// IMP=0x0010000000061f80
- (_Bool)_isHomeUIVideoBulletin:(id)arg1;	// IMP=0x0010000000061ef0
- (void)_updatePresentable:(id)arg1 withBulletin:(id)arg2;	// IMP=0x0010000000061c50
- (_Bool)_isSupportedBulletin:(id)arg1;	// IMP=0x00100000000618f0
- (void)_handleSendBulletinAction:(id)arg1;	// IMP=0x0010000000060ba0
- (void)bannerCameraViewControllerDidDismissFullScreen:(id)arg1;	// IMP=0x0010000000060b40
- (void)bannerCameraViewControllerWillPresentFullScreen:(id)arg1;	// IMP=0x0010000000060ae0
- (id)fullScreenPresenterForBannerCameraViewController:(id)arg1;	// IMP=0x0010000000060a80
- (void)bannerCameraViewController:(id)arg1 needsRevocationWithReason:(id)arg2;	// IMP=0x0010000000060840
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000060670
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x00100000000604a0
- (void)presentableDidAppearAsBanner:(id)arg1;	// IMP=0x0010000000060320
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;	// IMP=0x001000000005ff20
- (id)_actionRespondersForScene:(id)arg1;	// IMP=0x001000000005fc40
- (id)initWithScene:(id)arg1;	// IMP=0x001000000005fa00
- (id)initWithBannerManager:(id)arg1 scene:(id)arg2;	// IMP=0x001000000005f450

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

