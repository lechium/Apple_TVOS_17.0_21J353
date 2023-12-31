//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeManager, HMFMessageDispatcher, HMFTimer, NSDate, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDCloudDataSyncStateFilter
{
    NSObject<OS_os_log> *_logger;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    _Bool _hh1FirstCloudSyncComplete;	// 36 = 0x24
    _Bool _decryptionFailed;	// 37 = 0x25
    _Bool _keychainSyncEnabled;	// 38 = 0x26
    _Bool _keychainSyncRequiredPopShown;	// 39 = 0x27
    _Bool _iCloudSwitchRequiredPopShown;	// 40 = 0x28
    _Bool _iCloudAccountActive;	// 41 = 0x29
    _Bool _cloudDataSyncCompleted;	// 42 = 0x2a
    _Bool _serverTokenAvailable;	// 43 = 0x2b
    _Bool _iCloudSwitchStateEnabled;	// 44 = 0x2c
    _Bool _localDataDecryptionFailed;	// 45 = 0x2d
    _Bool _networkConnectivityAvailable;	// 46 = 0x2e
    _Bool _resetConfigDisplayTimeHasElapsed;	// 47 = 0x2f
    _Bool _hasHH2MigrationAlreadyRequested;	// 48 = 0x30
    _Bool _keychainSyncPeerAvailable;	// 49 = 0x31
    _Bool _cloudDataSyncPeerAvailable;	// 50 = 0x32
    _Bool _homeManagerFirstFetchFinished;	// 51 = 0x33
    NSUUID *_uuid;	// 56 = 0x38
    HMFMessageDispatcher *_msgDispatcher;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_popupTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_iCloudSwitchPopupTimer;	// 80 = 0x50
    long long _totalHomes;	// 88 = 0x58
    HMFTimer *_cloudDataSyncInProgressTimer;	// 96 = 0x60
    double _remainingDataSyncPeriod;	// 104 = 0x68
    NSDate *_dataSyncTimerStartTimestamp;	// 112 = 0x70
    HMFTimer *_resetConfigDisplayTimer;	// 120 = 0x78
    double _remainingResetConfigDisplayPeriod;	// 128 = 0x80
    NSDate *_resetConfigDisplayTimerStartTimestamp;	// 136 = 0x88
    HMDHomeManager *_homeManager;	// 144 = 0x90
}

