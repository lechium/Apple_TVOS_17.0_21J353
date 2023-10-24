//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPAVEndpointRoute, MPVolumeController, NSString, TVNPEndpointRouteConnection;
@protocol NSCopying;

@interface TVNPEndpointRoutingDestination
{
    MPAVEndpointRoute *_endpointRoute;	// 120 = 0x78
    TVNPEndpointRouteConnection *_routeConnection;	// 128 = 0x80
    MPVolumeController *_volumeController;	// 136 = 0x88
    id <NSCopying> _routeConnectionObserverToken;	// 144 = 0x90
    unsigned long long _connectionState;	// 152 = 0x98
}

+ (unsigned long long)_playbackStateForMPCPlaybackState:(long long)arg1;	// IMP=0x00100000000070c0
+ (id)keyPathsForValuesAffectingPaired;	// IMP=0x00100000000060a0
+ (id)keyPathsForValuesAffectingDisconnected;	// IMP=0x0010000000006060
+ (id)keyPathsForValuesAffectingConnected;	// IMP=0x0010000000006020
- (void).cxx_destruct;	// IMP=0x0000000000007220
@property(nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic) id <NSCopying> routeConnectionObserverToken; // @synthesize routeConnectionObserverToken=_routeConnectionObserverToken;
@property(readonly, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) TVNPEndpointRouteConnection *routeConnection; // @synthesize routeConnection=_routeConnection;
@property(readonly, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
- (void)_metadataDidChange:(id)arg1 forKeys:(id)arg2;	// IMP=0x0000000000006c00
- (void)_updateVolume;	// IMP=0x0000000000006960
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000006830
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x0000000000006720
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x0000000000006620
- (void)connectAndPair;	// IMP=0x00000000000065e0
- (void)togglePlayPause;	// IMP=0x00000000000065a0
- (void)refreshPropertiesWithRoute:(id)arg1;	// IMP=0x0000000000006290
- (void)setMuted:(_Bool)arg1;	// IMP=0x00000000000061e0
- (void)setVolumeLevel:(id)arg1;	// IMP=0x00000000000060e0
- (id)deviceImage;	// IMP=0x0000000000005f50
- (_Bool)isDisconnected;	// IMP=0x0000000000005f10
- (_Bool)isConnecting;	// IMP=0x0000000000005ed0
- (_Bool)isConnected;	// IMP=0x0000000000005e90
- (_Bool)isPaired;	// IMP=0x0000000000005e50
@property(nonatomic) _Bool isCurrentDestination; // @dynamic isCurrentDestination;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000005cb0
- (id)initWithEndpointRoute:(id)arg1;	// IMP=0x00000000000055b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

