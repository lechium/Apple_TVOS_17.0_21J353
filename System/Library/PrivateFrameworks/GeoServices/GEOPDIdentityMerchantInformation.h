//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIdentityMerchantInformation : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_rpIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000557bfd
- (unsigned long long)hash;	// IMP=0x0000000000557be0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000557b50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000557ac5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000557a6a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000557a5d
- (id)jsonRepresentation;	// IMP=0x0000000000557541
- (id)dictionaryRepresentation;	// IMP=0x00000000005573a2
- (id)description;	// IMP=0x00000000005572f3

@end
