//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQueryUnderstandingTaxonomyLookupParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_identifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000615209
- (unsigned long long)hash;	// IMP=0x00000000006151ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000061515c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000614f9f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000614e40
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000614e33
- (id)jsonRepresentation;	// IMP=0x0000000000614d23
- (id)dictionaryRepresentation;	// IMP=0x0000000000614b92
- (id)description;	// IMP=0x0000000000614ae3

@end

