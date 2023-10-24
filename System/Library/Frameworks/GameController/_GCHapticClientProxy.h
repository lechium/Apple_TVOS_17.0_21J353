//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCSProfile, NSArray, NSMutableDictionary, NSString, _GCControllerManagerServer;
@protocol GCSSettingsStoreService, NSCopying><NSObject><NSSecureCoding, _GCIPCIncomingConnection;

__attribute__((visibility("hidden")))
@interface _GCHapticClientProxy : NSObject
{
    _Bool _playersPlayedHapticsThisSlice;	// 8 = 0x8
    _GCControllerManagerServer *_server;	// 16 = 0x10
    struct HapticSharedMemory _sharedMemory;	// 24 = 0x18
    id <GCSSettingsStoreService> _settingsStore;	// 80 = 0x50
    GCSProfile *_activeProfile;	// 88 = 0x58
    _Bool _dirtyMuteState;	// 96 = 0x60
    _Bool _muted;	// 97 = 0x61
    _Bool _neverMute;	// 98 = 0x62
    int _muteReasons[5];	// 100 = 0x64
    float _hapticStrength;	// 120 = 0x78
    _Atomic _Bool _invalid;	// 124 = 0x7c
    _Bool _running;	// 125 = 0x7d
    _Bool _stopping;	// 126 = 0x7e
    id <_GCIPCIncomingConnection> _connection;	// 128 = 0x80
    id _connectionInvalidationRegistration;	// 136 = 0x88
    id _connectionInterruptedRegistration;	// 144 = 0x90
    double _initializationTime;	// 152 = 0x98
    _Bool _shouldSquareContinuousIntensity;	// 160 = 0xa0
    _Bool _complete;	// 161 = 0xa1
    _Bool _mockClient;	// 162 = 0xa2
    unsigned int _applicationState;	// 164 = 0xa4
    int _totalPlayers;	// 168 = 0xa8
    unsigned long long _clientID;	// 176 = 0xb0
    NSString *_bundleIdentifier;	// 184 = 0xb8
    id <NSCopying><NSObject><NSSecureCoding> _identifier;	// 192 = 0xc0
    NSString *_persistentControllerIdentifier;	// 200 = 0xc8
    NSString *_controllerProductCategory;	// 208 = 0xd0
    NSArray *_actuators;	// 216 = 0xd8
    NSMutableDictionary *_hapticPlayers;	// 224 = 0xe0
    double _activeLifetimeInSeconds;	// 232 = 0xe8
    NSArray *_invalidationHandlers;	// 240 = 0xf0
}

+ (id)clientProxyWithConnection:(id)arg1 server:(id)arg2 clientID:(unsigned long long)arg3;	// IMP=0x00100000000d2200
- (id).cxx_construct;	// IMP=0x00000000000d3938
- (void).cxx_destruct;	// IMP=0x00000000000d3866
@property(copy, nonatomic) NSArray *invalidationHandlers; // @synthesize invalidationHandlers=_invalidationHandlers;
@property(readonly, nonatomic) double activeLifetimeInSeconds; // @synthesize activeLifetimeInSeconds=_activeLifetimeInSeconds;
@property(readonly, nonatomic) int totalPlayers; // @synthesize totalPlayers=_totalPlayers;
@property(nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(nonatomic, getter=isMockClient) _Bool mockClient; // @synthesize mockClient=_mockClient;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) _Bool shouldSquareContinuousIntensity; // @synthesize shouldSquareContinuousIntensity=_shouldSquareContinuousIntensity;
@property(copy, nonatomic) NSMutableDictionary *hapticPlayers; // @synthesize hapticPlayers=_hapticPlayers;
@property(readonly, copy, nonatomic) NSArray *actuators; // @synthesize actuators=_actuators;
@property(readonly, copy, nonatomic) NSString *controllerProductCategory; // @synthesize controllerProductCategory=_controllerProductCategory;
@property(readonly, copy, nonatomic) NSString *persistentControllerIdentifier; // @synthesize persistentControllerIdentifier=_persistentControllerIdentifier;
@property(readonly, copy, nonatomic) id <NSCopying><NSObject><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) unsigned long long clientID; // @synthesize clientID=_clientID;
- (void)addActiveTime:(double)arg1;	// IMP=0x00000000000d3745
@property(readonly, nonatomic) double totalLifetimeInSeconds;
- (id)description;	// IMP=0x00000000000d366b
- (void)notifyClientCompletedWithError:(id)arg1;	// IMP=0x00000000000d3452
- (_Bool)isMuted;	// IMP=0x00000000000d3417
- (_Bool)isMutedForReason:(unsigned long long)arg1;	// IMP=0x00000000000d3373
- (float)hapticStrength;	// IMP=0x00000000000d3368
- (void)setHapticStrength:(float)arg1;	// IMP=0x00000000000d335d
- (void)setMute:(_Bool)arg1 forReason:(unsigned long long)arg2;	// IMP=0x00000000000d3336
- (void)notifyClientOnStopWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x00000000000d31f6
- (void *)sharedMemory;	// IMP=0x00000000000d31ec
- (_Bool)stopping;	// IMP=0x00000000000d31e3
- (_Bool)running;	// IMP=0x00000000000d31da
- (void)refreshUserSettingForMuteHaptics;	// IMP=0x00000000000d3027
- (void)invalidate;	// IMP=0x00000000000d2c42
- (void)invalidateDueToControllerDisconnect;	// IMP=0x00000000000d2b38
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000d2a6b
- (void)dealloc;	// IMP=0x00000000000d270e
- (id)init;	// IMP=0x00000000000d26d0
- (id)_initWithConnection:(id)arg1 server:(id)arg2 clientID:(unsigned long long)arg3;	// IMP=0x00000000000d229b
- (id)addInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d3980
@property(readonly, nonatomic, getter=isInvalid) _Bool invalid;
- (void)debugEngineIsRunning:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d7ccd
- (void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d7bde
- (void)stopRunning:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d7af8
- (void)stopRunning;	// IMP=0x00000000000d7a52
- (void)startRunning:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d7973
- (void)stopPrewarm;	// IMP=0x00000000000d78d3
- (void)prewarm:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d77f9
- (void)detachSequence:(unsigned long long)arg1;	// IMP=0x00000000000d7744
- (void)prepareHapticSequence:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d760f
- (void)removeCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d74da
- (void)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d73a5
- (void)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d7270
- (void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d70ff
- (void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d6f43
- (void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d6e0e
- (void)loadVibePattern:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d6cb4
- (void)loadHapticSequenceFromEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d6b47
- (void)loadHapticSequenceFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d69da
- (void)loadHapticEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d6880
- (void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d6523
- (void)removeChannel:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d6185
- (void)requestChannels:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d5a37
- (void)releaseChannels;	// IMP=0x00000000000d573c
- (void)teardownAndReleaseChannels;	// IMP=0x00000000000d542d
- (void)setPlayerBehavior:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d5239
- (void)getHapticLatency:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d5157
- (void)releaseClientResources;	// IMP=0x00000000000d50a6
- (void)allocateClientResources:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d4f11
- (void)queryCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d498b
- (void)configureWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d420f
- (void)_configureActuatorsLegacyWithOptions:(id)arg1;	// IMP=0x00000000000d3d28

@end
