//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationLinkGeneratorDescriptor, CSDMessagingHandle, NSData, NSMutableArray, NSString, NSUUID, TUConversationLink, TUConversationLinkDescriptor, TUHandle;

@interface CSDMessagingConversationLink : PBCodable
{
    double _creationDateEpochTime;	// 8 = 0x8
    double _pseudonymExpirationDateEpochTime;	// 16 = 0x10
    CSDMessagingConversationLinkGeneratorDescriptor *_generatorDescriptor;	// 24 = 0x18
    NSString *_groupUUIDString;	// 32 = 0x20
    NSMutableArray *_invitedHandles;	// 40 = 0x28
    int _linkLifetimeScope;	// 48 = 0x30
    NSString *_linkName;	// 56 = 0x38
    CSDMessagingHandle *_originatorHandle;	// 64 = 0x40
    NSData *_privateKey;	// 72 = 0x48
    NSString *_pseudonym;	// 80 = 0x50
    NSData *_publicKey;	// 88 = 0x58
    _Bool _isActivated;	// 96 = 0x60
    struct {
        unsigned int creationDateEpochTime:1;
        unsigned int pseudonymExpirationDateEpochTime:1;
        unsigned int linkLifetimeScope:1;
        unsigned int isActivated:1;
    } _has;	// 100 = 0x64
}

+ (Class)invitedHandlesType;	// IMP=0x00200000000065fc
+ (id)linkWithTUConversationLink:(id)arg1 includeGroupUUID:(_Bool)arg2;	// IMP=0x001000000000604b
- (void).cxx_destruct;	// IMP=0x0010000000008570
@property(retain, nonatomic) NSString *linkName; // @synthesize linkName=_linkName;
@property(retain, nonatomic) CSDMessagingConversationLinkGeneratorDescriptor *generatorDescriptor; // @synthesize generatorDescriptor=_generatorDescriptor;
@property(nonatomic) _Bool isActivated; // @synthesize isActivated=_isActivated;
@property(nonatomic) double pseudonymExpirationDateEpochTime; // @synthesize pseudonymExpirationDateEpochTime=_pseudonymExpirationDateEpochTime;
@property(retain, nonatomic) CSDMessagingHandle *originatorHandle; // @synthesize originatorHandle=_originatorHandle;
@property(retain, nonatomic) NSString *groupUUIDString; // @synthesize groupUUIDString=_groupUUIDString;
@property(nonatomic) double creationDateEpochTime; // @synthesize creationDateEpochTime=_creationDateEpochTime;
@property(retain, nonatomic) NSMutableArray *invitedHandles; // @synthesize invitedHandles=_invitedHandles;
@property(retain, nonatomic) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSString *pseudonym; // @synthesize pseudonym=_pseudonym;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000008133
- (unsigned long long)hash;	// IMP=0x0010000000007de9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000007b54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000077ba
- (void)copyTo:(id)arg1;	// IMP=0x00100000000075a0
- (void)writeTo:(id)arg1;	// IMP=0x0010000000007309
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000072fc
- (id)dictionaryRepresentation;	// IMP=0x0010000000006911
- (id)description;	// IMP=0x0010000000006862
- (int)StringAsLinkLifetimeScope:(id)arg1;	// IMP=0x00100000000067fd
- (id)linkLifetimeScopeAsString:(int)arg1;	// IMP=0x00100000000067a8
@property(nonatomic) _Bool hasLinkLifetimeScope;
@property(nonatomic) int linkLifetimeScope; // @synthesize linkLifetimeScope=_linkLifetimeScope;
@property(readonly, nonatomic) _Bool hasLinkName;
@property(readonly, nonatomic) _Bool hasGeneratorDescriptor;
@property(nonatomic) _Bool hasIsActivated;
@property(nonatomic) _Bool hasPseudonymExpirationDateEpochTime;
@property(readonly, nonatomic) _Bool hasOriginatorHandle;
@property(readonly, nonatomic) _Bool hasGroupUUIDString;
@property(nonatomic) _Bool hasCreationDateEpochTime;
- (id)invitedHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000065df
- (unsigned long long)invitedHandlesCount;	// IMP=0x00100000000065c2
- (void)addInvitedHandles:(id)arg1;	// IMP=0x0010000000006558
- (void)clearInvitedHandles;	// IMP=0x001000000000653b
@property(readonly, nonatomic) _Bool hasPrivateKey;
@property(readonly, nonatomic) _Bool hasPublicKey;
@property(readonly, nonatomic) _Bool hasPseudonym;
- (id)description;	// IMP=0x001000000000642e
@property(readonly, nonatomic) TUHandle *originatorTUHandle;
@property(readonly, nonatomic) NSUUID *groupUUID;
@property(readonly, nonatomic) TUConversationLinkDescriptor *tuConversationLinkDescriptor;
@property(readonly, nonatomic) TUConversationLink *tuConversationLink;

@end

