//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUBluetoothClient, CUSystemMonitor, IDSService, NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, RPIdentity, SDStatusMonitor, SFBLEAdvertiser, SFBLEDevice, SFBLEPipe, SFBLEScanner, SFSystemService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDNearbyAgent : NSObject
{
    _Bool _activated;	// 8 = 0x8
    _Bool _activityCarPlayRegistered;	// 9 = 0x9
    int _activityLevelNotifyToken;	// 12 = 0xc
    unsigned char _activityLevel;	// 16 = 0x10
    _Bool _activityMonitorStarted;	// 17 = 0x11
    _Bool _activityMultipleUsersRegistered;	// 18 = 0x12
    int _activityPollSeconds;	// 20 = 0x14
    int _activityRecentSeconds;	// 24 = 0x18
    _Bool _activityScreenOn;	// 28 = 0x1c
    NSObject<OS_dispatch_source> *_activityTimer;	// 32 = 0x20
    _Bool _activityUIUnlocked;	// 40 = 0x28
    _Bool _activityUserActive;	// 41 = 0x29
    int _allowEnhancedDiscovery;	// 44 = 0x2c
    NSData *_bleAdvertisingAddress;	// 48 = 0x30
    NSData *_bleAudioRoutingScoreEncryptedData;	// 56 = 0x38
    NSData *_bleAuthTagOverride;	// 64 = 0x40
    NSMutableDictionary *_bleConnections;	// 72 = 0x48
    _Bool _bleDiagnosticAdvSuppressLogged;	// 80 = 0x50
    NSMutableSet *_bleDiagnosticModeClients;	// 88 = 0x58
    NSData *_bleHotspotEncryptedData;	// 96 = 0x60
    SFBLEAdvertiser *_bleNearbyActionAdvertiser;	// 104 = 0x68
    _Bool _bleNearbyActionAdvertiseActive;	// 112 = 0x70
    _Bool _bleNearbyActionAdvertiseDisabled;	// 113 = 0x71
    NSObject<OS_dispatch_source> *_bleNearbyActionAdvertiseLingerTimer;	// 120 = 0x78
    NSMutableDictionary *_bleNearbyActionDevices;	// 128 = 0x80
    _Bool _bleNearbyActionRSSILog;	// 136 = 0x88
    _Bool _bleNearbyActionScanAlways;	// 137 = 0x89
    _Bool _bleNearbyActionScanNever;	// 138 = 0x8a
    SFBLEScanner *_bleNearbyActionScanner;	// 144 = 0x90
    _Bool _bleNearbyInfoAdvertiseAlways;	// 152 = 0x98
    _Bool _bleNearbyInfoAdvertiseDisabled;	// 153 = 0x99
    double _bleNearbyInfoAdvertiseLingerSecs;	// 160 = 0xa0
    SFBLEAdvertiser *_bleNearbyInfoAdvertiser;	// 168 = 0xa8
    NSString *_bleNearbyInfoAdvertiseReason;	// 176 = 0xb0
    _Bool _bleNearbyInfoAdvertiseReasonChanged;	// 184 = 0xb8
    _Bool _bleNearbyInfoAdvertised;	// 185 = 0xb9
    NSObject<OS_dispatch_source> *_bleNearbyInfoAdvertiseLingerTimer;	// 192 = 0xc0
    _Bool _bleNearbyInfoAirDropUsable;	// 200 = 0xc8
    NSMutableDictionary *_bleNearbyInfoDevices;	// 208 = 0xd0
    _Bool _bleNearbyInfoRSSILog;	// 216 = 0xd8
    _Bool _bleNearbyInfoWiFiP2P;	// 217 = 0xd9
    SFBLEScanner *_bleNearbyInfoScanner;	// 224 = 0xe0
    _Bool _bleProximityEnabled;	// 232 = 0xe8
    NSDictionary *_bleProximityInfo;	// 240 = 0xf0
    NSDictionary *_bleProximityInfoOverride;	// 248 = 0xf8
    SFBLEScanner *_bleProximityPairingScanner;	// 256 = 0x100
    _Bool _bleProximityRSSILog;	// 264 = 0x108
    _Bool _btPipeEnabled;	// 265 = 0x109
    _Bool _btPipeForced;	// 266 = 0x10a
    SFBLEDevice *_btPipePeer;	// 272 = 0x110
    _Bool _caEnabled;	// 280 = 0x118
    int _caForce;	// 284 = 0x11c
    unsigned int _caMessageNoScans;	// 288 = 0x120
    unsigned int _caMessageScans;	// 292 = 0x124
    _Bool _caPhoneCalls;	// 296 = 0x128
    NSMutableSet *_caRequests;	// 304 = 0x130
    _Bool _caScanIfVeryActive;	// 312 = 0x138
    _Bool _caSingleDevice;	// 313 = 0x139
    NSData *_contactHashesCached;	// 320 = 0x140
    _Bool _contactHashesEnabled;	// 328 = 0x148
    _Bool _coreDeviceEnabled;	// 329 = 0x149
    unsigned long long _ddFastScanLastEndTicks;	// 336 = 0x150
    NSObject<OS_dispatch_source> *_ddFastScanTimer;	// 344 = 0x158
    NSMutableDictionary *_ddNearbyActionDevices;	// 352 = 0x160
    _Bool _ddNearbyActionEnabled;	// 360 = 0x168
    _Bool _ddNearbyActionScreenOff;	// 361 = 0x169
    NSMutableDictionary *_ddNearbyInfoDevices;	// 368 = 0x170
    _Bool _ddNearbyInfoEnabled;	// 376 = 0x178
    _Bool _ddNearbyInfoScreenOff;	// 377 = 0x179
    NSMutableDictionary *_ddProximityPairingDevices;	// 384 = 0x180
    _Bool _ddProximityPairingEnabled;	// 392 = 0x188
    _Bool _ddProximityPairingScreenOff;	// 393 = 0x189
    NSMutableSet *_ddRequests;	// 400 = 0x190
    _Bool _enhancedDiscoveryAdvActive;	// 408 = 0x198
    unsigned int _enhancedDiscoveryAssertCount;	// 412 = 0x19c
    _Bool _enhancedDiscoveryShouldRun;	// 416 = 0x1a0
    NSObject<OS_dispatch_source> *_enhancedDiscoveryTimer;	// 424 = 0x1a8
    NSMutableSet *_enhancedDiscoveryUseCases;	// 432 = 0x1b0
    unsigned long long _familyFlags;	// 440 = 0x1b8
    int _familyNotifyToken;	// 448 = 0x1c0
    _Bool _fitnessPairingEnabled;	// 452 = 0x1c4
    _Bool _homePodIdentifiesAsB520;	// 453 = 0x1c5
    _Bool _homePodIdentifiesAsB620;	// 454 = 0x1c6
    int _homePodModelCodeOverride;	// 456 = 0x1c8
    _Bool _isRIClientEnabled;	// 460 = 0x1cc
    int _idsAppleTVCountCache;	// 464 = 0x1d0
    NSArray *_idsBluetoothDevicesArray;	// 472 = 0x1d8
    NSSet *_idsBluetoothDevicesSet;	// 480 = 0x1e0
    NSArray *_idsBluetoothDeviceIDsForLEPipe;	// 488 = 0x1e8
    NSSet *_idsBluetoothDeviceIDsForMe;	// 496 = 0x1f0
    NSMutableDictionary *_idsBTtoIDSInfoMap;	// 504 = 0x1f8
    int _idsContinuityDeviceCountCache;	// 512 = 0x200
    NSArray *_idsDeviceArray;	// 520 = 0x208
    NSDictionary *_idsDeviceBTDictionary;	// 528 = 0x210
    NSDictionary *_idsDeviceCountBTDictionary;	// 536 = 0x218
    int _idsHasActiveWatchCache;	// 544 = 0x220
    int _idsHomePodCountCache;	// 548 = 0x224
    int _idsIsSignedInCache;	// 552 = 0x228
    int _idsMacCountCache;	// 556 = 0x22c
    int _idsShouldAdvertiseNearbyInfo;	// 560 = 0x230
    int _idsShouldEncryptActivityLevel;	// 564 = 0x234
    IDSService *_idsService;	// 568 = 0x238
    _Bool _logProxAdvFields;	// 576 = 0x240
    NSUUID *_remoteAppServiceUUID;	// 584 = 0x248
    NSMutableDictionary *_services;	// 592 = 0x250
    _Bool _sessionPairingEnabled;	// 600 = 0x258
    NSMutableDictionary *_sessions;	// 608 = 0x260
    NSMutableDictionary *_setupSessions;	// 616 = 0x268
    double _startTime;	// 624 = 0x270
    SDStatusMonitor *_statusMonitor;	// 632 = 0x278
    CUSystemMonitor *_systemMonitor;	// 640 = 0x280
    SFSystemService *_systemService;	// 648 = 0x288
    _Bool _unlockAdvertiseAlways;	// 656 = 0x290
    _Bool _unlockAdvertiseAggressive;	// 657 = 0x291
    _Bool _unlockAdvertiseEnabled;	// 658 = 0x292
    _Bool _unlockAdvertiseBackground;	// 659 = 0x293
    _Bool _unlockAdvertiseWatch;	// 660 = 0x294
    _Bool _unlockAdvertiseWatchLocked;	// 661 = 0x295
    SFBLEPipe *_unlockBtPipe;	// 664 = 0x298
    NSObject<OS_dispatch_source> *_unlockTestClientTimer;	// 672 = 0x2a0
    int _wombatActivityToken;	// 680 = 0x2a8
    NSMutableDictionary *_idDevices;	// 688 = 0x2b0
    _Bool _idEnabled;	// 696 = 0x2b8
    int _idIdentitiesChangedNotifyToken;	// 700 = 0x2bc
    NSArray *_idIdentityArray;	// 704 = 0x2c0
    NSObject<OS_dispatch_source> *_idMaintenanceTimer;	// 712 = 0x2c8
    _Bool _systemWillPowerDown;	// 720 = 0x2d0
    _Bool _autoUnlockActive;	// 721 = 0x2d1
    _Bool _boostNearbyInfo;	// 722 = 0x2d2
    _Bool _enhancedDiscovery;	// 723 = 0x2d3
    _Bool _inDiscoverySession;	// 724 = 0x2d4
    int _audioRoutingScore;	// 728 = 0x2d8
    unsigned int _hotspotInfo;	// 732 = 0x2dc
    NSData *_bleAuthTag;	// 736 = 0x2e0
    CUBluetoothClient *_btConnectedDeviceMonitor;	// 744 = 0x2e8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 752 = 0x2f0
    RPIdentity *_idSelfIdentity;	// 760 = 0x2f8
    RPIdentity *_temporarySelfIdentity;	// 768 = 0x300
}

