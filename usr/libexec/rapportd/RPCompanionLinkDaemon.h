//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBAdvertiser, CUBLEServer, CUBluetoothScalablePipe, CUBonjourAdvertiser, CUBonjourBrowser, CUHomeKitManager, CUNetLinkManager, CUSleepWakeMonitor, CUSystemMonitor, CUTCPServer, CUWiFiManager, MISSING_TYPE, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUserDefaults, NSXPCInterface, NSXPCListener, RPAppleTVDeviceInfoManager, RPCompanionLinkDevice, RPConnection, RPHIDDaemon, RPHomeKitManager, RPMediaControlDaemon, RPNearFieldDaemon, RPNearbyActionV2Advertiser, RPNearbyActionV2Discovery, RPNearbyInfoV2Discovery, RPSiriDaemon, RPTextInputDaemon, SFClient, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface RPCompanionLinkDaemon : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableDictionary *_activeDevices;	// 16 = 0x10
    int _airplayBuddyNotReachableState;	// 24 = 0x18
    int _airplayLeaderState;	// 28 = 0x1c
    NSUserDefaults *_airplayPrefs;	// 32 = 0x20
    NSMutableDictionary *_bleDevices;	// 40 = 0x28
    NSMutableDictionary *_nearbyInfoV2Devices;	// 48 = 0x30
    SFDeviceDiscovery *_bleActionDiscovery;	// 56 = 0x38
    unsigned int _bleActionDiscoveryID;	// 64 = 0x40
    NSMutableDictionary *_bleClientConnections;	// 72 = 0x48
    SFDeviceDiscovery *_bleDiscovery;	// 80 = 0x50
    unsigned long long _bleDiscoveryControlFlags;	// 88 = 0x58
    _Bool _bleDiscoveryForce;	// 96 = 0x60
    unsigned int _bleDiscoveryID;	// 100 = 0x64
    _Bool _bleDiscoveryScreenOff;	// 104 = 0x68
    long long _bleDiscoveryScreenOffRescanInterval;	// 112 = 0x70
    unsigned int _bleDiscoveryScreenOffScanRate;	// 120 = 0x78
    RPNearbyActionV2Advertiser *_bleNearbyActionV2Advertiser;	// 128 = 0x80
    RPNearbyActionV2Discovery *_bleNearbyActionV2Discovery;	// 136 = 0x88
    RPCompanionLinkDevice *_bleNearbyActionV2Device;	// 144 = 0x90
    RPNearbyInfoV2Discovery *_bleNearbyInfoV2Discovery;	// 152 = 0x98
    SFService *_bleNeedsCLinkAdvertiser;	// 160 = 0xa0
    NSMutableDictionary *_bleNeedsCLinkDevices;	// 168 = 0xa8
    SFDeviceDiscovery *_bleNeedsCLinkScanner;	// 176 = 0xb0
    unsigned int _bleNeedsCLinkScannerID;	// 184 = 0xb8
    _Bool _bleNeedsCLinkAdvertiserScreenOff;	// 188 = 0xbc
    _Bool _bleProximityDetection;	// 189 = 0xbd
    long long _bleRSSIThreshold;	// 192 = 0xc0
    CUBLEServer *_bleServer;	// 200 = 0xc8
    NSMutableSet *_bleServerConnections;	// 208 = 0xd0
    CUBonjourAdvertiser *_bonjourAdvertiser;	// 216 = 0xd8
    CUBonjourAdvertiser *_bonjourAWDLAdvertiser;	// 224 = 0xe0
    _Bool _bonjourAWDLAdvertiserForce;	// 232 = 0xe8
    NSMutableDictionary *_bonjourAWDLDevices;	// 240 = 0xf0
    CUBonjourBrowser *_bonjourBrowser;	// 248 = 0xf8
    CUBonjourBrowser *_bonjourBrowserAWDL;	// 256 = 0x100
    _Bool _bonjourBrowserAWDLForce;	// 264 = 0x108
    unsigned long long _bonjourReevaluateNextTicks;	// 272 = 0x110
    NSObject<OS_dispatch_source> *_bonjourReevaluateTimer;	// 280 = 0x118
    NSData *_btAdvAddrData;	// 288 = 0x120
    NSString *_btAdvAddrStr;	// 296 = 0x128
    CUSystemMonitor *_btAdvAddrMonitor;	// 304 = 0x130
    MISSING_TYPE *_prefBTPipeEnabled;	// 312 = 0x138
    CUBluetoothScalablePipe *_btPipe;	// 320 = 0x140
    RPConnection *_btPipeConnection;	// 328 = 0x148
    CUBluetoothScalablePipe *_btPipeHighPriority;	// 336 = 0x150
    long long _clientWiFiAssertionsCount;	// 344 = 0x158
    unsigned int _cnxIDLast;	// 352 = 0x160
    int _coreDeviceChangedNotifier;	// 356 = 0x164
    NSString *_deviceAuthTagStr;	// 360 = 0x168
    NSData *_deviceAWDLRandomID;	// 368 = 0x170
    NSSet *_screenOffDeviceFilter;	// 376 = 0x178
    _Bool _discoverPairedDevices;	// 384 = 0x180
    NSData *_discoveryNonceData;	// 392 = 0x188
    SFClient *_duetSyncClient;	// 400 = 0x190
    _Bool _disabled;	// 408 = 0x198
    _Bool _inDiscoverySession;	// 409 = 0x199
    NSMutableDictionary *_interestEvents;	// 416 = 0x1a0
    NSMutableDictionary *_interestPeers;	// 424 = 0x1a8
    _Bool _invalidateCalled;	// 432 = 0x1b0
    _Bool _invalidateDone;	// 433 = 0x1b1
    _Bool _fixedSoundBoardNameIssue;	// 434 = 0x1b2
    NSMutableDictionary *_homeHubDevices;	// 440 = 0x1b8
    NSData *_homeKitAuthTag;	// 448 = 0x1c0
    _Bool _homeKitForceGetIdentity;	// 456 = 0x1c8
    _Bool _homeKitGettingIdentity;	// 457 = 0x1c9
    NSData *_homeKitIRK;	// 464 = 0x1d0
    NSData *_homeKitLTPK;	// 472 = 0x1d8
    CUHomeKitManager *_homeKitManager;	// 480 = 0x1e0
    NSData *_homeKitRotatingID;	// 488 = 0x1e8
    _Bool _homeKitWaiting;	// 496 = 0x1f0
    int _lastSentActivityLevelOverWiFi;	// 500 = 0x1f4
    NSMutableDictionary *_loopbackRequests;	// 504 = 0x1f8
    unsigned int _loopbackXid;	// 512 = 0x200
    CUNetLinkManager *_netLinkManager;	// 520 = 0x208
    _Bool _mediaAccessControlKVO;	// 528 = 0x210
    _Bool _mediaRemoteIDGetting;	// 529 = 0x211
    _Bool _mediaRouteIDGetting;	// 530 = 0x212
    _Bool _miscStarted;	// 531 = 0x213
    NSMutableSet *_needsAWDLNewPeers;	// 536 = 0x218
    NSMutableSet *_needsAWDLRequestIdentifiers;	// 544 = 0x220
    NSMutableSet *_needsAWDLSentToPeers;	// 552 = 0x228
    NSObject<OS_dispatch_source> *_needsAWDLRequestTimer;	// 560 = 0x230
    _Bool _needsAWDLTransaction;	// 568 = 0x238
    _Bool _needsPrimaryAppleIDUpdate;	// 569 = 0x239
    NSObject<OS_os_transaction> *_osTransaction;	// 576 = 0x240
    NSMutableDictionary *_pairedDevices;	// 584 = 0x248
    NSObject<OS_dispatch_source> *_pendingLostBLEDevicesTimer;	// 592 = 0x250
    NSObject<OS_dispatch_source> *_pendingLostNeedsCLinkDevicesTimer;	// 600 = 0x258
    RPConnection *_personalCnx;	// 608 = 0x260
    _Bool _receiveHomeKitPairingUpdated;	// 616 = 0x268
    NSMutableDictionary *_registeredEvents;	// 624 = 0x270
    NSMutableSet *_registeredProfileIDs;	// 632 = 0x278
    NSMutableDictionary *_registeredRequests;	// 640 = 0x280
    RPHomeKitManager *_rpHomeKitManager;	// 648 = 0x288
    NSString *_serviceType;	// 656 = 0x290
    unsigned int _sessionIDLast;	// 664 = 0x298
    _Bool _serverBonjourInfraPairing;	// 668 = 0x29c
    CUSleepWakeMonitor *_sleepWakeMonitor;	// 672 = 0x2a0
    NSUserDefaults *_soundBoardPrefs;	// 680 = 0x2a8
    _Bool _soundBoardUserLeader;	// 688 = 0x2b0
    _Bool _soundBoardUserLeaderKVO;	// 689 = 0x2b1
    unsigned long long _startTicks;	// 696 = 0x2b8
    unsigned long long _startTicksFull;	// 704 = 0x2c0
    RPConnection *_stereoCnx;	// 712 = 0x2c8
    CUSystemMonitor *_systemMonitor;	// 720 = 0x2d0
    CBAdvertiser *_cbAdvertiser;	// 728 = 0x2d8
    NSMutableDictionary *_tcpClientConnections;	// 736 = 0x2e0
    NSMutableDictionary *_tcpOnDemandClientConnections;	// 744 = 0x2e8
    NSMutableSet *_tcpServerConnections;	// 752 = 0x2f0
    CUTCPServer *_tcpServer;	// 760 = 0x2f8
    NSMutableDictionary *_unauthDevices;	// 768 = 0x300
    NSData *_uniqueIDData;	// 776 = 0x308
    NSString *_uniqueIDStr;	// 784 = 0x310
    CUWiFiManager *_wifiManager;	// 792 = 0x318
    unsigned int _xidLast;	// 800 = 0x320
    NSMutableSet *_xpcConnections;	// 808 = 0x328
    NSXPCInterface *_xpcClientInterface;	// 816 = 0x330
    NSXPCInterface *_xpcServerInterface;	// 824 = 0x338
    NSXPCListener *_xpcListener;	// 832 = 0x340
    unsigned int _xpcLastID;	// 840 = 0x348
    NSMutableDictionary *_xpcMatchingMap;	// 848 = 0x350
    _Bool _prefSendActLvlInfra;	// 856 = 0x358
    _Bool _prefApplyNoiWiFiToUSB;	// 857 = 0x359
    _Bool _prefAppSignIn;	// 858 = 0x35a
    _Bool _prefBLEClient;	// 859 = 0x35b
    _Bool _prefClientEnabled;	// 860 = 0x35c
    _Bool _prefCommunal;	// 861 = 0x35d
    _Bool _prefCoreDeviceEnabled;	// 862 = 0x35e
    _Bool _prefCoreDevicePaired;	// 863 = 0x35f
    _Bool _prefHomeKitConfigured;	// 864 = 0x360
    _Bool _prefHomeKitEnabled;	// 865 = 0x361
    _Bool _prefIgnoreCompanionLinkChecks;	// 866 = 0x362
    _Bool _prefIPEnabled;	// 867 = 0x363
    unsigned int _prefMaxConnectionCount;	// 868 = 0x364
    _Bool _prefServerBonjourAlways;	// 872 = 0x368
    _Bool _prefServerBonjourOpportunitistic;	// 873 = 0x369
    _Bool _prefServerEnabled;	// 874 = 0x36a
    _Bool _prefServerShouldRun;	// 875 = 0x36b
    _Bool _prefUseTargetAuthTag;	// 876 = 0x36c
    RPHIDDaemon *_hidDaemon;	// 880 = 0x370
    _Bool _prefHIDEnabled;	// 888 = 0x378
    RPMediaControlDaemon *_mediaControlDaemon;	// 896 = 0x380
    _Bool _prefMediaControlEnabled;	// 904 = 0x388
    RPSiriDaemon *_siriDaemon;	// 912 = 0x390
    _Bool _prefSiriEnabled;	// 920 = 0x398
    RPTextInputDaemon *_textInputDaemon;	// 928 = 0x3a0
    _Bool _prefTextInputEnabled;	// 936 = 0x3a8
    _Bool _prefTouchEnabled;	// 937 = 0x3a9
    RPAppleTVDeviceInfoManager *_tvDeviceInfoManager;	// 944 = 0x3b0
    RPNearFieldDaemon *_nearfieldDaemon;	// 952 = 0x3b8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 960 = 0x3c0
    RPCompanionLinkDevice *_localDeviceInfo;	// 968 = 0x3c8
    NSMutableSet *_activeServers;	// 976 = 0x3d0
    NSMutableDictionary *_activeSessions;	// 984 = 0x3d8
    NSDictionary *_destinationIdentifierModelMap;	// 992 = 0x3e0
    NSDictionary *_destinationIdentifierRelMap;	// 1000 = 0x3e8
}

