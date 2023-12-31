//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPPairingIdentity, HMDBackgroundOperationGraph, HMDHomeManager, HMFTimer, NSMutableArray, NSOperationQueue, NSString;
@protocol HMDBackgroundOperationManagerCurrentDeviceStateDataSource;

__attribute__((visibility("hidden")))
@interface HMDBackgroundOperationManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMFTimer *_expirationTimer;	// 16 = 0x10
    HMFTimer *_deferralTimer;	// 24 = 0x18
    HMFTimer *_dataSourceCoalescingTimer;	// 32 = 0x20
    id <HMDBackgroundOperationManagerCurrentDeviceStateDataSource> _currentDeviceStateDataSource;	// 40 = 0x28
    HMDHomeManager *_homeManager;	// 48 = 0x30
    NSMutableArray *_operationList;	// 56 = 0x38
    NSMutableArray *_dataSourceList;	// 64 = 0x40
    NSString *_backgroundOperationsDataStorePath;	// 72 = 0x48
    HMDBackgroundOperationGraph *_opGraph;	// 80 = 0x50
    HAPPairingIdentity *_hh1Key;	// 88 = 0x58
    HAPPairingIdentity *_hh2Key;	// 96 = 0x60
    NSOperationQueue *_queue;	// 104 = 0x68
}

