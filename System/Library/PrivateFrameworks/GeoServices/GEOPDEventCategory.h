//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEventCategory : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_localizedCategorys;	// 16 = 0x10
    int _eventLookupCategory;	// 24 = 0x18
    struct {
        unsigned int has_eventLookupCategory:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000c3c476
- (unsigned long long)hash;	// IMP=0x0000000000c3c429
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c3c36e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c3c18e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3c00a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3bffb
- (id)jsonRepresentation;	// IMP=0x0000000000c3bc10
- (id)dictionaryRepresentation;	// IMP=0x0000000000c3b7e4
- (id)description;	// IMP=0x0000000000c3b735

@end

