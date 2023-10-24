//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuidesHomeFixedSection : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_browseByInterestFilters;	// 24 = 0x18
    NSMutableArray *_featuredGuideIds;	// 32 = 0x20
    NSMutableArray *_filteredGuideIds;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _sectionType;	// 68 = 0x44
    struct {
        unsigned int has_sectionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_browseByInterestFilters:1;
        unsigned int read_featuredGuideIds:1;
        unsigned int read_filteredGuideIds:1;
        unsigned int read_name:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000054a87d
- (unsigned long long)hash;	// IMP=0x0000000000549fbe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000549e62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000054992c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000549228
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000549219
- (id)jsonRepresentation;	// IMP=0x0000000000547ecd
- (id)dictionaryRepresentation;	// IMP=0x0000000000547682
- (id)description;	// IMP=0x00000000005475d3
- (id)initWithData:(id)arg1;	// IMP=0x000000000054629e
- (id)init;	// IMP=0x0000000000546242

@end

