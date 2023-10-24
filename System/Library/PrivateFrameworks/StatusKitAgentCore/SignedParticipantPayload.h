//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class DecryptedParticipantPayload, NSData;

__attribute__((visibility("hidden")))
@interface SignedParticipantPayload : PBCodable
{
    DecryptedParticipantPayload *_payload;	// 8 = 0x8
    NSData *_signature;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000057a7b
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) DecryptedParticipantPayload *payload; // @synthesize payload=_payload;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000579b8
- (unsigned long long)hash;	// IMP=0x000000000005796b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000578b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000057815
- (void)copyTo:(id)arg1;	// IMP=0x00000000000577b2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000057755
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000057748
- (id)dictionaryRepresentation;	// IMP=0x00000000000574d1
- (id)description;	// IMP=0x0000000000057422
@property(readonly, nonatomic) _Bool hasSignature;
@property(readonly, nonatomic) _Bool hasPayload;

@end
