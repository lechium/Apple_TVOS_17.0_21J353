//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_categorys;	// 24 = 0x18
    NSMutableArray *_zeroKeywordEntrys;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_zeroKeywordEntrys:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000063db7c
- (unsigned long long)hash;	// IMP=0x000000000063db25
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063da53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000063d67e
- (void)writeTo:(id)arg1;	// IMP=0x000000000063d312
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000063d303
- (id)jsonRepresentation;	// IMP=0x000000000063cd33
- (id)dictionaryRepresentation;	// IMP=0x000000000063c7b1
- (id)description;	// IMP=0x000000000063c702
- (id)initWithData:(id)arg1;	// IMP=0x000000000063bbd1
- (id)init;	// IMP=0x000000000063bb75

@end
