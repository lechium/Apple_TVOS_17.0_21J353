//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialLookupFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000ced7b2
- (unsigned long long)hash;	// IMP=0x0000000000ced7aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ced767
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ced70a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ced6ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ced6e0
- (id)jsonRepresentation;	// IMP=0x0000000000ced5d0
- (id)dictionaryRepresentation;	// IMP=0x0000000000ced466
- (id)description;	// IMP=0x0000000000ced3b7

@end
