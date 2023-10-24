//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOPDBasemapRegionMetadata, GEOTimezone, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    double _area;	// 24 = 0x18
    GEOPDBasemapRegionMetadata *_basemapRegionMetadata;	// 32 = 0x20
    GEOLatLng *_center;	// 40 = 0x28
    GEOLatLng *_enhancedCenter;	// 48 = 0x30
    GEOLatLng *_labelPoint;	// 56 = 0x38
    GEOTimezone *_timezone;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    int _knownAccuracy;	// 84 = 0x54
    _Bool _isApproximateCenter;	// 88 = 0x58
    struct {
        unsigned int has_area:1;
        unsigned int has_knownAccuracy:1;
        unsigned int has_isApproximateCenter:1;
        unsigned int read_unknownFields:1;
        unsigned int read_basemapRegionMetadata:1;
        unsigned int read_center:1;
        unsigned int read_enhancedCenter:1;
        unsigned int read_labelPoint:1;
        unsigned int read_timezone:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

+ (id)placeInfoForPlaceData:(id)arg1;	// IMP=0x0010000000a36872
- (void).cxx_destruct;	// IMP=0x0000000000cb4d2f
- (unsigned long long)hash;	// IMP=0x0000000000cb4b47
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb4944
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb4695
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cb4423
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cb4414
- (id)jsonRepresentation;	// IMP=0x0000000000cb3b29
- (id)dictionaryRepresentation;	// IMP=0x0000000000cb3547
- (id)description;	// IMP=0x0000000000cb3498
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cb247b
- (id)init;	// IMP=0x0000000000cb241f

@end

