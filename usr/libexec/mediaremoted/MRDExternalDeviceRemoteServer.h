//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUPairingManager, MRDAVRoutingDataSource, MRDNowPlayingStateObserver, MRDPinPairingDialog, MRDRemoteControlService, MRDSleepObserver, MRDSystemHIDEventManager, MRDTelevisionSiriService, MRDTextEditingService, NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface MRDExternalDeviceRemoteServer : NSObject
{
    NSMutableSet *_connectedClients;	// 8 = 0x8
    NSMutableSet *_tvEndpoints;	// 16 = 0x10
    NSMutableSet *_activeReconSessions;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    _Bool _serverIsRunning;	// 40 = 0x28
    unsigned int _gameControllerInputMode;	// 44 = 0x2c
    _Bool _hiliteMode;	// 48 = 0x30
    MRDNowPlayingStateObserver *_stateObserver;	// 56 = 0x38
    MRDPinPairingDialog *_pinPairingDialog;	// 64 = 0x40
    MRDSystemHIDEventManager *_hidEventManager;	// 72 = 0x48
    MRDTelevisionSiriService *_siriService;	// 80 = 0x50
    MRDTextEditingService *_textEditingService;	// 88 = 0x58
    MRDSleepObserver *_sleepObserver;	// 96 = 0x60
    CUPairingManager *_pairingManager;	// 104 = 0x68
    double _transactionWaitDuration;	// 112 = 0x70
    NSMutableDictionary *_outputDeviceCallbackTokens;	// 120 = 0x78
    NSMutableDictionary *_discoverySessions;	// 128 = 0x80
    MRDAVRoutingDataSource *_routingDataSource;	// 136 = 0x88
    MRDRemoteControlService *_remoteControlService;	// 144 = 0x90
}

