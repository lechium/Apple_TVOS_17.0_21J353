//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBOuterMessage : PBCodable <NSCopying>
{
    NSData *_encryptedPayload;	// 8 = 0x8
    NSData *_ephemeralPubKey;	// 16 = 0x10
    NSData *_keyValidator;	// 24 = 0x18
    NSData *_secondaryMessage;	// 32 = 0x20
    NSData *_signature;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001a4bb
@property(retain, nonatomic) NSData *keyValidator; // @synthesize keyValidator=_keyValidator;
@property(retain, nonatomic) NSData *secondaryMessage; // @synthesize secondaryMessage=_secondaryMessage;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSData *ephemeralPubKey; // @synthesize ephemeralPubKey=_ephemeralPubKey;
@property(retain, nonatomic) NSData *encryptedPayload; // @synthesize encryptedPayload=_encryptedPayload;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001a33f
- (unsigned long long)hash;	// IMP=0x000000000001a2a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a168
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a050
- (void)copyTo:(id)arg1;	// IMP=0x0000000000019f8d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000019ed9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000019ecc
- (id)dictionaryRepresentation;	// IMP=0x0000000000019bf4
- (id)description;	// IMP=0x0000000000019b45
@property(readonly, nonatomic) _Bool hasKeyValidator;
@property(readonly, nonatomic) _Bool hasSecondaryMessage;
@property(readonly, nonatomic) _Bool hasSignature;
@property(readonly, nonatomic) _Bool hasEphemeralPubKey;
@property(readonly, nonatomic) _Bool hasEncryptedPayload;

@end

