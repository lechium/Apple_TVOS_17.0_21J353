//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFCameraItem, HMCameraProfile, NSArray, NSDictionary, NSString, TVHMCameraContentView, TVSBVideoBulletinAnimationContext, UIAlertController, UIWindow;

@interface TVSBVideoBulletinViewController
{
    NSDictionary *_messageDictionary;	// 8 = 0x8
    TVHMCameraContentView *_contentView;	// 16 = 0x10
    TVSBVideoBulletinAnimationContext *_animationContext;	// 24 = 0x18
    HMCameraProfile *_cameraProfile;	// 32 = 0x20
    NSArray *_allCameraItems;	// 40 = 0x28
    HFCameraItem *;	// 48 = 0x30
    NSArray *_cameraViewControlProviders;	// 56 = 0x38
    UIAlertController *_snoozeAlert;	// 64 = 0x40
    UIWindow *_window;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000000d7e0
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIAlertController *snoozeAlert; // @synthesize snoozeAlert=_snoozeAlert;
@property(copy, nonatomic) NSArray *cameraViewControlProviders; // @synthesize cameraViewControlProviders=_cameraViewControlProviders;
@property(retain, nonatomic) HFCameraItem *cameraItem; // @synthesize cameraItem=_cameraItem;
@property(retain, nonatomic) NSArray *allCameraItems; // @synthesize allCameraItems=_allCameraItems;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(retain, nonatomic) TVSBVideoBulletinAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property(retain, nonatomic) TVHMCameraContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSDictionary *messageDictionary; // @synthesize messageDictionary=_messageDictionary;
@property(readonly, nonatomic) TVHMCameraContentView *cameraContentView;
- (void)reloadControlProviders:(_Bool)arg1;	// IMP=0x001000000000d1f0
- (void)dismissPictureInPictureViewControllerFromFullScreen:(id)arg1;	// IMP=0x001000000000d190
- (void)restorePictureInPictureViewControllerToFullScreen:(id)arg1;	// IMP=0x001000000000cfe0
- (_Bool)shouldShowAccessoryControlsButton;	// IMP=0x001000000000cf60
- (void)accessoryControlsButtonWasClicked;	// IMP=0x001000000000cee0
- (_Bool)shouldShowPIPButton;	// IMP=0x001000000000cec0
- (void)pipButtonWasClicked;	// IMP=0x001000000000cda0
- (_Bool)shouldShowAllCamerasButton;	// IMP=0x001000000000cd60
- (void)allCamerasButtonWasClicked;	// IMP=0x001000000000cc80
- (_Bool)snoozeIsActive;	// IMP=0x001000000000cba0
- (_Bool)shouldShowSnoozeButton;	// IMP=0x001000000000cac0
- (void)snoozeButtonWasClicked;	// IMP=0x001000000000bd10
- (void)snoozeCameraUntil:(id)arg1;	// IMP=0x001000000000bc00
- (id)_pressTVForFullScreenAttributedString;	// IMP=0x001000000000b730
- (id)_videoBulletinView;	// IMP=0x001000000000b700
- (id)preferredFocusEnvironments;	// IMP=0x001000000000b610
- (void)configureCameraViewForBulletinView:(id)arg1;	// IMP=0x001000000000a650
- (void)_configureVideoBulletinView:(id)arg1 forBulletin:(id)arg2 forUpdate:(_Bool)arg3;	// IMP=0x0010000000008f10
- (void)updateBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x0010000000008e70
- (id)bulletinViewForBulletin:(id)arg1;	// IMP=0x0010000000008d40
- (void)hideBulletinViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008bb0
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008940
- (void)handleMenuButtonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008670
- (void)bulletinServiceEndUserInteractionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008180
- (void)bulletinServiceBeginUserInteraction;	// IMP=0x0010000000007bb0
- (void)willEnterPIP:(id)arg1;	// IMP=0x0010000000007a90
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000000079f0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000007950

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
