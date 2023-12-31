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
    _Bool _keychainSyncPeerAvailable;	// 48 = 0x30
    _Bool _cloudDataSyncPeerAvailable;	// 49 = 0x31
    _Bool _homeManagerFirstFetchFinished;	// 50 = 0x32
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

+ (_Bool)isAllowedMessage:(id)arg1;	// IMP=0x0010000000689104
+ (id)logCategory;	// IMP=0x00100000006890d4
- (void).cxx_destruct;	// IMP=0x0000000000686e9d
@property(getter=isHomeManagerFirstFetchFinished) _Bool homeManagerFirstFetchFinished; // @synthesize homeManagerFirstFetchFinished=_homeManagerFirstFetchFinished;
@property(nonatomic, getter=isCloudDataSyncPeerAvailable) _Bool cloudDataSyncPeerAvailable; // @synthesize cloudDataSyncPeerAvailable=_cloudDataSyncPeerAvailable;
@property(nonatomic, getter=isKeychainSyncPeerAvailable) _Bool keychainSyncPeerAvailable; // @synthesize keychainSyncPeerAvailable=_keychainSyncPeerAvailable;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
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
- (_Bool)shouldCloudSyncData;	// IMP=0x0000000000686a4d
- (void)resetConfiguration;	// IMP=0x00000000006869dc
- (_Bool)isLocalDataDecryptionFailed;	// IMP=0x0000000000686911
- (void)updateLocalDataDecryptionFailed:(_Bool)arg1;	// IMP=0x0000000000686897
- (_Bool)isKeychainSyncSwitchEnabled;	// IMP=0x00000000006867cc
- (_Bool)isiCloudSwitchEnabled;	// IMP=0x0000000000686701
- (void)updateiCloudSwitchState:(_Bool)arg1;	// IMP=0x0000000000686687
- (void)updateServerTokenAvailable:(_Bool)arg1;	// IMP=0x000000000068660d
- (void)updateWithoutDataSynCheckServerTokenAvailable:(_Bool)arg1;	// IMP=0x0000000000686593
- (void)_markHH1FirstCloudSyncComplete;	// IMP=0x00000000006864fd
- (void)_updateCloudDataSyncState:(_Bool)arg1;	// IMP=0x0000000000686350
- (void)updateCloudDataSyncState:(_Bool)arg1;	// IMP=0x00000000006862d6
- (_Bool)_cloudSyncinProgressCheck:(id)arg1 supressPopup:(_Bool)arg2 sendCanceledError:(_Bool *)arg3 dataSyncState:(unsigned long long *)arg4;	// IMP=0x00000000006854bb
- (_Bool)dataSyncInProgressWithState:(unsigned long long *)arg1 withMessage:(id)arg2;	// IMP=0x00000000006853a8
- (_Bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;	// IMP=0x000000000068527c
- (void)_updateCurrentAccount:(id)arg1;	// IMP=0x0000000000684da4
- (void)updateCurrentAccount:(id)arg1;	// IMP=0x0000000000684cec
- (void)updateTotalHomes:(long long)arg1;	// IMP=0x0000000000684c70
- (void)_stopiCloudSwitchPopupTimer;	// IMP=0x0000000000684b3e
- (void)_startiCloudSwitchPopupTimer;	// IMP=0x00000000006848f9
- (void)_stopPopupTimer;	// IMP=0x00000000006847c7
- (void)_startPopupTimer;	// IMP=0x0000000000684582
- (void)_handleAccountStatusChanged:(id)arg1;	// IMP=0x00000000006843b5
- (void)_stallResetConfigDisplayTimer;	// IMP=0x000000000068400b
- (void)_clearResetConfigDisplayTimer;	// IMP=0x0000000000683fc9
- (void)_stopResetConfigDisplayTimer;	// IMP=0x0000000000683ef1
- (void)_startResetConfigDisplayTimer;	// IMP=0x00000000006838fd
- (void)kickResetConfigDisplayTimer;	// IMP=0x000000000068388c
- (void)_stallCloudDataSyncTimer;	// IMP=0x0000000000683547
- (void)_resetCloudDataSyncTimer;	// IMP=0x0000000000683505
- (void)_stopCloudDataSyncTimer;	// IMP=0x0000000000683440
- (void)_startCloudDataSyncTimer;	// IMP=0x00000000006830fe
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000683046
- (void)updateNetworkConnectivity:(_Bool)arg1;	// IMP=0x0000000000682fcc
- (void)_stopDataConfigResetTimers;	// IMP=0x0000000000682f9e
- (void)_startDataConfigResetTimers;	// IMP=0x0000000000682f59
- (void)startDataConfigResetTimers;	// IMP=0x0000000000682ee8
@property(nonatomic) _Bool decryptionFailed; // @synthesize decryptionFailed=_decryptionFailed;
- (void)_postNotificationForDataSyncInProgress:(_Bool)arg1 dataSyncState:(unsigned long long)arg2 forcePost:(_Bool)arg3;	// IMP=0x0000000000682bfe
- (void)handleKeychainSyncStateChangedNotification:(id)arg1;	// IMP=0x0000000000682b8d
- (void)_updateKeychainSyncEnabled:(_Bool)arg1;	// IMP=0x000000000068295f
- (void)dealloc;	// IMP=0x00000000006828b4
- (void)_registerForMessages;	// IMP=0x00000000006827df
- (id)initWithName:(id)arg1 homeManager:(id)arg2 messageDispatcher:(id)arg3 serverTokenAvailable:(_Bool)arg4 homeDataHasBeenDecrypted:(_Bool)arg5 homeManagerServerTokenAvailable:(_Bool)arg6 localDataDecryptionFailed:(_Bool)arg7 totalHomes:(long long)arg8 currentAccount:(id)arg9;	// IMP=0x00000000006824a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

