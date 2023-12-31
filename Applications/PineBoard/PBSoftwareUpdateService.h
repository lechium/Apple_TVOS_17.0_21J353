//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, PBSystemOverlayController, PCSimpleTimer, TVSBackgroundTask, UIViewController;

@interface PBSoftwareUpdateService : NSObject
{
    _Bool _monitoringEnabled;	// 8 = 0x8
    _Bool _precheckingOSUpdateConditions;	// 9 = 0x9
    TVSBackgroundTask *_osSoftwareUpdateInitialCheckTask;	// 16 = 0x10
    TVSBackgroundTask *_osSoftwareUpdatePeriodicCheckTask;	// 24 = 0x18
    PCSimpleTimer *_darkWakeTimer;	// 32 = 0x20
    PCSimpleTimer *_updateDelayExpirationTimer;	// 40 = 0x28
    NSTimer *_vendorBagRefetchTimeoutTimer;	// 48 = 0x30
    PCSimpleTimer *_dailyReportingTimer;	// 56 = 0x38
    CDUnknownBlockType _osSoftwareUpdateCheckResponse;	// 64 = 0x40
    PBSystemOverlayController *_overlayController;	// 72 = 0x48
    UIViewController *_updateViewController;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x00200000001a8bbc
+ (id)dependencyDescription;	// IMP=0x00100000001a8a44
- (void).cxx_destruct;	// IMP=0x00200000001b5d23
@property(readonly, nonatomic) UIViewController *updateViewController; // @synthesize updateViewController=_updateViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(copy, nonatomic) CDUnknownBlockType osSoftwareUpdateCheckResponse; // @synthesize osSoftwareUpdateCheckResponse=_osSoftwareUpdateCheckResponse;
@property(retain, nonatomic) PCSimpleTimer *dailyReportingTimer; // @synthesize dailyReportingTimer=_dailyReportingTimer;
@property(nonatomic) __weak NSTimer *vendorBagRefetchTimeoutTimer; // @synthesize vendorBagRefetchTimeoutTimer=_vendorBagRefetchTimeoutTimer;
@property(retain, nonatomic) PCSimpleTimer *updateDelayExpirationTimer; // @synthesize updateDelayExpirationTimer=_updateDelayExpirationTimer;
@property(retain, nonatomic) PCSimpleTimer *darkWakeTimer; // @synthesize darkWakeTimer=_darkWakeTimer;
@property(retain, nonatomic) TVSBackgroundTask *osSoftwareUpdatePeriodicCheckTask; // @synthesize osSoftwareUpdatePeriodicCheckTask=_osSoftwareUpdatePeriodicCheckTask;
@property(retain, nonatomic) TVSBackgroundTask *osSoftwareUpdateInitialCheckTask; // @synthesize osSoftwareUpdateInitialCheckTask=_osSoftwareUpdateInitialCheckTask;
@property(nonatomic) _Bool precheckingOSUpdateConditions; // @synthesize precheckingOSUpdateConditions=_precheckingOSUpdateConditions;
@property(nonatomic) _Bool monitoringEnabled; // @synthesize monitoringEnabled=_monitoringEnabled;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)osUpdateProcessDidFinishApplyWithData:(id)arg1;	// IMP=0x00100000001b527c
- (void)osUpdateProcessDidUpdateApplyProgressWithData:(id)arg1;	// IMP=0x00100000001b4f66
- (void)osUpdateProcessDidStartApplyWithData:(id)arg1;	// IMP=0x00100000001b4c8c
- (void)osUpdateProcessDidStartRedownloadWithData:(id)arg1;	// IMP=0x00100000001b49b2
- (void)osUpdateProcessDidFinishDownloadWithData:(id)arg1;	// IMP=0x00100000001b4561
- (void)osUpdateProcessDidUpdateDownloadProgressWithData:(id)arg1;	// IMP=0x00100000001b4386
- (void)osUpdateProcessDidStartDownloadWithData:(id)arg1;	// IMP=0x00100000001b40dd
- (void)osUpdateProcessDidFinishCheckWithData:(id)arg1;	// IMP=0x00100000001b3638
- (void)osUpdateProcessDidStartCheckWithData:(id)arg1;	// IMP=0x00100000001b338f
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b3276
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b3226
- (_Bool)powerManagerAllowSystemToSleep:(id)arg1;	// IMP=0x00100000001b3211
- (void)_didFinishHOUCheckWithData:(id)arg1;	// IMP=0x00100000001b2ce3
- (void)_didFinishLegacyCheckWithData:(id)arg1;	// IMP=0x00100000001b2857
- (void)_dismiss;	// IMP=0x00100000001b26e2
- (void)_presentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b252f
- (void)_presentModalUpdateScreen;	// IMP=0x00100000001b23c4
- (void)_showOSUpdateUpToDateDialog:(_Bool)arg1;	// IMP=0x00100000001b21ec
- (void)_showOSUpdateError:(id)arg1 inDomain:(id)arg2 description:(id)arg3 underlyingError:(id)arg4;	// IMP=0x00100000001b1a9c
- (void)_promptForApplyConfirmationWithData:(id)arg1 thenDo:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b14c8
- (void)_showApplyConfirmationDialogIfNeededWithData:(id)arg1;	// IMP=0x00100000001b07d7
- (void)_showOSUpdateDownloadAndApplyConfirmationForUpdate:(id)arg1 largeUpdate:(_Bool)arg2 assetIsDownloaded:(_Bool)arg3;	// IMP=0x00100000001b039f
- (id)_versionForUpdate:(id)arg1;	// IMP=0x00100000001b026e
- (void)_handleManagedConfigurationSettingsChangedNotification:(id)arg1;	// IMP=0x00100000001b0252
- (void)_handleOSUpdatePrefsDidChange;	// IMP=0x00100000001afff7
- (void)_handlePineBoardPrefsDidChange;	// IMP=0x00100000001afcee
- (void)_currentDownload:(CDUnknownBlockType)arg1;	// IMP=0x00100000001af9c9
- (void)_startOSUpdateCheckForAction:(unsigned long long)arg1;	// IMP=0x00100000001af7eb
- (_Bool)_serverAllowsAutoApplyUpdates;	// IMP=0x00100000001aee25
- (void)_postVendorBagReloadContinueAutoApply;	// IMP=0x00100000001ae419
- (void)_reloadVendorBag;	// IMP=0x00100000001ae25e
- (void)_dailyOSUpdateReportingTimerFired:(id)arg1;	// IMP=0x00100000001adfc1
- (void)_scheduleDailyOSUpdateReporting;	// IMP=0x00100000001ad9c2
- (void)_osUpdateDelayedUpdateExpirationTimerFired:(id)arg1;	// IMP=0x00100000001ad792
- (void)_scheduleOSUpdateCheckForExpiredDelay;	// IMP=0x00100000001ad36a
- (void)_osUpdateDarkWakeTimerFired:(id)arg1;	// IMP=0x00100000001ace46
- (void)_scheduleOSUpdateDarkWakeAt:(id)arg1;	// IMP=0x00100000001acb57
- (void)_cancelOSUpdateDarkWakeTimer;	// IMP=0x00100000001acae2
- (void)_scheduleOSUpdateTimerForNextDarkWake;	// IMP=0x00100000001ac789
- (void)_scheduleOSUpdateOnSleepCheck;	// IMP=0x00100000001ac322
- (void)_scheduleOSUpdateCheck;	// IMP=0x00100000001ab8c5
- (_Bool)_shouldStopAfterDownloadAndBeforeApplyWithData:(id)arg1;	// IMP=0x00100000001ab60d
- (_Bool)_okToCheckForOSSoftwareUpdate;	// IMP=0x00100000001ab605
- (void)purgeAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ab5eb
- (void)purgeableAssetSpaceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ab55a
- (void)notePlaybackStateChanged;	// IMP=0x00100000001aafd3
- (void)cancelOSSoftwareUpdate;	// IMP=0x00100000001aafb4
- (void)installUpdate:(id)arg1 withOptions:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x00100000001aac2d
- (void)reallyPerformOSSoftwareRestore;	// IMP=0x00100000001aaac4
- (void)purgeDownload:(CDUnknownBlockType)arg1;	// IMP=0x00100000001aa79e
- (void)cancelDownload:(CDUnknownBlockType)arg1;	// IMP=0x00100000001aa59f
- (void)startDownload:(CDUnknownBlockType)arg1;	// IMP=0x00100000001aa19e
- (void)reallyPerformMDMOSSoftwareUpdateCheck;	// IMP=0x00100000001aa123
- (void)reallyPerformOSSoftwareUpdateCheck;	// IMP=0x00100000001aa0a8
- (void)checkForOSUpdatesWithOptions:(id)arg1 response:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a9c5f
- (void)isUpdate:(id)arg1 readyForInstallation:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a97a6
- (void)isOSSoftwareUpdateRunning:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a9756
- (void)setAssetDownloadIsDiscretionary:(_Bool)arg1;	// IMP=0x00100000001a973c
- (void)currentDownload:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a9722
- (void)isOSSoftwareUpdateChecking:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a96d2
- (void)startSoftwareUpdateMonitoring;	// IMP=0x00100000001a9202
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001a91b8
- (id)init;	// IMP=0x00100000001a8c13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