+ (id)sharedCompanionLinkDaemon;	// IMP=0x002000000000aca9
- (void).cxx_destruct;	// IMP=0x002000000003ec10
@property(readonly, nonatomic) NSDictionary *destinationIdentifierRelMap; // @synthesize destinationIdentifierRelMap=_destinationIdentifierRelMap;
@property(readonly, nonatomic) NSDictionary *destinationIdentifierModelMap; // @synthesize destinationIdentifierModelMap=_destinationIdentifierModelMap;
@property(retain, nonatomic) NSMutableDictionary *activeSessions; // @synthesize activeSessions=_activeSessions;
@property(retain, nonatomic) NSMutableSet *activeServers; // @synthesize activeServers=_activeServers;
@property(readonly, nonatomic) RPCompanionLinkDevice *localDeviceInfo; // @synthesize localDeviceInfo=_localDeviceInfo;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void)setDispatchQueue:(id)arg1;	// IMP=0x001000000003eb72
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x001000000003eaf3
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000003e543
- (void)_handleContextCollectorRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003e1eb
- (long long)_sessionsActiveOnConnection:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x001000000003df28
- (void)_sessionHandlePeerDisconnect:(id)arg1;	// IMP=0x001000000003db29
- (void)_sessionHandleStopRequest:(id)arg1 options:(id)arg2 cnx:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003d586
- (void)_sessionHandleStartRequest:(id)arg1 options:(id)arg2 cnx:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003c880
- (void)sessionStopSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003c407
- (void)sessionStartSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003bcb7
- (id)_checkForProxyOrLocalDestinations:(id)arg1 eventID:(id)arg2 event:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000003baa0
- (void)_proxyDevice:(id)arg1 loopbackRequestID:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000003aff8
- (void)_createRequestEntryForXid:(id)arg1 requestID:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003ac9a
- (void)_existingProxyDeviceUpdated:(id)arg1 event:(id)arg2 isLocal:(_Bool)arg3;	// IMP=0x001000000003a6f2
- (id)homeHubDeviceForLaunchInstanceID:(id)arg1;	// IMP=0x001000000003a51b
- (void)_proxyLocalDeviceUpdateOnConnection:(id)arg1 launchInstanceID:(id)arg2;	// IMP=0x001000000003a36d
- (void)_sendProxyDeviceUpdateToPeer:(id)arg1;	// IMP=0x001000000003a017
- (id)_addProxyIdentifier:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0010000000039f5d
- (_Bool)_destinationID:(id)arg1 matchesProxyDeviceOnCnx:(id)arg2;	// IMP=0x0010000000039da9
- (_Bool)_proxyDevice:(id)arg1 isEqualTo:(id)arg2;	// IMP=0x0010000000039c9f
- (_Bool)_proxyDevice:(id)arg1 receivedRequestID:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5 cnx:(id)arg6;	// IMP=0x00100000000398ba
- (void)_proxyDeviceRemove:(id)arg1 options:(id)arg2 cnx:(id)arg3;	// IMP=0x00100000000394e2
- (void)_proxyDeviceAdd:(id)arg1 options:(id)arg2 eventID:(id)arg3 deviceInfo:(id)arg4 cnx:(id)arg5;	// IMP=0x0010000000039219
- (void)_proxyDeviceListUpdated:(id)arg1 content:(id)arg2 options:(id)arg3 cnx:(id)arg4;	// IMP=0x0010000000038b87
- (_Bool)_allowStreamRequest:(id)arg1 xpcCnx:(id)arg2 rpCnx:(id)arg3;	// IMP=0x001000000003872c
- (_Bool)_allowMessageForRegistrationOptions:(id)arg1 cnx:(id)arg2;	// IMP=0x001000000003868b
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 unauth:(_Bool)arg5 cnx:(id)arg6;	// IMP=0x00100000000381b0
- (_Bool)_receivedRequestID:(id)arg1 onXPCCnx:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5 unauth:(_Bool)arg6 rpCnx:(id)arg7;	// IMP=0x0010000000038018
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 xpcID:(unsigned int)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000037c2b
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000037c0a
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000037bdd
- (void)deregisterRequestID:(id)arg1;	// IMP=0x0010000000037b56
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037984
- (void)_registerConnectionRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000377b2
- (void)_deliverEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(_Bool)arg4 cnx:(id)arg5 outError:(id *)arg6;	// IMP=0x00100000000372ab
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(_Bool)arg4 cnx:(id)arg5;	// IMP=0x001000000003701c
- (void)_receivedEventID:(id)arg1 onXPCCnx:(id)arg2 event:(id)arg3 options:(id)arg4 unauth:(_Bool)arg5 rpCnx:(id)arg6;	// IMP=0x0010000000036e7d
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000036311
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000362e2
- (void)deregisterEventID:(id)arg1;	// IMP=0x001000000003625b
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000036089
- (void)_updatePersonalRequestsStateForHomeHubDevices;	// IMP=0x0010000000036083
- (void)_updateRoomInfoForHomeHubDevice:(id)arg1 roomName:(id)arg2;	// IMP=0x001000000003607d
- (void)_updateHomeHubDevices:(id)arg1;	// IMP=0x0010000000035b72
- (void)_homeHubDeviceRemoved:(id)arg1;	// IMP=0x0010000000035912
- (void)_homeHubDeviceAdded:(id)arg1;	// IMP=0x0010000000035485
- (id)_eventForHomeHubDevice:(id)arg1;	// IMP=0x00100000000351e1
- (id)_filterHomeKitUserIdentifiers:(id)arg1;	// IMP=0x00100000000351c8
- (void)_homeKitUpdateUserIdentifiers;	// IMP=0x0010000000034f43
- (void)_homeKitUpdateInfo:(_Bool)arg1;	// IMP=0x00100000000349e8
- (void)_homeKitSelfAccessoryUpdated;	// IMP=0x001000000003443f
- (void)_homeKitSelfAccessoryMediaSystemUpdated:(int)arg1;	// IMP=0x00100000000338ad
- (void)_homeKitSelfAccessoryMediaAccessUpdated;	// IMP=0x00100000000335a5
- (void)_homeKitIdentityUpdated:(id)arg1 error:(id)arg2;	// IMP=0x001000000003310b
- (void)_homeKitGetUserInfo:(id)arg1;	// IMP=0x0010000000032fac
- (id)_homeKitDecryptRotatingIDForBonjourDevice:(id)arg1;	// IMP=0x0010000000032dc0
- (_Bool)_homeKitAuthMatchForBonjourDevice:(id)arg1;	// IMP=0x0010000000032c75
- (void)_homeKitGetPairingIdentities;	// IMP=0x0010000000032b70
- (void)_homeKitPairingUpdated:(id)arg1;	// IMP=0x0010000000032aa9
- (void)_homeKitEnsureStopped;	// IMP=0x0010000000032942
- (void)_homeKitEnsureStarted;	// IMP=0x001000000003237f
- (void)_textInputEnsureStopped;	// IMP=0x00100000000322eb
- (void)_textInputEnsureStarted;	// IMP=0x00100000000321bc
- (void)_stereoDeviceUpdate:(int)arg1;	// IMP=0x001000000003147f
- (void)_siriEnsureStopped;	// IMP=0x00100000000313eb
- (void)_siriEnsureStarted;	// IMP=0x00100000000312bc
- (void)_reachabilityEnsureStopped;	// IMP=0x001000000003122f
- (void)_reachabilityEnsureStarted;	// IMP=0x0010000000031160
- (void)_personalDeviceUpdate;	// IMP=0x0010000000030e62
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000030c19
- (unsigned long long)_nearbyActionDeviceActionTypes;	// IMP=0x0010000000030c0e
- (void)_miscHandleSpeakRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030a31
- (void)_miscHandleLaunchAppRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003062e
- (void)_miscEnsureStopped;	// IMP=0x001000000003054f
- (void)_miscEnsureStarted;	// IMP=0x00100000000302c6
- (void)_mediaRouteIDGet;	// IMP=0x001000000002ff8d
- (void)_mediaRemoteIDGet;	// IMP=0x001000000002fc65
- (void)_mediaControlEnsureStopped;	// IMP=0x001000000002fbd1
- (void)_mediaControlEnsureStarted;	// IMP=0x001000000002fa44
- (int)_localMediaAccessControlSetting;	// IMP=0x001000000002f9b4
- (void)_localDeviceCleanup;	// IMP=0x001000000002f8d5
- (void)_localDeviceUpdate;	// IMP=0x001000000002d6a9
- (void)_interestSendEventID:(id)arg1 event:(id)arg2;	// IMP=0x001000000002d505
- (void)_interestRemoveForCnx:(id)arg1;	// IMP=0x001000000002d196
- (void)_interestReceived:(id)arg1 cnx:(id)arg2;	// IMP=0x001000000002caad
- (void)interestDeregisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x001000000002c878
- (void)interestRegisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x001000000002c5e7
- (void)_hidEnsureStopped;	// IMP=0x001000000002c553
- (void)_hidEnsureStarted;	// IMP=0x001000000002c424
- (_Bool)_haveActiveServerConnectionsOnAWDL;	// IMP=0x001000000002c2e5
- (_Bool)_haveActiveClientConnectionsOnAWDL;	// IMP=0x001000000002c159
- (id)_getAppleID;	// IMP=0x001000000002c119
- (void)_forEachUniqueMatchingDestinationID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002be41
- (void)_forEachMatchingDestinationID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bcee
- (void)_forEachConnectionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002b788
- (id)findUnauthDeviceForIdentifier:(id)arg1;	// IMP=0x001000000002b591
- (id)_findDeviceWithDevice:(id)arg1 deviceMap:(id)arg2 matchedIdentifier:(id *)arg3;	// IMP=0x001000000002b432
- (id)_findMatchingAWDLBonjourDevice:(id)arg1;	// IMP=0x001000000002b2eb
- (id)_findWiFiConnectionByID:(id)arg1;	// IMP=0x001000000002b0fc
- (id)findConnectedDeviceForIdentifier:(id)arg1 controlFlags:(unsigned long long)arg2 cnx:(id *)arg3;	// IMP=0x001000000002ab29
- (void)_duetSyncEnsureStopped;	// IMP=0x001000000002aa95
- (void)_duetSyncEnsureStarted;	// IMP=0x001000000002a9d5
- (id)_discoveryNonceOrRotate:(_Bool)arg1;	// IMP=0x000000000002a932
- (void)_disconnectUnpairedDevices;	// IMP=0x001000000002a5d5
- (void)_disconnectUnauthConnections;	// IMP=0x001000000002a428
- (void)_disconnectRemovedSharedHomeDevices;	// IMP=0x001000000002a0cb
- (_Bool)_destinationID:(id)arg1 matchesCnx:(id)arg2;	// IMP=0x0010000000029b52
- (void)_connectionStateChanged:(int)arg1 cnx:(id)arg2;	// IMP=0x001000000002970b
- (id)_findExistingActiveDevice:(id)arg1;	// IMP=0x001000000002958d
- (unsigned char)_controlFlagsToNearbyActionType:(unsigned long long)arg1;	// IMP=0x0010000000029578
- (void)_connectionConfigureCommon:(id)arg1;	// IMP=0x001000000002906a
- (int)_airPlayLeaderStateUncached;	// IMP=0x0010000000028d61
- (void)_activeDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x0010000000028bf9
- (void)_activeDeviceChangedForConnection:(id)arg1 bonjourDevice:(id)arg2;	// IMP=0x001000000002896a
- (void)_activeDeviceRemoved:(id)arg1 cnx:(id)arg2;	// IMP=0x001000000002852a
- (void)_activeDeviceAdded:(id)arg1 cnx:(id)arg2;	// IMP=0x0010000000028188
- (void)_btPipeSyncKeysIfNeeded;	// IMP=0x0010000000027f43
- (void)_btPipeConnectionEnded:(id)arg1;	// IMP=0x0010000000027ef8
- (void)_btPipeConnectionStart;	// IMP=0x00100000000278e8
- (void)_btPipeHandleStateChanged:(id)arg1;	// IMP=0x0010000000027717
- (void)_btPipeEnsureStopped;	// IMP=0x0010000000027699
- (void)_btPipeTearDown:(id)arg1;	// IMP=0x00100000000275ba
- (void)_btPipeEnsureStarted;	// IMP=0x00100000000271a9
- (void)_btPipeSetup:(id)arg1 withPriority:(int)arg2;	// IMP=0x0010000000026f7e
- (void)_bleServerHandleConnectionEnded:(id)arg1;	// IMP=0x0010000000026f08
- (void)_bleServerHandleConnectionStarted:(id)arg1;	// IMP=0x0010000000026907
- (void)_bleServerEnsureStopped;	// IMP=0x0010000000026733
- (void)_bleServerEnsureStarted;	// IMP=0x00100000000264a5
- (_Bool)_serverTCPHasActiveConnections;	// IMP=0x001000000002646e
- (void)_serverTCPRemoveConnectionsWithIdentifier:(id)arg1 exceptConnection:(id)arg2;	// IMP=0x0010000000026111
- (void)_serverTCPHandleConnectionEnded:(id)arg1;	// IMP=0x0010000000025e71
- (void)_configureConnectionForPairing:(id)arg1;	// IMP=0x0010000000025b2b
- (id)_serverTCPHandleConnectionStarted:(id)arg1;	// IMP=0x00100000000253f2
- (void)_serverTCPEnsureStopped;	// IMP=0x001000000002521a
- (void)_serverTCPEnsureStarted;	// IMP=0x0010000000024fa8
- (_Bool)_serverShouldAdvertiseIdentifiableInfoWhenUnpairedForAirPlayWithLinkType:(int)arg1;	// IMP=0x0010000000024dea
- (void)_serverBTAddressChanged;	// IMP=0x0010000000024c5f
- (void)_serverBTAddressMonitorEnsureStopped;	// IMP=0x0010000000024bcb
- (void)_serverBTAddressMonitorEnsureStarted;	// IMP=0x0010000000024a75
- (void)_clientSendActivityLevelOverWiFiIfNecessary;	// IMP=0x001000000002459b
- (_Bool)_shouldReceiveActivityLevelOverWiFi:(long long)arg1;	// IMP=0x001000000002458e
- (_Bool)_shouldSendActivityLevelOverWiFi;	// IMP=0x00100000000244f3
- (void)_serverReceivedNeedsAWDLEvent:(id)arg1 event:(id)arg2;	// IMP=0x00100000000240d1
- (void)_serverBonjourAWDLAdvertiserUpdateTXT;	// IMP=0x0010000000023d8f
- (void)_serverBonjourAWDLAdvertiserEnsureStopped;	// IMP=0x0010000000023caa
- (void)_serverBonjourAWDLAdvertiserEnsureStarted;	// IMP=0x00100000000239e9
- (_Bool)_serverBonjourAWDLAdvertiserShouldRun;	// IMP=0x0010000000022faf
- (void)_serverBonjourUpdateTXT;	// IMP=0x0010000000022a38
- (id)_serverBonjourTempAuthTagStringWithData:(id)arg1;	// IMP=0x00100000000228ed
- (id)_serverBonjourAuthTagStringWithData:(id)arg1;	// IMP=0x00100000000227a2
- (id)_serverBonjourAuthTagString;	// IMP=0x00100000000226e6
- (void)_serverBonjourEnsureStopped;	// IMP=0x0010000000022652
- (void)_serverBonjourEnsureStarted;	// IMP=0x001000000002242a
- (_Bool)_serverBonjourAWDLShouldRun;	// IMP=0x001000000002238a
- (_Bool)_serverBonjourShouldRun;	// IMP=0x0010000000022329
- (void)_processPendingLostNeedsCLinkDevices;	// IMP=0x00100000000220a4
- (void)_schedulePendingLostNeedsCLinkDeviceTimer;	// IMP=0x0010000000021f5c
- (void)_serverBLENeedsCLinkScannerDeviceLost:(id)arg1;	// IMP=0x0010000000021d46
- (void)_serverBLENeedsCLinkScannerDeviceFound:(id)arg1;	// IMP=0x001000000002174f
- (_Bool)_serverBLENeedsCLinkScannerScreenOff;	// IMP=0x00100000000216b5
- (void)_serverBLENeedsCLinkScannerEnsureStopped;	// IMP=0x00100000000215d5
- (void)_serverBLENeedsCLinkScannerEnsureStarted;	// IMP=0x00100000000211f1
- (void)_serverNearbyInfoV2DiscoveryEnsureStopped;	// IMP=0x0010000000020f49
- (void)_serverNearbyInfoV2DiscoveryEnsureStarted;	// IMP=0x0010000000020cc8
- (_Bool)_serverNearbyInfoV2DiscoveryShouldRun;	// IMP=0x0010000000020bf7
- (void)_serverNearbyActionV2DiscoveryEnsureStopped;	// IMP=0x0010000000020bb0
- (void)_serverNearbyActionV2DiscoveryEnsureStarted;	// IMP=0x0010000000020a44
- (_Bool)_serverNearbyActionV2DiscoveryShouldRun;	// IMP=0x00100000000209b4
- (void)_serverEnsureStopped;	// IMP=0x0010000000020952
- (void)_serverEnsureStarted;	// IMP=0x0010000000020837
- (_Bool)createDeviceToEndpointMappingForDeviceID:(id)arg1 endpointUUID:(id *)arg2 error:(id *)arg3;	// IMP=0x001000000002082f
- (_Bool)triggerEnhancedDiscoveryForReason:(id)arg1 useCase:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0010000000020785
- (void)_clientReportChangedDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x001000000002061d
- (void)_clientReportLostDevice:(id)arg1;	// IMP=0x00100000000204bc
- (void)_clientReportFoundDevice:(id)arg1;	// IMP=0x001000000001ff27
- (id)logDictionaryOfStringArrays:(id)arg1 withPrefix:(id)arg2;	// IMP=0x001000000001fb5c
- (void)_clientPurgeUnauthAWDLDevices;	// IMP=0x001000000001f896
- (void)_clientOnDemandAWDLDiscoveryStartForXPC:(id)arg1;	// IMP=0x001000000001f59f
- (void)_clientOnDemandDiscoveryStart:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x001000000001f17c
- (void)_clientConnectionEndedUnauth:(id)arg1 publicID:(id)arg2;	// IMP=0x001000000001f091
- (_Bool)_clientConnectionStartUnauth:(id)arg1 client:(id)arg2 publicID:(id)arg3 xpcCnx:(id)arg4 error:(id *)arg5;	// IMP=0x001000000001e432
- (void)_clientOnDemandConnectionEnded:(id)arg1 uniqueID:(id)arg2;	// IMP=0x001000000001e2b8
- (void)_clientConnectionEnded:(id)arg1 uniqueID:(id)arg2;	// IMP=0x001000000001e15b
- (id)_clientCreateConnection:(id)arg1 xpcCnx:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001caac
- (_Bool)_clientConnectionStartOnDemand:(id)arg1 xpcCnx:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001ca5f
- (void)_clientConnectionStart:(id)arg1 controlFlags:(unsigned long long)arg2 uniqueID:(id)arg3 identity:(id)arg4;	// IMP=0x001000000001c19f
- (void)_clientBonjourAWDLBrowserLostDevice:(id)arg1;	// IMP=0x001000000001bd4c
- (void)_clientBonjourAWDLBrowserFoundDevice:(id)arg1;	// IMP=0x001000000001aeb0
- (id)_clientShouldConnectOverBonjour:(id)arg1 device:(id)arg2 identities:(id)arg3;	// IMP=0x001000000001aab7
- (_Bool)_clientBonjourAWDLBrowserShouldRun;	// IMP=0x001000000001a8b4
- (void)_clientBonjourAWDLBrowserEnsureStopped;	// IMP=0x001000000001a7ec
- (void)_clientBonjourAWDLBrowserEnsureStarted;	// IMP=0x001000000001a593
- (void)_clientBonjourReevaluateUnauthDevices;	// IMP=0x001000000001a324
- (void)_clientBonjourReevaluateAllDevices;	// IMP=0x0010000000019f6d
- (_Bool)_clientBonjourCheckLostPairedDevice:(id)arg1 publicID:(id)arg2;	// IMP=0x0010000000019db6
- (void)_clientBonjourLostUnauthDevice:(id)arg1;	// IMP=0x0010000000019ace
- (_Bool)_clientBonjourCheckFoundPairedDevice:(id)arg1 publicID:(id)arg2;	// IMP=0x00100000000196f7
- (void)_clientBonjourFoundUnauthDevice:(id)arg1 isAWDLDevice:(_Bool)arg2;	// IMP=0x00100000000191b5
- (void)_clientBonjourLostDevice:(id)arg1;	// IMP=0x0010000000018e9d
- (_Bool)_clientBonjourFoundDevice:(id)arg1 reevaluate:(_Bool)arg2;	// IMP=0x00100000000180ea
- (void)_clientBonjourEnsureStopped;	// IMP=0x0010000000018015
- (void)_clientBonjourEnsureStarted;	// IMP=0x0010000000017d3e
- (void)_clientSendNeedsAWDLOverWiFi:(_Bool)arg1;	// IMP=0x001000000001778a
- (void)_clientBLENearbyActionV2AdvertiserEnsureStopped;	// IMP=0x00100000000176c9
- (void)_clientBLENearbyActionV2AdvertiserRestart;	// IMP=0x00100000000175fa
- (void)_clientBLENearbyActionV2AdvertiserUpdate;	// IMP=0x0010000000017476
- (void)_clientBLENearbyActionV2AdvertiserEnsureStarted;	// IMP=0x001000000001709f
- (_Bool)_clientBLENearbyActionV2AdvertiserShouldRun;	// IMP=0x0010000000016eac
- (id)_clientBLENeedsCLinkTargetAuthTag;	// IMP=0x00100000000168fa
- (_Bool)_clientBLENeedsCLinkAdvertiserShouldRun;	// IMP=0x001000000001662c
- (void)_clientBLENeedsCLinkAdvertiserEnsureStopped;	// IMP=0x0010000000016579
- (void)_clientBLENeedsCLinkAdvertiserEnsureStarted;	// IMP=0x001000000001627e
- (void)_clientBLEFamilyDeviceReportChanges;	// IMP=0x0010000000015e92
- (void)_serverNearbyInfoV2DeviceLost:(id)arg1 idsIdentifier:(id)arg2 force:(_Bool)arg3 deviceFlags:(unsigned char)arg4;	// IMP=0x0010000000015a36
- (void)_serverNearbyInfoV2DeviceFound:(id)arg1 deviceFlags:(unsigned char)arg2;	// IMP=0x00100000000152d5
- (_Bool)_clientShouldFindNonSameAccountDevices;	// IMP=0x00100000000151bb
- (void)_processPendingLostBLEDevices;	// IMP=0x0010000000014f38
- (void)_schedulePendingLostBLEDeviceTimer;	// IMP=0x0010000000014df0
- (void)_clientBLEDiscoveryDeviceLost:(id)arg1 force:(_Bool)arg2 deviceFlags:(unsigned char)arg3;	// IMP=0x0010000000014512
- (void)_clientBLEDiscoveryDeviceFound:(id)arg1 deviceFlags:(unsigned char)arg2;	// IMP=0x0010000000013998
- (_Bool)_clientBLETriggerEnhancedDiscovery:(id)arg1 useCase:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00100000000137f5
- (void)_clientBLEDiscoveryEnsureStopped;	// IMP=0x0010000000013563
- (void)_clientBLEDiscoveryEnsureStarted;	// IMP=0x0010000000012c4d
- (_Bool)_clientBLEActionDiscoveryShouldRun;	// IMP=0x0010000000012c42
- (void)_clientBLEActionDiscoveryEnsureStopped;	// IMP=0x00100000000129c0
- (void)_clientBLEActionDiscoveryEnsureStarted;	// IMP=0x0010000000012555
- (void)_clientEnsureStopped;	// IMP=0x001000000001246b
- (void)_clientEnsureStarted;	// IMP=0x001000000001232f
- (_Bool)isNearbyActionV2AdvertiserActive;	// IMP=0x0010000000012308
- (void)_updateForXPCServerChange;	// IMP=0x001000000001209e
- (void)_updateForXPCClientChange;	// IMP=0x00100000000113fa
- (void)_updateAssertions;	// IMP=0x00100000000110de
- (void)_update;	// IMP=0x00100000000107e8
- (void)_reportXPCMatchingDiscoveryCLink;	// IMP=0x00100000000103bd
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x0010000000010252
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000feef
- (void)prefsChanged;	// IMP=0x001000000000f187
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x001000000000ec26
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x001000000000e7c7
- (void)_invalidated;	// IMP=0x001000000000e62b
- (void)_invalidate;	// IMP=0x001000000000e1a2
- (void)invalidate;	// IMP=0x001000000000e13e
- (void)_activate;	// IMP=0x001000000000dd2c
- (void)activate;	// IMP=0x001000000000dcb8
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x001000000000b79d
- (id)findDeviceFromID:(id)arg1;	// IMP=0x001000000000b58f
- (id)findServerClientFromID:(id)arg1 senderIDS:(id)arg2;	// IMP=0x001000000000b0ce
- (void)_createDestinationIdentifierMaps;	// IMP=0x001000000000ada5
- (id)init;	// IMP=0x001000000000acfe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

