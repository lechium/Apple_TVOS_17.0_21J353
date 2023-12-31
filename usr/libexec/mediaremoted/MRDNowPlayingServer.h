//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDDeviceInfoDataSource, MRDElectedPlayerController, MRDLockScreenController, MRDNowPlayingClient, MRDNowPlayingLauncher, MRDNowPlayingOriginClient, MRDNowPlayingPlaybackQueueServer, MRDNowPlayingPlayerClient, MRPlayerPath, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol MRDLockScreenRoutingControllerProtocol, OS_dispatch_queue;

@interface MRDNowPlayingServer : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_originClients;	// 16 = 0x10
    NSMutableDictionary *_nowPlayingApplicationIsPlayingStates;	// 24 = 0x18
    MRDNowPlayingPlaybackQueueServer *_playbackQueueServer;	// 32 = 0x20
    NSHashTable *_originForwarders;	// 40 = 0x28
    MRDDeviceInfoDataSource *_deviceInfoDataSource;	// 48 = 0x30
    MRDNowPlayingOriginClient *_activeOriginClient;	// 56 = 0x38
    MRDNowPlayingOriginClient *_localOriginClient;	// 64 = 0x40
    MISSING_TYPE *_electedPlayerController;	// 72 = 0x48
    MRDLockScreenController *_lockScreenController;	// 80 = 0x50
    id <MRDLockScreenRoutingControllerProtocol> _lockScreenRoutingController;	// 88 = 0x58
    MRDNowPlayingLauncher *_nowPlayingCapLauncher;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000d5a7f
