//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAnnotatedItemListFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;	// 16 = 0x10
    unsigned long long _photoSizeFiltersCount;	// 24 = 0x18
    unsigned long long _photoSizeFiltersSpace;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b4e0ac
- (unsigned long long)hash;	// IMP=0x0000000000b4e081
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b4dfe8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b4df48
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b4de4a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b4de3d
- (id)jsonRepresentation;	// IMP=0x0000000000b4d87d
- (id)dictionaryRepresentation;	// IMP=0x0000000000b4d62a
- (id)description;	// IMP=0x0000000000b4d57b
- (void)dealloc;	// IMP=0x0000000000b4d3b3

@end
