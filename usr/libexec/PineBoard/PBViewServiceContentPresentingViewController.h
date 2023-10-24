//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, PBSimpleRemoteViewController;
@protocol PBSystemOverlayContentDelegate;

@interface PBViewServiceContentPresentingViewController : UIViewController
{
    _Bool _interruptible;	// 8 = 0x8
    _Bool _acceptsEventFocus;	// 9 = 0x9
    _Bool _allowsInteraction;	// 10 = 0xa
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    PBSimpleRemoteViewController *_remoteViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001376cd
@property(readonly, nonatomic) _Bool allowsInteraction; // @synthesize allowsInteraction=_allowsInteraction;
@property(readonly, nonatomic) PBSimpleRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible; // @synthesize interruptible=_interruptible;
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00100000001375c7
- (void)viewServiceDidDismiss:(id)arg1;	// IMP=0x00100000001374fe
- (void)viewService:(id)arg1 willDismissWithResult:(id)arg2;	// IMP=0x0010000000137492
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013732e
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000137231
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (void)viewDidLoad;	// IMP=0x00100000001370d8
- (id)initWithRemoteViewController:(id)arg1 supportsInterruption:(_Bool)arg2 allowsInteraction:(_Bool)arg3;	// IMP=0x001000000013701e
- (id)initWithRemoteViewController:(id)arg1 supportsInterruption:(_Bool)arg2;	// IMP=0x0010000000137005

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
