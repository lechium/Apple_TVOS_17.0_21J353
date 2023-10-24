//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVSMMainViewController;

@interface TVSMHostViewController : UIViewController
{
    TVSMMainViewController *_mainViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x002000000002b5c0
+ (id)_exportedInterface;	// IMP=0x001000000002b450
- (void).cxx_destruct;	// IMP=0x002000000002b650
@property(readonly, nonatomic) TVSMMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b0c0
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002af70
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x001000000002a700
- (void)systemMenuManagerRequestedDismissal:(id)arg1 animated:(_Bool)arg2 result:(id)arg3;	// IMP=0x001000000002a350
- (void)donateControlCenterOpenedEvent;	// IMP=0x001000000002a230
- (id)preferredFocusEnvironments;	// IMP=0x001000000002a140
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000029cc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

