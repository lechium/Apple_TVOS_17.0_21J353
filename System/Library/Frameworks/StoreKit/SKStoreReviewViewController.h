//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, SKInvocationQueueProxy, SKRemoteReviewViewController, _UIAsyncInvocation;
@protocol SKUIServiceReviewViewController;

__attribute__((visibility("hidden")))
@interface SKStoreReviewViewController : UIViewController
{
    SKInvocationQueueProxy<SKUIServiceReviewViewController> *_serviceProxy;	// 8 = 0x8
    _UIAsyncInvocation *_cancelRequest;	// 16 = 0x10
    SKRemoteReviewViewController *_remoteViewController;	// 24 = 0x18
    NSString *_reviewRequestToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001aade
@property(retain, nonatomic) NSString *reviewRequestToken; // @synthesize reviewRequestToken=_reviewRequestToken;
@property(retain, nonatomic) SKRemoteReviewViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) _UIAsyncInvocation *cancelRequest; // @synthesize cancelRequest=_cancelRequest;
@property(retain, nonatomic) SKInvocationQueueProxy<SKUIServiceReviewViewController> *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
- (void)_addRemoteView;	// IMP=0x000000000001a8e3
- (void)_requestRemoteViewController;	// IMP=0x000000000001a4be
- (void)remoteReviewViewControllerTerminatedWithError:(id)arg1;	// IMP=0x000000000001a4a8
- (void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000001a3a6
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001a30b
- (void)viewDidLoad;	// IMP=0x000000000001a25f
- (void)dealloc;	// IMP=0x000000000001a1c4
- (id)initWithReviewRequestToken:(id)arg1;	// IMP=0x000000000001a0dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

