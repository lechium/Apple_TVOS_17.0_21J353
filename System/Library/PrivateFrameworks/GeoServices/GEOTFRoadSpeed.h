//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTFRoadSpeed : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_5df41632 _geoIds;	// 16 = 0x10
    CDStruct_fae3dc92 _latitudeCoordinates;	// 40 = 0x28
    CDStruct_fae3dc92 _longitudeCoordinates;	// 64 = 0x40
    long long _geoid;	// 88 = 0x58
    NSData *_openlr;	// 96 = 0x60
    NSMutableArray *_predictedSpeeds;	// 104 = 0x68
    NSData *_zilch;	// 112 = 0x70
    unsigned int _readerMarkPos;	// 120 = 0x78
    unsigned int _readerMarkLength;	// 124 = 0x7c
    struct os_unfair_lock_s _readerLock;	// 128 = 0x80
    int _color;	// 132 = 0x84
    float _confidence;	// 136 = 0x88
    unsigned int _decayTimeWindowInMinutes;	// 140 = 0x8c
    float _endOffset;	// 144 = 0x90
    unsigned int _speedKph;	// 148 = 0x94
    float _startOffset;	// 152 = 0x98
    _Bool _hidden;	// 156 = 0x9c
    struct {
        unsigned int has_color:1;
        unsigned int has_confidence:1;
        unsigned int has_decayTimeWindowInMinutes:1;
        unsigned int has_endOffset:1;
        unsigned int has_speedKph:1;
        unsigned int has_startOffset:1;
        unsigned int has_hidden:1;
        unsigned int read_geoIds:1;
        unsigned int read_latitudeCoordinates:1;
        unsigned int read_longitudeCoordinates:1;
        unsigned int read_openlr:1;
        unsigned int read_predictedSpeeds:1;
        unsigned int read_zilch:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000032aa63
- (unsigned long long)hash;	// IMP=0x000000000032a5e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032a319
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000329ec5
- (void)writeTo:(id)arg1;	// IMP=0x00000000003299f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003299e7
- (id)jsonRepresentation;	// IMP=0x0000000000329769
- (id)dictionaryRepresentation;	// IMP=0x0000000000328e34
- (id)description;	// IMP=0x0000000000328d85
- (void)dealloc;	// IMP=0x00000000003279b0
- (id)initWithData:(id)arg1;	// IMP=0x0000000000327954
- (id)init;	// IMP=0x00000000003278f8

@end

