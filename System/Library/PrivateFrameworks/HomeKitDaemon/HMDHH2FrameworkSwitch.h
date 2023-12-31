//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudDatabase, HMDHomeManager, NAFuture, NSObject, NSString;
@protocol HMDHH2FrameworkSwitchDataSource, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDHH2FrameworkSwitch : HMFObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    _Bool _autoFrameworkSwitch;	// 16 = 0x10
    _Bool _isTapToSetupOngoing;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NAFuture *_fetchSentinelZoneDidFinishFuture;	// 32 = 0x20
    HMBCloudDatabase *_cloudDatabaseToDetectHH2Zone;	// 40 = 0x28
    CDUnknownBlockType _blockToBeCalledBeforeSwitchingFramework;	// 48 = 0x30
    HMDHomeManager *_homeManager;	// 56 = 0x38
    id <HMDHH2FrameworkSwitchDataSource> _dataSource;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000008a68fb
+ (id)errorFromHMDCKAccountStatus:(long long)arg1;	// IMP=0x00100000008a68b5
+ (void)switchToHH2AndRelaunchHomed;	// IMP=0x00100000008a67cf
+ (void)switchBackToHH1AndRelaunch;	// IMP=0x00100000008a678b
+ (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;	// IMP=0x00100000008a66b2
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;	// IMP=0x00100000008a65bc
+ (void)relaunchHomedAfterSettingEnvironmentTo:(_Bool)arg1 blockToExecuteBeforeReLaunch:(CDUnknownBlockType)arg2;	// IMP=0x00100000008a6296
+ (void)setHH2SettingsMigrationKey:(_Bool)arg1;	// IMP=0x00100000008a6163
+ (void)setHH2EnablementPreferenceKey:(_Bool)arg1;	// IMP=0x00100000008a6036
- (void).cxx_destruct;	// IMP=0x00000000008a4c8c
@property(retain, nonatomic) id <HMDHH2FrameworkSwitchDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(copy, nonatomic) CDUnknownBlockType blockToBeCalledBeforeSwitchingFramework; // @synthesize blockToBeCalledBeforeSwitchingFramework=_blockToBeCalledBeforeSwitchingFramework;
@property(retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone; // @synthesize cloudDatabaseToDetectHH2Zone=_cloudDatabaseToDetectHH2Zone;
@property(nonatomic) _Bool isTapToSetupOngoing; // @synthesize isTapToSetupOngoing=_isTapToSetupOngoing;
@property(nonatomic) _Bool autoFrameworkSwitch; // @synthesize autoFrameworkSwitch=_autoFrameworkSwitch;
@property(readonly, nonatomic) NAFuture *fetchSentinelZoneDidFinishFuture; // @synthesize fetchSentinelZoneDidFinishFuture=_fetchSentinelZoneDidFinishFuture;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)handleTapToSetupFinished:(id)arg1;	// IMP=0x00000000008a4ac5
- (void)waitForCloudKitAccountToBeAvailable;	// IMP=0x00000000008a4a54
- (long long)areCloudKitServersReachableWithError:(id *)arg1;	// IMP=0x00000000008a40dc
- (_Bool)switchToSetupMode:(unsigned long long)arg1;	// IMP=0x00000000008a3e7c
- (void)switchToHH2AfterPerformingHH2PreRebootTask;	// IMP=0x00000000008a3e20
- (void)switchToHH2AndRelaunchHomedToPerformHH2Migration;	// IMP=0x00000000008a3d49
- (void)_clearSetupModeIfNeeded;	// IMP=0x00000000008a3b8c
- (void)removeHH2SentinelZoneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000008a36ee
- (void)waitForHH2SentinelZoneToBeRemoved;	// IMP=0x00000000008a3647
- (_Bool)_areWeRunningInRightEnvironment:(_Bool)arg1;	// IMP=0x00000000008a3385
- (void)_makeSureWeAreRunningInRightEnvironment:(_Bool)arg1;	// IMP=0x00000000008a3056
- (void)makeSureWeAreRunningInRightEnvironment:(_Bool)arg1;	// IMP=0x00000000008a2fdc
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;	// IMP=0x00000000008a2e4a
- (_Bool)checkExistenceOfHH2SentinelZone;	// IMP=0x00000000008a2c39
- (_Bool)waitForHH2SentinelZoneToBeCreated:(double)arg1;	// IMP=0x00000000008a284e
- (void)createHH2SentinelZoneWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008a2529
- (void)performInitialSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000008a2256
- (_Bool)waitForHH2SentinelZoneToBeFetchedFromCloud;	// IMP=0x00000000008a2006
- (void)forceFetchSentinelZone;	// IMP=0x00000000008a1dca
- (void)performInitialSyncAndSwitchFrameworkIfRequired;	// IMP=0x00000000008a1d7e
- (void)createHH2CloudDatabaseAndStartSyncing;	// IMP=0x00000000008a1af7
- (id)initWithAutoSwitch:(_Bool)arg1 callBeforeFrameworkSwitch:(CDUnknownBlockType)arg2 homeManager:(id)arg3 dataSource:(id)arg4;	// IMP=0x00000000008a18c8
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000008a18ac
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)arg1;	// IMP=0x00000000008a1890
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)arg1 callBeforeFrameworkSwitchCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008a1873
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)arg1 dataSource:(id)arg2 callBeforeFrameworkSwitchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000008a1850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