+ (id)findHomeUsingIdentifier:(id)arg1 homeManager:(id)arg2;	// IMP=0x00100000006e04bf
+ (id)findAccessoryUsing:(id)arg1 fromHome:(id)arg2;	// IMP=0x00100000006e03ef
+ (id)findAccessoryUsing:(id)arg1 homeManager:(id)arg2;	// IMP=0x00100000006e0319
+ (id)findHomeWhereThisDeviceIsConfirmedPrimaryResident:(id)arg1;	// IMP=0x00100000006e02bf
+ (id)getAllReachableAccessories:(id)arg1;	// IMP=0x00100000006e01d6
+ (id)getAllPairedAccessoriesOfAllHomes:(id)arg1;	// IMP=0x00100000006e01c1
+ (id)logCategory;	// IMP=0x00100000006e0191
+ (id)allowedClasses;	// IMP=0x00100000006e0076
+ (id)sharedManager;	// IMP=0x00100000006e0046
- (void).cxx_destruct;	// IMP=0x00000000006de61b
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HAPPairingIdentity *hh2Key; // @synthesize hh2Key=_hh2Key;
@property(retain, nonatomic) HAPPairingIdentity *hh1Key; // @synthesize hh1Key=_hh1Key;
@property(readonly, nonatomic) HMDBackgroundOperationGraph *opGraph; // @synthesize opGraph=_opGraph;
@property(retain, nonatomic) NSString *backgroundOperationsDataStorePath; // @synthesize backgroundOperationsDataStorePath=_backgroundOperationsDataStorePath;
@property(retain, nonatomic) NSMutableArray *dataSourceList; // @synthesize dataSourceList=_dataSourceList;
@property(retain, nonatomic) NSMutableArray *operationList; // @synthesize operationList=_operationList;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) id <HMDBackgroundOperationManagerCurrentDeviceStateDataSource> currentDeviceStateDataSource; // @synthesize currentDeviceStateDataSource=_currentDeviceStateDataSource;
- (void)handleResidentDeviceUpdated:(id)arg1;	// IMP=0x00000000006de43c
- (void)handleUserPrivilegeUpdated:(id)arg1;	// IMP=0x00000000006de379
- (id)dumpState;	// IMP=0x00000000006de282
- (void)__archiveToDiskForUnitTesting:(id)arg1;	// IMP=0x00000000006de275
- (id)__unarchiveFromDiskForUnitTesting;	// IMP=0x00000000006de263
- (id)__initForUnitTesting:(id)arg1;	// IMP=0x00000000006de1c2
- (void)__clearLocalStoreForUnitTesting;	// IMP=0x00000000006de08f
- (void)__resetAndRebuildOperationGraphForUnitTesting;	// IMP=0x00000000006de016
- (void)__removeAllOperationsForUnitTesting;	// IMP=0x00000000006ddfc1
- (void)__removeAllDataSourcesForUnitTesting;	// IMP=0x00000000006ddf6c
- (id)__getReadyToExecuteOperations;	// IMP=0x00000000006dddf6
- (void)removeOperationsForAccessoryIdentifier:(id)arg1 operationKind:(id)arg2;	// IMP=0x00000000006ddc3f
- (void)removeAllOperationForAccessoryIdentifier:(id)arg1;	// IMP=0x00000000006ddb78
- (void)removeAllOperationsBeforeStartingHH2Migration;	// IMP=0x00000000006dda03
- (id)unarchiveFromDisk;	// IMP=0x00000000006dd50f
- (void)evaluateOperations;	// IMP=0x00000000006dd4fb
- (void)completeProcessingForOperation:(id)arg1;	// IMP=0x00000000006dd260
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006dd11e
- (void)scheduleTimerToRetryDeferredOperations;	// IMP=0x00000000006dce5b
- (void)scheduleTimerToCheckAndRemoveExpiredOperation;	// IMP=0x00000000006dcb99
- (void)checkAndRemoveExpiredOperations;	// IMP=0x00000000006dca60
- (void)_runOperation:(id)arg1 withParameters:(id)arg2;	// IMP=0x00000000006dc913
- (void)_runOperationsAfterEvaluatingPredicate:(id)arg1;	// IMP=0x00000000006dc827
- (void)_dataSourceHasUpdate:(id)arg1;	// IMP=0x00000000006dc625
- (void)dataSourceHasUpdate:(id)arg1;	// IMP=0x00000000006dc5e8
- (void)addDefaultDataSources;	// IMP=0x00000000006dc587
- (void)addDataSource:(id)arg1;	// IMP=0x00000000006dc37a
- (void)removeOperation:(id)arg1;	// IMP=0x00000000006dc1a7
- (_Bool)addOperationDependency:(id)arg1 dependsOn:(id)arg2;	// IMP=0x00000000006dbbb5
- (void)addOperation:(id)arg1;	// IMP=0x00000000006db908
@property(readonly, nonatomic) HMFTimer *deferralTimer; // @synthesize deferralTimer=_deferralTimer;
@property(readonly, nonatomic) HMFTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(readonly, nonatomic) HMFTimer *dataSourceCoalescingTimer; // @synthesize dataSourceCoalescingTimer=_dataSourceCoalescingTimer;
- (id)initWithLocalStorePath:(id)arg1 currentDeviceStateDataSource:(id)arg2;	// IMP=0x00000000006db4da
- (void)removeAllKeyRollOperationsDueToPrimaryResidentChangeForHome:(id)arg1;	// IMP=0x000000000066a604
- (void)registerForNotifications;	// IMP=0x000000000066a5e0
- (_Bool)shouldWeScheduleKeyRollOperationsOnThisDevice;	// IMP=0x000000000066a51f
- (id)getHH2ControllerKey;	// IMP=0x000000000066a4c8
- (id)getHH1ControllerKey;	// IMP=0x000000000066a2fb
- (_Bool)scheduleHH2KeyRollForAirPlayAccessory:(id)arg1 previousIdentity:(id)arg2 newIdentity:(id)arg3;	// IMP=0x0000000000669bf6
- (_Bool)scheduleHH2KeyRollForAccessory:(id)arg1 previousIdentity:(id)arg2 newIdentity:(id)arg3;	// IMP=0x0000000000669230
- (void)auditOwnerPairingForAirPlayAccessory:(id)arg1 isRunningOnResident:(_Bool)arg2;	// IMP=0x0000000000668faa
- (void)auditKeyChainEntryForAccessory:(id)arg1 isRunningOnResident:(_Bool)arg2;	// IMP=0x0000000000668b18
- (void)auditKeyChainEntriesAndScheduleKeyRollOperationsIfNecessaryForHome:(id)arg1 isRunningOnResident:(_Bool)arg2;	// IMP=0x0000000000668a62
- (void)scheduleHH2KeyRollOperationForHome:(id)arg1 isRunningOnResident:(_Bool)arg2;	// IMP=0x00000000006687d0
- (void)makeSureToLoadPairingIdentities;	// IMP=0x00000000006684a1
- (void)startSchedulingKeyRollOperations:(_Bool)arg1 forAccessory:(id)arg2;	// IMP=0x00000000006682f6
- (void)scheduleHH2KeyRollIfNecessaryDueToNotification:(id)arg1;	// IMP=0x0000000000668278
- (void)_scheduleHH2KeyRollIfNecessary:(id)arg1;	// IMP=0x0000000000667ea3
- (void)_scheduleHH2AirPlayKeyRollIfNecessary:(id)arg1;	// IMP=0x0000000000667b9e
- (_Bool)_scheduleKeyRollForAccessory:(id)arg1;	// IMP=0x0000000000667b67
- (void)scheduleHH2KeyRollForAirPlayAccessory:(id)arg1;	// IMP=0x0000000000667b20
- (void)scheduleHH2KeyRollForAccessory:(id)arg1;	// IMP=0x0000000000667ad9
- (void)scheduleHH2KeyRollIfNecessary;	// IMP=0x0000000000667ac5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

