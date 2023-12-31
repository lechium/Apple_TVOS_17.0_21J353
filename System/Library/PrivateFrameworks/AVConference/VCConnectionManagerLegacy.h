//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol VCConnectionProtocol;

__attribute__((visibility("hidden")))
@interface VCConnectionManagerLegacy
{
    id <VCConnectionProtocol> _pendingPrimaryConnection;	// 832 = 0x340
    id <VCConnectionProtocol> _pendingSecondaryConnection;	// 840 = 0x348
    NSString *_relayConnectionID;	// 848 = 0x350
}

@property(copy, nonatomic) NSString *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(retain, nonatomic) id <VCConnectionProtocol> pendingSecondaryConnection; // @synthesize pendingSecondaryConnection=_pendingSecondaryConnection;
@property(retain, nonatomic) id <VCConnectionProtocol> pendingPrimaryConnection; // @synthesize pendingPrimaryConnection=_pendingPrimaryConnection;
- (void)updateNegotiatedSettingsOnetoOne:(id)arg1;	// IMP=0x00000000001414c3
- (void)updateAllBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000001414bd
- (void)updateOneToOneBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000001414b7
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x00000000001414b1
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x00000000001414ab
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000001414a5
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x000000000014149f
- (void)reportLinkProbingStatsWithDuplicationJustStarted:(_Bool)arg1;	// IMP=0x0000000000141499
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x0000000000141491
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x0000000000141489
- (void)updateSessionStats:(unsigned short)arg1;	// IMP=0x0000000000141483
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x000000000014134d
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x000000000014123e
- (void)updateCellularMTU:(int)arg1;	// IMP=0x000000000014117f
- (id)getSecondaryConnectionToBeCompared;	// IMP=0x0000000000141147
- (id)getPrimaryConnectionToBeCompared;	// IMP=0x000000000014110f
- (int)updateStateWithCurrentConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3 demote:(int *)arg4 replaceOnly:(int *)arg5;	// IMP=0x0000000000140fb8
- (_Bool)shouldNominateConnection:(id)arg1;	// IMP=0x0000000000140f42
- (int)nominateConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;	// IMP=0x0000000000140eb4
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;	// IMP=0x0000000000140863
- (int)removeConnectionWithIPPortInternal:(struct tagIPPORT *)arg1 isLocalInterface:(_Bool)arg2;	// IMP=0x0000000000140309
- (int)removeConnectionWithIPPort:(struct tagIPPORT *)arg1 isLocalInterface:(_Bool)arg2;	// IMP=0x00000000001402b7
- (int)removeConnection:(id)arg1;	// IMP=0x0000000000140228
- (int)addConnection:(id)arg1;	// IMP=0x000000000013f666
- (int)shouldNominateCandidatePairInternal:(struct tagCANDIDATEPAIR *)arg1 interfaceMask:(int)arg2 nominated:(int *)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;	// IMP=0x000000000013f0fb
- (int)shouldNominateCandidatePair:(struct tagCANDIDATEPAIR *)arg1 interfaceMask:(int)arg2 nominated:(int *)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;	// IMP=0x000000000013f083
- (void)dealloc;	// IMP=0x000000000013effa
- (id)init;	// IMP=0x000000000013efa8
- (void)setUpVTable;	// IMP=0x000000000013edf6

@end

