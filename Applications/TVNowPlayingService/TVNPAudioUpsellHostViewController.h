//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVNPAudioUpsellMainViewController;

@interface TVNPAudioUpsellHostViewController : UIViewController
{
    TVNPAudioUpsellMainViewController *_mainViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x002000000002a5a0
+ (id)_exportedInterface;	// IMP=0x001000000002a420
- (void).cxx_destruct;	// IMP=0x002000000002a7b0
@property(retain, nonatomic) TVNPAudioUpsellMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (void)viewControllerDidRequestDismissal:(id)arg1 featureEnabled:(_Bool)arg2;	// IMP=0x001000000002a690
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a300
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x001000000002a170

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

