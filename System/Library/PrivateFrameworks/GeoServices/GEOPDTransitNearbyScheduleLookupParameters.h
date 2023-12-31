//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOWaypointTyped, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitNearbyScheduleLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_transitNearbyScheduleLookupOrigins;	// 24 = 0x18
    GEOWaypointTyped *_userLocation;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_transitNearbyScheduleLookupOrigins:1;
        unsigned int read_userLocation:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000064bdb4
- (unsigned long long)hash;	// IMP=0x000000000064bd5d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000064bc8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000064b999
- (void)writeTo:(id)arg1;	// IMP=0x000000000064b6ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000064b6de
- (id)jsonRepresentation;	// IMP=0x000000000064b5ce
- (id)dictionaryRepresentation;	// IMP=0x000000000064b19c
- (id)description;	// IMP=0x000000000064b0ed
- (id)initWithData:(id)arg1;	// IMP=0x000000000064a60a
- (id)init;	// IMP=0x000000000064a5ae

@end

