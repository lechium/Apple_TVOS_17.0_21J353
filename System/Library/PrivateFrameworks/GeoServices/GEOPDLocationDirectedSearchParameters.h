//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOPDNearestTransitParameters, GEOPDViewportInfo, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationDirectedSearchParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDNearestTransitParameters *_nearestTransitParameters;	// 24 = 0x18
    GEOLatLng *_searchLocation;	// 32 = 0x20
    NSString *_searchString;	// 40 = 0x28
    GEOPDViewportInfo *_viewportInfo;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    unsigned int _maxResults;	// 68 = 0x44
    int _searchType;	// 72 = 0x48
    int _sortOrder;	// 76 = 0x4c
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_searchType:1;
        unsigned int has_sortOrder:1;
        unsigned int read_unknownFields:1;
        unsigned int read_nearestTransitParameters:1;
        unsigned int read_searchLocation:1;
        unsigned int read_searchString:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000560c76
- (unsigned long long)hash;	// IMP=0x0000000000560b6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005609b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000560737
- (void)writeTo:(id)arg1;	// IMP=0x0000000000560470
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000560461
- (id)jsonRepresentation;	// IMP=0x000000000055fdd8
- (id)dictionaryRepresentation;	// IMP=0x000000000055f849
- (id)description;	// IMP=0x000000000055f79a
- (id)initWithData:(id)arg1;	// IMP=0x000000000055e885
- (id)init;	// IMP=0x000000000055e829
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;	// IMP=0x000000000137fea7

@end

