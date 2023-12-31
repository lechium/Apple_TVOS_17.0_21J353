//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionsOptions : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSData *_suggestionEntryMetadata;	// 24 = 0x18
    NSData *_suggestionMetadata;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _entriesType;	// 52 = 0x34
    int _listType;	// 56 = 0x38
    _Bool _includeRankingFeatures;	// 60 = 0x3c
    _Bool _normalizePOIs;	// 61 = 0x3d
    struct {
        unsigned int has_entriesType:1;
        unsigned int has_listType:1;
        unsigned int has_includeRankingFeatures:1;
        unsigned int has_normalizePOIs:1;
        unsigned int read_unknownFields:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_suggestionMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000001000e46
- (unsigned long long)hash;	// IMP=0x0000000001000d51
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001000bb8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000100097b
- (void)writeTo:(id)arg1;	// IMP=0x000000000100074a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000100073b
- (id)jsonRepresentation;	// IMP=0x000000000100062b
- (id)dictionaryRepresentation;	// IMP=0x00000000010000b1
- (id)description;	// IMP=0x0000000001000002
- (id)initWithData:(id)arg1;	// IMP=0x0000000000fff6b0
- (id)init;	// IMP=0x0000000000fff654

@end

