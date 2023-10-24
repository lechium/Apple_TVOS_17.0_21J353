//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalDevice.h>

@class MRAVOutputContext, MRAVOutputDevice, MRDOriginForwarder, MRDeviceInfo, MROrigin, MROutputContextController, NSArray, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDAVOutputContextExternalDevice : MRExternalDevice
{
    unsigned int _connectionState;	// 8 = 0x8
    MRDeviceInfo *_deviceInfo;	// 16 = 0x10
    MRDOriginForwarder *_originForwarder;	// 24 = 0x18
    NSMutableArray *_pendingCommitRequests;	// 32 = 0x20
    MROutputContextController *_outputContextController;	// 40 = 0x28
    NSArray *subscribedPlayerPaths;	// 48 = 0x30
    MRAVOutputDevice *_designatedGroupLeader;	// 56 = 0x38
    MRAVOutputContext *_outputContext;	// 64 = 0x40
    MROrigin *_origin;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_serialQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_workerQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 96 = 0x60
    CDUnknownBlockType _connectionStateCallback;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;	// 112 = 0x70
    CDUnknownBlockType _outputDevicesUpdatedCallback;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_outputDevicesUpdatedCallbackQueue;	// 128 = 0x80
    CDUnknownBlockType _outputDevicesRemovedCallback;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_outputDevicesRemovedCallbackQueue;	// 144 = 0x90
    CDUnknownBlockType _volumeCallback;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_volumeCallbackQueue;	// 160 = 0xa0
    CDUnknownBlockType _volumeControlCapabilitiesCallback;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_volumeControlCapabilitiesCallbackQueue;	// 176 = 0xb0
    CDUnknownBlockType _volumeMutedCallback;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_volumeMutedCallbackQueue;	// 192 = 0xc0
}