+ (id)sharedNearbyAgent;	// IMP=0x0020000000170da0
- (void).cxx_destruct;	// IMP=0x0020000000197cb4
@property(readonly, nonatomic) RPIdentity *temporarySelfIdentity; // @synthesize temporarySelfIdentity=_temporarySelfIdentity;
@property(readonly, nonatomic) _Bool inDiscoverySession; // @synthesize inDiscoverySession=_inDiscoverySession;
@property(readonly, nonatomic) RPIdentity *idSelfIdentity; // @synthesize idSelfIdentity=_idSelfIdentity;
@property(nonatomic) unsigned int hotspotInfo; // @synthesize hotspotInfo=_hotspotInfo;
@property(nonatomic) _Bool enhancedDiscovery; // @synthesize enhancedDiscovery=_enhancedDiscovery;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) CUBluetoothClient *btConnectedDeviceMonitor; // @synthesize btConnectedDeviceMonitor=_btConnectedDeviceMonitor;
@property(nonatomic) _Bool boostNearbyInfo; // @synthesize boostNearbyInfo=_boostNearbyInfo;
@property(readonly, nonatomic) NSData *bleAuthTag; // @synthesize bleAuthTag=_bleAuthTag;
@property(nonatomic) int audioRoutingScore; // @synthesize audioRoutingScore=_audioRoutingScore;
@property(nonatomic) _Bool autoUnlockActive; // @synthesize autoUnlockActive=_autoUnlockActive;
- (void)_testPipePing;	// IMP=0x0010000000197abc
- (void)testPipePing;	// IMP=0x0010000000197a58
@property(readonly, copy, nonatomic) NSArray *adHocPairedDeviceIdentities;
@property(readonly, nonatomic) _Bool hasAdHocPairings;
@property(readonly, nonatomic) _Bool screenOn;
- (void)_systemHasPoweredOn;	// IMP=0x00100000001976ff
- (void)_systemWillSleep;	// IMP=0x0010000000197690
- (void)unlockStopTestServer;	// IMP=0x0010000000197643
- (void)unlockStartTestServer;	// IMP=0x00100000001975f6
- (void)unlockStopTestClient;	// IMP=0x001000000019755b
- (void)unlockStartTestClientWithDevice:(id)arg1;	// IMP=0x00100000001971c3
- (void)unlockUpdateAdvertising:(unsigned int)arg1 mask:(unsigned int)arg2;	// IMP=0x001000000019701a
- (void)_unlockDeviceFilterChangedForRequest:(id)arg1;	// IMP=0x0010000000196b24
- (void)_unlockApproveBluetoothIDsChanged:(id)arg1;	// IMP=0x0010000000196952
- (void)_unlockReceivedFrameData:(id)arg1 peer:(id)arg2 device:(id)arg3;	// IMP=0x00100000001966b0
- (void)_sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 direct:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000019645f
- (void)sendUnlockDataDirect:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000196444
- (void)sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000196331
- (void)_stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x0010000000196216
- (void)stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x0010000000196169
- (void)_startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x0010000000195f11
- (void)startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x0010000000195e4e
- (int)_setupSendData:(id)arg1 sessionIdentifier:(id)arg2 cnx:(id)arg3 clientSession:(id)arg4;	// IMP=0x0010000000195873
- (int)_setupSendCreateSession:(id)arg1 cnx:(id)arg2;	// IMP=0x00100000001954d6
- (int)_setupHandleSessionMessageType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4 session:(id)arg5;	// IMP=0x0010000000194d65
- (int)_setupHandleSessionEncryptedFrame:(id)arg1 type:(unsigned char)arg2 cnx:(id)arg3;	// IMP=0x00100000001948be
- (int)_setupHandleSessionCreated:(id)arg1 data:(id)arg2;	// IMP=0x00100000001943b1
- (int)_setupHandleCreateSession:(id)arg1 data:(id)arg2;	// IMP=0x0010000000193db1
- (int)_sendMessage:(id)arg1 frameType:(unsigned char)arg2 service:(id)arg3 session:(id)arg4;	// IMP=0x0010000000192fb4
- (void)sessionSendResponse:(id)arg1 session:(id)arg2;	// IMP=0x0010000000192f97
- (void)sessionSendRequest:(id)arg1 session:(id)arg2;	// IMP=0x0010000000192d54
- (void)sessionSendEvent:(id)arg1 session:(id)arg2;	// IMP=0x001000000019287e
- (void)sessionReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x0010000000192693
- (void)sessionStop:(id)arg1;	// IMP=0x001000000019243e
- (int)sessionStart:(id)arg1;	// IMP=0x0010000000191f42
- (void)serviceSendResponse:(id)arg1 service:(id)arg2;	// IMP=0x0010000000191f25
- (void)serviceSendRequest:(id)arg1 service:(id)arg2;	// IMP=0x0010000000191ce2
- (void)serviceSendEvent:(id)arg1 service:(id)arg2;	// IMP=0x0010000000191cc5
- (void)serviceReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x0010000000191b46
- (void)serviceStop:(id)arg1;	// IMP=0x0010000000191a20
- (int)serviceStart:(id)arg1;	// IMP=0x0010000000191570
- (_Bool)isTempAuthTagKnown:(id)arg1 bluetoothAddressData:(id)arg2;	// IMP=0x00100000001913ea
- (_Bool)isDeviceValidRIServer:(id)arg1;	// IMP=0x00100000001913be
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0010000000190f62
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0010000000190ea6
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0010000000190d78
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000190c7b
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x0010000000190ba1
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0010000000190a9c
- (int)_idsShouldEncryptActivityLevel;	// IMP=0x001000000019078a
- (_Bool)_idsShouldAdvertiseNearbyInfo;	// IMP=0x00100000001903f4
- (void)_idsMeDeviceChanged;	// IMP=0x00100000001901e5
- (int)_idsMacCount;	// IMP=0x0010000000190023
- (_Bool)idsIsSignedIn;	// IMP=0x001000000018fd02
- (int)_idsHomePodCount;	// IMP=0x001000000018fad0
- (_Bool)_idsHasActiveWatch;	// IMP=0x001000000018f880
- (void)idsDevicesAppendDescription:(id *)arg1;	// IMP=0x001000000018ee46
- (id)idsDeviceForBluetoothDeviceID:(id)arg1 conflictDetected:(_Bool *)arg2;	// IMP=0x001000000018ea5f
- (id)_idsDeviceArrayLocked;	// IMP=0x001000000018e9c0
- (id)idsDeviceArray;	// IMP=0x001000000018e95d
- (int)_idsContinuityDeviceCount;	// IMP=0x001000000018e7d7
- (id)_idsBluetoothDeviceIDsForAnnouncements;	// IMP=0x001000000018e472
- (id)_idsBluetoothDeviceIDsForSMSRelay;	// IMP=0x001000000018e257
- (id)_idsBluetoothDeviceIDsForSharingLocked;	// IMP=0x001000000018e085
- (id)_idsBluetoothDeviceIDsForSharing;	// IMP=0x001000000018e022
- (id)idsBluetoothDeviceIDsForWatches;	// IMP=0x000000000018de03
- (id)idsBluetoothDeviceIDsForSharing;	// IMP=0x001000000018dd3b
- (id)_idsBluetoothDeviceIDsForMe;	// IMP=0x001000000018d9b5
- (id)_idsBluetoothDeviceIDsForLEPipe;	// IMP=0x001000000018d6f5
- (id)idsBluetoothDeviceIDsForLEPipe;	// IMP=0x001000000018d665
- (id)_idsBluetoothDeviceIDsForiMessage;	// IMP=0x001000000018d498
- (id)_idsBluetoothDeviceIDsForHomePods;	// IMP=0x001000000018d279
- (id)idsBluetoothDeviceIDsForRIServers;	// IMP=0x001000000018cffc
- (int)_idsAppleTVCount;	// IMP=0x001000000018ce3a
- (void)idsAddCachedIDSIdentifierToDevice:(id)arg1;	// IMP=0x001000000018cca9
- (void)idsAddCachedIDSIdentifier:(id)arg1 device:(id)arg2;	// IMP=0x001000000018c848
- (void)_idsEnsureStopped;	// IMP=0x001000000018c71a
- (void)_idsEnsureStarted;	// IMP=0x001000000018c65d
- (unsigned char)_identificationDecryptActivityLevel:(unsigned char)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x001000000018c4b6
- (void)_identificationDecryptHotspotData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x001000000018c2aa
- (void)_identificationDecryptAudioRoutingScoreData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x001000000018c0a1
- (_Bool)_identificationIdentifyDevice:(id)arg1 sfDevice:(id)arg2;	// IMP=0x001000000018bc8f
- (void)_identificationReIdentifySameAccountDevices:(id)arg1 type:(long long)arg2;	// IMP=0x001000000018b77a
- (void)_identificationReIdentify;	// IMP=0x001000000018b46f
- (void)_identificationMaintenanceTimer;	// IMP=0x001000000018b14b
- (void)_identificationHandleDiscoveryStop;	// IMP=0x001000000018b068
- (void)_identificationHandleDeviceLost:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x001000000018afaa
- (void)_identificationHandleDeviceFound:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x001000000018a31f
- (id)idsDeviceIDsForFamily;	// IMP=0x001000000018a0d2
- (id)idsDeviceIDsForRIServers;	// IMP=0x0010000000189ebf
- (void)_identificationGetIdentities;	// IMP=0x00100000001895c0
- (void)_identificationEnsureStopped;	// IMP=0x00100000001894d1
- (void)_identificationEnsureStarted;	// IMP=0x0010000000189332
- (void)_identificationCheckFlagsAndACL;	// IMP=0x0010000000188dde
- (void)diagnosticMockLost:(id)arg1;	// IMP=0x0010000000188d58
- (void)diagnosticMockFound:(id)arg1;	// IMP=0x0010000000188cd2
- (void)diagnosticMockChanged:(id)arg1;	// IMP=0x0010000000188c49
- (void)diagnosticBLEModeStop:(id)arg1;	// IMP=0x0010000000188ba4
- (void)diagnosticBLEModeStart:(id)arg1;	// IMP=0x0010000000188adc
- (void)_deviceDiscoveryBLEScanStateChanged:(long long)arg1 type:(long long)arg2;	// IMP=0x00100000001888f4
- (void)_deviceDiscoveryBLEDeviceChanged:(id)arg1 type:(long long)arg2 changes:(unsigned int)arg3;	// IMP=0x0010000000188001
- (void)_deviceDiscoveryBLEDeviceLost:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000187cba
- (void)_deviceDiscoveryBLEDeviceFound:(id)arg1 type:(long long)arg2;	// IMP=0x00100000001871f2
- (void)_deviceDiscoveryFastScanStop:(id)arg1 reset:(_Bool)arg2 reason:(id)arg3;	// IMP=0x0010000000186f22
- (void)_deviceDiscoveryFastScanStart:(id)arg1 device:(id)arg2 reason:(id)arg3;	// IMP=0x0010000000186b34
- (void)_deviceDiscoveryFastScanEvaluate:(id)arg1 device:(id)arg2;	// IMP=0x0010000000186848
- (void)deviceDiscoveryTriggerEnhancedDiscovery:(id)arg1 reason:(id)arg2 useCase:(unsigned int)arg3;	// IMP=0x00100000001866a1
- (void)deviceDiscoveryTriggerEnhancedDiscovery:(id)arg1 reason:(id)arg2;	// IMP=0x00100000001865a0
- (void)deviceDiscoveryFastScanCancel:(id)arg1 reason:(id)arg2;	// IMP=0x0010000000186513
- (void)deviceDiscoveryFastScanTrigger:(id)arg1 reason:(id)arg2;	// IMP=0x001000000018649c
- (void)deviceDiscoveryRequestUpdate:(id)arg1;	// IMP=0x0010000000185e54
- (void)deviceDiscoveryRequestStop:(id)arg1;	// IMP=0x0010000000185a39
- (void)_deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x001000000018528c
- (void)deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x00100000001851df
- (_Bool)_deviceCanTriggerEnhancedDiscovery:(id)arg1;	// IMP=0x0010000000184e1f
- (void)_enhancedDiscoveryTimerFired;	// IMP=0x0010000000184ddb
- (void)_notifyCameraConfigChange;	// IMP=0x0010000000184dd5
- (void)_checkConditionsForEnhancedDiscovery;	// IMP=0x0010000000184dcf
- (int)_allowEnhancedDiscovery;	// IMP=0x0010000000184769
- (void)_enhancedDiscoveryScreenChange:(_Bool)arg1;	// IMP=0x0010000000184542
- (void)_disableEnhancedDiscovery:(id)arg1;	// IMP=0x001000000018445a
- (void)_enableEnhancedDiscovery:(id)arg1 useCase:(unsigned int)arg2;	// IMP=0x0010000000183a24
- (void)_enableEnhancedDiscovery:(id)arg1;	// IMP=0x0010000000183a0d
- (_Bool)isWifiCritical;	// IMP=0x00100000001839f4
- (void)coordinatedAlertRequestCancel:(id)arg1;	// IMP=0x001000000018394c
- (void)coordinatedAlertRequestFinish:(id)arg1;	// IMP=0x0010000000182e9e
- (void)coordinatedAlertRequestStart:(id)arg1;	// IMP=0x00100000001826bd
- (void)_discoverySessionStateChange:(_Bool)arg1;	// IMP=0x001000000018260b
- (void)_unregisterForWombatActivityNotification;	// IMP=0x00100000001825e1
- (void)_registerForWombatActivityNotification;	// IMP=0x00100000001824f9
- (unsigned int)_bleProximityUpdateNearbyInfoDevice:(id)arg1;	// IMP=0x00100000001823be
- (unsigned int)_bleProximityUpdateNearbyActionDevice:(id)arg1;	// IMP=0x0010000000182260
- (unsigned int)_bleProximityUpdateDeviceCloseNearbyActionDevice:(id)arg1;	// IMP=0x0010000000181c07
- (long long)bleProximityRSSIThreshold:(id)arg1;	// IMP=0x0010000000181b69
- (long long)bleProximityRSSIThresholdForType:(long long)arg1 device:(id)arg2;	// IMP=0x0010000000181945
- (id)bleProximityRSSIEstimatorInfo;	// IMP=0x0010000000181910
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2 allInfo:(id)arg3;	// IMP=0x00100000001811fa
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2;	// IMP=0x001000000018111d
- (id)bleProximityInfoForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x00100000001810ec
- (id)bleProximityInfo;	// IMP=0x0010000000181087
- (void)bleProximityEstimatorsResetDeviceClose;	// IMP=0x0010000000180e4d
- (id)bleProximityEstimatorForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x0010000000180ded
- (id)_bleUpdateUseCases:(id)arg1;	// IMP=0x0010000000180d4e
- (void)_bleUpdateScanner:(id)arg1 typeFlag:(unsigned long long)arg2;	// IMP=0x001000000017fafb
- (void)_bleUpdateAuthTagIfNeeded;	// IMP=0x001000000017f8fc
- (void)_bleAdvertisingAddressChanged;	// IMP=0x001000000017f6c0
- (void)_wirelessCriticalChanged:(id)arg1;	// IMP=0x001000000017f5b6
- (void)_smartCoverStatusChanged:(id)arg1;	// IMP=0x001000000017f4ef
- (void)_btPipeHandleFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x001000000017f0d6
- (void)_btPipeStateChanged:(id)arg1;	// IMP=0x001000000017eed8
- (void)_btPipeEnsureStopped;	// IMP=0x001000000017ee44
- (void)_btPipeEnsureStarted;	// IMP=0x001000000017ee3e
- (_Bool)_bleProximityPairingScannerShouldScan;	// IMP=0x001000000017edd4
- (void)_bleProximityPairingScannerEnsureStopped;	// IMP=0x001000000017eb6e
- (void)_bleProximityPairingScannerEnsureStarted;	// IMP=0x001000000017e48d
- (_Bool)_bleNearbyInfoScannerShouldScan;	// IMP=0x001000000017e22b
- (void)_bleNearbyInfoScannerEnsureStopped;	// IMP=0x001000000017dfd6
- (void)_bleNearbyInfoScannerEnsureStarted;	// IMP=0x001000000017d9dd
- (int)bleNearbyInfoSendFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4 isSession:(_Bool)arg5;	// IMP=0x001000000017cc7a
- (void)bleNearbyInfoStopConnectionToDevice:(id)arg1 owner:(id)arg2;	// IMP=0x001000000017cb41
- (int)bleNearbyInfoStartConnectionToDevice:(id)arg1 owner:(id)arg2 connected:(_Bool *)arg3;	// IMP=0x001000000017c88d
- (int)_bleNearbyInfoReceivedFrameType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4;	// IMP=0x001000000017baf7
- (void)_bleNearbyInfoReceivedData:(id)arg1 cnx:(id)arg2 peer:(id)arg3;	// IMP=0x001000000017afef
- (void)_bleNearbyInfoAdvertiserLingerStart:(id)arg1;	// IMP=0x001000000017ad70
- (_Bool)_bleNearbyInfoAdvertiserLingerIfNeeded;	// IMP=0x001000000017ad3c
- (unsigned char)_bleEncryptActivityLevel:(unsigned char)arg1;	// IMP=0x001000000017aac1
- (void)_bleNearbyInfoAdvertiserUpdateAddHotspotInfo:(id)arg1;	// IMP=0x001000000017a783
- (void)_bleNearbyInfoAdvertiserUpdateAddAudioRoutingScore:(id)arg1;	// IMP=0x001000000017a45e
- (_Bool)_bleNearbyInfoAdvertiserShouldAddField3;	// IMP=0x001000000017a3f1
- (void)_bleNearbyInfoAdvertiserUpdateAdvertiseReason:(id)arg1;	// IMP=0x001000000017a39f
- (void)_bleNearbyInfoAdvertiserUpdate;	// IMP=0x0010000000179828
- (_Bool)_bleNearbyInfoAdvertiserShouldAdvertise;	// IMP=0x001000000017911a
- (void)_bleNearbyInfoAdvertiserEnsureStopped;	// IMP=0x0010000000179023
- (void)_bleNearbyInfoAdvertiserEnsureStarted;	// IMP=0x0010000000178f01
- (_Bool)_bleNearbyActionScannerShouldScan;	// IMP=0x0010000000178c95
- (void)_bleNearbyActionScannerEnsureStopped;	// IMP=0x0010000000178a40
- (void)_bleNearbyActionScannerEnsureStarted;	// IMP=0x0010000000178492
- (_Bool)_bleNearbyActionAdvertiserShouldAdvertise;	// IMP=0x0010000000178461
- (void)_bleNearbyActionAdvertiserEnsureStopped;	// IMP=0x001000000017839d
- (void)_bleNearbyActionAdvertiserEnsureStarted;	// IMP=0x0010000000176efe
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000176e1d
- (void)_activityMonitorWatchWristStateChanged:(id)arg1;	// IMP=0x0010000000176d1f
- (void)_activityMonitorMediaAccessControlSettingChanged:(id)arg1;	// IMP=0x0010000000176c35
- (void)_activityMonitorUpdateUserActive:(_Bool)arg1;	// IMP=0x0010000000176bfc
- (void)_activityMonitorUILockStatusChanged:(id)arg1;	// IMP=0x0010000000176ae6
- (void)_activityMonitorScreenStateChanged:(id)arg1;	// IMP=0x0010000000176a2f
- (void)_activityMonitorMultipleUsersLoggedInChanged:(id)arg1;	// IMP=0x0010000000176931
- (double)_activityMonitorLastUserEventDelta;	// IMP=0x0010000000176907
- (void)_activityMonitorCarPlayStatusChanged:(id)arg1;	// IMP=0x0010000000176809
- (unsigned char)_activityMonitorCurrentLevelAndNeedsPoll:(_Bool *)arg1 recentUserActivity:(_Bool *)arg2;	// IMP=0x001000000017654c
- (void)_activityMonitorUpdate;	// IMP=0x00100000001763bf
- (void)_activityMonitorEnsureStopped;	// IMP=0x001000000017627c
- (void)_activityMonitorEnsureStarted;	// IMP=0x001000000017617d
- (id)_useCasesToHexString:(id)arg1;	// IMP=0x0010000000175fdf
- (void)_update;	// IMP=0x0010000000175d2e
- (void)update;	// IMP=0x0010000000175cca
- (void)prefsChanged;	// IMP=0x00100000001749c1
- (void)_handleAppleIDChanged:(id)arg1;	// IMP=0x00100000001748da
- (void)_handleAirDropDiscoverableModeChanged:(id)arg1;	// IMP=0x001000000017480f
- (void)_invalidate;	// IMP=0x001000000017422b
- (void)invalidate;	// IMP=0x00100000001741c7
- (void)_activate;	// IMP=0x0010000000173603
- (void)activate;	// IMP=0x0010000000173597
- (void)prefillDefaultsForGenuineCheckIfNecessary;	// IMP=0x0010000000172a1a
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0010000000170ecc
- (id)sharedNearbyPipe;	// IMP=0x0010000000170df7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

