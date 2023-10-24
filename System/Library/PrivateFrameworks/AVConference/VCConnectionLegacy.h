//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface VCConnectionLegacy
{
    unsigned int _type;	// 224 = 0xe0
    _Bool _waitToBeNominated;	// 228 = 0xe4
    struct tagCONNRESULT *_connectionResult;	// 232 = 0xe8
    _Bool isLocalDelegated;	// 240 = 0xf0
    _Bool isRemoteDelegated;	// 241 = 0xf1
    _Bool isVirtualRelayLink;	// 242 = 0xf2
    _Bool isLocalOn5G;	// 243 = 0xf3
    _Bool isRemoteOn5G;	// 244 = 0xf4
    unsigned short _relayChannelNumber;	// 246 = 0xf6
    int maxConnectionMTU;	// 248 = 0xf8
}

@property(readonly) unsigned short relayChannelNumber; // @synthesize relayChannelNumber=_relayChannelNumber;
@property(readonly) _Bool isRemoteOn5G; // @synthesize isRemoteOn5G;
@property(readonly) _Bool isLocalOn5G; // @synthesize isLocalOn5G;
@property int maxConnectionMTU; // @synthesize maxConnectionMTU;
@property(readonly) _Bool isVirtualRelayLink; // @synthesize isVirtualRelayLink;
@property(readonly) _Bool isRemoteDelegated; // @synthesize isRemoteDelegated;
@property(readonly) _Bool isLocalDelegated; // @synthesize isLocalDelegated;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property(readonly) struct tagCONNRESULT *connectionResult; // @synthesize connectionResult=_connectionResult;
@property _Bool waitToBeNominated; // @synthesize waitToBeNominated=_waitToBeNominated;
@property(readonly) NSString *remoteInterfaceTypeString;
@property(readonly) NSString *localInterfaceTypeString;
@property unsigned int uplinkBitrateCapOneToOne;
@property unsigned int uplinkAudioBitrateCapOneToOne;
@property unsigned int uplinkBitrateCap;
@property unsigned int downlinkBitrateCap;
@property(readonly) NSString *localInterfaceName;
@property(readonly) NSUUID *connectionUUID;
@property int connectionMTU;
- (int)cellularMTU;	// IMP=0x00000000001129df
@property(readonly) int remoteConnectionType;
@property(readonly) int localConnectionType;
@property(readonly) _Bool isReplaceOnly;
@property(readonly) _Bool isUpgraded;
@property(readonly) _Bool serverIsDegraded;
@property(readonly) _Bool isVPN;
- (unsigned short)updateMaxConnectionMTU:(unsigned short)arg1;	// IMP=0x000000000011291b
@property(readonly, copy) NSString *description;
@property(readonly) _Bool isWifiToWifi;
- (_Bool)isOnSameIPPortWithConnection:(id)arg1;	// IMP=0x00000000001120f2
- (_Bool)isLocalIPPort:(struct tagIPPORT *)arg1;	// IMP=0x0000000000111b6d
- (void)dealloc;	// IMP=0x0000000000111b04
- (id)copy;	// IMP=0x0000000000111a74
- (id)initWithCandidatePair:(struct tagCANDIDATEPAIR *)arg1;	// IMP=0x0000000000111952
- (id)initWithConnectionResult:(struct tagCONNRESULT *)arg1 type:(unsigned int)arg2;	// IMP=0x00000000001117b1
- (void)setUpVTable;	// IMP=0x0000000000110abf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
