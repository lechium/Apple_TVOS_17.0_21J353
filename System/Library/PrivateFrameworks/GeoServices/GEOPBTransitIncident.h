//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPBTransitArtwork, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitIncident : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_affectedEntitys;	// 24 = 0x18
    unsigned long long _incidentMuid;	// 32 = 0x20
    GEOPBTransitArtwork *_incidentTypeArtwork;	// 40 = 0x28
    NSString *_longDescriptionString;	// 48 = 0x30
    NSString *_messageForAllBlocking;	// 56 = 0x38
    NSString *_messageForIncidentType;	// 64 = 0x40
    NSString *_messageString;	// 72 = 0x48
    NSString *_shortDescriptionString;	// 80 = 0x50
    NSString *_titleString;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    unsigned int _creationDatetime;	// 108 = 0x6c
    unsigned int _endDatetime;	// 112 = 0x70
    int _iconEnum;	// 116 = 0x74
    unsigned int _incidentIndex;	// 120 = 0x78
    unsigned int _startDatetime;	// 124 = 0x7c
    unsigned int _updatedDatetime;	// 128 = 0x80
    _Bool _blocking;	// 132 = 0x84
    struct {
        unsigned int has_incidentMuid:1;
        unsigned int has_creationDatetime:1;
        unsigned int has_endDatetime:1;
        unsigned int has_iconEnum:1;
        unsigned int has_incidentIndex:1;
        unsigned int has_startDatetime:1;
        unsigned int has_updatedDatetime:1;
        unsigned int has_blocking:1;
        unsigned int read_unknownFields:1;
        unsigned int read_affectedEntitys:1;
        unsigned int read_incidentTypeArtwork:1;
        unsigned int read_longDescriptionString:1;
        unsigned int read_messageForAllBlocking:1;
        unsigned int read_messageForIncidentType:1;
        unsigned int read_messageString:1;
        unsigned int read_shortDescriptionString:1;
        unsigned int read_titleString:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000e3f59b
- (unsigned long long)hash;	// IMP=0x0000000000e3f1a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e3ee5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e3e965
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e3e4b7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e3e4a8
- (id)jsonRepresentation;	// IMP=0x0000000000e3c595
- (id)dictionaryRepresentation;	// IMP=0x0000000000e3bbff
- (id)description;	// IMP=0x0000000000e3bb50
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e39d84
- (id)init;	// IMP=0x0000000000e39d28

@end

