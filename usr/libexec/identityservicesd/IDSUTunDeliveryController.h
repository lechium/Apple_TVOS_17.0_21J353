//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSConnectivityMonitor, IDSNRDeviceBridge, IDSNRDevicePreferencesHandler, IDSPairingManager, IMTimer, NSDictionary, NSHashTable, NSMutableDictionary, NSSet, NSString;
@protocol IDSUTunDeliveryControllerDelegate, OS_dispatch_queue;

@interface IDSUTunDeliveryController : NSObject
{
    struct _opaque_pthread_mutex_t _deviceIDToPeerLock;	// 8 = 0x8
    NSMutableDictionary *_deviceIDToPeer;	// 72 = 0x48
    NSMutableDictionary *_btuuidToSessionID;	// 80 = 0x50
    struct _opaque_pthread_mutex_t _streamIDToTopicLock;	// 88 = 0x58
    NSMutableDictionary *_streamIDToTopic;	// 152 = 0x98
    unsigned int _messageID;	// 160 = 0xa0
    double _lastConnectedTime;	// 168 = 0xa8
    double _lastIsNearbyBecameTrue;	// 176 = 0xb0
    id <IDSUTunDeliveryControllerDelegate> _delegate;	// 184 = 0xb8
    _Bool _isLinkForDefaultPeerConnected;	// 192 = 0xc0
    NSHashTable *_connectivityDelegates;	// 200 = 0xc8
    struct _opaque_pthread_mutex_t _trafficClassLock;	// 208 = 0xd0
    NSSet *_allowedTrafficClasses;	// 272 = 0x110
    _Bool _enableOTR;	// 280 = 0x118
    IMTimer *_otrTimer;	// 288 = 0x120
    _Bool _otrInitialized;	// 296 = 0x128
    _Bool _localAccountSetupCompleted;	// 297 = 0x129
    _Bool _defaultPeerConnectedDeferred;	// 298 = 0x12a
    struct _opaque_pthread_mutex_t _continuityPeerLock;	// 304 = 0x130
    NSMutableDictionary *_lockedPeerMap;	// 368 = 0x170
    NSMutableDictionary *_peerListMap;	// 376 = 0x178
    NSMutableDictionary *_pendingPeerMap;	// 384 = 0x180
    NSMutableDictionary *_peerConnectBlocksMap;	// 392 = 0x188
    NSMutableDictionary *_peerFailureBlocksMap;	// 400 = 0x190
    double _lastCloudConnectedTime;	// 408 = 0x198
    NSObject<OS_dispatch_queue> *_broadcastQueue;	// 416 = 0x1a0
    _Bool _isConnected;	// 424 = 0x1a8
    _Bool _isCloudConnected;	// 425 = 0x1a9
    _Bool _isClassCConnected;	// 426 = 0x1aa
    _Bool _shouldUseIPsecLinkForDefaultPairedDevice;	// 427 = 0x1ab
    _Bool _isLocalSetUpInProgress;	// 428 = 0x1ac
    IDSNRDeviceBridge *_idsNRDeviceBridge;	// 432 = 0x1b0
    IDSNRDevicePreferencesHandler *_nrDevicePreferencesHandler;	// 440 = 0x1b8
    IDSConnectivityMonitor *_connectivityMonitor;	// 448 = 0x1c0
    double _notificationDelayInSeconds;	// 456 = 0x1c8
    IDSPairingManager *_pairingManager;	// 464 = 0x1d0
}

