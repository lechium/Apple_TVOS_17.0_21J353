//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOWaypointTyped, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitNearbyPaymentMethodLookupOrigin : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOWaypointTyped *_waypointTyped;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006492ab
- (unsigned long long)hash;	// IMP=0x000000000064928e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006491fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000649173
- (void)writeTo:(id)arg1;	// IMP=0x000000000064901c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000064900d
- (id)jsonRepresentation;	// IMP=0x0000000000648cca
- (id)dictionaryRepresentation;	// IMP=0x0000000000648ad7
- (id)description;	// IMP=0x0000000000648a28

@end