@property(retain, nonatomic) MRDNowPlayingLauncher *nowPlayingCapLauncher; // @synthesize nowPlayingCapLauncher=_nowPlayingCapLauncher;
@property(readonly, nonatomic) id <MRDLockScreenRoutingControllerProtocol> lockScreenRoutingController; // @synthesize lockScreenRoutingController=_lockScreenRoutingController;
@property(readonly, nonatomic) MRDLockScreenController *lockScreenController; // @synthesize lockScreenController=_lockScreenController;
@property(readonly, nonatomic) MRDElectedPlayerController *electedPlayerController; // @synthesize electedPlayerController=_electedPlayerController;
@property(retain, nonatomic) MRDNowPlayingOriginClient *localOriginClient; // @synthesize localOriginClient=_localOriginClient;
@property(retain, nonatomic) MRDNowPlayingOriginClient *activeOriginClient; // @synthesize activeOriginClient=_activeOriginClient;
- (id)_onQueue_originClientForGroupLeaderOfDeviceUID:(id)arg1;	// IMP=0x00100000000d5680
- (id)_onQueue_originClientForDeviceUID:(id)arg1;	// IMP=0x00100000000d5397
- (id)_onQueue_originClientForOrigin:(id)arg1;	// IMP=0x00100000000d5190
- (id)_onQueue_restoredActiveOrigin;	// IMP=0x00100000000d50eb
- (void)_onQueue_savePersistentActiveOrigin:(id)arg1;	// IMP=0x00100000000d4faf
- (void)_onQueue_setActiveOrigin:(id)arg1 saveState:(_Bool)arg2;	// IMP=0x00100000000d4df8
- (void)setActiveOrigin:(id)arg1;	// IMP=0x00100000000d4d48
- (id)overrideClient;	// IMP=0x00100000000d4cf8
- (void)setOverrideClient:(id)arg1;	// IMP=0x00100000000d4c8f
- (void)_removeNowPlayingClient:(id)arg1 forOrigin:(id)arg2;	// IMP=0x00100000000d4c17
- (void)_removeOrigin:(id)arg1;	// IMP=0x00100000000d480a
- (void)_addOrigin:(id)arg1 withDeviceInfo:(id)arg2 emitNotification:(_Bool)arg3;	// IMP=0x00100000000d4364
- (_Bool)_hasForwarderForOrigin:(id)arg1;	// IMP=0x00100000000d41be
- (void)unregisterOriginForwarder:(id)arg1;	// IMP=0x00100000000d4112
- (void)registerOriginForwarder:(id)arg1;	// IMP=0x00100000000d4021
- (id)augmentedUserInfoForPlayerPath:(id)arg1;	// IMP=0x00100000000d3de8
- (void)maybePostDistributedNotifications;	// IMP=0x00100000000d361b
- (void)postLockScreenControlsDidChangeDistributedNotification;	// IMP=0x00100000000d355d
- (void)postLockScreenPlayerPathDidChange:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d3139
- (void)postLockScreenActiveDidChange:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d3069
- (void)postLockScreenVisibleDidChange:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d2f99
- (void)postElectedPlayerDidChange:(id)arg1 change:(long long)arg2 event:(long long)arg3 reason:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000d2de4
- (void)postPlayerDidUnregisterWithPlaybackState:(unsigned int)arg1 canBeNowPlaying:(_Bool)arg2 forPlayerPath:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d2c75
- (void)postPlayerDidRegisterForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d2ba6
- (void)postPlaybackQueueCapabilitiesDidChange:(unsigned long long)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d2a91
- (void)postPlaybackQueueContentItemsArtworkDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d26b6
- (void)postPlaybackQueueContentItemsDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d2257
- (void)postPlaybackQueueDidChange:(id)arg1 nowPlayingItemDidChange:(_Bool)arg2 forPlayerPath:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d1d99
- (void)postSupportedCommandsDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d1bf6
- (void)postNowPlayingPlayerStateDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d1b27
- (void)postPlaybackStateDidChange:(unsigned int)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d19e2
- (void)postAudioFormatContentInfoDidChangeForOrigin:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d18c8
- (void)postActivePlayerPathsDidChangeForOrigin:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d17ae
- (void)postPictureInPictureDidChange:(_Bool)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d1699
- (void)postIsPlayingDidChange:(_Bool)arg1 lastPlayingTimestamp:(double)arg2 forPlayerPath:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d153e
- (void)postActivePlayerDidChangeForPlayerPath:(id)arg1 withPlaybackState:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d1429
- (void)postNowPlayingClientStateDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d135a
- (void)postClientDidUnregisterForPlayerPath:(id)arg1 hasDefaultSupportedCommands:(_Bool)arg2 canBeNowPlaying:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d1205
- (void)postClientDidRegisterForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d1136
- (void)postPlayerDidUnregisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d1067
- (void)postPlayerDidRegisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d0f98
- (void)postClientDidUnregisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d0ec9
- (void)postClientDidRegisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d0dca
- (void)postNowPlayingApplicationDidChangeForPlayerPath:(id)arg1 withPlaybackState:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d0c2a
- (void)postIsMutedDidChange:(id)arg1 isMuted:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d0b15
- (void)postVolumeCapabilitiesDidChange:(id)arg1 capabilities:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d09ba
- (void)postVolumeDidChange:(id)arg1 volume:(float)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d089e
- (void)postDeviceInfoDidChange:(id)arg1 previousDeviceInfo:(id)arg2 forOrigin:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d0726
- (void)postOriginDidUnRegister:(id)arg1 deviceInfo:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d05ef
- (void)postOriginDidRegister:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d04e1
- (void)postActiveOriginDidChange:(id)arg1 withPlaybackState:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d03cc
- (void)collectDiagnostic:(id)arg1;	// IMP=0x00100000000cff28
@property(readonly, nonatomic) _Bool lockScreenRecommendationActive;
@property(readonly, nonatomic) _Bool lockScreenPlatterActive;
- (void)lockScreenController:(id)arg1 playerPathDidChange:(id)arg2;	// IMP=0x00100000000cfe89
- (void)lockScreenController:(id)arg1 lockScreenWidgetVisibleDidChange:(_Bool)arg2;	// IMP=0x00100000000cfe73
- (void)lockScreenController:(id)arg1 lockScreenWidgetActiveDidChange:(_Bool)arg2;	// IMP=0x00100000000cfe5d
- (void)electedPlayerController:(id)arg1 electedPlayerDidChange:(id)arg2 change:(long long)arg3 event:(long long)arg4 reason:(id)arg5;	// IMP=0x00100000000cfe2a
- (_Bool)nowPlayingLauncher:(id)arg1 shouldRelaunch:(id)arg2;	// IMP=0x00100000000cfd8c
- (void)nowPlayingServer:(id)arg1 activeOriginDidChangeFromOriginClient:(id)arg2 toOriginClient:(id)arg3;	// IMP=0x00100000000cfcbc
- (void)nowPlayingOriginClientDidChangeAudioFormatContentInfo:(id)arg1;	// IMP=0x00100000000cfc6b
- (void)nowPlayingOriginClientPlaybackDidTimeout:(id)arg1;	// IMP=0x00100000000cfb4c
- (void)nowPlayingOriginClient:(id)arg1 activePlayerClientsDidChange:(id)arg2;	// IMP=0x00100000000cfafb
- (void)nowPlayingOriginClient:(id)arg1 currentRouteIsMutedDidChange:(_Bool)arg2;	// IMP=0x00100000000cfaa6
- (void)nowPlayingOriginClient:(id)arg1 currentRouteVolumeDidChange:(float)arg2;	// IMP=0x00100000000cfa4b
- (void)nowPlayingOriginClient:(id)arg1 currentRouteVolumeControlCapabilitiesDidChange:(unsigned int)arg2;	// IMP=0x00100000000cf9f6
- (void)nowPlayingOriginClient:(id)arg1 clientDidUnregister:(id)arg2;	// IMP=0x00100000000cf859
- (void)nowPlayingOriginClient:(id)arg1 clientDidRegister:(id)arg2;	// IMP=0x00100000000cf808
- (void)nowPlayingOriginClient:(id)arg1 deviceInfoDidChange:(id)arg2 previousDeviceInfo:(id)arg3;	// IMP=0x00100000000cf6db
- (void)nowPlayingOriginClient:(id)arg1 applicationActivityStatusDidChange:(id)arg2;	// IMP=0x00100000000cf5f3
- (void)nowPlayingOriginClient:(id)arg1 applicationActivityDidEnd:(id)arg2;	// IMP=0x00100000000cf50b
- (void)nowPlayingOriginClient:(id)arg1 applicationActivityDidBegin:(id)arg2;	// IMP=0x00100000000cf423
- (void)nowPlayingOriginClient:(id)arg1 activePlayerPathDidChange:(id)arg2 withPlaybackState:(unsigned int)arg3;	// IMP=0x00100000000cf3ec
- (void)nowPlayingClient:(id)arg1 applicationDidForeground:(_Bool)arg2;	// IMP=0x00100000000cf288
- (void)nowPlayingPlayerClient:(id)arg1 clientCanBeNowPlayingDidChange:(_Bool)arg2;	// IMP=0x00100000000cf226
- (void)nowPlayingClient:(id)arg1 playerDidUnregister:(id)arg2;	// IMP=0x00100000000cf18c
- (void)nowPlayingClient:(id)arg1 playerDidRegister:(id)arg2;	// IMP=0x00100000000cf13b
- (void)nowPlayingClient:(id)arg1 clientStateDidChange:(id)arg2;	// IMP=0x00100000000cf0c0
- (void)nowPlayingClient:(id)arg1 activePlayerDidChangeFromPlayerClient:(id)arg2 toPlayerClient:(id)arg3;	// IMP=0x00100000000ceffa
- (void)nowPlayingPlayerClient:(id)arg1 playerCanBeNowPlayingDidChange:(_Bool)arg2;	// IMP=0x00100000000cef98
- (void)nowPlayingPlayerClient:(id)arg1 pictureInPictureEnabledDidChange:(_Bool)arg2;	// IMP=0x00100000000cef34
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueArtworkContentItemsDidChange:(id)arg2;	// IMP=0x00100000000ceeb9
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueContentItemsDidChange:(id)arg2;	// IMP=0x00100000000cee3e
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueCapabilitiesDidChange:(unsigned long long)arg2;	// IMP=0x00100000000cede7
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueDidChange:(id)arg2 nowPlayingItemDidChange:(_Bool)arg3;	// IMP=0x00100000000ced6b
- (void)nowPlayingPlayerClient:(id)arg1 supportedCommandsDidChange:(id)arg2;	// IMP=0x00100000000cecf0
- (void)nowPlayingPlayerClient:(id)arg1 playbackStateDidChange:(unsigned int)arg2;	// IMP=0x00100000000cec9b
- (void)nowPlayingPlayerClient:(id)arg1 isPlayingDidChange:(_Bool)arg2;	// IMP=0x00100000000cebc0
- (void)nowPlayingPlayerClient:(id)arg1 playerStateDidChange:(id)arg2;	// IMP=0x00100000000ceb45
- (void)_handleGetImageDimensionsForArtworkDataMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cea47
- (void)_handleGetAudioFormatContentInfoForOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ce874
- (void)_handleRegisterForWakingNowPlayingNotifications:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ce734
- (void)_handleSetOriginClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ce5c8
- (void)_handleSetPlayerClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ce420
- (void)_handleGetLastPlayingDateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ce140
- (void)_handleSetDefaultSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cdd22
- (void)_handleSetSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cdb7d
- (void)_handleGetSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ccdd2
- (void)_handlePlaybackSessionRequest:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ccc4f
- (void)_handleGetElectedPlayerPathMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ccba2
- (void)_handleGetDeviceInfo:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cca16
- (void)_handleContentItemArtworkChangedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cc929
- (void)_handleContentItemChangedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cc7ff
- (void)_handleSetPlayerPictureInPictureEnabledMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cc73c
- (void)_handleGetPlayerPictureInPictureEnabledMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cc5ef
- (void)_handleGetActivePlayerPathsForLocalOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cc4ad
- (void)_handleRemoveNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cc3b8
- (void)_handleGetNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cc27f
- (void)_handleSetNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cc0cb
- (void)_handleGetNowPlayingPlayersMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cbd9f
- (void)_handleRemoveNowPlayingClientMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cbcad
- (void)_handleGetNowPlayingClientMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cbb74
- (void)_handleSetNowPlayingClientMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cb883
- (void)_handleGetNowPlayingClientsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cb337
- (void)_handleResolvePlayerPath:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cb128
- (void)_handleSendLyricsEvent:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cae91
- (void)_handleRequestAudioAmplitudeSamplesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000cabf7
- (void)_handleRequestVideoThumbnailsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ca95d
- (void)_handleGetAnyAppIsPlayingMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ca8a9
- (void)_handleSetPlaybackStateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ca6ab
- (void)_handleGetPlaybackStateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ca554
- (void)_handleUpdatePlayerPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ca3a8
- (void)_handleSetPlayerPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ca21b
- (void)_handleGetPlayerPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ca0bb
- (void)_handleUpdateClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c9f0c
- (void)_handleSetClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c9d5d
- (void)_handleGetClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c9bfd
- (void)_handleResetPlaybackQueueRequests:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c9ad3
- (void)_handleSetHardwareRemoteBehaviorMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c99c0
- (void)_handleSetPlaybackQueueCapabilities:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c9905
- (void)_handleRequestPlaybackQueueCapabilities:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c97b9
- (void)_handleSetPlaybackQueue:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c953f
- (void)_handleEndApplicationActivityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c94ba
- (void)_handleGetApplicationActivityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c93d4
- (void)_handleBeginApplicationActivityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c92ce
- (void)_handleSetCanBeNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c90ce
- (void)_handleSetCanBeNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c8f0c
- (void)_handleSetOverriddenNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c8af4
- (void)_handleSetNowPlayingAppOverrideMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c8790
- (void)updateDeviceInfo:(id)arg1 origin:(id)arg2;	// IMP=0x00100000000c8718
- (void)unregisterOrigin:(id)arg1;	// IMP=0x00100000000c8706
- (void)reregisterOrigin:(id)arg1 deviceInfo:(id)arg2;	// IMP=0x00100000000c82eb
- (void)registerOrigin:(id)arg1 deviceInfo:(id)arg2;	// IMP=0x00100000000c82d3
- (void)_handleGetActiveOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c81ed
- (void)_handleSetActiveOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c8101
- (void)_handleGetAvailableOriginsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c7e98
- (void)restoreClientState:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c634a
- (void)restoreDeviceInfoToClient:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c612f
- (void)clearNowPlayingClientForXPCClient:(id)arg1;	// IMP=0x00100000000c5d0b
- (id)originClientForGroupLeaderOfDeviceUID:(id)arg1;	// IMP=0x00100000000c5bcb
- (id);	// IMP=0x00100000000c5a8b
- (id)originClientForOrigin:(id)arg1;	// IMP=0x00100000000c5937
- (id)localPlayersForXpcClient:(id)arg1;	// IMP=0x00100000000c5855
- (id)xpcClientForPlayerPath:(id)arg1;	// IMP=0x00100000000c560f
- (id)_onQueue_queryPlayerPath:(id)arg1;	// IMP=0x00100000000c51f8
- (id)queryPlayerPath:(id)arg1;	// IMP=0x00100000000c50a4
- (id)resolveExistingPlayerPath:(id)arg1;	// IMP=0x00100000000c4bf4
- (id)resolvePlayerPath:(id)arg1 fromClient:(id)arg2 useDefaultPlayerIfNoneSpecified:(_Bool)arg3;	// IMP=0x00100000000c44cf
- (id)resolvePlayerPath:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c44b7
- (id)queryExistingPlayerPathForXPCMessage:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000000c4335
- (id)queryPlayerPathForXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c428e
@property(readonly, nonatomic) NSArray *originClients;
- (id)_onQueue_allNowPlayingInfoClientsForOrigin:(id)arg1;	// IMP=0x00100000000c3fba
@property(readonly, nonatomic) NSSet *allLocalNowPlayingInfoClients;
- (id)_onQueue_allNowPlayingInfoClients;	// IMP=0x00100000000c3c04
@property(readonly, nonatomic) NSSet *allNowPlayingInfoClients;
@property(readonly, nonatomic) MRPlayerPath *localActivePlayerPath;
@property(readonly, nonatomic) MRPlayerPath *activePlayerPath;
- (id)_onQueue_companionOriginClient;	// IMP=0x00100000000c38a1
- (id)_onQueue_activeOriginClient;	// IMP=0x00100000000c3868
@property(readonly, nonatomic) MRDNowPlayingOriginClient *companionOriginClient;
@property(readonly, nonatomic) MRDNowPlayingClient *localActiveNowPlayingClient;
@property(readonly, nonatomic) MRDNowPlayingClient *activeNowPlayingClient;
@property(readonly, nonatomic) MRDNowPlayingPlayerClient *localActivePlayerClient;
@property(readonly, nonatomic) MRDNowPlayingPlayerClient *activePlayerClient;
@property(readonly, nonatomic) unsigned int localActivePlayerPlaybackState;
@property(readonly, nonatomic) unsigned int activePlayerPlaybackState;
@property(readonly, nonatomic) _Bool localActivePlayerIsPlaying;
@property(readonly, nonatomic) _Bool activePlayerIsPlaying;
@property(readonly, nonatomic) NSString *localActiveClientBundleIdentifier;
@property(readonly, nonatomic) NSString *activeClientBundleIdentifier;
@property(readonly, nonatomic) int localActiveClientPID;
@property(readonly, nonatomic) int activeClientPID;
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000c29e7
- (id)_createLockScreenRoutingController;	// IMP=0x00100000000c297b
- (void)dealloc;	// IMP=0x00100000000c2906
- (id)init;	// IMP=0x00100000000c2674

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

