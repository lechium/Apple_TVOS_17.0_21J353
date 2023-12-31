//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAllCollectionsViewResultFilterTypeAddress, GEOPDAllCollectionsViewResultFilterTypeKeyword, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllCollectionsViewResultFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAllCollectionsViewResultFilterTypeAddress *_filterAddress;	// 24 = 0x18
    GEOPDAllCollectionsViewResultFilterTypeKeyword *_filterKeyword;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _filterType;	// 52 = 0x34
    CDStruct_85060554 _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004d4f09
- (unsigned long long)hash;	// IMP=0x00000000004d4e7f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d4d7e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d4b9a
- (void)writeTo:(id)arg1;	// IMP=0x00000000004d49d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004d49c1
- (id)jsonRepresentation;	// IMP=0x00000000004d3ff2
- (id)dictionaryRepresentation;	// IMP=0x00000000004d3ce9
- (id)description;	// IMP=0x00000000004d3c3a
- (id)initWithData:(id)arg1;	// IMP=0x00000000004d3238
- (id)init;	// IMP=0x00000000004d31dc

@end

