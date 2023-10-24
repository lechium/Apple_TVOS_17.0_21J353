//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDBusinessHours, GEOPDEntity, GEOPDPhoto, GEOPDTrailHeadTrailFactoidData, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTrail : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDBusinessHours *_businessHours;	// 24 = 0x18
    GEOPDEntity *_entity;	// 32 = 0x20
    GEOPDTrailHeadTrailFactoidData *_factoid;	// 40 = 0x28
    NSMutableArray *_hoursOfOperations;	// 48 = 0x30
    NSMutableArray *_mapsIds;	// 56 = 0x38
    GEOPDPhoto *_photo;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    _Bool _shouldHighlight;	// 84 = 0x54
    struct {
        unsigned int has_shouldHighlight:1;
        unsigned int read_unknownFields:1;
        unsigned int read_businessHours:1;
        unsigned int read_entity:1;
        unsigned int read_factoid:1;
        unsigned int read_hoursOfOperations:1;
        unsigned int read_mapsIds:1;
        unsigned int read_photo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000d0b644
- (unsigned long long)hash;	// IMP=0x0000000000d0b54f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d0b392
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d0aed8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d0a8f3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d0a8e4
- (id)jsonRepresentation;	// IMP=0x0000000000d0a336
- (id)dictionaryRepresentation;	// IMP=0x0000000000d09a96
- (id)description;	// IMP=0x0000000000d099e7
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d08553
- (id)init;	// IMP=0x0000000000d084f7

@end
