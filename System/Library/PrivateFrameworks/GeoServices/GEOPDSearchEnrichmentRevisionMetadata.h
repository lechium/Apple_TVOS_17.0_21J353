//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchEnrichmentRevisionMetadata : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _revisionType;	// 16 = 0x10
    struct {
        unsigned int has_revisionType:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000e24029
- (unsigned long long)hash;	// IMP=0x0000000000e23ffe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e23f6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e23eec
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e23e88
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e23e79
- (id)jsonRepresentation;	// IMP=0x0000000000e23813
- (id)dictionaryRepresentation;	// IMP=0x0000000000e2361c
- (id)description;	// IMP=0x0000000000e2356d

@end
