//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBLegacyKey : PBCodable <NSCopying>
{
    NSData *_encryptionKey;	// 8 = 0x8
    NSData *_signingKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000017ff4
@property(retain, nonatomic) NSData *signingKey; // @synthesize signingKey=_signingKey;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000017f47
- (unsigned long long)hash;	// IMP=0x0000000000017efa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017e42
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000017da4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000017d33
- (void)writeTo:(id)arg1;	// IMP=0x0000000000017cc5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000017cb8
- (id)dictionaryRepresentation;	// IMP=0x0000000000017acb
- (id)description;	// IMP=0x0000000000017a1c

@end
