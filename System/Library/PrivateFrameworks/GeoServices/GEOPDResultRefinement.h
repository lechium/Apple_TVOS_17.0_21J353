//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDResultRefinementGuidesHome, GEOPDResultRefinementMultiSelect, GEOPDResultRefinementRange, GEOPDResultRefinementSort, GEOPDResultRefinementToggle, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinement : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDResultRefinementGuidesHome *_guidesHome;	// 24 = 0x18
    GEOPDResultRefinementMultiSelect *_multiSelect;	// 32 = 0x20
    GEOPDResultRefinementRange *_range;	// 40 = 0x28
    GEOPDResultRefinementSort *_sort;	// 48 = 0x30
    GEOPDResultRefinementToggle *_toggle;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _resultRefinementType;	// 76 = 0x4c
    struct {
        unsigned int has_resultRefinementType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_guidesHome:1;
        unsigned int read_multiSelect:1;
        unsigned int read_range:1;
        unsigned int read_sort:1;
        unsigned int read_toggle:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000dff97a
- (unsigned long long)hash;	// IMP=0x0000000000dff06c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000dfeee4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000dfec7d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000dfe7eb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000dfe7dc
- (id)jsonRepresentation;	// IMP=0x0000000000df9729
- (id)dictionaryRepresentation;	// IMP=0x0000000000df921c
- (id)description;	// IMP=0x0000000000df916d
- (id)initWithData:(id)arg1;	// IMP=0x0000000000df81da
- (id)init;	// IMP=0x0000000000df817e

@end

