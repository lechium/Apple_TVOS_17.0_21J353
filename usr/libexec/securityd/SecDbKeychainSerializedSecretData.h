//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SecDbKeychainSerializedSecretData : PBCodable
{
    NSData *_ciphertext;	// 8 = 0x8
    NSString *_tamperCheck;	// 16 = 0x10
    NSData *_wrappedKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000171df6
@property(retain, nonatomic) NSString *tamperCheck; // @synthesize tamperCheck=_tamperCheck;
@property(retain, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
@property(retain, nonatomic) NSData *ciphertext; // @synthesize ciphertext=_ciphertext;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000171d04
- (unsigned long long)hash;	// IMP=0x0010000000171c97
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000171bb7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000171af3
- (void)copyTo:(id)arg1;	// IMP=0x0010000000171a6a
- (void)writeTo:(id)arg1;	// IMP=0x00100000001719f3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000171867
- (id)dictionaryRepresentation;	// IMP=0x00100000001717bd
- (id)description;	// IMP=0x001000000017170e

@end

