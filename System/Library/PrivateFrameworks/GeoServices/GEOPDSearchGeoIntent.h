//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOMapRegion, GEOPDSearchTokenSet, GEOStructuredAddress, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchGeoIntent : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOStructuredAddress *_address;	// 16 = 0x10
    GEOLatLng *_center;	// 24 = 0x18
    NSString *_countryCode;	// 32 = 0x20
    GEOMapRegion *_displayMapRegion;	// 40 = 0x28
    NSString *_displayName;	// 48 = 0x30
    NSString *_doorNumber;	// 56 = 0x38
    long long _geoId;	// 64 = 0x40
    GEOMapRegion *_mapRegion;	// 72 = 0x48
    NSString *_name;	// 80 = 0x50
    GEOPDSearchTokenSet *_tokenSet;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    int _geoTypeId;	// 108 = 0x6c
    struct {
        unsigned int has_geoId:1;
        unsigned int has_geoTypeId:1;
        unsigned int read_address:1;
        unsigned int read_center:1;
        unsigned int read_countryCode:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_displayName:1;
        unsigned int read_doorNumber:1;
        unsigned int read_mapRegion:1;
        unsigned int read_name:1;
        unsigned int read_tokenSet:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000aaa095
- (unsigned long long)hash;	// IMP=0x0000000000aa9f29
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aa9cc2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aa9998
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aa968c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aa967d
- (id)jsonRepresentation;	// IMP=0x0000000000aa93ff
- (id)dictionaryRepresentation;	// IMP=0x0000000000aa8b4a
- (id)description;	// IMP=0x0000000000aa8a9b
- (id)initWithData:(id)arg1;	// IMP=0x0000000000aa7bed
- (id)init;	// IMP=0x0000000000aa7b91

@end
