//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsIdentifierPlaceLookupResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005671e1
- (unsigned long long)hash;	// IMP=0x00000000005671d9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000567196
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000567139
- (void)writeTo:(id)arg1;	// IMP=0x000000000056711c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000056710f
- (id)jsonRepresentation;	// IMP=0x0000000000566e53
- (id)dictionaryRepresentation;	// IMP=0x0000000000566ce9
- (id)description;	// IMP=0x0000000000566c3a

@end
