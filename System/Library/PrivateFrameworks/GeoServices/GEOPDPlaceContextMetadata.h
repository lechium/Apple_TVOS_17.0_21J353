//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAutocompletePlaceContextMetadata, GEOPDSearchPlaceContextMetadata, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceContextMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAutocompletePlaceContextMetadata *_autocompletePlaceContextMetadata;	// 24 = 0x18
    unsigned long long _muid;	// 32 = 0x20
    GEOPDSearchPlaceContextMetadata *_searchPlaceContextMetadata;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _placeContextMetadataType;	// 60 = 0x3c
    struct {
        unsigned int has_muid:1;
        unsigned int has_placeContextMetadataType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_autocompletePlaceContextMetadata:1;
        unsigned int read_searchPlaceContextMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000cb23cc
- (unsigned long long)hash;	// IMP=0x0000000000cb20bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb1f93
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb1d92
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cb1b53
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cb1b44
- (id)jsonRepresentation;	// IMP=0x0000000000cae1fd
- (id)dictionaryRepresentation;	// IMP=0x0000000000cadd4f
- (id)description;	// IMP=0x0000000000cadca0
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cad475
- (id)init;	// IMP=0x0000000000cad419

@end

