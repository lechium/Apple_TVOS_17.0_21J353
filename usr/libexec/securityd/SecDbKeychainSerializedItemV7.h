//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SecDbKeychainSerializedItemV7 : PBCodable
{
    NSData *_encryptedMetadata;	// 8 = 0x8
    NSData *_encryptedSecretData;	// 16 = 0x10
    int _keyclass;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000196921
@property(nonatomic) int keyclass; // @synthesize keyclass=_keyclass;
@property(retain, nonatomic) NSData *encryptedMetadata; // @synthesize encryptedMetadata=_encryptedMetadata;
@property(retain, nonatomic) NSData *encryptedSecretData; // @synthesize encryptedSecretData=_encryptedSecretData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000196846
- (unsigned long long)hash;	// IMP=0x00100000001967e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019671a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019666e
- (void)copyTo:(id)arg1;	// IMP=0x00100000001965ef
- (void)writeTo:(id)arg1;	// IMP=0x0000000000196579
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000196384
- (id)dictionaryRepresentation;	// IMP=0x0010000000196294
- (id)description;	// IMP=0x00100000001961e5
- (int)StringAsKeyclass:(id)arg1;	// IMP=0x00100000001960c5
- (id)keyclassAsString:(int)arg1;	// IMP=0x001000000019607a

@end
