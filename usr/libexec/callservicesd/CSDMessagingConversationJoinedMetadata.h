//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationParticipant, NSString;

@interface CSDMessagingConversationJoinedMetadata : PBCodable
{
    NSString *_audioRouteUniqueIdentifier;	// 8 = 0x8
    CSDMessagingConversationParticipant *_sender;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000004efa7
@property(retain, nonatomic) NSString *audioRouteUniqueIdentifier; // @synthesize audioRouteUniqueIdentifier=_audioRouteUniqueIdentifier;
@property(retain, nonatomic) CSDMessagingConversationParticipant *sender; // @synthesize sender=_sender;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004eeb4
- (unsigned long long)hash;	// IMP=0x001000000004ee35
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004ed52
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004ec8f
- (void)copyTo:(id)arg1;	// IMP=0x001000000004ec0c
- (void)writeTo:(id)arg1;	// IMP=0x001000000004eb89
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004eb7c
- (id)dictionaryRepresentation;	// IMP=0x001000000004e807
- (id)description;	// IMP=0x001000000004e758
@property(readonly, nonatomic) _Bool hasAudioRouteUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasSender;
@property(nonatomic) _Bool hasVersion;

@end

