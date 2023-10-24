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

+ (id)logCategory;	// IMP=0x001000000079ccec
+ (id)errorFromHMDCKAccountStatus:(long long)arg1;	// IMP=0x001000000079cca6
+ (void)switchToHH2AndRelaunchHomed;	// IMP=0x001000000079cbc0
+ (void)switchBackToHH1AndRelaunch;	// IMP=0x001000000079cb7c
+ (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;	// IMP=0x001000000079caa3
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;	// IMP=0x001000000079c9ad
+ (void)relaunchHomedAfterSettingEnvironmentTo:(_Bool)arg1 blockToExecuteBeforeReLaunch:(CDUnknownBlockType)arg2;	// IMP=0x001000000079c687
+ (void)setHH2SettingsMigrationKey:(_Bool)arg1;	// IMP=0x001000000079c554
+ (void)setHH2EnablementPreferenceKey:(_Bool)arg1;	// IMP=0x001000000079c427
- (void).cxx_destruct;	// IMP=0x000000000079b080
@property(retain, nonatomic) id <HMDHH2FrameworkSwitchDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(copy, nonatomic) CDUnknownBlockType blockToBeCalledBeforeSwitchingFramework; // @synthesize blockToBeCalledBeforeSwitchingFramework=_blockToBeCalledBeforeSwitchingFramework;
@property(retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone; // @synthesize cloudDatabaseToDetectHH2Zone=_cloudDatabaseToDetectHH2Zone;
@property(nonatomic) _Bool isTapToSetupOngoing; // @synthesize isTapToSetupOngoing=_isTapToSetupOngoing;
@property(nonatomic) _Bool autoFrameworkSwitch; // @synthesize autoFrameworkSwitch=_autoFrameworkSwitch;
@property(readonly, nonatomic) NAFuture *fetchSentinelZoneDidFinishFuture; // @synthesize fetchSentinelZoneDidFinishFuture=_fetchSentinelZoneDidFinishFuture;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)handleTapToSetupFinished:(id)arg1;	// IMP=0x000000000079aeb9
- (void)waitForCloudKitAccountToBeAvailable;	// IMP=0x000000000079ae48
- (long long)areCloudKitServersReachableWithError:(id *)arg1;	// IMP=0x000000000079a4cf
- (_Bool)switchToSetupMode:(unsigned long long)arg1;	// IMP=0x000000000079a26f
- (void)switchToHH2AfterPerformingHH2PreRebootTask;	// IMP=0x000000000079a213
- (void)switchToHH2AndRelaunchHomedToPerformHH2Migration;	// IMP=0x000000000079a13c
- (void)_clearSetupModeIfNeeded;	// IMP=0x0000000000799f7f
- (void)removeHH2SentinelZoneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000799ae1
- (void)waitForHH2SentinelZoneToBeRemoved;	// IMP=0x0000000000799a3a
- (_Bool)_areWeRunningInRightEnvironment:(_Bool)arg1;	// IMP=0x0000000000799778
- (void)_makeSureWeAreRunningInRightEnvironment:(_Bool)arg1;	// IMP=0x0000000000799449
- (void)makeSureWeAreRunningInRightEnvironment:(_Bool)arg1;	// IMP=0x00000000007993cf
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;	// IMP=0x000000000079923d
- (_Bool)checkExistenceOfHH2SentinelZone;	// IMP=0x000000000079902c
- (_Bool)waitForHH2SentinelZoneToBeCreated:(double)arg1;	// IMP=0x0000000000798c41
- (void)createHH2SentinelZoneWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000079891c
- (void)performInitialSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000798649
- (_Bool)waitForHH2SentinelZoneToBeFetchedFromCloud;	// IMP=0x00000000007983f9
- (void)forceFetchSentinelZone;	// IMP=0x00000000007981bd
- (void)performInitialSyncAndSwitchFrameworkIfRequired;	// IMP=0x0000000000798171
- (void)createHH2CloudDatabaseAndStartSyncing;	// IMP=0x0000000000797eea
- (id)initWithAutoSwitch:(_Bool)arg1 callBeforeFrameworkSwitch:(CDUnknownBlockType)arg2 homeManager:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000000797cbb
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000797c9f
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)arg1;	// IMP=0x0000000000797c83
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)arg1 callBeforeFrameworkSwitchCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000797c66
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)arg1 dataSource:(id)arg2 callBeforeFrameworkSwitchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000797c43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
