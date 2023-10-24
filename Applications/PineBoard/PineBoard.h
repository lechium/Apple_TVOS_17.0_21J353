//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISystemShellApplication.h>

@class NSObject, NSString, NSTimer, PBAppInfoController, PBBulletinService, PBDiagnosticsController, PBDistributedAssertion, PBHeadphoneBannerManager, PBKeyCommandRegistry, PBKeyboardPlayPauseAccessManager, PBNetworkingController, PBProfileServiceDelegate, PBSBulletin, PBScheduledSleepManager, PBSystemStatusPublisher, PBWorkspace;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface PineBoard : UISystemShellApplication
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    PBSBulletin *_networkBulletin;	// 16 = 0x10
    PBKeyboardPlayPauseAccessManager *_keyboardPlayPauseAccessManager;	// 24 = 0x18
    _Bool _needsAdjustToDisplayChange;	// 32 = 0x20
    _Bool _inhibitForThermal;	// 33 = 0x21
    _Bool _inhibitForOSUpdate;	// 34 = 0x22
    _Bool _processingSysdiagnoseViaChord;	// 35 = 0x23
    _Bool _userInterfaceLayoutDirectionIsValid;	// 36 = 0x24
    long long _userInterfaceLayoutDirection;	// 40 = 0x28
    PBScheduledSleepManager *_sharedScheduledSleepManager;	// 48 = 0x30
    PBHeadphoneBannerManager *_sharedHeadphoneBannerManager;	// 56 = 0x38
    _Bool _airPlayActive;	// 64 = 0x40
    PBWorkspace *_mainWorkspace;	// 72 = 0x48
    PBKeyCommandRegistry *_keyCommandRegistry;	// 80 = 0x50
    id <BSInvalidatable> _sleepingHotBlackAssertion;	// 88 = 0x58
    NSTimer *_suppressWakeForHIDEventsTimer;	// 96 = 0x60
    PBAppInfoController *_appInfoController;	// 104 = 0x68
    PBProfileServiceDelegate *_profileServiceDelegate;	// 112 = 0x70
    PBDiagnosticsController *_diagnosticsController;	// 120 = 0x78
    PBNetworkingController *_networkingController;	// 128 = 0x80
    PBSystemStatusPublisher *_systemStatusPublisher;	// 136 = 0x88
    PBDistributedAssertion *_suppressVPNBulletinAssertion;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_vpnBannerQueue;	// 152 = 0x98
}

