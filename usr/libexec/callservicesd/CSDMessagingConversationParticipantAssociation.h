//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TUConversationParticipantAssociation;

@interface CSDMessagingConversationParticipantAssociation : PBCodable
{
    unsigned long long _identifier;	// 8 = 0x8
    NSString *_avcIdentifier;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    struct {
        unsigned int identifier:1;
        unsigned int version:1;
    } _has;	// 28 = 0x1c
}

+ (id)participantAssociationWithTUConversationParticipantAssociation:(id)arg1;	// IMP=0x00100000000bab16
- (void).cxx_destruct;	// IMP=0x0010000000003cf0
@property(retain, nonatomic) NSString *avcIdentifier; // @synthesize avcIdentifier=_avcIdentifier;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000003c29
- (unsigned long long)hash;	// IMP=0x0010000000003bc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000003ae6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000003a33
- (void)copyTo:(id)arg1;	// IMP=0x00100000000039b2
- (void)writeTo:(id)arg1;	// IMP=0x0010000000003922
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000003915
- (id)dictionaryRepresentation;	// IMP=0x001000000000357d
- (id)description;	// IMP=0x00100000000034ce
@property(readonly, nonatomic) _Bool hasAvcIdentifier;
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasVersion;
@property(readonly, copy, nonatomic) TUConversationParticipantAssociation *tuConversationParticipantAssociation;

@end

