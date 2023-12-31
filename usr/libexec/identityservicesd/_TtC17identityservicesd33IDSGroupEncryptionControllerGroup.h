//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSEndpointSubscription, IDSGroupEncryptionKeyMaterial, MISSING_TYPE, NSSet, NSString;

@interface _TtC17identityservicesd33IDSGroupEncryptionControllerGroup : NSObject
{
    MISSING_TYPE *id;	// 8 = 0x8
    MISSING_TYPE *l;	// 0 = 0x0
    MISSING_TYPE *stateLogger;	// 0 = 0x0
    MISSING_TYPE *q;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *lock;	// 1852339301 = 0x6e687465
    MISSING_TYPE *delegate;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *config;	// 0 = 0x0
    MISSING_TYPE *identityController;	// 5229332 = 0x4fcb14
    MISSING_TYPE *pushHandler;	// 396199 = 0x60ba7
    MISSING_TYPE *sessionProvider;	// 5229332 = 0x4fcb14
    MISSING_TYPE *cryptoHandler;	// 0 = 0x0
    MISSING_TYPE *sessionsByID;	// 2 = 0x2
    MISSING_TYPE *participantsByID;	// 1127183211 = 0x432f736b
    MISSING_TYPE *participantsByPushToken;	// 1634887214 = 0x6172662e
    MISSING_TYPE *formerlyActiveParticipantsByID;	// 1952806252 = 0x7465756c
    MISSING_TYPE *membersByURI;	// 1835102790 = 0x6d617246
    MISSING_TYPE *preKeyAckCount;	// 0 = 0x0
    MISSING_TYPE *localParticipantID;	// 1935892319 = 0x73635f5f
    MISSING_TYPE *endpointSubscription;	// 103 = 0x67
    MISSING_TYPE *encryptionSequenceNumber;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *logStateLock;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000004a33f0
- (id)init;	// IMP=0x00100000004a3390
- (void)cleanUpSessionForID:(id)arg1;	// IMP=0x00100000004a1c70
- (id)ensureSessionForID:(id)arg1;	// IMP=0x00100000004a1b90
- (void)resetKeySentToAVC;	// IMP=0x00100000004a16e0
- (void)updateDesiredMaterials;	// IMP=0x00100000004a1510
- (void)resetKeys;	// IMP=0x00100000004a1130
- (id)receiveSKMWithKeyMaterialDictionary:(id)arg1 fromPushToken:(id)arg2 fromID:(id)arg3 sessionID:(id)arg4 isFromSender:(_Bool)arg5;	// IMP=0x001000000049ceb0
- (id)receiveMKMWithKeyMaterialDictionary:(id)arg1 fromPushToken:(id)arg2 fromID:(id)arg3 sessionID:(id)arg4 isFromSender:(_Bool)arg5;	// IMP=0x001000000049ce30
- (void)removeAllParticipants;	// IMP=0x001000000049cd20
- (void)removeParticipantForToken:(id)arg1;	// IMP=0x001000000049cbe0
- (void)removeParticipant:(id)arg1;	// IMP=0x001000000049cab0
- (id)ensureParticipant:(id)arg1;	// IMP=0x001000000049c690
- (void)updateParticipants:(id)arg1 lightweight:(_Bool)arg2;	// IMP=0x001000000049b830
- (id)participantIDsForURIs:(id)arg1;	// IMP=0x0010000000499e40
- (id)participantForID:(unsigned long long)arg1;	// IMP=0x0010000000499800
- (id)participantForToken:(id)arg1;	// IMP=0x00100000004996c0
- (id)participantsForMember:(id)arg1;	// IMP=0x0010000000499550
- (id)participantsForURI:(id)arg1;	// IMP=0x0010000000499430
- (id)memberForParticipant:(id)arg1;	// IMP=0x0010000000499300
- (id)memberForURI:(id)arg1;	// IMP=0x00100000004991e0
- (void)updateMembersWithURIs:(id)arg1;	// IMP=0x0010000000498ae0
- (void)removeAllMembers;	// IMP=0x0010000000497940
@property(nonatomic, readonly) IDSGroupEncryptionKeyMaterial *stableKeyMaterial;
@property(nonatomic, readonly) IDSGroupEncryptionKeyMaterial *mediaKeyMaterial;
@property(nonatomic, readonly) NSSet *lightweightParticipantPushTokens;
@property(nonatomic, readonly) NSSet *standardParticipantPushTokens;
@property(nonatomic, readonly) NSSet *participantPushTokens;
@property(nonatomic, readonly) NSSet *lightweightParticipants;
@property(nonatomic, readonly) NSSet *standardParticipants;
@property(nonatomic, readonly) NSSet *participants;
@property(nonatomic, readonly) NSSet *allMembers;
@property(nonatomic, readonly) NSSet *memberURIs;
@property(nonatomic) unsigned long long encryptionSequenceNumber; // @synthesize encryptionSequenceNumber;
@property(nonatomic, retain) IDSEndpointSubscription *endpointSubscription; // @synthesize endpointSubscription;
@property(nonatomic) unsigned long long localParticipantID; // @synthesize localParticipantID;
@property(nonatomic) unsigned long long preKeyAckCount; // @synthesize preKeyAckCount;
@property(nonatomic, readonly) NSString *id;

@end

