//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPlaceIdentifier : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOLatLng *_center;	// 16 = 0x10
    unsigned long long _muid;	// 24 = 0x18
    CDStruct_26a2534e _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001199d2e
- (unsigned long long)hash;	// IMP=0x0000000001199c8e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001199bd2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001199b29
- (void)writeTo:(id)arg1;	// IMP=0x0000000001199aa8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001199a99
- (id)jsonRepresentation;	// IMP=0x00000000011992f8
- (id)dictionaryRepresentation;	// IMP=0x00000000011990bd
- (id)description;	// IMP=0x000000000119900e

@end
