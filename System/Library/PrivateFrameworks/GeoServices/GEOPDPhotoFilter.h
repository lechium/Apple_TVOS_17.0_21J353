//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPhotoFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;	// 16 = 0x10
    unsigned long long _photoSizeFiltersCount;	// 24 = 0x18
    unsigned long long _photoSizeFiltersSpace;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c8e637
- (unsigned long long)hash;	// IMP=0x0000000000c8e60c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c8e573
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c8e4d3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c8e41b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c8e40e
- (id)jsonRepresentation;	// IMP=0x0000000000c8e2fe
- (id)dictionaryRepresentation;	// IMP=0x0000000000c8e0ab
- (id)description;	// IMP=0x0000000000c8dffc
- (void)dealloc;	// IMP=0x0000000000c8de34

@end

