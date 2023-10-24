//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDResultRefinementRangeContinuous, GEOPDResultRefinementRangeDiscrete, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementRange : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    GEOPDResultRefinementRangeContinuous *_rangeContinuous;	// 32 = 0x20
    GEOPDResultRefinementRangeDiscrete *_rangeDiscrete;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _rangeType;	// 60 = 0x3c
    struct {
        unsigned int has_rangeType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayName:1;
        unsigned int read_rangeContinuous:1;
        unsigned int read_rangeDiscrete:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000e1620a
- (unsigned long long)hash;	// IMP=0x0000000000e15f98
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e15e68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e15c5b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e15a01
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e159f2
- (id)jsonRepresentation;	// IMP=0x0000000000e15304
- (id)dictionaryRepresentation;	// IMP=0x0000000000e14dc7
- (id)description;	// IMP=0x0000000000e14d18
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e144ee
- (id)init;	// IMP=0x0000000000e14492

@end

