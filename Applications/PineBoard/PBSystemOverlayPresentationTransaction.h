//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PBSystemOverlayPresentationRequest, UIViewController;
@protocol PBSystemOverlayContentPresenting, PBSystemUIPresenting;

@interface PBSystemOverlayPresentationTransaction
{
    PBSystemOverlayPresentationRequest *_request;	// 8 = 0x8
    UIViewController<PBSystemOverlayContentPresenting> *_viewController;	// 16 = 0x10
    long long _layoutLevel;	// 24 = 0x18
    id <PBSystemUIPresenting> _presentationDelegate;	// 32 = 0x20
    id _interruptionContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000147a61
@property(readonly, nonatomic) id interruptionContext; // @synthesize interruptionContext=_interruptionContext;
@property(readonly, nonatomic) __weak id <PBSystemUIPresenting> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) UIViewController<PBSystemOverlayContentPresenting> *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) PBSystemOverlayPresentationRequest *request; // @synthesize request=_request;
- (void)_begin;	// IMP=0x0010000000147734
- (void)interruptWithContext:(id)arg1;	// IMP=0x00100000001476eb
- (_Bool)_canBeInterrupted;	// IMP=0x00100000001476cd
- (id)initWithRequest:(id)arg1 viewController:(id)arg2 layoutLevel:(long long)arg3 presentationDelegate:(id)arg4;	// IMP=0x00100000001475f2
- (id)init;	// IMP=0x00100000001475e4

@end
