//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface IDSProtoKeyTransparencyTrustedServiceSignatures : PBCodable
{
    NSMutableArray *_serviceSignatures;	// 8 = 0x8
}

+ (Class)serviceSignaturesType;	// IMP=0x00200000002806bc
- (void).cxx_destruct;	// IMP=0x002000000028113a
@property(retain, nonatomic) NSMutableArray *serviceSignatures; // @synthesize serviceSignatures=_serviceSignatures;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000280fdc
- (unsigned long long)hash;	// IMP=0x0010000000280fbf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000280f2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000280d6b
- (void)copyTo:(id)arg1;	// IMP=0x0010000000280ca6
- (void)writeTo:(id)arg1;	// IMP=0x0010000000280b70
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000280b63
- (id)dictionaryRepresentation;	// IMP=0x001000000028077c
- (id)description;	// IMP=0x00100000002806cd
- (id)serviceSignaturesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000028069f
- (unsigned long long)serviceSignaturesCount;	// IMP=0x0010000000280682
- (void)addServiceSignatures:(id)arg1;	// IMP=0x0010000000280618
- (void)clearServiceSignatures;	// IMP=0x00100000002805fb

@end
