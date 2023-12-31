//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSDate, NSDictionary, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, SDAutoUnlockIconTransferStore, SDAutoUnlockLocalDeviceController, SDAutoUnlockPeer, SDAutoUnlockSuggestionManager, SFAutoUnlockDevice, SFDeviceDiscovery;
@protocol OS_dispatch_queue, OS_dispatch_source, SDAutoUnlockTransportProtocol, SDKeyManaging, SDUnlockMagnetTransport;

@interface SDAutoUnlockSessionManager : NSObject
{
    _Bool _attemptInProgress;	// 8 = 0x8
    _Bool _watchUnlockEnabled;	// 9 = 0x9
    _Bool _previousNearbyState;	// 10 = 0xa
    _Bool _attemptPrewarmed;	// 11 = 0xb
    _Bool _extendedTimer;	// 12 = 0xc
    _Bool _notifiedForProxy;	// 13 = 0xd
    _Bool _proxyNotAvailableForUnlock;	// 14 = 0xe
    _Bool _presentedBluetoothError;	// 15 = 0xf
    _Bool _presentedWiFiError;	// 16 = 0x10
    _Bool _currentlyAdvertising;	// 17 = 0x11
    _Bool _previousConnectedState;	// 18 = 0x12
    _Bool _autoRelockAssertionTimerActive;	// 19 = 0x13
    _Bool _cachedDeviceWiFiState;	// 20 = 0x14
    _Bool _cachedWatchWiFiState;	// 21 = 0x15
    _Bool _wifiStateNeedsUpdating;	// 22 = 0x16
    _Bool _useBTPipe;	// 23 = 0x17
    _Bool _preventRadarNotification;	// 24 = 0x18
    _Bool _lastUnlockedByWatch;	// 25 = 0x19
    _Bool _lastLockedByRelock;	// 26 = 0x1a
    _Bool _doNotPostUnlockConfirmation;	// 27 = 0x1b
    _Bool _suppressAlert;	// 28 = 0x1c
    _Bool _needsArming;	// 29 = 0x1d
    _Bool _isBeingUsedForSiri;	// 30 = 0x1e
    _Bool _needsStrictMotionCheck;	// 31 = 0x1f
    int _proxyRSSI;	// 32 = 0x20
    NSString *_state;	// 40 = 0x28
    NSData *_attemptExternalACMContext;	// 48 = 0x30
    unsigned long long _stateHandle;	// 56 = 0x38
    NSDictionary *_awdlInfo;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_sessionManagerQueue;	// 72 = 0x48
    NSHashTable *_observerTable;	// 80 = 0x50
    SDAutoUnlockSuggestionManager *_suggestionManager;	// 88 = 0x58
    NSMutableDictionary *_lockAuthSessions;	// 96 = 0x60
    NSMutableArray *_canceledPairingKeySessions;	// 104 = 0x68
    NSMutableArray *_canceledAuthLockSessions;	// 112 = 0x70
    NSMutableDictionary *_keyAuthSessions;	// 120 = 0x78
    NSMutableDictionary *_lockPairingSessions;	// 128 = 0x80
    NSMutableDictionary *_keyPairingSessions;	// 136 = 0x88
    NSMutableDictionary *_proxySessions;	// 144 = 0x90
    NSMutableArray *_locksWithAKSTokens;	// 152 = 0x98
    NSMutableArray *_keysWithAKSTokens;	// 160 = 0xa0
    NSMutableDictionary *_keyRegistrationSessionsByDeviceID;	// 168 = 0xa8
    NSMutableDictionary *_lockRegistrationSessionsByDeviceID;	// 176 = 0xb0
    NSMutableSet *_serviceClients;	// 184 = 0xb8
    NSData *_previousMacAddressData;	// 192 = 0xc0
    NSObject<OS_dispatch_source> *_nearbyPushTimer;	// 200 = 0xc8
    NSDate *_prewarmStart;	// 208 = 0xd0
    NSDate *_attemptStart;	// 216 = 0xd8
    SFDeviceDiscovery *_scanner;	// 224 = 0xe0
    SFAutoUnlockDevice *_attemptDevice;	// 232 = 0xe8
    long long _attemptType;	// 240 = 0xf0
    NSString *_attemptBundlePath;	// 248 = 0xf8
    NSString *_attemptAppName;	// 256 = 0x100
    NSString *_attemptNavBarTitle;	// 264 = 0x108
    CDUnknownBlockType _attemptActivatedHandler;	// 272 = 0x110
    NSObject<OS_dispatch_source> *_scanTimer;	// 280 = 0x118
    double _proxyDiscoverTime;	// 288 = 0x120
    NSString *_scanErrorString;	// 296 = 0x128
    NSError *_authSessionError;	// 304 = 0x130
    long long _proxyErrorCode;	// 312 = 0x138
    NSString *_proxyDeviceModel;	// 320 = 0x140
    long long _lastProxyState;	// 328 = 0x148
    double _proxyConnectionTime;	// 336 = 0x150
    NSSet *_scanAutoUnlockDevices;	// 344 = 0x158
    NSSet *_scanWatchIDs;	// 352 = 0x160
    NSSet *_scanPhoneIDs;	// 360 = 0x168
    long long _attemptCount;	// 368 = 0x170
    NSString *_attemptID;	// 376 = 0x178
    NSString *_incrementedCountID;	// 384 = 0x180
    long long _connectedBluetoothDevices;	// 392 = 0x188
    long long _timeSinceLastMachineWake;	// 400 = 0x190
    long long _lastSleepType;	// 408 = 0x198
    NSSet *_eligibleDevices;	// 416 = 0x1a0
    long long _wifiErrorCount;	// 424 = 0x1a8
    long long _bluetoothErrorCount;	// 432 = 0x1b0
    long long _idsMacCountCache;	// 440 = 0x1b8
    NSDate *_advertisingChangedDate;	// 448 = 0x1c0
    NSDate *_wristStateChangedDate;	// 456 = 0x1c8
    NSDate *_lockStateChangedDate;	// 464 = 0x1d0
    NSDate *_nearbyDeviceChangedDate;	// 472 = 0x1d8
    NSDate *_pipeConnectionChangedDate;	// 480 = 0x1e0
    NSMutableDictionary *_cachedMetrics;	// 488 = 0x1e8
    NSMutableArray *_previousSessionIDs;	// 496 = 0x1f0
    SDAutoUnlockIconTransferStore *_iconTransferStore;	// 504 = 0x1f8
    SDAutoUnlockLocalDeviceController *_localDeviceController;	// 512 = 0x200
    NSObject<OS_dispatch_source> *_magnetLinkTimer;	// 520 = 0x208
    NSDate *_lastUnlockDate;	// 528 = 0x210
    long long _periocularStatus;	// 536 = 0x218
    id <SDAutoUnlockTransportProtocol> _autoUnlockTransport;	// 544 = 0x220
    id <SDUnlockMagnetTransport> _magnetTransport;	// 552 = 0x228
    id <SDKeyManaging> _keyManager;	// 560 = 0x230
    CDUnknownBlockType _isSignedIntoPrimaryiCloudAccount;	// 568 = 0x238
    CDUnknownBlockType _isFaceIDEnabled;	// 576 = 0x240
    CDUnknownBlockType _isWifiEnabled;	// 584 = 0x248
    CDUnknownBlockType _isBluetoothEnabled;	// 592 = 0x250
    MISSING_TYPE *_isActiveDeviceNearby;	// 600 = 0x258
    SDAutoUnlockPeer *_remotePeer;	// 608 = 0x260
}