+ (id)sharedApplicationController;	// IMP=0x002000000002cb3a
+ (id)sharedAppInfoStore;	// IMP=0x001000000002ca26
+ (id)sharedApplicationLibrary;	// IMP=0x001000000002c94f
+ (id)sharedApplication;	// IMP=0x001000000002b8c9
- (void).cxx_destruct;	// IMP=0x00100000000320c2
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *vpnBannerQueue; // @synthesize vpnBannerQueue=_vpnBannerQueue;
@property(readonly, nonatomic) PBDistributedAssertion *suppressVPNBulletinAssertion; // @synthesize suppressVPNBulletinAssertion=_suppressVPNBulletinAssertion;
@property(readonly, nonatomic) PBSystemStatusPublisher *systemStatusPublisher; // @synthesize systemStatusPublisher=_systemStatusPublisher;
@property(readonly, nonatomic) PBNetworkingController *networkingController; // @synthesize networkingController=_networkingController;
@property(readonly, nonatomic) PBDiagnosticsController *diagnosticsController; // @synthesize diagnosticsController=_diagnosticsController;
@property(retain, nonatomic) PBProfileServiceDelegate *profileServiceDelegate; // @synthesize profileServiceDelegate=_profileServiceDelegate;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(retain, nonatomic) NSTimer *suppressWakeForHIDEventsTimer; // @synthesize suppressWakeForHIDEventsTimer=_suppressWakeForHIDEventsTimer;
@property(readonly, nonatomic) id <BSInvalidatable> sleepingHotBlackAssertion; // @synthesize sleepingHotBlackAssertion=_sleepingHotBlackAssertion;
@property(readonly, nonatomic) PBKeyCommandRegistry *keyCommandRegistry; // @synthesize keyCommandRegistry=_keyCommandRegistry;
@property(nonatomic) _Bool airPlayActive; // @synthesize airPlayActive=_airPlayActive;
@property(readonly, nonatomic) PBWorkspace *mainWorkspace; // @synthesize mainWorkspace=_mainWorkspace;
- (void)activateAppSwitcher;	// IMP=0x0010000000031f74
- (id)appSwitcherWindow;	// IMP=0x0010000000031ed8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000031d48
- (void)networkingController:(id)arg1 didChangeVPNStatus:(_Bool)arg2 currentConfigurationName:(id)arg3;	// IMP=0x0010000000031c80
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0010000000031c0e
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00100000000312c1
- (void)sceneManager:(id)arg1 didChangeCurrentApplicationFromSceneHandle:(id)arg2 toSceneHandle:(id)arg3;	// IMP=0x00100000000312ab
- (void)_vpnBannerQueue_postVPNBannerForConfiguration:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x0010000000031027
- (void)_enhanceLogging:(unsigned int)arg1;	// IMP=0x0010000000030940
- (void)_checkForQuestionableBootArgs;	// IMP=0x00100000000307c6
- (void)_startUpAndRunningTimer;	// IMP=0x0010000000030788
- (id)_sanitizeAppIdentifierHistory:(id)arg1;	// IMP=0x0010000000030557
- (void)_activateScreenSaverFromUserAction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030496
- (void)_saveRecentApplicationBundleIdentifiers;	// IMP=0x0010000000030402
- (void)_startExternalControlManagement;	// IMP=0x0010000000030256
- (void)userActivityTriggeredForReason:(id)arg1;	// IMP=0x00100000000301ed
- (void)deactivateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x00100000000300a5
- (void)activateScreenSaverRequestedByClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ffd4
- (void)activateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x001000000002ffbf
- (void)noteUserPresenceDetected;	// IMP=0x001000000002ff07
- (void)rebootRequestedByClient:(id)arg1;	// IMP=0x001000000002fe1c
- (void)relaunchRequestedByClient:(id)arg1;	// IMP=0x001000000002fd42
- (void)wakeRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x001000000002f9cc
- (void)sleepRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x001000000002f52e
- (void);	// IMP=0x001000000002f44f
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f322
- (void)powerManagerDidSleepSystem:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000002f2a8
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ef5b
- (void)_bluetoothRemotePowerSourceLimitedSourceNotification:(id)arg1;	// IMP=0x001000000002eeb3
- (void)_blackScreenRecoveryModeNotification:(id)arg1;	// IMP=0x001000000002e97f
- (void)_internetAvailabilityDidChangeNotification;	// IMP=0x001000000002e738
- (void)_handleRecentApplicationBundleIdentifiersDidChange:(id)arg1;	// IMP=0x001000000002e6a8
- (void)_handleCurrentApplicationDidChange:(id)arg1;	// IMP=0x001000000002e575
- (void)resetIdleTimerAndUndim;	// IMP=0x001000000002e554
- (void)languageDidChange;	// IMP=0x001000000002e504
- (_Bool)_isButtonDownEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000002e4e3
@property(readonly, copy, nonatomic) NSString *kioskAppBundleIdentifier;
- (_Bool)activityInhibited;	// IMP=0x001000000002e43d
- (void)resumeActivityAfterOSUpdate;	// IMP=0x001000000002e419
- (void)stopAllActivityForOSUpdate;	// IMP=0x001000000002e3f5
- (void)resumeActivityAfterThermal;	// IMP=0x001000000002e3d1
- (void)stopAllActivityForThermal;	// IMP=0x001000000002e3ad
- (void)_resumeAllActivityCommon:(const char *)arg1 flag:(_Bool *)arg2;	// IMP=0x001000000002e268
- (void)_stopAllActivityCommon:(const char *)arg1 flag:(_Bool *)arg2;	// IMP=0x001000000002e10c
- (void)sendEvent:(id)arg1;	// IMP=0x001000000002e075
- (void)_logButtonEventTiming:(id)arg1;	// IMP=0x001000000002db84
- (_Bool)_prepareButtonEvent:(id)arg1 withPressInfo:(id)arg2;	// IMP=0x001000000002d79c
- (_Bool)_shouldTriggerExternalControlActionForEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000002d6d4
- (void)_handleAsleepARCVolumeEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000002d4d4
- (_Bool)_handlePressesEvent:(id)arg1;	// IMP=0x001000000002d39b
- (void)_processChordsWithPressesEvent:(id)arg1;	// IMP=0x001000000002ce1f
- (void)responderHandleKeyCommand:(id)arg1;	// IMP=0x001000000002ce01
- (id)keyCommands;	// IMP=0x001000000002cd41
- (id)_windowForSystemAppButtonEventsForScreen:(id)arg1;	// IMP=0x001000000002cce9
- (void)resignActive;	// IMP=0x001000000002cce3
- (_Bool)_accessibilityIsSystemAppServer;	// IMP=0x001000000002ccc8
- (long long)userInterfaceLayoutDirection;	// IMP=0x001000000002cc04
@property(readonly, nonatomic) PBHeadphoneBannerManager *sharedHeadphoneBannerManager;
@property(readonly, nonatomic) PBScheduledSleepManager *sharedScheduledSleepManager;
- (id)bulletinService;	// IMP=0x001000000002c7c4
- (void)dealloc;	// IMP=0x001000000002c673
- (void)_hideSysdiagnoseIndication;	// IMP=0x001000000002c64a
- (void)_showSysdiagnoseIndication;	// IMP=0x001000000002c62c
- (void)finishSystemAppLaunch;	// IMP=0x001000000002be66
- (_Bool)disablesFrontBoardImplicitWindowScenes;	// IMP=0x001000000002be5e
- (id)init;	// IMP=0x001000000002b908
- (void)failedTest:(id)arg1;	// IMP=0x00100000001352c8
- (void)failedTest:(id)arg1 withFailure:(id)arg2;	// IMP=0x0010000000135287
- (void)_dismissAssistant;	// IMP=0x0010000000135242
- (void)_runSiriBringUpTest:(id)arg1 testOptions:(id)arg2;	// IMP=0x00100000001350d6
- (void)_startResumeTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x0010000000135056
- (void)_startLaunchTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x0010000000134c29
- (void)_retryLaunchTestWithOptions:(id)arg1;	// IMP=0x0010000000134b0a
- (void)_activateApplication:(id)arg1 suspended:(_Bool)arg2 forTest:(id)arg3;	// IMP=0x0010000000134a08
- (void)_markUserLaunchInitiationTimeForTest:(id)arg1;	// IMP=0x0010000000134a02
- (_Bool)_isAppExecutableRunning:(id)arg1;	// IMP=0x0010000000134965
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x001000000013479c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
