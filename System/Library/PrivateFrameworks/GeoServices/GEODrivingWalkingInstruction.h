//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOFormattedString, GEOPBTransitArtwork, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEODrivingWalkingInstruction : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPBTransitArtwork *_artwork;	// 24 = 0x18
    NSMutableArray *_continueCommands;	// 32 = 0x20
    NSMutableArray *_mergeCommands;	// 40 = 0x28
    NSMutableArray *_normalCommands;	// 48 = 0x30
    GEOFormattedString *_title;	// 56 = 0x38
    GEOFormattedString *_waypointInfo;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_artwork:1;
        unsigned int read_continueCommands:1;
        unsigned int read_mergeCommands:1;
        unsigned int read_normalCommands:1;
        unsigned int read_title:1;
        unsigned int read_waypointInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

- (void).cxx_destruct;	// IMP=0x000000000089bc8f
- (unsigned long long)hash;	// IMP=0x000000000089b4d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000089b359
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000089ae00
- (void)writeTo:(id)arg1;	// IMP=0x000000000089a5b3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000089a5a4
- (id)jsonRepresentation;	// IMP=0x00000000008998ce
- (id)dictionaryRepresentation;	// IMP=0x0000000000898e70
- (id)description;	// IMP=0x0000000000898dc1
- (id)initWithData:(id)arg1;	// IMP=0x000000000089783c
- (id)init;	// IMP=0x00000000008977e0

@end

