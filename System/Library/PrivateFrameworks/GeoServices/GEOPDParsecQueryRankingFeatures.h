//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDParsecQueryRankingFeatures : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _geoScore;	// 16 = 0x10
    double _poiScore;	// 24 = 0x18
    struct {
        unsigned int has_geoScore:1;
        unsigned int has_poiScore:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000068df7f
- (unsigned long long)hash;	// IMP=0x000000000068dd07
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000068dc48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000068dba3
- (void)writeTo:(id)arg1;	// IMP=0x000000000068db11
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000068db02
- (id)jsonRepresentation;	// IMP=0x000000000068d46c
- (id)dictionaryRepresentation;	// IMP=0x000000000068d228
- (id)description;	// IMP=0x000000000068d179

@end