+ (id)sharedManager;	// IMP=0x002000000005a6af
- (void).cxx_destruct;	// IMP=0x002000000006ec00
@property(retain, nonatomic) SDAutoUnlockPeer *remotePeer; // @synthesize remotePeer=_remotePeer;
@property(copy, nonatomic) CDUnknownBlockType isActiveDeviceNearby; // @synthesize isActiveDeviceNearby=_isActiveDeviceNearby;
@property(copy, nonatomic) CDUnknownBlockType isBluetoothEnabled; // @synthesize isBluetoothEnabled=_isBluetoothEnabled;
@property(copy, nonatomic) CDUnknownBlockType isWifiEnabled; // @synthesize isWifiEnabled=_isWifiEnabled;
@property(copy, nonatomic) CDUnknownBlockType isFaceIDEnabled; // @synthesize isFaceIDEnabled=_isFaceIDEnabled;
@property(copy, nonatomic) CDUnknownBlockType isSignedIntoPrimaryiCloudAccount; // @synthesize isSignedIntoPrimaryiCloudAccount=_isSignedIntoPrimaryiCloudAccount;
@property(readonly, nonatomic) __weak id <SDKeyManaging> keyManager; // @synthesize keyManager=_keyManager;
@property(readonly, nonatomic) __weak id <SDUnlockMagnetTransport> magnetTransport; // @synthesize magnetTransport=_magnetTransport;
@property(readonly, nonatomic) __weak id <SDAutoUnlockTransportProtocol> autoUnlockTransport; // @synthesize autoUnlockTransport=_autoUnlockTransport;
@property(nonatomic) _Bool needsStrictMotionCheck; // @synthesize needsStrictMotionCheck=_needsStrictMotionCheck;
@property(nonatomic) _Bool isBeingUsedForSiri; // @synthesize isBeingUsedForSiri=_isBeingUsedForSiri;
@property(nonatomic) _Bool needsArming; // @synthesize needsArming=_needsArming;
@property(nonatomic) long long periocularStatus; // @synthesize periocularStatus=_periocularStatus;
@property(nonatomic) _Bool suppressAlert; // @synthesize suppressAlert=_suppressAlert;
@property(nonatomic) _Bool doNotPostUnlockConfirmation; // @synthesize doNotPostUnlockConfirmation=_doNotPostUnlockConfirmation;
@property(nonatomic) _Bool lastLockedByRelock; // @synthesize lastLockedByRelock=_lastLockedByRelock;
@property(nonatomic) _Bool lastUnlockedByWatch; // @synthesize lastUnlockedByWatch=_lastUnlockedByWatch;
@property(retain, nonatomic) NSDate *lastUnlockDate; // @synthesize lastUnlockDate=_lastUnlockDate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *magnetLinkTimer; // @synthesize magnetLinkTimer=_magnetLinkTimer;
@property(retain, nonatomic) SDAutoUnlockLocalDeviceController *localDeviceController; // @synthesize localDeviceController=_localDeviceController;
@property(retain, nonatomic) SDAutoUnlockIconTransferStore *iconTransferStore; // @synthesize iconTransferStore=_iconTransferStore;
@property(retain, nonatomic) NSMutableArray *previousSessionIDs; // @synthesize previousSessionIDs=_previousSessionIDs;
@property(retain, nonatomic) NSMutableDictionary *cachedMetrics; // @synthesize cachedMetrics=_cachedMetrics;
@property(nonatomic) _Bool preventRadarNotification; // @synthesize preventRadarNotification=_preventRadarNotification;
@property(nonatomic) _Bool useBTPipe; // @synthesize useBTPipe=_useBTPipe;
@property(nonatomic) _Bool wifiStateNeedsUpdating; // @synthesize wifiStateNeedsUpdating=_wifiStateNeedsUpdating;
@property(nonatomic) _Bool cachedWatchWiFiState; // @synthesize cachedWatchWiFiState=_cachedWatchWiFiState;
@property(nonatomic) _Bool cachedDeviceWiFiState; // @synthesize cachedDeviceWiFiState=_cachedDeviceWiFiState;
@property(nonatomic) _Bool autoRelockAssertionTimerActive; // @synthesize autoRelockAssertionTimerActive=_autoRelockAssertionTimerActive;
@property(nonatomic) _Bool previousConnectedState; // @synthesize previousConnectedState=_previousConnectedState;
@property(retain, nonatomic) NSDate *pipeConnectionChangedDate; // @synthesize pipeConnectionChangedDate=_pipeConnectionChangedDate;
@property(retain, nonatomic) NSDate *nearbyDeviceChangedDate; // @synthesize nearbyDeviceChangedDate=_nearbyDeviceChangedDate;
@property(retain, nonatomic) NSDate *lockStateChangedDate; // @synthesize lockStateChangedDate=_lockStateChangedDate;
@property(retain, nonatomic) NSDate *wristStateChangedDate; // @synthesize wristStateChangedDate=_wristStateChangedDate;
@property(retain, nonatomic) NSDate *advertisingChangedDate; // @synthesize advertisingChangedDate=_advertisingChangedDate;
@property(nonatomic) long long idsMacCountCache; // @synthesize idsMacCountCache=_idsMacCountCache;
@property(nonatomic) _Bool currentlyAdvertising; // @synthesize currentlyAdvertising=_currentlyAdvertising;
@property(nonatomic) _Bool presentedWiFiError; // @synthesize presentedWiFiError=_presentedWiFiError;
@property(nonatomic) _Bool presentedBluetoothError; // @synthesize presentedBluetoothError=_presentedBluetoothError;
@property(nonatomic) long long bluetoothErrorCount; // @synthesize bluetoothErrorCount=_bluetoothErrorCount;
@property(nonatomic) long long wifiErrorCount; // @synthesize wifiErrorCount=_wifiErrorCount;
@property(retain, nonatomic) NSSet *eligibleDevices; // @synthesize eligibleDevices=_eligibleDevices;
@property(nonatomic) long long lastSleepType; // @synthesize lastSleepType=_lastSleepType;
@property(nonatomic) long long timeSinceLastMachineWake; // @synthesize timeSinceLastMachineWake=_timeSinceLastMachineWake;
@property(nonatomic) long long connectedBluetoothDevices; // @synthesize connectedBluetoothDevices=_connectedBluetoothDevices;
@property(retain, nonatomic) NSString *incrementedCountID; // @synthesize incrementedCountID=_incrementedCountID;
@property(retain, nonatomic) NSString *attemptID; // @synthesize attemptID=_attemptID;
@property(nonatomic) long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(retain, nonatomic) NSSet *scanPhoneIDs; // @synthesize scanPhoneIDs=_scanPhoneIDs;
@property(retain, nonatomic) NSSet *scanWatchIDs; // @synthesize scanWatchIDs=_scanWatchIDs;
@property(retain, nonatomic) NSSet *scanAutoUnlockDevices; // @synthesize scanAutoUnlockDevices=_scanAutoUnlockDevices;
@property(nonatomic) _Bool proxyNotAvailableForUnlock; // @synthesize proxyNotAvailableForUnlock=_proxyNotAvailableForUnlock;
@property(nonatomic) double proxyConnectionTime; // @synthesize proxyConnectionTime=_proxyConnectionTime;
@property(nonatomic) long long lastProxyState; // @synthesize lastProxyState=_lastProxyState;
@property(nonatomic) int proxyRSSI; // @synthesize proxyRSSI=_proxyRSSI;
@property(retain, nonatomic) NSString *proxyDeviceModel; // @synthesize proxyDeviceModel=_proxyDeviceModel;
@property(nonatomic) long long proxyErrorCode; // @synthesize proxyErrorCode=_proxyErrorCode;
@property(retain, nonatomic) NSError *authSessionError; // @synthesize authSessionError=_authSessionError;
@property(retain, nonatomic) NSString *scanErrorString; // @synthesize scanErrorString=_scanErrorString;
@property(nonatomic) _Bool notifiedForProxy; // @synthesize notifiedForProxy=_notifiedForProxy;
@property(nonatomic) double proxyDiscoverTime; // @synthesize proxyDiscoverTime=_proxyDiscoverTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *scanTimer; // @synthesize scanTimer=_scanTimer;
@property(copy, nonatomic) CDUnknownBlockType attemptActivatedHandler; // @synthesize attemptActivatedHandler=_attemptActivatedHandler;
@property(retain, nonatomic) NSString *attemptNavBarTitle; // @synthesize attemptNavBarTitle=_attemptNavBarTitle;
@property(retain, nonatomic) NSString *attemptAppName; // @synthesize attemptAppName=_attemptAppName;
@property(retain, nonatomic) NSString *attemptBundlePath; // @synthesize attemptBundlePath=_attemptBundlePath;
@property(nonatomic) long long attemptType; // @synthesize attemptType=_attemptType;
@property(retain, nonatomic) SFAutoUnlockDevice *attemptDevice; // @synthesize attemptDevice=_attemptDevice;
@property(retain, nonatomic) SFDeviceDiscovery *scanner; // @synthesize scanner=_scanner;
@property(nonatomic) _Bool extendedTimer; // @synthesize extendedTimer=_extendedTimer;
@property(retain, nonatomic) NSDate *attemptStart; // @synthesize attemptStart=_attemptStart;
@property(retain, nonatomic) NSDate *prewarmStart; // @synthesize prewarmStart=_prewarmStart;
@property(nonatomic) _Bool attemptPrewarmed; // @synthesize attemptPrewarmed=_attemptPrewarmed;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *nearbyPushTimer; // @synthesize nearbyPushTimer=_nearbyPushTimer;
@property(nonatomic) _Bool previousNearbyState; // @synthesize previousNearbyState=_previousNearbyState;
@property(retain, nonatomic) NSData *previousMacAddressData; // @synthesize previousMacAddressData=_previousMacAddressData;
@property(nonatomic) _Bool watchUnlockEnabled; // @synthesize watchUnlockEnabled=_watchUnlockEnabled;
@property(retain, nonatomic) NSMutableSet *serviceClients; // @synthesize serviceClients=_serviceClients;
@property(retain, nonatomic) NSMutableDictionary *lockRegistrationSessionsByDeviceID; // @synthesize lockRegistrationSessionsByDeviceID=_lockRegistrationSessionsByDeviceID;
@property(retain, nonatomic) NSMutableDictionary *keyRegistrationSessionsByDeviceID; // @synthesize keyRegistrationSessionsByDeviceID=_keyRegistrationSessionsByDeviceID;
@property(retain, nonatomic) NSMutableArray *keysWithAKSTokens; // @synthesize keysWithAKSTokens=_keysWithAKSTokens;
@property(retain, nonatomic) NSMutableArray *locksWithAKSTokens; // @synthesize locksWithAKSTokens=_locksWithAKSTokens;
@property(retain, nonatomic) NSMutableDictionary *proxySessions; // @synthesize proxySessions=_proxySessions;
@property(retain, nonatomic) NSMutableDictionary *keyPairingSessions; // @synthesize keyPairingSessions=_keyPairingSessions;
@property(retain, nonatomic) NSMutableDictionary *lockPairingSessions; // @synthesize lockPairingSessions=_lockPairingSessions;
@property(retain, nonatomic) NSMutableDictionary *keyAuthSessions; // @synthesize keyAuthSessions=_keyAuthSessions;
@property(retain, nonatomic) NSMutableArray *canceledAuthLockSessions; // @synthesize canceledAuthLockSessions=_canceledAuthLockSessions;
@property(retain, nonatomic) NSMutableArray *canceledPairingKeySessions; // @synthesize canceledPairingKeySessions=_canceledPairingKeySessions;
@property(retain, nonatomic) NSMutableDictionary *lockAuthSessions; // @synthesize lockAuthSessions=_lockAuthSessions;
@property(retain, nonatomic) SDAutoUnlockSuggestionManager *suggestionManager; // @synthesize suggestionManager=_suggestionManager;
@property(retain, nonatomic) NSHashTable *observerTable; // @synthesize observerTable=_observerTable;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionManagerQueue; // @synthesize sessionManagerQueue=_sessionManagerQueue;
@property(copy, nonatomic) NSDictionary *awdlInfo; // @synthesize awdlInfo=_awdlInfo;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) NSData *attemptExternalACMContext; // @synthesize attemptExternalACMContext=_attemptExternalACMContext;
@property(nonatomic) _Bool attemptInProgress; // @synthesize attemptInProgress=_attemptInProgress;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
- (void)loadPreviousSessionIDs;	// IMP=0x001000000006e0bb
- (_Bool)previousSessionExists:(id)arg1;	// IMP=0x001000000006e019
- (void)storePreviousSessionID:(id)arg1;	// IMP=0x001000000006de5f
- (struct os_state_data_s *)dumpState;	// IMP=0x001000000006d7c4
- (void)initializeCaptureBlock;	// IMP=0x001000000006d725
- (void)generateStateDump;	// IMP=0x001000000006d6e4
- (void)savePresentedWiFiError;	// IMP=0x001000000006d670
- (void)savePresentedBluetoothError;	// IMP=0x001000000006d5fc
- (void)loadPresentedWiFiError;	// IMP=0x001000000006d595
- (void)loadPresentedBluetoothError;	// IMP=0x001000000006d52e
- (_Bool)shouldShowErrorForWiFiEnabled:(_Bool)arg1;	// IMP=0x001000000006d3b9
- (_Bool)shouldShowErrorForBluetoothEnabled:(_Bool)arg1;	// IMP=0x001000000006d244
- (long long)errorCodeForBluetoothEnabled:(_Bool)arg1 wifiEnabled:(_Bool)arg2 faceIDEnabled:(_Bool)arg3;	// IMP=0x001000000006d213
- (id)errorStringForBluetoothEnabled:(_Bool)arg1 wifiEnabled:(_Bool)arg2 faceIDEnabled:(_Bool)arg3;	// IMP=0x001000000006d1a0
- (void)handleWiFiPowerChanged:(id)arg1;	// IMP=0x001000000006d19a
- (void)handleBluetoothPowerChanged:(id)arg1;	// IMP=0x001000000006d083
- (id)baseResultsDictionaryForError:(id)arg1;	// IMP=0x001000000006ce40
- (void)createRadarForError:(id)arg1 devices:(id)arg2 rangingResults:(id)arg3;	// IMP=0x001000000006ce3a
- (void)cancelMagnetLinkTimer;	// IMP=0x001000000006cbec
- (void)btPipeConnectionChanged:(id)arg1;	// IMP=0x001000000006cbe6
- (void)setUpMagnetLinkTimer;	// IMP=0x001000000006c7f7
- (_Bool)deviceCurrentlyUnlockedByWatch;	// IMP=0x000000000006c787
- (void)releaseLanguageAssertionForAutoRelock;	// IMP=0x001000000006c6e2
- (void)grabLanguageAssertionForAutoRelock;	// IMP=0x001000000006c57a
- (void)handleAuthenticationSessionStarted;	// IMP=0x001000000006c3ae
- (void)handlePairedDeviceLockStateChanged;	// IMP=0x001000000006c3a8
- (void)handleBioLockout;	// IMP=0x001000000006c15c
- (void)beginKeyRegistrationIfNecessary;	// IMP=0x001000000006be85
- (void)handleDisplayStateChanged:(unsigned long long)arg1;	// IMP=0x001000000006bdc9
- (void)handleNearbyStateChanged;	// IMP=0x001000000006bdb7
- (void)pipeConnectionChanged:(id)arg1;	// IMP=0x001000000006bcef
- (id)unlockedOnWristDate;	// IMP=0x001000000006bce7
- (void)wristStateChanged:(id)arg1;	// IMP=0x001000000006bce1
- (void)handleLockStateChanged;	// IMP=0x001000000006bb81
- (void)handleUnexpectedDisablement:(id)arg1;	// IMP=0x001000000006ba50
- (_Bool)shouldNotify;	// IMP=0x001000000006ba48
- (void)upsellPhoneAutoUnlock;	// IMP=0x001000000006ba42
- (void)upsellBehaviorChangedAfterUpgradeIfNecessary;	// IMP=0x001000000006b70c
- (_Bool)behaviorChangedAfterUpgrade;	// IMP=0x001000000006b704
- (void)clearPhoneAutoUnlockNotification:(_Bool)arg1;	// IMP=0x001000000006b60d
- (void)screenLockUnlocked:(id)arg1;	// IMP=0x001000000006b607
- (void)onqueue_keyBagLockStateChange:(id)arg1;	// IMP=0x001000000006b48b
- (void)keyBagLockStateChange:(id)arg1;	// IMP=0x001000000006b3b6
- (void)handleRelockMessage;	// IMP=0x001000000006b381
- (void)handleBLEDataReceivedNotification:(id)arg1;	// IMP=0x001000000006a9e9
- (void)removeServiceClientForIdentifier:(id)arg1;	// IMP=0x001000000006a96a
- (void)addServiceClientForIdentifier:(id)arg1;	// IMP=0x001000000006a8eb
- (long long)idsMacCount;	// IMP=0x001000000006a840
- (_Bool)watchLockedAndOnWrist;	// IMP=0x001000000006a838
- (_Bool)advertisingEnabled;	// IMP=0x001000000006a830
- (void)updateAdvertising;	// IMP=0x001000000006a82a
- (_Bool)watchLockedOnWristForPeer:(id)arg1;	// IMP=0x001000000006a7fd
- (_Bool)proxyAdvertisementForPeer:(id)arg1;	// IMP=0x001000000006a7d0
- (_Bool)unlockEnabledForPeer:(id)arg1;	// IMP=0x001000000006a7a3
- (void)handleScanTimerFired;	// IMP=0x001000000006a16f
- (void)handleBLEScanTimerFired;	// IMP=0x001000000006a118
- (void)invalidateScanTimer;	// IMP=0x001000000006a042
- (void)restartScanTimer:(unsigned long long)arg1;	// IMP=0x0010000000069e09
- (void)handleFoundPeer:(id)arg1;	// IMP=0x00100000000698fd
- (void)invalidateScanner;	// IMP=0x0010000000069788
- (void)startScannerWithWatchBluetoothIDs:(id)arg1 phoneBluetoothIDs:(id)arg2;	// IMP=0x0010000000068d21
- (void)idsController:(id)arg1 didReceiveProtoData:(id)arg2 forType:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x00100000000687e0
- (void)transport:(id)arg1 didReceiveKeyOriginatingRegistrationRequestWithSessionID:(id)arg2 deviceID:(id)arg3 requestData:(id)arg4;	// IMP=0x0010000000068654
- (void)transport:(id)arg1 didReceiveRegistrationRequestWithSessionID:(id)arg2 deviceID:(id)arg3 requestData:(id)arg4;	// IMP=0x00100000000684fd
- (void)transport:(id)arg1 didReceivePairingRequestWithSessionID:(id)arg2 deviceID:(id)arg3 requestData:(id)arg4;	// IMP=0x00100000000683cd
- (void)transportDidChangeNearbyState:(id)arg1;	// IMP=0x0010000000068322
- (void)transportDidChangeDevices:(id)arg1;	// IMP=0x001000000006824a
- (void)performRegistrationIfNecessaryForLockSession:(id)arg1 error:(id)arg2;	// IMP=0x00100000000680af
- (_Bool)isDisplayOff;	// IMP=0x00100000000680a7
- (void)sessionDidSendInitialData:(id)arg1;	// IMP=0x00100000000680a1
- (void)sessionDidReceiveKeyDeviceLocked:(id)arg1;	// IMP=0x0010000000067fea
- (void)handleProxyConnectionStartedForSession:(id)arg1;	// IMP=0x0010000000067bd8
- (void)handleLockConnectionStartedForSession:(id)arg1;	// IMP=0x0010000000067292
- (void)sessionDidStartConnection:(id)arg1;	// IMP=0x001000000006721a
- (void)handleProxySessionCompleted:(id)arg1 error:(id)arg2;	// IMP=0x0010000000066f87
- (void)handleLockSessionCompleted:(id)arg1 error:(id)arg2;	// IMP=0x0010000000066392
- (void)session:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0010000000065391
- (void)cancelParallelRegistrationSessionsForDeviceID:(id)arg1 newSessionID:(id)arg2;	// IMP=0x0010000000065191
- (void)registerRemotePeerIfNecessary;	// IMP=0x001000000006518b
- (void)initializeRemotePeer;	// IMP=0x0010000000064f7e
- (void)armDevicesWaitingForUnlock;	// IMP=0x0010000000064eba
- (void)createRegistrationLockSessionWithDeviceID:(id)arg1 sessionID:(id)arg2 requestData:(id)arg3;	// IMP=0x0010000000064bfb
- (void)createRegistrationKeySessionWithIdentifier:(id)arg1 deviceID:(id)arg2 requestData:(id)arg3 locallyGenerated:(_Bool)arg4;	// IMP=0x0010000000064968
- (void)invalidateExistingSessionsForBLEDevice:(id)arg1 incomingSessionID:(id)arg2;	// IMP=0x00100000000644f0
- (void)cancelAllLockSessionsForScanTimeout;	// IMP=0x001000000006435e
- (void)clearAllKeysWithTokens;	// IMP=0x00100000000642c1
- (void)cleanUpProxySessions;	// IMP=0x00100000000640be
- (void)updateStringForProxySession;	// IMP=0x0010000000063e3e
- (void)createProxySessionWithDeviceID:(id)arg1;	// IMP=0x0010000000063b84
- (void)createKeySessionWithBLEDevice:(id)arg1 sessionID:(id)arg2 wrapper:(id)arg3 useEncryption:(_Bool)arg4;	// IMP=0x0010000000063771
- (void)createLockSessionWithWatchDevice:(id)arg1;	// IMP=0x0010000000063227
- (void)createPairingKeySessionWithIdentifier:(id)arg1 deviceID:(id)arg2 requestData:(id)arg3;	// IMP=0x0010000000062fad
- (void)createPairingLockSessionWithDevice:(id)arg1 passcode:(id)arg2;	// IMP=0x0010000000062b5c
- (void)disableKeyPairingForDeviceID:(id)arg1;	// IMP=0x00100000000629bd
- (void)handleDisableMessageForLock:(id)arg1 fromDeviceID:(id)arg2;	// IMP=0x00100000000627f9
- (void)handleDisableMessageForKey:(id)arg1 fromDeviceID:(id)arg2;	// IMP=0x00100000000623e6
- (void)transport:(id)arg1 didReceiveDisableMessage:(id)arg2 fromDeviceID:(id)arg3;	// IMP=0x0010000000062191
- (void)sendDisableMessageToDeviceID:(id)arg1 pairingID:(id)arg2;	// IMP=0x0010000000061f09
- (_Bool)disablePairingForDeviceID:(id)arg1 pairingID:(id)arg2;	// IMP=0x0010000000061de1
- (void)authPromptInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000061d51
- (id)stringForState:(long long)arg1;	// IMP=0x0010000000061d32
- (void)autoUnlockStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000061b77
- (void)requestRelock;	// IMP=0x0010000000061a0c
- (void)generateAppIconImageWithOptions:(unsigned int)arg1;	// IMP=0x0010000000061a06
- (void)decrementAttemptCount;	// IMP=0x0010000000061969
- (void)incrementAttemptCount;	// IMP=0x00100000000617cb
- (void)logUnintentionalAutoUnlockAttempt:(unsigned long long)arg1;	// IMP=0x0010000000061585
- (void)cancelAttemptsForDeviceUnlocked;	// IMP=0x0010000000061396
- (void)cancelAutoUnlockWithCancelReason:(long long)arg1 usingTool:(_Bool)arg2;	// IMP=0x0010000000061390
- (void)cancelAutoUnlock;	// IMP=0x0010000000061375
- (void)completeSuccessfulAttempt;	// IMP=0x001000000006136f
- (void)invalidateAttempt;	// IMP=0x0010000000061070
- (void)donateDeviceUnlockedWithMask:(_Bool)arg1;	// IMP=0x0010000000060fb2
- (void)completeAutoUnlockWithNotification:(_Bool)arg1;	// IMP=0x0010000000060815
- (void)attemptAutoUnlockWithoutNotifyingWatch;	// IMP=0x0010000000060784
- (void)attemptAutoUnlockForSiri;	// IMP=0x00100000000606f3
- (void)prewarmAutoUnlock;	// IMP=0x00100000000605dc
- (void)attemptAutoUnlock;	// IMP=0x001000000005eec9
- (void)failedAttemptBeforeStarting:(id)arg1 metricErrorString:(id)arg2;	// IMP=0x001000000005eb9c
- (void)dropEscrowRecordsIfNecessary;	// IMP=0x001000000005eb96
- (void)generateAttemptForType:(long long)arg1;	// IMP=0x001000000005e3c2
- (void)attemptAutoUnlockForType:(long long)arg1 externalACMContext:(id)arg2 preventRadarNotification:(_Bool)arg3 bundlePath:(id)arg4 appName:(id)arg5 navBarTitle:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000005e11b
- (void)attemptAutoUnlockForType:(long long)arg1 preventRadarNotification:(_Bool)arg2;	// IMP=0x001000000005e0e8
- (void)attemptAutoUnlockForType:(long long)arg1;	// IMP=0x001000000005e0d1
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005de50
- (void)disableAutoUnlockForAllWatches;	// IMP=0x001000000005dc7b
- (void)cancelEnablingAutoUnlockForDeviceID:(id)arg1;	// IMP=0x001000000005dab0
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;	// IMP=0x001000000005d9a7
- (void)cancelEnablingAllDevices;	// IMP=0x001000000005d77c
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;	// IMP=0x001000000005d4c2
- (void)eligibleDevicesRequestFromBundleID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005cfcc
- (_Bool)phoneAutoUnlockSupportedByDevice:(id)arg1;	// IMP=0x001000000005cedd
- (void)eligibleDevicesFilterCompatibleDevices:(id)arg1;	// IMP=0x001000000005cc70
- (void)repairCloudPairing;	// IMP=0x001000000005cb94
- (void)notifyObserversOfUnlockFailureWithResults:(id)arg1 error:(id)arg2;	// IMP=0x001000000005c843
- (void)notifyObserversOfUnlockCompletionWithDevice:(id)arg1;	// IMP=0x001000000005c56b
- (void)notifyObserverOfAttemptBeganWithDevice:(id)arg1;	// IMP=0x001000000005c2b2
- (void)notifyObserverOfFailedToEnableDevice:(id)arg1 error:(id)arg2;	// IMP=0x001000000005bfcf
- (void)notifyObserverOfEnabledDevice:(id)arg1;	// IMP=0x001000000005bd16
- (void)notifyObserverOfKeyDeviceLockWithDevice:(id)arg1;	// IMP=0x001000000005ba5d
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000005b8d0
- (void)registerObserver:(id)arg1;	// IMP=0x001000000005b743
- (void)addNotificationsObservers;	// IMP=0x001000000005b5c3
- (void)initializeAttemptState;	// IMP=0x001000000005b1c0
- (void)onqueue_start;	// IMP=0x001000000005ad12
- (void)start;	// IMP=0x001000000005ac8b
- (id)initWithTransport:(id)arg1 magnetTransport:(id)arg2 keyManager:(id)arg3;	// IMP=0x001000000005a7b4
- (id)init;	// IMP=0x001000000005a704

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

