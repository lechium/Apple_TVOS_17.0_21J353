//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface IDSGroupMasterKeyMaterialCache : NSObject
{
    unsigned int _numberOfBroadcastCacheMKM;	// 8 = 0x8
    id _firstLocalMasterKeyMaterial;	// 16 = 0x10
    id _currentLocalMasterKeyMaterial;	// 24 = 0x18
    id _nextLocalMasterKeyMaterial;	// 32 = 0x20
    double _automaticResetInterval;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    CDUnknownBlockType _automaticResetBlock;	// 64 = 0x40
    CDUnknownBlockType _inFlightResetBlock;	// 72 = 0x48
    NSSet *_masterKeyMaterials;	// 80 = 0x50
    NSSet *_membershipURIs;	// 88 = 0x58
    NSSet *_masterKeyIdentifiersReceivedByClient;	// 96 = 0x60
    NSMutableDictionary *_remoteParticipantIDToKeyMaterial;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000013dbe8
@property(copy, nonatomic) NSMutableDictionary *remoteParticipantIDToKeyMaterial; // @synthesize remoteParticipantIDToKeyMaterial=_remoteParticipantIDToKeyMaterial;
@property(copy, nonatomic) NSSet *masterKeyIdentifiersReceivedByClient; // @synthesize masterKeyIdentifiersReceivedByClient=_masterKeyIdentifiersReceivedByClient;
@property(copy, nonatomic) NSSet *membershipURIs; // @synthesize membershipURIs=_membershipURIs;
@property(copy, nonatomic) NSSet *masterKeyMaterials; // @synthesize masterKeyMaterials=_masterKeyMaterials;
@property(copy, nonatomic) CDUnknownBlockType inFlightResetBlock; // @synthesize inFlightResetBlock=_inFlightResetBlock;
@property(copy, nonatomic) CDUnknownBlockType automaticResetBlock; // @synthesize automaticResetBlock=_automaticResetBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int numberOfBroadcastCacheMKM; // @synthesize numberOfBroadcastCacheMKM=_numberOfBroadcastCacheMKM;
@property(nonatomic) double automaticResetInterval; // @synthesize automaticResetInterval=_automaticResetInterval;
@property(retain, nonatomic) id nextLocalMasterKeyMaterial; // @synthesize nextLocalMasterKeyMaterial=_nextLocalMasterKeyMaterial;
@property(retain, nonatomic) id currentLocalMasterKeyMaterial; // @synthesize currentLocalMasterKeyMaterial=_currentLocalMasterKeyMaterial;
@property(retain, nonatomic) id firstLocalMasterKeyMaterial; // @synthesize firstLocalMasterKeyMaterial=_firstLocalMasterKeyMaterial;
- (id)debugDescription;	// IMP=0x001000000013d9a4
- (id)description;	// IMP=0x001000000013d869
- (void)updateLastRatchetedKeyMaterial:(id)arg1 forRemoteParticipant:(unsigned long long)arg2;	// IMP=0x001000000013d7cc
- (void)noteReceivedFirstKeyMaterial:(id)arg1 forRemoteParticipant:(unsigned long long)arg2;	// IMP=0x001000000013d5b9
- (void)resetClientMasterKeyIdentifierReceipts;	// IMP=0x001000000013d580
- (_Bool)hasClientReceivedMasterKeyIdentifier:(id)arg1;	// IMP=0x001000000013d50a
- (void)noteClientReceiptOfMasterKeyIdentifier:(id)arg1;	// IMP=0x001000000013d46a
- (void)_startAutomaticCacheResetTimerIfNeeded;	// IMP=0x001000000013d097
- (_Bool)hasCachedMasterKeyIdentifier:(id)arg1;	// IMP=0x001000000013cdc3
- (id)remoteMasterKeyMaterialCollectionToSend;	// IMP=0x001000000013ccc2
- (id)cachedMasterKeyMaterialCollection;	// IMP=0x001000000013cb2b
- (id)_groupMasterKeyCollectionToBroadcastForDestinationURI:(id)arg1 shouldIncludePeerKeys:(_Bool)arg2;	// IMP=0x001000000013c668
- (id)localMasterKeyCollectionToBroadcastForDestinationURI:(id)arg1;	// IMP=0x001000000013c654
- (id)groupMasterKeyCollectionToBroadcastForDestinationURI:(id)arg1;	// IMP=0x001000000013c63d
- (id)sampleMkMCollectionToBroadcast:(id)arg1;	// IMP=0x001000000013c4e0
- (void)noteReceivedGroupMasterKeyMaterialCollection:(id)arg1;	// IMP=0x001000000013bb86
- (void)cleanUpMasterKeyMaterialUsingPredicate:(id)arg1;	// IMP=0x001000000013baf0
- (void)resetRemoteMasterKeyMaterialCacheAndCancelResetInterval;	// IMP=0x001000000013ba0c
- (void)resetCacheWithNewMembershipURIs:(id)arg1;	// IMP=0x001000000013b8d3
- (id)initWithIdentifier:(id)arg1 initialMembershipURIs:(id)arg2 automaticResetInterval:(double)arg3 automaticResetBlock:(CDUnknownBlockType)arg4 queue:(id)arg5;	// IMP=0x001000000013b4d7
- (id)initWithIdentifier:(id)arg1 initialMembershipURIs:(id)arg2 automaticResetBlock:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x001000000013b4ba

@end