+ (void)_reportStreamCountAnalytics;	// IMP=0x002000000010764b
+ (id)_resolveReason:(id)arg1 uid:(id)arg2 name:(id)arg3 requestID:(id)arg4;	// IMP=0x0010000000107011
+ (void)_createPlayerForClient:(id)arg1 playerPath:(id)arg2 deviceInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fbf1a
+ (void)_createPlayerAndWaitForCanBeNowPlaying:(id)arg1 deviceInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000faff3
+ (void)_createPlayerAndWaitForConnection:(id)arg1 command:(id)arg2 deviceInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000f9ed0
+ (void)_sendCommandPreview:(unsigned int)arg1 options:(id)arg2 playerPath:(id)arg3;	// IMP=0x00100000000f96d7
+ (void)prewarmApp:(id)arg1 origin:(id)arg2 deviceInfo:(id)arg3;	// IMP=0x00100000000f65f7
+ (void)prewarm;	// IMP=0x00100000000f6043
+ (void)prewarmSoon;	// IMP=0x00100000000f5faa
+ (void)initialize;	// IMP=0x00100000000f5abe
- (void).cxx_destruct;	// IMP=0x002000000010836a
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeMutedCallbackQueue; // @synthesize volumeMutedCallbackQueue=_volumeMutedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeMutedCallback; // @synthesize volumeMutedCallback=_volumeMutedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeControlCapabilitiesCallbackQueue; // @synthesize volumeControlCapabilitiesCallbackQueue=_volumeControlCapabilitiesCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeControlCapabilitiesCallback; // @synthesize volumeControlCapabilitiesCallback=_volumeControlCapabilitiesCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue; // @synthesize volumeCallbackQueue=_volumeCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeCallback; // @synthesize volumeCallback=_volumeCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesRemovedCallbackQueue; // @synthesize outputDevicesRemovedCallbackQueue=_outputDevicesRemovedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesRemovedCallback; // @synthesize outputDevicesRemovedCallback=_outputDevicesRemovedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesUpdatedCallbackQueue; // @synthesize outputDevicesUpdatedCallbackQueue=_outputDevicesUpdatedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesUpdatedCallback; // @synthesize outputDevicesUpdatedCallback=_outputDevicesUpdatedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // @synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionStateCallback; // @synthesize connectionStateCallback=_connectionStateCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) MROrigin *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) MRAVOutputContext *outputContext; // @synthesize outputContext=_outputContext;
@property(retain, nonatomic) MRAVOutputDevice *designatedGroupLeader; // @synthesize designatedGroupLeader=_designatedGroupLeader;
- (void)setSubscribedPlayerPaths:(id)arg1;	// IMP=0x00100000001080f9
- (id)subscribedPlayerPaths;	// IMP=0x00100000001080e8
- (_Bool)verifyCreatedPlayerPath:(id)arg1 forClient:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010737b
- (void)destroyPlayersForClient:(id)arg1 origin:(id)arg2;	// IMP=0x00100000001072c9
- (void)_onQueue_destroyPlayerPathsForOrigin:(id)arg1;	// IMP=0x00100000001070c9
- (id)_resolveReason:(id)arg1;	// IMP=0x0010000000106f5f
- (void)_maybeForwardOriginToLocalOrigin:(id)arg1;	// IMP=0x0010000000106ca3
- (void)commitOutputDeviceToContextIfNeededWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000105e65
- (id)outputDeviceForUID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000105c20
- (_Bool)verifyGroupLeader:(id)arg1;	// IMP=0x00100000001057ce
- (void)verifyGroupLeaderForReason:(id)arg1;	// IMP=0x00100000001055b7
- (void)cleanUp;	// IMP=0x00100000001055a3
- (void)_reevaluateDeviceInfo;	// IMP=0x0010000000105507
- (void)clusterController:(id)arg1 clusterTypeDidChange:(unsigned int)arg2;	// IMP=0x0010000000105182
- (void)localClusterTypeDidChangeNotification:(id)arg1;	// IMP=0x00100000001050d2
- (void)anyDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x0010000000105057
- (void)_notifyActiveSessionMaybeWillBeHijackedByNativePlaybackFromOutputContextModification:(id)arg1;	// IMP=0x0010000000104ed5
- (void)outputContextRequestToAddLocalOutputDeviceNotification:(id)arg1;	// IMP=0x0010000000104e20
- (void)anyOutputContextDidAddOutputDeviceNotification:(id)arg1;	// IMP=0x0010000000104d16
- (void)outputContextDataSourceIsMutedDidChangeNotification:(id)arg1;	// IMP=0x0010000000104a88
- (void)outputContextDataSourceVolumeDidChangeNotification:(id)arg1;	// IMP=0x00100000001047c8
- (void)outputContextDataSourceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;	// IMP=0x001000000010453b
- (void)outputContextDataSourceDidRemoveOutputDeviceNotification:(id)arg1;	// IMP=0x00100000001036b8
- (void)outputContextDataSourceDidAddOutputDeviceNotification:(id)arg1;	// IMP=0x0010000000103365
- (void)outputContextDataSourceOutputDeviceDidChangeNotification:(id)arg1;	// IMP=0x0010000000103139
- (void)outputContextDataSourceOutputDevicesDidChangeNotification:(id)arg1;	// IMP=0x0010000000103127
- (void)registerForNotifications;	// IMP=0x0010000000102de1
- (void)sendClientUpdatesConfigMessage;	// IMP=0x0010000000102ddb
- (id)currentClientUpdatesConfigMessage;	// IMP=0x0010000000102dd3
- (id)errorForCurrentState;	// IMP=0x0010000000102dcb
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;	// IMP=0x0010000000102dc5
- (void)setWantsSystemEndpointNotifications:(_Bool)arg1;	// IMP=0x0010000000102dbf
- (_Bool)wantsSystemEndpointNotifications;	// IMP=0x0010000000102db7
- (void)setWantsOutputDeviceNotifications:(_Bool)arg1;	// IMP=0x0010000000102db1
- (_Bool)wantsOutputDeviceNotifications;	// IMP=0x0010000000102da9
- (void)setWantsVolumeNotifications:(_Bool)arg1;	// IMP=0x0010000000102da3
- (_Bool)wantsVolumeNotifications;	// IMP=0x0010000000102d9b
- (void)setWantsNowPlayingArtworkNotifications:(_Bool)arg1;	// IMP=0x0010000000102d95
- (_Bool)wantsNowPlayingArtworkNotifications;	// IMP=0x0010000000102d8d
- (void)setWantsNowPlayingNotifications:(_Bool)arg1;	// IMP=0x0010000000102d87
- (_Bool)wantsNowPlayingNotifications;	// IMP=0x0010000000102d7f
- (_Bool)isUsingSystemPairing;	// IMP=0x0010000000102d77
- (_Bool)isPaired;	// IMP=0x0010000000102d6f
- (void)sendCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x0010000000102d69
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000102d63
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000102d5d
- (id)supportedMessages;	// IMP=0x0010000000102d2f
- (void)removeFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000102cc8
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000102cc2
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000102cbc
- (void)disconnect:(id)arg1;	// IMP=0x0010000000102a4f
- (id)_generateDeviceInfoWithDesignatedGroupLeader:(id)arg1 outputContext:(id)arg2;	// IMP=0x001000000010254b
- (void)connectWithOptions:(unsigned int)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000101749
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;	// IMP=0x00100000001016b7
- (void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterAwareDeviceUIDs:(id)arg4 removingClusterAwareDeviceUIDs:(id)arg5 settingClusterAwareDeviceUIDs:(id)arg6 withReplyQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000010072e
- (void)muteOutputDeviceVolume:(_Bool)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ffb8e
- (void)adjustOutputDeviceVolume:(long long)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000feff3
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000fe4cf
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fe3a9
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fe28e
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000fe163
- (void)setOutputDevicesRemovedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000fe038
- (void)setOutputDevicesUpdatedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00000000000fdf0d
- (void)setVolumeMutedChangedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000fdde2
- (void)setVolumeControlCapabilitiesCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000fdcb7
- (void)setVolumeChangedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000fdb8c
- (void)_handlePlaybackSessionMigrateEndRequest:(id)arg1 error:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fd98b
- (void)_handlePlaybackSessionMigrateBeginRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fd7d1
- (void)_handlePlaybackSessionMigrateRequest:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fd33b
- (void)_handlePlaybackSessionRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fd11b
- (void)_handlePlaybackQueueRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fccef
- (void)_sendMessageForPlayerPath:(id)arg1 timeout:(double)arg2 reason:(id)arg3 factory:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000fc96e
- (void)sendMessageWithType:(unsigned long long)arg1 playerPath:(id)arg2 timeout:(double)arg3 reason:(id)arg4 factory:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000fc755
- (void)_createPlayerAndWaitForCanBeNowPlaying:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fade1
- (void)_createPlayerAndWaitForConnection:(id)arg1 command:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f9c6e
- (id)_createResolvedPlayerPathFromPlayerPath:(id)arg1;	// IMP=0x00100000000f998d
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 playerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000f8ac8
- (void)setDeviceInfo:(id)arg1;	// IMP=0x00100000000f7d95
- (id)uid;	// IMP=0x00100000000f78bc
- (void)setConnectionState:(unsigned int)arg1;	// IMP=0x00100000000f7695
- (unsigned int)connectionState;	// IMP=0x00100000000f75ce
- (id)deviceInfo;	// IMP=0x00100000000f74b0
- (id)customOrigin;	// IMP=0x00100000000f7392
- (_Bool)supportsIdleDisconnection;	// IMP=0x00100000000f738a
- (long long)port;	// IMP=0x00100000000f7382
- (id)hostName;	// IMP=0x00100000000f737a
- (id)name;	// IMP=0x00100000000f7254
@property(readonly, nonatomic) _Bool containsLocalDevice;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;	// IMP=0x00100000000f6d4c
- (void)dealloc;	// IMP=0x00100000000f5a36
- (id)initWithOutputContext:(id)arg1 designatedGroupLeader:(id)arg2;	// IMP=0x00100000000f57e3

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