+ (unsigned long long)minimumSupportedHangdogApplicationVersion;	// IMP=0x00200000000a7c5f
+ (unsigned long long)minimumSupportedProtocolVersion;	// IMP=0x00100000000a7c54
- (void).cxx_destruct;	// IMP=0x00200000000bcb85
@property(readonly, nonatomic) MRDRemoteControlService *remoteControlService; // @synthesize remoteControlService=_remoteControlService;
@property(readonly, nonatomic) MRDAVRoutingDataSource *routingDataSource; // @synthesize routingDataSource=_routingDataSource;
- (void)_handleMuteVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000bc95c
- (void)_handleGetVolumeMutedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000bc76c
- (void)_handleAdjustVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000bc55c
- (void)_handleCreateHostedEndpointRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000bc2ec
- (void)_handleSetConversationDetectionEnabledMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000bc102
- (void)_handleSetListeningModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000bbf0f
- (void)_handleSetDiscoveryModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000bbaaa
- (void)_handleTriggerAudioFadeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000bb818
- (void)_handleUpdateActiveSystemEndpointMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000bb4e3
- (void)_handlePlaybackSessionMigrateEndMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000bb07b
- (void)_handlePlaybackSessionMigrateBeginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000bac40
- (void)_handlePlaybackSessionMigrateRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b9ed3
- (void)_handlePlaybackSessionRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b9c5a
- (void)_handleSetVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b9a49
- (void)_handleGetVolumeControlCapabilitiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b989b
- (void)_handleGetVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b96e7
- (void)_handleModifyOutputContextRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b7714
- (void)addAuthorizationCallbackForOutputDevice:(id)arg1 client:(id)arg2;	// IMP=0x00100000000b74ec
- (void)removeAuthorizationCallbackForOutputDevice:(id)arg1;	// IMP=0x00100000000b7499
- (void)addAuthorizationCallbackForOutputDevice:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b741d
- (void)_handleLyricsEventMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b72c2
- (void)_handleGenericMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b6dcf
- (void)_handleHiliteModeChanged:(id)arg1;	// IMP=0x00100000000b6b85
- (void)_handleSetHiliteModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b6af1
- (void)_handleSetConnectionStateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b6a29
- (void)_handleDeviceInfoUpdateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b6931
- (void)_handlePlaybackQueueRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b63d9
- (void)_handleReceivedVoiceInputMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b62d2
- (void)_handleRegisterVoiceInputDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b602a
- (void)_handleRemoteTextInputMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b5f86
- (void)_handleGetRemoteTextInputSessionMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b5e92
- (void)_handleTextInputMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b5dc6
- (void)_handleGetKeyboardSessionMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b5c66
- (void)_addNowPlayingStateToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3;	// IMP=0x00100000000b579d
- (void)_addSubscribedStateToMessage:(id)arg1 forClient:(id)arg2 playerClient:(id)arg3;	// IMP=0x00100000000b53e0
- (void)_addSubscribedStateToMessage:(id)arg1 forClient:(id)arg2 nowPlayingClient:(id)arg3;	// IMP=0x00100000000b51ac
- (void)_addSubscribedStateToMessage:(id)arg1 forClient:(id)arg2 originClient:(id)arg3;	// IMP=0x00100000000b4cbf
- (_Bool)_playerPath:(id)arg1 matchesSubscribedPlayerPath:(id)arg2;	// IMP=0x00100000000b4b12
- (_Bool)_origin:(id)arg1 client:(id)arg2 player:(id)arg3 matchesSubscribedPlayerPath:(id)arg4;	// IMP=0x00100000000b4881
- (_Bool)_origin:(id)arg1 client:(id)arg2 matchesSubscribedPlayerPath:(id)arg3;	// IMP=0x00100000000b4632
- (_Bool)_origin:(id)arg1 matchesSubscribedPlayerPath:(id)arg2;	// IMP=0x00100000000b4438
- (void)_addVolumeToMessage:(id)arg1 forClient:(id)arg2 outputDevice:(id)arg3 withEndpoint:(id)arg4;	// IMP=0x00100000000b4288
- (void)_addVolumeToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3;	// IMP=0x00100000000b3f9f
- (void)_addVolumeToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b3441
- (void)_addOutputDevicesToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3;	// IMP=0x00100000000b334a
- (void)_syncStateToClient:(id)arg1;	// IMP=0x00100000000b3203
- (void)_handleClientUpdatesConfigMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b2a0e
- (void)_handleRegisterGameControllerMessage:(id)arg1 client:(id)arg2;	// IMP=0x00100000000b291d
- (void)_handleTouchEvent:(struct _MRHIDTouchEvent)arg1 withDeviceID:(unsigned long long)arg2 fromClient:(id)arg3;	// IMP=0x00100000000b282e
- (void)_handleReceivedButtonEvent:(struct _MRHIDButtonEvent)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b26d7
- (void)_handleRegisterHIDDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b2482
- (void)_handleReceivedCommand:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b1fc4
- (void)_handleDeviceInfoRequest:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b1d5d
- (void)_handleSendTelevisionCustomDataMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b1bf9
- (void)_handleTelevisionEndpointAvailableMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b1a59
- (void)_handleSetMessageLogging:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b19f8
- (void)_handleDeletePairedDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b18c2
- (void)_handleGetPairedDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b1464
- (void)_handleDeletePairingIdentityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b1336
- (void)_handleSetInputModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b12a1
- (void)_handleGetInputModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000b121b
- (void)outputDevicesChanged:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x00100000000b0dff
- (unsigned int)serverDiscoveryModeForConfiguration:(id)arg1;	// IMP=0x00100000000b0c8f
- (void)purgeUnusedDiscoverySessions;	// IMP=0x00100000000b0ba0
- (void)setServerDiscoveryMode:(unsigned int)arg1 forConfiguration:(id)arg2;	// IMP=0x00100000000b08b5
- (_Bool)_isConnectionForManagedConfigIDAllowed:(id)arg1;	// IMP=0x00100000000b0595
- (void)_registerCallbacks;	// IMP=0x00100000000b015f
- (void)_wakeDevice:(_Bool)arg1 dismissScreenSaver:(_Bool)arg2;	// IMP=0x00100000000aff7d
- (void)_notifyAndDisconnectClients:(id)arg1 withError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000af7b8
- (void)_notifyAndDisconnectClient:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000af6e6
- (id)_unpair:(id)arg1;	// IMP=0x00100000000af544
- (void)_setGameControllerInputMode:(unsigned int)arg1;	// IMP=0x00100000000af386
- (void)_broadcastRemoteTextInputMessageWithPayload:(id)arg1;	// IMP=0x00100000000af053
- (void)_broadcastKeyboardMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3;	// IMP=0x00100000000aee06
- (_Bool)_shouldSendStateUpdateMessageFromSource:(long long)arg1 toClient:(id)arg2;	// IMP=0x00100000000aedae
- (void)_sendStateUpdateMessageFromOrigin:(id)arg1 source:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aeb79
- (void)_sendStateUpdateMessageFromPlayerPath:(id)arg1 source:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ae944
- (void)_sendMessageFromEndpoint:(id)arg1 outputDevice:(id)arg2 withSource:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ae75f
- (void)_sendMessageFromEndpoint:(id)arg1 withSource:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ae336
- (_Bool)_connection:(id)arg1 canReceiveUpdatesForOrigin:(id)arg2;	// IMP=0x00100000000ae191
- (_Bool)_connection:(id)arg1 canReceiveUpdatesForPlayerPath:(id)arg2;	// IMP=0x00100000000adfec
- (_Bool)_connection:(id)arg1 wasPreviouslySubscribedToPlayerPath:(id)arg2;	// IMP=0x00100000000adcd5
- (_Bool)_verifyClientVersionCompatibility:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000ad9ee
- (id)_clientForIdentifier:(id)arg1;	// IMP=0x00100000000ad8d3
- (id)_clientForPairingSession:(id)arg1;	// IMP=0x00100000000ad7f4
- (id)_findClientIf:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ad67c
- (void)_disconnectClient:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000ad060
- (void)_prewarmMediaApps;	// IMP=0x00100000000acf3f
- (void)_handleClientConnection:(id)arg1;	// IMP=0x00100000000acd5b
- (void)collectDiagnostic:(id)arg1;	// IMP=0x00100000000aca24
- (void)sleepObserverSystemWillSleep:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ac99e
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000000000ac90e
- (void)_activeSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x00100000000ac60b
- (void)_addToMessage:(id)arg1 withAllClusterDeviceMembers:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ac3ec
- (void)deviceInfoDidChangeNotification:(id)arg1;	// IMP=0x00100000000ac1cc
- (void)endpointVolumeMutedDidChangeNotification:(id)arg1;	// IMP=0x00100000000abf8d
- (void)endpointVolumeDidChangeNotification:(id)arg1;	// IMP=0x00100000000abd1c
- (void)endpointVolumeControlCapabilitiesDidChangeNotification:(id)arg1;	// IMP=0x00100000000ababa
- (void)endpointDidRemoveOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000ab8f1
- (void)endpointDidChangeOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000ab689
- (void)endpointDidAddOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000ab3c3
- (id)_createLocalizedOutputDevices:(id)arg1 redactVolume:(_Bool)arg2 forClient:(id)arg3 endpoint:(id)arg4;	// IMP=0x00100000000aaf64
- (id)_createLocalizedOutputDevice:(id)arg1 redactVolume:(_Bool)arg2 forClient:(id)arg3 endpoint:(id)arg4;	// IMP=0x00100000000aae3f
- (void)gameControllerConnectionDidInterrupt:(id)arg1;	// IMP=0x00100000000aae2b
- (void)externalDeviceClient:(id)arg1 gameController:(unsigned long long)arg2 propertiesChanged:(id)arg3;	// IMP=0x00100000000aad99
- (void)pinPairingDialogDidClose:(id)arg1 forClient:(id)arg2 userCancelled:(_Bool)arg3;	// IMP=0x00100000000aacf3
- (void)pairingSession:(id)arg1 didCompleteExchangeWithError:(id)arg2;	// IMP=0x00100000000aaa0f
- (void)pairingSession:(id)arg1 showSetupCode:(id)arg2;	// IMP=0x00100000000aa5f6
- (void)pairingSession:(id)arg1 didPrepareExchangeData:(id)arg2;	// IMP=0x00100000000aa41b
- (void)textEditingService:(id)arg1 echoWithText:(id)arg2;	// IMP=0x00100000000aa401
- (void)textEditingServiceTextEditingDidEnd:(id)arg1;	// IMP=0x00100000000aa398
- (void)textEditingService:(id)arg1 attributesDidChange:(id)arg2 payload:(id)arg3;	// IMP=0x00100000000aa330
- (void)textEditingService:(id)arg1 textDidChange:(id)arg2 payload:(id)arg3;	// IMP=0x00100000000aa2c7
- (void)textEditingService:(id)arg1 textEditingDidBegin:(id)arg2 withAttributes:(id)arg3 payload:(id)arg4;	// IMP=0x00100000000aa25e
- (void)stateObserver:(id)arg1 didReceiveCoalescedNowPlayingStateChange:(id)arg2 playerPath:(id)arg3;	// IMP=0x00100000000a9d73
- (void)stateObserver:(id)arg1 didReceiveDefaultSupportedCommandsChange:(id)arg2 playerPath:(id)arg3;	// IMP=0x00100000000a9a13
- (void)stateObserver:(id)arg1 didReceiveVolumeControlCapabilitiesChange:(unsigned int)arg2 playerPath:(id)arg3;	// IMP=0x00100000000a9901
- (void)stateObserver:(id)arg1 didReceiveNowPlayingPlayerChange:(id)arg2;	// IMP=0x00100000000a97ee
- (void)stateObserver:(id)arg1 didReceiveNowPlayingClientChange:(id)arg2;	// IMP=0x00100000000a9457
- (void)stateObserver:(id)arg1 didReceivePlayerDidUnregister:(id)arg2;	// IMP=0x00100000000a9344
- (void)stateObserver:(id)arg1 didReceiveClientDidUnregister:(id)arg2;	// IMP=0x00100000000a9209
- (void)stateObserver:(id)arg1 didReceiveApplicationClientStateDidChange:(id)arg2;	// IMP=0x00100000000a90ce
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;	// IMP=0x00100000000a90bc
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00100000000a86d2
- (void)remoteControlService:(id)arg1 didAcceptClientConnection:(id)arg2;	// IMP=0x00100000000a86bd
@property(readonly, nonatomic) NSArray *endpoints;
@property(readonly, nonatomic) NSArray *clients;
- (void)clearEndpointForClient:(id)arg1;	// IMP=0x00100000000a837c
- (void)stop;	// IMP=0x00100000000a8354
- (void)start;	// IMP=0x00100000000a832c
- (void)dealloc;	// IMP=0x00100000000a8143
- (void)registerNotifications;	// IMP=0x00100000000a7ffa
- (id)init;	// IMP=0x00100000000a7fe6
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x00100000000a7c6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

