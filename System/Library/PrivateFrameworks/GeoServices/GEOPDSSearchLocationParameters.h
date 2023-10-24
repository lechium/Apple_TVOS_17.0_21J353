//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSTransportHint, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchLocationParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDSTransportHint *_searchTransportHint;	// 16 = 0x10
    int _searchLocationParametersType;	// 24 = 0x18
    struct {
        unsigned int has_searchLocationParametersType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000006a9211
- (unsigned long long)hash;	// IMP=0x00000000006a909b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006a8fe0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006a8f38
- (void)writeTo:(id)arg1;	// IMP=0x00000000006a8eb7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006a8ea8
- (id)jsonRepresentation;	// IMP=0x00000000006a80c8
- (id)dictionaryRepresentation;	// IMP=0x00000000006a7e43
- (id)description;	// IMP=0x00000000006a7d94

@end