+ (_Bool)isAllowedMessage:(id)arg1;	// IMP=0x00100000005b6125
+ (id)logCategory;	// IMP=0x00100000005b60f5
- (void).cxx_destruct;	// IMP=0x00000000005b3ebe
@property(getter=isHomeManagerFirstFetchFinished) _Bool homeManagerFirstFetchFinished; // @synthesize homeManagerFirstFetchFinished=_homeManagerFirstFetchFinished;
@property(nonatomic, getter=isCloudDataSyncPeerAvailable) _Bool cloudDataSyncPeerAvailable; // @synthesize cloudDataSyncPeerAvailable=_cloudDataSyncPeerAvailable;
@property(nonatomic, getter=isKeychainSyncPeerAvailable) _Bool keychainSyncPeerAvailable; // @synthesize keychainSyncPeerAvailable=_keychainSyncPeerAvailable;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property _Bool hasHH2MigrationAlreadyRequested; // @synthesize hasHH2MigrationAlreadyRequested=_hasHH2MigrationAlreadyRequested;
@property(nonatomic) _Bool resetConfigDisplayTimeHasElapsed; // @synthesize resetConfigDisplayTimeHasElapsed=_resetConfigDisplayTimeHasElapsed;
@property(retain, nonatomic) NSDate *resetConfigDisplayTimerStartTimestamp; // @synthesize resetConfigDisplayTimerStartTimestamp=_resetConfigDisplayTimerStartTimestamp;
@property(nonatomic) double remainingResetConfigDisplayPeriod; // @synthesize remainingResetConfigDisplayPeriod=_remainingResetConfigDisplayPeriod;
@property(retain, nonatomic) HMFTimer *resetConfigDisplayTimer; // @synthesize resetConfigDisplayTimer=_resetConfigDisplayTimer;
@property(retain, nonatomic) NSDate *dataSyncTimerStartTimestamp; // @synthesize dataSyncTimerStartTimestamp=_dataSyncTimerStartTimestamp;
@property(nonatomic) double remainingDataSyncPeriod; // @synthesize remainingDataSyncPeriod=_remainingDataSyncPeriod;
@property(retain, nonatomic) HMFTimer *cloudDataSyncInProgressTimer; // @synthesize cloudDataSyncInProgressTimer=_cloudDataSyncInProgressTimer;
@property(nonatomic) _Bool networkConnectivityAvailable; // @synthesize networkConnectivityAvailable=_networkConnectivityAvailable;
@property(nonatomic) long long totalHomes; // @synthesize totalHomes=_totalHomes;
@property(nonatomic) _Bool localDataDecryptionFailed; // @synthesize localDataDecryptionFailed=_localDataDecryptionFailed;
@property(nonatomic) _Bool iCloudSwitchStateEnabled; // @synthesize iCloudSwitchStateEnabled=_iCloudSwitchStateEnabled;
@property(nonatomic) _Bool serverTokenAvailable; // @synthesize serverTokenAvailable=_serverTokenAvailable;
@property(nonatomic) _Bool cloudDataSyncCompleted; // @synthesize cloudDataSyncCompleted=_cloudDataSyncCompleted;
@property(nonatomic) _Bool iCloudAccountActive; // @synthesize iCloudAccountActive=_iCloudAccountActive;
@property(nonatomic) _Bool iCloudSwitchRequiredPopShown; // @synthesize iCloudSwitchRequiredPopShown=_iCloudSwitchRequiredPopShown;
@property(nonatomic) _Bool keychainSyncRequiredPopShown; // @synthesize keychainSyncRequiredPopShown=_keychainSyncRequiredPopShown;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *iCloudSwitchPopupTimer; // @synthesize iCloudSwitchPopupTimer=_iCloudSwitchPopupTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *popupTimer; // @synthesize popupTimer=_popupTimer;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) _Bool keychainSyncEnabled; // @synthesize keychainSyncEnabled=_keychainSyncEnabled;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (_Bool)shouldCloudSyncData;	// IMP=0x00000000005b3a4c
- (void)resetConfiguration;	// IMP=0x00000000005b39db
- (_Bool)isLocalDataDecryptionFailed;	// IMP=0x00000000005b3910
- (void)updateLocalDataDecryptionFailed:(_Bool)arg1;	// IMP=0x00000000005b3896
- (_Bool)isKeychainSyncSwitchEnabled;	// IMP=0x00000000005b37cb
- (_Bool)isiCloudSwitchEnabled;	// IMP=0x00000000005b3700
- (void)updateiCloudSwitchState:(_Bool)arg1;	// IMP=0x00000000005b3686
- (void)updateServerTokenAvailable:(_Bool)arg1;	// IMP=0x00000000005b360c
- (void)updateWithoutDataSynCheckServerTokenAvailable:(_Bool)arg1;	// IMP=0x00000000005b3592
- (void)_markHH1FirstCloudSyncComplete;	// IMP=0x00000000005b34fc
- (void)_updateCloudDataSyncState:(_Bool)arg1;	// IMP=0x00000000005b334f
- (void)updateCloudDataSyncState:(_Bool)arg1;	// IMP=0x00000000005b32d5
- (_Bool)_cloudSyncinProgressCheck:(id)arg1 supressPopup:(_Bool)arg2 sendCanceledError:(_Bool *)arg3 dataSyncState:(unsigned long long *)arg4;	// IMP=0x00000000005b2227
- (_Bool)dataSyncInProgressWithState:(unsigned long long *)arg1 withMessage:(id)arg2;	// IMP=0x00000000005b2114
- (_Bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;	// IMP=0x00000000005b1fe8
- (void)_updateCurrentAccount:(id)arg1;	// IMP=0x00000000005b1b10
- (void)updateCurrentAccount:(id)arg1;	// IMP=0x00000000005b1a58
- (void)updateTotalHomes:(long long)arg1;	// IMP=0x00000000005b19dc
- (void)_stopiCloudSwitchPopupTimer;	// IMP=0x00000000005b18aa
- (void)_startiCloudSwitchPopupTimer;	// IMP=0x00000000005b1665
- (void)_stopPopupTimer;	// IMP=0x00000000005b1533
- (void)_startPopupTimer;	// IMP=0x00000000005b12ee
- (void)_handleAccountStatusChanged:(id)arg1;	// IMP=0x00000000005b1121
- (void)_stallResetConfigDisplayTimer;	// IMP=0x00000000005b0d77
- (void)_clearResetConfigDisplayTimer;	// IMP=0x00000000005b0d35
- (void)_stopResetConfigDisplayTimer;	// IMP=0x00000000005b0c5d
- (void)_startResetConfigDisplayTimer;	// IMP=0x00000000005b0669
- (void)kickResetConfigDisplayTimer;	// IMP=0x00000000005b05f8
- (void)_stallCloudDataSyncTimer;	// IMP=0x00000000005b02b3
- (void)_resetCloudDataSyncTimer;	// IMP=0x00000000005b0271
- (void)_stopCloudDataSyncTimer;	// IMP=0x00000000005b01ac
- (void)_startCloudDataSyncTimer;	// IMP=0x00000000005afe6a
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005afdb2
- (void)updateNetworkConnectivity:(_Bool)arg1;	// IMP=0x00000000005afd38
- (void)_stopDataConfigResetTimers;	// IMP=0x00000000005afd0a
- (void)_startDataConfigResetTimers;	// IMP=0x00000000005afcc5
- (void)startDataConfigResetTimers;	// IMP=0x00000000005afc54
@property(nonatomic) _Bool decryptionFailed; // @synthesize decryptionFailed=_decryptionFailed;
- (void)_postNotificationForDataSyncInProgress:(_Bool)arg1 dataSyncState:(unsigned long long)arg2 forcePost:(_Bool)arg3;	// IMP=0x00000000005af96a
- (void)handleKeychainSyncStateChangedNotification:(id)arg1;	// IMP=0x00000000005af8f9
- (void)_updateKeychainSyncEnabled:(_Bool)arg1;	// IMP=0x00000000005af6cb
- (void)dealloc;	// IMP=0x00000000005af620
- (void)_registerForMessages;	// IMP=0x00000000005af54b
- (id)initWithName:(id)arg1 homeManager:(id)arg2 messageDispatcher:(id)arg3 serverTokenAvailable:(_Bool)arg4 homeDataHasBeenDecrypted:(_Bool)arg5 homeManagerServerTokenAvailable:(_Bool)arg6 localDataDecryptionFailed:(_Bool)arg7 totalHomes:(long long)arg8 currentAccount:(id)arg9;	// IMP=0x00000000005af20c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

