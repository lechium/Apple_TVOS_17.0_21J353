//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPlaceSearchResponse, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOETAResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_etaRouteIncidents;	// 24 = 0x18
    GEOPlaceSearchResponse *_placeSearchResponse;	// 32 = 0x20
    NSMutableArray *_sortedETAs;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    unsigned int _distance;	// 60 = 0x3c
    unsigned int _historicTravelTime;	// 64 = 0x40
    unsigned int _liveTravelTime;	// 68 = 0x44
    int _status;	// 72 = 0x48
    struct {
        unsigned int has_distance:1;
        unsigned int has_historicTravelTime:1;
        unsigned int has_liveTravelTime:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_etaRouteIncidents:1;
        unsigned int read_placeSearchResponse:1;
        unsigned int read_sortedETAs:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x000000000144d69a
- (unsigned long long)hash;	// IMP=0x000000000144d592
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000144d3dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000144cf58
- (void)writeTo:(id)arg1;	// IMP=0x000000000144c9a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000144c998
- (id)jsonRepresentation;	// IMP=0x000000000144b834
- (id)dictionaryRepresentation;	// IMP=0x000000000144afff
- (id)description;	// IMP=0x000000000144af50
- (id)initWithData:(id)arg1;	// IMP=0x0000000001449d34
- (id)init;	// IMP=0x0000000001449cd8

@end