+ (id)sharedInstance;	// IMP=0x00200000001b8cdf
- (void).cxx_destruct;	// IMP=0x00200000001c700f
@property(retain, nonatomic) IDSPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(nonatomic) _Bool isLocalSetUpInProgress; // @synthesize isLocalSetUpInProgress=_isLocalSetUpInProgress;
@property(nonatomic) double notificationDelayInSeconds; // @synthesize notificationDelayInSeconds=_notificationDelayInSeconds;
@property(retain, nonatomic) IDSConnectivityMonitor *connectivityMonitor; // @synthesize connectivityMonitor=_connectivityMonitor;
@property(retain, nonatomic) IDSNRDevicePreferencesHandler *nrDevicePreferencesHandler; // @synthesize nrDevicePreferencesHandler=_nrDevicePreferencesHandler;
@property(retain, nonatomic) IDSNRDeviceBridge *idsNRDeviceBridge; // @synthesize idsNRDeviceBridge=_idsNRDeviceBridge;
@property(nonatomic) _Bool shouldUseIPsecLinkForDefaultPairedDevice; // @synthesize shouldUseIPsecLinkForDefaultPairedDevice=_shouldUseIPsecLinkForDefaultPairedDevice;
@property(nonatomic) double lastCloudConnectedTime; // @synthesize lastCloudConnectedTime=_lastCloudConnectedTime;
@property(nonatomic) _Bool isClassCConnected; // @synthesize isClassCConnected=_isClassCConnected;
@property(nonatomic) _Bool isCloudConnected; // @synthesize isCloudConnected=_isCloudConnected;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) _Bool enableOTR; // @synthesize enableOTR=_enableOTR;
@property(nonatomic) __weak id <IDSUTunDeliveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rapportClient:(id)arg1 didLoseDevice:(id)arg2;	// IMP=0x00100000001c6d32
- (void)rapportClient:(id)arg1 didDiscoverDevice:(id)arg2;	// IMP=0x00100000001c6b2e
- (void)enableOTRForDefaultPairedDevice;	// IMP=0x00100000001c696a
- (id)_currentOTRTimer;	// IMP=0x00100000001c6959
- (id)sessionIDforPeer:(id)arg1;	// IMP=0x00100000001c68e1
- (_Bool)isPeerForPhoneContinuityLocalMessage:(id)arg1;	// IMP=0x00100000001c6545
- (void)tryNextContinuityPeer:(id)arg1;	// IMP=0x00100000001c5aa8
- (void)addContinuityPeer:(id)arg1 btUUID:(id)arg2 connectBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c51ef
- (id)pendingContinuityPeerID:(id)arg1;	// IMP=0x00100000001c5182
- (id)lockedContinuityPeerID:(id)arg1;	// IMP=0x00100000001c5115
- (void)unlockAllContinuityPeers;	// IMP=0x00100000001c4fd5
- (void)unlockContinuityPeer:(id)arg1;	// IMP=0x00100000001c4e43
- (void)lockContinuityPeer:(id)arg1 btUUID:(id)arg2;	// IMP=0x00100000001c4b63
- (void)_cleanupContinuityPeerMaps:(id)arg1;	// IMP=0x00100000001c4967
- (void)admissionPolicyChangedForTopic:(id)arg1 allowed:(_Bool)arg2;	// IMP=0x00100000001c489a
- (void)findDefaultPeerToForceOTRNegotiation:(id)arg1 priority:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c47f2
- (void)didUpdatePairedDevice:(id)arg1;	// IMP=0x00100000001c45df
- (void)didRemovePairedDevice:(id)arg1;	// IMP=0x00100000001c4420
- (void)didAddPairedDevice:(id)arg1;	// IMP=0x00100000001c428f
- (void)_disableOTRForDefaultPairedPeer:(id)arg1;	// IMP=0x00100000001c4140
- (void)_enableOTRForDefaultPairedDevice;	// IMP=0x00100000001c3fc1
- (void)_OTREnableTimerFiredOnMain;	// IMP=0x00100000001c3f42
- (void)_setOTREnableTimer;	// IMP=0x00100000001c3dda
- (void)nrDeviceBridge:(id)arg1 defaultPeerClassCConnectivityDidChange:(_Bool)arg2;	// IMP=0x00100000001c3dc6
- (void)nrDeviceBridge:(id)arg1 linkType:(unsigned char)arg2;	// IMP=0x00100000001c3db2
- (void)nrDeviceBridge:(id)arg1 deviceMagnetIndicationOfAwakeStateDidChange:(_Bool)arg2;	// IMP=0x00100000001c3d9e
- (void);	// IMP=0x00100000001c3d8a
- (void)nrDeviceBridge:(id)arg1 defaultPeerNearbyDidChange:(_Bool)arg2;	// IMP=0x00100000001c39ab
- (void)nrDeviceBridge:(id)arg1 defaultPeerConnectivityDidChange:(_Bool)arg2;	// IMP=0x00100000001c3997
@property(readonly, nonatomic) _Bool isTerminusConnectedOverBluetooth;
@property(readonly, nonatomic) _Bool isTerminusRegistered;
@property(readonly, nonatomic) _Bool isTerminusNearby;
@property(readonly, nonatomic) _Bool isTerminusConnected;
- (void)_setCloudConnectionConnected:(_Bool)arg1 forPeer:(id)arg2;	// IMP=0x00100000001c3597
- (void)peerCloudConnectivityChanged:(id)arg1 isCloudConnected:(_Bool)arg2;	// IMP=0x00100000001c330c
- (void)defaultPeerDropDisallowedMessages;	// IMP=0x00100000001c31f4
- (void)defaultPeerUnpairStart;	// IMP=0x00100000001c30c9
- (void)defaultPeerSupportsDirectMessaging:(_Bool)arg1 isObliterating:(_Bool)arg2;	// IMP=0x00100000001c2ef9
- (void)defaultPeerSetWantsQuickRelayRequest:(_Bool)arg1;	// IMP=0x00100000001c2cd9
- (void)defaultPeerSetLinkPreferences:(id)arg1;	// IMP=0x00100000001c267e
- (void)defaultPeerSetPreferInfraWiFi:(_Bool)arg1 services:(id)arg2;	// IMP=0x00100000001c2385
- (void)defaultPeerClassCConnectivityDidChange:(_Bool)arg1;	// IMP=0x00100000001c220a
- (void)defaultPeerMagnetIndicationOfAwakeStateChanged:(_Bool)arg1;	// IMP=0x00100000001c20bd
- (void)legacyUTunBTLinkManagerDefaultPeerCloudConnectivityChanged:(_Bool)arg1;	// IMP=0x00100000001c1fbc
- (void)defaultPeerCloudConnectivityChanged:(_Bool)arg1;	// IMP=0x00100000001c1e37
- (void)legacyUTunBTLinkManagerDefaultPeerNearbyChanged:(_Bool)arg1;	// IMP=0x00100000001c1d36
- (void)defaultPeerLinkTypeChanged:(unsigned char)arg1;	// IMP=0x00100000001c1bb6
- (void)defaultPeerNearbyChanged:(_Bool)arg1;	// IMP=0x00100000001c19d2
- (void)legacyUTunBTLinkManagerDefaultPeerConnectivityChanged:(_Bool)arg1;	// IMP=0x00100000001c18d1
- (void)defaultPeerConnectivityChanged:(_Bool)arg1;	// IMP=0x00100000001c150f
- (void)peerHasSpaceForUrgentMessages:(id)arg1 dataProtectionClass:(unsigned int)arg2 withTypes:(id)arg3;	// IMP=0x00100000001c1295
- (void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x00100000001c0fd4
- (void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 withTypes:(id)arg4;	// IMP=0x00100000001c0cf8
- (void)peerCloudConnectivityChanged:(id)arg1;	// IMP=0x00100000001c08b0
- (void)peerConnectivityChanged:(id)arg1;	// IMP=0x00100000001c0023
- (void)peerNearbyStateChanged:(id)arg1 forceNotify:(_Bool)arg2;	// IMP=0x00100000001bf98d
- (void)peer:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5 priority:(long long)arg6 connectionType:(long long)arg7;	// IMP=0x00100000001bf806
- (void)peer:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x00100000001bf554
- (void)peer:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x00100000001bf33b
- (void)peer:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x00100000001bf122
- (id)_deviceIDForPeer:(id)arg1;	// IMP=0x00100000001bef6a
- (void)removeConnectivityDelegate:(id)arg1;	// IMP=0x00100000001bef4a
- (void)addConnectivityDelegate:(id)arg1;	// IMP=0x00100000001beecf
- (void)addUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2;	// IMP=0x00100000001beaa5
- (void)removeUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2 reason:(long long)arg3 shouldWait:(_Bool)arg4;	// IMP=0x00100000001be9eb
- (void)removeUTunPeerWithSessionID:(id)arg1 reason:(long long)arg2 shouldWait:(_Bool)arg3;	// IMP=0x00100000001be79f
- (void)systemScreenDidPowerDown;	// IMP=0x00100000001be60e
@property(retain, nonatomic) NSSet *allowedTrafficClasses; // @synthesize allowedTrafficClasses=_allowedTrafficClasses;
@property(readonly) NSDictionary *queuedIncomingMessageDictionary;
@property(readonly) NSDictionary *sendingMessageStatistics;
@property(readonly) NSDictionary *urgentCloudPriorityMessageStatistics;
@property(readonly) NSDictionary *urgentPriorityMessageStatistics;
@property(readonly) NSDictionary *defaultPriorityMessageStatistics;
@property(readonly) NSDictionary *syncPriorityMessageStatistics;
- (void)setTopics:(id)arg1;	// IMP=0x00100000001bded1
- (_Bool)hasSpaceForCloudMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2;	// IMP=0x00100000001bde36
- (_Bool)hasSpaceForMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2;	// IMP=0x00100000001bdd9b
- (void)enableCloudConnectionForDefaultPairedDevice:(_Bool)arg1;	// IMP=0x00100000001bdb63
- (void)enableConnectionForDefaultPairedDevice:(_Bool)arg1;	// IMP=0x00100000001bd929
- (void)localAccountSetupCompleted;	// IMP=0x00100000001bd6d3
@property(readonly, nonatomic) _Bool defaultPeerIsCloudConnected;
@property(readonly, nonatomic) _Bool defaultPeerIsNearby;
@property(readonly, nonatomic) _Bool defaultPeerIsConnected;
@property(readonly, nonatomic) _Bool isPresent;
- (id)topicForStreamID:(unsigned short)arg1;	// IMP=0x00100000001bd5a5
- (void)kickProgressBlockForMessageID:(id)arg1;	// IMP=0x00100000001bd42b
- (void)cancelMessageID:(id)arg1;	// IMP=0x00100000001bd1a7
- (void)sendData:(id)arg1 service:(id)arg2 protobuf:(id)arg3 resourcePath:(id)arg4 resourceMetadata:(id)arg5 priority:(long long)arg6 dataProtectionClass:(unsigned int)arg7 nonWaking:(_Bool)arg8 nonCloudWaking:(_Bool)arg9 requireBluetooth:(_Bool)arg10 requireLocalWiFi:(_Bool)arg11 queueOneIdentifier:(id)arg12 expirationDate:(id)arg13 enforceRemoteTimeouts:(_Bool)arg14 expectsPeerResponse:(_Bool)arg15 wantsAppAck:(_Bool)arg16 compressPayload:(_Bool)arg17 compressed:(_Bool)arg18 peerResponseIdentifier:(id)arg19 messageID:(id)arg20 topic:(id)arg21 awdTopic:(id)arg22 command:(id)arg23 fromID:(id)arg24 uriToDeviceID:(id)arg25 localDeviceDestinationDeviceUUID:(id)arg26 bypassDuet:(_Bool)arg27 duetIdentifiersOverride:(id)arg28 messageType:(long long)arg29 fallbackBlock:(CDUnknownBlockType)arg30 progressBlock:(CDUnknownBlockType)arg31 completionBlock:(CDUnknownBlockType)arg32;	// IMP=0x00100000001bb1b6
- (id)_createPeerFromDeviceInfo:(id)arg1;	// IMP=0x00100000001baaf5
- (id)_createPeerFromDeviceID:(id)arg1;	// IMP=0x00100000001baa85
- (void)_removePeerFromDeviceID:(id)arg1;	// IMP=0x00100000001baa31
- (void)setPendingCloudFlagOnDefaultPeer;	// IMP=0x00100000001ba9f7
- (void)ensureLocalSetupInProgressConsistencyAfterQWS;	// IMP=0x00100000001ba91d
- (void)updatecloudDeliveryStateOnDefaultPeer;	// IMP=0x00100000001ba7c4
- (void)prepareForQuickSwitch;	// IMP=0x00100000001ba67f
- (_Bool)localSetupInProgress;	// IMP=0x00100000001ba643
- (void)localSetupCompleted;	// IMP=0x00100000001ba519
- (void)localSetupStarted;	// IMP=0x00100000001ba3ee
- (void)_updateLocalSetupInProgressState:(_Bool)arg1;	// IMP=0x00100000001ba349
- (void)deviceWithUniqueID:(id)arg1 updatedUUID:(id)arg2;	// IMP=0x00100000001b9ec9
- (void)setDeviceUniqueIDToCBUUID:(id)arg1;	// IMP=0x00100000001b9d61
- (id)hashForString:(id)arg1;	// IMP=0x00100000001b9cba
- (id)_copyPairedDevice;	// IMP=0x00100000001b9c9e
- (id)_copyPeerWithID:(id)arg1;	// IMP=0x00100000001b9c3b
- (id)copyPeerWithID:(id)arg1;	// IMP=0x00100000001b9c29
- (unsigned int)_nextMessageID;	// IMP=0x00100000001b9c16
- (void)_refreshIPsecStatus;	// IMP=0x00100000001b9b85
- (void)_removeDevicePreferencesHandler;	// IMP=0x00100000001b9af8
- (void)stopIdsNRDeviceBridgeAndPreferenceHandler;	// IMP=0x00100000001b9ac8
- (void)startIdsNRDeviceBridgeAndPreferenceHandlerWithIdentifier:(id)arg1;	// IMP=0x00100000001b981b
- (id)_pairedDeviceUUID;	// IMP=0x00100000001b956c
- (void)dealloc;	// IMP=0x00100000001b9497
- (id)init;	// IMP=0x00100000001b9421
- (id)initWithBroadcastQueue:(id)arg1 pairingManager:(id)arg2;	// IMP=0x00100000001b8d34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

