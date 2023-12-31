//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPBTransitArtwork, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitScheduleCategory : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _groupIndexs;	// 24 = 0x18
    GEOPBTransitArtwork *_artwork;	// 48 = 0x30
    NSString *_displayName;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_groupIndexs:1;
        unsigned int read_artwork:1;
        unsigned int read_displayName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x0000000000d25f9b
- (unsigned long long)hash;	// IMP=0x0000000000d25f26
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d25e36
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d25c75
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d25a7c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d25a6d
- (id)jsonRepresentation;	// IMP=0x0000000000d2595d
- (id)dictionaryRepresentation;	// IMP=0x0000000000d256d7
- (id)description;	// IMP=0x0000000000d25628
- (void)dealloc;	// IMP=0x0000000000d24a1c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d249c0
- (id)init;	// IMP=0x0000000000d24964

@end

