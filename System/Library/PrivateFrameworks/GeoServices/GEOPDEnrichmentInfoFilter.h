//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEnrichmentInfoFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c28fef
- (unsigned long long)hash;	// IMP=0x0000000000c28fe7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c28fa4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c28f47
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c28f2a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c28f1d
- (id)jsonRepresentation;	// IMP=0x0000000000c28e0d
- (id)dictionaryRepresentation;	// IMP=0x0000000000c28ca3
- (id)description;	// IMP=0x0000000000c28bf4

@end

