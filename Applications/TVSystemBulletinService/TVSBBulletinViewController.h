//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, PBSBulletin, PBSOverlayLayoutElementHandle, UIView;
@protocol PBSBulletinPresenterHost;

@interface TVSBBulletinViewController : UIViewController
{
    _Bool _offsetEnabled;	// 8 = 0x8
    id <PBSBulletinPresenterHost> _hostService;	// 16 = 0x10
    PBSBulletin *_bulletin;	// 24 = 0x18
    UIView *_bulletinView;	// 32 = 0x20
    PBSOverlayLayoutElementHandle *_layoutElementHandle;	// 40 = 0x28
    struct CGVector _offset;	// 48 = 0x30
}

+ (id)_transitionContextForPresenting:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x002000000001cf30
+ (id)_remoteViewControllerInterface;	// IMP=0x001000000001b120
+ (id)_exportedInterface;	// IMP=0x001000000001b100
+ (id)convertTextToAttributedStringIfNeeded:(id)arg1 imagePointSize:(double)arg2;	// IMP=0x001000000001a5b0
- (void).cxx_destruct;	// IMP=0x002000000001d200
@property(readonly, nonatomic) PBSOverlayLayoutElementHandle *layoutElementHandle; // @synthesize layoutElementHandle=_layoutElementHandle;
@property(nonatomic, getter=isOffsetEnabled) _Bool offsetEnabled; // @synthesize offsetEnabled=_offsetEnabled;
@property(nonatomic) struct CGVector offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIView *bulletinView; // @synthesize bulletinView=_bulletinView;
@property(retain, nonatomic) PBSBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(retain, nonatomic) id <PBSBulletinPresenterHost> hostService; // @synthesize hostService=_hostService;
- (void)hideBulletinViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c670
- (void)_showBulletinView:(_Bool)arg1;	// IMP=0x001000000001b930
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x001000000001b8d0
- (void)didEndAnimatingOutBulletinView:(id)arg1;	// IMP=0x001000000001b890
- (void)didBeginAnimatingOutBulletinView:(id)arg1;	// IMP=0x001000000001b780
- (void)didEndAnimatingInBulletinView:(id)arg1;	// IMP=0x001000000001b740
- (void)didBeginAnimatingInBulletinView:(id)arg1;	// IMP=0x001000000001b700
- (void)updateBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x001000000001b690
- (id)bulletinViewForBulletin:(id)arg1;	// IMP=0x001000000001b630
- (void)prepareWithBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b5b0
- (void)handleMenuButtonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b560
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b500
- (void)bulletinServiceUpdateWithBulletin:(id)arg1;	// IMP=0x001000000001b450
- (void)bulletinServiceBeginPresentationWithBulletin:(id)arg1;	// IMP=0x001000000001b140
- (struct CGAffineTransform)adjustedTransformForContentView:(struct CGAffineTransform)arg1;	// IMP=0x001000000001b070
- (void)_deactivateOffsetTransform;	// IMP=0x001000000001af10
- (void)_activateOffsetTransform;	// IMP=0x001000000001ade0
- (struct CGAffineTransform)_offsetTransform;	// IMP=0x001000000001ad90
@property(readonly, nonatomic) UIView *bulletinContentView;
- (void)dealloc;	// IMP=0x001000000001a340
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000019f50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

