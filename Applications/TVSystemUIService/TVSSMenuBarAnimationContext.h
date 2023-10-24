//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVSPPillView, TVSSMenuItemPanelHostingViewController, TVSSMenuModeBannerContext, TVSSMenuModeState, TVSSPillContentViewProvider, UIView, UIViewController;
@protocol TVSSBannerPresentable;

@interface TVSSMenuBarAnimationContext : NSObject
{
    unsigned long long _menuMode;	// 8 = 0x8
    unsigned long long _previousMenuMode;	// 16 = 0x10
    TVSSMenuModeState *_menuModeState;	// 24 = 0x18
    TVSPPillView *_pillView;	// 32 = 0x20
    TVSSPillContentViewProvider *_pillContentViewProvider;	// 40 = 0x28
    TVSSMenuItemPanelHostingViewController *_panelHostingViewController;	// 48 = 0x30
    TVSSMenuModeBannerContext *_currentBannerContext;	// 56 = 0x38
    TVSSMenuModeBannerContext *_previousBannerContext;	// 64 = 0x40
    UIViewController<TVSSBannerPresentable> *_bannerViewController;	// 72 = 0x48
    UIViewController<TVSSBannerPresentable> *_previousBannerViewController;	// 80 = 0x50
    UIViewController *_bannerContainerViewController;	// 88 = 0x58
    UIView *_dimmingView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000006c530
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(readonly, nonatomic) UIViewController *bannerContainerViewController; // @synthesize bannerContainerViewController=_bannerContainerViewController;
@property(readonly, nonatomic) UIViewController<TVSSBannerPresentable> *previousBannerViewController; // @synthesize previousBannerViewController=_previousBannerViewController;
@property(readonly, nonatomic) UIViewController<TVSSBannerPresentable> *bannerViewController; // @synthesize bannerViewController=_bannerViewController;
@property(readonly, nonatomic) TVSSMenuModeBannerContext *previousBannerContext; // @synthesize previousBannerContext=_previousBannerContext;
@property(readonly, nonatomic) TVSSMenuModeBannerContext *currentBannerContext; // @synthesize currentBannerContext=_currentBannerContext;
@property(readonly, nonatomic) TVSSMenuItemPanelHostingViewController *panelHostingViewController; // @synthesize panelHostingViewController=_panelHostingViewController;
@property(readonly, nonatomic) TVSSPillContentViewProvider *pillContentViewProvider; // @synthesize pillContentViewProvider=_pillContentViewProvider;
@property(readonly, nonatomic) TVSPPillView *pillView; // @synthesize pillView=_pillView;
@property(readonly, nonatomic) TVSSMenuModeState *menuModeState; // @synthesize menuModeState=_menuModeState;
@property(readonly, nonatomic) unsigned long long previousMenuMode; // @synthesize previousMenuMode=_previousMenuMode;
@property(readonly, nonatomic) unsigned long long menuMode; // @synthesize menuMode=_menuMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000006c0e0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000006c040
- (id)succinctDescriptionBuilder;	// IMP=0x001000000006bf40
- (id)succinctDescription;	// IMP=0x001000000006bed0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006b810
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006b7f0
- (id)initWithMenuMode:(unsigned long long)arg1 previousMenuMode:(unsigned long long)arg2 menuModeState:(id)arg3 pillView:(id)arg4 pillContentViewProvider:(id)arg5 panelHostingViewController:(id)arg6 bannerContext:(id)arg7 previousBannerContext:(id)arg8 bannerViewController:(id)arg9 previousBannerViewController:(id)arg10 bannerContainerViewController:(id)arg11 dimmingView:(id)arg12;	// IMP=0x001000000006b4b0

// Remaining properties
@property(readonly) Class superclass;

@end
