//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalClientConnection.h>

@class MRAVEndpoint, MRCoreUtilsPairingSessionPeer, MRPasscodeCredentials, MRPlaybackQueueClient, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol MRDExternalDeviceServerClientConnectionDelegate, OS_dispatch_queue;

@interface MRDExternalDeviceServerClientConnection : MRExternalClientConnection
{
    NSMutableArray *_virtualTouchDevices;	// 8 = 0x8
    NSMutableArray *_registeredVirtualVoiceInputDevices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    NSMutableDictionary *_packedDeviceIDToDeviceIDMapping;	// 32 = 0x20
    short _deviceIDCounter;	// 40 = 0x28
    NSMutableDictionary *_gameControllers;	// 48 = 0x30
    short _gameControllerDeviceIDCounter;	// 56 = 0x38
    NSMutableArray *_lyricsEvents;	// 64 = 0x40
    struct _MRHIDButtonEvent _lastVolumeIncrementEvent;	// 72 = 0x48
    struct _MRHIDButtonEvent _lastVolumeDecrementEvent;	// 84 = 0x54
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;	// 96 = 0x60
    MRAVEndpoint *_destinationEndpoint;	// 104 = 0x68
    NSMutableDictionary *_discoveryModes;	// 112 = 0x70
    MRPasscodeCredentials *_credentials;	// 120 = 0x78
    MRPlaybackQueueClient *_playbackQueueRequests;	// 128 = 0x80
    MRCoreUtilsPairingSessionPeer *_sessionPeer;	// 136 = 0x88
    id _pinPairingToken;	// 144 = 0x90
    NSString *_destinationOutputDeviceUID;	// 152 = 0x98
    NSString *_destinationGroupUID;	// 160 = 0xa0
    id <MRDExternalDeviceServerClientConnectionDelegate> _serverDelegate;	// 168 = 0xa8
    NSDictionary *_connectUserInfo;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x002000000004f230
@property(retain, nonatomic) NSDictionary *connectUserInfo; // @synthesize connectUserInfo=_connectUserInfo;
@property(nonatomic) __weak id <MRDExternalDeviceServerClientConnectionDelegate> serverDelegate; // @synthesize serverDelegate=_serverDelegate;
@property(copy, nonatomic) NSString *destinationGroupUID; // @synthesize destinationGroupUID=_destinationGroupUID;
@property(copy, nonatomic) NSString *destinationOutputDeviceUID; // @synthesize destinationOutputDeviceUID=_destinationOutputDeviceUID;
@property(retain, nonatomic) id pinPairingToken; // @synthesize pinPairingToken=_pinPairingToken;
@property(readonly, nonatomic) MRCoreUtilsPairingSessionPeer *sessionPeer; // @synthesize sessionPeer=_sessionPeer;
@property(readonly, nonatomic) MRPlaybackQueueClient *playbackQueueRequests; // @synthesize playbackQueueRequests=_playbackQueueRequests;
@property(retain, nonatomic) MRPasscodeCredentials *credentials; // @synthesize credentials=_credentials;
- (void)gameController:(id)arg1 propertiesDidChange:(id)arg2;	// IMP=0x001000000004eef1
- (void)_handleEndpointDidDisconnect:(id)arg1;	// IMP=0x001000000004ee5d
- (_Bool)isAllowedToSendCommand:(unsigned int)arg1;	// IMP=0x001000000004ee0e
- (_Bool)isAllowedToSendMessageType:(unsigned long long)arg1;	// IMP=0x001000000004edbd
- (_Bool)hasAccessToPlayerPath:(id)arg1;	// IMP=0x001000000004ed4f
- (id)outputDevicesForEndpoint:(id)arg1;	// IMP=0x001000000004eb4b
@property(readonly, nonatomic) NSArray *discoverySessionConfigurations;
- (void)setDiscoveryMode:(unsigned int)arg1 forConfiguration:(id)arg2;	// IMP=0x001000000004ea30
- (unsigned int)discoveryModeForConfiguration:(id)arg1;	// IMP=0x001000000004e97f
- (id)exportContentItemArtworkUpdates:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x001000000004e87e
- (id)exportContentItems:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x001000000004e605
- (id)exportPlaybackQueue:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x001000000004e359
- (id)exportSupportedCommands:(id)arg1;	// IMP=0x001000000004e22f
- (id)exportNowPlayingState:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x001000000004e0eb
- (_Bool)_wantsLibraryCommands;	// IMP=0x001000000004e031
@property(retain, nonatomic) MRAVEndpoint *destinationEndpoint;
@property(readonly, nonatomic, getter=isDestinationLocal) _Bool destinationLocal;
- (void)requestDestinationEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000004d87c
- (void)requestConnectedDestinationEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000004d6dd
- (void)localizeDestinationOrigin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d5bd
- (void)localizeDestinationPlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d403
- (void)flushPendingPlaybackSessionMigrateEvents:(CDUnknownBlockType)arg1;	// IMP=0x001000000004d115
- (_Bool)removePendingPlaybackSessionMigrateEvent:(id)arg1;	// IMP=0x001000000004cf67
- (void)addPendingPlaybackSessionMigrateEvent:(id)arg1 playerPath:(id)arg2;	// IMP=0x001000000004cdef
- (void)flushVolumeEvents:(CDUnknownBlockType)arg1;	// IMP=0x001000000004cc76
- (void)addVolumeEvent:(struct _MRHIDButtonEvent)arg1;	// IMP=0x001000000004cbc5
- (void)flushLyricsEvents:(CDUnknownBlockType)arg1;	// IMP=0x001000000004c97c
- (void)removeLyricsEvent:(id)arg1;	// IMP=0x001000000004c6dc
- (void)addLyricsEvent:(id)arg1;	// IMP=0x001000000004c622
- (unsigned long long)virtualTouchIDWithPackedID:(unsigned long long)arg1;	// IMP=0x001000000004c59f
- (void)unregisterAllVirtualVoiceInputDevices;	// IMP=0x001000000004c338
- (void)addRegisteredVirtualVoiceInputDevice:(unsigned int)arg1;	// IMP=0x001000000004c08d
- (void)removeAllVirtualTouchDevices;	// IMP=0x001000000004bfea
- (id)virtualTouchDeviceWithID:(unsigned long long)arg1;	// IMP=0x001000000004bd4a
- (unsigned long long)addVirtualTouchDevice:(id)arg1;	// IMP=0x001000000004bbc3
- (void)removeGameController:(unsigned long long)arg1;	// IMP=0x001000000004bb0a
- (id)gameControllerWithID:(unsigned long long)arg1;	// IMP=0x001000000004b9c1
- (unsigned long long)addGameController:(id)arg1;	// IMP=0x001000000004b805
@property(readonly, nonatomic) NSArray *registeredVirtualVoiceInputDevices;
@property(readonly, nonatomic) NSArray *virtualTouchDevices;
@property(readonly, nonatomic) unsigned int connectOptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000004b02e
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x001000000004ae67

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

