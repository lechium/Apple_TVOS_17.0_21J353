//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDGeographicCoordinate, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDViewportFrame : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDGeographicCoordinate *_targetPoint;	// 16 = 0x10
    float _distance;	// 24 = 0x18
    float _heading;	// 28 = 0x1c
    float _pitch;	// 32 = 0x20
    struct {
        unsigned int has_distance:1;
        unsigned int has_heading:1;
        unsigned int has_pitch:1;
    } _flags;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000d335ed
- (unsigned long long)hash;	// IMP=0x0000000000d332ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d3319f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d330ad
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d32fdc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d32fcd
- (id)jsonRepresentation;	// IMP=0x0000000000d32ebd
- (id)dictionaryRepresentation;	// IMP=0x0000000000d32bb0
- (id)description;	// IMP=0x0000000000d32b01

@end

