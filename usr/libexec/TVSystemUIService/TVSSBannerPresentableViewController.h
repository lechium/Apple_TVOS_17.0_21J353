//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BannerKit/BNBannerSourceListenerPresentableViewController.h>

@class FBScene, NSDictionary, NSSet, NSString, NSUUID, UIView, UIViewController;
@protocol BNBannerSourceListenerPresentableDelegate, BNPresentable, BNPresentableContext, TVSPPillContentContaining;

@interface TVSSBannerPresentableViewController : BNBannerSourceListenerPresentableViewController
{
    NSDictionary *_presentableUserInfo;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000010ac80
@property(copy, nonatomic) NSDictionary *presentableUserInfo; // @synthesize presentableUserInfo=_presentableUserInfo;
@property(readonly, nonatomic) NSString *panelMessageImageSymbolName;
@property(readonly, nonatomic) NSString *panelMessage;
@property(readonly, nonatomic) NSString *menuBarShortTitle;
@property(readonly, nonatomic) NSString *targetProviderIdentifier;
@property(readonly, nonatomic) _Bool supportsDisplayingAsMenuItem;
@property(readonly, nonatomic) NSSet *primaryActionTriggeringGestures;
@property(readonly, nonatomic) _Bool hasPrimaryAction;
@property(readonly, nonatomic) UIView<TVSPPillContentContaining> *pillContentView;
@property(readonly, nonatomic) UIView *bannerContentView;
@property(readonly, nonatomic) _Bool isTVSSBannerPresentable;

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
