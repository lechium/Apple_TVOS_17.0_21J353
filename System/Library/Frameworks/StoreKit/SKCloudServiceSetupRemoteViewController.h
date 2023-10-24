//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString;
@protocol SKCloudServiceSetupRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController
{
    id <SKCloudServiceSetupRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x0010000000021a30
+ (id)exportedInterface;	// IMP=0x0010000000021a17
- (void).cxx_destruct;	// IMP=0x0000000000021d4c
@property(nonatomic) __weak id <SKCloudServiceSetupRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentSafariViewControllerWithURL:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000021c91
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000021c1a
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021bb1
- (void)dismissSafariViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021b39
- (void)dismissCloudServiceSetupViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021ac1
- (void)didFinishLoadingWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000021a49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
