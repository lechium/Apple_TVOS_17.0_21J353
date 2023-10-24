//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, TVSSAnalyticsManager, TVSSAttentionMonitor, TVSSDoNotDisturbController, TVSSFaceTimeMenuModeStateContributor, TVSSMainViewController, TVSSMenuDataSourceControllerOverlord, TVSSMenuModeController, TVSSPrivacyController, TVSSPrivacyStatusMenuModeStateContributor, TVSSSceneDelegateMenuModeStateContributor, TVSSSensorActivityController, UIWindow;
@protocol BSInvalidatable;

@interface TVSSSceneDelegate : UIResponder
{
    int _token;	// 8 = 0x8
    id <BSInvalidatable> _focusHandle;	// 16 = 0x10
    TVSSMenuDataSourceControllerOverlord *_dataSourceControllerOverlord;	// 24 = 0x18
    TVSSMenuModeController *_menuModeController;	// 32 = 0x20
    TVSSPrivacyController *_privacyController;	// 40 = 0x28
    TVSSMainViewController *_mainViewController;	// 48 = 0x30
    TVSSSceneDelegateMenuModeStateContributor *_sceneDelegateMenuModeStateContributor;	// 56 = 0x38
    TVSSFaceTimeMenuModeStateContributor *_faceTimeMenuModeStateContributor;	// 64 = 0x40
    TVSSSensorActivityController *_sensorActivityController;	// 72 = 0x48
    TVSSPrivacyStatusMenuModeStateContributor *_privacyStatusMenuModeStateContributor;	// 80 = 0x50
    TVSSDoNotDisturbController *_doNotDisturbController;	// 88 = 0x58
    UIWindow *_window;	// 96 = 0x60
    TVSSAnalyticsManager *_analyticsManager;	// 104 = 0x68
    TVSSAttentionMonitor *_attentionMonitor;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000e85f0
@property(readonly, nonatomic) TVSSAttentionMonitor *attentionMonitor; // @synthesize attentionMonitor=_attentionMonitor;
@property(readonly, nonatomic) TVSSAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)_dismissUIIfNeeded;	// IMP=0x00100000000e8460
- (void)_updateWithCurrentServiceSystemState;	// IMP=0x00100000000e82b0
- (void)_unfocusSystemUIServiceIfNeeded;	// IMP=0x00100000000e8150
- (void)_bringFocusToSystemUIServiceForReason:(id)arg1;	// IMP=0x00100000000e7fe0
- (void)attentionMonitorDidRequestDismissal:(id)arg1;	// IMP=0x00100000000e7f10
- (void)doNotDisturbControllerDidUpdate:(id)arg1;	// IMP=0x00100000000e7e40
- (void)menuModeControllerModeDidChange:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x00100000000e7d80
- (void)bannerManagerRelinquishesFocus:(id)arg1;	// IMP=0x00100000000e7d30
- (void)bannerManagerRequestsFocus:(id)arg1;	// IMP=0x00100000000e7cd0
- (void)bannerManager:(id)arg1 relinquishesExternalGestures:(id)arg2;	// IMP=0x00100000000e7a60
- (void)bannerManager:(id)arg1 requestsExternalGestures:(id)arg2;	// IMP=0x00100000000e77f0
- (void)statusBarMonitor:(id)arg1 requestsVisibility:(_Bool)arg2 withTransitionContext:(id)arg3;	// IMP=0x00100000000e7750
- (void)windowScene:(id)arg1 didReceiveUpdatedSystemState:(id)arg2 previousState:(id)arg3 withAnimationSettings:(id)arg4;	// IMP=0x00100000000e7680
- (void)windowScene:(id)arg1 handleExternalGesture:(id)arg2;	// IMP=0x00100000000e75b0
- (void)windowScene:(id)arg1 didReceiveDismissMenuRequestWithOptions:(id)arg2;	// IMP=0x00100000000e74b0
- (void)windowScene:(id)arg1 didReceivePresentMenuRequestWithOptions:(id)arg2;	// IMP=0x00100000000e7360
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x00100000000e7320
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x00100000000e72e0
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x00100000000e72a0
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x00100000000e7260
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x00100000000e7220
- (void)_handleLogOverlord;	// IMP=0x00100000000e7100
- (void)dealloc;	// IMP=0x00100000000e7000
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000000e66c0
- (id)_uiServiceWindowScene;	// IMP=0x00100000000e6650
- (id)init;	// IMP=0x00100000000e5f90

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

