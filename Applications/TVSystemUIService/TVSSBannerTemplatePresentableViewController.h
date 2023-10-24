//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBScene, NSString, NSUUID, TVSPBannerConfiguration, TVSSBannerTemplate, UIView, UIViewController;
@protocol BNBannerSourceListenerPresentableDelegate, BNPresentable, BNPresentableContext, BNTemplateContentProvidingSpecifying, TVSPMarqueeable, TVSPPillContentContaining;

@interface TVSSBannerTemplatePresentableViewController
{
    UIView *_bannerContentView;	// 8 = 0x8
    UIView<TVSPPillContentContaining> *_pillContentView;	// 16 = 0x10
    TVSSBannerTemplate *_bannerTemplate;	// 24 = 0x18
    TVSPBannerConfiguration *_bannerConfiguration;	// 32 = 0x20
    id <BNTemplateContentProvidingSpecifying> _templateContentProvidingSpecification;	// 40 = 0x28
    id <TVSPMarqueeable> _marqueable;	// 48 = 0x30
    CDUnknownBlockType _timeoutDismissCompletionHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000fb000
@property(copy, nonatomic) CDUnknownBlockType timeoutDismissCompletionHandler; // @synthesize timeoutDismissCompletionHandler=_timeoutDismissCompletionHandler;
@property(readonly, nonatomic) id <TVSPMarqueeable> marqueable; // @synthesize marqueable=_marqueable;
@property(readonly, nonatomic) id <BNTemplateContentProvidingSpecifying> templateContentProvidingSpecification; // @synthesize templateContentProvidingSpecification=_templateContentProvidingSpecification;
@property(retain, nonatomic) TVSPBannerConfiguration *bannerConfiguration; // @synthesize bannerConfiguration=_bannerConfiguration;
@property(retain, nonatomic) TVSSBannerTemplate *bannerTemplate; // @synthesize bannerTemplate=_bannerTemplate;
- (void)marqueeableDidEndMarquee:(id)arg1;	// IMP=0x00100000000fa2a0
- (void)marqueeableDidChangeMarqueeState:(id)arg1;	// IMP=0x00100000000fa220
- (void)dismissDueTimeoutWhenReadyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fa150
- (_Bool)hasPrimaryAction;	// IMP=0x00100000000f9fa0
- (id)pillContentView;	// IMP=0x00100000000f9f50
- (id)bannerContentView;	// IMP=0x00100000000f9f00
@property(readonly, nonatomic, getter=isTemplateContent) _Bool templateContent;
- (void)viewDidLoad;	// IMP=0x00100000000f7c10
- (id)initWithSpecification:(id)arg1 serviceDomain:(id)arg2 readyCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f79d0

// Remaining properties
@property(readonly, nonatomic) int bannerAppearState;
@property(readonly, nonatomic, getter=isContentHosted) _Bool contentHosted;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <BNBannerSourceListenerPresentableDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <BNPresentable> presentable;
@property(readonly, nonatomic) long long presentableBehavior;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext;
@property(readonly, nonatomic) long long presentableType;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
@property(readonly, copy, nonatomic) NSString *requestIdentifier;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
@property(readonly, nonatomic) FBScene *scene;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property(readonly, copy, nonatomic) NSUUID *uniquePresentableIdentifier;
@property(readonly, nonatomic) UIViewController *viewController;

@end
