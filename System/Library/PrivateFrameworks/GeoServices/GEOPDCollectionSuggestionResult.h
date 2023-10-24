//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDExploreGuides, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCollectionSuggestionResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_collectionIds;	// 24 = 0x18
    GEOPDExploreGuides *_exploreGuidesMetadata;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_collectionIds:1;
        unsigned int read_exploreGuidesMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000053a9ef
- (unsigned long long)hash;	// IMP=0x000000000053a7fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000053a72b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000053a439
- (void)writeTo:(id)arg1;	// IMP=0x0000000000539fc5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000539fb6
- (id)jsonRepresentation;	// IMP=0x0000000000539798
- (id)dictionaryRepresentation;	// IMP=0x0000000000539366
- (id)description;	// IMP=0x00000000005392b7
- (id)initWithData:(id)arg1;	// IMP=0x000000000053873b
- (id)init;	// IMP=0x00000000005386df

@end

